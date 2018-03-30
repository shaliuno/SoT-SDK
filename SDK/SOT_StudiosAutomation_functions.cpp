// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StudiosAutomation.TestablePlayerController.YieldToServer
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ATestablePlayerController::YieldToServer()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestablePlayerController.YieldToServer"));}

	ATestablePlayerController_YieldToServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestablePlayerController.PerformPostTestCleanup
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ATestablePlayerController::PerformPostTestCleanup()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestablePlayerController.PerformPostTestCleanup"));}

	ATestablePlayerController_PerformPostTestCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestablePlayerController.DisconnectClientFromTest
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ATestablePlayerController::DisconnectClientFromTest()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestablePlayerController.DisconnectClientFromTest"));}

	ATestablePlayerController_DisconnectClientFromTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToServer
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)

void ATestLevelScriptActor::YieldToServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToServer"));}

	ATestLevelScriptActor_YieldToServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)

void ATestLevelScriptActor::YieldToOriginalServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer"));}

	ATestLevelScriptActor_YieldToOriginalServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// int                            ServerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::YieldToDynamicServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ServerIndex)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer"));}

	ATestLevelScriptActor_YieldToDynamicServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ServerIndex = ServerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToClient
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// int                            ClientId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::YieldToClient(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ClientId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToClient"));}

	ATestLevelScriptActor_YieldToClient_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)

