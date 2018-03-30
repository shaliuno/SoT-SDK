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

// Function BP_Placement_Garden.BP_Placement_Garden_C.Set Garden Parameters
struct ABP_Placement_Garden_C_Set_Garden_Parameters_Params
{
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Int;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	bool                                               Instances_Created;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.Create Garden
struct ABP_Placement_Garden_C_Create_Garden_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.Initialise Instances
struct ABP_Placement_Garden_C_Initialise_Instances_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.UserConstructionScript
struct ABP_Placement_Garden_C_UserConstructionScript_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.Force Create Garden
struct ABP_Placement_Garden_C_Force_Create_Garden_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.ExecuteUbergraph_BP_Placement_Garden
struct ABP_Placement_Garden_C_ExecuteUbergraph_BP_Placement_Garden_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
