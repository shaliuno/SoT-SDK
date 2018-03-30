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

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateComponentList
struct ABP_Placement_HeightDrop_C_CreateComponentList_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateParentBounds
struct ABP_Placement_HeightDrop_C_CreateParentBounds_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CheckMobilityState
struct ABP_Placement_HeightDrop_C_CheckMobilityState_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Get Valid Collision
struct ABP_Placement_HeightDrop_C_Get_Valid_Collision_Params
{
	TArray<struct FHitResult>                          Hit_Results;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	bool                                               Hit_Success;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	class USceneComponent*                             Current_Component;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               Return_Value;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FVector                                     Impact_Position;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	struct FVector                                     Impact_Normal;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Drop Components
struct ABP_Placement_HeightDrop_C_Drop_Components_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.UserConstructionScript
struct ABP_Placement_HeightDrop_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
