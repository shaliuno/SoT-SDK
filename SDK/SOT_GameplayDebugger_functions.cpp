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

// Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// uint32_t                       InMessage                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// uint32_t                       DataView                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayDebuggingComponent::ServerReplicateData(uint32_t InMessage, uint32_t DataView)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData"));}

	UGameplayDebuggingComponent_ServerReplicateData_Params params;
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameplayDebuggingComponent::ServerDiscardNavmeshData()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData"));}

	UGameplayDebuggingComponent_ServerDiscardNavmeshData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector_NetQuantize10   TargetLocation                 (CPF_Parm)

void UGameplayDebuggingComponent::ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData"));}

	UGameplayDebuggingComponent_ServerCollectNavmeshData_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameplayDebuggingComponent::OnRep_UpdateNavmesh()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh"));}

	UGameplayDebuggingComponent_OnRep_UpdateNavmesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameplayDebuggingComponent::OnRep_UpdateEQS()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS"));}

	UGameplayDebuggingComponent_OnRep_UpdateEQS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameplayDebuggingComponent::OnRep_UpdateBlackboard()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard"));}

	UGameplayDebuggingComponent_OnRep_UpdateBlackboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameplayDebuggingComponent::OnRep_PathCorridorData()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData"));}

	UGameplayDebuggingComponent_OnRep_PathCorridorData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameplayDebuggingComponent::OnCycleDetailsView()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView"));}

	UGameplayDebuggingComponent_OnCycleDetailsView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayDebuggingComponent::ClientEnableTargetSelection(bool bEnable)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection"));}

	UGameplayDebuggingComponent_ClientEnableTargetSelection_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  InActor                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayDebuggingReplicator::ServerSetActorToDebug(class AActor* InActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug"));}

	AGameplayDebuggingReplicator_ServerSetActorToDebug_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// uint32_t                       InMessage                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// uint32_t                       DataView                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayDebuggingReplicator::ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage"));}

	AGameplayDebuggingReplicator_ServerReplicateMessage_Params params;
	params.Actor = Actor;
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AGameplayDebuggingReplicator::OnRep_AutoActivate()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate"));}

	AGameplayDebuggingReplicator_OnRep_AutoActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// uint32_t                       InMessage                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// uint32_t                       DataView                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayDebuggingReplicator::ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage"));}

	AGameplayDebuggingReplicator_ClientReplicateMessage_Params params;
	params.Actor = Actor;
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       Context                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayDebuggingReplicator::ClientEnableTargetSelection(bool bEnable, class APlayerController* Context)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection"));}

	AGameplayDebuggingReplicator_ClientEnableTargetSelection_Params params;
	params.bEnable = bEnable;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AGameplayDebuggingReplicator::ClientAutoActivate()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate"));}

	AGameplayDebuggingReplicator_ClientAutoActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
