/*
#############################################################################################
# Game: All Points Bulletin	Reloaded														#
# Version: 1.6																				#
# ========================================================================================= #
# File: PiecesOfCode.h																		#
#############################################################################################
*/

#define BASIC_STRUCTS "\
template< class T > struct TArray \n\
{ \n\
public: \n\
	T* Data; \n\
	int Count; \n\
	int Max; \n\
\n\
public: \n\
	TArray() \n\
	{ \n\
		Data = NULL; \n\
		Count = Max = 0; \n\
	}; \n\
\n\
public: \n\
	int Num() \n\
	{ \n\
		return this->Count; \n\
	}; \n\
\n\
	T& operator() ( int i ) \n\
	{ \n\
		return this->Data[ i ]; \n\
	}; \n\
\n\
	const T& operator() ( int i ) const \n\
	{ \n\
		return this->Data[ i ]; \n\
	}; \n\
\n\
	void Add ( T InputData ) \n\
	{ \n\
		Data = (T*) realloc ( Data, sizeof ( T ) * ( Count + 1 ) ); \n\
		Data[ Count++ ] = InputData; \n\
		Max = Count; \n\
	}; \n\
\n\
	void Clear() \n\
	{ \n\
		free ( Data ); \n\
		Count = Max = 0; \n\
	}; \n\
\n\
	inline T GetIndex(int i) const \n\
	{ \n\
		T Addr = (T)((unsigned long)Data[i] ^ i); \n\
		return Addr; \n\
	} \n\
}; \n\
\n\
struct FNameEntry \n\
{ \n\
	unsigned char	UnknownData[ 16 ]; \n\
	wchar_t			Name[ 1 ]; \n\
}; \n\
\n\
struct FName \n\
{ \n\
	int				Index; \n\
	unsigned char	unknownData[ 0x4 ]; \n\
\n\
	FName() : Index ( 0 ) {}; \n\
\n\
	FName ( int i ) : Index ( i ) {}; \n\
\n\
	~FName() {}; \n\
\n\
	FName ( wchar_t* FindName ) \n\
	{ \n\
		static TArray< int > NameCache; \n\
\n\
		for ( int i = 0; i < NameCache.Count; ++i ) \n\
		{ \n\
		if ( ! wcscmp ( this->Names()->Data[ NameCache ( i ) ]->Name, FindName ) ) \n\
			{ \n\
				Index = NameCache ( i ); \n\
				return; \n\
			} \n\
		} \n\
\n\
		for ( int i = 0; i < this->Names()->Count; ++i ) \n\
		{ \n\
			if ( this->Names()->Data[ i ] ) \n\
			{ \n\
				if ( ! wcscmp ( this->Names()->Data[ i ]->Name, FindName ) ) \n\
				{ \n\
					NameCache.Add ( i ); \n\
					Index = i; \n\
				} \n\
			} \n\
		} \n\
	}; \n\
\n\
	static TArray< FNameEntry* >* Names() \n\
	{ \n\
		return (TArray< FNameEntry* >*) GNames; \n\
	}; \n\
\n\
	wchar_t* GetName() \n\
	{ \n\
		return this->Names()->Data[ Index ]->Name; \n\
	}; \n\
\n\
	bool operator == ( const FName& A ) const \n\
	{ \n\
		return ( Index == A.Index ); \n\
	}; \n\
}; \n\
\n\
struct FString : public TArray< wchar_t > \n\
{ \n\
	FString() {}; \n\
	~FString() {}; \n\
\n\
	FString ( wchar_t* Other ) \n\
	{ \n\
		this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; \n\
\n\
		if ( this->Count ) \n\
			this->Data = Other; \n\
	}; \n\
\n\
	FString(const wchar_t* other) \n\
	{ \n\
		this->Max = this->Count = *other ? std::wcslen(other) + 1 : 0; \n\
		if (this->Count) \n\
		{ \n\
			this->Data = const_cast<wchar_t*>(other); \n\
		} \n\
	}; \n\
\n\
	FString operator = ( wchar_t* Other ) \n\
	{ \n\
		if ( this->Data != Other ) \n\
		{ \n\
			this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; \n\
\n\
			if ( this->Count ) \n\
				this->Data = Other; \n\
		} \n\
\n\
		return *this; \n\
	}; \n\
\n\
	inline bool IsValid() const \n\
	{ \n\
		return Data != nullptr; \n\
	} \n\
\n\
	inline const wchar_t* c_str() const \n\
	{ \n\
		return Data; \n\
	} \n\
\n\
	std::string ToString() const \n\
	{ \n\
		auto length = std::wcslen(Data); \n\
		std::string str(length, '\0'); \n\
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]); \n\
		return str; \n\
	} \n\
}; \n\
\n\
struct FScriptDelegate \n\
{ \n\
	unsigned char UnknownData[ 0xC ]; \n\
}; \n"

