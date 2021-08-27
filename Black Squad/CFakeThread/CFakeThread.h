
#include <windows.h>
#include <tchar.h>
#include <ImageHlp.h>

#pragma comment(lib,"Dbghelp.lib")


/**
 * �ı��߳���ڵ�,
 * ��ARK����ɨ����߳���ڵ㶼��ntdll
 */
class CFakeThread
{

public:
	CFakeThread();
	~CFakeThread();

	//
	//�����߳�,�ı��߳���ڵ�
	//
	HANDLE CreateFakeThread(LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter);

	//
	//�������
	//
	static
		DWORD __stdcall FakeThreadRoutine(LPVOID lpParameter);
private:
	BOOL _isInit;
	PVOID _jumpAddress;
	PUCHAR _jumpOpcode;
	ULONG _jumpOpcodeSize;
};