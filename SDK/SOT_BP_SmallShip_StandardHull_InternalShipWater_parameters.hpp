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

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane
struct ABP_SmallShip_StandardHull_InternalShipWater_C_GetLineIntersectionFromPlane_Params
{
	struct FVector                                     LineStart;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     LineEnd;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	bool                                               Intersect;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FVector                                     IntersectionPoint;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetWaterLevel
struct ABP_SmallShip_StandardHull_InternalShipWater_C_GetWaterLevel_Params
{
	float                                              WaterLevel;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane
struct ABP_SmallShip_StandardHull_InternalShipWater_C_GetDistanceFromPlane_Params
{
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Distance;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.UserConstructionScript
struct ABP_SmallShip_StandardHull_InternalShipWater_C_UserConstructionScript_Params
{
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.AddWater
struct ABP_SmallShip_StandardHull_InternalShipWater_C_AddWater_Params
{
	float                                              Water_Amount;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay
struct ABP_SmallShip_StandardHull_InternalShipWater_C_ReceiveBeginPlay_Params
{
};

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater
struct ABP_SmallShip_StandardHull_InternalShipWater_C_ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
