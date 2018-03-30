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

// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Stretch
struct UBP_CharacterInterface_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              SpineStretch;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              LegStretch;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Active
struct UBP_CharacterInterface_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Active;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
	TEnumAsByte<ELimbIKSpace>                          CoordinateSpace;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0002
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Strength
struct UBP_CharacterInterface_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              LocationStrength;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              RotationStrength;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Blend Timing
struct UBP_CharacterInterface_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              BlendIn;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              BlendOut;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Transform
struct UBP_CharacterInterface_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName>                           LimbId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTransform                                  TransformUpdate;                                          // (CPF_Parm, CPF_IsPlainOldData) 0010
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanForce
struct UBP_CharacterInterface_C_CapstanForce_Params
{
	float                                              IndividualForce;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTransform                                  LH_IK;                                                    // (CPF_Parm, CPF_IsPlainOldData) 0010
	struct FTransform                                  RH_IK;                                                    // (CPF_Parm, CPF_IsPlainOldData) 0040
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0070
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.DockingInterface
struct UBP_CharacterInterface_C_DockingInterface_Params
{
	struct FBP_Docking                                 Docking;                                                  // (CPF_Parm) 0000
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanRotationSpeed
struct UBP_CharacterInterface_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_CharacterInterface.BP_CharacterInterface_C.Update Athena Character
struct UBP_CharacterInterface_C_Update_Athena_Character_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
