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

// Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData
struct UGameplayDebuggingComponent_ServerReplicateData_Params
{
	uint32_t                                           InMessage;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	uint32_t                                           DataView;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
struct UGameplayDebuggingComponent_ServerDiscardNavmeshData_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
struct UGameplayDebuggingComponent_ServerCollectNavmeshData_Params
{
	struct FVector_NetQuantize10                       TargetLocation;                                           // (CPF_Parm) 0000
};

// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
struct UGameplayDebuggingComponent_OnRep_UpdateNavmesh_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
struct UGameplayDebuggingComponent_OnRep_UpdateEQS_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
struct UGameplayDebuggingComponent_OnRep_UpdateBlackboard_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
struct UGameplayDebuggingComponent_OnRep_PathCorridorData_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
struct UGameplayDebuggingComponent_OnCycleDetailsView_Params
{
};

// Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
struct UGameplayDebuggingComponent_ClientEnableTargetSelection_Params
{
	bool                                               bEnable;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
struct AGameplayDebuggingReplicator_ServerSetActorToDebug_Params
{
	class AActor*                                      InActor;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
struct AGameplayDebuggingReplicator_ServerReplicateMessage_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	uint32_t                                           InMessage;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	uint32_t                                           DataView;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate
struct AGameplayDebuggingReplicator_OnRep_AutoActivate_Params
{
};

// Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
struct AGameplayDebuggingReplicator_ClientReplicateMessage_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	uint32_t                                           InMessage;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	uint32_t                                           DataView;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
struct AGameplayDebuggingReplicator_ClientEnableTargetSelection_Params
{
	bool                                               bEnable;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APlayerController*                           Context;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
struct AGameplayDebuggingReplicator_ClientAutoActivate_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
