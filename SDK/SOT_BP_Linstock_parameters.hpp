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

// Function BP_Linstock.BP_Linstock_C.UserConstructionScript
struct ABP_Linstock_C_UserConstructionScript_Params
{
};

// Function BP_Linstock.BP_Linstock_C.ReceiveBeginPlay
struct ABP_Linstock_C_ReceiveBeginPlay_Params
{
};

// Function BP_Linstock.BP_Linstock_C.ExecuteUbergraph_BP_Linstock
struct ABP_Linstock_C_ExecuteUbergraph_BP_Linstock_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