void ATestLevelScriptActor::WaitForPossessionAcknowledgement(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement"));}

	ATestLevelScriptActor_WaitForPossessionAcknowledgement_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// int                            NumberOfServers                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::WaitForOtherServers(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfServers)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers"));}

	ATestLevelScriptActor_WaitForOtherServers_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumberOfServers = NumberOfServers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForClients
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// int                            NumberOfClients                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::WaitForClients(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfClients)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.WaitForClients"));}

	ATestLevelScriptActor_WaitForClients_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumberOfClients = NumberOfClients;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class AActor*>          ActorGroup                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            TargetServerIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::TestTriggerServerMigration(TArray<class AActor*> ActorGroup, int TargetServerIndex)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration"));}

	ATestLevelScriptActor_TestTriggerServerMigration_Params params;
	params.ActorGroup = ActorGroup;
	params.TargetServerIndex = TargetServerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
// (FUNC_RequiredAPI, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// int                            NumClients                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           RegisterPawnsForMPTesting      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ClearPawnInputBindings         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::SyncClientServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.SyncClientServer"));}

	ATestLevelScriptActor_SyncClientServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumClients = NumClients;
	params.RegisterPawnsForMPTesting = RegisterPawnsForMPTesting;
	params.ClearPawnInputBindings = ClearPawnInputBindings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting
// (FUNC_Protected, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ActorClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 SpawnLocation                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                SpawnRotation                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ATestLevelScriptActor::SpawnActorForMPTesting(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting"));}

	ATestLevelScriptActor_SpawnActorForMPTesting_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            TestValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::SendServerMigrationTestValueInt32(int TestValue)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32"));}

	ATestLevelScriptActor_SendServerMigrationTestValueInt32_Params params;
	params.TestValue = TestValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::RegisterPawnsForMPTesting(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting"));}

	ATestLevelScriptActor_RegisterPawnsForMPTesting_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::RegisterActorForMPTestingRecursively(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively"));}

	ATestLevelScriptActor_RegisterActorForMPTestingRecursively_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::RegisterActorForMPTesting(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting"));}

	ATestLevelScriptActor_RegisterActorForMPTesting_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ATestLevelScriptActor::PostTestCleanup()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup"));}

	ATestLevelScriptActor_PostTestCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            TestValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::OnServerMigrationTestValueInt32Received(int TestValue)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received"));}

	ATestLevelScriptActor_OnServerMigrationTestValueInt32Received_Params params;
	params.TestValue = TestValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGuid                   MigrationId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class APlayerController*> Players                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ATestLevelScriptActor::OnOutgoingServerMigrationStarted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted"));}

	ATestLevelScriptActor_OnOutgoingServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGuid                   MigrationId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::OnOutgoingServerMigrationCompleted(const struct FGuid& MigrationId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted"));}

	ATestLevelScriptActor_OnOutgoingServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGuid                   MigrationId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::OnOutgoingServerMigrationAborted(const struct FGuid& MigrationId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted"));}

	ATestLevelScriptActor_OnOutgoingServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGuid                   MigrationId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumPlayers                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::OnIncomingServerMigrationStarted(const struct FGuid& MigrationId, int NumPlayers)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted"));}

	ATestLevelScriptActor_OnIncomingServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGuid                   MigrationId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class APlayerController*> Players                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class AActor*>          Actors                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ATestLevelScriptActor::OnIncomingServerMigrationCompleted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players, TArray<class AActor*> Actors)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted"));}

	ATestLevelScriptActor_OnIncomingServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;
	params.Players = Players;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGuid                   MigrationId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::OnIncomingServerMigrationAborted(const struct FGuid& MigrationId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted"));}

	ATestLevelScriptActor_OnIncomingServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGuid                   MigrationId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationStarted(const struct FGuid& MigrationId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted"));}

	ATestLevelScriptActor_OnClientServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGuid                   MigrationId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationCompleted(const struct FGuid& MigrationId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted"));}

	ATestLevelScriptActor_OnClientServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGuid                   MigrationId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationAborted(const struct FGuid& MigrationId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted"));}

	ATestLevelScriptActor_OnClientServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATestLevelScriptActor::GetServerIndex(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetServerIndex"));}

	ATestLevelScriptActor_GetServerIndex_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
// (FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// int                            TargetServerIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ATestLevelScriptActor::GetRemoteServerMigrationURL(int TargetServerIndex)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL"));}

	ATestLevelScriptActor_GetRemoteServerMigrationURL_Params params;
	params.TargetServerIndex = TargetServerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId
// (FUNC_BlueprintCosmetic, FUNC_Private)
// Parameters:
// int                            ClientId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATestLevelScriptActor::GetPlayerIndexFromClientId(int ClientId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId"));}

	ATestLevelScriptActor_GetPlayerIndexFromClientId_Params params;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATestLevelScriptActor::GetNumClientsForMultiplayerTest()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest"));}

	ATestLevelScriptActor_GetNumClientsForMultiplayerTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATestLevelScriptActor::GetNumAutomationClients()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients"));}

	ATestLevelScriptActor_GetNumAutomationClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetClientPawn
// (FUNC_Protected)
// Parameters:
// int                            ClientId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SplitScreenIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APawn* ATestLevelScriptActor::GetClientPawn(int ClientId, int SplitScreenIndex)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetClientPawn"));}

	ATestLevelScriptActor_GetClientPawn_Params params;
	params.ClientId = ClientId;
	params.SplitScreenIndex = SplitScreenIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetClientId
// (FUNC_BlueprintCosmetic, FUNC_Private)
// Parameters:
// bool                           ErrorOnFailure                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATestLevelScriptActor::GetClientId(bool ErrorOnFailure)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetClientId"));}

	ATestLevelScriptActor_GetClientId_Params params;
	params.ErrorOnFailure = ErrorOnFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ATestLevelScriptActor::DoServerPostTestCleanup()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup"));}

	ATestLevelScriptActor_DoServerPostTestCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATestLevelScriptActor::ClearPawnInputBindings(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings"));}

	ATestLevelScriptActor_ClearPawnInputBindings_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.AddServer
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)

void ATestLevelScriptActor::AddServer(const struct FString& Name)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.AddServer"));}

	ATestLevelScriptActor_AddServer_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.AddClient
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            Port                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)

void ATestLevelScriptActor::AddClient(int Port, const struct FString& Name)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.AddClient"));}

	ATestLevelScriptActor_AddClient_Params params;
	params.Port = Port;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::TestFinished(class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished"));}

	UAutomationBlueprintFunctionLibrary_TestFinished_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::TestFailed(const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed"));}

	UAutomationBlueprintFunctionLibrary_TestFailed_Params params;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// class ACameraActor*            Camera                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 NameOverride                   (CPF_Parm, CPF_ZeroConstructor)
// float                          DelayBeforeScreenshotSeconds   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const struct FString& NameOverride, float DelayBeforeScreenshotSeconds)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera"));}

	UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Camera = Camera;
	params.NameOverride = NameOverride;
	params.DelayBeforeScreenshotSeconds = DelayBeforeScreenshotSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& Name)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot"));}

	UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 StepName                       (CPF_Parm, CPF_ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::StepStarted(const struct FString& StepName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted"));}

	UAutomationBlueprintFunctionLibrary_StepStarted_Params params;
	params.StepName = StepName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAutomationBlueprintFunctionLibrary::StepFinished()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished"));}

	UAutomationBlueprintFunctionLibrary_StepFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           TimeoutIsFatal                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::SetTestTimeoutAsFatal(bool TimeoutIsFatal)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal"));}

	UAutomationBlueprintFunctionLibrary_SetTestTimeoutAsFatal_Params params;
	params.TimeoutIsFatal = TimeoutIsFatal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   LevelName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  GameMode                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Absolute                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::OpenLevelWithGameMode(class UObject* WorldContextObject, const struct FName& LevelName, class UClass* GameMode, bool Absolute)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode"));}

	UAutomationBlueprintFunctionLibrary_OpenLevelWithGameMode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.GameMode = GameMode;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAutomationBlueprintFunctionLibrary::IsTravelFinished(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished"));}

	UAutomationBlueprintFunctionLibrary_IsTravelFinished_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAutomationBlueprintFunctionLibrary::IsEditor()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor"));}

	UAutomationBlueprintFunctionLibrary_IsEditor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAutomationBlueprintFunctionLibrary::HasPerformanceDataBeenCaptured()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured"));}

	UAutomationBlueprintFunctionLibrary_HasPerformanceDataBeenCaptured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor
// (FUNC_Protected)
// Parameters:
// bool                           ErrorOnFailure                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATestLevelScriptActor*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATestLevelScriptActor* UAutomationBlueprintFunctionLibrary::GetTestLevelScriptActor(bool ErrorOnFailure)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor"));}

	UAutomationBlueprintFunctionLibrary_GetTestLevelScriptActor_Params params;
	params.ErrorOnFailure = ErrorOnFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class APlayerState*            State                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAutomationBlueprintFunctionLibrary::GetPlayerId(class APlayerState* State)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId"));}

	UAutomationBlueprintFunctionLibrary_GetPlayerId_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
// (FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAutomationBlueprintFunctionLibrary::GetLevelUrl(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl"));}

	UAutomationBlueprintFunctionLibrary_GetLevelUrl_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
// ()
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAutomationBlueprintFunctionLibrary::GetCurrentMapTestName()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName"));}

	UAutomationBlueprintFunctionLibrary_GetCurrentMapTestName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           DumpMemReport                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::EndPerformanceCapture(bool DumpMemReport)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture"));}

	UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params params;
	params.DumpMemReport = DumpMemReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAutomationBlueprintFunctionLibrary::DumpFullMemReport()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport"));}

	UAutomationBlueprintFunctionLibrary_DumpFullMemReport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// int                            NumFrames                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Description                    (CPF_Parm, CPF_ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::DelayForFramesWithDesc(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames, const struct FString& Description)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc"));}

	UAutomationBlueprintFunctionLibrary_DelayForFramesWithDesc_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumFrames = NumFrames;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// int                            NumFrames                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::DelayForFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames"));}

	UAutomationBlueprintFunctionLibrary_DelayForFrames_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumFrames = NumFrames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 FolderName                     (CPF_Parm, CPF_ZeroConstructor)
// bool                           DumpMemReport                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           PreventGarbageCollection       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::BeginPerformanceCapture(const struct FString& FolderName, bool DumpMemReport, bool PreventGarbageCollection)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture"));}

	UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params params;
	params.FolderName = FolderName;
	params.DumpMemReport = DumpMemReport;
	params.PreventGarbageCollection = PreventGarbageCollection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            Actual                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EComparisonMethod> ShouldBe                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Expected                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertValue_Int(int Actual, TEnumAsByte<EComparisonMethod> ShouldBe, int Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int"));}

	UAutomationBlueprintFunctionLibrary_AssertValue_Int_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Actual                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EComparisonMethod> ShouldBe                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Expected                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertValue_Float(float Actual, TEnumAsByte<EComparisonMethod> ShouldBe, float Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float"));}

	UAutomationBlueprintFunctionLibrary_AssertValue_Float_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FDateTime               Actual                         (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<EComparisonMethod> ShouldBe                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDateTime               Expected                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertValue_DateTime(const struct FDateTime& Actual, TEnumAsByte<EComparisonMethod> ShouldBe, const struct FDateTime& Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime"));}

	UAutomationBlueprintFunctionLibrary_AssertValue_DateTime_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           Condition                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertTrue(bool Condition, const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue"));}

	UAutomationBlueprintFunctionLibrary_AssertTrue_Params params;
	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Actual                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NotExpected                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector"));}

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Vector_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTransform              Actual                         (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// struct FTransform              NotExpected                    (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform"));}

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Transform_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Actual                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 NotExpected                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_String(const struct FString& Actual, const struct FString& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String"));}

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_String_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRotator                Actual                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                NotExpected                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator"));}

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Rotator_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertIsValid(class UObject* Object, const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid"));}

	UAutomationBlueprintFunctionLibrary_AssertIsValid_Params params;
	params.Object = Object;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertIsNotValid(class UObject* Object, const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid"));}

	UAutomationBlueprintFunctionLibrary_AssertIsNotValid_Params params;
	params.Object = Object;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           Condition                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertFalse(bool Condition, const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse"));}

	UAutomationBlueprintFunctionLibrary_AssertFalse_Params params;
	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ErrorMessage                   (CPF_Parm, CPF_ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::AssertErrorOccurred(const struct FString& ErrorMessage)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred"));}

	UAutomationBlueprintFunctionLibrary_AssertErrorOccurred_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector2D               Actual                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Expected                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// float                          Tolerance                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D"));}

	UAutomationBlueprintFunctionLibrary_AssertEqual_Vector2D_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Actual                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Expected                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// float                          Tolerance                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector"));}

	UAutomationBlueprintFunctionLibrary_AssertEqual_Vector_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTransform              Actual                         (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// struct FTransform              Expected                       (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform"));}

	UAutomationBlueprintFunctionLibrary_AssertEqual_Transform_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Actual                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Expected                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_String(const struct FString& Actual, const struct FString& Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String"));}

	UAutomationBlueprintFunctionLibrary_AssertEqual_String_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRotator                Actual                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                Expected                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator"));}

	UAutomationBlueprintFunctionLibrary_AssertEqual_Rotator_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Actual                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Expected                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 What                           (CPF_Parm, CPF_ZeroConstructor)
// float                          Tolerance                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Float(float Actual, float Expected, const struct FString& What, float Tolerance, class UObject* ContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float"));}

	UAutomationBlueprintFunctionLibrary_AssertEqual_Float_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ErrorMessage                   (CPF_Parm, CPF_ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::AddExpectedError(const struct FString& ErrorMessage)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError"));}

	UAutomationBlueprintFunctionLibrary_AddExpectedError_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            Linkage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAutomationLatentActionCallback::LatentCallback(int Linkage)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback"));}

	UAutomationLatentActionCallback_LatentCallback_Params params;
	params.Linkage = Linkage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
