
#include "CFakeThread.h"


/**
 * ���ڵ�����ʵ�߳�
 */
typedef DWORD(__stdcall *fnFakeThreadCaller)(LPVOID lpParameter);

/**
 * �����ͷ�������
 */
typedef struct FakeThreadParam
{
	fnFakeThreadCaller pfnFakeThreadCaller;
	LPVOID lpParameter;
}FakeThreadParam, *PFakeThreadParam;

/**
 * ������ά������
 */
volatile
LONG g_spinLock;

/**
 * ��ʼ��������
 */
VOID InitializeSpinLock()
{
	_InterlockedExchange(&g_spinLock, 0);
}

/**
 * ��ȡ������
 */
VOID AcquireSpinLock()
{
	while (_InterlockedCompareExchange(&g_spinLock, 1, 0) != 0)
	{
		Sleep(1);
	}
}

/**
 * ����������״̬
 */
BOOL TryAcquireSpinLock()
{
	if (g_spinLock == 1)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

/**
 * �ͷ�������
 */
VOID ReleaseSpinLock()
{
	_InterlockedExchange(&g_spinLock, 0);
}


/**
 * ���캯�������ڳ�ʼ������
 */
CFakeThread::CFakeThread()
{
	PIMAGE_DOS_HEADER dosHeadPtr = NULL;
	PIMAGE_NT_HEADERS ntHeadPtr = NULL;
	PIMAGE_SECTION_HEADER secHeadPtr = NULL;

	_isInit = FALSE;
	_jumpAddress = 0;
	_jumpOpcode = NULL;
	_jumpOpcodeSize = 0;

	//
	// ��ʼ������������Ϊfake�߳�ÿ��ֻ����һ���߳�ͬʱ����
	//
	InitializeSpinLock();

	//
	//��λ��ntdll �Ĵ�������
	//
	dosHeadPtr = reinterpret_cast<PIMAGE_DOS_HEADER>(GetModuleHandle(_T("ntdll.dll")));
	if (dosHeadPtr->e_magic != IMAGE_DOS_SIGNATURE)
	{
		return;
	}

	ntHeadPtr = ImageNtHeader(dosHeadPtr);
	if (ntHeadPtr->Signature != IMAGE_NT_SIGNATURE)
	{
		return;
	}

	secHeadPtr = IMAGE_FIRST_SECTION(ntHeadPtr);

	for (int Index = 0; Index < ntHeadPtr->FileHeader.NumberOfSections; Index++)
	{
		if (_stricmp((const char*)secHeadPtr->Name, ".text") == 0)
		{
			break;
		}
		secHeadPtr++;
	}

	//
	//����ntdll ��϶���� 90
	//

#ifdef _WIN64
	//
	// 00000000FF0CB794 | 48:B8 1111111111111101       | mov rax,111111111111111
	// 00000000FF0CB79E | FFE0                         | jmp rax
	//
	_jumpOpcodeSize = 12;
#else
	// 
	// 013D1343 | B8 11111111   |  mov eax, 0x11111111
	// 013D1348 | FFE0          |  jmp eax;
	//
	_jumpOpcodeSize = 7;
#endif

	UCHAR *ntdllCodeStart;
	ULONG ntdllCodeEnd;

	ntdllCodeStart = (UCHAR*)(secHeadPtr->VirtualAddress + (ULONG_PTR)dosHeadPtr);
	ntdllCodeEnd = secHeadPtr->SizeOfRawData;
	_jumpOpcode = reinterpret_cast<PUCHAR>(calloc(1, _jumpOpcodeSize));

	UCHAR *searchStart = ntdllCodeStart;
	//
	//����CC ��϶����
	//
	memset(_jumpOpcode, 0xCC, _jumpOpcodeSize);

	for (ULONG i = 0; i <= (ntdllCodeEnd - _jumpOpcodeSize); i++)
	{
		if (memcmp(searchStart, _jumpOpcode, _jumpOpcodeSize) == 0)
		{
			_isInit = TRUE;
			_jumpAddress = (PVOID)searchStart;
			break;
		}
		searchStart++;
	}

	//
	//���CC�Ѳ����Ļ����� 90
	//
	if (!_isInit)
	{
		searchStart = ntdllCodeStart;
		memset(_jumpOpcode, 0x90, _jumpOpcodeSize);

		for (ULONG i = 0; i <= (ntdllCodeEnd - _jumpOpcodeSize); i++)
		{
			if (memcmp(searchStart, _jumpOpcode, _jumpOpcodeSize) == 0)
			{
				_isInit = TRUE;
				_jumpAddress = (PVOID)searchStart;
				break;
			}
			searchStart++;
		}

	}
	
	if (_isInit)
	{
#ifdef _WIN64
		_jumpOpcode[0] = 0x48; // mov rax,xxxxxxxxxx
		_jumpOpcode[1] = 0xB8;

		_jumpOpcode[10] = 0xFF; // jmp rax
		_jumpOpcode[11] = 0xE0;
#else
		_jumpOpcode[0] = 0xB8; // mov eax,xxxxxxxxxx

		_jumpOpcode[5] = 0xFF; // jmp eax
		_jumpOpcode[6] = 0xE0;
#endif
	}
}

/**
 * ��������
 */
CFakeThread::~CFakeThread()
{
	if (_jumpOpcode != NULL)
	{
		free(_jumpOpcode);
	}
}

/**
 * �̴߳�����ɣ���Ҫ�ͷ�������
 */
DWORD __stdcall CFakeThread::FakeThreadRoutine(LPVOID lpParameter)
{
	PFakeThreadParam fakeThreadParam = (PFakeThreadParam)lpParameter;
	fnFakeThreadCaller pfnRealFakeThreadCaller;
	LPVOID lpRealParameter;

	pfnRealFakeThreadCaller = fakeThreadParam->pfnFakeThreadCaller;
	lpRealParameter = fakeThreadParam->lpParameter;

	//
	//�ͷ�������
	//
	ReleaseSpinLock();

	//
	//������ʵ�߳�
	//
	
	return pfnRealFakeThreadCaller(lpRealParameter);
}

/**
 * �����߳�
 */
HANDLE CFakeThread::CreateFakeThread(LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter)
{
	//
	//��ʼ����û�гɹ���ֱ�ӷ���
	//
	if (!_isInit)
	{
		return NULL;
	}

	//
	//����ؼ�����
	//
	AcquireSpinLock();

	//
	//���Shellcode
	//
	PVOID myFakeRoutine = CFakeThread::FakeThreadRoutine;
	FakeThreadParam param = { 0 };
	HANDLE threadHandle = NULL;

	param.pfnFakeThreadCaller = lpStartAddress;
	param.lpParameter = lpParameter;

#ifdef _WIN64
	memcpy(&_jumpOpcode[2], &myFakeRoutine, sizeof(PVOID));
#else
	memcpy(&_jumpOpcode[1], &myFakeRoutine, sizeof(PVOID));
#endif
	
	if (!WriteProcessMemory(GetCurrentProcess(), _jumpAddress, _jumpOpcode, _jumpOpcodeSize, NULL))
	{
		ReleaseSpinLock();
		return NULL;
	}

	threadHandle = ::CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)_jumpAddress, &param, NULL, NULL);
	
	//
	//�ȴ��������ͷ�
	//
	while (!TryAcquireSpinLock())
	{
		Sleep(1);
	}

	return threadHandle;

}