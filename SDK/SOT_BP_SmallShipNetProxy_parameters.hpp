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

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Value on All Materials
struct ABP_SmallShipNetProxy_C_Set_Value_on_All_Materials_Params
{
	struct FName                                       Variable_Name;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Apply Bits to Lanterns
struct ABP_SmallShipNetProxy_C_Apply_Bits_to_Lanterns_Params
{
	unsigned char                                      byte;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Create Dynamic Materials
struct ABP_SmallShipNetProxy_C_Create_Dynamic_Materials_Params
{
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.UserConstructionScript
struct ABP_SmallShipNetProxy_C_UserConstructionScript_Params
{
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ReceiveBeginPlay
struct ABP_SmallShipNetProxy_C_ReceiveBeginPlay_Params
{
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnLanternStateChanged
struct ABP_SmallShipNetProxy_C_OnLanternStateChanged_Params
{
	unsigned char*                                     LanternStateBits;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ExecuteUbergraph_BP_SmallShipNetProxy
struct ABP_SmallShipNetProxy_C_ExecuteUbergraph_BP_SmallShipNetProxy_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
