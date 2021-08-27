#include <Windows.h>
#include <stdio.h>

DWORD	GObjObjects_offset		= 0x1AF29F8;
DWORD	Names_offset			= 0x1B04A98;
DWORD	Offset_Name				= 0x2C;

template < class T > struct TArray 
{
	T*		Data;
	DWORD	Num;
	DWORD	Max;
};

struct UObject
{
	UCHAR	Unknown		[ 0x2C ];	// unknowed data
	DWORD	NameIndex;				// struct FName
};

struct FNameEntry
{
	UCHAR	Unknown		[ 0x10 ];	// unknowed data
	wchar_t	Name		[ 1 ];		// name
};

// Objects and Names arrays
TArray< UObject* >*		GObjObjects = ( TArray< UObject* >* )		GObjObjects_offset;		// global objects
TArray< FNameEntry* >*	Names		= ( TArray< FNameEntry* >* )	Names_offset;			// global names

// funcs
PWCHAR GetName ( UObject* Object )
{
	DWORD NameIndex	= *(PDWORD) ( (DWORD) Object + Offset_Name );

	//DWORD NameIndexFix = NameIndex * 3;
	
	if ( NameIndex < 0 || NameIndex > Names->Num )
	{
		static wchar_t ret[256];
		swprintf_s( ret, L"INVALID NAME INDEX : %i > %i", NameIndex, Names->Num );
		return ret;
	}
	else
	{
		//return Names->Data[ NameIndexFix ]->Name;
		//char szOutput[256];
		//wcstombs( szOutput, Names->Data[ NameIndex ]->Name, 256 );
		return Names->Data[ NameIndex ]->Name;
	}
}

void ObjectDump()
{
	// log file
	FILE* Log = NULL;	
	fopen_s ( &Log, "ObjectDump.txt", "w+" );
	
	for ( DWORD i = 0x0; i < GObjObjects->Num; i++ )
	{
		// check if it's a valid object
		if ( ! GObjObjects->Data[ i ] ) { continue; }
		
		// log the object
		fprintf ( Log, "UObject[%06i] %-50ls 0x%X\n", i, GetName ( GObjObjects->Data[ i ] ), GObjObjects->Data[ i ] );
	}

	// close log
	fclose ( Log );
}

void NameDump()
{
	// log file
	FILE* Log = NULL;	
	fopen_s ( &Log, "NameDump.txt", "w+" );
	
	//for ( DWORD i = 0x0; i < Names->Num; i += 0x3 )
	for ( DWORD i = 0x0; i < Names->Num; i++ )
	{
		// check if it's a valid object
		if ( ! Names->Data[ i ] ) { continue; }
		
		// log the object
		fprintf ( Log, "Name[%06i] %ls\n", i, Names->Data[ i ]->Name );
	}

	// close log
	fclose ( Log );
}

void onAttach()
{	
	//Sleep ( 60000 );

	NameDump();
	ObjectDump();
}

// entry point
BOOL WINAPI DllMain ( HMODULE hModule, DWORD dwReason, LPVOID lpReserved )
{
	switch ( dwReason )
	{
		case DLL_PROCESS_ATTACH:
			DisableThreadLibraryCalls ( hModule );
			CreateThread ( NULL, 0, ( LPTHREAD_START_ROUTINE ) onAttach, NULL, 0, NULL );
			return true;
		break;

		case DLL_PROCESS_DETACH:
			return true;
		break;
	}
}