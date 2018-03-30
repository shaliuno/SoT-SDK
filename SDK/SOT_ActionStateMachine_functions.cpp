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

// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (CPF_ConstParm, CPF_Parm)
// struct FActionStateChangeRequestId InRequestId                    (CPF_ConstParm, CPF_Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// TEnumAsByte<EActionPredictionType> ClientPredicted                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UActionStateMachineComponent::Server_RequestAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, TEnumAsByte<EActionPredictionType> ClientPredicted)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction"));}

	UActionStateMachineComponent_Server_RequestAction_Params params;
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
	params.ClientPredicted = ClientPredicted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionStateMachine.ActionStateMachineComponent.PostNetInit
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UActionStateMachineComponent::PostNetInit()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.PostNetInit"));}

	UActionStateMachineComponent_PostNetInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UActionStateMachineComponent::OnNetOwnershipChanged()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged"));}

	UActionStateMachineComponent_OnNetOwnershipChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_UpdateEpoch
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EActionStateMachineTrackId> InTrackId                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FActionStateChangeRequestId InEpochId                      (CPF_ConstParm, CPF_Parm)

void UActionStateMachineComponent::Multicast_UpdateEpoch(TEnumAsByte<EActionStateMachineTrackId> InTrackId, const struct FActionStateChangeRequestId& InEpochId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Multicast_UpdateEpoch"));}

	UActionStateMachineComponent_Multicast_UpdateEpoch_Params params;
	params.InTrackId = InTrackId;
	params.InEpochId = InEpochId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (CPF_ConstParm, CPF_Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateSerialisationStateInfo (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void UActionStateMachineComponent::Multicast_PushSerialisableData(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData"));}

	UActionStateMachineComponent_Multicast_PushSerialisableData_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateSerialisationStateInfo = InSerialisedActionStateSerialisationStateInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (CPF_ConstParm, CPF_Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void UActionStateMachineComponent::Multicast_PushActionFromRequest(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest"));}

	UActionStateMachineComponent_Multicast_PushActionFromRequest_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (CPF_ConstParm, CPF_Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void UActionStateMachineComponent::Multicast_PushAction(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction"));}

	UActionStateMachineComponent_Multicast_PushAction_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionStateMachine.ActionStateMachineComponent.End
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UActionStateMachineComponent::End()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.End"));}

	UActionStateMachineComponent_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine
// (FUNC_NetRequest, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FResetStateMachineRpc   Rpc                            (CPF_ConstParm, CPF_Parm)

void UActionStateMachineComponent::Client_ResetStateMachine(const struct FResetStateMachineRpc& Rpc)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine"));}

	UActionStateMachineComponent_Client_ResetStateMachine_Params params;
	params.Rpc = Rpc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (CPF_ConstParm, CPF_Parm)
// struct FActionStateChangeRequestId InRequestId                    (CPF_ConstParm, CPF_Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void UActionStateMachineComponent::Client_CorrectAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction"));}

	UActionStateMachineComponent_Client_CorrectAction_Params params;
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId
// (FUNC_Final, FUNC_Delegate)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UClass*                  StateId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateValidatorThatAlwaysPassesExceptForId(class UActionStateMachineComponent* InComponent, class UClass* StateId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId"));}

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPassesExceptForId_Params params;
	params.InComponent = InComponent;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateValidatorThatAlwaysPasses(class UActionStateMachineComponent* InComponent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses"));}

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPasses_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateValidatorThatAlwaysFails(class UActionStateMachineComponent* InComponent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails"));}

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysFails_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateFactoryChangeToNullOnUpdate(class UActionStateMachineComponent* InComponent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate"));}

	UActionStateMachineComponentTestFunctions_SetTestStateFactoryChangeToNullOnUpdate_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateFactory(class UActionStateMachineComponent* InComponent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory"));}

	UActionStateMachineComponentTestFunctions_SetTestStateFactory_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory
// (FUNC_Final, FUNC_Delegate)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UCustomClientValidityCheckCallback* InCallback                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetCustomClientValidationTestStateFactory(class UActionStateMachineComponent* InComponent, class UCustomClientValidityCheckCallback* InCallback)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory"));}

	UActionStateMachineComponentTestFunctions_SetCustomClientValidationTestStateFactory_Params params;
	params.InComponent = InComponent;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack
// (FUNC_Final, FUNC_NetServer)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ClientStateId                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ServerStateId                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::RequestUnpredictedTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* ClientStateId, class UClass* ServerStateId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack"));}

	UActionStateMachineComponentTestFunctions_RequestUnpredictedTestActionStateWithIdOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.ClientStateId = ClientStateId;
	params.ServerStateId = ServerStateId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  StateId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::RequestTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack"));}

	UActionStateMachineComponentTestFunctions_RequestTestActionStateWithIdOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Protected)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::RequestNullActionStateOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack"));}

	UActionStateMachineComponentTestFunctions_RequestNullActionStateOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  StateId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DataValue                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UActionStateMachineComponentTestFunctions::PushTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId, int DataValue)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack"));}

	UActionStateMachineComponentTestFunctions_PushTestActionStateSerialisableDataOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;
	params.DataValue = DataValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  StateId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::IsActionStateTypeActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack"));}

	UActionStateMachineComponentTestFunctions_IsActionStateTypeActiveOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* UActionStateMachineComponentTestFunctions::GetTypeOfActionStateActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack"));}

	UActionStateMachineComponentTestFunctions_GetTypeOfActionStateActiveOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTestActionStateSerialisableData Data                           (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::GetTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, struct FTestActionStateSerialisableData* Data)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack"));}

	UActionStateMachineComponentTestFunctions_GetTestActionStateSerialisableDataOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UCustomClientValidityCheckCallback* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCustomClientValidityCheckCallback* UActionStateMachineComponentTestFunctions::CreateCustomClientValidityCheckCallback()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback"));}

	UActionStateMachineComponentTestFunctions_CreateCustomClientValidityCheckCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority
// (FUNC_Final, FUNC_NetReliable, FUNC_Delegate, FUNC_NetServer, FUNC_HasDefaults)
// Parameters:
// struct FActionStatePriorityTable PriorityTable                  (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UClass*                  InStateA                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  InStateB                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EActionStatePriority> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EActionStatePriority> UActionStatePriorityTableUtility::GetPriority(class UClass* InStateA, class UClass* InStateB, struct FActionStatePriorityTable* PriorityTable)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority"));}

	UActionStatePriorityTableUtility_GetPriority_Params params;
	params.InStateA = InStateA;
	params.InStateB = InStateB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PriorityTable != nullptr)
		*PriorityTable = params.PriorityTable;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected)
// Parameters:
// class UActionStatePriorityTableData* Data                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FActionStatePriorityTable ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActionStatePriorityTable UActionStatePriorityTableUtility::CreatePriorityTable(class UActionStatePriorityTableData* Data)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable"));}

	UActionStatePriorityTableUtility_CreatePriorityTable_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid
// (FUNC_Final, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::IsValid(const struct FSerialisedActionStateInfo& TestStruct)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid"));}

	USerialisedActionStateConstructionInfoTestFunctions_IsValid_Params params;
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner
// (FUNC_Final, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::HasTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner"));}

	USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfoWithInner_Params params;
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo
// (FUNC_Final, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::HasTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo"));}

	USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfo_Params params;
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTestActionStateConstructionInfoWithInner ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTestActionStateConstructionInfoWithInner USerialisedActionStateConstructionInfoTestFunctions::GetTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner"));}

	USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfoWithInner_Params params;
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo
// (FUNC_Net, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTestActionStateConstructionInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTestActionStateConstructionInfo USerialisedActionStateConstructionInfoTestFunctions::GetTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo"));}

	USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfo_Params params;
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData
// (FUNC_Net, FUNC_Delegate)
// Parameters:
// class UClass*                  Id                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            IntProp                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSerialisedActionStateInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::CreateTestSerialisableData(class UClass* Id, int IntProp)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData"));}

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestSerialisableData_Params params;
	params.Id = Id;
	params.IntProp = IntProp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner
// (FUNC_Net, FUNC_NetServer)
// Parameters:
// class UClass*                  Id                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FloatProp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           BoolProp                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 StringProp                     (CPF_Parm, CPF_ZeroConstructor)
// struct FSerialisedActionStateInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::CreateTestConstructionInfoWithInner(class UClass* Id, float FloatProp, bool BoolProp, const struct FString& StringProp)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner"));}

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfoWithInner_Params params;
	params.Id = Id;
	params.FloatProp = FloatProp;
	params.BoolProp = BoolProp;
	params.StringProp = StringProp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo
// (FUNC_Net, FUNC_Delegate)
// Parameters:
// class UClass*                  Id                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            IntProp                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSerialisedActionStateInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::CreateTestConstructionInfo(class UClass* Id, int IntProp)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo"));}

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfo_Params params;
	params.Id = Id;
	params.IntProp = IntProp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
