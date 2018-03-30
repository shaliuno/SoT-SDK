#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction
struct UActionStateMachineComponent_Server_RequestAction_Params
{
	struct FActionStateChangeRequestId                 InEpochId;                                                // (CPF_ConstParm, CPF_Parm) 0000
	struct FActionStateChangeRequestId                 InRequestId;                                              // (CPF_ConstParm, CPF_Parm) 0001
	struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo;                  // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0008
	TEnumAsByte<EActionPredictionType>                 ClientPredicted;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
};

// Function ActionStateMachine.ActionStateMachineComponent.PostNetInit
struct UActionStateMachineComponent_PostNetInit_Params
{
};

// Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged
struct UActionStateMachineComponent_OnNetOwnershipChanged_Params
{
};

// Function ActionStateMachine.ActionStateMachineComponent.Multicast_UpdateEpoch
struct UActionStateMachineComponent_Multicast_UpdateEpoch_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            InTrackId;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FActionStateChangeRequestId                 InEpochId;                                                // (CPF_ConstParm, CPF_Parm) 0001
};

// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData
struct UActionStateMachineComponent_Multicast_PushSerialisableData_Params
{
	struct FActionStateChangeRequestId                 InEpochId;                                                // (CPF_ConstParm, CPF_Parm) 0000
	struct FSerialisedActionStateInfo                  InSerialisedActionStateSerialisationStateInfo;            // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0008
};

// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest
struct UActionStateMachineComponent_Multicast_PushActionFromRequest_Params
{
	struct FActionStateChangeRequestId                 InEpochId;                                                // (CPF_ConstParm, CPF_Parm) 0000
	struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo;                  // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0008
};

// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction
struct UActionStateMachineComponent_Multicast_PushAction_Params
{
	struct FActionStateChangeRequestId                 InEpochId;                                                // (CPF_ConstParm, CPF_Parm) 0000
	struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo;                  // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0008
};

// Function ActionStateMachine.ActionStateMachineComponent.End
struct UActionStateMachineComponent_End_Params
{
};

// Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine
struct UActionStateMachineComponent_Client_ResetStateMachine_Params
{
	struct FResetStateMachineRpc                       Rpc;                                                      // (CPF_ConstParm, CPF_Parm) 0000
};

// Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction
struct UActionStateMachineComponent_Client_CorrectAction_Params
{
	struct FActionStateChangeRequestId                 InEpochId;                                                // (CPF_ConstParm, CPF_Parm) 0000
	struct FActionStateChangeRequestId                 InRequestId;                                              // (CPF_ConstParm, CPF_Parm) 0001
	struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo;                  // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0008
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId
struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPassesExceptForId_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	class UClass*                                      StateId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses
struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPasses_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails
struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysFails_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate
struct UActionStateMachineComponentTestFunctions_SetTestStateFactoryChangeToNullOnUpdate_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory
struct UActionStateMachineComponentTestFunctions_SetTestStateFactory_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory
struct UActionStateMachineComponentTestFunctions_SetCustomClientValidationTestStateFactory_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	class UCustomClientValidityCheckCallback*          InCallback;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack
struct UActionStateMachineComponentTestFunctions_RequestUnpredictedTestActionStateWithIdOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      ClientStateId;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	class UClass*                                      ServerStateId;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack
struct UActionStateMachineComponentTestFunctions_RequestTestActionStateWithIdOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      StateId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack
struct UActionStateMachineComponentTestFunctions_RequestNullActionStateOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0009
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack
struct UActionStateMachineComponentTestFunctions_PushTestActionStateSerialisableDataOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      StateId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	int                                                DataValue;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack
struct UActionStateMachineComponentTestFunctions_IsActionStateTypeActiveOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      StateId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack
struct UActionStateMachineComponentTestFunctions_GetTypeOfActionStateActiveOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack
struct UActionStateMachineComponentTestFunctions_GetTestActionStateSerialisableDataOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FTestActionStateSerialisableData            Data;                                                     // (CPF_Parm, CPF_OutParm) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0048
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback
struct UActionStateMachineComponentTestFunctions_CreateCustomClientValidityCheckCallback_Params
{
	class UCustomClientValidityCheckCallback*          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority
struct UActionStatePriorityTableUtility_GetPriority_Params
{
	struct FActionStatePriorityTable                   PriorityTable;                                            // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UClass*                                      InStateA;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00A0
	class UClass*                                      InStateB;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00A8
	TEnumAsByte<EActionStatePriority>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 00B0
};

// Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable
struct UActionStatePriorityTableUtility_CreatePriorityTable_Params
{
	class UActionStatePriorityTableData*               Data;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FActionStatePriorityTable                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid
struct USerialisedActionStateConstructionInfoTestFunctions_IsValid_Params
{
	struct FSerialisedActionStateInfo                  TestStruct;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner
struct USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfoWithInner_Params
{
	struct FSerialisedActionStateInfo                  TestStruct;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo
struct USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfo_Params
{
	struct FSerialisedActionStateInfo                  TestStruct;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner
struct USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfoWithInner_Params
{
	struct FSerialisedActionStateInfo                  TestStruct;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FTestActionStateConstructionInfoWithInner   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0030
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo
struct USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfo_Params
{
	struct FSerialisedActionStateInfo                  TestStruct;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FTestActionStateConstructionInfo            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0030
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData
struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestSerialisableData_Params
{
	class UClass*                                      Id;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                IntProp;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FSerialisedActionStateInfo                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0010
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner
struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfoWithInner_Params
{
	class UClass*                                      Id;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              FloatProp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               BoolProp;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FString                                     StringProp;                                               // (CPF_Parm, CPF_ZeroConstructor) 0010
	struct FSerialisedActionStateInfo                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0020
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo
struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfo_Params
{
	class UClass*                                      Id;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                IntProp;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FSerialisedActionStateInfo                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0010
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
