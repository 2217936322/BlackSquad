/*
#############################################################################################
# Black Squad (37476) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_functions.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete
// [0x00840003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bDidSucceed                    ( CPF_Parm )

void UFacebookWindows::OnFacebookFriendsRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed )
{
	static UFunction* pFnOnFacebookFriendsRequestComplete = NULL;

	if ( ! pFnOnFacebookFriendsRequestComplete )
		pFnOnFacebookFriendsRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 36627 ];

	UFacebookWindows_execOnFacebookFriendsRequestComplete_Parms OnFacebookFriendsRequestComplete_Parms;
	OnFacebookFriendsRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnFacebookFriendsRequestComplete_Parms.Response = Response;
	OnFacebookFriendsRequestComplete_Parms.bDidSucceed = bDidSucceed;

	ProcessEvent ((UObject*)this, pFnOnFacebookFriendsRequestComplete, &OnFacebookFriendsRequestComplete_Parms, NULL );
};

// Function WinDrv.FacebookWindows.RequestFacebookFriends
// [0x00040803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UFacebookWindows::eventRequestFacebookFriends ( )
{
	static UFunction* pFnRequestFacebookFriends = NULL;

	if ( ! pFnRequestFacebookFriends )
		pFnRequestFacebookFriends = (UFunction*) UObject::GObjObjects()->Data[ 36626 ];

	UFacebookWindows_eventRequestFacebookFriends_Parms RequestFacebookFriends_Parms;

	ProcessEvent ((UObject*)this, pFnRequestFacebookFriends, &RequestFacebookFriends_Parms, NULL );
};

// Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete
// [0x00840003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bDidSucceed                    ( CPF_Parm )

void UFacebookWindows::OnFacebookMeRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed )
{
	static UFunction* pFnOnFacebookMeRequestComplete = NULL;

	if ( ! pFnOnFacebookMeRequestComplete )
		pFnOnFacebookMeRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 36619 ];

	UFacebookWindows_execOnFacebookMeRequestComplete_Parms OnFacebookMeRequestComplete_Parms;
	OnFacebookMeRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnFacebookMeRequestComplete_Parms.Response = Response;
	OnFacebookMeRequestComplete_Parms.bDidSucceed = bDidSucceed;

	ProcessEvent ((UObject*)this, pFnOnFacebookMeRequestComplete, &OnFacebookMeRequestComplete_Parms, NULL );
};

// Function WinDrv.FacebookWindows.RequestFacebookMeInfo
// [0x00040803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UFacebookWindows::eventRequestFacebookMeInfo ( )
{
	static UFunction* pFnRequestFacebookMeInfo = NULL;

	if ( ! pFnRequestFacebookMeInfo )
		pFnRequestFacebookMeInfo = (UFunction*) UObject::GObjObjects()->Data[ 36618 ];

	UFacebookWindows_eventRequestFacebookMeInfo_Parms RequestFacebookMeInfo_Parms;

	ProcessEvent ((UObject*)this, pFnRequestFacebookMeInfo, &RequestFacebookMeInfo_Parms, NULL );
};

// Function WinDrv.FacebookWindows.FacebookRequestCallback
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bDidSucceed                    ( CPF_Parm )

void UFacebookWindows::FacebookRequestCallback ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed )
{
	static UFunction* pFnFacebookRequestCallback = NULL;

	if ( ! pFnFacebookRequestCallback )
		pFnFacebookRequestCallback = (UFunction*) UObject::GObjObjects()->Data[ 36613 ];

	UFacebookWindows_execFacebookRequestCallback_Parms FacebookRequestCallback_Parms;
	FacebookRequestCallback_Parms.OriginalRequest = OriginalRequest;
	FacebookRequestCallback_Parms.Response = Response;
	FacebookRequestCallback_Parms.bDidSucceed = bDidSucceed;

	ProcessEvent ((UObject*)this, pFnFacebookRequestCallback, &FacebookRequestCallback_Parms, NULL );
};

// Function WinDrv.FacebookWindows.ProcessFacebookRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Payload                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            ResponseCode                   ( CPF_Parm )

void UFacebookWindows::ProcessFacebookRequest ( struct FString Payload, int ResponseCode )
{
	static UFunction* pFnProcessFacebookRequest = NULL;

	if ( ! pFnProcessFacebookRequest )
		pFnProcessFacebookRequest = (UFunction*) UObject::GObjObjects()->Data[ 36610 ];

	UFacebookWindows_execProcessFacebookRequest_Parms ProcessFacebookRequest_Parms;
	memcpy ( &ProcessFacebookRequest_Parms.Payload, &Payload, 0xC );
	ProcessFacebookRequest_Parms.ResponseCode = ResponseCode;

	pFnProcessFacebookRequest->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnProcessFacebookRequest, &ProcessFacebookRequest_Parms, NULL );

	pFnProcessFacebookRequest->FunctionFlags |= 0x400;
};

// Function WinDrv.FacebookWindows.FacebookRequest
// [0x00020002] 
// Parameters infos:
// struct FString                 GraphRequest                   ( CPF_Parm | CPF_NeedCtorLink )

void UFacebookWindows::FacebookRequest ( struct FString GraphRequest )
{
	static UFunction* pFnFacebookRequest = NULL;

	if ( ! pFnFacebookRequest )
		pFnFacebookRequest = (UFunction*) UObject::GObjObjects()->Data[ 36608 ];

	UFacebookWindows_execFacebookRequest_Parms FacebookRequest_Parms;
	memcpy ( &FacebookRequest_Parms.GraphRequest, &GraphRequest, 0xC );

	ProcessEvent ((UObject*)this, pFnFacebookRequest, &FacebookRequest_Parms, NULL );
};

// Function WinDrv.FacebookWindows.Disconnect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UFacebookWindows::Disconnect ( )
{
	static UFunction* pFnDisconnect = NULL;

	if ( ! pFnDisconnect )
		pFnDisconnect = (UFunction*) UObject::GObjObjects()->Data[ 36607 ];

	UFacebookWindows_execDisconnect_Parms Disconnect_Parms;

	pFnDisconnect->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnDisconnect, &Disconnect_Parms, NULL );

	pFnDisconnect->FunctionFlags |= 0x400;
};

// Function WinDrv.FacebookWindows.IsAuthorized
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UFacebookWindows::IsAuthorized ( )
{
	static UFunction* pFnIsAuthorized = NULL;

	if ( ! pFnIsAuthorized )
		pFnIsAuthorized = (UFunction*) UObject::GObjObjects()->Data[ 36605 ];

	UFacebookWindows_execIsAuthorized_Parms IsAuthorized_Parms;

	pFnIsAuthorized->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnIsAuthorized, &IsAuthorized_Parms, NULL );

	pFnIsAuthorized->FunctionFlags |= 0x400;

	return IsAuthorized_Parms.ReturnValue;
};

// Function WinDrv.FacebookWindows.Authorize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UFacebookWindows::Authorize ( )
{
	static UFunction* pFnAuthorize = NULL;

	if ( ! pFnAuthorize )
		pFnAuthorize = (UFunction*) UObject::GObjObjects()->Data[ 36603 ];

	UFacebookWindows_execAuthorize_Parms Authorize_Parms;

	pFnAuthorize->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnAuthorize, &Authorize_Parms, NULL );

	pFnAuthorize->FunctionFlags |= 0x400;

	return Authorize_Parms.ReturnValue;
};

// Function WinDrv.FacebookWindows.Init
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UFacebookWindows::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 36601 ];

	UFacebookWindows_execInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.ProcessRequestCombat
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UHttpRequestWindows::ProcessRequestCombat ( )
{
	static UFunction* pFnProcessRequestCombat = NULL;

	if ( ! pFnProcessRequestCombat )
		pFnProcessRequestCombat = (UFunction*) UObject::GObjObjects()->Data[ 36681 ];

	UHttpRequestWindows_execProcessRequestCombat_Parms ProcessRequestCombat_Parms;

	pFnProcessRequestCombat->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnProcessRequestCombat, &ProcessRequestCombat_Parms, NULL );

	pFnProcessRequestCombat->FunctionFlags |= 0x400;

	return ProcessRequestCombat_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.ProcessRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UHttpRequestWindows::ProcessRequest ( )
{
	static UFunction* pFnProcessRequest = NULL;

	if ( ! pFnProcessRequest )
		pFnProcessRequest = (UFunction*) UObject::GObjObjects()->Data[ 36679 ];

	UHttpRequestWindows_execProcessRequest_Parms ProcessRequest_Parms;

	pFnProcessRequest->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnProcessRequest, &ProcessRequest_Parms, NULL );

	pFnProcessRequest->FunctionFlags |= 0x400;

	return ProcessRequest_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 HeaderValue                    ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestWindows::SetHeader ( struct FString HeaderName, struct FString HeaderValue )
{
	static UFunction* pFnSetHeader = NULL;

	if ( ! pFnSetHeader )
		pFnSetHeader = (UFunction*) UObject::GObjObjects()->Data[ 36675 ];

	UHttpRequestWindows_execSetHeader_Parms SetHeader_Parms;
	memcpy ( &SetHeader_Parms.HeaderName, &HeaderName, 0xC );
	memcpy ( &SetHeader_Parms.HeaderValue, &HeaderValue, 0xC );

	pFnSetHeader->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSetHeader, &SetHeader_Parms, NULL );

	pFnSetHeader->FunctionFlags |= 0x400;

	return SetHeader_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetContentAsString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ContentString                  ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestWindows::SetContentAsString ( struct FString ContentString )
{
	static UFunction* pFnSetContentAsString = NULL;

	if ( ! pFnSetContentAsString )
		pFnSetContentAsString = (UFunction*) UObject::GObjObjects()->Data[ 36672 ];

	UHttpRequestWindows_execSetContentAsString_Parms SetContentAsString_Parms;
	memcpy ( &SetContentAsString_Parms.ContentString, &ContentString, 0xC );

	pFnSetContentAsString->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSetContentAsString, &SetContentAsString_Parms, NULL );

	pFnSetContentAsString->FunctionFlags |= 0x400;

	return SetContentAsString_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< unsigned char >        ContentPayload                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestWindows::SetContent ( TArray< unsigned char >* ContentPayload )
{
	static UFunction* pFnSetContent = NULL;

	if ( ! pFnSetContent )
		pFnSetContent = (UFunction*) UObject::GObjObjects()->Data[ 36668 ];

	UHttpRequestWindows_execSetContent_Parms SetContent_Parms;

	pFnSetContent->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSetContent, &SetContent_Parms, NULL );

	pFnSetContent->FunctionFlags |= 0x400;

	if ( ContentPayload )
		memcpy ( ContentPayload, &SetContent_Parms.ContentPayload, 0xC );

	return SetContent_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestWindows::SetURL ( struct FString URL )
{
	static UFunction* pFnSetURL = NULL;

	if ( ! pFnSetURL )
		pFnSetURL = (UFunction*) UObject::GObjObjects()->Data[ 36665 ];

	UHttpRequestWindows_execSetURL_Parms SetURL_Parms;
	memcpy ( &SetURL_Parms.URL, &URL, 0xC );

	pFnSetURL->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSetURL, &SetURL_Parms, NULL );

	pFnSetURL->FunctionFlags |= 0x400;

	return SetURL_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetVerb
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Verb                           ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestWindows::SetVerb ( struct FString Verb )
{
	static UFunction* pFnSetVerb = NULL;

	if ( ! pFnSetVerb )
		pFnSetVerb = (UFunction*) UObject::GObjObjects()->Data[ 36662 ];

	UHttpRequestWindows_execSetVerb_Parms SetVerb_Parms;
	memcpy ( &SetVerb_Parms.Verb, &Verb, 0xC );

	pFnSetVerb->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSetVerb, &SetVerb_Parms, NULL );

	pFnSetVerb->FunctionFlags |= 0x400;

	return SetVerb_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetVerb
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpRequestWindows::GetVerb ( )
{
	static UFunction* pFnGetVerb = NULL;

	if ( ! pFnGetVerb )
		pFnGetVerb = (UFunction*) UObject::GObjObjects()->Data[ 36660 ];

	UHttpRequestWindows_execGetVerb_Parms GetVerb_Parms;

	pFnGetVerb->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetVerb, &GetVerb_Parms, NULL );

	pFnGetVerb->FunctionFlags |= 0x400;

	return GetVerb_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        Content                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UHttpRequestWindows::GetContent ( TArray< unsigned char >* Content )
{
	static UFunction* pFnGetContent = NULL;

	if ( ! pFnGetContent )
		pFnGetContent = (UFunction*) UObject::GObjObjects()->Data[ 36657 ];

	UHttpRequestWindows_execGetContent_Parms GetContent_Parms;

	pFnGetContent->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetContent, &GetContent_Parms, NULL );

	pFnGetContent->FunctionFlags |= 0x400;

	if ( Content )
		memcpy ( Content, &GetContent_Parms.Content, 0xC );
};

// Function WinDrv.HttpRequestWindows.GetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpRequestWindows::GetURL ( )
{
	static UFunction* pFnGetURL = NULL;

	if ( ! pFnGetURL )
		pFnGetURL = (UFunction*) UObject::GObjObjects()->Data[ 36655 ];

	UHttpRequestWindows_execGetURL_Parms GetURL_Parms;

	pFnGetURL->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetURL, &GetURL_Parms, NULL );

	pFnGetURL->FunctionFlags |= 0x400;

	return GetURL_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContentLength
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHttpRequestWindows::GetContentLength ( )
{
	static UFunction* pFnGetContentLength = NULL;

	if ( ! pFnGetContentLength )
		pFnGetContentLength = (UFunction*) UObject::GObjObjects()->Data[ 36653 ];

	UHttpRequestWindows_execGetContentLength_Parms GetContentLength_Parms;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetContentLength, &GetContentLength_Parms, NULL );

	pFnGetContentLength->FunctionFlags |= 0x400;

	return GetContentLength_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContentType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpRequestWindows::GetContentType ( )
{
	static UFunction* pFnGetContentType = NULL;

	if ( ! pFnGetContentType )
		pFnGetContentType = (UFunction*) UObject::GObjObjects()->Data[ 36651 ];

	UHttpRequestWindows_execGetContentType_Parms GetContentType_Parms;

	pFnGetContentType->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetContentType, &GetContentType_Parms, NULL );

	pFnGetContentType->FunctionFlags |= 0x400;

	return GetContentType_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetURLParameter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 ParameterName                  ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpRequestWindows::GetURLParameter ( struct FString ParameterName )
{
	static UFunction* pFnGetURLParameter = NULL;

	if ( ! pFnGetURLParameter )
		pFnGetURLParameter = (UFunction*) UObject::GObjObjects()->Data[ 36648 ];

	UHttpRequestWindows_execGetURLParameter_Parms GetURLParameter_Parms;
	memcpy ( &GetURLParameter_Parms.ParameterName, &ParameterName, 0xC );

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetURLParameter, &GetURLParameter_Parms, NULL );

	pFnGetURLParameter->FunctionFlags |= 0x400;

	return GetURLParameter_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetHeaders
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FString > UHttpRequestWindows::GetHeaders ( )
{
	static UFunction* pFnGetHeaders = NULL;

	if ( ! pFnGetHeaders )
		pFnGetHeaders = (UFunction*) UObject::GObjObjects()->Data[ 36645 ];

	UHttpRequestWindows_execGetHeaders_Parms GetHeaders_Parms;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetHeaders, &GetHeaders_Parms, NULL );

	pFnGetHeaders->FunctionFlags |= 0x400;

	return GetHeaders_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpRequestWindows::GetHeader ( struct FString HeaderName )
{
	static UFunction* pFnGetHeader = NULL;

	if ( ! pFnGetHeader )
		pFnGetHeader = (UFunction*) UObject::GObjObjects()->Data[ 36642 ];

	UHttpRequestWindows_execGetHeader_Parms GetHeader_Parms;
	memcpy ( &GetHeader_Parms.HeaderName, &HeaderName, 0xC );

	pFnGetHeader->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetHeader, &GetHeader_Parms, NULL );

	pFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetResponseCode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHttpResponseWindows::GetResponseCode ( )
{
	static UFunction* pFnGetResponseCode = NULL;

	if ( ! pFnGetResponseCode )
		pFnGetResponseCode = (UFunction*) UObject::GObjObjects()->Data[ 36713 ];

	UHttpResponseWindows_execGetResponseCode_Parms GetResponseCode_Parms;

	pFnGetResponseCode->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetResponseCode, &GetResponseCode_Parms, NULL );

	pFnGetResponseCode->FunctionFlags |= 0x400;

	return GetResponseCode_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentAsString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpResponseWindows::GetContentAsString ( )
{
	static UFunction* pFnGetContentAsString = NULL;

	if ( ! pFnGetContentAsString )
		pFnGetContentAsString = (UFunction*) UObject::GObjObjects()->Data[ 36711 ];

	UHttpResponseWindows_execGetContentAsString_Parms GetContentAsString_Parms;

	pFnGetContentAsString->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetContentAsString, &GetContentAsString_Parms, NULL );

	pFnGetContentAsString->FunctionFlags |= 0x400;

	return GetContentAsString_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        Content                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UHttpResponseWindows::GetContent ( TArray< unsigned char >* Content )
{
	static UFunction* pFnGetContent = NULL;

	if ( ! pFnGetContent )
		pFnGetContent = (UFunction*) UObject::GObjObjects()->Data[ 36708 ];

	UHttpResponseWindows_execGetContent_Parms GetContent_Parms;

	pFnGetContent->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetContent, &GetContent_Parms, NULL );

	pFnGetContent->FunctionFlags |= 0x400;

	if ( Content )
		memcpy ( Content, &GetContent_Parms.Content, 0xC );
};

// Function WinDrv.HttpResponseWindows.GetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpResponseWindows::GetURL ( )
{
	static UFunction* pFnGetURL = NULL;

	if ( ! pFnGetURL )
		pFnGetURL = (UFunction*) UObject::GObjObjects()->Data[ 36706 ];

	UHttpResponseWindows_execGetURL_Parms GetURL_Parms;

	pFnGetURL->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetURL, &GetURL_Parms, NULL );

	pFnGetURL->FunctionFlags |= 0x400;

	return GetURL_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentLength
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHttpResponseWindows::GetContentLength ( )
{
	static UFunction* pFnGetContentLength = NULL;

	if ( ! pFnGetContentLength )
		pFnGetContentLength = (UFunction*) UObject::GObjObjects()->Data[ 36704 ];

	UHttpResponseWindows_execGetContentLength_Parms GetContentLength_Parms;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetContentLength, &GetContentLength_Parms, NULL );

	pFnGetContentLength->FunctionFlags |= 0x400;

	return GetContentLength_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpResponseWindows::GetContentType ( )
{
	static UFunction* pFnGetContentType = NULL;

	if ( ! pFnGetContentType )
		pFnGetContentType = (UFunction*) UObject::GObjObjects()->Data[ 36702 ];

	UHttpResponseWindows_execGetContentType_Parms GetContentType_Parms;

	pFnGetContentType->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetContentType, &GetContentType_Parms, NULL );

	pFnGetContentType->FunctionFlags |= 0x400;

	return GetContentType_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetURLParameter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 ParameterName                  ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpResponseWindows::GetURLParameter ( struct FString ParameterName )
{
	static UFunction* pFnGetURLParameter = NULL;

	if ( ! pFnGetURLParameter )
		pFnGetURLParameter = (UFunction*) UObject::GObjObjects()->Data[ 36699 ];

	UHttpResponseWindows_execGetURLParameter_Parms GetURLParameter_Parms;
	memcpy ( &GetURLParameter_Parms.ParameterName, &ParameterName, 0xC );

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetURLParameter, &GetURLParameter_Parms, NULL );

	pFnGetURLParameter->FunctionFlags |= 0x400;

	return GetURLParameter_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetHeaders
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FString > UHttpResponseWindows::GetHeaders ( )
{
	static UFunction* pFnGetHeaders = NULL;

	if ( ! pFnGetHeaders )
		pFnGetHeaders = (UFunction*) UObject::GObjObjects()->Data[ 36696 ];

	UHttpResponseWindows_execGetHeaders_Parms GetHeaders_Parms;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetHeaders, &GetHeaders_Parms, NULL );

	pFnGetHeaders->FunctionFlags |= 0x400;

	return GetHeaders_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpResponseWindows::GetHeader ( struct FString HeaderName )
{
	static UFunction* pFnGetHeader = NULL;

	if ( ! pFnGetHeader )
		pFnGetHeader = (UFunction*) UObject::GObjObjects()->Data[ 36693 ];

	UHttpResponseWindows_execGetHeader_Parms GetHeader_Parms;
	memcpy ( &GetHeader_Parms.HeaderName, &HeaderName, 0xC );

	pFnGetHeader->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetHeader, &GetHeader_Parms, NULL );

	pFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindowsMcp.ProcessRequest
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UHttpRequestWindowsMcp::ProcessRequest ( )
{
	static UFunction* pFnProcessRequest = NULL;

	if ( ! pFnProcessRequest )
		pFnProcessRequest = (UFunction*) UObject::GObjObjects()->Data[ 36686 ];

	UHttpRequestWindowsMcp_execProcessRequest_Parms ProcessRequest_Parms;

	ProcessEvent ((UObject*)this, pFnProcessRequest, &ProcessRequest_Parms, NULL );

	return ProcessRequest_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif