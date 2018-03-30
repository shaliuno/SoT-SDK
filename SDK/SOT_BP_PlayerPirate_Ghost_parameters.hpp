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

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetAllMaterialParents
struct ABP_PlayerPirate_Ghost_C_GetAllMaterialParents_Params
{
	class UMaterialInstance*                           MaterialInstance;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class UMaterialInstance*>                   Parents;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0008
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CheckBaseMaterial
struct ABP_PlayerPirate_Ghost_C_CheckBaseMaterial_Params
{
	class UMaterialInstance*                           MaterialInstance;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UMaterial*                                   MaterialToCheck;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Set Up Ghost Materials
struct ABP_PlayerPirate_Ghost_C_Set_Up_Ghost_Materials_Params
{
	class USkeletalMeshComponent*                      Input_Mesh;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Ghost_Fade_Parameter;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               EnableDither;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetMouthPosition
struct ABP_PlayerPirate_Ghost_C_GetMouthPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.UserConstructionScript
struct ABP_PlayerPirate_Ghost_C_UserConstructionScript_Params
{
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Update Athena Character
struct ABP_PlayerPirate_Ghost_C_Update_Athena_Character_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanRotationSpeed
struct ABP_PlayerPirate_Ghost_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.DockingInterface
struct ABP_PlayerPirate_Ghost_C_DockingInterface_Params
{
	struct FBP_Docking                                 Docking;                                                  // (CPF_Parm) 0000
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanForce
struct ABP_PlayerPirate_Ghost_C_CapstanForce_Params
{
	float                                              IndividualForce;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTransform                                  LH_IK;                                                    // (CPF_Parm, CPF_IsPlainOldData) 0010
	struct FTransform                                  RH_IK;                                                    // (CPF_Parm, CPF_IsPlainOldData) 0040
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0070
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Transform
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTransform                                  TransformUpdate;                                          // (CPF_Parm, CPF_IsPlainOldData) 0010
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Blend Timing
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              BlendIn;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              BlendOut;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Strength
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              LocationStrength;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              RotationStrength;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Active
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Active;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
	TEnumAsByte<ELimbIKSpace>                          CoordinateSpace;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0002
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Stretch
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              SpineStretch;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              LegStretch;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ReceiveBeginPlay
struct ABP_PlayerPirate_Ghost_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.OnMeshSet
struct ABP_PlayerPirate_Ghost_C_OnMeshSet_Params
{
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ExecuteUbergraph_BP_PlayerPirate_Ghost
struct ABP_PlayerPirate_Ghost_C_ExecuteUbergraph_BP_PlayerPirate_Ghost_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
