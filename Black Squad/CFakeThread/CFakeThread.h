
#include <windows.h>
#include <tchar.h>
#include <ImageHlp.h>

#pragma comment(lib,"Dbghelp.lib")


/**
 * 改变线程入口点,
 * 让ARK工具扫描的线程入口点都在ntdll
 */
class CFakeThread
{

public:
	CFakeThread();
	~CFakeThread();

	//
	//创建线程,改变线程入口点
	//
	HANDLE CreateFakeThread(LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter);

	//
	//跳板程序
	//
	static
		DWORD __stdcall FakeThreadRoutine(LPVOID lpParameter);
private:
	BOOL _isInit;
	PVOID _jumpAddress;
	PUCHAR _jumpOpcode;
	ULONG _jumpOpcodeSize;
};