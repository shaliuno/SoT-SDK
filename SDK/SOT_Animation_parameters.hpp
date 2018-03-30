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

// Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct
struct UAnimationDataFunctionLib_UnwrapAnimDataEntryStruct_Params
{
	struct FAnimDataEntryStructWrapper                 Wrapper;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UScriptStruct*                               DestinationStruct;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FGenericStruct                              Value;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 001C
};

// Function Animation.AnimationDataFunctionLib.MakeAnimationData
struct UAnimationDataFunctionLib_MakeAnimationData_Params
{
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAnimationData*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper
struct UAnimationDataFunctionLib_GetAnimDataEntryStructAsStructWrapper_Params
{
	class UAnimationData*                              AnimationDataObject;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UScriptStruct*                               TheClass;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FAnimDataEntryStructWrapper                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0010
};

// Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs
struct UAnimationDataFunctionLib_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs_Params
{
	class UClass*                                      InClass;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Animation.AnimationDataStoreAsset.LookupAnimationData
struct UAnimationDataStoreAsset_LookupAnimationData_Params
{
	class UClass*                                      AnimDataId;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAnimationData*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Animation.AnimationDataStoreInterface.GetAnimationDataForId
struct UAnimationDataStoreInterface_GetAnimationDataForId_Params
{
	class UClass*                                      AnimDataId;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAnimationData*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Animation.DockableInterface.HandleDestroy
struct UDockableInterface_HandleDestroy_Params
{
};

// Function Animation.DockableInterface.GetDockableInfo
struct UDockableInterface_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Animation.DockerBlueprintFunctions.UpdateDock
struct UDockerBlueprintFunctions_UpdateDock_Params
{
	struct FDocker                                     Docker;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              DeltaTime;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
};

// Function Animation.DockerBlueprintFunctions.StartDockingWithActor
struct UDockerBlueprintFunctions_StartDockingWithActor_Params
{
	struct FDocker                                     Docker;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class AActor*                                      Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	class AActor*                                      Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0048
	float                                              DockDuration;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
};

// Function Animation.DockerBlueprintFunctions.IsFullyDocked
struct UDockerBlueprintFunctions_IsFullyDocked_Params
{
	struct FDocker                                     Docker;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Animation.DockerBlueprintFunctions.IsDocking
struct UDockerBlueprintFunctions_IsDocking_Params
{
	struct FDocker                                     Docker;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Animation.DockerBlueprintFunctions.GetTargetLocalOffset
struct UDockerBlueprintFunctions_GetTargetLocalOffset_Params
{
	struct FDocker                                     Docker;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Animation.DockerBlueprintFunctions.EndDock
struct UDockerBlueprintFunctions_EndDock_Params
{
	struct FDocker                                     Docker;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Animation.LimbIKFunctionLibrary.SetTranslationStrength
struct ULimbIKFunctionLibrary_SetTranslationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              InRotationStrength;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.SetTransform
struct ULimbIKFunctionLibrary_SetTransform_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FTransform                                  InTransform;                                              // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.SetRotationStrength
struct ULimbIKFunctionLibrary_SetRotationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              InRotationStrength;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.SetParentBone
struct ULimbIKFunctionLibrary_SetParentBone_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FName                                       Bone;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.SetIKSpace
struct ULimbIKFunctionLibrary_SetIKSpace_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<ELimbIKSpace>                          IKSpace;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.SetEnabled
struct ULimbIKFunctionLibrary_SetEnabled_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               Enabled;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	TEnumAsByte<ELimbIKSpace>                          IKSpace;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0061
	struct FName                                       ParentBone;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0064
};

// Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed
struct ULimbIKFunctionLibrary_SetBlendOutSpeed_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              BlendOutSpeed;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed
struct ULimbIKFunctionLibrary_SetBlendInSpeed_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              BlendInSpeed;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.SetAnimationOverride
struct ULimbIKFunctionLibrary_SetAnimationOverride_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               AnimationOverride;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.SetAlphaTarget
struct ULimbIKFunctionLibrary_SetAlphaTarget_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              AlphaTarget;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.IsEnabled
struct ULimbIKFunctionLibrary_IsEnabled_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.GetTranslationStrength
struct ULimbIKFunctionLibrary_GetTranslationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.GetTransform
struct ULimbIKFunctionLibrary_GetTransform_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.GetRotationStrength
struct ULimbIKFunctionLibrary_GetRotationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.GetParentBone
struct ULimbIKFunctionLibrary_GetParentBone_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FName                                       ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.GetIKSpace
struct ULimbIKFunctionLibrary_GetIKSpace_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<ELimbIKSpace>                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha
struct ULimbIKFunctionLibrary_GetCurrentAlpha_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.GetAnimationOverride
struct ULimbIKFunctionLibrary_GetAnimationOverride_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.GetAlphaTarget
struct ULimbIKFunctionLibrary_GetAlphaTarget_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0060
};

// Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha
struct ULimbIKFunctionLibrary_ConvertBoolToAlpha_Params
{
	bool                                               InBool;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation
struct ULocomotionFunctionLib_UpdateControllerSpineRotation_Params
{
	struct FRotator                                    CharacterRotation;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              AngleSpeedMax;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              AngleSpeedMin;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed
struct ULocomotionFunctionLib_UpdateCharacterSpeed_Params
{
	struct FVector                                     Velocity;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              CurrentMaxWalkSpeed;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              WantedMovementSpeed;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              BaseMaxWalkSpeed;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              SpeedBlendValue;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               IsSwimming;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	struct FActorVelocityData                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0020
};

// Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw
struct ULocomotionFunctionLib_UpdateCalculateRateAndCurrentYaw_Params
{
	struct FRotator                                    CharacterRotation;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              LargeRate;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              CurrentCharacterYaw;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
	float                                              DeltaSeconds;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Animation.TurningFunctionLib.TurningUpdate
struct UTurningFunctionLib_TurningUpdate_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               CharacterMoving;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	bool                                               DeadZone;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0005
	float                                              TurnRate;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              DelayedCounter;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
	float                                              CounterMax;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               TurningLeft;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0015
};

// Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState
struct UWaitForAnimationStateEntryProxy_OnEnteredState_Params
{
	struct FName                                       path;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated
struct UWaitForAnimationStateEntryProxy_OnAnimationUpdated_Params
{
};

// Function Animation.WaitForAnimationStateEntryProxy.CreateProxy
struct UWaitForAnimationStateEntryProxy_CreateProxy_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FName                                       TargetPath;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	class UWaitForAnimationStateEntryProxy*            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Animation.WaitForAnimationStateExitProxy.OnExitState
struct UWaitForAnimationStateExitProxy_OnExitState_Params
{
	struct FName                                       path;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated
struct UWaitForAnimationStateExitProxy_OnAnimationUpdated_Params
{
};

// Function Animation.WaitForAnimationStateExitProxy.CreateProxy
struct UWaitForAnimationStateExitProxy_CreateProxy_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FName                                       TargetPath;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	class UWaitForAnimationStateExitProxy*             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