#define BASIC_FUNCTIONS_DEC "\
	static TArray< UObject* >* GObjObjects(); \n\
\n\
	char* GetName(); \n\
	char* GetNameCPP(); \n\
	char* GetFullName(); \n\
\n\
	template< class T > static T* FindObject ( char* ObjectFullName ); \n\
	static UClass* FindClass ( char* ClassFullName ); \n\
\n\
	bool IsA ( UClass* pClass ); \n\n"

#define BASIC_FUNCTIONS_DEF "\
TArray< UObject* >* UObject::GObjObjects() \n\
{ \n\
	TArray< UObject* >* ObjectArray = (TArray< UObject* >*) GObjects; \n\
	return ObjectArray; \n\
} \n\
\n\
char* UObject::GetName() \n\
{ \n\
	static char cOutBuffer[ 256 ]; \n\
\n\
	sprintf_s ( cOutBuffer, \"%%S\", this->Name.GetName() ); \n\
\n\
	return cOutBuffer; \n\
} \n\
\n\
char* UObject::GetNameCPP() \n\
{ \n\
	static char cOutBuffer[ 256 ]; \n\
\n\
	if ( this->IsA ( UClass::StaticClass() ) ) \n\
	{ \n\
		UClass* pClass = (UClass*) this; \n\
		while ( pClass ) \n\
		{ \n\
			if ( ! strcmp ( pClass->GetName(), \"Actor\" ) ) \n\
			{ \n\
				strcpy_s ( cOutBuffer, \"A\" ); \n\
				break; \n\
			} \n\
			else if ( ! strcmp ( pClass->GetName(), \"Object\" ) ) \n\
			{ \n\
				strcpy_s ( cOutBuffer, \"U\" ); \n\
				break; \n\
			} \n\
\n\
			pClass = (UClass*) pClass->SuperField; \n\
		} \n\
	} \n\
	else \n\
	{ \n\
		strcpy_s ( cOutBuffer, \"F\" ); \n\
	} \n\
\n\
	strcat_s ( cOutBuffer, this->GetName() ); \n\
\n\
	return cOutBuffer; \n\
} \n\
\n\
char* UObject::GetFullName() \n\
{ \n\
	if ( this->Class && this->Outer ) \n\
	{ \n\
		static char cOutBuffer[ 256 ]; \n\
\n\
		if ( this->Outer->Outer ) \n\
		{ \n\
			strcpy_s ( cOutBuffer, this->Class->GetName() ); \n\
			strcat_s ( cOutBuffer, \" \" ); \n\
			strcat_s ( cOutBuffer, this->Outer->Outer->GetName() ); \n\
			strcat_s ( cOutBuffer, \".\" ); \n\
			strcat_s ( cOutBuffer, this->Outer->GetName() ); \n\
			strcat_s ( cOutBuffer, \".\" ); \n\
			strcat_s ( cOutBuffer, this->GetName() ); \n\
		} \n\
		else \n\
		{ \n\
			strcpy_s ( cOutBuffer, this->Class->GetName() ); \n\
			strcat_s ( cOutBuffer, \" \" ); \n\
			strcat_s ( cOutBuffer, this->Outer->GetName() ); \n\
			strcat_s ( cOutBuffer, \".\" ); \n\
			strcat_s ( cOutBuffer, this->GetName() ); \n\
		} \n\
\n\
		return cOutBuffer; \n\
	} \n\
\n\
	return \"(null)\"; \n\
} \n\
\n\
template< class T > T* UObject::FindObject ( char* ObjectFullName ) \n\
{ \n\
	while ( ! UObject::GObjObjects() ) \n\
		Sleep ( 10 ); \n\
\n\
	while ( ! FName::Names() ) \n\
		Sleep( 10 ); \n\
\n\
	for ( int i = 0; i < UObject::GObjObjects()->Count; ++i ) \n\
	{ \n\
		UObject* Object = UObject::GObjObjects()->Data[ i ]; \n\
\n\
		// skip no T class objects \n\
		if \n\
		( \n\
				! Object \n\
			||	! Object->IsA ( T::StaticClass() ) \n\
		) \n\
			continue; \n\
\n\
		// check \n\
		if ( ! _stricmp ( Object->GetFullName(), ObjectFullName ) ) \n\
			return (T*) Object; \n\
	} \n\
\n\
	return NULL; \n\
} \n\
\n\
UClass* UObject::FindClass ( char* ClassFullName ) \n\
{ \n\
	while ( ! UObject::GObjObjects() ) \n\
		Sleep ( 10 ); \n\
\n\
	while ( ! FName::Names() ) \n\
		Sleep ( 00 ); \n\
\n\
	for ( int i = 0; i < UObject::GObjObjects()->Count; ++i ) \n\
	{ \n\
		UObject* Object = UObject::GObjObjects()->Data[ i ]; \n\
\n\
		if ( ! Object ) \n\
			continue; \n\
\n\
		if ( ! _stricmp ( Object->GetFullName(), ClassFullName ) ) \n\
			return (UClass*) Object; \n\
	} \n\
\n\
	return NULL; \n\
} \n\
\n\
bool UObject::IsA ( UClass* pClass ) \n\
{ \n\
	for ( UClass* SuperClass = this->Class; SuperClass; SuperClass = ( UClass* ) SuperClass->SuperField ) \n\
	{ \n\
		if ( SuperClass == pClass ) \n\
			return true; \n\
	} \n\
\n\
	return false; \n\
} \n"

#define CLASS_PROPERTIES_UFIELD "\
	class UField*                                       Next;                                             		// NOT AUTO-GENERATED PROPERTY \n"

#define CLASS_PROPERTIES_UFUNCTION "\
	unsigned long										FunctionFlags;			                           		// NOT AUTO-GENERATED PROPERTY \n\
	unsigned short										iNative;				                           		// NOT AUTO-GENERATED PROPERTY \n\
	unsigned short										RepOffset;				                           		// NOT AUTO-GENERATED PROPERTY \n\
	struct FName										FriendlyName;		                           			// NOT AUTO-GENERATED PROPERTY \n\
	unsigned char										OperPrecendence;		                           		// NOT AUTO-GENERATED PROPERTY \n\
	unsigned char										NumParms;				                           		// NOT AUTO-GENERATED PROPERTY \n\
	unsigned short										ParmsSize;				                           		// NOT AUTO-GENERATED PROPERTY \n\
	unsigned short										ReturnValueOffset;	               						// NOT AUTO-GENERATED PROPERTY \n\
	unsigned char										UnknownData[0x6];	                           			// NOT AUTO-GENERATED PROPERTY \n\
	void*												Func;													// NOT AUTO-GENERATED PROPERTY \n"

#define CLASS_PROPERTIES_USTRUCT "\
	unsigned char										UnknownData00[0x8];										// NOT AUTO-GENERATED PROPERTY \n\
	class UField*										SuperField;												// NOT AUTO-GENERATED PROPERTY \n\
	class UField*										Children;												// NOT AUTO-GENERATED PROPERTY \n\
	unsigned long										PropertySize;											// NOT AUTO-GENERATED PROPERTY \n\
	unsigned char										UnknownData01[0x30];									// NOT AUTO-GENERATED PROPERTY \n"