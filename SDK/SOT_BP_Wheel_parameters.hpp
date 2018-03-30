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

// Function BP_Wheel.BP_Wheel_C.GetDockableInfo
struct ABP_Wheel_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function BP_Wheel.BP_Wheel_C.GetClosestInteractionPoint
struct ABP_Wheel_C_GetClosestInteractionPoint_Params
{
	struct FVector*                                    ReferencePosition;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              OutInteractionPointRadius;                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function BP_Wheel.BP_Wheel_C.GetWheelMesh
struct ABP_Wheel_C_GetWheelMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function BP_Wheel.BP_Wheel_C.UserConstructionScript
struct ABP_Wheel_C_UserConstructionScript_Params
{
};

// Function BP_Wheel.BP_Wheel_C.Receive Animation State
struct ABP_Wheel_C_Receive_Animation_State_Params
{
	struct FRotator                                    WheelRotation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              WheelAnimationTime;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	TEnumAsByte<EWheel>                                EWheel;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              WheelRate;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function BP_Wheel.BP_Wheel_C.StickInput
struct ABP_Wheel_C_StickInput_Params
{
	float                                              StickInputX;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Wheel.BP_Wheel_C.Update Athena Character
struct ABP_Wheel_C_Update_Athena_Character_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Wheel.BP_Wheel_C.CapstanRotationSpeed
struct ABP_Wheel_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Wheel.BP_Wheel_C.DockingInterface
struct ABP_Wheel_C_DockingInterface_Params
{
	struct FBP_Docking                                 Docking;                                                  // (CPF_Parm) 0000
};

// Function BP_Wheel.BP_Wheel_C.CapstanForce
struct ABP_Wheel_C_CapstanForce_Params
{
	float                                              IndividualForce;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTransform                                  LH_IK;                                                    // (CPF_Parm, CPF_IsPlainOldData) 0010
	struct FTransform                                  RH_IK;                                                    // (CPF_Parm, CPF_IsPlainOldData) 0040
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0070
};

// Function BP_Wheel.BP_Wheel_C.IK Limb Update Transform
struct ABP_Wheel_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTransform                                  TransformUpdate;                                          // (CPF_Parm, CPF_IsPlainOldData) 0010
};

// Function BP_Wheel.BP_Wheel_C.IK Limb Blend Timing
struct ABP_Wheel_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              BlendIn;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              BlendOut;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_Wheel.BP_Wheel_C.IK Limb Update Strength
struct ABP_Wheel_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              LocationStrength;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              RotationStrength;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_Wheel.BP_Wheel_C.IK Limb Active
struct ABP_Wheel_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Active;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
	TEnumAsByte<ELimbIKSpace>                          CoordinateSpace;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0002
};

// Function BP_Wheel.BP_Wheel_C.IK Limb Stretch
struct ABP_Wheel_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              SpineStretch;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              LegStretch;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_Wheel.BP_Wheel_C.RequestStateChange
struct ABP_Wheel_C_RequestStateChange_Params
{
	class AActor**                                     Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Wheel.BP_Wheel_C.OnWheelDescLoaded
struct ABP_Wheel_C_OnWheelDescLoaded_Params
{
	class UWheelDescAsset**                            WheelDesc;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Wheel.BP_Wheel_C.ExecuteUbergraph_BP_Wheel
struct ABP_Wheel_C_ExecuteUbergraph_BP_Wheel_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
