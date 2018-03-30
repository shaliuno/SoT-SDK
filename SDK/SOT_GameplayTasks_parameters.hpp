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

// Function GameplayTasks.GameplayTask.ReadyForActivation
struct UGameplayTask_ReadyForActivation_Params
{
};

// DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
struct UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Params
{
};

// Function GameplayTasks.GameplayTask.EndTask
struct UGameplayTask_EndTask_Params
{
};

// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
struct UGameplayTask_SpawnActor_SpawnActor_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FRotator                                    SpawnRotation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	bool                                               bSpawnOnlyOnAuthority;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	class UGameplayTask_SpawnActor*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0038
};

// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
struct UGameplayTask_SpawnActor_FinishSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      SpawnedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
struct UGameplayTask_SpawnActor_BeginSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      SpawnedActor;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
struct UGameplayTask_WaitDelay_TaskWaitDelay_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Time;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	class UGameplayTask_WaitDelay*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
struct UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Params
{
};

// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
struct UGameplayTasksComponent_OnRep_SimulatedTasks_Params
{
};

// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
struct UGameplayTasksComponent_K2_RunGameplayTask_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UGameplayTask*                               Task;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	unsigned char                                      Priority;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	TArray<class UClass*>                              AdditionalRequiredResources;                              // (CPF_Parm, CPF_ZeroConstructor) 0020
	TArray<class UClass*>                              AdditionalClaimedResources;                               // (CPF_Parm, CPF_ZeroConstructor) 0030
	TEnumAsByte<EGameplayTaskRunResult>                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
