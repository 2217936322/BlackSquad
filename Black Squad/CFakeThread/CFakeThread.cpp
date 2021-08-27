
#include "CFakeThread.h"


/**
 * 用于调用真实线程
 */
typedef DWORD(__stdcall *fnFakeThreadCaller)(LPVOID lpParameter);

/**
 * 用于释放自旋锁
 */
typedef struct FakeThreadParam
{
	fnFakeThreadCaller pfnFakeThreadCaller;
	LPVOID lpParameter;
}FakeThreadParam, *PFakeThreadParam;

/**
 * 自旋锁维护变量
 */
volatile
LONG g_spinLock;

/**
 * 初始化自旋锁
 */
VOID InitializeSpinLock()
{
	_InterlockedExchange(&g_spinLock, 0);
}

/**
 * 获取自旋锁
 */
VOID AcquireSpinLock()
{
	while (_InterlockedCompareExchange(&g_spinLock, 1, 0) != 0)
	{
		Sleep(1);
	}
}

/**
 * 测试自旋锁状态
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
 * 释放自旋锁
 */
VOID ReleaseSpinLock()
{
	_InterlockedExchange(&g_spinLock, 0);
}


/**
 * 构造函数，用于初始化变量
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
	// 初始化自旋锁，因为fake线程每次只允许一个线程同时创建
	//
	InitializeSpinLock();

	//
	//定位到ntdll 的代码区段
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
	//搜索ntdll 间隙代码 90
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
	//先搜CC 间隙代码
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
	//如果CC搜不到的话就搜 90
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
 * 析构函数
 */
CFakeThread::~CFakeThread()
{
	if (_jumpOpcode != NULL)
	{
		free(_jumpOpcode);
	}
}

/**
 * 线程创建完成，需要释放自旋锁
 */
DWORD __stdcall CFakeThread::FakeThreadRoutine(LPVOID lpParameter)
{
	PFakeThreadParam fakeThreadParam = (PFakeThreadParam)lpParameter;
	fnFakeThreadCaller pfnRealFakeThreadCaller;
	LPVOID lpRealParameter;

	pfnRealFakeThreadCaller = fakeThreadParam->pfnFakeThreadCaller;
	lpRealParameter = fakeThreadParam->lpParameter;

	//
	//释放自旋锁
	//
	ReleaseSpinLock();

	//
	//调用真实线程
	//
	
	return pfnRealFakeThreadCaller(lpRealParameter);
}

/**
 * 创建线程
 */
HANDLE CFakeThread::CreateFakeThread(LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter)
{
	//
	//初始化都没有成功，直接返回
	//
	if (!_isInit)
	{
		return NULL;
	}

	//
	//进入关键区域
	//
	AcquireSpinLock();

	//
	//组合Shellcode
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
	//等待自旋锁释放
	//
	while (!TryAcquireSpinLock())
	{
		Sleep(1);
	}

	return threadHandle;

}