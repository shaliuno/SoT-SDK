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

// Function BP_CapstanArm.BP_CapstanArm_C.GetFrontFacingVector
struct ABP_CapstanArm_C_GetFrontFacingVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function BP_CapstanArm.BP_CapstanArm_C.DoesRequireFacingFront
struct ABP_CapstanArm_C_DoesRequireFacingFront_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function BP_CapstanArm.BP_CapstanArm_C.GetDockableInfo
struct ABP_CapstanArm_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function BP_CapstanArm.BP_CapstanArm_C.GetClosestInteractionPoint
struct ABP_CapstanArm_C_GetClosestInteractionPoint_Params
{
	struct FVector*                                    ReferencePosition;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              OutInteractionPointRadius;                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPos
struct ABP_CapstanArm_C_GetLookAtPos_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function BP_CapstanArm.BP_CapstanArm_C.UserConstructionScript
struct ABP_CapstanArm_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
