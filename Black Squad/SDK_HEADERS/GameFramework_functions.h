/*
#############################################################################################
# Black Squad (37476) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_functions.h
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

// Function GameFramework.DebugCameraHUD.PostRender
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void ADebugCameraHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 36856 ];

	ADebugCameraHUD_eventPostRender_Parms PostRender_Parms;

	ProcessEvent ((UObject*)this, pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.DebugCameraHUD.DisplayMaterials
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          DY                             ( CPF_Parm )
// class UMeshComponent*          MeshComp                       ( CPF_Parm | CPF_EditInline )
// float                          Y                              ( CPF_Parm | CPF_OutParm )

bool ADebugCameraHUD::DisplayMaterials ( float X, float DY, class UMeshComponent* MeshComp, float* Y )
{
	static UFunction* pFnDisplayMaterials = NULL;

	if ( ! pFnDisplayMaterials )
		pFnDisplayMaterials = (UFunction*) UObject::GObjObjects()->Data[ 36847 ];

	ADebugCameraHUD_execDisplayMaterials_Parms DisplayMaterials_Parms;
	DisplayMaterials_Parms.X = X;
	DisplayMaterials_Parms.DY = DY;
	DisplayMaterials_Parms.MeshComp = MeshComp;

	ProcessEvent ((UObject*)this, pFnDisplayMaterials, &DisplayMaterials_Parms, NULL );

	if ( Y )
		*Y = DisplayMaterials_Parms.Y;

	return DisplayMaterials_Parms.ReturnValue;
};

// Function GameFramework.DebugCameraHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADebugCameraHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36846 ];

	ADebugCameraHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameAIController.GetActionString
// [0x00020903] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AGameAIController::eventGetActionString ( )
{
	static UFunction* pFnGetActionString = NULL;

	if ( ! pFnGetActionString )
		pFnGetActionString = (UFunction*) UObject::GObjObjects()->Data[ 37544 ];

	AGameAIController_eventGetActionString_Parms GetActionString_Parms;

	ProcessEvent ((UObject*)this, pFnGetActionString, &GetActionString_Parms, NULL );

	return GetActionString_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.SetDesiredRotation
// [0x00024002] 
// Parameters infos:
// struct FRotator                TargetDesiredRotation          ( CPF_Parm )
// unsigned long                  InLockDesiredRotation          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  InUnlockWhenReached            ( CPF_OptionalParm | CPF_Parm )
// float                          InterpolationTime              ( CPF_OptionalParm | CPF_Parm )

void AGameAIController::SetDesiredRotation ( struct FRotator TargetDesiredRotation, unsigned long InLockDesiredRotation, unsigned long InUnlockWhenReached, float InterpolationTime )
{
	static UFunction* pFnSetDesiredRotation = NULL;

	if ( ! pFnSetDesiredRotation )
		pFnSetDesiredRotation = (UFunction*) UObject::GObjObjects()->Data[ 37530 ];

	AGameAIController_execSetDesiredRotation_Parms SetDesiredRotation_Parms;
	memcpy ( &SetDesiredRotation_Parms.TargetDesiredRotation, &TargetDesiredRotation, 0xC );
	SetDesiredRotation_Parms.InLockDesiredRotation = InLockDesiredRotation;
	SetDesiredRotation_Parms.InUnlockWhenReached = InUnlockWhenReached;
	SetDesiredRotation_Parms.InterpolationTime = InterpolationTime;

	ProcessEvent ((UObject*)this, pFnSetDesiredRotation, &SetDesiredRotation_Parms, NULL );
};

// Function GameFramework.GameAIController.AILog_Internal
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// struct FString                 LogText                        ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FName                   LogCategory                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bForce                         ( CPF_OptionalParm | CPF_Parm )

void AGameAIController::eventAILog_Internal ( struct FString LogText, struct FName LogCategory, unsigned long bForce )
{
	static UFunction* pFnAILog_Internal = NULL;

	if ( ! pFnAILog_Internal )
		pFnAILog_Internal = (UFunction*) UObject::GObjObjects()->Data[ 37526 ];

	AGameAIController_eventAILog_Internal_Parms AILog_Internal_Parms;
	memcpy ( &AILog_Internal_Parms.LogText, &LogText, 0xC );
	memcpy ( &AILog_Internal_Parms.LogCategory, &LogCategory, 0x8 );
	AILog_Internal_Parms.bForce = bForce;

	ProcessEvent ((UObject*)this, pFnAILog_Internal, &AILog_Internal_Parms, NULL );
};

// Function GameFramework.GameAIController.RecordDemoAILog
// [0x00080000] 
// Parameters infos:
// struct FString                 LogText                        ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void AGameAIController::RecordDemoAILog ( struct FString LogText )
{
	static UFunction* pFnRecordDemoAILog = NULL;

	if ( ! pFnRecordDemoAILog )
		pFnRecordDemoAILog = (UFunction*) UObject::GObjObjects()->Data[ 37524 ];

	AGameAIController_execRecordDemoAILog_Parms RecordDemoAILog_Parms;
	memcpy ( &RecordDemoAILog_Parms.LogText, &LogText, 0xC );

	ProcessEvent ((UObject*)this, pFnRecordDemoAILog, &RecordDemoAILog_Parms, NULL );
};

// Function GameFramework.GameAIController.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameAIController::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 37523 ];

	AGameAIController_eventDestroyed_Parms Destroyed_Parms;

	ProcessEvent ((UObject*)this, pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
// [0x00020000] 
// Parameters infos:

void AGameAIController::ReachedIntermediateMoveGoal ( )
{
	static UFunction* pFnReachedIntermediateMoveGoal = NULL;

	if ( ! pFnReachedIntermediateMoveGoal )
		pFnReachedIntermediateMoveGoal = (UFunction*) UObject::GObjObjects()->Data[ 37522 ];

	AGameAIController_execReachedIntermediateMoveGoal_Parms ReachedIntermediateMoveGoal_Parms;

	ProcessEvent ((UObject*)this, pFnReachedIntermediateMoveGoal, &ReachedIntermediateMoveGoal_Parms, NULL );
};

// Function GameFramework.GameAIController.ReachedMoveGoal
// [0x00020000] 
// Parameters infos:

void AGameAIController::ReachedMoveGoal ( )
{
	static UFunction* pFnReachedMoveGoal = NULL;

	if ( ! pFnReachedMoveGoal )
		pFnReachedMoveGoal = (UFunction*) UObject::GObjObjects()->Data[ 37521 ];

	AGameAIController_execReachedMoveGoal_Parms ReachedMoveGoal_Parms;

	ProcessEvent ((UObject*)this, pFnReachedMoveGoal, &ReachedMoveGoal_Parms, NULL );
};

// Function GameFramework.GameAIController.GetDestinationOffset
// [0x00020000] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGameAIController::GetDestinationOffset ( )
{
	static UFunction* pFnGetDestinationOffset = NULL;

	if ( ! pFnGetDestinationOffset )
		pFnGetDestinationOffset = (UFunction*) UObject::GObjObjects()->Data[ 37519 ];

	AGameAIController_execGetDestinationOffset_Parms GetDestinationOffset_Parms;

	ProcessEvent ((UObject*)this, pFnGetDestinationOffset, &GetDestinationOffset_Parms, NULL );

	return GetDestinationOffset_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.GetAICommandInStack
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  InClass                        ( CPF_Const | CPF_Parm )

class UGameAICommand* AGameAIController::GetAICommandInStack ( class UClass* InClass )
{
	static UFunction* pFnGetAICommandInStack = NULL;

	if ( ! pFnGetAICommandInStack )
		pFnGetAICommandInStack = (UFunction*) UObject::GObjObjects()->Data[ 37516 ];

	AGameAIController_execGetAICommandInStack_Parms GetAICommandInStack_Parms;
	GetAICommandInStack_Parms.InClass = InClass;

	pFnGetAICommandInStack->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetAICommandInStack, &GetAICommandInStack_Parms, NULL );

	pFnGetAICommandInStack->FunctionFlags |= 0x400;

	return GetAICommandInStack_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.FindCommandOfClass
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
// class UClass*                  SearchClass                    ( CPF_Parm )

class UGameAICommand* AGameAIController::FindCommandOfClass ( class UClass* SearchClass )
{
	static UFunction* pFnFindCommandOfClass = NULL;

	if ( ! pFnFindCommandOfClass )
		pFnFindCommandOfClass = (UFunction*) UObject::GObjObjects()->Data[ 37513 ];

	AGameAIController_execFindCommandOfClass_Parms FindCommandOfClass_Parms;
	FindCommandOfClass_Parms.SearchClass = SearchClass;

	pFnFindCommandOfClass->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnFindCommandOfClass, &FindCommandOfClass_Parms, NULL );

	pFnFindCommandOfClass->FunctionFlags |= 0x400;

	return FindCommandOfClass_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.DumpCommandStack
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::DumpCommandStack ( )
{
	static UFunction* pFnDumpCommandStack = NULL;

	if ( ! pFnDumpCommandStack )
		pFnDumpCommandStack = (UFunction*) UObject::GObjObjects()->Data[ 37512 ];

	AGameAIController_execDumpCommandStack_Parms DumpCommandStack_Parms;

	pFnDumpCommandStack->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnDumpCommandStack, &DumpCommandStack_Parms, NULL );

	pFnDumpCommandStack->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.CheckCommandCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::CheckCommandCount ( )
{
	static UFunction* pFnCheckCommandCount = NULL;

	if ( ! pFnCheckCommandCount )
		pFnCheckCommandCount = (UFunction*) UObject::GObjObjects()->Data[ 37511 ];

	AGameAIController_execCheckCommandCount_Parms CheckCommandCount_Parms;

	pFnCheckCommandCount->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnCheckCommandCount, &CheckCommandCount_Parms, NULL );

	pFnCheckCommandCount->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.GetActiveCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGameAICommand* AGameAIController::GetActiveCommand ( )
{
	static UFunction* pFnGetActiveCommand = NULL;

	if ( ! pFnGetActiveCommand )
		pFnGetActiveCommand = (UFunction*) UObject::GObjObjects()->Data[ 37509 ];

	AGameAIController_execGetActiveCommand_Parms GetActiveCommand_Parms;

	pFnGetActiveCommand->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetActiveCommand, &GetActiveCommand_Parms, NULL );

	pFnGetActiveCommand->FunctionFlags |= 0x400;

	return GetActiveCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.AbortCommand
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGameAICommand*          AbortCmd                       ( CPF_Parm )
// class UClass*                  AbortClass                     ( CPF_OptionalParm | CPF_Parm )

bool AGameAIController::AbortCommand ( class UGameAICommand* AbortCmd, class UClass* AbortClass )
{
	static UFunction* pFnAbortCommand = NULL;

	if ( ! pFnAbortCommand )
		pFnAbortCommand = (UFunction*) UObject::GObjObjects()->Data[ 37505 ];

	AGameAIController_execAbortCommand_Parms AbortCommand_Parms;
	AbortCommand_Parms.AbortCmd = AbortCmd;
	AbortCommand_Parms.AbortClass = AbortClass;

	pFnAbortCommand->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnAbortCommand, &AbortCommand_Parms, NULL );

	pFnAbortCommand->FunctionFlags |= 0x400;

	return AbortCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.PopCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ToBePoppedCommand              ( CPF_Parm )

void AGameAIController::PopCommand ( class UGameAICommand* ToBePoppedCommand )
{
	static UFunction* pFnPopCommand = NULL;

	if ( ! pFnPopCommand )
		pFnPopCommand = (UFunction*) UObject::GObjObjects()->Data[ 37503 ];

	AGameAIController_execPopCommand_Parms PopCommand_Parms;
	PopCommand_Parms.ToBePoppedCommand = ToBePoppedCommand;

	pFnPopCommand->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnPopCommand, &PopCommand_Parms, NULL );

	pFnPopCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.PushCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void AGameAIController::PushCommand ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnPushCommand = NULL;

	if ( ! pFnPushCommand )
		pFnPushCommand = (UFunction*) UObject::GObjObjects()->Data[ 37501 ];

	AGameAIController_execPushCommand_Parms PushCommand_Parms;
	PushCommand_Parms.NewCommand = NewCommand;

	pFnPushCommand->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnPushCommand, &PushCommand_Parms, NULL );

	pFnPushCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.AllCommands
// [0x00420405] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// class UGameAICommand*          Cmd                            ( CPF_Parm | CPF_OutParm )

void AGameAIController::AllCommands ( class UClass* BaseClass, class UGameAICommand** Cmd )
{
	static UFunction* pFnAllCommands = NULL;

	if ( ! pFnAllCommands )
		pFnAllCommands = (UFunction*) UObject::GObjObjects()->Data[ 37498 ];

	AGameAIController_execAllCommands_Parms AllCommands_Parms;
	AllCommands_Parms.BaseClass = BaseClass;

	pFnAllCommands->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnAllCommands, &AllCommands_Parms, NULL );

	pFnAllCommands->FunctionFlags |= 0x400;

	if ( Cmd )
		*Cmd = AllCommands_Parms.Cmd;
};

// Function GameFramework.GameAICommand.HandlePathObstruction
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  BlockedBy                      ( CPF_Parm )

bool UGameAICommand::HandlePathObstruction ( class AActor* BlockedBy )
{
	static UFunction* pFnHandlePathObstruction = NULL;

	if ( ! pFnHandlePathObstruction )
		pFnHandlePathObstruction = (UFunction*) UObject::GObjObjects()->Data[ 37341 ];

	UGameAICommand_execHandlePathObstruction_Parms HandlePathObstruction_Parms;
	HandlePathObstruction_Parms.BlockedBy = BlockedBy;

	ProcessEvent ((UObject*)this, pFnHandlePathObstruction, &HandlePathObstruction_Parms, NULL );

	return HandlePathObstruction_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.MoveUnreachable
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 AttemptedDest                  ( CPF_Parm )
// class AActor*                  AttemptedTarget                ( CPF_Parm )

bool UGameAICommand::MoveUnreachable ( struct FVector AttemptedDest, class AActor* AttemptedTarget )
{
	static UFunction* pFnMoveUnreachable = NULL;

	if ( ! pFnMoveUnreachable )
		pFnMoveUnreachable = (UFunction*) UObject::GObjObjects()->Data[ 37337 ];

	UGameAICommand_execMoveUnreachable_Parms MoveUnreachable_Parms;
	memcpy ( &MoveUnreachable_Parms.AttemptedDest, &AttemptedDest, 0xC );
	MoveUnreachable_Parms.AttemptedTarget = AttemptedTarget;

	ProcessEvent ((UObject*)this, pFnMoveUnreachable, &MoveUnreachable_Parms, NULL );

	return MoveUnreachable_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.NotifyNeedRepath
// [0x00020000] 
// Parameters infos:

void UGameAICommand::NotifyNeedRepath ( )
{
	static UFunction* pFnNotifyNeedRepath = NULL;

	if ( ! pFnNotifyNeedRepath )
		pFnNotifyNeedRepath = (UFunction*) UObject::GObjObjects()->Data[ 37336 ];

	UGameAICommand_execNotifyNeedRepath_Parms NotifyNeedRepath_Parms;

	ProcessEvent ((UObject*)this, pFnNotifyNeedRepath, &NotifyNeedRepath_Parms, NULL );
};

// Function GameFramework.GameAICommand.GetDebugVerboseText
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameAICommand::eventGetDebugVerboseText ( )
{
	static UFunction* pFnGetDebugVerboseText = NULL;

	if ( ! pFnGetDebugVerboseText )
		pFnGetDebugVerboseText = (UFunction*) UObject::GObjObjects()->Data[ 37334 ];

	UGameAICommand_eventGetDebugVerboseText_Parms GetDebugVerboseText_Parms;

	ProcessEvent ((UObject*)this, pFnGetDebugVerboseText, &GetDebugVerboseText_Parms, NULL );

	return GetDebugVerboseText_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
// [0x00420000] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// TArray< struct FString >       OutText                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameAICommand::GetDebugOverheadText ( class APlayerController* PC, TArray< struct FString >* OutText )
{
	static UFunction* pFnGetDebugOverheadText = NULL;

	if ( ! pFnGetDebugOverheadText )
		pFnGetDebugOverheadText = (UFunction*) UObject::GObjObjects()->Data[ 37330 ];

	UGameAICommand_execGetDebugOverheadText_Parms GetDebugOverheadText_Parms;
	GetDebugOverheadText_Parms.PC = PC;

	ProcessEvent ((UObject*)this, pFnGetDebugOverheadText, &GetDebugOverheadText_Parms, NULL );

	if ( OutText )
		memcpy ( OutText, &GetDebugOverheadText_Parms.OutText, 0xC );
};

// Function GameFramework.GameAICommand.DrawDebug
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )
// struct FName                   Category                       ( CPF_Parm )

void UGameAICommand::eventDrawDebug ( class AHUD* H, struct FName Category )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 37327 ];

	UGameAICommand_eventDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.H = H;
	memcpy ( &DrawDebug_Parms.Category, &Category, 0x8 );

	ProcessEvent ((UObject*)this, pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameAICommand.GetDumpString
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameAICommand::eventGetDumpString ( )
{
	static UFunction* pFnGetDumpString = NULL;

	if ( ! pFnGetDumpString )
		pFnGetDumpString = (UFunction*) UObject::GObjObjects()->Data[ 37314 ];

	UGameAICommand_eventGetDumpString_Parms GetDumpString_Parms;

	ProcessEvent ((UObject*)this, pFnGetDumpString, &GetDumpString_Parms, NULL );

	return GetDumpString_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.Resumed
// [0x00020002] 
// Parameters infos:
// struct FName                   OldCommandName                 ( CPF_Parm )

void UGameAICommand::Resumed ( struct FName OldCommandName )
{
	static UFunction* pFnResumed = NULL;

	if ( ! pFnResumed )
		pFnResumed = (UFunction*) UObject::GObjObjects()->Data[ 37312 ];

	UGameAICommand_execResumed_Parms Resumed_Parms;
	memcpy ( &Resumed_Parms.OldCommandName, &OldCommandName, 0x8 );

	ProcessEvent ((UObject*)this, pFnResumed, &Resumed_Parms, NULL );
};

// Function GameFramework.GameAICommand.Paused
// [0x00020002] 
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void UGameAICommand::Paused ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnPaused = NULL;

	if ( ! pFnPaused )
		pFnPaused = (UFunction*) UObject::GObjObjects()->Data[ 37310 ];

	UGameAICommand_execPaused_Parms Paused_Parms;
	Paused_Parms.NewCommand = NewCommand;

	ProcessEvent ((UObject*)this, pFnPaused, &Paused_Parms, NULL );
};

// Function GameFramework.GameAICommand.Popped
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 37309 ];

	UGameAICommand_execPopped_Parms Popped_Parms;

	ProcessEvent ((UObject*)this, pFnPopped, &Popped_Parms, NULL );
};

// Function GameFramework.GameAICommand.Pushed
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 37308 ];

	UGameAICommand_execPushed_Parms Pushed_Parms;

	ProcessEvent ((UObject*)this, pFnPushed, &Pushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.PostPopped
// [0x00020000] 
// Parameters infos:

void UGameAICommand::PostPopped ( )
{
	static UFunction* pFnPostPopped = NULL;

	if ( ! pFnPostPopped )
		pFnPostPopped = (UFunction*) UObject::GObjObjects()->Data[ 37307 ];

	UGameAICommand_execPostPopped_Parms PostPopped_Parms;

	ProcessEvent ((UObject*)this, pFnPostPopped, &PostPopped_Parms, NULL );
};

// Function GameFramework.GameAICommand.PrePushed
// [0x00020000] 
// Parameters infos:
// class AGameAIController*       AI                             ( CPF_Parm )

void UGameAICommand::PrePushed ( class AGameAIController* AI )
{
	static UFunction* pFnPrePushed = NULL;

	if ( ! pFnPrePushed )
		pFnPrePushed = (UFunction*) UObject::GObjObjects()->Data[ 37305 ];

	UGameAICommand_execPrePushed_Parms PrePushed_Parms;
	PrePushed_Parms.AI = AI;

	ProcessEvent ((UObject*)this, pFnPrePushed, &PrePushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   StateName                      ( CPF_Parm )

bool UGameAICommand::AllowStateTransitionTo ( struct FName StateName )
{
	static UFunction* pFnAllowStateTransitionTo = NULL;

	if ( ! pFnAllowStateTransitionTo )
		pFnAllowStateTransitionTo = (UFunction*) UObject::GObjObjects()->Data[ 37302 ];

	UGameAICommand_execAllowStateTransitionTo_Parms AllowStateTransitionTo_Parms;
	memcpy ( &AllowStateTransitionTo_Parms.StateName, &StateName, 0x8 );

	ProcessEvent ((UObject*)this, pFnAllowStateTransitionTo, &AllowStateTransitionTo_Parms, NULL );

	return AllowStateTransitionTo_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.AllowTransitionTo
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  AttemptCommand                 ( CPF_Parm )

bool UGameAICommand::AllowTransitionTo ( class UClass* AttemptCommand )
{
	static UFunction* pFnAllowTransitionTo = NULL;

	if ( ! pFnAllowTransitionTo )
		pFnAllowTransitionTo = (UFunction*) UObject::GObjObjects()->Data[ 37299 ];

	UGameAICommand_execAllowTransitionTo_Parms AllowTransitionTo_Parms;
	AllowTransitionTo_Parms.AttemptCommand = AttemptCommand;

	ProcessEvent ((UObject*)this, pFnAllowTransitionTo, &AllowTransitionTo_Parms, NULL );

	return AllowTransitionTo_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.Tick
// [0x00020000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameAICommand::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 37297 ];

	UGameAICommand_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameAICommand::ShouldIgnoreNotifies ( )
{
	static UFunction* pFnShouldIgnoreNotifies = NULL;

	if ( ! pFnShouldIgnoreNotifies )
		pFnShouldIgnoreNotifies = (UFunction*) UObject::GObjObjects()->Data[ 37295 ];

	UGameAICommand_execShouldIgnoreNotifies_Parms ShouldIgnoreNotifies_Parms;

	pFnShouldIgnoreNotifies->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnShouldIgnoreNotifies, &ShouldIgnoreNotifies_Parms, NULL );

	pFnShouldIgnoreNotifies->FunctionFlags |= 0x400;

	return ShouldIgnoreNotifies_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.InternalTick
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameAICommand::eventInternalTick ( float DeltaTime )
{
	static UFunction* pFnInternalTick = NULL;

	if ( ! pFnInternalTick )
		pFnInternalTick = (UFunction*) UObject::GObjObjects()->Data[ 37293 ];

	UGameAICommand_eventInternalTick_Parms InternalTick_Parms;
	InternalTick_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnInternalTick, &InternalTick_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalResumed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// struct FName                   OldCommandName                 ( CPF_Parm )

void UGameAICommand::eventInternalResumed ( struct FName OldCommandName )
{
	static UFunction* pFnInternalResumed = NULL;

	if ( ! pFnInternalResumed )
		pFnInternalResumed = (UFunction*) UObject::GObjObjects()->Data[ 37291 ];

	UGameAICommand_eventInternalResumed_Parms InternalResumed_Parms;
	memcpy ( &InternalResumed_Parms.OldCommandName, &OldCommandName, 0x8 );

	ProcessEvent ((UObject*)this, pFnInternalResumed, &InternalResumed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPaused
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void UGameAICommand::eventInternalPaused ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnInternalPaused = NULL;

	if ( ! pFnInternalPaused )
		pFnInternalPaused = (UFunction*) UObject::GObjObjects()->Data[ 37289 ];

	UGameAICommand_eventInternalPaused_Parms InternalPaused_Parms;
	InternalPaused_Parms.NewCommand = NewCommand;

	ProcessEvent ((UObject*)this, pFnInternalPaused, &InternalPaused_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPopped
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPopped ( )
{
	static UFunction* pFnInternalPopped = NULL;

	if ( ! pFnInternalPopped )
		pFnInternalPopped = (UFunction*) UObject::GObjObjects()->Data[ 37288 ];

	UGameAICommand_eventInternalPopped_Parms InternalPopped_Parms;

	ProcessEvent ((UObject*)this, pFnInternalPopped, &InternalPopped_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPushed ( )
{
	static UFunction* pFnInternalPushed = NULL;

	if ( ! pFnInternalPushed )
		pFnInternalPushed = (UFunction*) UObject::GObjObjects()->Data[ 37287 ];

	UGameAICommand_eventInternalPushed_Parms InternalPushed_Parms;

	ProcessEvent ((UObject*)this, pFnInternalPushed, &InternalPushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPrePushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class AGameAIController*       AI                             ( CPF_Parm )

void UGameAICommand::eventInternalPrePushed ( class AGameAIController* AI )
{
	static UFunction* pFnInternalPrePushed = NULL;

	if ( ! pFnInternalPrePushed )
		pFnInternalPrePushed = (UFunction*) UObject::GObjObjects()->Data[ 37285 ];

	UGameAICommand_eventInternalPrePushed_Parms InternalPrePushed_Parms;
	InternalPrePushed_Parms.AI = AI;

	ProcessEvent ((UObject*)this, pFnInternalPrePushed, &InternalPrePushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InitCommand
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )

bool UGameAICommand::InitCommand ( class AGameAIController* AI )
{
	static UFunction* pFnInitCommand = NULL;

	if ( ! pFnInitCommand )
		pFnInitCommand = (UFunction*) UObject::GObjObjects()->Data[ 37281 ];

	UGameAICommand_execInitCommand_Parms InitCommand_Parms;
	InitCommand_Parms.AI = AI;

	ProcessEvent ((UObject*)this, pFnInitCommand, &InitCommand_Parms, NULL );

	return InitCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.InitCommandUserActor
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )
// class AActor*                  UserActor                      ( CPF_Parm )

bool UGameAICommand::InitCommandUserActor ( class AGameAIController* AI, class AActor* UserActor )
{
	static UFunction* pFnInitCommandUserActor = NULL;

	if ( ! pFnInitCommandUserActor )
		pFnInitCommandUserActor = (UFunction*) UObject::GObjObjects()->Data[ 37277 ];

	UGameAICommand_execInitCommandUserActor_Parms InitCommandUserActor_Parms;
	InitCommandUserActor_Parms.AI = AI;
	InitCommandUserActor_Parms.UserActor = UserActor;

	ProcessEvent ((UObject*)this, pFnInitCommandUserActor, &InitCommandUserActor_Parms, NULL );

	return InitCommandUserActor_Parms.ReturnValue;
};

// Function GameFramework.GameCheatManager.OnRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bDidSucceed                    ( CPF_Parm )

void AGameCheatManager::OnRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed )
{
	static UFunction* pFnOnRequestComplete = NULL;

	if ( ! pFnOnRequestComplete )
		pFnOnRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 37604 ];

	AGameCheatManager_execOnRequestComplete_Parms OnRequestComplete_Parms;
	OnRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnRequestComplete_Parms.Response = Response;
	OnRequestComplete_Parms.bDidSucceed = bDidSucceed;

	ProcessEvent ((UObject*)this, pFnOnRequestComplete, &OnRequestComplete_Parms, NULL );
};

// Function GameFramework.GameCheatManager.TestHttp
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Verb                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Payload                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bSendParallelRequest           ( CPF_OptionalParm | CPF_Parm )

void AGameCheatManager::TestHttp ( struct FString Verb, struct FString Payload, struct FString URL, unsigned long bSendParallelRequest )
{
	static UFunction* pFnTestHttp = NULL;

	if ( ! pFnTestHttp )
		pFnTestHttp = (UFunction*) UObject::GObjObjects()->Data[ 37598 ];

	AGameCheatManager_execTestHttp_Parms TestHttp_Parms;
	memcpy ( &TestHttp_Parms.Verb, &Verb, 0xC );
	memcpy ( &TestHttp_Parms.Payload, &Payload, 0xC );
	memcpy ( &TestHttp_Parms.URL, &URL, 0xC );
	TestHttp_Parms.bSendParallelRequest = bSendParallelRequest;

	ProcessEvent ((UObject*)this, pFnTestHttp, &TestHttp_Parms, NULL );
};

// Function GameFramework.GameCheatManager.EnableDebugCamera
// [0x00820002] 
// Parameters infos:
// unsigned long                  bEnableDebugText               ( CPF_Parm )

void AGameCheatManager::EnableDebugCamera ( unsigned long bEnableDebugText )
{
	static UFunction* pFnEnableDebugCamera = NULL;

	if ( ! pFnEnableDebugCamera )
		pFnEnableDebugCamera = (UFunction*) UObject::GObjObjects()->Data[ 37592 ];

	AGameCheatManager_execEnableDebugCamera_Parms EnableDebugCamera_Parms;
	EnableDebugCamera_Parms.bEnableDebugText = bEnableDebugText;

	ProcessEvent ((UObject*)this, pFnEnableDebugCamera, &EnableDebugCamera_Parms, NULL );
};

// Function GameFramework.GameCheatManager.TeleportPawnToCamera
// [0x00824202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bToggleDebugCameraOff          ( CPF_OptionalParm | CPF_Parm )

void AGameCheatManager::TeleportPawnToCamera ( unsigned long bToggleDebugCameraOff )
{
	static UFunction* pFnTeleportPawnToCamera = NULL;

	if ( ! pFnTeleportPawnToCamera )
		pFnTeleportPawnToCamera = (UFunction*) UObject::GObjObjects()->Data[ 37586 ];

	AGameCheatManager_execTeleportPawnToCamera_Parms TeleportPawnToCamera_Parms;
	TeleportPawnToCamera_Parms.bToggleDebugCameraOff = bToggleDebugCameraOff;

	ProcessEvent ((UObject*)this, pFnTeleportPawnToCamera, &TeleportPawnToCamera_Parms, NULL );
};

// Function GameFramework.GameCheatManager.ToggleDebugCamera
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bDrawDebugText                 ( CPF_OptionalParm | CPF_Parm )

void AGameCheatManager::ToggleDebugCamera ( unsigned long bDrawDebugText )
{
	static UFunction* pFnToggleDebugCamera = NULL;

	if ( ! pFnToggleDebugCamera )
		pFnToggleDebugCamera = (UFunction*) UObject::GObjObjects()->Data[ 37582 ];

	AGameCheatManager_execToggleDebugCamera_Parms ToggleDebugCamera_Parms;
	ToggleDebugCamera_Parms.bDrawDebugText = bDrawDebugText;

	ProcessEvent ((UObject*)this, pFnToggleDebugCamera, &ToggleDebugCamera_Parms, NULL );
};

// Function GameFramework.GameCheatManager.EnableAIDebugCamera
// [0x00020000] 
// Parameters infos:

void AGameCheatManager::EnableAIDebugCamera ( )
{
	static UFunction* pFnEnableAIDebugCamera = NULL;

	if ( ! pFnEnableAIDebugCamera )
		pFnEnableAIDebugCamera = (UFunction*) UObject::GObjObjects()->Data[ 37581 ];

	AGameCheatManager_execEnableAIDebugCamera_Parms EnableAIDebugCamera_Parms;

	ProcessEvent ((UObject*)this, pFnEnableAIDebugCamera, &EnableAIDebugCamera_Parms, NULL );
};

// Function GameFramework.GameCheatManager.AIDebugCamera
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AGameCheatManager::AIDebugCamera ( )
{
	static UFunction* pFnAIDebugCamera = NULL;

	if ( ! pFnAIDebugCamera )
		pFnAIDebugCamera = (UFunction*) UObject::GObjObjects()->Data[ 37578 ];

	AGameCheatManager_execAIDebugCamera_Parms AIDebugCamera_Parms;

	ProcessEvent ((UObject*)this, pFnAIDebugCamera, &AIDebugCamera_Parms, NULL );
};

// Function GameFramework.GameCheatManager.PatchDebugCameraController
// [0x00020002] 
// Parameters infos:

void AGameCheatManager::PatchDebugCameraController ( )
{
	static UFunction* pFnPatchDebugCameraController = NULL;

	if ( ! pFnPatchDebugCameraController )
		pFnPatchDebugCameraController = (UFunction*) UObject::GObjObjects()->Data[ 37576 ];

	AGameCheatManager_execPatchDebugCameraController_Parms PatchDebugCameraController_Parms;

	ProcessEvent ((UObject*)this, pFnPatchDebugCameraController, &PatchDebugCameraController_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.InitDebugColor
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgent::InitDebugColor ( )
{
	static UFunction* pFnInitDebugColor = NULL;

	if ( ! pFnInitDebugColor )
		pFnInitDebugColor = (UFunction*) UObject::GObjObjects()->Data[ 37849 ];

	AGameCrowdAgent_execInitDebugColor_Parms InitDebugColor_Parms;

	ProcessEvent ((UObject*)this, pFnInitDebugColor, &InitDebugColor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AGameCrowdAgent::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 37846 ];

	AGameCrowdAgent_execGetBehaviorString_Parms GetBehaviorString_Parms;

	ProcessEvent ((UObject*)this, pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.GetDestString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AGameCrowdAgent::GetDestString ( )
{
	static UFunction* pFnGetDestString = NULL;

	if ( ! pFnGetDestString )
		pFnGetDestString = (UFunction*) UObject::GObjObjects()->Data[ 37843 ];

	AGameCrowdAgent_execGetDestString_Parms GetDestString_Parms;

	ProcessEvent ((UObject*)this, pFnGetDestString, &GetDestString_Parms, NULL );

	return GetDestString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AGameCrowdAgent::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 37827 ];

	AGameCrowdAgent_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	ProcessEvent ((UObject*)this, pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AGameCrowdAgent::NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnNativePostRenderFor = NULL;

	if ( ! pFnNativePostRenderFor )
		pFnNativePostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 37822 ];

	AGameCrowdAgent_execNativePostRenderFor_Parms NativePostRenderFor_Parms;
	NativePostRenderFor_Parms.PC = PC;
	NativePostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &NativePostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &NativePostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	pFnNativePostRenderFor->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnNativePostRenderFor, &NativePostRenderFor_Parms, NULL );

	pFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

struct FVector AGameCrowdAgent::eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToActor = NULL;

	if ( ! pFnGeneratePathToActor )
		pFnGeneratePathToActor = (UFunction*) UObject::GObjObjects()->Data[ 37816 ];

	AGameCrowdAgent_eventGeneratePathToActor_Parms GeneratePathToActor_Parms;
	GeneratePathToActor_Parms.Goal = Goal;
	GeneratePathToActor_Parms.WithinDistance = WithinDistance;
	GeneratePathToActor_Parms.bAllowPartialPath = bAllowPartialPath;

	ProcessEvent ((UObject*)this, pFnGeneratePathToActor, &GeneratePathToActor_Parms, NULL );

	return GeneratePathToActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventInitNavigationHandle ( )
{
	static UFunction* pFnInitNavigationHandle = NULL;

	if ( ! pFnInitNavigationHandle )
		pFnInitNavigationHandle = (UFunction*) UObject::GObjObjects()->Data[ 37815 ];

	AGameCrowdAgent_eventInitNavigationHandle_Parms InitNavigationHandle_Parms;

	ProcessEvent ((UObject*)this, pFnInitNavigationHandle, &InitNavigationHandle_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  A                              ( CPF_Parm )

void AGameCrowdAgent::eventOverlappedActorEvent ( class AActor* A )
{
	static UFunction* pFnOverlappedActorEvent = NULL;

	if ( ! pFnOverlappedActorEvent )
		pFnOverlappedActorEvent = (UFunction*) UObject::GObjObjects()->Data[ 37813 ];

	AGameCrowdAgent_eventOverlappedActorEvent_Parms OverlappedActorEvent_Parms;
	OverlappedActorEvent_Parms.A = A;

	ProcessEvent ((UObject*)this, pFnOverlappedActorEvent, &OverlappedActorEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.TakeDamage
// [0x00024002] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgent::TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 37805 ];

	AGameCrowdAgent_execTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	ProcessEvent ((UObject*)this, pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventFireDeathEvent ( )
{
	static UFunction* pFnFireDeathEvent = NULL;

	if ( ! pFnFireDeathEvent )
		pFnFireDeathEvent = (UFunction*) UObject::GObjObjects()->Data[ 37804 ];

	AGameCrowdAgent_eventFireDeathEvent_Parms FireDeathEvent_Parms;

	ProcessEvent ((UObject*)this, pFnFireDeathEvent, &FireDeathEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlayDeath
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 KillMomentum                   ( CPF_Parm )

void AGameCrowdAgent::PlayDeath ( struct FVector KillMomentum )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 37802 ];

	AGameCrowdAgent_execPlayDeath_Parms PlayDeath_Parms;
	memcpy ( &PlayDeath_Parms.KillMomentum, &KillMomentum, 0xC );

	pFnPlayDeath->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnPlayDeath, &PlayDeath_Parms, NULL );

	pFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  DestinationActor               ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgent::eventUpdateIntermediatePoint ( class AActor* DestinationActor )
{
	static UFunction* pFnUpdateIntermediatePoint = NULL;

	if ( ! pFnUpdateIntermediatePoint )
		pFnUpdateIntermediatePoint = (UFunction*) UObject::GObjObjects()->Data[ 37800 ];

	AGameCrowdAgent_eventUpdateIntermediatePoint_Parms UpdateIntermediatePoint_Parms;
	UpdateIntermediatePoint_Parms.DestinationActor = DestinationActor;

	ProcessEvent ((UObject*)this, pFnUpdateIntermediatePoint, &UpdateIntermediatePoint_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.CalcCamera
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AGameCrowdAgent::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 37792 ];

	AGameCrowdAgent_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.fDeltaTime = fDeltaTime;

	ProcessEvent ((UObject*)this, pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.IsIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdAgent::IsIdle ( )
{
	static UFunction* pFnIsIdle = NULL;

	if ( ! pFnIsIdle )
		pFnIsIdle = (UFunction*) UObject::GObjObjects()->Data[ 37790 ];

	AGameCrowdAgent_execIsIdle_Parms IsIdle_Parms;

	pFnIsIdle->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnIsIdle, &IsIdle_Parms, NULL );

	pFnIsIdle->FunctionFlags |= 0x400;

	return IsIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameCrowdAgentBehavior* BehaviorArchetype              ( CPF_Parm )

void AGameCrowdAgent::SetCurrentBehavior ( class UGameCrowdAgentBehavior* BehaviorArchetype )
{
	static UFunction* pFnSetCurrentBehavior = NULL;

	if ( ! pFnSetCurrentBehavior )
		pFnSetCurrentBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37779 ];

	AGameCrowdAgent_execSetCurrentBehavior_Parms SetCurrentBehavior_Parms;
	SetCurrentBehavior_Parms.BehaviorArchetype = BehaviorArchetype;

	pFnSetCurrentBehavior->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSetCurrentBehavior, &SetCurrentBehavior_Parms, NULL );

	pFnSetCurrentBehavior->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.StopBehavior
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventStopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37788 ];

	AGameCrowdAgent_eventStopBehavior_Parms StopBehavior_Parms;

	ProcessEvent ((UObject*)this, pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  EventType                      ( CPF_Parm )
// class AActor*                  InInstigator                   ( CPF_Parm )
// unsigned long                  bViralCause                    ( CPF_Parm )
// unsigned long                  bPropagateViralFlag            ( CPF_Parm )

void AGameCrowdAgent::eventHandleBehaviorEvent ( unsigned char EventType, class AActor* InInstigator, unsigned long bViralCause, unsigned long bPropagateViralFlag )
{
	static UFunction* pFnHandleBehaviorEvent = NULL;

	if ( ! pFnHandleBehaviorEvent )
		pFnHandleBehaviorEvent = (UFunction*) UObject::GObjObjects()->Data[ 37782 ];

	AGameCrowdAgent_eventHandleBehaviorEvent_Parms HandleBehaviorEvent_Parms;
	HandleBehaviorEvent_Parms.EventType = EventType;
	HandleBehaviorEvent_Parms.InInstigator = InInstigator;
	HandleBehaviorEvent_Parms.bViralCause = bViralCause;
	HandleBehaviorEvent_Parms.bPropagateViralFlag = bPropagateViralFlag;

	ProcessEvent ((UObject*)this, pFnHandleBehaviorEvent, &HandleBehaviorEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// [0x00020002] 
// Parameters infos:
// class UGameCrowdAgentBehavior* NewBehaviorObject              ( CPF_Parm )

void AGameCrowdAgent::ActivateInstancedBehavior ( class UGameCrowdAgentBehavior* NewBehaviorObject )
{
	static UFunction* pFnActivateInstancedBehavior = NULL;

	if ( ! pFnActivateInstancedBehavior )
		pFnActivateInstancedBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37780 ];

	AGameCrowdAgent_execActivateInstancedBehavior_Parms ActivateInstancedBehavior_Parms;
	ActivateInstancedBehavior_Parms.NewBehaviorObject = NewBehaviorObject;

	ProcessEvent ((UObject*)this, pFnActivateInstancedBehavior, &ActivateInstancedBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           ( CPF_Parm )
// class AActor*                  LookAtActor                    ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgent::eventActivateBehavior ( class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor )
{
	static UFunction* pFnActivateBehavior = NULL;

	if ( ! pFnActivateBehavior )
		pFnActivateBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37776 ];

	AGameCrowdAgent_eventActivateBehavior_Parms ActivateBehavior_Parms;
	ActivateBehavior_Parms.NewBehaviorArchetype = NewBehaviorArchetype;
	ActivateBehavior_Parms.LookAtActor = LookAtActor;

	ProcessEvent ((UObject*)this, pFnActivateBehavior, &ActivateBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::ResetSeePlayer ( )
{
	static UFunction* pFnResetSeePlayer = NULL;

	if ( ! pFnResetSeePlayer )
		pFnResetSeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 37775 ];

	AGameCrowdAgent_execResetSeePlayer_Parms ResetSeePlayer_Parms;

	ProcessEvent ((UObject*)this, pFnResetSeePlayer, &ResetSeePlayer_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::TryRandomBehavior ( )
{
	static UFunction* pFnTryRandomBehavior = NULL;

	if ( ! pFnTryRandomBehavior )
		pFnTryRandomBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37772 ];

	AGameCrowdAgent_execTryRandomBehavior_Parms TryRandomBehavior_Parms;

	ProcessEvent ((UObject*)this, pFnTryRandomBehavior, &TryRandomBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void AGameCrowdAgent::eventNotifySeePlayer ( class APlayerController* PC )
{
	static UFunction* pFnNotifySeePlayer = NULL;

	if ( ! pFnNotifySeePlayer )
		pFnNotifySeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 37768 ];

	AGameCrowdAgent_eventNotifySeePlayer_Parms NotifySeePlayer_Parms;
	NotifySeePlayer_Parms.PC = PC;

	ProcessEvent ((UObject*)this, pFnNotifySeePlayer, &NotifySeePlayer_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::PlaySpawnBehavior ( )
{
	static UFunction* pFnPlaySpawnBehavior = NULL;

	if ( ! pFnPlaySpawnBehavior )
		pFnPlaySpawnBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37767 ];

	AGameCrowdAgent_execPlaySpawnBehavior_Parms PlaySpawnBehavior_Parms;

	ProcessEvent ((UObject*)this, pFnPlaySpawnBehavior, &PlaySpawnBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventHandlePotentialAgentEncounter ( )
{
	static UFunction* pFnHandlePotentialAgentEncounter = NULL;

	if ( ! pFnHandlePotentialAgentEncounter )
		pFnHandlePotentialAgentEncounter = (UFunction*) UObject::GObjObjects()->Data[ 37766 ];

	AGameCrowdAgent_eventHandlePotentialAgentEncounter_Parms HandlePotentialAgentEncounter_Parms;

	ProcessEvent ((UObject*)this, pFnHandlePotentialAgentEncounter, &HandlePotentialAgentEncounter_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventStopIdleAnimation ( )
{
	static UFunction* pFnStopIdleAnimation = NULL;

	if ( ! pFnStopIdleAnimation )
		pFnStopIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 37765 ];

	AGameCrowdAgent_eventStopIdleAnimation_Parms StopIdleAnimation_Parms;

	ProcessEvent ((UObject*)this, pFnStopIdleAnimation, &StopIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventPlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 37764 ];

	AGameCrowdAgent_eventPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	ProcessEvent ((UObject*)this, pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// [0x00020102] 
// Parameters infos:
// class USeqAct_PlayAgentAnimation* Action                         ( CPF_Parm )

void AGameCrowdAgent::OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action )
{
	static UFunction* pFnOnPlayAgentAnimation = NULL;

	if ( ! pFnOnPlayAgentAnimation )
		pFnOnPlayAgentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 37762 ];

	AGameCrowdAgent_execOnPlayAgentAnimation_Parms OnPlayAgentAnimation_Parms;
	OnPlayAgentAnimation_Parms.Action = Action;

	ProcessEvent ((UObject*)this, pFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
// [0x00C20102] 
// Parameters infos:
// class AActor*                  SpawnLoc                       ( CPF_Parm )
// class AGameCrowdAgent*         AgentTemplate                  ( CPF_Parm )
// class UGameCrowdGroup*         NewGroup                       ( CPF_Parm )
// float                          AgentWarmupTime                ( CPF_Parm )
// unsigned long                  bWarmupPosition                ( CPF_Parm )
// unsigned long                  bCheckWarmupVisibility         ( CPF_Parm )
// TArray< struct FCrowdSpawnerPlayerInfo > PlayerInfo                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdAgent::InitializeAgent ( class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, unsigned long bWarmupPosition, unsigned long bCheckWarmupVisibility, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo )
{
	static UFunction* pFnInitializeAgent = NULL;

	if ( ! pFnInitializeAgent )
		pFnInitializeAgent = (UFunction*) UObject::GObjObjects()->Data[ 37725 ];

	AGameCrowdAgent_execInitializeAgent_Parms InitializeAgent_Parms;
	InitializeAgent_Parms.SpawnLoc = SpawnLoc;
	InitializeAgent_Parms.AgentTemplate = AgentTemplate;
	InitializeAgent_Parms.NewGroup = NewGroup;
	InitializeAgent_Parms.AgentWarmupTime = AgentWarmupTime;
	InitializeAgent_Parms.bWarmupPosition = bWarmupPosition;
	InitializeAgent_Parms.bCheckWarmupVisibility = bCheckWarmupVisibility;

	ProcessEvent ((UObject*)this, pFnInitializeAgent, &InitializeAgent_Parms, NULL );

	if ( PlayerInfo )
		memcpy ( PlayerInfo, &InitializeAgent_Parms.PlayerInfo, 0xC );
};

// Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Pct                            ( CPF_Parm )
// struct FVector                 CurPos                         ( CPF_Parm )
// float                          CurRadius                      ( CPF_Parm )
// struct FVector                 DestPos                        ( CPF_Parm )
// float                          DestRadius                     ( CPF_Parm )

struct FVector AGameCrowdAgent::GetAttemptedSpawnLocation ( float Pct, struct FVector CurPos, float CurRadius, struct FVector DestPos, float DestRadius )
{
	static UFunction* pFnGetAttemptedSpawnLocation = NULL;

	if ( ! pFnGetAttemptedSpawnLocation )
		pFnGetAttemptedSpawnLocation = (UFunction*) UObject::GObjObjects()->Data[ 37715 ];

	AGameCrowdAgent_execGetAttemptedSpawnLocation_Parms GetAttemptedSpawnLocation_Parms;
	GetAttemptedSpawnLocation_Parms.Pct = Pct;
	memcpy ( &GetAttemptedSpawnLocation_Parms.CurPos, &CurPos, 0xC );
	GetAttemptedSpawnLocation_Parms.CurRadius = CurRadius;
	memcpy ( &GetAttemptedSpawnLocation_Parms.DestPos, &DestPos, 0xC );
	GetAttemptedSpawnLocation_Parms.DestRadius = DestRadius;

	ProcessEvent ((UObject*)this, pFnGetAttemptedSpawnLocation, &GetAttemptedSpawnLocation_Parms, NULL );

	return GetAttemptedSpawnLocation_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetLighting
// [0x00020102] 
// Parameters infos:
// unsigned long                  bEnableLightEnvironment        ( CPF_Parm )
// struct FLightingChannelContainer AgentLightingChannel           ( CPF_Parm )
// unsigned long                  bCastShadows                   ( CPF_Parm )

void AGameCrowdAgent::SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows )
{
	static UFunction* pFnSetLighting = NULL;

	if ( ! pFnSetLighting )
		pFnSetLighting = (UFunction*) UObject::GObjObjects()->Data[ 37711 ];

	AGameCrowdAgent_execSetLighting_Parms SetLighting_Parms;
	SetLighting_Parms.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy ( &SetLighting_Parms.AgentLightingChannel, &AgentLightingChannel, 0x4 );
	SetLighting_Parms.bCastShadows = bCastShadows;

	ProcessEvent ((UObject*)this, pFnSetLighting, &SetLighting_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AGameCrowdAgent::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 37705 ];

	AGameCrowdAgent_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	ProcessEvent ((UObject*)this, pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GameCrowdAgent.Destroyed
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgent::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 37704 ];

	AGameCrowdAgent_execDestroyed_Parms Destroyed_Parms;

	ProcessEvent ((UObject*)this, pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::ResetPooledAgent ( )
{
	static UFunction* pFnResetPooledAgent = NULL;

	if ( ! pFnResetPooledAgent )
		pFnResetPooledAgent = (UFunction*) UObject::GObjObjects()->Data[ 37703 ];

	AGameCrowdAgent_execResetPooledAgent_Parms ResetPooledAgent_Parms;

	ProcessEvent ((UObject*)this, pFnResetPooledAgent, &ResetPooledAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.KillAgent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventKillAgent ( )
{
	static UFunction* pFnKillAgent = NULL;

	if ( ! pFnKillAgent )
		pFnKillAgent = (UFunction*) UObject::GObjObjects()->Data[ 37702 ];

	AGameCrowdAgent_eventKillAgent_Parms KillAgent_Parms;

	ProcessEvent ((UObject*)this, pFnKillAgent, &KillAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
// [0x00820102] 
// Parameters infos:

void AGameCrowdAgent::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37698 ];

	AGameCrowdAgent_execPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::SetMaxSpeed ( )
{
	static UFunction* pFnSetMaxSpeed = NULL;

	if ( ! pFnSetMaxSpeed )
		pFnSetMaxSpeed = (UFunction*) UObject::GObjObjects()->Data[ 37697 ];

	AGameCrowdAgent_execSetMaxSpeed_Parms SetMaxSpeed_Parms;

	ProcessEvent ((UObject*)this, pFnSetMaxSpeed, &SetMaxSpeed_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void AGameCrowdAgent::eventSetCurrentDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnSetCurrentDestination = NULL;

	if ( ! pFnSetCurrentDestination )
		pFnSetCurrentDestination = (UFunction*) UObject::GObjObjects()->Data[ 37695 ];

	AGameCrowdAgent_eventSetCurrentDestination_Parms SetCurrentDestination_Parms;
	SetCurrentDestination_Parms.NewDest = NewDest;

	ProcessEvent ((UObject*)this, pFnSetCurrentDestination, &SetCurrentDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventWaitForGroupMembers ( )
{
	static UFunction* pFnWaitForGroupMembers = NULL;

	if ( ! pFnWaitForGroupMembers )
		pFnWaitForGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 37693 ];

	AGameCrowdAgent_eventWaitForGroupMembers_Parms WaitForGroupMembers_Parms;

	ProcessEvent ((UObject*)this, pFnWaitForGroupMembers, &WaitForGroupMembers_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// [0x00824002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FBehaviorEntry > BehaviorList                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FVector                 BestCameraLoc                  ( CPF_OptionalParm | CPF_Parm )

bool AGameCrowdAgent::PickBehaviorFrom ( TArray< struct FBehaviorEntry > BehaviorList, struct FVector BestCameraLoc )
{
	static UFunction* pFnPickBehaviorFrom = NULL;

	if ( ! pFnPickBehaviorFrom )
		pFnPickBehaviorFrom = (UFunction*) UObject::GObjObjects()->Data[ 37179 ];

	AGameCrowdAgent_execPickBehaviorFrom_Parms PickBehaviorFrom_Parms;
	memcpy ( &PickBehaviorFrom_Parms.BehaviorList, &BehaviorList, 0xC );
	memcpy ( &PickBehaviorFrom_Parms.BestCameraLoc, &BestCameraLoc, 0xC );

	ProcessEvent ((UObject*)this, pFnPickBehaviorFrom, &PickBehaviorFrom_Parms, NULL );

	return PickBehaviorFrom_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.IsPanicked
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdAgent::IsPanicked ( )
{
	static UFunction* pFnIsPanicked = NULL;

	if ( ! pFnIsPanicked )
		pFnIsPanicked = (UFunction*) UObject::GObjObjects()->Data[ 37680 ];

	AGameCrowdAgent_execIsPanicked_Parms IsPanicked_Parms;

	pFnIsPanicked->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnIsPanicked, &IsPanicked_Parms, NULL );

	pFnIsPanicked->FunctionFlags |= 0x400;

	return IsPanicked_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void AGameCrowdAgent::eventFellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 37678 ];

	AGameCrowdAgent_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	ProcessEvent ((UObject*)this, pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.GetCollisionExtent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector AGameCrowdAgent::GetCollisionExtent ( )
{
	static UFunction* pFnGetCollisionExtent = NULL;

	if ( ! pFnGetCollisionExtent )
		pFnGetCollisionExtent = (UFunction*) UObject::GObjObjects()->Data[ 37676 ];

	AGameCrowdAgent_execGetCollisionExtent_Parms GetCollisionExtent_Parms;

	pFnGetCollisionExtent->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetCollisionExtent, &GetCollisionExtent_Parms, NULL );

	pFnGetCollisionExtent->FunctionFlags |= 0x400;

	return GetCollisionExtent_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::CreateAttachments ( )
{
	static UFunction* pFnCreateAttachments = NULL;

	if ( ! pFnCreateAttachments )
		pFnCreateAttachments = (UFunction*) UObject::GObjObjects()->Data[ 37910 ];

	AGameCrowdAgentSkeletal_execCreateAttachments_Parms CreateAttachments_Parms;

	ProcessEvent ((UObject*)this, pFnCreateAttachments, &CreateAttachments_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void AGameCrowdAgentSkeletal::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 37906 ];

	AGameCrowdAgentSkeletal_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	ProcessEvent ((UObject*)this, pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventStopIdleAnimation ( )
{
	static UFunction* pFnStopIdleAnimation = NULL;

	if ( ! pFnStopIdleAnimation )
		pFnStopIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 37905 ];

	AGameCrowdAgentSkeletal_eventStopIdleAnimation_Parms StopIdleAnimation_Parms;

	ProcessEvent ((UObject*)this, pFnStopIdleAnimation, &StopIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventPlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 37904 ];

	AGameCrowdAgentSkeletal_eventPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	ProcessEvent ((UObject*)this, pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventClearLatentAnimation ( )
{
	static UFunction* pFnClearLatentAnimation = NULL;

	if ( ! pFnClearLatentAnimation )
		pFnClearLatentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 37903 ];

	AGameCrowdAgentSkeletal_eventClearLatentAnimation_Parms ClearLatentAnimation_Parms;

	ProcessEvent ((UObject*)this, pFnClearLatentAnimation, &ClearLatentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// [0x00020102] 
// Parameters infos:
// class USeqAct_PlayAgentAnimation* Action                         ( CPF_Parm )

void AGameCrowdAgentSkeletal::OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action )
{
	static UFunction* pFnOnPlayAgentAnimation = NULL;

	if ( ! pFnOnPlayAgentAnimation )
		pFnOnPlayAgentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 37901 ];

	AGameCrowdAgentSkeletal_execOnPlayAgentAnimation_Parms OnPlayAgentAnimation_Parms;
	OnPlayAgentAnimation_Parms.Action = Action;

	ProcessEvent ((UObject*)this, pFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bRootMotionEnabled             ( CPF_Parm )

void AGameCrowdAgentSkeletal::SetRootMotion ( unsigned long bRootMotionEnabled )
{
	static UFunction* pFnSetRootMotion = NULL;

	if ( ! pFnSetRootMotion )
		pFnSetRootMotion = (UFunction*) UObject::GObjObjects()->Data[ 37899 ];

	AGameCrowdAgentSkeletal_execSetRootMotion_Parms SetRootMotion_Parms;
	SetRootMotion_Parms.bRootMotionEnabled = bRootMotionEnabled;

	pFnSetRootMotion->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSetRootMotion, &SetRootMotion_Parms, NULL );

	pFnSetRootMotion->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 KillMomentum                   ( CPF_Parm )

void AGameCrowdAgentSkeletal::PlayDeath ( struct FVector KillMomentum )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 37897 ];

	AGameCrowdAgentSkeletal_execPlayDeath_Parms PlayDeath_Parms;
	memcpy ( &PlayDeath_Parms.KillMomentum, &KillMomentum, 0xC );

	pFnPlayDeath->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnPlayDeath, &PlayDeath_Parms, NULL );

	pFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// [0x00020102] 
// Parameters infos:
// unsigned long                  bEnableLightEnvironment        ( CPF_Parm )
// struct FLightingChannelContainer AgentLightingChannel           ( CPF_Parm )
// unsigned long                  bCastShadows                   ( CPF_Parm )

void AGameCrowdAgentSkeletal::SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows )
{
	static UFunction* pFnSetLighting = NULL;

	if ( ! pFnSetLighting )
		pFnSetLighting = (UFunction*) UObject::GObjObjects()->Data[ 37893 ];

	AGameCrowdAgentSkeletal_execSetLighting_Parms SetLighting_Parms;
	SetLighting_Parms.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy ( &SetLighting_Parms.AgentLightingChannel, &AgentLightingChannel, 0x4 );
	SetLighting_Parms.bCastShadows = bCastShadows;

	ProcessEvent ((UObject*)this, pFnSetLighting, &SetLighting_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37892 ];

	AGameCrowdAgentSkeletal_execPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.StopBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgentSM::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37931 ];

	AGameCrowdAgentSM_execStopBehavior_Parms StopBehavior_Parms;

	ProcessEvent ((UObject*)this, pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.ActivateBehavior
// [0x00024002] 
// Parameters infos:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           ( CPF_Parm )
// class AActor*                  LookAtActor                    ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgentSM::ActivateBehavior ( class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor )
{
	static UFunction* pFnActivateBehavior = NULL;

	if ( ! pFnActivateBehavior )
		pFnActivateBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37928 ];

	AGameCrowdAgentSM_execActivateBehavior_Parms ActivateBehavior_Parms;
	ActivateBehavior_Parms.NewBehaviorArchetype = NewBehaviorArchetype;
	ActivateBehavior_Parms.LookAtActor = LookAtActor;

	ProcessEvent ((UObject*)this, pFnActivateBehavior, &ActivateBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
// [0x00820102] 
// Parameters infos:
// struct FColor                  InC                            ( CPF_Parm )

void AGameCrowdAgentSM::ChangeDebugColor ( struct FColor InC )
{
	static UFunction* pFnChangeDebugColor = NULL;

	if ( ! pFnChangeDebugColor )
		pFnChangeDebugColor = (UFunction*) UObject::GObjObjects()->Data[ 37925 ];

	AGameCrowdAgentSM_execChangeDebugColor_Parms ChangeDebugColor_Parms;
	memcpy ( &ChangeDebugColor_Parms.InC, &InC, 0x4 );

	ProcessEvent ((UObject*)this, pFnChangeDebugColor, &ChangeDebugColor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.InitDebugColor
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSM::InitDebugColor ( )
{
	static UFunction* pFnInitDebugColor = NULL;

	if ( ! pFnInitDebugColor )
		pFnInitDebugColor = (UFunction*) UObject::GObjObjects()->Data[ 37924 ];

	AGameCrowdAgentSM_execInitDebugColor_Parms InitDebugColor_Parms;

	ProcessEvent ((UObject*)this, pFnInitDebugColor, &InitDebugColor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSM::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37923 ];

	AGameCrowdAgentSM_execPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdAgentBehavior::AllowBehaviorAt ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowBehaviorAt = NULL;

	if ( ! pFnAllowBehaviorAt )
		pFnAllowBehaviorAt = (UFunction*) UObject::GObjObjects()->Data[ 37177 ];

	UGameCrowdAgentBehavior_execAllowBehaviorAt_Parms AllowBehaviorAt_Parms;
	AllowBehaviorAt_Parms.Destination = Destination;

	ProcessEvent ((UObject*)this, pFnAllowBehaviorAt, &AllowBehaviorAt_Parms, NULL );

	return AllowBehaviorAt_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdAgentBehavior::AllowThisDestination ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowThisDestination = NULL;

	if ( ! pFnAllowThisDestination )
		pFnAllowThisDestination = (UFunction*) UObject::GObjObjects()->Data[ 37210 ];

	UGameCrowdAgentBehavior_execAllowThisDestination_Parms AllowThisDestination_Parms;
	AllowThisDestination_Parms.Destination = Destination;

	ProcessEvent ((UObject*)this, pFnAllowThisDestination, &AllowThisDestination_Parms, NULL );

	return AllowThisDestination_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         OtherAgent                     ( CPF_Parm )

void UGameCrowdAgentBehavior::eventPropagateViralBehaviorTo ( class AGameCrowdAgent* OtherAgent )
{
	static UFunction* pFnPropagateViralBehaviorTo = NULL;

	if ( ! pFnPropagateViralBehaviorTo )
		pFnPropagateViralBehaviorTo = (UFunction*) UObject::GObjObjects()->Data[ 37672 ];

	UGameCrowdAgentBehavior_eventPropagateViralBehaviorTo_Parms PropagateViralBehaviorTo_Parms;
	PropagateViralBehaviorTo_Parms.OtherAgent = OtherAgent;

	ProcessEvent ((UObject*)this, pFnPropagateViralBehaviorTo, &PropagateViralBehaviorTo_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdAgentBehavior::GetBehaviorInstigator ( )
{
	static UFunction* pFnGetBehaviorInstigator = NULL;

	if ( ! pFnGetBehaviorInstigator )
		pFnGetBehaviorInstigator = (UFunction*) UObject::GObjObjects()->Data[ 37670 ];

	UGameCrowdAgentBehavior_execGetBehaviorInstigator_Parms GetBehaviorInstigator_Parms;

	ProcessEvent ((UObject*)this, pFnGetBehaviorInstigator, &GetBehaviorInstigator_Parms, NULL );

	return GetBehaviorInstigator_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// [0x00020002] 
// Parameters infos:
// class AActor*                  NewActionTarget                ( CPF_Parm )

void UGameCrowdAgentBehavior::ActivatedBy ( class AActor* NewActionTarget )
{
	static UFunction* pFnActivatedBy = NULL;

	if ( ! pFnActivatedBy )
		pFnActivatedBy = (UFunction*) UObject::GObjObjects()->Data[ 37668 ];

	UGameCrowdAgentBehavior_execActivatedBy_Parms ActivatedBy_Parms;
	ActivatedBy_Parms.NewActionTarget = NewActionTarget;

	ProcessEvent ((UObject*)this, pFnActivatedBy, &ActivatedBy_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdAgentBehavior::GetDestinationActor ( )
{
	static UFunction* pFnGetDestinationActor = NULL;

	if ( ! pFnGetDestinationActor )
		pFnGetDestinationActor = (UFunction*) UObject::GObjObjects()->Data[ 37666 ];

	UGameCrowdAgentBehavior_execGetDestinationActor_Parms GetDestinationActor_Parms;

	ProcessEvent ((UObject*)this, pFnGetDestinationActor, &GetDestinationActor_Parms, NULL );

	return GetDestinationActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// [0x00020000] 
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void UGameCrowdAgentBehavior::ChangingDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnChangingDestination = NULL;

	if ( ! pFnChangingDestination )
		pFnChangingDestination = (UFunction*) UObject::GObjObjects()->Data[ 37664 ];

	UGameCrowdAgentBehavior_execChangingDestination_Parms ChangingDestination_Parms;
	ChangingDestination_Parms.NewDest = NewDest;

	ProcessEvent ((UObject*)this, pFnChangingDestination, &ChangingDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdAgentBehavior::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 37662 ];

	UGameCrowdAgentBehavior_execGetBehaviorString_Parms GetBehaviorString_Parms;

	ProcessEvent ((UObject*)this, pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void UGameCrowdAgentBehavior::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 37658 ];

	UGameCrowdAgentBehavior_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	ProcessEvent ((UObject*)this, pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// [0x00020000] 
// Parameters infos:

void UGameCrowdAgentBehavior::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37657 ];

	UGameCrowdAgentBehavior_execStopBehavior_Parms StopBehavior_Parms;

	ProcessEvent ((UObject*)this, pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdAgentBehavior::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37655 ];

	UGameCrowdAgentBehavior_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdAgentBehavior::HandleMovement ( )
{
	static UFunction* pFnHandleMovement = NULL;

	if ( ! pFnHandleMovement )
		pFnHandleMovement = (UFunction*) UObject::GObjObjects()->Data[ 37653 ];

	UGameCrowdAgentBehavior_execHandleMovement_Parms HandleMovement_Parms;

	pFnHandleMovement->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnHandleMovement, &HandleMovement_Parms, NULL );

	pFnHandleMovement->FunctionFlags |= 0x400;

	return HandleMovement_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameCrowdAgentBehavior::eventFinishedTargetRotation ( )
{
	static UFunction* pFnFinishedTargetRotation = NULL;

	if ( ! pFnFinishedTargetRotation )
		pFnFinishedTargetRotation = (UFunction*) UObject::GObjObjects()->Data[ 37652 ];

	UGameCrowdAgentBehavior_eventFinishedTargetRotation_Parms FinishedTargetRotation_Parms;

	ProcessEvent ((UObject*)this, pFnFinishedTargetRotation, &FinishedTargetRotation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 CameraLoc                      ( CPF_Parm )

bool UGameCrowdAgentBehavior::CanBeUsedBy ( class AGameCrowdAgent* Agent, struct FVector CameraLoc )
{
	static UFunction* pFnCanBeUsedBy = NULL;

	if ( ! pFnCanBeUsedBy )
		pFnCanBeUsedBy = (UFunction*) UObject::GObjObjects()->Data[ 37648 ];

	UGameCrowdAgentBehavior_execCanBeUsedBy_Parms CanBeUsedBy_Parms;
	CanBeUsedBy_Parms.Agent = Agent;
	memcpy ( &CanBeUsedBy_Parms.CameraLoc, &CameraLoc, 0xC );

	ProcessEvent ((UObject*)this, pFnCanBeUsedBy, &CanBeUsedBy_Parms, NULL );

	return CanBeUsedBy_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameCrowdAgentBehavior::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 37646 ];

	UGameCrowdAgentBehavior_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	pFnTick->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnTick, &Tick_Parms, NULL );

	pFnTick->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdAgentBehavior::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 37644 ];

	UGameCrowdAgentBehavior_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
// [0x00026400] ( FUNC_Native )
// Parameters infos:
// class AGameCrowdBehaviorPoint* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// class AActor*                  Instigator                     ( CPF_Parm )
// struct FVector                 AtLocation                     ( CPF_Parm )
// float                          InRange                        ( CPF_Parm )
// float                          InDuration                     ( CPF_Parm )
// class AActor*                  BaseActor                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRequireLOS                    ( CPF_OptionalParm | CPF_Parm )

class AGameCrowdBehaviorPoint* UGameCrowdAgentBehavior::TriggerCrowdBehavior ( unsigned char EventType, class AActor* Instigator, struct FVector AtLocation, float InRange, float InDuration, class AActor* BaseActor, unsigned long bRequireLOS )
{
	static UFunction* pFnTriggerCrowdBehavior = NULL;

	if ( ! pFnTriggerCrowdBehavior )
		pFnTriggerCrowdBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37635 ];

	UGameCrowdAgentBehavior_execTriggerCrowdBehavior_Parms TriggerCrowdBehavior_Parms;
	TriggerCrowdBehavior_Parms.EventType = EventType;
	TriggerCrowdBehavior_Parms.Instigator = Instigator;
	memcpy ( &TriggerCrowdBehavior_Parms.AtLocation, &AtLocation, 0xC );
	TriggerCrowdBehavior_Parms.InRange = InRange;
	TriggerCrowdBehavior_Parms.InDuration = InDuration;
	TriggerCrowdBehavior_Parms.BaseActor = BaseActor;
	TriggerCrowdBehavior_Parms.bRequireLOS = bRequireLOS;

	pFnTriggerCrowdBehavior->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnTriggerCrowdBehavior, &TriggerCrowdBehavior_Parms, NULL );

	pFnTriggerCrowdBehavior->FunctionFlags |= 0x400;

	return TriggerCrowdBehavior_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_PlayAnimation::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 37965 ];

	UGameCrowdBehavior_PlayAnimation_execGetBehaviorString_Parms GetBehaviorString_Parms;

	ProcessEvent ((UObject*)this, pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37964 ];

	UGameCrowdBehavior_PlayAnimation_execStopBehavior_Parms StopBehavior_Parms;

	ProcessEvent ((UObject*)this, pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow ( )
{
	static UFunction* pFnPlayAgentAnimationNow = NULL;

	if ( ! pFnPlayAgentAnimationNow )
		pFnPlayAgentAnimationNow = (UFunction*) UObject::GObjObjects()->Data[ 37960 ];

	UGameCrowdBehavior_PlayAnimation_execPlayAgentAnimationNow_Parms PlayAgentAnimationNow_Parms;

	ProcessEvent ((UObject*)this, pFnPlayAgentAnimationNow, &PlayAgentAnimationNow_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void UGameCrowdBehavior_PlayAnimation::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 37956 ];

	UGameCrowdBehavior_PlayAnimation_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	ProcessEvent ((UObject*)this, pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput ( )
{
	static UFunction* pFnSetSequenceOutput = NULL;

	if ( ! pFnSetSequenceOutput )
		pFnSetSequenceOutput = (UFunction*) UObject::GObjObjects()->Data[ 37955 ];

	UGameCrowdBehavior_PlayAnimation_execSetSequenceOutput_Parms SetSequenceOutput_Parms;

	pFnSetSequenceOutput->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSetSequenceOutput, &SetSequenceOutput_Parms, NULL );

	pFnSetSequenceOutput->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::eventFinishedTargetRotation ( )
{
	static UFunction* pFnFinishedTargetRotation = NULL;

	if ( ! pFnFinishedTargetRotation )
		pFnFinishedTargetRotation = (UFunction*) UObject::GObjObjects()->Data[ 37954 ];

	UGameCrowdBehavior_PlayAnimation_eventFinishedTargetRotation_Parms FinishedTargetRotation_Parms;

	ProcessEvent ((UObject*)this, pFnFinishedTargetRotation, &FinishedTargetRotation_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_PlayAnimation::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37947 ];

	UGameCrowdBehavior_PlayAnimation_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_RunFromPanic::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 37984 ];

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorString_Parms GetBehaviorString_Parms;

	ProcessEvent ((UObject*)this, pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowBehaviorAt = NULL;

	if ( ! pFnAllowBehaviorAt )
		pFnAllowBehaviorAt = (UFunction*) UObject::GObjObjects()->Data[ 37981 ];

	UGameCrowdBehavior_RunFromPanic_execAllowBehaviorAt_Parms AllowBehaviorAt_Parms;
	AllowBehaviorAt_Parms.Destination = Destination;

	ProcessEvent ((UObject*)this, pFnAllowBehaviorAt, &AllowBehaviorAt_Parms, NULL );

	return AllowBehaviorAt_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdBehavior_RunFromPanic::AllowThisDestination ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowThisDestination = NULL;

	if ( ! pFnAllowThisDestination )
		pFnAllowThisDestination = (UFunction*) UObject::GObjObjects()->Data[ 37978 ];

	UGameCrowdBehavior_RunFromPanic_execAllowThisDestination_Parms AllowThisDestination_Parms;
	AllowThisDestination_Parms.Destination = Destination;

	ProcessEvent ((UObject*)this, pFnAllowThisDestination, &AllowThisDestination_Parms, NULL );

	return AllowThisDestination_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdBehavior_RunFromPanic::GetBehaviorInstigator ( )
{
	static UFunction* pFnGetBehaviorInstigator = NULL;

	if ( ! pFnGetBehaviorInstigator )
		pFnGetBehaviorInstigator = (UFunction*) UObject::GObjObjects()->Data[ 37976 ];

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorInstigator_Parms GetBehaviorInstigator_Parms;

	ProcessEvent ((UObject*)this, pFnGetBehaviorInstigator, &GetBehaviorInstigator_Parms, NULL );

	return GetBehaviorInstigator_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_RunFromPanic::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37975 ];

	UGameCrowdBehavior_RunFromPanic_execStopBehavior_Parms StopBehavior_Parms;

	ProcessEvent ((UObject*)this, pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_RunFromPanic::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37973 ];

	UGameCrowdBehavior_RunFromPanic_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// [0x00020002] 
// Parameters infos:
// class AActor*                  NewActionTarget                ( CPF_Parm )

void UGameCrowdBehavior_RunFromPanic::ActivatedBy ( class AActor* NewActionTarget )
{
	static UFunction* pFnActivatedBy = NULL;

	if ( ! pFnActivatedBy )
		pFnActivatedBy = (UFunction*) UObject::GObjObjects()->Data[ 37969 ];

	UGameCrowdBehavior_RunFromPanic_execActivatedBy_Parms ActivatedBy_Parms;
	ActivatedBy_Parms.NewActionTarget = NewActionTarget;

	ProcessEvent ((UObject*)this, pFnActivatedBy, &ActivatedBy_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitForGroup::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37993 ];

	UGameCrowdBehavior_WaitForGroup_execStopBehavior_Parms StopBehavior_Parms;

	ProcessEvent ((UObject*)this, pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitForGroup::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 37991 ];

	UGameCrowdBehavior_WaitForGroup_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_WaitForGroup::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 37988 ];

	UGameCrowdBehavior_WaitForGroup_execGetBehaviorString_Parms GetBehaviorString_Parms;

	ProcessEvent ((UObject*)this, pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_WaitForGroup::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37986 ];

	UGameCrowdBehavior_WaitForGroup_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitInQueue::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 38006 ];

	UGameCrowdBehavior_WaitInQueue_execStopBehavior_Parms StopBehavior_Parms;

	ProcessEvent ((UObject*)this, pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitInQueue::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 38004 ];

	UGameCrowdBehavior_WaitInQueue_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_WaitInQueue::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 38002 ];

	UGameCrowdBehavior_WaitInQueue_execGetBehaviorString_Parms GetBehaviorString_Parms;

	ProcessEvent ((UObject*)this, pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdBehavior_WaitInQueue::GetDestinationActor ( )
{
	static UFunction* pFnGetDestinationActor = NULL;

	if ( ! pFnGetDestinationActor )
		pFnGetDestinationActor = (UFunction*) UObject::GObjObjects()->Data[ 38000 ];

	UGameCrowdBehavior_WaitInQueue_execGetDestinationActor_Parms GetDestinationActor_Parms;

	ProcessEvent ((UObject*)this, pFnGetDestinationActor, &GetDestinationActor_Parms, NULL );

	return GetDestinationActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void UGameCrowdBehavior_WaitInQueue::ChangingDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnChangingDestination = NULL;

	if ( ! pFnChangingDestination )
		pFnChangingDestination = (UFunction*) UObject::GObjObjects()->Data[ 37998 ];

	UGameCrowdBehavior_WaitInQueue_execChangingDestination_Parms ChangingDestination_Parms;
	ChangingDestination_Parms.NewDest = NewDest;

	ProcessEvent ((UObject*)this, pFnChangingDestination, &ChangingDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitInQueue::HandleMovement ( )
{
	static UFunction* pFnHandleMovement = NULL;

	if ( ! pFnHandleMovement )
		pFnHandleMovement = (UFunction*) UObject::GObjObjects()->Data[ 37996 ];

	UGameCrowdBehavior_WaitInQueue_execHandleMovement_Parms HandleMovement_Parms;

	pFnHandleMovement->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnHandleMovement, &HandleMovement_Parms, NULL );

	pFnHandleMovement->FunctionFlags |= 0x400;

	return HandleMovement_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   NewDestination                 ( CPF_Parm )

void UGameCrowdGroup::UpdateDestinations ( class AGameCrowdDestination* NewDestination )
{
	static UFunction* pFnUpdateDestinations = NULL;

	if ( ! pFnUpdateDestinations )
		pFnUpdateDestinations = (UFunction*) UObject::GObjObjects()->Data[ 38050 ];

	UGameCrowdGroup_execUpdateDestinations_Parms UpdateDestinations_Parms;
	UpdateDestinations_Parms.NewDestination = NewDestination;

	ProcessEvent ((UObject*)this, pFnUpdateDestinations, &UpdateDestinations_Parms, NULL );
};

// Function GameFramework.GameCrowdGroup.RemoveMember
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdGroup::RemoveMember ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnRemoveMember = NULL;

	if ( ! pFnRemoveMember )
		pFnRemoveMember = (UFunction*) UObject::GObjObjects()->Data[ 38048 ];

	UGameCrowdGroup_execRemoveMember_Parms RemoveMember_Parms;
	RemoveMember_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnRemoveMember, &RemoveMember_Parms, NULL );
};

// Function GameFramework.GameCrowdGroup.AddMember
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdGroup::AddMember ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAddMember = NULL;

	if ( ! pFnAddMember )
		pFnAddMember = (UFunction*) UObject::GObjObjects()->Data[ 38046 ];

	UGameCrowdGroup_execAddMember_Parms AddMember_Parms;
	AddMember_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnAddMember, &AddMember_Parms, NULL );
};

// Function GameFramework.GameCrowdInfoVolume.UnTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AGameCrowdInfoVolume::UnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 38062 ];

	AGameCrowdInfoVolume_execUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	ProcessEvent ((UObject*)this, pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function GameFramework.GameCrowdInfoVolume.Touch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AGameCrowdInfoVolume::Touch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 38055 ];

	AGameCrowdInfoVolume_execTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	ProcessEvent ((UObject*)this, pFnTouch, &Touch_Parms, NULL );
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// [0x00020002] 
// Parameters infos:
// class USeqAct_Toggle*          Action                         ( CPF_Parm )

void AGameCrowdInteractionPoint::OnToggle ( class USeqAct_Toggle* Action )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 36884 ];

	AGameCrowdInteractionPoint_execOnToggle_Parms OnToggle_Parms;
	OnToggle_Parms.Action = Action;

	ProcessEvent ((UObject*)this, pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function GameFramework.GameCrowdBehaviorPoint.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AGameCrowdBehaviorPoint::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 38014 ];

	AGameCrowdBehaviorPoint_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	ProcessEvent ((UObject*)this, pFnTouch, &Touch_Parms, NULL );
};

// Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
// [0x00020002] 
// Parameters infos:

void AGameCrowdBehaviorPoint::DestroySelf ( )
{
	static UFunction* pFnDestroySelf = NULL;

	if ( ! pFnDestroySelf )
		pFnDestroySelf = (UFunction*) UObject::GObjObjects()->Data[ 38013 ];

	AGameCrowdBehaviorPoint_execDestroySelf_Parms DestroySelf_Parms;

	ProcessEvent ((UObject*)this, pFnDestroySelf, &DestroySelf_Parms, NULL );
};

// Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdBehaviorPoint::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 38012 ];

	AGameCrowdBehaviorPoint_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.DrawDebug
// [0x00C24102] 
// Parameters infos:
// unsigned long                  bPresistent                    ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FCrowdSpawnerPlayerInfo > PlayerInfo                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdDestination::DrawDebug ( unsigned long bPresistent, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 37244 ];

	AGameCrowdDestination_execDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.bPresistent = bPresistent;

	ProcessEvent ((UObject*)this, pFnDrawDebug, &DrawDebug_Parms, NULL );

	if ( PlayerInfo )
		memcpy ( PlayerInfo, &DrawDebug_Parms.PlayerInfo, 0xC );
};

// Function GameFramework.GameCrowdDestination.GetDestinationRadius
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGameCrowdDestination::GetDestinationRadius ( )
{
	static UFunction* pFnGetDestinationRadius = NULL;

	if ( ! pFnGetDestinationRadius )
		pFnGetDestinationRadius = (UFunction*) UObject::GObjObjects()->Data[ 37242 ];

	AGameCrowdDestination_execGetDestinationRadius_Parms GetDestinationRadius_Parms;

	ProcessEvent ((UObject*)this, pFnGetDestinationRadius, &GetDestinationRadius_Parms, NULL );

	return GetDestinationRadius_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
// [0x00420102] 
// Parameters infos:
// float                          MaxSpawnDist                   ( CPF_Parm )
// TArray< struct FCrowdSpawnerPlayerInfo > PlayerInfo                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdDestination::PrioritizeSpawnPoint ( float MaxSpawnDist, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo )
{
	static UFunction* pFnPrioritizeSpawnPoint = NULL;

	if ( ! pFnPrioritizeSpawnPoint )
		pFnPrioritizeSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 37236 ];

	AGameCrowdDestination_execPrioritizeSpawnPoint_Parms PrioritizeSpawnPoint_Parms;
	PrioritizeSpawnPoint_Parms.MaxSpawnDist = MaxSpawnDist;

	ProcessEvent ((UObject*)this, pFnPrioritizeSpawnPoint, &PrioritizeSpawnPoint_Parms, NULL );

	if ( PlayerInfo )
		memcpy ( PlayerInfo, &PrioritizeSpawnPoint_Parms.PlayerInfo, 0xC );
};

// Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          MaxSpawnDistSq                 ( CPF_Parm )
// unsigned long                  bForceNavMeshPathing           ( CPF_Parm )
// class UNavigationHandle*       NavHandle                      ( CPF_Parm )
// TArray< struct FCrowdSpawnerPlayerInfo > PlayerInfo                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AGameCrowdDestination::AnalyzeSpawnPoint ( float MaxSpawnDistSq, unsigned long bForceNavMeshPathing, class UNavigationHandle* NavHandle, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo )
{
	static UFunction* pFnAnalyzeSpawnPoint = NULL;

	if ( ! pFnAnalyzeSpawnPoint )
		pFnAnalyzeSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 37221 ];

	AGameCrowdDestination_execAnalyzeSpawnPoint_Parms AnalyzeSpawnPoint_Parms;
	AnalyzeSpawnPoint_Parms.MaxSpawnDistSq = MaxSpawnDistSq;
	AnalyzeSpawnPoint_Parms.bForceNavMeshPathing = bForceNavMeshPathing;
	AnalyzeSpawnPoint_Parms.NavHandle = NavHandle;

	ProcessEvent ((UObject*)this, pFnAnalyzeSpawnPoint, &AnalyzeSpawnPoint_Parms, NULL );

	if ( PlayerInfo )
		memcpy ( PlayerInfo, &AnalyzeSpawnPoint_Parms.PlayerInfo, 0xC );

	return AnalyzeSpawnPoint_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// [0x00C20102] 
// Parameters infos:
// class USeqAct_GameCrowdSpawner* Spawner                        ( CPF_Parm )
// struct FVector                 SpawnPos                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void AGameCrowdDestination::GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 37215 ];

	AGameCrowdDestination_execGetSpawnPosition_Parms GetSpawnPosition_Parms;
	GetSpawnPosition_Parms.Spawner = Spawner;

	ProcessEvent ((UObject*)this, pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );

	if ( SpawnPos )
		memcpy ( SpawnPos, &GetSpawnPosition_Parms.SpawnPos, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetSpawnPosition_Parms.SpawnRot, 0xC );
};

// Function GameFramework.GameCrowdDestination.GetSpawnRadius
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGameCrowdDestination::GetSpawnRadius ( )
{
	static UFunction* pFnGetSpawnRadius = NULL;

	if ( ! pFnGetSpawnRadius )
		pFnGetSpawnRadius = (UFunction*) UObject::GObjObjects()->Data[ 37213 ];

	AGameCrowdDestination_execGetSpawnRadius_Parms GetSpawnRadius_Parms;

	ProcessEvent ((UObject*)this, pFnGetSpawnRadius, &GetSpawnRadius_Parms, NULL );

	return GetSpawnRadius_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

bool AGameCrowdDestination::eventAllowableDestinationFor ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAllowableDestinationFor = NULL;

	if ( ! pFnAllowableDestinationFor )
		pFnAllowableDestinationFor = (UFunction*) UObject::GObjObjects()->Data[ 37189 ];

	AGameCrowdDestination_eventAllowableDestinationFor_Parms AllowableDestinationFor_Parms;
	AllowableDestinationFor_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnAllowableDestinationFor, &AllowableDestinationFor_Parms, NULL );

	return AllowableDestinationFor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.AtCapacity
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  CheckCnt                       ( CPF_OptionalParm | CPF_Parm )

bool AGameCrowdDestination::AtCapacity ( unsigned char CheckCnt )
{
	static UFunction* pFnAtCapacity = NULL;

	if ( ! pFnAtCapacity )
		pFnAtCapacity = (UFunction*) UObject::GObjObjects()->Data[ 37204 ];

	AGameCrowdDestination_execAtCapacity_Parms AtCapacity_Parms;
	AtCapacity_Parms.CheckCnt = CheckCnt;

	ProcessEvent ((UObject*)this, pFnAtCapacity, &AtCapacity_Parms, NULL );

	return AtCapacity_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         ArrivingAgent                  ( CPF_Parm )

void AGameCrowdDestination::eventIncrementCustomerCount ( class AGameCrowdAgent* ArrivingAgent )
{
	static UFunction* pFnIncrementCustomerCount = NULL;

	if ( ! pFnIncrementCustomerCount )
		pFnIncrementCustomerCount = (UFunction*) UObject::GObjObjects()->Data[ 37199 ];

	AGameCrowdDestination_eventIncrementCustomerCount_Parms IncrementCustomerCount_Parms;
	IncrementCustomerCount_Parms.ArrivingAgent = ArrivingAgent;

	ProcessEvent ((UObject*)this, pFnIncrementCustomerCount, &IncrementCustomerCount_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         DepartingAgent                 ( CPF_Parm )

void AGameCrowdDestination::eventDecrementCustomerCount ( class AGameCrowdAgent* DepartingAgent )
{
	static UFunction* pFnDecrementCustomerCount = NULL;

	if ( ! pFnDecrementCustomerCount )
		pFnDecrementCustomerCount = (UFunction*) UObject::GObjObjects()->Data[ 37191 ];

	AGameCrowdDestination_eventDecrementCustomerCount_Parms DecrementCustomerCount_Parms;
	DecrementCustomerCount_Parms.DepartingAgent = DepartingAgent;

	ProcessEvent ((UObject*)this, pFnDecrementCustomerCount, &DecrementCustomerCount_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// [0x00020102] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// unsigned long                  bIgnoreRestrictions            ( CPF_Parm )

void AGameCrowdDestination::PickNewDestinationFor ( class AGameCrowdAgent* Agent, unsigned long bIgnoreRestrictions )
{
	static UFunction* pFnPickNewDestinationFor = NULL;

	if ( ! pFnPickNewDestinationFor )
		pFnPickNewDestinationFor = (UFunction*) UObject::GObjObjects()->Data[ 37181 ];

	AGameCrowdDestination_execPickNewDestinationFor_Parms PickNewDestinationFor_Parms;
	PickNewDestinationFor_Parms.Agent = Agent;
	PickNewDestinationFor_Parms.bIgnoreRestrictions = bIgnoreRestrictions;

	ProcessEvent ((UObject*)this, pFnPickNewDestinationFor, &PickNewDestinationFor_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGameCrowdDestination::eventReachedDestination ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnReachedDestination = NULL;

	if ( ! pFnReachedDestination )
		pFnReachedDestination = (UFunction*) UObject::GObjObjects()->Data[ 37171 ];

	AGameCrowdDestination_eventReachedDestination_Parms ReachedDestination_Parms;
	ReachedDestination_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnReachedDestination, &ReachedDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.Destroyed
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestination::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 37170 ];

	AGameCrowdDestination_execDestroyed_Parms Destroyed_Parms;

	ProcessEvent ((UObject*)this, pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestination::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37167 ];

	AGameCrowdDestination_execPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 TestPosition                   ( CPF_Parm )
// unsigned long                  bTestExactly                   ( CPF_Parm )

bool AGameCrowdDestination::ReachedByAgent ( class AGameCrowdAgent* Agent, struct FVector TestPosition, unsigned long bTestExactly )
{
	static UFunction* pFnReachedByAgent = NULL;

	if ( ! pFnReachedByAgent )
		pFnReachedByAgent = (UFunction*) UObject::GObjObjects()->Data[ 37162 ];

	AGameCrowdDestination_execReachedByAgent_Parms ReachedByAgent_Parms;
	ReachedByAgent_Parms.Agent = Agent;
	memcpy ( &ReachedByAgent_Parms.TestPosition, &TestPosition, 0xC );
	ReachedByAgent_Parms.bTestExactly = bTestExactly;

	pFnReachedByAgent->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnReachedByAgent, &ReachedByAgent_Parms, NULL );

	pFnReachedByAgent->FunctionFlags |= 0x400;

	return ReachedByAgent_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdDestinationQueuePoint::HasCustomer ( )
{
	static UFunction* pFnHasCustomer = NULL;

	if ( ! pFnHasCustomer )
		pFnHasCustomer = (UFunction*) UObject::GObjObjects()->Data[ 37197 ];

	AGameCrowdDestinationQueuePoint_execHasCustomer_Parms HasCustomer_Parms;

	ProcessEvent ((UObject*)this, pFnHasCustomer, &HasCustomer_Parms, NULL );

	return HasCustomer_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// [0x00020102] 
// Parameters infos:
// class AGameCrowdAgent*         OldCustomer                    ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::ClearQueue ( class AGameCrowdAgent* OldCustomer )
{
	static UFunction* pFnClearQueue = NULL;

	if ( ! pFnClearQueue )
		pFnClearQueue = (UFunction*) UObject::GObjObjects()->Data[ 38042 ];

	AGameCrowdDestinationQueuePoint_execClearQueue_Parms ClearQueue_Parms;
	ClearQueue_Parms.OldCustomer = OldCustomer;

	ProcessEvent ((UObject*)this, pFnClearQueue, &ClearQueue_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// [0x00020102] 
// Parameters infos:
// class AGameCrowdAgent*         NewCustomer                    ( CPF_Parm )
// class AGameCrowdInteractionPoint* PreviousPosition               ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::AddCustomer ( class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition )
{
	static UFunction* pFnAddCustomer = NULL;

	if ( ! pFnAddCustomer )
		pFnAddCustomer = (UFunction*) UObject::GObjObjects()->Data[ 38039 ];

	AGameCrowdDestinationQueuePoint_execAddCustomer_Parms AddCustomer_Parms;
	AddCustomer_Parms.NewCustomer = NewCustomer;
	AddCustomer_Parms.PreviousPosition = PreviousPosition;

	ProcessEvent ((UObject*)this, pFnAddCustomer, &AddCustomer_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// [0x00040103] ( FUNC_Final )
// Parameters infos:

void AGameCrowdDestinationQueuePoint::ActuallyAdvance ( )
{
	static UFunction* pFnActuallyAdvance = NULL;

	if ( ! pFnActuallyAdvance )
		pFnActuallyAdvance = (UFunction*) UObject::GObjObjects()->Data[ 38035 ];

	AGameCrowdDestinationQueuePoint_execActuallyAdvance_Parms ActuallyAdvance_Parms;

	ProcessEvent ((UObject*)this, pFnActuallyAdvance, &ActuallyAdvance_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// [0x00020102] 
// Parameters infos:
// class AGameCrowdInteractionPoint* FrontPosition                  ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo ( class AGameCrowdInteractionPoint* FrontPosition )
{
	static UFunction* pFnAdvanceCustomerTo = NULL;

	if ( ! pFnAdvanceCustomerTo )
		pFnAdvanceCustomerTo = (UFunction*) UObject::GObjObjects()->Data[ 38033 ];

	AGameCrowdDestinationQueuePoint_execAdvanceCustomerTo_Parms AdvanceCustomerTo_Parms;
	AdvanceCustomerTo_Parms.FrontPosition = FrontPosition;

	ProcessEvent ((UObject*)this, pFnAdvanceCustomerTo, &AdvanceCustomerTo_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::eventReachedDestination ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnReachedDestination = NULL;

	if ( ! pFnReachedDestination )
		pFnReachedDestination = (UFunction*) UObject::GObjObjects()->Data[ 38030 ];

	AGameCrowdDestinationQueuePoint_eventReachedDestination_Parms ReachedDestination_Parms;
	ReachedDestination_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnReachedDestination, &ReachedDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdDestinationQueuePoint::HasSpace ( )
{
	static UFunction* pFnHasSpace = NULL;

	if ( ! pFnHasSpace )
		pFnHasSpace = (UFunction*) UObject::GObjObjects()->Data[ 37202 ];

	AGameCrowdDestinationQueuePoint_execHasSpace_Parms HasSpace_Parms;

	ProcessEvent ((UObject*)this, pFnHasSpace, &HasSpace_Parms, NULL );

	return HasSpace_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 TestPosition                   ( CPF_Parm )

bool AGameCrowdDestinationQueuePoint::QueueReachedBy ( class AGameCrowdAgent* Agent, struct FVector TestPosition )
{
	static UFunction* pFnQueueReachedBy = NULL;

	if ( ! pFnQueueReachedBy )
		pFnQueueReachedBy = (UFunction*) UObject::GObjObjects()->Data[ 38026 ];

	AGameCrowdDestinationQueuePoint_execQueueReachedBy_Parms QueueReachedBy_Parms;
	QueueReachedBy_Parms.Agent = Agent;
	memcpy ( &QueueReachedBy_Parms.TestPosition, &TestPosition, 0xC );

	pFnQueueReachedBy->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnQueueReachedBy, &QueueReachedBy_Parms, NULL );

	pFnQueueReachedBy->FunctionFlags |= 0x400;

	return QueueReachedBy_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// [0x00C20802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   SpawnLoc                       ( CPF_Parm )
// class AGameCrowdAgent*         AgentTemplate                  ( CPF_Parm )
// class UGameCrowdGroup*         NewGroup                       ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class AGameCrowdAgent* AGameCrowdPopulationManager::eventCreateNewAgent ( class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnCreateNewAgent = NULL;

	if ( ! pFnCreateNewAgent )
		pFnCreateNewAgent = (UFunction*) UObject::GObjObjects()->Data[ 38204 ];

	AGameCrowdPopulationManager_eventCreateNewAgent_Parms CreateNewAgent_Parms;
	CreateNewAgent_Parms.SpawnLoc = SpawnLoc;
	CreateNewAgent_Parms.AgentTemplate = AgentTemplate;
	CreateNewAgent_Parms.NewGroup = NewGroup;

	ProcessEvent ((UObject*)this, pFnCreateNewAgent, &CreateNewAgent_Parms, NULL );

	if ( Item )
		memcpy ( Item, &CreateNewAgent_Parms.Item, 0x7C );

	return CreateNewAgent_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.Warmup
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            WarmupNum                      ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AGameCrowdPopulationManager::Warmup ( int WarmupNum, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnWarmup = NULL;

	if ( ! pFnWarmup )
		pFnWarmup = (UFunction*) UObject::GObjObjects()->Data[ 38200 ];

	AGameCrowdPopulationManager_execWarmup_Parms Warmup_Parms;
	Warmup_Parms.WarmupNum = WarmupNum;

	pFnWarmup->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnWarmup, &Warmup_Parms, NULL );

	pFnWarmup->FunctionFlags |= 0x400;

	if ( Item )
		memcpy ( Item, &Warmup_Parms.Item, 0x7C );

	return Warmup_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   SpawnLoc                       ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgent ( class AGameCrowdDestination* SpawnLoc, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnSpawnAgent = NULL;

	if ( ! pFnSpawnAgent )
		pFnSpawnAgent = (UFunction*) UObject::GObjObjects()->Data[ 38196 ];

	AGameCrowdPopulationManager_execSpawnAgent_Parms SpawnAgent_Parms;
	SpawnAgent_Parms.SpawnLoc = SpawnLoc;

	pFnSpawnAgent->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSpawnAgent, &SpawnAgent_Parms, NULL );

	pFnSpawnAgent->FunctionFlags |= 0x400;

	if ( Item )
		memcpy ( Item, &SpawnAgent_Parms.Item, 0x7C );

	return SpawnAgent_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SpawnerIdx                     ( CPF_Parm )
// class AGameCrowdDestination*   SpawnLoc                       ( CPF_Parm )

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgentByIdx ( int SpawnerIdx, class AGameCrowdDestination* SpawnLoc )
{
	static UFunction* pFnSpawnAgentByIdx = NULL;

	if ( ! pFnSpawnAgentByIdx )
		pFnSpawnAgentByIdx = (UFunction*) UObject::GObjObjects()->Data[ 38192 ];

	AGameCrowdPopulationManager_execSpawnAgentByIdx_Parms SpawnAgentByIdx_Parms;
	SpawnAgentByIdx_Parms.SpawnerIdx = SpawnerIdx;
	SpawnAgentByIdx_Parms.SpawnLoc = SpawnLoc;

	pFnSpawnAgentByIdx->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSpawnAgentByIdx, &SpawnAgentByIdx_Parms, NULL );

	pFnSpawnAgentByIdx->FunctionFlags |= 0x400;

	return SpawnAgentByIdx_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// [0x00C20002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Candidate                      ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AGameCrowdPopulationManager::ValidateSpawnAt ( class AGameCrowdDestination* Candidate, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnValidateSpawnAt = NULL;

	if ( ! pFnValidateSpawnAt )
		pFnValidateSpawnAt = (UFunction*) UObject::GObjObjects()->Data[ 38181 ];

	AGameCrowdPopulationManager_execValidateSpawnAt_Parms ValidateSpawnAt_Parms;
	ValidateSpawnAt_Parms.Candidate = Candidate;

	ProcessEvent ((UObject*)this, pFnValidateSpawnAt, &ValidateSpawnAt_Parms, NULL );

	if ( Item )
		memcpy ( Item, &ValidateSpawnAt_Parms.Item, 0x7C );

	return ValidateSpawnAt_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// [0x00420002] 
// Parameters infos:
// class AGameCrowdDestination*   GCD                            ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdPopulationManager::AddPrioritizedSpawnPoint ( class AGameCrowdDestination* GCD, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnAddPrioritizedSpawnPoint = NULL;

	if ( ! pFnAddPrioritizedSpawnPoint )
		pFnAddPrioritizedSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 38176 ];

	AGameCrowdPopulationManager_execAddPrioritizedSpawnPoint_Parms AddPrioritizedSpawnPoint_Parms;
	AddPrioritizedSpawnPoint_Parms.GCD = GCD;

	ProcessEvent ((UObject*)this, pFnAddPrioritizedSpawnPoint, &AddPrioritizedSpawnPoint_Parms, NULL );

	if ( Item )
		memcpy ( Item, &AddPrioritizedSpawnPoint_Parms.Item, 0x7C );
};

// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// [0x00420002] 
// Parameters infos:
// int                            StartIndex                     ( CPF_Parm )
// int                            NumToUpdate                    ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdPopulationManager::AnalyzeSpawnPoints ( int StartIndex, int NumToUpdate, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnAnalyzeSpawnPoints = NULL;

	if ( ! pFnAnalyzeSpawnPoints )
		pFnAnalyzeSpawnPoints = (UFunction*) UObject::GObjObjects()->Data[ 38168 ];

	AGameCrowdPopulationManager_execAnalyzeSpawnPoints_Parms AnalyzeSpawnPoints_Parms;
	AnalyzeSpawnPoints_Parms.StartIndex = StartIndex;
	AnalyzeSpawnPoints_Parms.NumToUpdate = NumToUpdate;

	ProcessEvent ((UObject*)this, pFnAnalyzeSpawnPoints, &AnalyzeSpawnPoints_Parms, NULL );

	if ( Item )
		memcpy ( Item, &AnalyzeSpawnPoints_Parms.Item, 0x7C );
};

// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdPopulationManager::eventPrioritizeSpawnPoints ( float DeltaTime, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnPrioritizeSpawnPoints = NULL;

	if ( ! pFnPrioritizeSpawnPoints )
		pFnPrioritizeSpawnPoints = (UFunction*) UObject::GObjObjects()->Data[ 38164 ];

	AGameCrowdPopulationManager_eventPrioritizeSpawnPoints_Parms PrioritizeSpawnPoints_Parms;
	PrioritizeSpawnPoints_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnPrioritizeSpawnPoints, &PrioritizeSpawnPoints_Parms, NULL );

	if ( Item )
		memcpy ( Item, &PrioritizeSpawnPoints_Parms.Item, 0x7C );
};

// Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
// [0x00422500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FCrowdSpawnerPlayerInfo > out_PlayerInfo                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AGameCrowdPopulationManager::StaticGetPlayerInfo ( TArray< struct FCrowdSpawnerPlayerInfo >* out_PlayerInfo )
{
	static UFunction* pFnStaticGetPlayerInfo = NULL;

	if ( ! pFnStaticGetPlayerInfo )
		pFnStaticGetPlayerInfo = (UFunction*) UObject::GObjObjects()->Data[ 38160 ];

	AGameCrowdPopulationManager_execStaticGetPlayerInfo_Parms StaticGetPlayerInfo_Parms;

	pFnStaticGetPlayerInfo->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnStaticGetPlayerInfo, &StaticGetPlayerInfo_Parms, NULL );

	pFnStaticGetPlayerInfo->FunctionFlags |= 0x400;

	if ( out_PlayerInfo )
		memcpy ( out_PlayerInfo, &StaticGetPlayerInfo_Parms.out_PlayerInfo, 0xC );

	return StaticGetPlayerInfo_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdPopulationManager::GetPlayerInfo ( )
{
	static UFunction* pFnGetPlayerInfo = NULL;

	if ( ! pFnGetPlayerInfo )
		pFnGetPlayerInfo = (UFunction*) UObject::GObjObjects()->Data[ 38158 ];

	AGameCrowdPopulationManager_execGetPlayerInfo_Parms GetPlayerInfo_Parms;

	pFnGetPlayerInfo->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetPlayerInfo, &GetPlayerInfo_Parms, NULL );

	pFnGetPlayerInfo->FunctionFlags |= 0x400;

	return GetPlayerInfo_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdDestination*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class AGameCrowdDestination* AGameCrowdPopulationManager::eventPickSpawnPoint ( struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnPickSpawnPoint = NULL;

	if ( ! pFnPickSpawnPoint )
		pFnPickSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 38152 ];

	AGameCrowdPopulationManager_eventPickSpawnPoint_Parms PickSpawnPoint_Parms;

	ProcessEvent ((UObject*)this, pFnPickSpawnPoint, &PickSpawnPoint_Parms, NULL );

	if ( Item )
		memcpy ( Item, &PickSpawnPoint_Parms.Item, 0x7C );

	return PickSpawnPoint_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AGameCrowdPopulationManager::eventUpdateSpawner ( float DeltaTime, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnUpdateSpawner = NULL;

	if ( ! pFnUpdateSpawner )
		pFnUpdateSpawner = (UFunction*) UObject::GObjObjects()->Data[ 38144 ];

	AGameCrowdPopulationManager_eventUpdateSpawner_Parms UpdateSpawner_Parms;
	UpdateSpawner_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnUpdateSpawner, &UpdateSpawner_Parms, NULL );

	if ( Item )
		memcpy ( Item, &UpdateSpawner_Parms.Item, 0x7C );

	return UpdateSpawner_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameCrowdPopulationManager::UpdateAllSpawners ( float DeltaTime )
{
	static UFunction* pFnUpdateAllSpawners = NULL;

	if ( ! pFnUpdateAllSpawners )
		pFnUpdateAllSpawners = (UFunction*) UObject::GObjObjects()->Data[ 38142 ];

	AGameCrowdPopulationManager_execUpdateAllSpawners_Parms UpdateAllSpawners_Parms;
	UpdateAllSpawners_Parms.DeltaTime = DeltaTime;

	pFnUpdateAllSpawners->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnUpdateAllSpawners, &UpdateAllSpawners_Parms, NULL );

	pFnUpdateAllSpawners->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdPopulationManager.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameCrowdPopulationManager::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 38140 ];

	AGameCrowdPopulationManager_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdPopulationManager::ShouldDebugDestinations ( )
{
	static UFunction* pFnShouldDebugDestinations = NULL;

	if ( ! pFnShouldDebugDestinations )
		pFnShouldDebugDestinations = (UFunction*) UObject::GObjObjects()->Data[ 38138 ];

	AGameCrowdPopulationManager_execShouldDebugDestinations_Parms ShouldDebugDestinations_Parms;

	ProcessEvent ((UObject*)this, pFnShouldDebugDestinations, &ShouldDebugDestinations_Parms, NULL );

	return ShouldDebugDestinations_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdPopulationManager::IsSpawningActive ( )
{
	static UFunction* pFnIsSpawningActive = NULL;

	if ( ! pFnIsSpawningActive )
		pFnIsSpawningActive = (UFunction*) UObject::GObjObjects()->Data[ 38135 ];

	AGameCrowdPopulationManager_execIsSpawningActive_Parms IsSpawningActive_Parms;

	ProcessEvent ((UObject*)this, pFnIsSpawningActive, &IsSpawningActive_Parms, NULL );

	return IsSpawningActive_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// [0x00C20102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AGameCrowdPopulationManager::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 38112 ];

	AGameCrowdPopulationManager_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	ProcessEvent ((UObject*)this, pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGameCrowdPopulationManager::AgentDestroyed ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAgentDestroyed = NULL;

	if ( ! pFnAgentDestroyed )
		pFnAgentDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 38108 ];

	AGameCrowdPopulationManager_execAgentDestroyed_Parms AgentDestroyed_Parms;
	AgentDestroyed_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnAgentDestroyed, &AgentDestroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventFlushAllAgents ( )
{
	static UFunction* pFnFlushAllAgents = NULL;

	if ( ! pFnFlushAllAgents )
		pFnFlushAllAgents = (UFunction*) UObject::GObjObjects()->Data[ 38106 ];

	AGameCrowdPopulationManager_eventFlushAllAgents_Parms FlushAllAgents_Parms;

	ProcessEvent ((UObject*)this, pFnFlushAllAgents, &FlushAllAgents_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_NeedCtorLink )

void AGameCrowdPopulationManager::eventFlushAgents ( struct FCrowdSpawnInfoItem Item )
{
	static UFunction* pFnFlushAgents = NULL;

	if ( ! pFnFlushAgents )
		pFnFlushAgents = (UFunction*) UObject::GObjObjects()->Data[ 38103 ];

	AGameCrowdPopulationManager_eventFlushAgents_Parms FlushAgents_Parms;
	memcpy ( &FlushAgents_Parms.Item, &Item, 0x7C );

	ProcessEvent ((UObject*)this, pFnFlushAgents, &FlushAgents_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.CreateSpawner
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USeqAct_GameCrowdPopulationManagerToggle* inAction                       ( CPF_Parm )

int AGameCrowdPopulationManager::eventCreateSpawner ( class USeqAct_GameCrowdPopulationManagerToggle* inAction )
{
	static UFunction* pFnCreateSpawner = NULL;

	if ( ! pFnCreateSpawner )
		pFnCreateSpawner = (UFunction*) UObject::GObjObjects()->Data[ 38099 ];

	AGameCrowdPopulationManager_eventCreateSpawner_Parms CreateSpawner_Parms;
	CreateSpawner_Parms.inAction = inAction;

	ProcessEvent ((UObject*)this, pFnCreateSpawner, &CreateSpawner_Parms, NULL );

	return CreateSpawner_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
// [0x00020002] 
// Parameters infos:
// class AGameCrowdInfoVolume*    Vol                            ( CPF_Parm )

void AGameCrowdPopulationManager::SetCrowdInfoVolume ( class AGameCrowdInfoVolume* Vol )
{
	static UFunction* pFnSetCrowdInfoVolume = NULL;

	if ( ! pFnSetCrowdInfoVolume )
		pFnSetCrowdInfoVolume = (UFunction*) UObject::GObjObjects()->Data[ 38097 ];

	AGameCrowdPopulationManager_execSetCrowdInfoVolume_Parms SetCrowdInfoVolume_Parms;
	SetCrowdInfoVolume_Parms.Vol = Vol;

	ProcessEvent ((UObject*)this, pFnSetCrowdInfoVolume, &SetCrowdInfoVolume_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   GCD                            ( CPF_Parm )

void AGameCrowdPopulationManager::RemoveSpawnPoint ( class AGameCrowdDestination* GCD )
{
	static UFunction* pFnRemoveSpawnPoint = NULL;

	if ( ! pFnRemoveSpawnPoint )
		pFnRemoveSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 38093 ];

	AGameCrowdPopulationManager_execRemoveSpawnPoint_Parms RemoveSpawnPoint_Parms;
	RemoveSpawnPoint_Parms.GCD = GCD;

	ProcessEvent ((UObject*)this, pFnRemoveSpawnPoint, &RemoveSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   GCD                            ( CPF_Parm )

void AGameCrowdPopulationManager::AddSpawnPoint ( class AGameCrowdDestination* GCD )
{
	static UFunction* pFnAddSpawnPoint = NULL;

	if ( ! pFnAddSpawnPoint )
		pFnAddSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 38091 ];

	AGameCrowdPopulationManager_execAddSpawnPoint_Parms AddSpawnPoint_Parms;
	AddSpawnPoint_Parms.GCD = GCD;

	ProcessEvent ((UObject*)this, pFnAddSpawnPoint, &AddSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventNotifyPathChanged ( )
{
	static UFunction* pFnNotifyPathChanged = NULL;

	if ( ! pFnNotifyPathChanged )
		pFnNotifyPathChanged = (UFunction*) UObject::GObjObjects()->Data[ 38090 ];

	AGameCrowdPopulationManager_eventNotifyPathChanged_Parms NotifyPathChanged_Parms;

	ProcessEvent ((UObject*)this, pFnNotifyPathChanged, &NotifyPathChanged_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AGameCrowdPopulationManager::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 38088 ];

	AGameCrowdPopulationManager_execPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AGameCrowdReplicationActor::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 38217 ];

	AGameCrowdReplicationActor_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	ProcessEvent ((UObject*)this, pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
// [0x00880102] 
// Parameters infos:
// class UCameraShake*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Epicenter                      ( CPF_Parm )
// class APlayerController*       PC                             ( CPF_Parm )

class UCameraShake* AGameExplosionActor::ChooseCameraShake ( struct FVector Epicenter, class APlayerController* PC )
{
	static UFunction* pFnChooseCameraShake = NULL;

	if ( ! pFnChooseCameraShake )
		pFnChooseCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 38386 ];

	AGameExplosionActor_execChooseCameraShake_Parms ChooseCameraShake_Parms;
	memcpy ( &ChooseCameraShake_Parms.Epicenter, &Epicenter, 0xC );
	ChooseCameraShake_Parms.PC = PC;

	ProcessEvent ((UObject*)this, pFnChooseCameraShake, &ChooseCameraShake_Parms, NULL );

	return ChooseCameraShake_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::SpawnCameraLensEffects ( )
{
	static UFunction* pFnSpawnCameraLensEffects = NULL;

	if ( ! pFnSpawnCameraLensEffects )
		pFnSpawnCameraLensEffects = (UFunction*) UObject::GObjObjects()->Data[ 38384 ];

	AGameExplosionActor_execSpawnCameraLensEffects_Parms SpawnCameraLensEffects_Parms;

	ProcessEvent ((UObject*)this, pFnSpawnCameraLensEffects, &SpawnCameraLensEffects_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DoExplosionCameraEffects ( )
{
	static UFunction* pFnDoExplosionCameraEffects = NULL;

	if ( ! pFnDoExplosionCameraEffects )
		pFnDoExplosionCameraEffects = (UFunction*) UObject::GObjObjects()->Data[ 38380 ];

	AGameExplosionActor_execDoExplosionCameraEffects_Parms DoExplosionCameraEffects_Parms;

	ProcessEvent ((UObject*)this, pFnDoExplosionCameraEffects, &DoExplosionCameraEffects_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DrawDebug
// [0x00820102] 
// Parameters infos:

void AGameExplosionActor::DrawDebug ( )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 38377 ];

	AGameExplosionActor_execDrawDebug_Parms DrawDebug_Parms;

	ProcessEvent ((UObject*)this, pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DelayedExplosionDamage ( )
{
	static UFunction* pFnDelayedExplosionDamage = NULL;

	if ( ! pFnDelayedExplosionDamage )
		pFnDelayedExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 38376 ];

	AGameExplosionActor_execDelayedExplosionDamage_Parms DelayedExplosionDamage_Parms;

	ProcessEvent ((UObject*)this, pFnDelayedExplosionDamage, &DelayedExplosionDamage_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.Explode
// [0x00024102] 
// Parameters infos:
// class UGameExplosion*          NewExplosionTemplate           ( CPF_Parm )
// struct FVector                 Direction                      ( CPF_OptionalParm | CPF_Parm )

void AGameExplosionActor::Explode ( class UGameExplosion* NewExplosionTemplate, struct FVector Direction )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 38370 ];

	AGameExplosionActor_execExplode_Parms Explode_Parms;
	Explode_Parms.NewExplosionTemplate = NewExplosionTemplate;
	memcpy ( &Explode_Parms.Direction, &Direction, 0xC );

	ProcessEvent ((UObject*)this, pFnExplode, &Explode_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionFogVolume ( )
{
	static UFunction* pFnSpawnExplosionFogVolume = NULL;

	if ( ! pFnSpawnExplosionFogVolume )
		pFnSpawnExplosionFogVolume = (UFunction*) UObject::GObjObjects()->Data[ 38369 ];

	AGameExplosionActor_execSpawnExplosionFogVolume_Parms SpawnExplosionFogVolume_Parms;

	ProcessEvent ((UObject*)this, pFnSpawnExplosionFogVolume, &SpawnExplosionFogVolume_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionDecal ( )
{
	static UFunction* pFnSpawnExplosionDecal = NULL;

	if ( ! pFnSpawnExplosionDecal )
		pFnSpawnExplosionDecal = (UFunction*) UObject::GObjObjects()->Data[ 38368 ];

	AGameExplosionActor_execSpawnExplosionDecal_Parms SpawnExplosionDecal_Parms;

	ProcessEvent ((UObject*)this, pFnSpawnExplosionDecal, &SpawnExplosionDecal_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// [0x00020100] 
// Parameters infos:
// class UParticleSystem*         Template                       ( CPF_Parm )

void AGameExplosionActor::SpawnExplosionParticleSystem ( class UParticleSystem* Template )
{
	static UFunction* pFnSpawnExplosionParticleSystem = NULL;

	if ( ! pFnSpawnExplosionParticleSystem )
		pFnSpawnExplosionParticleSystem = (UFunction*) UObject::GObjObjects()->Data[ 38366 ];

	AGameExplosionActor_execSpawnExplosionParticleSystem_Parms SpawnExplosionParticleSystem_Parms;
	SpawnExplosionParticleSystem_Parms.Template = Template;

	ProcessEvent ((UObject*)this, pFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// [0x00080100] 
// Parameters infos:
// class UPhysicalMaterial*       PhysMaterial                   ( CPF_Parm )

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX ( class UPhysicalMaterial* PhysMaterial )
{
	static UFunction* pFnUpdateExplosionTemplateWithPerMaterialFX = NULL;

	if ( ! pFnUpdateExplosionTemplateWithPerMaterialFX )
		pFnUpdateExplosionTemplateWithPerMaterialFX = (UFunction*) UObject::GObjObjects()->Data[ 38364 ];

	AGameExplosionActor_execUpdateExplosionTemplateWithPerMaterialFX_Parms UpdateExplosionTemplateWithPerMaterialFX_Parms;
	UpdateExplosionTemplateWithPerMaterialFX_Parms.PhysMaterial = PhysMaterial;

	ProcessEvent ((UObject*)this, pFnUpdateExplosionTemplateWithPerMaterialFX, &UpdateExplosionTemplateWithPerMaterialFX_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
// [0x00080000] 
// Parameters infos:
// class AActor*                  Victim                         ( CPF_Parm )
// float                          VictimDist                     ( CPF_Parm )

void AGameExplosionActor::SpecialCringeEffectsFor ( class AActor* Victim, float VictimDist )
{
	static UFunction* pFnSpecialCringeEffectsFor = NULL;

	if ( ! pFnSpecialCringeEffectsFor )
		pFnSpecialCringeEffectsFor = (UFunction*) UObject::GObjObjects()->Data[ 38361 ];

	AGameExplosionActor_execSpecialCringeEffectsFor_Parms SpecialCringeEffectsFor_Parms;
	SpecialCringeEffectsFor_Parms.Victim = Victim;
	SpecialCringeEffectsFor_Parms.VictimDist = VictimDist;

	ProcessEvent ((UObject*)this, pFnSpecialCringeEffectsFor, &SpecialCringeEffectsFor_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// [0x00080000] 
// Parameters infos:
// class AGamePawn*               VictimPawn                     ( CPF_Parm )
// float                          VictimDist                     ( CPF_Parm )

void AGameExplosionActor::SpecialPawnEffectsFor ( class AGamePawn* VictimPawn, float VictimDist )
{
	static UFunction* pFnSpecialPawnEffectsFor = NULL;

	if ( ! pFnSpecialPawnEffectsFor )
		pFnSpecialPawnEffectsFor = (UFunction*) UObject::GObjObjects()->Data[ 38358 ];

	AGameExplosionActor_execSpecialPawnEffectsFor_Parms SpecialPawnEffectsFor_Parms;
	SpecialPawnEffectsFor_Parms.VictimPawn = VictimPawn;
	SpecialPawnEffectsFor_Parms.VictimDist = VictimDist;

	ProcessEvent ((UObject*)this, pFnSpecialPawnEffectsFor, &SpecialPawnEffectsFor_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bCauseDamage                   ( CPF_Parm )
// unsigned long                  bCauseFractureEffects          ( CPF_Parm )
// unsigned long                  bCauseEffects                  ( CPF_Parm )

float AGameExplosionActor::GetEffectCheckRadius ( unsigned long bCauseDamage, unsigned long bCauseFractureEffects, unsigned long bCauseEffects )
{
	static UFunction* pFnGetEffectCheckRadius = NULL;

	if ( ! pFnGetEffectCheckRadius )
		pFnGetEffectCheckRadius = (UFunction*) UObject::GObjObjects()->Data[ 38352 ];

	AGameExplosionActor_execGetEffectCheckRadius_Parms GetEffectCheckRadius_Parms;
	GetEffectCheckRadius_Parms.bCauseDamage = bCauseDamage;
	GetEffectCheckRadius_Parms.bCauseFractureEffects = bCauseFractureEffects;
	GetEffectCheckRadius_Parms.bCauseEffects = bCauseEffects;

	ProcessEvent ((UObject*)this, pFnGetEffectCheckRadius, &GetEffectCheckRadius_Parms, NULL );

	return GetEffectCheckRadius_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
// [0x00880102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bCauseDamage                   ( CPF_Parm )
// unsigned long                  bCauseEffects                  ( CPF_Parm )

bool AGameExplosionActor::DoExplosionDamage ( unsigned long bCauseDamage, unsigned long bCauseEffects )
{
	static UFunction* pFnDoExplosionDamage = NULL;

	if ( ! pFnDoExplosionDamage )
		pFnDoExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 38322 ];

	AGameExplosionActor_execDoExplosionDamage_Parms DoExplosionDamage_Parms;
	DoExplosionDamage_Parms.bCauseDamage = bCauseDamage;
	DoExplosionDamage_Parms.bCauseEffects = bCauseEffects;

	ProcessEvent ((UObject*)this, pFnDoExplosionDamage, &DoExplosionDamage_Parms, NULL );

	return DoExplosionDamage_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Start                          ( CPF_Parm )
// struct FBox                    BBox                           ( CPF_Parm )

float AGameExplosionActor::BoxDistanceToPoint ( struct FVector Start, struct FBox BBox )
{
	static UFunction* pFnBoxDistanceToPoint = NULL;

	if ( ! pFnBoxDistanceToPoint )
		pFnBoxDistanceToPoint = (UFunction*) UObject::GObjObjects()->Data[ 38318 ];

	AGameExplosionActor_execBoxDistanceToPoint_Parms BoxDistanceToPoint_Parms;
	memcpy ( &BoxDistanceToPoint_Parms.Start, &Start, 0xC );
	memcpy ( &BoxDistanceToPoint_Parms.BBox, &BBox, 0x1C );

	pFnBoxDistanceToPoint->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnBoxDistanceToPoint, &BoxDistanceToPoint_Parms, NULL );

	pFnBoxDistanceToPoint->FunctionFlags |= 0x400;

	return BoxDistanceToPoint_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
// [0x00080102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )

bool AGameExplosionActor::IsBehindExplosion ( class AActor* A )
{
	static UFunction* pFnIsBehindExplosion = NULL;

	if ( ! pFnIsBehindExplosion )
		pFnIsBehindExplosion = (UFunction*) UObject::GObjObjects()->Data[ 38315 ];

	AGameExplosionActor_execIsBehindExplosion_Parms IsBehindExplosion_Parms;
	IsBehindExplosion_Parms.A = A;

	ProcessEvent ((UObject*)this, pFnIsBehindExplosion, &IsBehindExplosion_Parms, NULL );

	return IsBehindExplosion_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Victim                         ( CPF_Parm )

bool AGameExplosionActor::DoFullDamageToActor ( class AActor* Victim )
{
	static UFunction* pFnDoFullDamageToActor = NULL;

	if ( ! pFnDoFullDamageToActor )
		pFnDoFullDamageToActor = (UFunction*) UObject::GObjObjects()->Data[ 38312 ];

	AGameExplosionActor_execDoFullDamageToActor_Parms DoFullDamageToActor_Parms;
	DoFullDamageToActor_Parms.Victim = Victim;

	ProcessEvent ((UObject*)this, pFnDoFullDamageToActor, &DoFullDamageToActor_Parms, NULL );

	return DoFullDamageToActor_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// [0x00880102] 
// Parameters infos:
// class UPhysicalMaterial*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UPhysicalMaterial* AGameExplosionActor::GetPhysicalMaterial ( )
{
	static UFunction* pFnGetPhysicalMaterial = NULL;

	if ( ! pFnGetPhysicalMaterial )
		pFnGetPhysicalMaterial = (UFunction*) UObject::GObjObjects()->Data[ 38304 ];

	AGameExplosionActor_execGetPhysicalMaterial_Parms GetPhysicalMaterial_Parms;

	ProcessEvent ((UObject*)this, pFnGetPhysicalMaterial, &GetPhysicalMaterial_Parms, NULL );

	return GetPhysicalMaterial_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameExplosionActor::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 38303 ];

	AGameExplosionActor_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// [0x00020102] 
// Parameters infos:

void AGamePawn::ReattachMeshWithoutBeingSeen ( )
{
	static UFunction* pFnReattachMeshWithoutBeingSeen = NULL;

	if ( ! pFnReattachMeshWithoutBeingSeen )
		pFnReattachMeshWithoutBeingSeen = (UFunction*) UObject::GObjObjects()->Data[ 38449 ];

	AGamePawn_execReattachMeshWithoutBeingSeen_Parms ReattachMeshWithoutBeingSeen_Parms;

	ProcessEvent ((UObject*)this, pFnReattachMeshWithoutBeingSeen, &ReattachMeshWithoutBeingSeen_Parms, NULL );
};

// Function GameFramework.GamePawn.ReattachMesh
// [0x00020102] 
// Parameters infos:

void AGamePawn::ReattachMesh ( )
{
	static UFunction* pFnReattachMesh = NULL;

	if ( ! pFnReattachMesh )
		pFnReattachMesh = (UFunction*) UObject::GObjObjects()->Data[ 38448 ];

	AGamePawn_execReattachMesh_Parms ReattachMesh_Parms;

	ProcessEvent ((UObject*)this, pFnReattachMesh, &ReattachMesh_Parms, NULL );
};

// Function GameFramework.GamePawn.UpdateShadowSettings
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInWantShadow                  ( CPF_Parm )

void AGamePawn::eventUpdateShadowSettings ( unsigned long bInWantShadow )
{
	static UFunction* pFnUpdateShadowSettings = NULL;

	if ( ! pFnUpdateShadowSettings )
		pFnUpdateShadowSettings = (UFunction*) UObject::GObjObjects()->Data[ 38444 ];

	AGamePawn_eventUpdateShadowSettings_Parms UpdateShadowSettings_Parms;
	UpdateShadowSettings_Parms.bInWantShadow = bInWantShadow;

	ProcessEvent ((UObject*)this, pFnUpdateShadowSettings, &UpdateShadowSettings_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CallPrintHUDLogInClient
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 text_                          ( CPF_Parm | CPF_NeedCtorLink )

void AGamePlayerController::eventCallPrintHUDLogInClient ( struct FString text_ )
{
	static UFunction* pFnCallPrintHUDLogInClient = NULL;

	if ( ! pFnCallPrintHUDLogInClient )
		pFnCallPrintHUDLogInClient = (UFunction*) UObject::GObjObjects()->Data[ 36786 ];

	AGamePlayerController_eventCallPrintHUDLogInClient_Parms CallPrintHUDLogInClient_Parms;
	memcpy ( &CallPrintHUDLogInClient_Parms.text_, &text_, 0xC );

	ProcessEvent ((UObject*)this, pFnCallPrintHUDLogInClient, &CallPrintHUDLogInClient_Parms, NULL );
};

// Function GameFramework.GamePlayerController.PrintHUDLogInClient
// [0x00020100] 
// Parameters infos:
// struct FString                 text_                          ( CPF_Parm | CPF_NeedCtorLink )

void AGamePlayerController::PrintHUDLogInClient ( struct FString text_ )
{
	static UFunction* pFnPrintHUDLogInClient = NULL;

	if ( ! pFnPrintHUDLogInClient )
		pFnPrintHUDLogInClient = (UFunction*) UObject::GObjObjects()->Data[ 36784 ];

	AGamePlayerController_execPrintHUDLogInClient_Parms PrintHUDLogInClient_Parms;
	memcpy ( &PrintHUDLogInClient_Parms.text_, &text_, 0xC );

	ProcessEvent ((UObject*)this, pFnPrintHUDLogInClient, &PrintHUDLogInClient_Parms, NULL );
};

// Function GameFramework.GamePlayerController.ClientColorFade
// [0x010201C0] 
// Parameters infos:
// struct FColor                  FadeColor                      ( CPF_Parm )
// unsigned char                  FromAlpha                      ( CPF_Parm )
// unsigned char                  ToAlpha                        ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm )

void AGamePlayerController::ClientColorFade ( struct FColor FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime )
{
	static UFunction* pFnClientColorFade = NULL;

	if ( ! pFnClientColorFade )
		pFnClientColorFade = (UFunction*) UObject::GObjObjects()->Data[ 36779 ];

	AGamePlayerController_execClientColorFade_Parms ClientColorFade_Parms;
	memcpy ( &ClientColorFade_Parms.FadeColor, &FadeColor, 0x4 );
	ClientColorFade_Parms.FromAlpha = FromAlpha;
	ClientColorFade_Parms.ToAlpha = ToAlpha;
	ClientColorFade_Parms.FadeTime = FadeTime;

	ProcessEvent ((UObject*)this, pFnClientColorFade, &ClientColorFade_Parms, NULL );
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bDesiredPauseState             ( CPF_Parm )

void AGamePlayerController::eventWarmupPause ( unsigned long bDesiredPauseState )
{
	static UFunction* pFnWarmupPause = NULL;

	if ( ! pFnWarmupPause )
		pFnWarmupPause = (UFunction*) UObject::GObjObjects()->Data[ 36774 ];

	AGamePlayerController_eventWarmupPause_Parms WarmupPause_Parms;
	WarmupPause_Parms.bDesiredPauseState = bDesiredPauseState;

	ProcessEvent ((UObject*)this, pFnWarmupPause, &WarmupPause_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGamePlayerController::CanUnpauseWarmup ( )
{
	static UFunction* pFnCanUnpauseWarmup = NULL;

	if ( ! pFnCanUnpauseWarmup )
		pFnCanUnpauseWarmup = (UFunction*) UObject::GObjObjects()->Data[ 36772 ];

	AGamePlayerController_execCanUnpauseWarmup_Parms CanUnpauseWarmup_Parms;

	ProcessEvent ((UObject*)this, pFnCanUnpauseWarmup, &CanUnpauseWarmup_Parms, NULL );

	return CanUnpauseWarmup_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 MovieName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGamePlayerController::GetCurrentMovie ( struct FString* MovieName )
{
	static UFunction* pFnGetCurrentMovie = NULL;

	if ( ! pFnGetCurrentMovie )
		pFnGetCurrentMovie = (UFunction*) UObject::GObjObjects()->Data[ 36770 ];

	AGamePlayerController_execGetCurrentMovie_Parms GetCurrentMovie_Parms;

	pFnGetCurrentMovie->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetCurrentMovie, &GetCurrentMovie_Parms, NULL );

	pFnGetCurrentMovie->FunctionFlags |= 0x400;

	if ( MovieName )
		memcpy ( MovieName, &GetCurrentMovie_Parms.MovieName, 0xC );
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
// Parameters infos:
// float                          DelayInSeconds                 ( CPF_Parm )
// unsigned long                  bAllowMovieToFinish            ( CPF_Parm )
// unsigned long                  bForceStopNonSkippable         ( CPF_Parm )
// unsigned long                  bForceStopLoadingMovie         ( CPF_Parm )

void AGamePlayerController::eventClientStopMovie ( float DelayInSeconds, unsigned long bAllowMovieToFinish, unsigned long bForceStopNonSkippable, unsigned long bForceStopLoadingMovie )
{
	static UFunction* pFnClientStopMovie = NULL;

	if ( ! pFnClientStopMovie )
		pFnClientStopMovie = (UFunction*) UObject::GObjObjects()->Data[ 36765 ];

	AGamePlayerController_eventClientStopMovie_Parms ClientStopMovie_Parms;
	ClientStopMovie_Parms.DelayInSeconds = DelayInSeconds;
	ClientStopMovie_Parms.bAllowMovieToFinish = bAllowMovieToFinish;
	ClientStopMovie_Parms.bForceStopNonSkippable = bForceStopNonSkippable;
	ClientStopMovie_Parms.bForceStopLoadingMovie = bForceStopLoadingMovie;

	pFnClientStopMovie->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnClientStopMovie, &ClientStopMovie_Parms, NULL );

	pFnClientStopMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
// Parameters infos:
// struct FString                 MovieName                      ( CPF_Parm | CPF_NeedCtorLink )
// int                            InStartOfRenderingMovieFrame   ( CPF_Parm )
// int                            InEndOfRenderingMovieFrame     ( CPF_Parm )
// unsigned long                  bRestrictPausing               ( CPF_Parm )
// unsigned long                  bPlayOnceFromStream            ( CPF_Parm )
// unsigned long                  bOnlyBackButtonSkipsMovie      ( CPF_Parm )

void AGamePlayerController::eventClientPlayMovie ( struct FString MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, unsigned long bRestrictPausing, unsigned long bPlayOnceFromStream, unsigned long bOnlyBackButtonSkipsMovie )
{
	static UFunction* pFnClientPlayMovie = NULL;

	if ( ! pFnClientPlayMovie )
		pFnClientPlayMovie = (UFunction*) UObject::GObjObjects()->Data[ 36758 ];

	AGamePlayerController_eventClientPlayMovie_Parms ClientPlayMovie_Parms;
	memcpy ( &ClientPlayMovie_Parms.MovieName, &MovieName, 0xC );
	ClientPlayMovie_Parms.InStartOfRenderingMovieFrame = InStartOfRenderingMovieFrame;
	ClientPlayMovie_Parms.InEndOfRenderingMovieFrame = InEndOfRenderingMovieFrame;
	ClientPlayMovie_Parms.bRestrictPausing = bRestrictPausing;
	ClientPlayMovie_Parms.bPlayOnceFromStream = bPlayOnceFromStream;
	ClientPlayMovie_Parms.bOnlyBackButtonSkipsMovie = bOnlyBackButtonSkipsMovie;

	pFnClientPlayMovie->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnClientPlayMovie, &ClientPlayMovie_Parms, NULL );

	pFnClientPlayMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGamePlayerController::KeepPlayingLoadingMovie ( )
{
	static UFunction* pFnKeepPlayingLoadingMovie = NULL;

	if ( ! pFnKeepPlayingLoadingMovie )
		pFnKeepPlayingLoadingMovie = (UFunction*) UObject::GObjObjects()->Data[ 36757 ];

	AGamePlayerController_execKeepPlayingLoadingMovie_Parms KeepPlayingLoadingMovie_Parms;

	pFnKeepPlayingLoadingMovie->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnKeepPlayingLoadingMovie, &KeepPlayingLoadingMovie_Parms, NULL );

	pFnKeepPlayingLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bShowMovie                     ( CPF_Parm )
// unsigned long                  bPauseAfterHide                ( CPF_OptionalParm | CPF_Parm )
// float                          PauseDuration                  ( CPF_OptionalParm | CPF_Parm )
// float                          KeepPlayingDuration            ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverridePreviousDelays        ( CPF_OptionalParm | CPF_Parm )

void AGamePlayerController::ShowLoadingMovie ( unsigned long bShowMovie, unsigned long bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, unsigned long bOverridePreviousDelays )
{
	static UFunction* pFnShowLoadingMovie = NULL;

	if ( ! pFnShowLoadingMovie )
		pFnShowLoadingMovie = (UFunction*) UObject::GObjObjects()->Data[ 36751 ];

	AGamePlayerController_execShowLoadingMovie_Parms ShowLoadingMovie_Parms;
	ShowLoadingMovie_Parms.bShowMovie = bShowMovie;
	ShowLoadingMovie_Parms.bPauseAfterHide = bPauseAfterHide;
	ShowLoadingMovie_Parms.PauseDuration = PauseDuration;
	ShowLoadingMovie_Parms.KeepPlayingDuration = KeepPlayingDuration;
	ShowLoadingMovie_Parms.bOverridePreviousDelays = bOverridePreviousDelays;

	pFnShowLoadingMovie->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnShowLoadingMovie, &ShowLoadingMovie_Parms, NULL );

	pFnShowLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.SetSoundMode
// [0x00020102] 
// Parameters infos:
// struct FName                   InSoundModeName                ( CPF_Parm )

void AGamePlayerController::SetSoundMode ( struct FName InSoundModeName )
{
	static UFunction* pFnSetSoundMode = NULL;

	if ( ! pFnSetSoundMode )
		pFnSetSoundMode = (UFunction*) UObject::GObjObjects()->Data[ 36747 ];

	AGamePlayerController_execSetSoundMode_Parms SetSoundMode_Parms;
	memcpy ( &SetSoundMode_Parms.InSoundModeName, &InSoundModeName, 0x8 );

	ProcessEvent ((UObject*)this, pFnSetSoundMode, &SetSoundMode_Parms, NULL );
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// [0x00080102] 
// Parameters infos:
// class UCameraShake*            ShakeData                      ( CPF_Parm )
// float                          Scale                          ( CPF_Parm )

void AGamePlayerController::DoForceFeedbackForScreenShake ( class UCameraShake* ShakeData, float Scale )
{
	static UFunction* pFnDoForceFeedbackForScreenShake = NULL;

	if ( ! pFnDoForceFeedbackForScreenShake )
		pFnDoForceFeedbackForScreenShake = (UFunction*) UObject::GObjObjects()->Data[ 36735 ];

	AGamePlayerController_execDoForceFeedbackForScreenShake_Parms DoForceFeedbackForScreenShake_Parms;
	DoForceFeedbackForScreenShake_Parms.ShakeData = ShakeData;
	DoForceFeedbackForScreenShake_Parms.Scale = Scale;

	ProcessEvent ((UObject*)this, pFnDoForceFeedbackForScreenShake, &DoForceFeedbackForScreenShake_Parms, NULL );
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGamePlayerController::eventNotifyCrowdAgentInRadius ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnNotifyCrowdAgentInRadius = NULL;

	if ( ! pFnNotifyCrowdAgentInRadius )
		pFnNotifyCrowdAgentInRadius = (UFunction*) UObject::GObjObjects()->Data[ 36733 ];

	AGamePlayerController_eventNotifyCrowdAgentInRadius_Parms NotifyCrowdAgentInRadius_Parms;
	NotifyCrowdAgentInRadius_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnNotifyCrowdAgentInRadius, &NotifyCrowdAgentInRadius_Parms, NULL );
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGamePlayerController::eventNotifyCrowdAgentRefresh ( )
{
	static UFunction* pFnNotifyCrowdAgentRefresh = NULL;

	if ( ! pFnNotifyCrowdAgentRefresh )
		pFnNotifyCrowdAgentRefresh = (UFunction*) UObject::GObjObjects()->Data[ 36732 ];

	AGamePlayerController_eventNotifyCrowdAgentRefresh_Parms NotifyCrowdAgentRefresh_Parms;

	ProcessEvent ((UObject*)this, pFnNotifyCrowdAgentRefresh, &NotifyCrowdAgentRefresh_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CrowdDebug
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void AGamePlayerController::CrowdDebug ( unsigned long bEnabled )
{
	static UFunction* pFnCrowdDebug = NULL;

	if ( ! pFnCrowdDebug )
		pFnCrowdDebug = (UFunction*) UObject::GObjObjects()->Data[ 36726 ];

	AGamePlayerController_execCrowdDebug_Parms CrowdDebug_Parms;
	CrowdDebug_Parms.bEnabled = bEnabled;

	ProcessEvent ((UObject*)this, pFnCrowdDebug, &CrowdDebug_Parms, NULL );
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AGamePlayerController::GetUIPlayerIndex ( )
{
	static UFunction* pFnGetUIPlayerIndex = NULL;

	if ( ! pFnGetUIPlayerIndex )
		pFnGetUIPlayerIndex = (UFunction*) UObject::GObjObjects()->Data[ 36724 ];

	AGamePlayerController_execGetUIPlayerIndex_Parms GetUIPlayerIndex_Parms;

	pFnGetUIPlayerIndex->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetUIPlayerIndex, &GetUIPlayerIndex_Parms, NULL );

	pFnGetUIPlayerIndex->FunctionFlags |= 0x400;

	return GetUIPlayerIndex_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerController.OnToggleMouseCursor
// [0x00020002] 
// Parameters infos:
// class USeqAct_ToggleMouseCursor* inAction                       ( CPF_Parm )

void AGamePlayerController::OnToggleMouseCursor ( class USeqAct_ToggleMouseCursor* inAction )
{
	static UFunction* pFnOnToggleMouseCursor = NULL;

	if ( ! pFnOnToggleMouseCursor )
		pFnOnToggleMouseCursor = (UFunction*) UObject::GObjObjects()->Data[ 36720 ];

	AGamePlayerController_execOnToggleMouseCursor_Parms OnToggleMouseCursor_Parms;
	OnToggleMouseCursor_Parms.inAction = inAction;

	ProcessEvent ((UObject*)this, pFnOnToggleMouseCursor, &OnToggleMouseCursor_Parms, NULL );
};

// Function GameFramework.DebugCameraController.ConsoleCommand
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWriteToLog                    ( CPF_OptionalParm | CPF_Parm )

struct FString ADebugCameraController::ConsoleCommand ( struct FString Command, unsigned long bWriteToLog )
{
	static UFunction* pFnConsoleCommand = NULL;

	if ( ! pFnConsoleCommand )
		pFnConsoleCommand = (UFunction*) UObject::GObjObjects()->Data[ 36814 ];

	ADebugCameraController_execConsoleCommand_Parms ConsoleCommand_Parms;
	memcpy ( &ConsoleCommand_Parms.Command, &Command, 0xC );
	ConsoleCommand_Parms.bWriteToLog = bWriteToLog;

	pFnConsoleCommand->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnConsoleCommand, &ConsoleCommand_Parms, NULL );

	pFnConsoleCommand->FunctionFlags |= 0x400;

	return ConsoleCommand_Parms.ReturnValue;
};

// Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::ShowDebugSelectedInfo ( )
{
	static UFunction* pFnShowDebugSelectedInfo = NULL;

	if ( ! pFnShowDebugSelectedInfo )
		pFnShowDebugSelectedInfo = (UFunction*) UObject::GObjObjects()->Data[ 36841 ];

	ADebugCameraController_execShowDebugSelectedInfo_Parms ShowDebugSelectedInfo_Parms;

	ProcessEvent ((UObject*)this, pFnShowDebugSelectedInfo, &ShowDebugSelectedInfo_Parms, NULL );
};

// Function GameFramework.DebugCameraController.NativeInputKey
// [0x00824002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          AmountDepressed                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool ADebugCameraController::NativeInputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnNativeInputKey = NULL;

	if ( ! pFnNativeInputKey )
		pFnNativeInputKey = (UFunction*) UObject::GObjObjects()->Data[ 36827 ];

	ADebugCameraController_execNativeInputKey_Parms NativeInputKey_Parms;
	NativeInputKey_Parms.ControllerId = ControllerId;
	memcpy ( &NativeInputKey_Parms.Key, &Key, 0x8 );
	NativeInputKey_Parms.Event = Event;
	NativeInputKey_Parms.AmountDepressed = AmountDepressed;
	NativeInputKey_Parms.bGamepad = bGamepad;

	ProcessEvent ((UObject*)this, pFnNativeInputKey, &NativeInputKey_Parms, NULL );

	return NativeInputKey_Parms.ReturnValue;
};

// Function GameFramework.DebugCameraController.InitDebugInputSystem
// [0x00020002] 
// Parameters infos:

void ADebugCameraController::InitDebugInputSystem ( )
{
	static UFunction* pFnInitDebugInputSystem = NULL;

	if ( ! pFnInitDebugInputSystem )
		pFnInitDebugInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 36822 ];

	ADebugCameraController_execInitDebugInputSystem_Parms InitDebugInputSystem_Parms;

	ProcessEvent ((UObject*)this, pFnInitDebugInputSystem, &InitDebugInputSystem_Parms, NULL );
};

// Function GameFramework.DebugCameraController.DisableDebugCamera
// [0x00020002] 
// Parameters infos:

void ADebugCameraController::DisableDebugCamera ( )
{
	static UFunction* pFnDisableDebugCamera = NULL;

	if ( ! pFnDisableDebugCamera )
		pFnDisableDebugCamera = (UFunction*) UObject::GObjObjects()->Data[ 36821 ];

	ADebugCameraController_execDisableDebugCamera_Parms DisableDebugCamera_Parms;

	ProcessEvent ((UObject*)this, pFnDisableDebugCamera, &DisableDebugCamera_Parms, NULL );
};

// Function GameFramework.DebugCameraController.NormalSpeed
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::NormalSpeed ( )
{
	static UFunction* pFnNormalSpeed = NULL;

	if ( ! pFnNormalSpeed )
		pFnNormalSpeed = (UFunction*) UObject::GObjObjects()->Data[ 36820 ];

	ADebugCameraController_execNormalSpeed_Parms NormalSpeed_Parms;

	ProcessEvent ((UObject*)this, pFnNormalSpeed, &NormalSpeed_Parms, NULL );
};

// Function GameFramework.DebugCameraController.MoreSpeed
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::MoreSpeed ( )
{
	static UFunction* pFnMoreSpeed = NULL;

	if ( ! pFnMoreSpeed )
		pFnMoreSpeed = (UFunction*) UObject::GObjObjects()->Data[ 36819 ];

	ADebugCameraController_execMoreSpeed_Parms MoreSpeed_Parms;

	ProcessEvent ((UObject*)this, pFnMoreSpeed, &MoreSpeed_Parms, NULL );
};

// Function GameFramework.DebugCameraController.SetFreezeRendering
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::SetFreezeRendering ( )
{
	static UFunction* pFnSetFreezeRendering = NULL;

	if ( ! pFnSetFreezeRendering )
		pFnSetFreezeRendering = (UFunction*) UObject::GObjObjects()->Data[ 36818 ];

	ADebugCameraController_execSetFreezeRendering_Parms SetFreezeRendering_Parms;

	ProcessEvent ((UObject*)this, pFnSetFreezeRendering, &SetFreezeRendering_Parms, NULL );
};

// Function GameFramework.DebugCameraController.OnDeactivate
// [0x00020002] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void ADebugCameraController::OnDeactivate ( class APlayerController* PC )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 36816 ];

	ADebugCameraController_execOnDeactivate_Parms OnDeactivate_Parms;
	OnDeactivate_Parms.PC = PC;

	ProcessEvent ((UObject*)this, pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function GameFramework.DebugCameraController.OnActivate
// [0x00020002] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void ADebugCameraController::OnActivate ( class APlayerController* PC )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 36811 ];

	ADebugCameraController_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.PC = PC;

	ProcessEvent ((UObject*)this, pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function GameFramework.DebugCameraController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADebugCameraController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36810 ];

	ADebugCameraController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.DebugCameraController.Unselect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ADebugCameraController::Unselect ( )
{
	static UFunction* pFnUnselect = NULL;

	if ( ! pFnUnselect )
		pFnUnselect = (UFunction*) UObject::GObjObjects()->Data[ 36809 ];

	ADebugCameraController_execUnselect_Parms Unselect_Parms;

	pFnUnselect->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnUnselect, &Unselect_Parms, NULL );

	pFnUnselect->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraController.SecondarySelect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 HitLoc                         ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )

void ADebugCameraController::SecondarySelect ( struct FVector HitLoc, struct FVector HitNormal, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnSecondarySelect = NULL;

	if ( ! pFnSecondarySelect )
		pFnSecondarySelect = (UFunction*) UObject::GObjObjects()->Data[ 36805 ];

	ADebugCameraController_execSecondarySelect_Parms SecondarySelect_Parms;
	memcpy ( &SecondarySelect_Parms.HitLoc, &HitLoc, 0xC );
	memcpy ( &SecondarySelect_Parms.HitNormal, &HitNormal, 0xC );
	memcpy ( &SecondarySelect_Parms.HitInfo, &HitInfo, 0x20 );

	pFnSecondarySelect->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSecondarySelect, &SecondarySelect_Parms, NULL );

	pFnSecondarySelect->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraController.PrimarySelect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 HitLoc                         ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )

void ADebugCameraController::PrimarySelect ( struct FVector HitLoc, struct FVector HitNormal, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnPrimarySelect = NULL;

	if ( ! pFnPrimarySelect )
		pFnPrimarySelect = (UFunction*) UObject::GObjObjects()->Data[ 36801 ];

	ADebugCameraController_execPrimarySelect_Parms PrimarySelect_Parms;
	memcpy ( &PrimarySelect_Parms.HitLoc, &HitLoc, 0xC );
	memcpy ( &PrimarySelect_Parms.HitNormal, &HitNormal, 0xC );
	memcpy ( &PrimarySelect_Parms.HitInfo, &HitInfo, 0x20 );

	pFnPrimarySelect->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnPrimarySelect, &PrimarySelect_Parms, NULL );

	pFnPrimarySelect->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileHUD.RenderKismetHud
// [0x00020002] 
// Parameters infos:

void AMobileHUD::RenderKismetHud ( )
{
	static UFunction* pFnRenderKismetHud = NULL;

	if ( ! pFnRenderKismetHud )
		pFnRenderKismetHud = (UFunction*) UObject::GObjObjects()->Data[ 39141 ];

	AMobileHUD_execRenderKismetHud_Parms RenderKismetHud_Parms;

	ProcessEvent ((UObject*)this, pFnRenderKismetHud, &RenderKismetHud_Parms, NULL );
};

// Function GameFramework.MobileHUD.AddKismetRenderEvent
// [0x00020002] 
// Parameters infos:
// class USeqEvent_HudRender*     NewEvent                       ( CPF_Parm )

void AMobileHUD::AddKismetRenderEvent ( class USeqEvent_HudRender* NewEvent )
{
	static UFunction* pFnAddKismetRenderEvent = NULL;

	if ( ! pFnAddKismetRenderEvent )
		pFnAddKismetRenderEvent = (UFunction*) UObject::GObjObjects()->Data[ 39138 ];

	AMobileHUD_execAddKismetRenderEvent_Parms AddKismetRenderEvent_Parms;
	AddKismetRenderEvent_Parms.NewEvent = NewEvent;

	ProcessEvent ((UObject*)this, pFnAddKismetRenderEvent, &AddKismetRenderEvent_Parms, NULL );
};

// Function GameFramework.MobileHUD.RefreshKismetLinks
// [0x00020002] 
// Parameters infos:

void AMobileHUD::RefreshKismetLinks ( )
{
	static UFunction* pFnRefreshKismetLinks = NULL;

	if ( ! pFnRefreshKismetLinks )
		pFnRefreshKismetLinks = (UFunction*) UObject::GObjObjects()->Data[ 39133 ];

	AMobileHUD_execRefreshKismetLinks_Parms RefreshKismetLinks_Parms;

	ProcessEvent ((UObject*)this, pFnRefreshKismetLinks, &RefreshKismetLinks_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Slider
// [0x00820002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUD::DrawMobileZone_Slider ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Slider = NULL;

	if ( ! pFnDrawMobileZone_Slider )
		pFnDrawMobileZone_Slider = (UFunction*) UObject::GObjObjects()->Data[ 39126 ];

	AMobileHUD_execDrawMobileZone_Slider_Parms DrawMobileZone_Slider_Parms;
	DrawMobileZone_Slider_Parms.Zone = Zone;

	ProcessEvent ((UObject*)this, pFnDrawMobileZone_Slider, &DrawMobileZone_Slider_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileTilt
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      MobileInput                    ( CPF_Parm )

void AMobileHUD::DrawMobileTilt ( class UMobilePlayerInput* MobileInput )
{
	static UFunction* pFnDrawMobileTilt = NULL;

	if ( ! pFnDrawMobileTilt )
		pFnDrawMobileTilt = (UFunction*) UObject::GObjObjects()->Data[ 39110 ];

	AMobileHUD_execDrawMobileTilt_Parms DrawMobileTilt_Parms;
	DrawMobileTilt_Parms.MobileInput = MobileInput;

	ProcessEvent ((UObject*)this, pFnDrawMobileTilt, &DrawMobileTilt_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUD::DrawMobileZone_Trackball ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Trackball = NULL;

	if ( ! pFnDrawMobileZone_Trackball )
		pFnDrawMobileZone_Trackball = (UFunction*) UObject::GObjObjects()->Data[ 39106 ];

	AMobileHUD_execDrawMobileZone_Trackball_Parms DrawMobileZone_Trackball_Parms;
	DrawMobileZone_Trackball_Parms.Zone = Zone;

	ProcessEvent ((UObject*)this, pFnDrawMobileZone_Trackball, &DrawMobileZone_Trackball_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// [0x00820002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUD::DrawMobileZone_Joystick ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Joystick = NULL;

	if ( ! pFnDrawMobileZone_Joystick )
		pFnDrawMobileZone_Joystick = (UFunction*) UObject::GObjObjects()->Data[ 39094 ];

	AMobileHUD_execDrawMobileZone_Joystick_Parms DrawMobileZone_Joystick_Parms;
	DrawMobileZone_Joystick_Parms.Zone = Zone;

	ProcessEvent ((UObject*)this, pFnDrawMobileZone_Joystick, &DrawMobileZone_Joystick_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Button
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUD::DrawMobileZone_Button ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Button = NULL;

	if ( ! pFnDrawMobileZone_Button )
		pFnDrawMobileZone_Button = (UFunction*) UObject::GObjObjects()->Data[ 39072 ];

	AMobileHUD_execDrawMobileZone_Button_Parms DrawMobileZone_Button_Parms;
	DrawMobileZone_Button_Parms.Zone = Zone;

	ProcessEvent ((UObject*)this, pFnDrawMobileZone_Button, &DrawMobileZone_Button_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// [0x00020002] 
// Parameters infos:

void AMobileHUD::DrawInputZoneOverlays ( )
{
	static UFunction* pFnDrawInputZoneOverlays = NULL;

	if ( ! pFnDrawInputZoneOverlays )
		pFnDrawInputZoneOverlays = (UFunction*) UObject::GObjObjects()->Data[ 39048 ];

	AMobileHUD_execDrawInputZoneOverlays_Parms DrawInputZoneOverlays_Parms;

	ProcessEvent ((UObject*)this, pFnDrawInputZoneOverlays, &DrawInputZoneOverlays_Parms, NULL );
};

// Function GameFramework.MobileHUD.RenderMobileMenu
// [0x00020002] 
// Parameters infos:

void AMobileHUD::RenderMobileMenu ( )
{
	static UFunction* pFnRenderMobileMenu = NULL;

	if ( ! pFnRenderMobileMenu )
		pFnRenderMobileMenu = (UFunction*) UObject::GObjObjects()->Data[ 39038 ];

	AMobileHUD_execRenderMobileMenu_Parms RenderMobileMenu_Parms;

	ProcessEvent ((UObject*)this, pFnRenderMobileMenu, &RenderMobileMenu_Parms, NULL );
};

// Function GameFramework.MobileHUD.ShowMobileHud
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMobileHUD::ShowMobileHud ( )
{
	static UFunction* pFnShowMobileHud = NULL;

	if ( ! pFnShowMobileHud )
		pFnShowMobileHud = (UFunction*) UObject::GObjObjects()->Data[ 39036 ];

	AMobileHUD_execShowMobileHud_Parms ShowMobileHud_Parms;

	ProcessEvent ((UObject*)this, pFnShowMobileHud, &ShowMobileHud_Parms, NULL );

	return ShowMobileHud_Parms.ReturnValue;
};

// Function GameFramework.MobileHUD.DrawMobileDebugString
// [0x00020002] 
// Parameters infos:
// float                          XPos                           ( CPF_Parm )
// float                          YPos                           ( CPF_Parm )
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )

void AMobileHUD::DrawMobileDebugString ( float XPos, float YPos, struct FString Str )
{
	static UFunction* pFnDrawMobileDebugString = NULL;

	if ( ! pFnDrawMobileDebugString )
		pFnDrawMobileDebugString = (UFunction*) UObject::GObjObjects()->Data[ 39032 ];

	AMobileHUD_execDrawMobileDebugString_Parms DrawMobileDebugString_Parms;
	DrawMobileDebugString_Parms.XPos = XPos;
	DrawMobileDebugString_Parms.YPos = YPos;
	memcpy ( &DrawMobileDebugString_Parms.Str, &Str, 0xC );

	ProcessEvent ((UObject*)this, pFnDrawMobileDebugString, &DrawMobileDebugString_Parms, NULL );
};

// Function GameFramework.MobileHUD.PostRender
// [0x00020002] 
// Parameters infos:

void AMobileHUD::PostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 39030 ];

	AMobileHUD_execPostRender_Parms PostRender_Parms;

	ProcessEvent ((UObject*)this, pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.MobileHUD.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AMobileHUD::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 39029 ];

	AMobileHUD_execPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.MobileInputZone.AddKismetEventHandler
// [0x00020002] 
// Parameters infos:
// class USeqEvent_MobileZoneBase* NewHandler                     ( CPF_Parm )

void UMobileInputZone::AddKismetEventHandler ( class USeqEvent_MobileZoneBase* NewHandler )
{
	static UFunction* pFnAddKismetEventHandler = NULL;

	if ( ! pFnAddKismetEventHandler )
		pFnAddKismetEventHandler = (UFunction*) UObject::GObjObjects()->Data[ 39435 ];

	UMobileInputZone_execAddKismetEventHandler_Parms AddKismetEventHandler_Parms;
	AddKismetEventHandler_Parms.NewHandler = NewHandler;

	ProcessEvent ((UObject*)this, pFnAddKismetEventHandler, &AddKismetEventHandler_Parms, NULL );
};

// Function GameFramework.MobileInputZone.OnPostDrawZone
// [0x00120000] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMobileInputZone::OnPostDrawZone ( class UMobileInputZone* Zone, class UCanvas* Canvas )
{
	static UFunction* pFnOnPostDrawZone = NULL;

	if ( ! pFnOnPostDrawZone )
		pFnOnPostDrawZone = (UFunction*) UObject::GObjObjects()->Data[ 39353 ];

	UMobileInputZone_execOnPostDrawZone_Parms OnPostDrawZone_Parms;
	OnPostDrawZone_Parms.Zone = Zone;
	OnPostDrawZone_Parms.Canvas = Canvas;

	ProcessEvent ((UObject*)this, pFnOnPostDrawZone, &OnPostDrawZone_Parms, NULL );
};

// Function GameFramework.MobileInputZone.OnPreDrawZone
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

bool UMobileInputZone::OnPreDrawZone ( class UMobileInputZone* Zone, class UCanvas* Canvas )
{
	static UFunction* pFnOnPreDrawZone = NULL;

	if ( ! pFnOnPreDrawZone )
		pFnOnPreDrawZone = (UFunction*) UObject::GObjObjects()->Data[ 39067 ];

	UMobileInputZone_execOnPreDrawZone_Parms OnPreDrawZone_Parms;
	OnPreDrawZone_Parms.Zone = Zone;
	OnPreDrawZone_Parms.Canvas = Canvas;

	ProcessEvent ((UObject*)this, pFnOnPreDrawZone, &OnPreDrawZone_Parms, NULL );

	return OnPreDrawZone_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnProcessSlide
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// int                            SlideValue                     ( CPF_Parm )
// struct FVector2D               ViewportSize                   ( CPF_Parm )

bool UMobileInputZone::OnProcessSlide ( class UMobileInputZone* Zone, unsigned char EventType, int SlideValue, struct FVector2D ViewportSize )
{
	static UFunction* pFnOnProcessSlide = NULL;

	if ( ! pFnOnProcessSlide )
		pFnOnProcessSlide = (UFunction*) UObject::GObjObjects()->Data[ 39355 ];

	UMobileInputZone_execOnProcessSlide_Parms OnProcessSlide_Parms;
	OnProcessSlide_Parms.Zone = Zone;
	OnProcessSlide_Parms.EventType = EventType;
	OnProcessSlide_Parms.SlideValue = SlideValue;
	memcpy ( &OnProcessSlide_Parms.ViewportSize, &ViewportSize, 0x8 );

	ProcessEvent ((UObject*)this, pFnOnProcessSlide, &OnProcessSlide_Parms, NULL );

	return OnProcessSlide_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool UMobileInputZone::OnDoubleTapDelegate ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnOnDoubleTapDelegate = NULL;

	if ( ! pFnOnDoubleTapDelegate )
		pFnOnDoubleTapDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39357 ];

	UMobileInputZone_execOnDoubleTapDelegate_Parms OnDoubleTapDelegate_Parms;
	OnDoubleTapDelegate_Parms.Zone = Zone;
	OnDoubleTapDelegate_Parms.EventType = EventType;
	memcpy ( &OnDoubleTapDelegate_Parms.TouchLocation, &TouchLocation, 0x8 );

	ProcessEvent ((UObject*)this, pFnOnDoubleTapDelegate, &OnDoubleTapDelegate_Parms, NULL );

	return OnDoubleTapDelegate_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnTapDelegate
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool UMobileInputZone::OnTapDelegate ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnOnTapDelegate = NULL;

	if ( ! pFnOnTapDelegate )
		pFnOnTapDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39359 ];

	UMobileInputZone_execOnTapDelegate_Parms OnTapDelegate_Parms;
	OnTapDelegate_Parms.Zone = Zone;
	OnTapDelegate_Parms.EventType = EventType;
	memcpy ( &OnTapDelegate_Parms.TouchLocation, &TouchLocation, 0x8 );

	ProcessEvent ((UObject*)this, pFnOnTapDelegate, &OnTapDelegate_Parms, NULL );

	return OnTapDelegate_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// int                            Handle                         ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool UMobileInputZone::OnProcessInputDelegate ( class UMobileInputZone* Zone, float DeltaTime, int Handle, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnOnProcessInputDelegate = NULL;

	if ( ! pFnOnProcessInputDelegate )
		pFnOnProcessInputDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39361 ];

	UMobileInputZone_execOnProcessInputDelegate_Parms OnProcessInputDelegate_Parms;
	OnProcessInputDelegate_Parms.Zone = Zone;
	OnProcessInputDelegate_Parms.DeltaTime = DeltaTime;
	OnProcessInputDelegate_Parms.Handle = Handle;
	OnProcessInputDelegate_Parms.EventType = EventType;
	memcpy ( &OnProcessInputDelegate_Parms.TouchLocation, &TouchLocation, 0x8 );

	ProcessEvent ((UObject*)this, pFnOnProcessInputDelegate, &OnProcessInputDelegate_Parms, NULL );

	return OnProcessInputDelegate_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.DeactivateZone
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileInputZone::DeactivateZone ( )
{
	static UFunction* pFnDeactivateZone = NULL;

	if ( ! pFnDeactivateZone )
		pFnDeactivateZone = (UFunction*) UObject::GObjObjects()->Data[ 39411 ];

	UMobileInputZone_execDeactivateZone_Parms DeactivateZone_Parms;

	pFnDeactivateZone->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnDeactivateZone, &DeactivateZone_Parms, NULL );

	pFnDeactivateZone->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileInputZone.ActivateZone
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileInputZone::ActivateZone ( )
{
	static UFunction* pFnActivateZone = NULL;

	if ( ! pFnActivateZone )
		pFnActivateZone = (UFunction*) UObject::GObjObjects()->Data[ 39410 ];

	UMobileInputZone_execActivateZone_Parms ActivateZone_Parms;

	pFnActivateZone->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnActivateZone, &ActivateZone_Parms, NULL );

	pFnActivateZone->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileMenuObject.RenderObject
// [0x00020000] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuObject::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 39522 ];

	UMobileMenuObject_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObject.SetCanvasPos
// [0x00024002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          OffsetX                        ( CPF_OptionalParm | CPF_Parm )
// float                          OffsetY                        ( CPF_OptionalParm | CPF_Parm )

void UMobileMenuObject::SetCanvasPos ( class UCanvas* Canvas, float OffsetX, float OffsetY )
{
	static UFunction* pFnSetCanvasPos = NULL;

	if ( ! pFnSetCanvasPos )
		pFnSetCanvasPos = (UFunction*) UObject::GObjObjects()->Data[ 39516 ];

	UMobileMenuObject_execSetCanvasPos_Parms SetCanvasPos_Parms;
	SetCanvasPos_Parms.Canvas = Canvas;
	SetCanvasPos_Parms.OffsetX = OffsetX;
	SetCanvasPos_Parms.OffsetY = OffsetY;

	ProcessEvent ((UObject*)this, pFnSetCanvasPos, &SetCanvasPos_Parms, NULL );
};

// Function GameFramework.MobileMenuObject.InitMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// class UMobileMenuScene*        Scene                          ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuObject::InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 39494 ];

	UMobileMenuObject_execInitMenuObject_Parms InitMenuObject_Parms;
	InitMenuObject_Parms.PlayerInput = PlayerInput;
	InitMenuObject_Parms.Scene = Scene;
	InitMenuObject_Parms.ScreenWidth = ScreenWidth;
	InitMenuObject_Parms.ScreenHeight = ScreenHeight;
	InitMenuObject_Parms.bIsFirstInitialization = bIsFirstInitialization;

	ProcessEvent ((UObject*)this, pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObject.GetRealPosition
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// float                          PosX                           ( CPF_Parm | CPF_OutParm )
// float                          PosY                           ( CPF_Parm | CPF_OutParm )

void UMobileMenuObject::eventGetRealPosition ( float* PosX, float* PosY )
{
	static UFunction* pFnGetRealPosition = NULL;

	if ( ! pFnGetRealPosition )
		pFnGetRealPosition = (UFunction*) UObject::GObjObjects()->Data[ 39489 ];

	UMobileMenuObject_eventGetRealPosition_Parms GetRealPosition_Parms;

	ProcessEvent ((UObject*)this, pFnGetRealPosition, &GetRealPosition_Parms, NULL );

	if ( PosX )
		*PosX = GetRealPosition_Parms.PosX;

	if ( PosY )
		*PosY = GetRealPosition_Parms.PosY;
};

// Function GameFramework.MobileMenuObject.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuObject::eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 39482 ];

	UMobileMenuObject_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.ObjectOver = ObjectOver;
	OnTouch_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuImage.RenderObject
// [0x00820002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuImage::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 39635 ];

	UMobileMenuImage_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.MobileMenuCommand
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

bool UMobileMenuScene::MobileMenuCommand ( struct FString Command )
{
	static UFunction* pFnMobileMenuCommand = NULL;

	if ( ! pFnMobileMenuCommand )
		pFnMobileMenuCommand = (UFunction*) UObject::GObjObjects()->Data[ 39330 ];

	UMobileMenuScene_execMobileMenuCommand_Parms MobileMenuCommand_Parms;
	memcpy ( &MobileMenuCommand_Parms.Command, &Command, 0xC );

	ProcessEvent ((UObject*)this, pFnMobileMenuCommand, &MobileMenuCommand_Parms, NULL );

	return MobileMenuCommand_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.FindMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobileMenuObject*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Tag                            ( CPF_Parm | CPF_NeedCtorLink )

class UMobileMenuObject* UMobileMenuScene::FindMenuObject ( struct FString Tag )
{
	static UFunction* pFnFindMenuObject = NULL;

	if ( ! pFnFindMenuObject )
		pFnFindMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 39507 ];

	UMobileMenuScene_execFindMenuObject_Parms FindMenuObject_Parms;
	memcpy ( &FindMenuObject_Parms.Tag, &Tag, 0xC );

	ProcessEvent ((UObject*)this, pFnFindMenuObject, &FindMenuObject_Parms, NULL );

	return FindMenuObject_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.CleanUpScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileMenuScene::CleanUpScene ( )
{
	static UFunction* pFnCleanUpScene = NULL;

	if ( ! pFnCleanUpScene )
		pFnCleanUpScene = (UFunction*) UObject::GObjObjects()->Data[ 39993 ];

	UMobileMenuScene_execCleanUpScene_Parms CleanUpScene_Parms;

	pFnCleanUpScene->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnCleanUpScene, &CleanUpScene_Parms, NULL );

	pFnCleanUpScene->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileMenuScene.Closed
// [0x00020002] 
// Parameters infos:

void UMobileMenuScene::Closed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = (UFunction*) UObject::GObjObjects()->Data[ 39992 ];

	UMobileMenuScene_execClosed_Parms Closed_Parms;

	ProcessEvent ((UObject*)this, pFnClosed, &Closed_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.Closing
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMobileMenuScene::Closing ( )
{
	static UFunction* pFnClosing = NULL;

	if ( ! pFnClosing )
		pFnClosing = (UFunction*) UObject::GObjObjects()->Data[ 39314 ];

	UMobileMenuScene_execClosing_Parms Closing_Parms;

	ProcessEvent ((UObject*)this, pFnClosing, &Closing_Parms, NULL );

	return Closing_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.MadeTopMenu
// [0x00020000] 
// Parameters infos:

void UMobileMenuScene::MadeTopMenu ( )
{
	static UFunction* pFnMadeTopMenu = NULL;

	if ( ! pFnMadeTopMenu )
		pFnMadeTopMenu = (UFunction*) UObject::GObjObjects()->Data[ 39991 ];

	UMobileMenuScene_execMadeTopMenu_Parms MadeTopMenu_Parms;

	ProcessEvent ((UObject*)this, pFnMadeTopMenu, &MadeTopMenu_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.Opened
// [0x00020000] 
// Parameters infos:
// struct FString                 Mode                           ( CPF_Parm | CPF_NeedCtorLink )

void UMobileMenuScene::Opened ( struct FString Mode )
{
	static UFunction* pFnOpened = NULL;

	if ( ! pFnOpened )
		pFnOpened = (UFunction*) UObject::GObjObjects()->Data[ 39989 ];

	UMobileMenuScene_execOpened_Parms Opened_Parms;
	memcpy ( &Opened_Parms.Mode, &Mode, 0xC );

	ProcessEvent ((UObject*)this, pFnOpened, &Opened_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.OnSceneTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// unsigned long                  bInside                        ( CPF_Parm )

bool UMobileMenuScene::eventOnSceneTouch ( unsigned char EventType, float TouchX, float TouchY, unsigned long bInside )
{
	static UFunction* pFnOnSceneTouch = NULL;

	if ( ! pFnOnSceneTouch )
		pFnOnSceneTouch = (UFunction*) UObject::GObjObjects()->Data[ 39983 ];

	UMobileMenuScene_eventOnSceneTouch_Parms OnSceneTouch_Parms;
	OnSceneTouch_Parms.EventType = EventType;
	OnSceneTouch_Parms.TouchX = TouchX;
	OnSceneTouch_Parms.TouchY = TouchY;
	OnSceneTouch_Parms.bInside = bInside;

	ProcessEvent ((UObject*)this, pFnOnSceneTouch, &OnSceneTouch_Parms, NULL );

	return OnSceneTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.OnTouch
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuObject*       Sender                         ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )

void UMobileMenuScene::eventOnTouch ( class UMobileMenuObject* Sender, unsigned char EventType, float TouchX, float TouchY )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 39978 ];

	UMobileMenuScene_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.Sender = Sender;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;

	ProcessEvent ((UObject*)this, pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.PreRenderMenuObject
// [0x00020000] 
// Parameters infos:
// class UMobileMenuObject*       MenuObject                     ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          RenderDelta                    ( CPF_Parm )

void UMobileMenuScene::PreRenderMenuObject ( class UMobileMenuObject* MenuObject, class UCanvas* Canvas, float RenderDelta )
{
	static UFunction* pFnPreRenderMenuObject = NULL;

	if ( ! pFnPreRenderMenuObject )
		pFnPreRenderMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 39974 ];

	UMobileMenuScene_execPreRenderMenuObject_Parms PreRenderMenuObject_Parms;
	PreRenderMenuObject_Parms.MenuObject = MenuObject;
	PreRenderMenuObject_Parms.Canvas = Canvas;
	PreRenderMenuObject_Parms.RenderDelta = RenderDelta;

	ProcessEvent ((UObject*)this, pFnPreRenderMenuObject, &PreRenderMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.RenderScene
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          RenderDelta                    ( CPF_Parm )

void UMobileMenuScene::RenderScene ( class UCanvas* Canvas, float RenderDelta )
{
	static UFunction* pFnRenderScene = NULL;

	if ( ! pFnRenderScene )
		pFnRenderScene = (UFunction*) UObject::GObjObjects()->Data[ 39970 ];

	UMobileMenuScene_execRenderScene_Parms RenderScene_Parms;
	RenderScene_Parms.Canvas = Canvas;
	RenderScene_Parms.RenderDelta = RenderDelta;

	ProcessEvent ((UObject*)this, pFnRenderScene, &RenderScene_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.GetSceneFont
// [0x00020002] 
// Parameters infos:
// class UFont*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UFont* UMobileMenuScene::GetSceneFont ( )
{
	static UFunction* pFnGetSceneFont = NULL;

	if ( ! pFnGetSceneFont )
		pFnGetSceneFont = (UFunction*) UObject::GObjObjects()->Data[ 39968 ];

	UMobileMenuScene_execGetSceneFont_Parms GetSceneFont_Parms;

	ProcessEvent ((UObject*)this, pFnGetSceneFont, &GetSceneFont_Parms, NULL );

	return GetSceneFont_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.InitMenuScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuScene::eventInitMenuScene ( class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuScene = NULL;

	if ( ! pFnInitMenuScene )
		pFnInitMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 39958 ];

	UMobileMenuScene_eventInitMenuScene_Parms InitMenuScene_Parms;
	InitMenuScene_Parms.PlayerInput = PlayerInput;
	InitMenuScene_Parms.ScreenWidth = ScreenWidth;
	InitMenuScene_Parms.ScreenHeight = ScreenHeight;
	InitMenuScene_Parms.bIsFirstInitialization = bIsFirstInitialization;

	ProcessEvent ((UObject*)this, pFnInitMenuScene, &InitMenuScene_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleY
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UMobileMenuScene::GetGlobalScaleY ( )
{
	static UFunction* pFnGetGlobalScaleY = NULL;

	if ( ! pFnGetGlobalScaleY )
		pFnGetGlobalScaleY = (UFunction*) UObject::GObjObjects()->Data[ 39514 ];

	UMobileMenuScene_execGetGlobalScaleY_Parms GetGlobalScaleY_Parms;

	pFnGetGlobalScaleY->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetGlobalScaleY, &GetGlobalScaleY_Parms, NULL );

	pFnGetGlobalScaleY->FunctionFlags |= 0x400;

	return GetGlobalScaleY_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleX
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UMobileMenuScene::GetGlobalScaleX ( )
{
	static UFunction* pFnGetGlobalScaleX = NULL;

	if ( ! pFnGetGlobalScaleX )
		pFnGetGlobalScaleX = (UFunction*) UObject::GObjObjects()->Data[ 39512 ];

	UMobileMenuScene_execGetGlobalScaleX_Parms GetGlobalScaleX_Parms;

	pFnGetGlobalScaleX->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetGlobalScaleX, &GetGlobalScaleX_Parms, NULL );

	pFnGetGlobalScaleX->FunctionFlags |= 0x400;

	return GetGlobalScaleX_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// class UMobileMenuScene*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MenuClassName                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Mode                           ( CPF_Parm | CPF_NeedCtorLink )

class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenuMode ( struct FString MenuClassName, struct FString Mode )
{
	static UFunction* pFnOpenMobileMenuMode = NULL;

	if ( ! pFnOpenMobileMenuMode )
		pFnOpenMobileMenuMode = (UFunction*) UObject::GObjObjects()->Data[ 39336 ];

	UMobilePlayerInput_execOpenMobileMenuMode_Parms OpenMobileMenuMode_Parms;
	memcpy ( &OpenMobileMenuMode_Parms.MenuClassName, &MenuClassName, 0xC );
	memcpy ( &OpenMobileMenuMode_Parms.Mode, &Mode, 0xC );

	ProcessEvent ((UObject*)this, pFnOpenMobileMenuMode, &OpenMobileMenuMode_Parms, NULL );

	return OpenMobileMenuMode_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// class UMobileMenuScene*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MenuClassName                  ( CPF_Parm | CPF_NeedCtorLink )

class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenu ( struct FString MenuClassName )
{
	static UFunction* pFnOpenMobileMenu = NULL;

	if ( ! pFnOpenMobileMenu )
		pFnOpenMobileMenu = (UFunction*) UObject::GObjObjects()->Data[ 39332 ];

	UMobilePlayerInput_execOpenMobileMenu_Parms OpenMobileMenu_Parms;
	memcpy ( &OpenMobileMenu_Parms.MenuClassName, &MenuClassName, 0xC );

	ProcessEvent ((UObject*)this, pFnOpenMobileMenu, &OpenMobileMenu_Parms, NULL );

	return OpenMobileMenu_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 MenuCommand                    ( CPF_Parm | CPF_NeedCtorLink )

void UMobilePlayerInput::MobileMenuCommand ( struct FString MenuCommand )
{
	static UFunction* pFnMobileMenuCommand = NULL;

	if ( ! pFnMobileMenuCommand )
		pFnMobileMenuCommand = (UFunction*) UObject::GObjObjects()->Data[ 39327 ];

	UMobilePlayerInput_execMobileMenuCommand_Parms MobileMenuCommand_Parms;
	memcpy ( &MobileMenuCommand_Parms.MenuCommand, &MenuCommand, 0xC );

	ProcessEvent ((UObject*)this, pFnMobileMenuCommand, &MobileMenuCommand_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.SceneRenderToggle
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::SceneRenderToggle ( )
{
	static UFunction* pFnSceneRenderToggle = NULL;

	if ( ! pFnSceneRenderToggle )
		pFnSceneRenderToggle = (UFunction*) UObject::GObjObjects()->Data[ 39326 ];

	UMobilePlayerInput_execSceneRenderToggle_Parms SceneRenderToggle_Parms;

	ProcessEvent ((UObject*)this, pFnSceneRenderToggle, &SceneRenderToggle_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.PreClientTravel
// [0x00020002] 
// Parameters infos:
// struct FString                 PendingURL                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  TravelType                     ( CPF_Parm )
// unsigned long                  bIsSeamlessTravel              ( CPF_Parm )

void UMobilePlayerInput::PreClientTravel ( struct FString PendingURL, unsigned char TravelType, unsigned long bIsSeamlessTravel )
{
	static UFunction* pFnPreClientTravel = NULL;

	if ( ! pFnPreClientTravel )
		pFnPreClientTravel = (UFunction*) UObject::GObjObjects()->Data[ 39321 ];

	UMobilePlayerInput_execPreClientTravel_Parms PreClientTravel_Parms;
	memcpy ( &PreClientTravel_Parms.PendingURL, &PendingURL, 0xC );
	PreClientTravel_Parms.TravelType = TravelType;
	PreClientTravel_Parms.bIsSeamlessTravel = bIsSeamlessTravel;

	ProcessEvent ((UObject*)this, pFnPreClientTravel, &PreClientTravel_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.RenderMenus
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          RenderDelta                    ( CPF_Parm )

void UMobilePlayerInput::eventRenderMenus ( class UCanvas* Canvas, float RenderDelta )
{
	static UFunction* pFnRenderMenus = NULL;

	if ( ! pFnRenderMenus )
		pFnRenderMenus = (UFunction*) UObject::GObjObjects()->Data[ 39317 ];

	UMobilePlayerInput_eventRenderMenus_Parms RenderMenus_Parms;
	RenderMenus_Parms.Canvas = Canvas;
	RenderMenus_Parms.RenderDelta = RenderDelta;

	ProcessEvent ((UObject*)this, pFnRenderMenus, &RenderMenus_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.CloseAllMenus
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobilePlayerInput::eventCloseAllMenus ( )
{
	static UFunction* pFnCloseAllMenus = NULL;

	if ( ! pFnCloseAllMenus )
		pFnCloseAllMenus = (UFunction*) UObject::GObjObjects()->Data[ 39316 ];

	UMobilePlayerInput_eventCloseAllMenus_Parms CloseAllMenus_Parms;

	ProcessEvent ((UObject*)this, pFnCloseAllMenus, &CloseAllMenus_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.CloseMenuScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuScene*        SceneToClose                   ( CPF_Parm )

void UMobilePlayerInput::eventCloseMenuScene ( class UMobileMenuScene* SceneToClose )
{
	static UFunction* pFnCloseMenuScene = NULL;

	if ( ! pFnCloseMenuScene )
		pFnCloseMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 39309 ];

	UMobilePlayerInput_eventCloseMenuScene_Parms CloseMenuScene_Parms;
	CloseMenuScene_Parms.SceneToClose = SceneToClose;

	ProcessEvent ((UObject*)this, pFnCloseMenuScene, &CloseMenuScene_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.OpenMenuScene
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuScene*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  SceneClass                     ( CPF_Parm )
// struct FString                 Mode                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

class UMobileMenuScene* UMobilePlayerInput::eventOpenMenuScene ( class UClass* SceneClass, struct FString Mode )
{
	static UFunction* pFnOpenMenuScene = NULL;

	if ( ! pFnOpenMenuScene )
		pFnOpenMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 39303 ];

	UMobilePlayerInput_eventOpenMenuScene_Parms OpenMenuScene_Parms;
	OpenMenuScene_Parms.SceneClass = SceneClass;
	memcpy ( &OpenMenuScene_Parms.Mode, &Mode, 0xC );

	ProcessEvent ((UObject*)this, pFnOpenMenuScene, &OpenMenuScene_Parms, NULL );

	return OpenMenuScene_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 GroupName                      ( CPF_Parm | CPF_NeedCtorLink )

void UMobilePlayerInput::SetMobileInputConfig ( struct FString GroupName )
{
	static UFunction* pFnSetMobileInputConfig = NULL;

	if ( ! pFnSetMobileInputConfig )
		pFnSetMobileInputConfig = (UFunction*) UObject::GObjObjects()->Data[ 39300 ];

	UMobilePlayerInput_execSetMobileInputConfig_Parms SetMobileInputConfig_Parms;
	memcpy ( &SetMobileInputConfig_Parms.GroupName, &GroupName, 0xC );

	ProcessEvent ((UObject*)this, pFnSetMobileInputConfig, &SetMobileInputConfig_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.ActivateInputGroup
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 GroupName                      ( CPF_Parm | CPF_NeedCtorLink )

void UMobilePlayerInput::ActivateInputGroup ( struct FString GroupName )
{
	static UFunction* pFnActivateInputGroup = NULL;

	if ( ! pFnActivateInputGroup )
		pFnActivateInputGroup = (UFunction*) UObject::GObjObjects()->Data[ 39297 ];

	UMobilePlayerInput_execActivateInputGroup_Parms ActivateInputGroup_Parms;
	memcpy ( &ActivateInputGroup_Parms.GroupName, &GroupName, 0xC );

	ProcessEvent ((UObject*)this, pFnActivateInputGroup, &ActivateInputGroup_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.GetCurrentZones
// [0x00020002] 
// Parameters infos:
// TArray< class UMobileInputZone* > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< class UMobileInputZone* > UMobilePlayerInput::GetCurrentZones ( )
{
	static UFunction* pFnGetCurrentZones = NULL;

	if ( ! pFnGetCurrentZones )
		pFnGetCurrentZones = (UFunction*) UObject::GObjObjects()->Data[ 39057 ];

	UMobilePlayerInput_execGetCurrentZones_Parms GetCurrentZones_Parms;

	ProcessEvent ((UObject*)this, pFnGetCurrentZones, &GetCurrentZones_Parms, NULL );

	return GetCurrentZones_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.HasZones
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMobilePlayerInput::HasZones ( )
{
	static UFunction* pFnHasZones = NULL;

	if ( ! pFnHasZones )
		pFnHasZones = (UFunction*) UObject::GObjObjects()->Data[ 39055 ];

	UMobilePlayerInput_execHasZones_Parms HasZones_Parms;

	ProcessEvent ((UObject*)this, pFnHasZones, &HasZones_Parms, NULL );

	return HasZones_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.FindorAddZone
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ZoneName                       ( CPF_Parm | CPF_NeedCtorLink )

class UMobileInputZone* UMobilePlayerInput::FindorAddZone ( struct FString ZoneName )
{
	static UFunction* pFnFindorAddZone = NULL;

	if ( ! pFnFindorAddZone )
		pFnFindorAddZone = (UFunction*) UObject::GObjObjects()->Data[ 39290 ];

	UMobilePlayerInput_execFindorAddZone_Parms FindorAddZone_Parms;
	memcpy ( &FindorAddZone_Parms.ZoneName, &ZoneName, 0xC );

	ProcessEvent ((UObject*)this, pFnFindorAddZone, &FindorAddZone_Parms, NULL );

	return FindorAddZone_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.FindZone
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ZoneName                       ( CPF_Parm | CPF_NeedCtorLink )

class UMobileInputZone* UMobilePlayerInput::FindZone ( struct FString ZoneName )
{
	static UFunction* pFnFindZone = NULL;

	if ( ! pFnFindZone )
		pFnFindZone = (UFunction*) UObject::GObjObjects()->Data[ 38987 ];

	UMobilePlayerInput_execFindZone_Parms FindZone_Parms;
	memcpy ( &FindZone_Parms.ZoneName, &ZoneName, 0xC );

	ProcessEvent ((UObject*)this, pFnFindZone, &FindZone_Parms, NULL );

	return FindZone_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
// [0x00020002] 
// Parameters infos:
// class USeqEvent_MobileRawInput* NewHandler                     ( CPF_Parm )

void UMobilePlayerInput::AddKismetRawInputEventHandler ( class USeqEvent_MobileRawInput* NewHandler )
{
	static UFunction* pFnAddKismetRawInputEventHandler = NULL;

	if ( ! pFnAddKismetRawInputEventHandler )
		pFnAddKismetRawInputEventHandler = (UFunction*) UObject::GObjObjects()->Data[ 39285 ];

	UMobilePlayerInput_execAddKismetRawInputEventHandler_Parms AddKismetRawInputEventHandler_Parms;
	AddKismetRawInputEventHandler_Parms.NewHandler = NewHandler;

	ProcessEvent ((UObject*)this, pFnAddKismetRawInputEventHandler, &AddKismetRawInputEventHandler_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
// [0x00020002] 
// Parameters infos:
// class USeqEvent_MobileBase*    NewHandler                     ( CPF_Parm )

void UMobilePlayerInput::AddKismetEventHandler ( class USeqEvent_MobileBase* NewHandler )
{
	static UFunction* pFnAddKismetEventHandler = NULL;

	if ( ! pFnAddKismetEventHandler )
		pFnAddKismetEventHandler = (UFunction*) UObject::GObjObjects()->Data[ 39282 ];

	UMobilePlayerInput_execAddKismetEventHandler_Parms AddKismetEventHandler_Parms;
	AddKismetEventHandler_Parms.NewHandler = NewHandler;

	ProcessEvent ((UObject*)this, pFnAddKismetEventHandler, &AddKismetEventHandler_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobilePlayerInput::eventRefreshKismetLinks ( )
{
	static UFunction* pFnRefreshKismetLinks = NULL;

	if ( ! pFnRefreshKismetLinks )
		pFnRefreshKismetLinks = (UFunction*) UObject::GObjObjects()->Data[ 39277 ];

	UMobilePlayerInput_eventRefreshKismetLinks_Parms RefreshKismetLinks_Parms;

	ProcessEvent ((UObject*)this, pFnRefreshKismetLinks, &RefreshKismetLinks_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.SwapZoneOwners
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::SwapZoneOwners ( )
{
	static UFunction* pFnSwapZoneOwners = NULL;

	if ( ! pFnSwapZoneOwners )
		pFnSwapZoneOwners = (UFunction*) UObject::GObjObjects()->Data[ 39274 ];

	UMobilePlayerInput_execSwapZoneOwners_Parms SwapZoneOwners_Parms;

	ProcessEvent ((UObject*)this, pFnSwapZoneOwners, &SwapZoneOwners_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.InitializeInputZones
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::InitializeInputZones ( )
{
	static UFunction* pFnInitializeInputZones = NULL;

	if ( ! pFnInitializeInputZones )
		pFnInitializeInputZones = (UFunction*) UObject::GObjObjects()->Data[ 39269 ];

	UMobilePlayerInput_execInitializeInputZones_Parms InitializeInputZones_Parms;

	ProcessEvent ((UObject*)this, pFnInitializeInputZones, &InitializeInputZones_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.InitTouchSystem
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::InitTouchSystem ( )
{
	static UFunction* pFnInitTouchSystem = NULL;

	if ( ! pFnInitTouchSystem )
		pFnInitTouchSystem = (UFunction*) UObject::GObjObjects()->Data[ 39268 ];

	UMobilePlayerInput_execInitTouchSystem_Parms InitTouchSystem_Parms;

	ProcessEvent ((UObject*)this, pFnInitTouchSystem, &InitTouchSystem_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::ClientInitInputSystem ( )
{
	static UFunction* pFnClientInitInputSystem = NULL;

	if ( ! pFnClientInitInputSystem )
		pFnClientInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 39267 ];

	UMobilePlayerInput_execClientInitInputSystem_Parms ClientInitInputSystem_Parms;

	ProcessEvent ((UObject*)this, pFnClientInitInputSystem, &ClientInitInputSystem_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.InitInputSystem
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::InitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 39266 ];

	UMobilePlayerInput_execInitInputSystem_Parms InitInputSystem_Parms;

	ProcessEvent ((UObject*)this, pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.ProcessWorldTouch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool UMobilePlayerInput::ProcessWorldTouch ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnProcessWorldTouch = NULL;

	if ( ! pFnProcessWorldTouch )
		pFnProcessWorldTouch = (UFunction*) UObject::GObjObjects()->Data[ 39261 ];

	UMobilePlayerInput_execProcessWorldTouch_Parms ProcessWorldTouch_Parms;
	ProcessWorldTouch_Parms.Zone = Zone;
	ProcessWorldTouch_Parms.EventType = EventType;
	memcpy ( &ProcessWorldTouch_Parms.TouchLocation, &TouchLocation, 0x8 );

	pFnProcessWorldTouch->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnProcessWorldTouch, &ProcessWorldTouch_Parms, NULL );

	pFnProcessWorldTouch->FunctionFlags |= 0x400;

	return ProcessWorldTouch_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.SendInputAxis
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// float                          Delta                          ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobilePlayerInput::SendInputAxis ( struct FName Key, float Delta, float DeltaTime )
{
	static UFunction* pFnSendInputAxis = NULL;

	if ( ! pFnSendInputAxis )
		pFnSendInputAxis = (UFunction*) UObject::GObjObjects()->Data[ 39257 ];

	UMobilePlayerInput_execSendInputAxis_Parms SendInputAxis_Parms;
	memcpy ( &SendInputAxis_Parms.Key, &Key, 0x8 );
	SendInputAxis_Parms.Delta = Delta;
	SendInputAxis_Parms.DeltaTime = DeltaTime;

	pFnSendInputAxis->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSendInputAxis, &SendInputAxis_Parms, NULL );

	pFnSendInputAxis->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.SendInputKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          AmountDepressed                ( CPF_Parm )

void UMobilePlayerInput::SendInputKey ( struct FName Key, unsigned char Event, float AmountDepressed )
{
	static UFunction* pFnSendInputKey = NULL;

	if ( ! pFnSendInputKey )
		pFnSendInputKey = (UFunction*) UObject::GObjObjects()->Data[ 39253 ];

	UMobilePlayerInput_execSendInputKey_Parms SendInputKey_Parms;
	memcpy ( &SendInputKey_Parms.Key, &Key, 0x8 );
	SendInputKey_Parms.Event = Event;
	SendInputKey_Parms.AmountDepressed = AmountDepressed;

	pFnSendInputKey->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSendInputKey, &SendInputKey_Parms, NULL );

	pFnSendInputKey->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            NewViewportX                   ( CPF_Parm )
// int                            NewViewportY                   ( CPF_Parm )
// int                            NewViewportSizeX               ( CPF_Parm )
// int                            NewViewportSizeY               ( CPF_Parm )

void UMobilePlayerInput::ConditionalUpdateInputZones ( int NewViewportX, int NewViewportY, int NewViewportSizeX, int NewViewportSizeY )
{
	static UFunction* pFnConditionalUpdateInputZones = NULL;

	if ( ! pFnConditionalUpdateInputZones )
		pFnConditionalUpdateInputZones = (UFunction*) UObject::GObjObjects()->Data[ 39248 ];

	UMobilePlayerInput_execConditionalUpdateInputZones_Parms ConditionalUpdateInputZones_Parms;
	ConditionalUpdateInputZones_Parms.NewViewportX = NewViewportX;
	ConditionalUpdateInputZones_Parms.NewViewportY = NewViewportY;
	ConditionalUpdateInputZones_Parms.NewViewportSizeX = NewViewportSizeX;
	ConditionalUpdateInputZones_Parms.NewViewportSizeY = NewViewportSizeY;

	pFnConditionalUpdateInputZones->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnConditionalUpdateInputZones, &ConditionalUpdateInputZones_Parms, NULL );

	pFnConditionalUpdateInputZones->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bIsFirstInitialize             ( CPF_Parm )

void UMobilePlayerInput::NativeInitializeInputZones ( unsigned long bIsFirstInitialize )
{
	static UFunction* pFnNativeInitializeInputZones = NULL;

	if ( ! pFnNativeInitializeInputZones )
		pFnNativeInitializeInputZones = (UFunction*) UObject::GObjObjects()->Data[ 39246 ];

	UMobilePlayerInput_execNativeInitializeInputZones_Parms NativeInitializeInputZones_Parms;
	NativeInitializeInputZones_Parms.bIsFirstInitialize = bIsFirstInitialize;

	pFnNativeInitializeInputZones->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnNativeInitializeInputZones, &NativeInitializeInputZones_Parms, NULL );

	pFnNativeInitializeInputZones->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::NativeInitializeInputSystem ( )
{
	static UFunction* pFnNativeInitializeInputSystem = NULL;

	if ( ! pFnNativeInitializeInputSystem )
		pFnNativeInitializeInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 39245 ];

	UMobilePlayerInput_execNativeInitializeInputSystem_Parms NativeInitializeInputSystem_Parms;

	pFnNativeInitializeInputSystem->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnNativeInitializeInputSystem, &NativeInitializeInputSystem_Parms, NULL );

	pFnNativeInitializeInputSystem->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.OnInputTouch
// [0x00120000] 
// Parameters infos:
// int                            Handle                         ( CPF_Parm )
// unsigned char                  Type                           ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )
// float                          DeviceTimestamp                ( CPF_Parm )
// int                            TouchpadIndex                  ( CPF_Parm )

void UMobilePlayerInput::OnInputTouch ( int Handle, unsigned char Type, struct FVector2D TouchLocation, float DeviceTimestamp, int TouchpadIndex )
{
	static UFunction* pFnOnInputTouch = NULL;

	if ( ! pFnOnInputTouch )
		pFnOnInputTouch = (UFunction*) UObject::GObjObjects()->Data[ 39204 ];

	UMobilePlayerInput_execOnInputTouch_Parms OnInputTouch_Parms;
	OnInputTouch_Parms.Handle = Handle;
	OnInputTouch_Parms.Type = Type;
	memcpy ( &OnInputTouch_Parms.TouchLocation, &TouchLocation, 0x8 );
	OnInputTouch_Parms.DeviceTimestamp = DeviceTimestamp;
	OnInputTouch_Parms.TouchpadIndex = TouchpadIndex;

	ProcessEvent ((UObject*)this, pFnOnInputTouch, &OnInputTouch_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.OnPreviewTouch
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// int                            TouchpadIndex                  ( CPF_Parm )

bool UMobilePlayerInput::OnPreviewTouch ( float X, float Y, int TouchpadIndex )
{
	static UFunction* pFnOnPreviewTouch = NULL;

	if ( ! pFnOnPreviewTouch )
		pFnOnPreviewTouch = (UFunction*) UObject::GObjObjects()->Data[ 39206 ];

	UMobilePlayerInput_execOnPreviewTouch_Parms OnPreviewTouch_Parms;
	OnPreviewTouch_Parms.X = X;
	OnPreviewTouch_Parms.Y = Y;
	OnPreviewTouch_Parms.TouchpadIndex = TouchpadIndex;

	ProcessEvent ((UObject*)this, pFnOnPreviewTouch, &OnPreviewTouch_Parms, NULL );

	return OnPreviewTouch_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
// [0x00120000] 
// Parameters infos:

void UMobilePlayerInput::OnTouchNotHandledInMenu ( )
{
	static UFunction* pFnOnTouchNotHandledInMenu = NULL;

	if ( ! pFnOnTouchNotHandledInMenu )
		pFnOnTouchNotHandledInMenu = (UFunction*) UObject::GObjObjects()->Data[ 39208 ];

	UMobilePlayerInput_execOnTouchNotHandledInMenu_Parms OnTouchNotHandledInMenu_Parms;

	ProcessEvent ((UObject*)this, pFnOnTouchNotHandledInMenu, &OnTouchNotHandledInMenu_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.PlayerInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UMobilePlayerInput::eventPlayerInput ( float DeltaTime )
{
	static UFunction* pFnPlayerInput = NULL;

	if ( ! pFnPlayerInput )
		pFnPlayerInput = (UFunction*) UObject::GObjObjects()->Data[ 39234 ];

	UMobilePlayerInput_eventPlayerInput_Parms PlayerInput_Parms;
	PlayerInput_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnPlayerInput, &PlayerInput_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.CancelMobileInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::CancelMobileInput ( )
{
	static UFunction* pFnCancelMobileInput = NULL;

	if ( ! pFnCancelMobileInput )
		pFnCancelMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 39233 ];

	UMobilePlayerInput_execCancelMobileInput_Parms CancelMobileInput_Parms;

	pFnCancelMobileInput->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnCancelMobileInput, &CancelMobileInput_Parms, NULL );

	pFnCancelMobileInput->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.ProcessMobileInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UMobilePlayerInput::ProcessMobileInput ( float DeltaTime )
{
	static UFunction* pFnProcessMobileInput = NULL;

	if ( ! pFnProcessMobileInput )
		pFnProcessMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 39231 ];

	UMobilePlayerInput_execProcessMobileInput_Parms ProcessMobileInput_Parms;
	ProcessMobileInput_Parms.DeltaTime = DeltaTime;

	pFnProcessMobileInput->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnProcessMobileInput, &ProcessMobileInput_Parms, NULL );

	pFnProcessMobileInput->FunctionFlags |= 0x400;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// [0x00020002] 
// Parameters infos:

void UNavMeshGoal_OutOfViewFrom::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 40024 ];

	UNavMeshGoal_OutOfViewFrom_execRecycle_Parms Recycle_Parms;

	ProcessEvent ((UObject*)this, pFnRecycle, &Recycle_Parms, NULL );
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UNavigationHandle*       NavHandle                      ( CPF_Parm )
// struct FVector                 InOutOfViewLocation            ( CPF_Parm )

bool UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint ( class UNavigationHandle* NavHandle, struct FVector InOutOfViewLocation )
{
	static UFunction* pFnMustBeHiddenFromThisPoint = NULL;

	if ( ! pFnMustBeHiddenFromThisPoint )
		pFnMustBeHiddenFromThisPoint = (UFunction*) UObject::GObjObjects()->Data[ 40019 ];

	UNavMeshGoal_OutOfViewFrom_execMustBeHiddenFromThisPoint_Parms MustBeHiddenFromThisPoint_Parms;
	MustBeHiddenFromThisPoint_Parms.NavHandle = NavHandle;
	memcpy ( &MustBeHiddenFromThisPoint_Parms.InOutOfViewLocation, &InOutOfViewLocation, 0xC );

	ProcessEvent ((UObject*)this, pFnMustBeHiddenFromThisPoint, &MustBeHiddenFromThisPoint_Parms, NULL );

	return MustBeHiddenFromThisPoint_Parms.ReturnValue;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UNavMeshGoal_OutOfViewFrom::RecycleNative ( )
{
	static UFunction* pFnRecycleNative = NULL;

	if ( ! pFnRecycleNative )
		pFnRecycleNative = (UFunction*) UObject::GObjObjects()->Data[ 40018 ];

	UNavMeshGoal_OutOfViewFrom_execRecycleNative_Parms RecycleNative_Parms;

	pFnRecycleNative->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnRecycleNative, &RecycleNative_Parms, NULL );

	pFnRecycleNative->FunctionFlags |= 0x400;
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// [0x00020002] 
// Parameters infos:

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 40039 ];

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execRecycle_Parms Recycle_Parms;

	ProcessEvent ((UObject*)this, pFnRecycle, &Recycle_Parms, NULL );
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UNavigationHandle*       NavHandle                      ( CPF_Parm )
// struct FVector                 InLocation                     ( CPF_Const | CPF_Parm )
// struct FRotator                InRotation                     ( CPF_Const | CPF_Parm )
// float                          InDistanceToCheck              ( CPF_Const | CPF_Parm )
// TArray< struct FVector >       InLocationsToCheck             ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations ( class UNavigationHandle* NavHandle, struct FVector InLocation, struct FRotator InRotation, float InDistanceToCheck, TArray< struct FVector > InLocationsToCheck )
{
	static UFunction* pFnBiasAgainstPolysWithinDistanceOfLocations = NULL;

	if ( ! pFnBiasAgainstPolysWithinDistanceOfLocations )
		pFnBiasAgainstPolysWithinDistanceOfLocations = (UFunction*) UObject::GObjObjects()->Data[ 40030 ];

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execBiasAgainstPolysWithinDistanceOfLocations_Parms BiasAgainstPolysWithinDistanceOfLocations_Parms;
	BiasAgainstPolysWithinDistanceOfLocations_Parms.NavHandle = NavHandle;
	memcpy ( &BiasAgainstPolysWithinDistanceOfLocations_Parms.InLocation, &InLocation, 0xC );
	memcpy ( &BiasAgainstPolysWithinDistanceOfLocations_Parms.InRotation, &InRotation, 0xC );
	BiasAgainstPolysWithinDistanceOfLocations_Parms.InDistanceToCheck = InDistanceToCheck;
	memcpy ( &BiasAgainstPolysWithinDistanceOfLocations_Parms.InLocationsToCheck, &InLocationsToCheck, 0xC );

	ProcessEvent ((UObject*)this, pFnBiasAgainstPolysWithinDistanceOfLocations, &BiasAgainstPolysWithinDistanceOfLocations_Parms, NULL );

	return BiasAgainstPolysWithinDistanceOfLocations_Parms.ReturnValue;
};

// Function GameFramework.SecondaryViewportClient.PostRender
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void USecondaryViewportClient::eventPostRender ( class UCanvas* Canvas )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 39997 ];

	USecondaryViewportClient_eventPostRender_Parms PostRender_Parms;
	PostRender_Parms.Canvas = Canvas;

	ProcessEvent ((UObject*)this, pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.MobileSecondaryViewportClient.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMobileSecondaryViewportClient::eventPostRender ( class UCanvas* Canvas )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 39999 ];

	UMobileSecondaryViewportClient_eventPostRender_Parms PostRender_Parms;
	PostRender_Parms.Canvas = Canvas;

	ProcessEvent ((UObject*)this, pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void USeqAct_GameCrowdPopulationManagerToggle::AgentDestroyed ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAgentDestroyed = NULL;

	if ( ! pFnAgentDestroyed )
		pFnAgentDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 40094 ];

	USeqAct_GameCrowdPopulationManagerToggle_execAgentDestroyed_Parms AgentDestroyed_Parms;
	AgentDestroyed_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnAgentDestroyed, &AgentDestroyed_Parms, NULL );
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USeqAct_GameCrowdPopulationManagerToggle::GetMaxSpawnDist ( )
{
	static UFunction* pFnGetMaxSpawnDist = NULL;

	if ( ! pFnGetMaxSpawnDist )
		pFnGetMaxSpawnDist = (UFunction*) UObject::GObjObjects()->Data[ 40092 ];

	USeqAct_GameCrowdPopulationManagerToggle_execGetMaxSpawnDist_Parms GetMaxSpawnDist_Parms;

	ProcessEvent ((UObject*)this, pFnGetMaxSpawnDist, &GetMaxSpawnDist_Parms, NULL );

	return GetMaxSpawnDist_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdPopulationManager* PopMgr                         ( CPF_Parm )
// struct FCrowdSpawnInfoItem     out_Item                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USeqAct_GameCrowdPopulationManagerToggle::eventFillCrowdSpawnInfoItem ( class AGameCrowdPopulationManager* PopMgr, struct FCrowdSpawnInfoItem* out_Item )
{
	static UFunction* pFnFillCrowdSpawnInfoItem = NULL;

	if ( ! pFnFillCrowdSpawnInfoItem )
		pFnFillCrowdSpawnInfoItem = (UFunction*) UObject::GObjObjects()->Data[ 40088 ];

	USeqAct_GameCrowdPopulationManagerToggle_eventFillCrowdSpawnInfoItem_Parms FillCrowdSpawnInfoItem_Parms;
	FillCrowdSpawnInfoItem_Parms.PopMgr = PopMgr;

	ProcessEvent ((UObject*)this, pFnFillCrowdSpawnInfoItem, &FillCrowdSpawnInfoItem_Parms, NULL );

	if ( out_Item )
		memcpy ( out_Item, &FillCrowdSpawnInfoItem_Parms.out_Item, 0x7C );
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_GameCrowdPopulationManagerToggle::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 40086 ];

	USeqAct_GameCrowdPopulationManagerToggle_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	ProcessEvent ((UObject*)this, pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_GameCrowdSpawner::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 40097 ];

	USeqAct_GameCrowdSpawner_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	ProcessEvent ((UObject*)this, pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_MobileSaveLoadValue::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 40102 ];

	USeqAct_MobileSaveLoadValue_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	ProcessEvent ((UObject*)this, pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgentSkeletal* Agent                          ( CPF_Parm )

void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor ( class AGameCrowdAgentSkeletal* Agent )
{
	static UFunction* pFnSetCurrentAnimationActionFor = NULL;

	if ( ! pFnSetCurrentAnimationActionFor )
		pFnSetCurrentAnimationActionFor = (UFunction*) UObject::GObjObjects()->Data[ 40123 ];

	USeqAct_PlayAgentAnimation_execSetCurrentAnimationActionFor_Parms SetCurrentAnimationActionFor_Parms;
	SetCurrentAnimationActionFor_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnSetCurrentAnimationActionFor, &SetCurrentAnimationActionFor_Parms, NULL );
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_PlayAgentAnimation::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 40121 ];

	USeqAct_PlayAgentAnimation_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	ProcessEvent ((UObject*)this, pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRender.Render
// [0x00020000] 
// Parameters infos:
// class UCanvas*                 TargetCanvas                   ( CPF_Parm )
// class AHUD*                    TargetHud                      ( CPF_Parm )

void USeqEvent_HudRender::Render ( class UCanvas* TargetCanvas, class AHUD* TargetHud )
{
	static UFunction* pFnRender = NULL;

	if ( ! pFnRender )
		pFnRender = (UFunction*) UObject::GObjObjects()->Data[ 40135 ];

	USeqEvent_HudRender_execRender_Parms Render_Parms;
	Render_Parms.TargetCanvas = TargetCanvas;
	Render_Parms.TargetHud = TargetHud;

	ProcessEvent ((UObject*)this, pFnRender, &Render_Parms, NULL );
};

// Function GameFramework.SeqEvent_HudRender.RegisterEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_HudRender::eventRegisterEvent ( )
{
	static UFunction* pFnRegisterEvent = NULL;

	if ( ! pFnRegisterEvent )
		pFnRegisterEvent = (UFunction*) UObject::GObjObjects()->Data[ 40131 ];

	USeqEvent_HudRender_eventRegisterEvent_Parms RegisterEvent_Parms;

	ProcessEvent ((UObject*)this, pFnRegisterEvent, &RegisterEvent_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobilePlayerInput*      MPI                            ( CPF_Parm )

void USeqEvent_MobileBase::eventAddToMobileInput ( class UMobilePlayerInput* MPI )
{
	static UFunction* pFnAddToMobileInput = NULL;

	if ( ! pFnAddToMobileInput )
		pFnAddToMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 40183 ];

	USeqEvent_MobileBase_eventAddToMobileInput_Parms AddToMobileInput_Parms;
	AddToMobileInput_Parms.MPI = MPI;

	ProcessEvent ((UObject*)this, pFnAddToMobileInput, &AddToMobileInput_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_MobileBase::eventRegisterEvent ( )
{
	static UFunction* pFnRegisterEvent = NULL;

	if ( ! pFnRegisterEvent )
		pFnRegisterEvent = (UFunction*) UObject::GObjObjects()->Data[ 40179 ];

	USeqEvent_MobileBase_eventRegisterEvent_Parms RegisterEvent_Parms;

	ProcessEvent ((UObject*)this, pFnRegisterEvent, &RegisterEvent_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqEvent_MobileMotion::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 40207 ];

	USeqEvent_MobileMotion_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	ProcessEvent ((UObject*)this, pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobilePlayerInput*      MPI                            ( CPF_Parm )

void USeqEvent_MobileZoneBase::eventAddToMobileInput ( class UMobilePlayerInput* MPI )
{
	static UFunction* pFnAddToMobileInput = NULL;

	if ( ! pFnAddToMobileInput )
		pFnAddToMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 40186 ];

	USeqEvent_MobileZoneBase_eventAddToMobileInput_Parms AddToMobileInput_Parms;
	AddToMobileInput_Parms.MPI = MPI;

	ProcessEvent ((UObject*)this, pFnAddToMobileInput, &AddToMobileInput_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_MobileRawInput::eventRegisterEvent ( )
{
	static UFunction* pFnRegisterEvent = NULL;

	if ( ! pFnRegisterEvent )
		pFnRegisterEvent = (UFunction*) UObject::GObjObjects()->Data[ 40214 ];

	USeqEvent_MobileRawInput_eventRegisterEvent_Parms RegisterEvent_Parms;

	ProcessEvent ((UObject*)this, pFnRegisterEvent, &RegisterEvent_Parms, NULL );
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// [0x00420800] ( FUNC_Event )
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameCameraBase::eventModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 37570 ];

	UGameCameraBase_eventModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	ProcessEvent ((UObject*)this, pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0x154 );
};

// Function GameFramework.GameCameraBase.Init
// [0x00020000] 
// Parameters infos:

void UGameCameraBase::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 37569 ];

	UGameCameraBase_execInit_Parms Init_Parms;

	ProcessEvent ((UObject*)this, pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameCameraBase.DisplayDebug
// [0x00420100] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void UGameCameraBase::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 37565 ];

	UGameCameraBase_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	ProcessEvent ((UObject*)this, pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
// [0x00420000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameCameraBase::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 37560 ];

	UGameCameraBase_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	ProcessEvent ((UObject*)this, pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameCameraBase.UpdateCamera
// [0x00420000] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameCameraBase::UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 37555 ];

	UGameCameraBase_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.CameraActor = CameraActor;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameCameraBase.ResetInterpolation
// [0x00020002] 
// Parameters infos:

void UGameCameraBase::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 37554 ];

	UGameCameraBase_execResetInterpolation_Parms ResetInterpolation_Parms;

	ProcessEvent ((UObject*)this, pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
// [0x00020000] 
// Parameters infos:
// class UGameCameraBase*         NewCamera                      ( CPF_Parm )

void UGameCameraBase::OnBecomeInActive ( class UGameCameraBase* NewCamera )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 37552 ];

	UGameCameraBase_execOnBecomeInActive_Parms OnBecomeInActive_Parms;
	OnBecomeInActive_Parms.NewCamera = NewCamera;

	ProcessEvent ((UObject*)this, pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function GameFramework.GameCameraBase.OnBecomeActive
// [0x00020000] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameCameraBase::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 37550 ];

	UGameCameraBase_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	ProcessEvent ((UObject*)this, pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 38846 ];

	UGameThirdPersonCamera_execResetInterpolation_Parms ResetInterpolation_Parms;

	ProcessEvent ((UObject*)this, pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameThirdPersonCamera::eventModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 38844 ];

	UGameThirdPersonCamera_eventModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	ProcessEvent ((UObject*)this, pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0x154 );
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameThirdPersonCamera::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 38842 ];

	UGameThirdPersonCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	ProcessEvent ((UObject*)this, pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 38837 ];

	UGameThirdPersonCamera_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	ProcessEvent ((UObject*)this, pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// [0x00080003] ( FUNC_Final )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void UGameThirdPersonCamera::UpdateCameraMode ( class APawn* P )
{
	static UFunction* pFnUpdateCameraMode = NULL;

	if ( ! pFnUpdateCameraMode )
		pFnUpdateCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 38784 ];

	UGameThirdPersonCamera_execUpdateCameraMode_Parms UpdateCameraMode_Parms;
	UpdateCameraMode_Parms.P = P;

	ProcessEvent ((UObject*)this, pFnUpdateCameraMode, &UpdateCameraMode_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// [0x00020002] 
// Parameters infos:
// class UGameThirdPersonCameraMode* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode ( class APawn* P )
{
	static UFunction* pFnFindBestCameraMode = NULL;

	if ( ! pFnFindBestCameraMode )
		pFnFindBestCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 38832 ];

	UGameThirdPersonCamera_execFindBestCameraMode_Parms FindBestCameraMode_Parms;
	FindBestCameraMode_Parms.P = P;

	ProcessEvent ((UObject*)this, pFnFindBestCameraMode, &FindBestCameraMode_Parms, NULL );

	return FindBestCameraMode_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// [0x00020002] 
// Parameters infos:
// struct FRotator                Delta                          ( CPF_Parm )

void UGameThirdPersonCamera::AdjustFocusPointInterpolation ( struct FRotator Delta )
{
	static UFunction* pFnAdjustFocusPointInterpolation = NULL;

	if ( ! pFnAdjustFocusPointInterpolation )
		pFnAdjustFocusPointInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 38830 ];

	UGameThirdPersonCamera_execAdjustFocusPointInterpolation_Parms AdjustFocusPointInterpolation_Parms;
	memcpy ( &AdjustFocusPointInterpolation_Parms.Delta, &Delta, 0xC );

	ProcessEvent ((UObject*)this, pFnAdjustFocusPointInterpolation, &AdjustFocusPointInterpolation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// [0x00880002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UGameThirdPersonCamera::GetActualFocusLocation ( )
{
	static UFunction* pFnGetActualFocusLocation = NULL;

	if ( ! pFnGetActualFocusLocation )
		pFnGetActualFocusLocation = (UFunction*) UObject::GObjObjects()->Data[ 38826 ];

	UGameThirdPersonCamera_execGetActualFocusLocation_Parms GetActualFocusLocation_Parms;

	ProcessEvent ((UObject*)this, pFnGetActualFocusLocation, &GetActualFocusLocation_Parms, NULL );

	return GetActualFocusLocation_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// [0x00080802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void UGameThirdPersonCamera::eventUpdateFocusPoint ( class APawn* P )
{
	static UFunction* pFnUpdateFocusPoint = NULL;

	if ( ! pFnUpdateFocusPoint )
		pFnUpdateFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 38822 ];

	UGameThirdPersonCamera_eventUpdateFocusPoint_Parms UpdateFocusPoint_Parms;
	UpdateFocusPoint_Parms.P = P;

	ProcessEvent ((UObject*)this, pFnUpdateFocusPoint, &UpdateFocusPoint_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// [0x00024002] 
// Parameters infos:
// unsigned long                  bLeaveCameraRotation           ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::ClearFocusPoint ( unsigned long bLeaveCameraRotation )
{
	static UFunction* pFnClearFocusPoint = NULL;

	if ( ! pFnClearFocusPoint )
		pFnClearFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 38820 ];

	UGameThirdPersonCamera_execClearFocusPoint_Parms ClearFocusPoint_Parms;
	ClearFocusPoint_Parms.bLeaveCameraRotation = bLeaveCameraRotation;

	ProcessEvent ((UObject*)this, pFnClearFocusPoint, &ClearFocusPoint_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameThirdPersonCamera::GetFocusActor ( )
{
	static UFunction* pFnGetFocusActor = NULL;

	if ( ! pFnGetFocusActor )
		pFnGetFocusActor = (UFunction*) UObject::GObjObjects()->Data[ 38818 ];

	UGameThirdPersonCamera_execGetFocusActor_Parms GetFocusActor_Parms;

	ProcessEvent ((UObject*)this, pFnGetFocusActor, &GetFocusActor_Parms, NULL );

	return GetFocusActor_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// [0x00024002] 
// Parameters infos:
// class AActor*                  FocusActor                     ( CPF_Parm )
// struct FName                   FocusBoneName                  ( CPF_Parm )
// struct FVector2D               InterpSpeedRange               ( CPF_Parm )
// struct FVector2D               InFocusFOV                     ( CPF_Parm )
// float                          CameraFOV                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlwaysFocus                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAdjustCamera                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreTrace                   ( CPF_OptionalParm | CPF_Parm )
// float                          FocusPitchOffsetDeg            ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::SetFocusOnActor ( class AActor* FocusActor, struct FName FocusBoneName, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg )
{
	static UFunction* pFnSetFocusOnActor = NULL;

	if ( ! pFnSetFocusOnActor )
		pFnSetFocusOnActor = (UFunction*) UObject::GObjObjects()->Data[ 38808 ];

	UGameThirdPersonCamera_execSetFocusOnActor_Parms SetFocusOnActor_Parms;
	SetFocusOnActor_Parms.FocusActor = FocusActor;
	memcpy ( &SetFocusOnActor_Parms.FocusBoneName, &FocusBoneName, 0x8 );
	memcpy ( &SetFocusOnActor_Parms.InterpSpeedRange, &InterpSpeedRange, 0x8 );
	memcpy ( &SetFocusOnActor_Parms.InFocusFOV, &InFocusFOV, 0x8 );
	SetFocusOnActor_Parms.CameraFOV = CameraFOV;
	SetFocusOnActor_Parms.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnActor_Parms.bAdjustCamera = bAdjustCamera;
	SetFocusOnActor_Parms.bIgnoreTrace = bIgnoreTrace;
	SetFocusOnActor_Parms.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	ProcessEvent ((UObject*)this, pFnSetFocusOnActor, &SetFocusOnActor_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// [0x00024002] 
// Parameters infos:
// struct FVector                 FocusWorldLoc                  ( CPF_Parm )
// struct FVector2D               InterpSpeedRange               ( CPF_Parm )
// struct FVector2D               InFocusFOV                     ( CPF_Parm )
// float                          CameraFOV                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlwaysFocus                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAdjustCamera                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreTrace                   ( CPF_OptionalParm | CPF_Parm )
// float                          FocusPitchOffsetDeg            ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::SetFocusOnLoc ( struct FVector FocusWorldLoc, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg )
{
	static UFunction* pFnSetFocusOnLoc = NULL;

	if ( ! pFnSetFocusOnLoc )
		pFnSetFocusOnLoc = (UFunction*) UObject::GObjObjects()->Data[ 38799 ];

	UGameThirdPersonCamera_execSetFocusOnLoc_Parms SetFocusOnLoc_Parms;
	memcpy ( &SetFocusOnLoc_Parms.FocusWorldLoc, &FocusWorldLoc, 0xC );
	memcpy ( &SetFocusOnLoc_Parms.InterpSpeedRange, &InterpSpeedRange, 0x8 );
	memcpy ( &SetFocusOnLoc_Parms.InFocusFOV, &InFocusFOV, 0x8 );
	SetFocusOnLoc_Parms.CameraFOV = CameraFOV;
	SetFocusOnLoc_Parms.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnLoc_Parms.bAdjustCamera = bAdjustCamera;
	SetFocusOnLoc_Parms.bIgnoreTrace = bIgnoreTrace;
	SetFocusOnLoc_Parms.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	ProcessEvent ((UObject*)this, pFnSetFocusOnLoc, &SetFocusOnLoc_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// [0x00020002] 
// Parameters infos:
// int                            AngleOffset                    ( CPF_Parm )

void UGameThirdPersonCamera::AdjustTurn ( int AngleOffset )
{
	static UFunction* pFnAdjustTurn = NULL;

	if ( ! pFnAdjustTurn )
		pFnAdjustTurn = (UFunction*) UObject::GObjObjects()->Data[ 38797 ];

	UGameThirdPersonCamera_execAdjustTurn_Parms AdjustTurn_Parms;
	AdjustTurn_Parms.AngleOffset = AngleOffset;

	ProcessEvent ((UObject*)this, pFnAdjustTurn, &AdjustTurn_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameThirdPersonCamera::EndTurn ( )
{
	static UFunction* pFnEndTurn = NULL;

	if ( ! pFnEndTurn )
		pFnEndTurn = (UFunction*) UObject::GObjObjects()->Data[ 38796 ];

	UGameThirdPersonCamera_execEndTurn_Parms EndTurn_Parms;

	pFnEndTurn->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnEndTurn, &EndTurn_Parms, NULL );

	pFnEndTurn->FunctionFlags |= 0x400;
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
// [0x00024002] 
// Parameters infos:
// int                            StartAngle                     ( CPF_Parm )
// int                            EndAngle                       ( CPF_Parm )
// float                          TimeSec                        ( CPF_Parm )
// float                          DelaySec                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlignTargetWhenFinished       ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::BeginTurn ( int StartAngle, int EndAngle, float TimeSec, float DelaySec, unsigned long bAlignTargetWhenFinished )
{
	static UFunction* pFnBeginTurn = NULL;

	if ( ! pFnBeginTurn )
		pFnBeginTurn = (UFunction*) UObject::GObjObjects()->Data[ 38790 ];

	UGameThirdPersonCamera_execBeginTurn_Parms BeginTurn_Parms;
	BeginTurn_Parms.StartAngle = StartAngle;
	BeginTurn_Parms.EndAngle = EndAngle;
	BeginTurn_Parms.TimeSec = TimeSec;
	BeginTurn_Parms.DelaySec = DelaySec;
	BeginTurn_Parms.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	ProcessEvent ((UObject*)this, pFnBeginTurn, &BeginTurn_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// [0x00480400] ( FUNC_Native )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::PlayerUpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnPlayerUpdateCamera = NULL;

	if ( ! pFnPlayerUpdateCamera )
		pFnPlayerUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 38785 ];

	UGameThirdPersonCamera_execPlayerUpdateCamera_Parms PlayerUpdateCamera_Parms;
	PlayerUpdateCamera_Parms.P = P;
	PlayerUpdateCamera_Parms.CameraActor = CameraActor;
	PlayerUpdateCamera_Parms.DeltaTime = DeltaTime;

	pFnPlayerUpdateCamera->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnPlayerUpdateCamera, &PlayerUpdateCamera_Parms, NULL );

	pFnPlayerUpdateCamera->FunctionFlags |= 0x400;

	if ( OutVT )
		memcpy ( OutVT, &PlayerUpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// [0x00420002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 38779 ];

	UGameThirdPersonCamera_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.CameraActor = CameraActor;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

float UGameThirdPersonCamera::eventGetDesiredFOV ( class APawn* ViewedPawn )
{
	static UFunction* pFnGetDesiredFOV = NULL;

	if ( ! pFnGetDesiredFOV )
		pFnGetDesiredFOV = (UFunction*) UObject::GObjObjects()->Data[ 38774 ];

	UGameThirdPersonCamera_eventGetDesiredFOV_Parms GetDesiredFOV_Parms;
	GetDesiredFOV_Parms.ViewedPawn = ViewedPawn;

	ProcessEvent ((UObject*)this, pFnGetDesiredFOV, &GetDesiredFOV_Parms, NULL );

	return GetDesiredFOV_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.Init
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 38773 ];

	UGameThirdPersonCamera_execInit_Parms Init_Parms;

	ProcessEvent ((UObject*)this, pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.Reset
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 38772 ];

	UGameThirdPersonCamera_execReset_Parms Reset_Parms;

	ProcessEvent ((UObject*)this, pFnReset, &Reset_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// [0x00080002] 
// Parameters infos:
// class UGameThirdPersonCameraMode* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ModeClass                      ( CPF_Parm )

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode ( class UClass* ModeClass )
{
	static UFunction* pFnCreateCameraMode = NULL;

	if ( ! pFnCreateCameraMode )
		pFnCreateCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 38767 ];

	UGameThirdPersonCamera_execCreateCameraMode_Parms CreateCameraMode_Parms;
	CreateCameraMode_Parms.ModeClass = ModeClass;

	ProcessEvent ((UObject*)this, pFnCreateCameraMode, &CreateCameraMode_Parms, NULL );

	return CreateCameraMode_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          inHorizFOV                     ( CPF_Parm )
// class APawn*                   CameraTargetPawn               ( CPF_Parm )

float AGamePlayerCamera::AdjustFOVForViewport ( float inHorizFOV, class APawn* CameraTargetPawn )
{
	static UFunction* pFnAdjustFOVForViewport = NULL;

	if ( ! pFnAdjustFOVForViewport )
		pFnAdjustFOVForViewport = (UFunction*) UObject::GObjObjects()->Data[ 38484 ];

	AGamePlayerCamera_execAdjustFOVForViewport_Parms AdjustFOVForViewport_Parms;
	AdjustFOVForViewport_Parms.inHorizFOV = inHorizFOV;
	AdjustFOVForViewport_Parms.CameraTargetPawn = CameraTargetPawn;

	pFnAdjustFOVForViewport->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnAdjustFOVForViewport, &AdjustFOVForViewport_Parms, NULL );

	pFnAdjustFOVForViewport->FunctionFlags |= 0x400;

	return AdjustFOVForViewport_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 38496 ];

	AGamePlayerCamera_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
// [0x00020102] 
// Parameters infos:

void AGamePlayerCamera::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 38495 ];

	AGamePlayerCamera_execResetInterpolation_Parms ResetInterpolation_Parms;

	ProcessEvent ((UObject*)this, pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.SetColorScale
// [0x00020102] 
// Parameters infos:
// struct FVector                 NewColorScale                  ( CPF_Parm )

void AGamePlayerCamera::SetColorScale ( struct FVector NewColorScale )
{
	static UFunction* pFnSetColorScale = NULL;

	if ( ! pFnSetColorScale )
		pFnSetColorScale = (UFunction*) UObject::GObjObjects()->Data[ 38493 ];

	AGamePlayerCamera_execSetColorScale_Parms SetColorScale_Parms;
	memcpy ( &SetColorScale_Parms.NewColorScale, &NewColorScale, 0xC );

	ProcessEvent ((UObject*)this, pFnSetColorScale, &SetColorScale_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 38488 ];

	AGamePlayerCamera_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	ProcessEvent ((UObject*)this, pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// [0x00420102] 
// Parameters infos:
// struct FTViewTarget            OutVT                          ( CPF_Const | CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::UpdateCameraLensEffects ( struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCameraLensEffects = NULL;

	if ( ! pFnUpdateCameraLensEffects )
		pFnUpdateCameraLensEffects = (UFunction*) UObject::GObjObjects()->Data[ 38485 ];

	AGamePlayerCamera_execUpdateCameraLensEffects_Parms UpdateCameraLensEffects_Parms;

	ProcessEvent ((UObject*)this, pFnUpdateCameraLensEffects, &UpdateCameraLensEffects_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCameraLensEffects_Parms.OutVT, 0x2C );
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateViewTarget = NULL;

	if ( ! pFnUpdateViewTarget )
		pFnUpdateViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 38478 ];

	AGamePlayerCamera_execUpdateViewTarget_Parms UpdateViewTarget_Parms;
	UpdateViewTarget_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnUpdateViewTarget, &UpdateViewTarget_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateViewTarget_Parms.OutVT, 0x2C );
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGamePlayerCamera::ShouldConstrainAspectRatio ( )
{
	static UFunction* pFnShouldConstrainAspectRatio = NULL;

	if ( ! pFnShouldConstrainAspectRatio )
		pFnShouldConstrainAspectRatio = (UFunction*) UObject::GObjObjects()->Data[ 38476 ];

	AGamePlayerCamera_execShouldConstrainAspectRatio_Parms ShouldConstrainAspectRatio_Parms;

	ProcessEvent ((UObject*)this, pFnShouldConstrainAspectRatio, &ShouldConstrainAspectRatio_Parms, NULL );

	return ShouldConstrainAspectRatio_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
// [0x00080002] 
// Parameters infos:
// class UGameCameraBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  CameraTarget                   ( CPF_Parm )

class UGameCameraBase* AGamePlayerCamera::FindBestCameraType ( class AActor* CameraTarget )
{
	static UFunction* pFnFindBestCameraType = NULL;

	if ( ! pFnFindBestCameraType )
		pFnFindBestCameraType = (UFunction*) UObject::GObjObjects()->Data[ 38472 ];

	AGamePlayerCamera_execFindBestCameraType_Parms FindBestCameraType_Parms;
	FindBestCameraType_Parms.CameraTarget = CameraTarget;

	ProcessEvent ((UObject*)this, pFnFindBestCameraType, &FindBestCameraType_Parms, NULL );

	return FindBestCameraType_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.Reset
// [0x00020002] 
// Parameters infos:

void AGamePlayerCamera::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 38471 ];

	AGamePlayerCamera_execReset_Parms Reset_Parms;

	ProcessEvent ((UObject*)this, pFnReset, &Reset_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AGamePlayerCamera::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 38470 ];

	AGamePlayerCamera_execPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// [0x00080400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  TargetBase                     ( CPF_Parm )

void AGamePlayerCamera::CacheLastTargetBaseInfo ( class AActor* TargetBase )
{
	static UFunction* pFnCacheLastTargetBaseInfo = NULL;

	if ( ! pFnCacheLastTargetBaseInfo )
		pFnCacheLastTargetBaseInfo = (UFunction*) UObject::GObjObjects()->Data[ 38468 ];

	AGamePlayerCamera_execCacheLastTargetBaseInfo_Parms CacheLastTargetBaseInfo_Parms;
	CacheLastTargetBaseInfo_Parms.TargetBase = TargetBase;

	pFnCacheLastTargetBaseInfo->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnCacheLastTargetBaseInfo, &CacheLastTargetBaseInfo_Parms, NULL );

	pFnCacheLastTargetBaseInfo->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerCamera.CreateCamera
// [0x00080002] 
// Parameters infos:
// class UGameCameraBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  CameraClass                    ( CPF_Parm )

class UGameCameraBase* AGamePlayerCamera::CreateCamera ( class UClass* CameraClass )
{
	static UFunction* pFnCreateCamera = NULL;

	if ( ! pFnCreateCamera )
		pFnCreateCamera = (UFunction*) UObject::GObjObjects()->Data[ 38464 ];

	AGamePlayerCamera_execCreateCamera_Parms CreateCamera_Parms;
	CreateCamera_Parms.CameraClass = CameraClass;

	ProcessEvent ((UObject*)this, pFnCreateCamera, &CreateCamera_Parms, NULL );

	return CreateCamera_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FViewOffsetData         NewViewOffset                  ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::SetViewOffset ( struct FViewOffsetData* NewViewOffset )
{
	static UFunction* pFnSetViewOffset = NULL;

	if ( ! pFnSetViewOffset )
		pFnSetViewOffset = (UFunction*) UObject::GObjObjects()->Data[ 38955 ];

	UGameThirdPersonCameraMode_execSetViewOffset_Parms SetViewOffset_Parms;

	pFnSetViewOffset->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSetViewOffset, &SetViewOffset_Parms, NULL );

	pFnSetViewOffset->FunctionFlags |= 0x400;

	if ( NewViewOffset )
		memcpy ( NewViewOffset, &SetViewOffset_Parms.NewViewOffset, 0x24 );
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// [0x00420102] 
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameThirdPersonCameraMode::ModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 38953 ];

	UGameThirdPersonCameraMode_execModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	ProcessEvent ((UObject*)this, pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0x154 );
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// [0x00C20102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            VT                             ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::UpdatePostProcess ( float DeltaTime, struct FTViewTarget* VT )
{
	static UFunction* pFnUpdatePostProcess = NULL;

	if ( ! pFnUpdatePostProcess )
		pFnUpdatePostProcess = (UFunction*) UObject::GObjObjects()->Data[ 38943 ];

	UGameThirdPersonCameraMode_execUpdatePostProcess_Parms UpdatePostProcess_Parms;
	UpdatePostProcess_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnUpdatePostProcess, &UpdatePostProcess_Parms, NULL );

	if ( VT )
		memcpy ( VT, &UpdatePostProcess_Parms.VT, 0x2C );
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// [0x00880102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TraceOwner                     ( CPF_Parm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::DOFTrace ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace )
{
	static UFunction* pFnDOFTrace = NULL;

	if ( ! pFnDOFTrace )
		pFnDOFTrace = (UFunction*) UObject::GObjObjects()->Data[ 38935 ];

	UGameThirdPersonCameraMode_execDOFTrace_Parms DOFTrace_Parms;
	DOFTrace_Parms.TraceOwner = TraceOwner;
	memcpy ( &DOFTrace_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &DOFTrace_Parms.EndTrace, &EndTrace, 0xC );

	ProcessEvent ((UObject*)this, pFnDOFTrace, &DOFTrace_Parms, NULL );

	return DOFTrace_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// [0x00080102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TraceOwner                     ( CPF_Parm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace )
{
	static UFunction* pFnGetDOFFocusLoc = NULL;

	if ( ! pFnGetDOFFocusLoc )
		pFnGetDOFFocusLoc = (UFunction*) UObject::GObjObjects()->Data[ 38930 ];

	UGameThirdPersonCameraMode_execGetDOFFocusLoc_Parms GetDOFFocusLoc_Parms;
	GetDOFFocusLoc_Parms.TraceOwner = TraceOwner;
	memcpy ( &GetDOFFocusLoc_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &GetDOFFocusLoc_Parms.EndTrace, &EndTrace, 0xC );

	ProcessEvent ((UObject*)this, pFnGetDOFFocusLoc, &GetDOFFocusLoc_Parms, NULL );

	return GetDOFFocusLoc_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// [0x00420100] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 38925 ];

	UGameThirdPersonCameraMode_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	ProcessEvent ((UObject*)this, pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

bool UGameThirdPersonCameraMode::SetFocusPoint ( class APawn* ViewedPawn )
{
	static UFunction* pFnSetFocusPoint = NULL;

	if ( ! pFnSetFocusPoint )
		pFnSetFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 38824 ];

	UGameThirdPersonCameraMode_execSetFocusPoint_Parms SetFocusPoint_Parms;
	SetFocusPoint_Parms.ViewedPawn = ViewedPawn;

	ProcessEvent ((UObject*)this, pFnSetFocusPoint, &SetFocusPoint_Parms, NULL );

	return SetFocusPoint_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   TargetPawn                     ( CPF_Parm )
// struct FTViewTarget            CurrentViewTarget              ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::eventGetCameraWorstCaseLoc ( class APawn* TargetPawn, struct FTViewTarget CurrentViewTarget )
{
	static UFunction* pFnGetCameraWorstCaseLoc = NULL;

	if ( ! pFnGetCameraWorstCaseLoc )
		pFnGetCameraWorstCaseLoc = (UFunction*) UObject::GObjObjects()->Data[ 38920 ];

	UGameThirdPersonCameraMode_eventGetCameraWorstCaseLoc_Parms GetCameraWorstCaseLoc_Parms;
	GetCameraWorstCaseLoc_Parms.TargetPawn = TargetPawn;
	memcpy ( &GetCameraWorstCaseLoc_Parms.CurrentViewTarget, &CurrentViewTarget, 0x2C );

	ProcessEvent ((UObject*)this, pFnGetCameraWorstCaseLoc, &GetCameraWorstCaseLoc_Parms, NULL );

	return GetCameraWorstCaseLoc_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

float UGameThirdPersonCameraMode::GetDesiredFOV ( class APawn* ViewedPawn )
{
	static UFunction* pFnGetDesiredFOV = NULL;

	if ( ! pFnGetDesiredFOV )
		pFnGetDesiredFOV = (UFunction*) UObject::GObjObjects()->Data[ 38777 ];

	UGameThirdPersonCameraMode_execGetDesiredFOV_Parms GetDesiredFOV_Parms;
	GetDesiredFOV_Parms.ViewedPawn = ViewedPawn;

	ProcessEvent ((UObject*)this, pFnGetDesiredFOV, &GetDesiredFOV_Parms, NULL );

	return GetDesiredFOV_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )
// struct FVector                 Offset                         ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::eventAdjustViewOffset ( class APawn* P, struct FVector Offset )
{
	static UFunction* pFnAdjustViewOffset = NULL;

	if ( ! pFnAdjustViewOffset )
		pFnAdjustViewOffset = (UFunction*) UObject::GObjObjects()->Data[ 38915 ];

	UGameThirdPersonCameraMode_eventAdjustViewOffset_Parms AdjustViewOffset_Parms;
	AdjustViewOffset_Parms.P = P;
	memcpy ( &AdjustViewOffset_Parms.Offset, &Offset, 0xC );

	ProcessEvent ((UObject*)this, pFnAdjustViewOffset, &AdjustViewOffset_Parms, NULL );

	return AdjustViewOffset_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// [0x00020000] 
// Parameters infos:
// class APawn*                   TargetPawn                     ( CPF_Parm )
// class UGameThirdPersonCameraMode* NewMode                        ( CPF_Parm )

void UGameThirdPersonCameraMode::OnBecomeInActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 38912 ];

	UGameThirdPersonCameraMode_execOnBecomeInActive_Parms OnBecomeInActive_Parms;
	OnBecomeInActive_Parms.TargetPawn = TargetPawn;
	OnBecomeInActive_Parms.NewMode = NewMode;

	ProcessEvent ((UObject*)this, pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class APawn*                   TargetPawn                     ( CPF_Parm )
// class UGameThirdPersonCameraMode* PrevMode                       ( CPF_Parm )

void UGameThirdPersonCameraMode::OnBecomeActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 38909 ];

	UGameThirdPersonCameraMode_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.TargetPawn = TargetPawn;
	OnBecomeActive_Parms.PrevMode = PrevMode;

	ProcessEvent ((UObject*)this, pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.Init
// [0x00020000] 
// Parameters infos:

void UGameThirdPersonCameraMode::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 38908 ];

	UGameThirdPersonCameraMode_execInit_Parms Init_Parms;

	ProcessEvent ((UObject*)this, pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                InRotation                     ( CPF_Parm )
// struct FVector                 RelativeSpaceOffset            ( CPF_Parm )

struct FVector UGameSpecialMove::RelativeToWorldOffset ( struct FRotator InRotation, struct FVector RelativeSpaceOffset )
{
	static UFunction* pFnRelativeToWorldOffset = NULL;

	if ( ! pFnRelativeToWorldOffset )
		pFnRelativeToWorldOffset = (UFunction*) UObject::GObjObjects()->Data[ 38593 ];

	UGameSpecialMove_execRelativeToWorldOffset_Parms RelativeToWorldOffset_Parms;
	memcpy ( &RelativeToWorldOffset_Parms.InRotation, &InRotation, 0xC );
	memcpy ( &RelativeToWorldOffset_Parms.RelativeSpaceOffset, &RelativeSpaceOffset, 0xC );

	pFnRelativeToWorldOffset->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnRelativeToWorldOffset, &RelativeToWorldOffset_Parms, NULL );

	pFnRelativeToWorldOffset->FunctionFlags |= 0x400;

	return RelativeToWorldOffset_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                InRotation                     ( CPF_Parm )
// struct FVector                 WorldSpaceOffset               ( CPF_Parm )

struct FVector UGameSpecialMove::WorldToRelativeOffset ( struct FRotator InRotation, struct FVector WorldSpaceOffset )
{
	static UFunction* pFnWorldToRelativeOffset = NULL;

	if ( ! pFnWorldToRelativeOffset )
		pFnWorldToRelativeOffset = (UFunction*) UObject::GObjObjects()->Data[ 38589 ];

	UGameSpecialMove_execWorldToRelativeOffset_Parms WorldToRelativeOffset_Parms;
	memcpy ( &WorldToRelativeOffset_Parms.InRotation, &InRotation, 0xC );
	memcpy ( &WorldToRelativeOffset_Parms.WorldSpaceOffset, &WorldSpaceOffset, 0xC );

	pFnWorldToRelativeOffset->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnWorldToRelativeOffset, &WorldToRelativeOffset_Parms, NULL );

	pFnWorldToRelativeOffset->FunctionFlags |= 0x400;

	return WorldToRelativeOffset_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ForcePawnRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// struct FRotator                NewRotation                    ( CPF_Parm )

void UGameSpecialMove::ForcePawnRotation ( class APawn* P, struct FRotator NewRotation )
{
	static UFunction* pFnForcePawnRotation = NULL;

	if ( ! pFnForcePawnRotation )
		pFnForcePawnRotation = (UFunction*) UObject::GObjObjects()->Data[ 38586 ];

	UGameSpecialMove_execForcePawnRotation_Parms ForcePawnRotation_Parms;
	ForcePawnRotation_Parms.P = P;
	memcpy ( &ForcePawnRotation_Parms.NewRotation, &NewRotation, 0xC );

	pFnForcePawnRotation->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnForcePawnRotation, &ForcePawnRotation_Parms, NULL );

	pFnForcePawnRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.MessageEvent
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   EventName                      ( CPF_Parm )
// class UObject*                 Sender                         ( CPF_Parm )

bool UGameSpecialMove::MessageEvent ( struct FName EventName, class UObject* Sender )
{
	static UFunction* pFnMessageEvent = NULL;

	if ( ! pFnMessageEvent )
		pFnMessageEvent = (UFunction*) UObject::GObjObjects()->Data[ 38582 ];

	UGameSpecialMove_execMessageEvent_Parms MessageEvent_Parms;
	memcpy ( &MessageEvent_Parms.EventName, &EventName, 0x8 );
	MessageEvent_Parms.Sender = Sender;

	ProcessEvent ((UObject*)this, pFnMessageEvent, &MessageEvent_Parms, NULL );

	return MessageEvent_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGameSpecialMove::ResetFacePreciseRotation ( )
{
	static UFunction* pFnResetFacePreciseRotation = NULL;

	if ( ! pFnResetFacePreciseRotation )
		pFnResetFacePreciseRotation = (UFunction*) UObject::GObjObjects()->Data[ 38581 ];

	UGameSpecialMove_execResetFacePreciseRotation_Parms ResetFacePreciseRotation_Parms;

	pFnResetFacePreciseRotation->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnResetFacePreciseRotation, &ResetFacePreciseRotation_Parms, NULL );

	pFnResetFacePreciseRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameSpecialMove::eventReachedPrecisePosition ( )
{
	static UFunction* pFnReachedPrecisePosition = NULL;

	if ( ! pFnReachedPrecisePosition )
		pFnReachedPrecisePosition = (UFunction*) UObject::GObjObjects()->Data[ 38580 ];

	UGameSpecialMove_eventReachedPrecisePosition_Parms ReachedPrecisePosition_Parms;

	ProcessEvent ((UObject*)this, pFnReachedPrecisePosition, &ReachedPrecisePosition_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                RotationToFace                 ( CPF_Parm )
// float                          InterpolationTime              ( CPF_Parm )

void UGameSpecialMove::SetFacePreciseRotation ( struct FRotator RotationToFace, float InterpolationTime )
{
	static UFunction* pFnSetFacePreciseRotation = NULL;

	if ( ! pFnSetFacePreciseRotation )
		pFnSetFacePreciseRotation = (UFunction*) UObject::GObjObjects()->Data[ 38577 ];

	UGameSpecialMove_execSetFacePreciseRotation_Parms SetFacePreciseRotation_Parms;
	memcpy ( &SetFacePreciseRotation_Parms.RotationToFace, &RotationToFace, 0xC );
	SetFacePreciseRotation_Parms.InterpolationTime = InterpolationTime;

	pFnSetFacePreciseRotation->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSetFacePreciseRotation, &SetFacePreciseRotation_Parms, NULL );

	pFnSetFacePreciseRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 DestinationToReach             ( CPF_Parm )
// unsigned long                  bCancel                        ( CPF_OptionalParm | CPF_Parm )

void UGameSpecialMove::SetReachPreciseDestination ( struct FVector DestinationToReach, unsigned long bCancel )
{
	static UFunction* pFnSetReachPreciseDestination = NULL;

	if ( ! pFnSetReachPreciseDestination )
		pFnSetReachPreciseDestination = (UFunction*) UObject::GObjObjects()->Data[ 38574 ];

	UGameSpecialMove_execSetReachPreciseDestination_Parms SetReachPreciseDestination_Parms;
	memcpy ( &SetReachPreciseDestination_Parms.DestinationToReach, &DestinationToReach, 0xC );
	SetReachPreciseDestination_Parms.bCancel = bCancel;

	pFnSetReachPreciseDestination->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnSetReachPreciseDestination, &SetReachPreciseDestination_Parms, NULL );

	pFnSetReachPreciseDestination->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.ShouldReplicate
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameSpecialMove::ShouldReplicate ( )
{
	static UFunction* pFnShouldReplicate = NULL;

	if ( ! pFnShouldReplicate )
		pFnShouldReplicate = (UFunction*) UObject::GObjObjects()->Data[ 38572 ];

	UGameSpecialMove_execShouldReplicate_Parms ShouldReplicate_Parms;

	ProcessEvent ((UObject*)this, pFnShouldReplicate, &ShouldReplicate_Parms, NULL );

	return ShouldReplicate_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// [0x00020000] 
// Parameters infos:

void UGameSpecialMove::SpecialMoveFlagsUpdated ( )
{
	static UFunction* pFnSpecialMoveFlagsUpdated = NULL;

	if ( ! pFnSpecialMoveFlagsUpdated )
		pFnSpecialMoveFlagsUpdated = (UFunction*) UObject::GObjObjects()->Data[ 38571 ];

	UGameSpecialMove_execSpecialMoveFlagsUpdated_Parms SpecialMoveFlagsUpdated_Parms;

	ProcessEvent ((UObject*)this, pFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.Tick
// [0x00020000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameSpecialMove::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 38569 ];

	UGameSpecialMove_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// [0x00020000] 
// Parameters infos:
// struct FName                   PrevMove                       ( CPF_Parm )
// struct FName                   NextMove                       ( CPF_Parm )

void UGameSpecialMove::SpecialMoveEnded ( struct FName PrevMove, struct FName NextMove )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 38566 ];

	UGameSpecialMove_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;
	memcpy ( &SpecialMoveEnded_Parms.PrevMove, &PrevMove, 0x8 );
	memcpy ( &SpecialMoveEnded_Parms.NextMove, &NextMove, 0x8 );

	ProcessEvent ((UObject*)this, pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// [0x00020000] 
// Parameters infos:
// unsigned long                  bForced                        ( CPF_Parm )
// struct FName                   PrevMove                       ( CPF_Parm )

void UGameSpecialMove::SpecialMoveStarted ( unsigned long bForced, struct FName PrevMove )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 38563 ];

	UGameSpecialMove_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;
	SpecialMoveStarted_Parms.bForced = bForced;
	memcpy ( &SpecialMoveStarted_Parms.PrevMove, &PrevMove, 0x8 );

	ProcessEvent ((UObject*)this, pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameSpecialMove::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 38561 ];

	UGameSpecialMove_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	ProcessEvent ((UObject*)this, pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );

	return InternalCanDoSpecialMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// [0x00024003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bForceCheck                    ( CPF_OptionalParm | CPF_Parm )

bool UGameSpecialMove::CanDoSpecialMove ( unsigned long bForceCheck )
{
	static UFunction* pFnCanDoSpecialMove = NULL;

	if ( ! pFnCanDoSpecialMove )
		pFnCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 38558 ];

	UGameSpecialMove_execCanDoSpecialMove_Parms CanDoSpecialMove_Parms;
	CanDoSpecialMove_Parms.bForceCheck = bForceCheck;

	ProcessEvent ((UObject*)this, pFnCanDoSpecialMove, &CanDoSpecialMove_Parms, NULL );

	return CanDoSpecialMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   InMove                         ( CPF_Parm )

bool UGameSpecialMove::CanOverrideSpecialMove ( struct FName InMove )
{
	static UFunction* pFnCanOverrideSpecialMove = NULL;

	if ( ! pFnCanOverrideSpecialMove )
		pFnCanOverrideSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 38555 ];

	UGameSpecialMove_execCanOverrideSpecialMove_Parms CanOverrideSpecialMove_Parms;
	memcpy ( &CanOverrideSpecialMove_Parms.InMove, &InMove, 0x8 );

	ProcessEvent ((UObject*)this, pFnCanOverrideSpecialMove, &CanOverrideSpecialMove_Parms, NULL );

	return CanOverrideSpecialMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   NewMove                        ( CPF_Parm )

bool UGameSpecialMove::CanOverrideMoveWith ( struct FName NewMove )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = (UFunction*) UObject::GObjObjects()->Data[ 38552 ];

	UGameSpecialMove_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	memcpy ( &CanOverrideMoveWith_Parms.NewMove, &NewMove, 0x8 );

	ProcessEvent ((UObject*)this, pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanChainMove
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   NextMove                       ( CPF_Parm )

bool UGameSpecialMove::CanChainMove ( struct FName NextMove )
{
	static UFunction* pFnCanChainMove = NULL;

	if ( ! pFnCanChainMove )
		pFnCanChainMove = (UFunction*) UObject::GObjObjects()->Data[ 38549 ];

	UGameSpecialMove_execCanChainMove_Parms CanChainMove_Parms;
	memcpy ( &CanChainMove_Parms.NextMove, &NextMove, 0x8 );

	ProcessEvent ((UObject*)this, pFnCanChainMove, &CanChainMove_Parms, NULL );

	return CanChainMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// [0x00020000] 
// Parameters infos:
// int                            Flags                          ( CPF_Parm )

void UGameSpecialMove::ExtractSpecialMoveFlags ( int Flags )
{
	static UFunction* pFnExtractSpecialMoveFlags = NULL;

	if ( ! pFnExtractSpecialMoveFlags )
		pFnExtractSpecialMoveFlags = (UFunction*) UObject::GObjObjects()->Data[ 38547 ];

	UGameSpecialMove_execExtractSpecialMoveFlags_Parms ExtractSpecialMoveFlags_Parms;
	ExtractSpecialMoveFlags_Parms.Flags = Flags;

	ProcessEvent ((UObject*)this, pFnExtractSpecialMoveFlags, &ExtractSpecialMoveFlags_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// [0x00420000] 
// Parameters infos:
// int                            out_Flags                      ( CPF_Parm | CPF_OutParm )

void UGameSpecialMove::InitSpecialMoveFlags ( int* out_Flags )
{
	static UFunction* pFnInitSpecialMoveFlags = NULL;

	if ( ! pFnInitSpecialMoveFlags )
		pFnInitSpecialMoveFlags = (UFunction*) UObject::GObjObjects()->Data[ 38545 ];

	UGameSpecialMove_execInitSpecialMoveFlags_Parms InitSpecialMoveFlags_Parms;

	ProcessEvent ((UObject*)this, pFnInitSpecialMoveFlags, &InitSpecialMoveFlags_Parms, NULL );

	if ( out_Flags )
		*out_Flags = InitSpecialMoveFlags_Parms.out_Flags;
};

// Function GameFramework.GameSpecialMove.InitSpecialMove
// [0x00020002] 
// Parameters infos:
// class AGamePawn*               inPawn                         ( CPF_Parm )
// struct FName                   InHandle                       ( CPF_Parm )

void UGameSpecialMove::InitSpecialMove ( class AGamePawn* inPawn, struct FName InHandle )
{
	static UFunction* pFnInitSpecialMove = NULL;

	if ( ! pFnInitSpecialMove )
		pFnInitSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 38542 ];

	UGameSpecialMove_execInitSpecialMove_Parms InitSpecialMove_Parms;
	InitSpecialMove_Parms.inPawn = inPawn;
	memcpy ( &InitSpecialMove_Parms.InHandle, &InHandle, 0x8 );

	ProcessEvent ((UObject*)this, pFnInitSpecialMove, &InitSpecialMove_Parms, NULL );
};

// Function GameFramework.GameStateObject.Reset
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameStateObject::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 38615 ];

	UGameStateObject_execReset_Parms Reset_Parms;

	pFnReset->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnReset, &Reset_Parms, NULL );

	pFnReset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStateObject.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStateObject::eventPreProcessStream ( )
{
	static UFunction* pFnPreProcessStream = NULL;

	if ( ! pFnPreProcessStream )
		pFnPreProcessStream = (UFunction*) UObject::GObjObjects()->Data[ 38614 ];

	UGameStateObject_eventPreProcessStream_Parms PreProcessStream_Parms;

	pFnPreProcessStream->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnPreProcessStream, &PreProcessStream_Parms, NULL );

	pFnPreProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            EventID                        ( CPF_Parm )
// int                            AggregateID                    ( CPF_Parm | CPF_OutParm )
// int                            TargetAggregateID              ( CPF_Parm | CPF_OutParm )

bool UGameStatsAggregator::GetAggregateMappingIDs ( int EventID, int* AggregateID, int* TargetAggregateID )
{
	static UFunction* pFnGetAggregateMappingIDs = NULL;

	if ( ! pFnGetAggregateMappingIDs )
		pFnGetAggregateMappingIDs = (UFunction*) UObject::GObjObjects()->Data[ 38691 ];

	UGameStatsAggregator_execGetAggregateMappingIDs_Parms GetAggregateMappingIDs_Parms;
	GetAggregateMappingIDs_Parms.EventID = EventID;

	pFnGetAggregateMappingIDs->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnGetAggregateMappingIDs, &GetAggregateMappingIDs_Parms, NULL );

	pFnGetAggregateMappingIDs->FunctionFlags |= 0x400;

	if ( AggregateID )
		*AggregateID = GetAggregateMappingIDs_Parms.AggregateID;

	if ( TargetAggregateID )
		*TargetAggregateID = GetAggregateMappingIDs_Parms.TargetAggregateID;

	return GetAggregateMappingIDs_Parms.ReturnValue;
};

// Function GameFramework.GameStatsAggregator.Reset
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 38690 ];

	UGameStatsAggregator_execReset_Parms Reset_Parms;

	pFnReset->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnReset, &Reset_Parms, NULL );

	pFnReset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.PostProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::eventPostProcessStream ( )
{
	static UFunction* pFnPostProcessStream = NULL;

	if ( ! pFnPostProcessStream )
		pFnPostProcessStream = (UFunction*) UObject::GObjObjects()->Data[ 38689 ];

	UGameStatsAggregator_eventPostProcessStream_Parms PostProcessStream_Parms;

	pFnPostProcessStream->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnPostProcessStream, &PostProcessStream_Parms, NULL );

	pFnPostProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::eventPreProcessStream ( )
{
	static UFunction* pFnPreProcessStream = NULL;

	if ( ! pFnPreProcessStream )
		pFnPreProcessStream = (UFunction*) UObject::GObjObjects()->Data[ 38688 ];

	UGameStatsAggregator_eventPreProcessStream_Parms PreProcessStream_Parms;

	pFnPreProcessStream->FunctionFlags |= ~0x400;

	ProcessEvent ((UObject*)this, pFnPreProcessStream, &PreProcessStream_Parms, NULL );

	pFnPreProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraInput.InputKey
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          AmountDepressed                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool UDebugCameraInput::InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnInputKey = NULL;

	if ( ! pFnInputKey )
		pFnInputKey = (UFunction*) UObject::GObjObjects()->Data[ 36872 ];

	UDebugCameraInput_execInputKey_Parms InputKey_Parms;
	InputKey_Parms.ControllerId = ControllerId;
	memcpy ( &InputKey_Parms.Key, &Key, 0x8 );
	InputKey_Parms.Event = Event;
	InputKey_Parms.AmountDepressed = AmountDepressed;
	InputKey_Parms.bGamepad = bGamepad;

	ProcessEvent ((UObject*)this, pFnInputKey, &InputKey_Parms, NULL );

	return InputKey_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// [0x00020000] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UGameCrowdSpawnerInterface::GetMaxSpawnDist ( )
{
	static UFunction* pFnGetMaxSpawnDist = NULL;

	if ( ! pFnGetMaxSpawnDist )
		pFnGetMaxSpawnDist = (UFunction*) UObject::GObjObjects()->Data[ 37760 ];

	UGameCrowdSpawnerInterface_execGetMaxSpawnDist_Parms GetMaxSpawnDist_Parms;

	ProcessEvent ((UObject*)this, pFnGetMaxSpawnDist, &GetMaxSpawnDist_Parms, NULL );

	return GetMaxSpawnDist_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// [0x00020000] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdSpawnerInterface::AgentDestroyed ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAgentDestroyed = NULL;

	if ( ! pFnAgentDestroyed )
		pFnAgentDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 38222 ];

	UGameCrowdSpawnerInterface_execAgentDestroyed_Parms AgentDestroyed_Parms;
	AgentDestroyed_Parms.Agent = Agent;

	ProcessEvent ((UObject*)this, pFnAgentDestroyed, &AgentDestroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// [0x00420000] 
// Parameters infos:
// class USeqAct_GameCrowdSpawner* Spawner                        ( CPF_Parm )
// struct FVector                 SpawnPos                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void UGameCrowdSpawnInterface::GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 38225 ];

	UGameCrowdSpawnInterface_execGetSpawnPosition_Parms GetSpawnPosition_Parms;
	GetSpawnPosition_Parms.Spawner = Spawner;

	ProcessEvent ((UObject*)this, pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );

	if ( SpawnPos )
		memcpy ( SpawnPos, &GetSpawnPosition_Parms.SpawnPos, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetSpawnPosition_Parms.SpawnRot, 0xC );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  InEnemy                        ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal::IsEnemyBasedOnInterpActor ( class AActor* InEnemy )
{
	static UFunction* pFnIsEnemyBasedOnInterpActor = NULL;

	if ( ! pFnIsEnemyBasedOnInterpActor )
		pFnIsEnemyBasedOnInterpActor = (UFunction*) UObject::GObjObjects()->Data[ 37386 ];

	UGameAICmd_Hover_MoveToGoal_execIsEnemyBasedOnInterpActor_Parms IsEnemyBasedOnInterpActor_Parms;
	IsEnemyBasedOnInterpActor_Parms.InEnemy = InEnemy;

	ProcessEvent ((UObject*)this, pFnIsEnemyBasedOnInterpActor, &IsEnemyBasedOnInterpActor_Parms, NULL );

	return IsEnemyBasedOnInterpActor_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  BlockedBy                      ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal::HandlePathObstruction ( class AActor* BlockedBy )
{
	static UFunction* pFnHandlePathObstruction = NULL;

	if ( ! pFnHandlePathObstruction )
		pFnHandlePathObstruction = (UFunction*) UObject::GObjObjects()->Data[ 37364 ];

	UGameAICmd_Hover_MoveToGoal_execHandlePathObstruction_Parms HandlePathObstruction_Parms;
	HandlePathObstruction_Parms.BlockedBy = BlockedBy;

	ProcessEvent ((UObject*)this, pFnHandlePathObstruction, &HandlePathObstruction_Parms, NULL );

	return HandlePathObstruction_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 37363 ];

	UGameAICmd_Hover_MoveToGoal_execPushed_Parms Pushed_Parms;

	ProcessEvent ((UObject*)this, pFnPushed, &Pushed_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )
// class AActor*                  InGoal                         ( CPF_Parm )
// float                          InGoalDistance                 ( CPF_Parm )
// float                          InHoverHeight                  ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal::MoveToGoal ( class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight )
{
	static UFunction* pFnMoveToGoal = NULL;

	if ( ! pFnMoveToGoal )
		pFnMoveToGoal = (UFunction*) UObject::GObjObjects()->Data[ 37356 ];

	UGameAICmd_Hover_MoveToGoal_execMoveToGoal_Parms MoveToGoal_Parms;
	MoveToGoal_Parms.AI = AI;
	MoveToGoal_Parms.InGoal = InGoal;
	MoveToGoal_Parms.InGoalDistance = InGoalDistance;
	MoveToGoal_Parms.InHoverHeight = InHoverHeight;

	ProcessEvent ((UObject*)this, pFnMoveToGoal, &MoveToGoal_Parms, NULL );

	return MoveToGoal_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )
// struct FName                   Category                       ( CPF_Parm )

void UGameAICmd_Hover_MoveToGoal_Mesh::eventDrawDebug ( class AHUD* H, struct FName Category )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 37478 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_eventDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.H = H;
	memcpy ( &DrawDebug_Parms.Category, &Category, 0x8 );

	ProcessEvent ((UObject*)this, pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  InEnemy                        ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::IsEnemyBasedOnInterpActor ( class AActor* InEnemy )
{
	static UFunction* pFnIsEnemyBasedOnInterpActor = NULL;

	if ( ! pFnIsEnemyBasedOnInterpActor )
		pFnIsEnemyBasedOnInterpActor = (UFunction*) UObject::GObjObjects()->Data[ 37475 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execIsEnemyBasedOnInterpActor_Parms IsEnemyBasedOnInterpActor_Parms;
	IsEnemyBasedOnInterpActor_Parms.InEnemy = InEnemy;

	ProcessEvent ((UObject*)this, pFnIsEnemyBasedOnInterpActor, &IsEnemyBasedOnInterpActor_Parms, NULL );

	return IsEnemyBasedOnInterpActor_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::ShouldUpdateBreadCrumbs ( )
{
	static UFunction* pFnShouldUpdateBreadCrumbs = NULL;

	if ( ! pFnShouldUpdateBreadCrumbs )
		pFnShouldUpdateBreadCrumbs = (UFunction*) UObject::GObjObjects()->Data[ 37447 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execShouldUpdateBreadCrumbs_Parms ShouldUpdateBreadCrumbs_Parms;

	ProcessEvent ((UObject*)this, pFnShouldUpdateBreadCrumbs, &ShouldUpdateBreadCrumbs_Parms, NULL );

	return ShouldUpdateBreadCrumbs_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::HasReachedGoal ( )
{
	static UFunction* pFnHasReachedGoal = NULL;

	if ( ! pFnHasReachedGoal )
		pFnHasReachedGoal = (UFunction*) UObject::GObjObjects()->Data[ 37445 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHasReachedGoal_Parms HasReachedGoal_Parms;

	ProcessEvent ((UObject*)this, pFnHasReachedGoal, &HasReachedGoal_Parms, NULL );

	return HasReachedGoal_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
// [0x00020000] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::ReEvaluatePath ( )
{
	static UFunction* pFnReEvaluatePath = NULL;

	if ( ! pFnReEvaluatePath )
		pFnReEvaluatePath = (UFunction*) UObject::GObjObjects()->Data[ 37444 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execReEvaluatePath_Parms ReEvaluatePath_Parms;

	ProcessEvent ((UObject*)this, pFnReEvaluatePath, &ReEvaluatePath_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  BlockedBy                      ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::HandlePathObstruction ( class AActor* BlockedBy )
{
	static UFunction* pFnHandlePathObstruction = NULL;

	if ( ! pFnHandlePathObstruction )
		pFnHandlePathObstruction = (UFunction*) UObject::GObjObjects()->Data[ 37430 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHandlePathObstruction_Parms HandlePathObstruction_Parms;
	HandlePathObstruction_Parms.BlockedBy = BlockedBy;

	ProcessEvent ((UObject*)this, pFnHandlePathObstruction, &HandlePathObstruction_Parms, NULL );

	return HandlePathObstruction_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameAICmd_Hover_MoveToGoal_Mesh::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 37428 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 37427 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execPopped_Parms Popped_Parms;

	ProcessEvent ((UObject*)this, pFnPopped, &Popped_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 37426 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execPushed_Parms Pushed_Parms;

	ProcessEvent ((UObject*)this, pFnPushed, &Pushed_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverBackToMesh ( class AGameAIController* AI )
{
	static UFunction* pFnHoverBackToMesh = NULL;

	if ( ! pFnHoverBackToMesh )
		pFnHoverBackToMesh = (UFunction*) UObject::GObjObjects()->Data[ 37422 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverBackToMesh_Parms HoverBackToMesh_Parms;
	HoverBackToMesh_Parms.AI = AI;

	ProcessEvent ((UObject*)this, pFnHoverBackToMesh, &HoverBackToMesh_Parms, NULL );

	return HoverBackToMesh_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )
// struct FVector                 InPoint                        ( CPF_Parm )
// float                          InGoalDistance                 ( CPF_Parm )
// float                          InHoverHeight                  ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToPoint ( class AGameAIController* AI, struct FVector InPoint, float InGoalDistance, float InHoverHeight )
{
	static UFunction* pFnHoverToPoint = NULL;

	if ( ! pFnHoverToPoint )
		pFnHoverToPoint = (UFunction*) UObject::GObjObjects()->Data[ 37415 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToPoint_Parms HoverToPoint_Parms;
	HoverToPoint_Parms.AI = AI;
	memcpy ( &HoverToPoint_Parms.InPoint, &InPoint, 0xC );
	HoverToPoint_Parms.InGoalDistance = InGoalDistance;
	HoverToPoint_Parms.InHoverHeight = InHoverHeight;

	ProcessEvent ((UObject*)this, pFnHoverToPoint, &HoverToPoint_Parms, NULL );

	return HoverToPoint_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )
// class AActor*                  InGoal                         ( CPF_Parm )
// float                          InGoalDistance                 ( CPF_Parm )
// float                          InHoverHeight                  ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToGoal ( class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight )
{
	static UFunction* pFnHoverToGoal = NULL;

	if ( ! pFnHoverToGoal )
		pFnHoverToGoal = (UFunction*) UObject::GObjObjects()->Data[ 37408 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToGoal_Parms HoverToGoal_Parms;
	HoverToGoal_Parms.AI = AI;
	HoverToGoal_Parms.InGoal = InGoal;
	HoverToGoal_Parms.InGoalDistance = InGoalDistance;
	HoverToGoal_Parms.InHoverHeight = InHoverHeight;

	ProcessEvent ((UObject*)this, pFnHoverToGoal, &HoverToGoal_Parms, NULL );

	return HoverToGoal_Parms.ReturnValue;
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameFixedCamera::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 38428 ];

	UGameFixedCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	ProcessEvent ((UObject*)this, pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameFixedCamera.UpdateCamera
// [0x00420102] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameFixedCamera::UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 38422 ];

	UGameFixedCamera_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.CameraActor = CameraActor;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
// [0x00020102] 
// Parameters infos:

void AGameKActorSpawnableEffect::StartScalingDown ( )
{
	static UFunction* pFnStartScalingDown = NULL;

	if ( ! pFnStartScalingDown )
		pFnStartScalingDown = (UFunction*) UObject::GObjObjects()->Data[ 38435 ];

	AGameKActorSpawnableEffect_execStartScalingDown_Parms StartScalingDown_Parms;

	ProcessEvent ((UObject*)this, pFnStartScalingDown, &StartScalingDown_Parms, NULL );
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void AGameKActorSpawnableEffect::eventFellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 38433 ];

	AGameKActorSpawnableEffect_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	ProcessEvent ((UObject*)this, pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameKActorSpawnableEffect::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 38432 ];

	AGameKActorSpawnableEffect_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.SetupDebugZones
// [0x00820002] 
// Parameters infos:

void AMobileDebugCameraController::SetupDebugZones ( )
{
	static UFunction* pFnSetupDebugZones = NULL;

	if ( ! pFnSetupDebugZones )
		pFnSetupDebugZones = (UFunction*) UObject::GObjObjects()->Data[ 38981 ];

	AMobileDebugCameraController_execSetupDebugZones_Parms SetupDebugZones_Parms;

	ProcessEvent ((UObject*)this, pFnSetupDebugZones, &SetupDebugZones_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.InitInputSystem
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AMobileDebugCameraController::eventInitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 38980 ];

	AMobileDebugCameraController_eventInitInputSystem_Parms InitInputSystem_Parms;

	ProcessEvent ((UObject*)this, pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.OnDeactivate
// [0x00020002] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void AMobileDebugCameraController::OnDeactivate ( class APlayerController* PC )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 38977 ];

	AMobileDebugCameraController_execOnDeactivate_Parms OnDeactivate_Parms;
	OnDeactivate_Parms.PC = PC;

	ProcessEvent ((UObject*)this, pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
// [0x00020002] 
// Parameters infos:

void AMobileDebugCameraController::InitDebugInputSystem ( )
{
	static UFunction* pFnInitDebugInputSystem = NULL;

	if ( ! pFnInitDebugInputSystem )
		pFnInitDebugInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 38974 ];

	AMobileDebugCameraController_execInitDebugInputSystem_Parms InitDebugInputSystem_Parms;

	ProcessEvent ((UObject*)this, pFnInitDebugInputSystem, &InitDebugInputSystem_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.OnActivate
// [0x00020002] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void AMobileDebugCameraController::OnActivate ( class APlayerController* PC )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 38968 ];

	AMobileDebugCameraController_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.PC = PC;

	ProcessEvent ((UObject*)this, pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraInput.InputKey
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          AmountDepressed                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool UMobileDebugCameraInput::InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnInputKey = NULL;

	if ( ! pFnInputKey )
		pFnInputKey = (UFunction*) UObject::GObjObjects()->Data[ 39341 ];

	UMobileDebugCameraInput_execInputKey_Parms InputKey_Parms;
	InputKey_Parms.ControllerId = ControllerId;
	memcpy ( &InputKey_Parms.Key, &Key, 0x8 );
	InputKey_Parms.Event = Event;
	InputKey_Parms.AmountDepressed = AmountDepressed;
	InputKey_Parms.bGamepad = bGamepad;

	ProcessEvent ((UObject*)this, pFnInputKey, &InputKey_Parms, NULL );

	return InputKey_Parms.ReturnValue;
};

// Function GameFramework.MobileDebugCameraHUD.PostRender
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void AMobileDebugCameraHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 39156 ];

	AMobileDebugCameraHUD_eventPostRender_Parms PostRender_Parms;

	ProcessEvent ((UObject*)this, pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          DY                             ( CPF_Parm )
// class UMeshComponent*          MeshComp                       ( CPF_Parm | CPF_EditInline )
// float                          Y                              ( CPF_Parm | CPF_OutParm )

bool AMobileDebugCameraHUD::DisplayMaterials ( float X, float DY, class UMeshComponent* MeshComp, float* Y )
{
	static UFunction* pFnDisplayMaterials = NULL;

	if ( ! pFnDisplayMaterials )
		pFnDisplayMaterials = (UFunction*) UObject::GObjObjects()->Data[ 39147 ];

	AMobileDebugCameraHUD_execDisplayMaterials_Parms DisplayMaterials_Parms;
	DisplayMaterials_Parms.X = X;
	DisplayMaterials_Parms.DY = DY;
	DisplayMaterials_Parms.MeshComp = MeshComp;

	ProcessEvent ((UObject*)this, pFnDisplayMaterials, &DisplayMaterials_Parms, NULL );

	if ( Y )
		*Y = DisplayMaterials_Parms.Y;

	return DisplayMaterials_Parms.ReturnValue;
};

// Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AMobileDebugCameraHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 39146 ];

	AMobileDebugCameraHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	ProcessEvent ((UObject*)this, pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.UpdateItemViewports
// [0x00020002] 
// Parameters infos:

void UMobileMenuBar::UpdateItemViewports ( )
{
	static UFunction* pFnUpdateItemViewports = NULL;

	if ( ! pFnUpdateItemViewports )
		pFnUpdateItemViewports = (UFunction*) UObject::GObjObjects()->Data[ 39567 ];

	UMobileMenuBar_execUpdateItemViewports_Parms UpdateItemViewports_Parms;

	ProcessEvent ((UObject*)this, pFnUpdateItemViewports, &UpdateItemViewports_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.SetFirstItem
// [0x00020002] 
// Parameters infos:
// int                            first                          ( CPF_Parm )

void UMobileMenuBar::SetFirstItem ( int first )
{
	static UFunction* pFnSetFirstItem = NULL;

	if ( ! pFnSetFirstItem )
		pFnSetFirstItem = (UFunction*) UObject::GObjObjects()->Data[ 39565 ];

	UMobileMenuBar_execSetFirstItem_Parms SetFirstItem_Parms;
	SetFirstItem_Parms.first = first;

	ProcessEvent ((UObject*)this, pFnSetFirstItem, &SetFirstItem_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.RenderItem
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// int                            ItemIndex                      ( CPF_Parm )

void UMobileMenuBar::RenderItem ( class UCanvas* Canvas, float DeltaTime, int ItemIndex )
{
	static UFunction* pFnRenderItem = NULL;

	if ( ! pFnRenderItem )
		pFnRenderItem = (UFunction*) UObject::GObjObjects()->Data[ 39561 ];

	UMobileMenuBar_execRenderItem_Parms RenderItem_Parms;
	RenderItem_Parms.Canvas = Canvas;
	RenderItem_Parms.DeltaTime = DeltaTime;
	RenderItem_Parms.ItemIndex = ItemIndex;

	ProcessEvent ((UObject*)this, pFnRenderItem, &RenderItem_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.RenderObject
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuBar::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 39555 ];

	UMobileMenuBar_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuBar::eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 39546 ];

	UMobileMenuBar_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.ObjectOver = ObjectOver;
	OnTouch_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuBar.GetSelected
// [0x00020002] 
// Parameters infos:
// class UMobileMenuBarItem*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMobileMenuBarItem* UMobileMenuBar::GetSelected ( )
{
	static UFunction* pFnGetSelected = NULL;

	if ( ! pFnGetSelected )
		pFnGetSelected = (UFunction*) UObject::GObjObjects()->Data[ 39544 ];

	UMobileMenuBar_execGetSelected_Parms GetSelected_Parms;

	ProcessEvent ((UObject*)this, pFnGetSelected, &GetSelected_Parms, NULL );

	return GetSelected_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuBar.Num
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UMobileMenuBar::Num ( )
{
	static UFunction* pFnNum = NULL;

	if ( ! pFnNum )
		pFnNum = (UFunction*) UObject::GObjObjects()->Data[ 39542 ];

	UMobileMenuBar_execNum_Parms Num_Parms;

	ProcessEvent ((UObject*)this, pFnNum, &Num_Parms, NULL );

	return Num_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuBar.AddItem
// [0x00024002] 
// Parameters infos:
// class UMobileMenuBarItem*      Item                           ( CPF_Parm )
// int                            Index                          ( CPF_OptionalParm | CPF_Parm )

void UMobileMenuBar::AddItem ( class UMobileMenuBarItem* Item, int Index )
{
	static UFunction* pFnAddItem = NULL;

	if ( ! pFnAddItem )
		pFnAddItem = (UFunction*) UObject::GObjObjects()->Data[ 39539 ];

	UMobileMenuBar_execAddItem_Parms AddItem_Parms;
	AddItem_Parms.Item = Item;
	AddItem_Parms.Index = Index;

	ProcessEvent ((UObject*)this, pFnAddItem, &AddItem_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.InitMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// class UMobileMenuScene*        Scene                          ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuBar::InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 39533 ];

	UMobileMenuBar_execInitMenuObject_Parms InitMenuObject_Parms;
	InitMenuObject_Parms.PlayerInput = PlayerInput;
	InitMenuObject_Parms.Scene = Scene;
	InitMenuObject_Parms.ScreenWidth = ScreenWidth;
	InitMenuObject_Parms.ScreenHeight = ScreenHeight;
	InitMenuObject_Parms.bIsFirstInitialization = bIsFirstInitialization;

	ProcessEvent ((UObject*)this, pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuBarItem.RenderItem
// [0x00020000] 
// Parameters infos:
// class UMobileMenuBar*          Bar                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuBarItem::RenderItem ( class UMobileMenuBar* Bar, class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderItem = NULL;

	if ( ! pFnRenderItem )
		pFnRenderItem = (UFunction*) UObject::GObjObjects()->Data[ 39573 ];

	UMobileMenuBarItem_execRenderItem_Parms RenderItem_Parms;
	RenderItem_Parms.Bar = Bar;
	RenderItem_Parms.Canvas = Canvas;
	RenderItem_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnRenderItem, &RenderItem_Parms, NULL );
};

// Function GameFramework.MobileMenuButton.RenderCaption
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMobileMenuButton::RenderCaption ( class UCanvas* Canvas )
{
	static UFunction* pFnRenderCaption = NULL;

	if ( ! pFnRenderCaption )
		pFnRenderCaption = (UFunction*) UObject::GObjObjects()->Data[ 39597 ];

	UMobileMenuButton_execRenderCaption_Parms RenderCaption_Parms;
	RenderCaption_Parms.Canvas = Canvas;

	ProcessEvent ((UObject*)this, pFnRenderCaption, &RenderCaption_Parms, NULL );
};

// Function GameFramework.MobileMenuButton.RenderObject
// [0x00820002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuButton::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 39591 ];

	UMobileMenuButton_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuButton.InitMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// class UMobileMenuScene*        Scene                          ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuButton::InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 39584 ];

	UMobileMenuButton_execInitMenuObject_Parms InitMenuObject_Parms;
	InitMenuObject_Parms.PlayerInput = PlayerInput;
	InitMenuObject_Parms.Scene = Scene;
	InitMenuObject_Parms.ScreenWidth = ScreenWidth;
	InitMenuObject_Parms.ScreenHeight = ScreenHeight;
	InitMenuObject_Parms.bIsFirstInitialization = bIsFirstInitialization;

	ProcessEvent ((UObject*)this, pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuElement.RenderElement
// [0x00020000] 
// Parameters infos:
// class UMobileMenuObject*       Owner                          ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )

void UMobileMenuElement::RenderElement ( class UMobileMenuObject* Owner, class UCanvas* Canvas, float DeltaTime, float Opacity )
{
	static UFunction* pFnRenderElement = NULL;

	if ( ! pFnRenderElement )
		pFnRenderElement = (UFunction*) UObject::GObjObjects()->Data[ 39614 ];

	UMobileMenuElement_execRenderElement_Parms RenderElement_Parms;
	RenderElement_Parms.Owner = Owner;
	RenderElement_Parms.Canvas = Canvas;
	RenderElement_Parms.DeltaTime = DeltaTime;
	RenderElement_Parms.Opacity = Opacity;

	ProcessEvent ((UObject*)this, pFnRenderElement, &RenderElement_Parms, NULL );
};

// Function GameFramework.MobileMenuElement.OnTouch
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuElement::OnTouch ( unsigned char EventType, float TouchX, float TouchY, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 39608 ];

	UMobileMenuElement_execOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuGame.RestartPlayer
// [0x00020000] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void AMobileMenuGame::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 39626 ];

	AMobileMenuGame_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	ProcessEvent ((UObject*)this, pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function GameFramework.MobileMenuGame.StartMatch
// [0x00020000] 
// Parameters infos:

void AMobileMenuGame::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 39625 ];

	AMobileMenuGame_execStartMatch_Parms StartMatch_Parms;

	ProcessEvent ((UObject*)this, pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function GameFramework.MobileMenuGame.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       NewPlayer                      ( CPF_Parm )

void AMobileMenuGame::eventPostLogin ( class APlayerController* NewPlayer )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 39622 ];

	AMobileMenuGame_eventPostLogin_Parms PostLogin_Parms;
	PostLogin_Parms.NewPlayer = NewPlayer;

	ProcessEvent ((UObject*)this, pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.RenderDragItem
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuInventory::RenderDragItem ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderDragItem = NULL;

	if ( ! pFnRenderDragItem )
		pFnRenderDragItem = (UFunction*) UObject::GObjObjects()->Data[ 39744 ];

	UMobileMenuInventory_execRenderDragItem_Parms RenderDragItem_Parms;
	RenderDragItem_Parms.Canvas = Canvas;
	RenderDragItem_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnRenderDragItem, &RenderDragItem_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.RenderObject
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuInventory::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 39738 ];

	UMobileMenuInventory_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.GetIndexOfItem
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuElement*      Item                           ( CPF_Parm )

int UMobileMenuInventory::GetIndexOfItem ( class UMobileMenuElement* Item )
{
	static UFunction* pFnGetIndexOfItem = NULL;

	if ( ! pFnGetIndexOfItem )
		pFnGetIndexOfItem = (UFunction*) UObject::GObjObjects()->Data[ 39735 ];

	UMobileMenuInventory_execGetIndexOfItem_Parms GetIndexOfItem_Parms;
	GetIndexOfItem_Parms.Item = Item;

	ProcessEvent ((UObject*)this, pFnGetIndexOfItem, &GetIndexOfItem_Parms, NULL );

	return GetIndexOfItem_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.FindSlotIndexAt
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

int UMobileMenuInventory::FindSlotIndexAt ( float X, float Y )
{
	static UFunction* pFnFindSlotIndexAt = NULL;

	if ( ! pFnFindSlotIndexAt )
		pFnFindSlotIndexAt = (UFunction*) UObject::GObjObjects()->Data[ 39727 ];

	UMobileMenuInventory_execFindSlotIndexAt_Parms FindSlotIndexAt_Parms;
	FindSlotIndexAt_Parms.X = X;
	FindSlotIndexAt_Parms.Y = Y;

	ProcessEvent ((UObject*)this, pFnFindSlotIndexAt, &FindSlotIndexAt_Parms, NULL );

	return FindSlotIndexAt_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.InitDragAt
// [0x00020002] 
// Parameters infos:
// int                            TouchX                         ( CPF_Parm )
// int                            TouchY                         ( CPF_Parm )

void UMobileMenuInventory::InitDragAt ( int TouchX, int TouchY )
{
	static UFunction* pFnInitDragAt = NULL;

	if ( ! pFnInitDragAt )
		pFnInitDragAt = (UFunction*) UObject::GObjObjects()->Data[ 39724 ];

	UMobileMenuInventory_execInitDragAt_Parms InitDragAt_Parms;
	InitDragAt_Parms.TouchX = TouchX;
	InitDragAt_Parms.TouchY = TouchY;

	ProcessEvent ((UObject*)this, pFnInitDragAt, &InitDragAt_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.UpdateItemInSlot
// [0x00080002] 
// Parameters infos:
// int                            InSlot                         ( CPF_Parm )

void UMobileMenuInventory::UpdateItemInSlot ( int InSlot )
{
	static UFunction* pFnUpdateItemInSlot = NULL;

	if ( ! pFnUpdateItemInSlot )
		pFnUpdateItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 39720 ];

	UMobileMenuInventory_execUpdateItemInSlot_Parms UpdateItemInSlot_Parms;
	UpdateItemInSlot_Parms.InSlot = InSlot;

	ProcessEvent ((UObject*)this, pFnUpdateItemInSlot, &UpdateItemInSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.AddItemToSlot
// [0x00020002] 
// Parameters infos:
// class UMobileMenuElement*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuElement*      Element                        ( CPF_Parm )
// int                            ToSlot                         ( CPF_Parm )

class UMobileMenuElement* UMobileMenuInventory::AddItemToSlot ( class UMobileMenuElement* Element, int ToSlot )
{
	static UFunction* pFnAddItemToSlot = NULL;

	if ( ! pFnAddItemToSlot )
		pFnAddItemToSlot = (UFunction*) UObject::GObjObjects()->Data[ 39715 ];

	UMobileMenuInventory_execAddItemToSlot_Parms AddItemToSlot_Parms;
	AddItemToSlot_Parms.Element = Element;
	AddItemToSlot_Parms.ToSlot = ToSlot;

	ProcessEvent ((UObject*)this, pFnAddItemToSlot, &AddItemToSlot_Parms, NULL );

	return AddItemToSlot_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.SwapItemsInSlots
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Slot0                          ( CPF_Parm )
// int                            Slot1                          ( CPF_Parm )

bool UMobileMenuInventory::SwapItemsInSlots ( int Slot0, int Slot1 )
{
	static UFunction* pFnSwapItemsInSlots = NULL;

	if ( ! pFnSwapItemsInSlots )
		pFnSwapItemsInSlots = (UFunction*) UObject::GObjObjects()->Data[ 39709 ];

	UMobileMenuInventory_execSwapItemsInSlots_Parms SwapItemsInSlots_Parms;
	SwapItemsInSlots_Parms.Slot0 = Slot0;
	SwapItemsInSlots_Parms.Slot1 = Slot1;

	ProcessEvent ((UObject*)this, pFnSwapItemsInSlots, &SwapItemsInSlots_Parms, NULL );

	return SwapItemsInSlots_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.OnTouch
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuInventory::eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 39701 ];

	UMobileMenuInventory_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.ObjectOver = ObjectOver;
	OnTouch_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.CanPutItemInSlot
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuElement*      Item                           ( CPF_Parm )
// class UMobileMenuElement*      ToSlot                         ( CPF_Parm )
// int                            ToIdx                          ( CPF_Parm )
// int                            FromIdx                        ( CPF_OptionalParm | CPF_Parm )

bool UMobileMenuInventory::CanPutItemInSlot ( class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx )
{
	static UFunction* pFnCanPutItemInSlot = NULL;

	if ( ! pFnCanPutItemInSlot )
		pFnCanPutItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 39695 ];

	UMobileMenuInventory_execCanPutItemInSlot_Parms CanPutItemInSlot_Parms;
	CanPutItemInSlot_Parms.Item = Item;
	CanPutItemInSlot_Parms.ToSlot = ToSlot;
	CanPutItemInSlot_Parms.ToIdx = ToIdx;
	CanPutItemInSlot_Parms.FromIdx = FromIdx;

	ProcessEvent ((UObject*)this, pFnCanPutItemInSlot, &CanPutItemInSlot_Parms, NULL );

	return CanPutItemInSlot_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.ScaleSlot
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UMobileMenuElement*      Slot                           ( CPF_Parm )

void UMobileMenuInventory::ScaleSlot ( class UMobileMenuElement* Slot )
{
	static UFunction* pFnScaleSlot = NULL;

	if ( ! pFnScaleSlot )
		pFnScaleSlot = (UFunction*) UObject::GObjObjects()->Data[ 39690 ];

	UMobileMenuInventory_execScaleSlot_Parms ScaleSlot_Parms;
	ScaleSlot_Parms.Slot = Slot;

	ProcessEvent ((UObject*)this, pFnScaleSlot, &ScaleSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.AddSlot
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuElement*      Slot                           ( CPF_Parm )

int UMobileMenuInventory::AddSlot ( class UMobileMenuElement* Slot )
{
	static UFunction* pFnAddSlot = NULL;

	if ( ! pFnAddSlot )
		pFnAddSlot = (UFunction*) UObject::GObjObjects()->Data[ 39691 ];

	UMobileMenuInventory_execAddSlot_Parms AddSlot_Parms;
	AddSlot_Parms.Slot = Slot;

	ProcessEvent ((UObject*)this, pFnAddSlot, &AddSlot_Parms, NULL );

	return AddSlot_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.InitMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// class UMobileMenuScene*        Scene                          ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuInventory::InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 39683 ];

	UMobileMenuInventory_execInitMenuObject_Parms InitMenuObject_Parms;
	InitMenuObject_Parms.PlayerInput = PlayerInput;
	InitMenuObject_Parms.Scene = Scene;
	InitMenuObject_Parms.ScreenWidth = ScreenWidth;
	InitMenuObject_Parms.ScreenHeight = ScreenHeight;
	InitMenuObject_Parms.bIsFirstInitialization = bIsFirstInitialization;

	ProcessEvent ((UObject*)this, pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.OnUpdateDrag
// [0x00520000] 
// Parameters infos:
// struct FDragElementInfo        Before                         ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FDragElementInfo        After                          ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMobileMenuInventory::OnUpdateDrag ( struct FDragElementInfo* Before, struct FDragElementInfo* After )
{
	static UFunction* pFnOnUpdateDrag = NULL;

	if ( ! pFnOnUpdateDrag )
		pFnOnUpdateDrag = (UFunction*) UObject::GObjObjects()->Data[ 39663 ];

	UMobileMenuInventory_execOnUpdateDrag_Parms OnUpdateDrag_Parms;

	ProcessEvent ((UObject*)this, pFnOnUpdateDrag, &OnUpdateDrag_Parms, NULL );

	if ( Before )
		memcpy ( Before, &OnUpdateDrag_Parms.Before, 0x28 );

	if ( After )
		memcpy ( After, &OnUpdateDrag_Parms.After, 0x28 );
};

// Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuInventory*    FromInv                        ( CPF_Parm )
// class UMobileMenuElement*      Item                           ( CPF_Parm )
// class UMobileMenuElement*      ToSlot                         ( CPF_Parm )
// int                            ToIdx                          ( CPF_Parm )
// int                            FromIdx                        ( CPF_Parm )

bool UMobileMenuInventory::DoCanPutItemInSlot ( class UMobileMenuInventory* FromInv, class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx )
{
	static UFunction* pFnDoCanPutItemInSlot = NULL;

	if ( ! pFnDoCanPutItemInSlot )
		pFnDoCanPutItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 39665 ];

	UMobileMenuInventory_execDoCanPutItemInSlot_Parms DoCanPutItemInSlot_Parms;
	DoCanPutItemInSlot_Parms.FromInv = FromInv;
	DoCanPutItemInSlot_Parms.Item = Item;
	DoCanPutItemInSlot_Parms.ToSlot = ToSlot;
	DoCanPutItemInSlot_Parms.ToIdx = ToIdx;
	DoCanPutItemInSlot_Parms.FromIdx = FromIdx;

	ProcessEvent ((UObject*)this, pFnDoCanPutItemInSlot, &DoCanPutItemInSlot_Parms, NULL );

	return DoCanPutItemInSlot_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot
// [0x00120000] 
// Parameters infos:
// class UMobileMenuInventory*    FromInv                        ( CPF_Parm )
// int                            SlotIndex                      ( CPF_Parm )

void UMobileMenuInventory::OnUpdateItemInSlot ( class UMobileMenuInventory* FromInv, int SlotIndex )
{
	static UFunction* pFnOnUpdateItemInSlot = NULL;

	if ( ! pFnOnUpdateItemInSlot )
		pFnOnUpdateItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 39667 ];

	UMobileMenuInventory_execOnUpdateItemInSlot_Parms OnUpdateItemInSlot_Parms;
	OnUpdateItemInSlot_Parms.FromInv = FromInv;
	OnUpdateItemInSlot_Parms.SlotIndex = SlotIndex;

	ProcessEvent ((UObject*)this, pFnOnUpdateItemInSlot, &OnUpdateItemInSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuLabel.RenderObject
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuLabel::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 39759 ];

	UMobileMenuLabel_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuList.ItemScrollSize
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuListItem*     Item                           ( CPF_Parm )

int UMobileMenuList::ItemScrollSize ( class UMobileMenuListItem* Item )
{
	static UFunction* pFnItemScrollSize = NULL;

	if ( ! pFnItemScrollSize )
		pFnItemScrollSize = (UFunction*) UObject::GObjObjects()->Data[ 39901 ];

	UMobileMenuList_execItemScrollSize_Parms ItemScrollSize_Parms;
	ItemScrollSize_Parms.Item = Item;

	ProcessEvent ((UObject*)this, pFnItemScrollSize, &ItemScrollSize_Parms, NULL );

	return ItemScrollSize_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.RenderObject
// [0x00820002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuList::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 39886 ];

	UMobileMenuList_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuList.UpdateScroll
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuList::UpdateScroll ( float DeltaTime )
{
	static UFunction* pFnUpdateScroll = NULL;

	if ( ! pFnUpdateScroll )
		pFnUpdateScroll = (UFunction*) UObject::GObjObjects()->Data[ 39883 ];

	UMobileMenuList_execUpdateScroll_Parms UpdateScroll_Parms;
	UpdateScroll_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnUpdateScroll, &UpdateScroll_Parms, NULL );
};

// Function GameFramework.MobileMenuList.CalculateSelectedItem
// [0x00420002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          ScrollAmount                   ( CPF_Parm )
// unsigned long                  bForceZeroAdjustment           ( CPF_Parm )
// struct FSelectedMenuItem       Selected                       ( CPF_Parm | CPF_OutParm )

float UMobileMenuList::CalculateSelectedItem ( float ScrollAmount, unsigned long bForceZeroAdjustment, struct FSelectedMenuItem* Selected )
{
	static UFunction* pFnCalculateSelectedItem = NULL;

	if ( ! pFnCalculateSelectedItem )
		pFnCalculateSelectedItem = (UFunction*) UObject::GObjObjects()->Data[ 39872 ];

	UMobileMenuList_execCalculateSelectedItem_Parms CalculateSelectedItem_Parms;
	CalculateSelectedItem_Parms.ScrollAmount = ScrollAmount;
	CalculateSelectedItem_Parms.bForceZeroAdjustment = bForceZeroAdjustment;

	ProcessEvent ((UObject*)this, pFnCalculateSelectedItem, &CalculateSelectedItem_Parms, NULL );

	if ( Selected )
		memcpy ( Selected, &CalculateSelectedItem_Parms.Selected, 0xC );

	return CalculateSelectedItem_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetItemClickPosition
// [0x00420002] 
// Parameters infos:
// class UMobileMenuListItem*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          MouseX                         ( CPF_Parm | CPF_OutParm )
// float                          MouseY                         ( CPF_Parm | CPF_OutParm )

class UMobileMenuListItem* UMobileMenuList::GetItemClickPosition ( float* MouseX, float* MouseY )
{
	static UFunction* pFnGetItemClickPosition = NULL;

	if ( ! pFnGetItemClickPosition )
		pFnGetItemClickPosition = (UFunction*) UObject::GObjObjects()->Data[ 39864 ];

	UMobileMenuList_execGetItemClickPosition_Parms GetItemClickPosition_Parms;

	ProcessEvent ((UObject*)this, pFnGetItemClickPosition, &GetItemClickPosition_Parms, NULL );

	if ( MouseX )
		*MouseX = GetItemClickPosition_Parms.MouseX;

	if ( MouseY )
		*MouseY = GetItemClickPosition_Parms.MouseY;

	return GetItemClickPosition_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuList::eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 39848 ];

	UMobileMenuList_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.ObjectOver = ObjectOver;
	OnTouch_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.SetSelectedItem
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ItemIndex                      ( CPF_Parm )
// unsigned long                  bForceAll                      ( CPF_OptionalParm | CPF_Parm )

bool UMobileMenuList::SetSelectedItem ( int ItemIndex, unsigned long bForceAll )
{
	static UFunction* pFnSetSelectedItem = NULL;

	if ( ! pFnSetSelectedItem )
		pFnSetSelectedItem = (UFunction*) UObject::GObjObjects()->Data[ 39844 ];

	UMobileMenuList_execSetSelectedItem_Parms SetSelectedItem_Parms;
	SetSelectedItem_Parms.ItemIndex = ItemIndex;
	SetSelectedItem_Parms.bForceAll = bForceAll;

	ProcessEvent ((UObject*)this, pFnSetSelectedItem, &SetSelectedItem_Parms, NULL );

	return SetSelectedItem_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetNumVisible
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UMobileMenuList::GetNumVisible ( )
{
	static UFunction* pFnGetNumVisible = NULL;

	if ( ! pFnGetNumVisible )
		pFnGetNumVisible = (UFunction*) UObject::GObjObjects()->Data[ 39840 ];

	UMobileMenuList_execGetNumVisible_Parms GetNumVisible_Parms;

	ProcessEvent ((UObject*)this, pFnGetNumVisible, &GetNumVisible_Parms, NULL );

	return GetNumVisible_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            VisibleIndex                   ( CPF_Parm )

int UMobileMenuList::SetSelectedToVisibleIndex ( int VisibleIndex )
{
	static UFunction* pFnSetSelectedToVisibleIndex = NULL;

	if ( ! pFnSetSelectedToVisibleIndex )
		pFnSetSelectedToVisibleIndex = (UFunction*) UObject::GObjObjects()->Data[ 39836 ];

	UMobileMenuList_execSetSelectedToVisibleIndex_Parms SetSelectedToVisibleIndex_Parms;
	SetSelectedToVisibleIndex_Parms.VisibleIndex = VisibleIndex;

	ProcessEvent ((UObject*)this, pFnSetSelectedToVisibleIndex, &SetSelectedToVisibleIndex_Parms, NULL );

	return SetSelectedToVisibleIndex_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UMobileMenuList::GetVisibleIndexOfSelected ( )
{
	static UFunction* pFnGetVisibleIndexOfSelected = NULL;

	if ( ! pFnGetVisibleIndexOfSelected )
		pFnGetVisibleIndexOfSelected = (UFunction*) UObject::GObjObjects()->Data[ 39831 ];

	UMobileMenuList_execGetVisibleIndexOfSelected_Parms GetVisibleIndexOfSelected_Parms;

	ProcessEvent ((UObject*)this, pFnGetVisibleIndexOfSelected, &GetVisibleIndexOfSelected_Parms, NULL );

	return GetVisibleIndexOfSelected_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetAmountSelected
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuListItem*     Item                           ( CPF_Parm )

float UMobileMenuList::GetAmountSelected ( class UMobileMenuListItem* Item )
{
	static UFunction* pFnGetAmountSelected = NULL;

	if ( ! pFnGetAmountSelected )
		pFnGetAmountSelected = (UFunction*) UObject::GObjObjects()->Data[ 39824 ];

	UMobileMenuList_execGetAmountSelected_Parms GetAmountSelected_Parms;
	GetAmountSelected_Parms.Item = Item;

	ProcessEvent ((UObject*)this, pFnGetAmountSelected, &GetAmountSelected_Parms, NULL );

	return GetAmountSelected_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetSelected
// [0x00020002] 
// Parameters infos:
// class UMobileMenuListItem*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMobileMenuListItem* UMobileMenuList::GetSelected ( )
{
	static UFunction* pFnGetSelected = NULL;

	if ( ! pFnGetSelected )
		pFnGetSelected = (UFunction*) UObject::GObjObjects()->Data[ 39821 ];

	UMobileMenuList_execGetSelected_Parms GetSelected_Parms;

	ProcessEvent ((UObject*)this, pFnGetSelected, &GetSelected_Parms, NULL );

	return GetSelected_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.Num
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UMobileMenuList::Num ( )
{
	static UFunction* pFnNum = NULL;

	if ( ! pFnNum )
		pFnNum = (UFunction*) UObject::GObjObjects()->Data[ 39819 ];

	UMobileMenuList_execNum_Parms Num_Parms;

	ProcessEvent ((UObject*)this, pFnNum, &Num_Parms, NULL );

	return Num_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.AddItem
// [0x00024002] 
// Parameters infos:
// class UMobileMenuListItem*     Item                           ( CPF_Parm )
// int                            Index                          ( CPF_OptionalParm | CPF_Parm )

void UMobileMenuList::AddItem ( class UMobileMenuListItem* Item, int Index )
{
	static UFunction* pFnAddItem = NULL;

	if ( ! pFnAddItem )
		pFnAddItem = (UFunction*) UObject::GObjObjects()->Data[ 39816 ];

	UMobileMenuList_execAddItem_Parms AddItem_Parms;
	AddItem_Parms.Item = Item;
	AddItem_Parms.Index = Index;

	ProcessEvent ((UObject*)this, pFnAddItem, &AddItem_Parms, NULL );
};

// Function GameFramework.MobileMenuList.InitMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// class UMobileMenuScene*        Scene                          ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuList::InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 39810 ];

	UMobileMenuList_execInitMenuObject_Parms InitMenuObject_Parms;
	InitMenuObject_Parms.PlayerInput = PlayerInput;
	InitMenuObject_Parms.Scene = Scene;
	InitMenuObject_Parms.ScreenWidth = ScreenWidth;
	InitMenuObject_Parms.ScreenHeight = ScreenHeight;
	InitMenuObject_Parms.bIsFirstInitialization = bIsFirstInitialization;

	ProcessEvent ((UObject*)this, pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuListItem.RenderItem
// [0x00020000] 
// Parameters infos:
// class UMobileMenuList*         List                           ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuListItem::RenderItem ( class UMobileMenuList* List, class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderItem = NULL;

	if ( ! pFnRenderItem )
		pFnRenderItem = (UFunction*) UObject::GObjObjects()->Data[ 39905 ];

	UMobileMenuListItem_execRenderItem_Parms RenderItem_Parms;
	RenderItem_Parms.List = List;
	RenderItem_Parms.Canvas = Canvas;
	RenderItem_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnRenderItem, &RenderItem_Parms, NULL );
};

// Function GameFramework.MobileMenuObjectProxy.RenderObject
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuObjectProxy::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 39932 ];

	UMobileMenuObjectProxy_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObjectProxy.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuObjectProxy::eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 39925 ];

	UMobileMenuObjectProxy_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.ObjectOver = ObjectOver;
	OnTouch_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuObjectProxy.OnRenderObject
// [0x00120000] 
// Parameters infos:
// class UMobileMenuObjectProxy*  Proxy                          ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuObjectProxy::OnRenderObject ( class UMobileMenuObjectProxy* Proxy, class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnOnRenderObject = NULL;

	if ( ! pFnOnRenderObject )
		pFnOnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 39920 ];

	UMobileMenuObjectProxy_execOnRenderObject_Parms OnRenderObject_Parms;
	OnRenderObject_Parms.Proxy = Proxy;
	OnRenderObject_Parms.Canvas = Canvas;
	OnRenderObject_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnOnRenderObject, &OnRenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObjectProxy.OnTouchEvent
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuObjectProxy*  Proxy                          ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuObjectProxy::OnTouchEvent ( class UMobileMenuObjectProxy* Proxy, unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouchEvent = NULL;

	if ( ! pFnOnTouchEvent )
		pFnOnTouchEvent = (UFunction*) UObject::GObjObjects()->Data[ 39911 ];

	UMobileMenuObjectProxy_execOnTouchEvent_Parms OnTouchEvent_Parms;
	OnTouchEvent_Parms.Proxy = Proxy;
	OnTouchEvent_Parms.EventType = EventType;
	OnTouchEvent_Parms.TouchX = TouchX;
	OnTouchEvent_Parms.TouchY = TouchY;
	OnTouchEvent_Parms.ObjectOver = ObjectOver;
	OnTouchEvent_Parms.DeltaTime = DeltaTime;

	ProcessEvent ((UObject*)this, pFnOnTouchEvent, &OnTouchEvent_Parms, NULL );

	return OnTouchEvent_Parms.ReturnValue;
};

// Function GameFramework.MobileTouchInputVolume.HandleDragOver
// [0x00020002] 
// Parameters infos:

void AMobileTouchInputVolume::HandleDragOver ( )
{
	static UFunction* pFnHandleDragOver = NULL;

	if ( ! pFnHandleDragOver )
		pFnHandleDragOver = (UFunction*) UObject::GObjObjects()->Data[ 40011 ];

	AMobileTouchInputVolume_execHandleDragOver_Parms HandleDragOver_Parms;

	ProcessEvent ((UObject*)this, pFnHandleDragOver, &HandleDragOver_Parms, NULL );
};

// Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
// [0x00020002] 
// Parameters infos:

void AMobileTouchInputVolume::HandleDoubleClick ( )
{
	static UFunction* pFnHandleDoubleClick = NULL;

	if ( ! pFnHandleDoubleClick )
		pFnHandleDoubleClick = (UFunction*) UObject::GObjObjects()->Data[ 40010 ];

	AMobileTouchInputVolume_execHandleDoubleClick_Parms HandleDoubleClick_Parms;

	ProcessEvent ((UObject*)this, pFnHandleDoubleClick, &HandleDoubleClick_Parms, NULL );
};

// Function GameFramework.MobileTouchInputVolume.HandleClick
// [0x00020002] 
// Parameters infos:

void AMobileTouchInputVolume::HandleClick ( )
{
	static UFunction* pFnHandleClick = NULL;

	if ( ! pFnHandleClick )
		pFnHandleClick = (UFunction*) UObject::GObjObjects()->Data[ 40008 ];

	AMobileTouchInputVolume_execHandleClick_Parms HandleClick_Parms;

	ProcessEvent ((UObject*)this, pFnHandleClick, &HandleClick_Parms, NULL );
};

// Function GameFramework.MobileTouchInputVolume.OnToggle
// [0x00020102] 
// Parameters infos:
// class USeqAct_Toggle*          inAction                       ( CPF_Parm )

void AMobileTouchInputVolume::OnToggle ( class USeqAct_Toggle* inAction )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 40006 ];

	AMobileTouchInputVolume_execOnToggle_Parms OnToggle_Parms;
	OnToggle_Parms.inAction = inAction;

	ProcessEvent ((UObject*)this, pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function GameFramework.TouchableElement3D.HandleDragOver
// [0x00020000] 
// Parameters infos:

void UTouchableElement3D::HandleDragOver ( )
{
	static UFunction* pFnHandleDragOver = NULL;

	if ( ! pFnHandleDragOver )
		pFnHandleDragOver = (UFunction*) UObject::GObjObjects()->Data[ 40234 ];

	UTouchableElement3D_execHandleDragOver_Parms HandleDragOver_Parms;

	ProcessEvent ((UObject*)this, pFnHandleDragOver, &HandleDragOver_Parms, NULL );
};

// Function GameFramework.TouchableElement3D.HandleDoubleClick
// [0x00020000] 
// Parameters infos:

void UTouchableElement3D::HandleDoubleClick ( )
{
	static UFunction* pFnHandleDoubleClick = NULL;

	if ( ! pFnHandleDoubleClick )
		pFnHandleDoubleClick = (UFunction*) UObject::GObjObjects()->Data[ 40233 ];

	UTouchableElement3D_execHandleDoubleClick_Parms HandleDoubleClick_Parms;

	ProcessEvent ((UObject*)this, pFnHandleDoubleClick, &HandleDoubleClick_Parms, NULL );
};

// Function GameFramework.TouchableElement3D.HandleClick
// [0x00020000] 
// Parameters infos:

void UTouchableElement3D::HandleClick ( )
{
	static UFunction* pFnHandleClick = NULL;

	if ( ! pFnHandleClick )
		pFnHandleClick = (UFunction*) UObject::GObjObjects()->Data[ 40232 ];

	UTouchableElement3D_execHandleClick_Parms HandleClick_Parms;

	ProcessEvent ((UObject*)this, pFnHandleClick, &HandleClick_Parms, NULL );
};

// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// [0x00420800] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bToEntry                       ( CPF_Parm )
// TArray< class AActor* >        ActorList                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APlayerCollectorGame::eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList )
{
	static UFunction* pFnGetSeamlessTravelActorList = NULL;

	if ( ! pFnGetSeamlessTravelActorList )
		pFnGetSeamlessTravelActorList = (UFunction*) UObject::GObjObjects()->Data[ 40050 ];

	APlayerCollectorGame_eventGetSeamlessTravelActorList_Parms GetSeamlessTravelActorList_Parms;
	GetSeamlessTravelActorList_Parms.bToEntry = bToEntry;

	ProcessEvent ((UObject*)this, pFnGetSeamlessTravelActorList, &GetSeamlessTravelActorList_Parms, NULL );

	if ( ActorList )
		memcpy ( ActorList, &GetSeamlessTravelActorList_Parms.ActorList, 0xC );
};

// Function GameFramework.PlayerCollectorGame.Login
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Portal                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Options                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            UniqueId                       ( CPF_Const | CPF_Parm )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class APlayerController* APlayerCollectorGame::eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 40043 ];

	APlayerCollectorGame_eventLogin_Parms Login_Parms;
	memcpy ( &Login_Parms.Portal, &Portal, 0xC );
	memcpy ( &Login_Parms.Options, &Options, 0xC );
	memcpy ( &Login_Parms.UniqueId, &UniqueId, 0x8 );

	ProcessEvent ((UObject*)this, pFnLogin, &Login_Parms, NULL );

	if ( ErrorMessage )
		memcpy ( ErrorMessage, &Login_Parms.ErrorMessage, 0xC );

	return Login_Parms.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRenderImage.Render
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 TargetCanvas                   ( CPF_Parm )
// class AHUD*                    TargetHud                      ( CPF_Parm )

void USeqEvent_HudRenderImage::Render ( class UCanvas* TargetCanvas, class AHUD* TargetHud )
{
	static UFunction* pFnRender = NULL;

	if ( ! pFnRender )
		pFnRender = (UFunction*) UObject::GObjObjects()->Data[ 40148 ];

	USeqEvent_HudRenderImage_execRender_Parms Render_Parms;
	Render_Parms.TargetCanvas = TargetCanvas;
	Render_Parms.TargetHud = TargetHud;

	ProcessEvent ((UObject*)this, pFnRender, &Render_Parms, NULL );
};

// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqEvent_HudRenderText::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 40176 ];

	USeqEvent_HudRenderText_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	ProcessEvent ((UObject*)this, pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRenderText.Render
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 TargetCanvas                   ( CPF_Parm )
// class AHUD*                    TargetHud                      ( CPF_Parm )

void USeqEvent_HudRenderText::Render ( class UCanvas* TargetCanvas, class AHUD* TargetHud )
{
	static UFunction* pFnRender = NULL;

	if ( ! pFnRender )
		pFnRender = (UFunction*) UObject::GObjObjects()->Data[ 40165 ];

	USeqEvent_HudRenderText_execRender_Parms Render_Parms;
	Render_Parms.TargetCanvas = TargetCanvas;
	Render_Parms.TargetHud = TargetHud;

	ProcessEvent ((UObject*)this, pFnRender, &Render_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif