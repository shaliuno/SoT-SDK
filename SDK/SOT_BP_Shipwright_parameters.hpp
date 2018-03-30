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

// Function BP_Shipwright.BP_Shipwright_C.UserConstructionScript
struct ABP_Shipwright_C_UserConstructionScript_Params
{
};

// Function BP_Shipwright.BP_Shipwright_C.ReceiveBeginPlay
struct ABP_Shipwright_C_ReceiveBeginPlay_Params
{
};

// Function BP_Shipwright.BP_Shipwright_C.ReceiveEndPlay
struct ABP_Shipwright_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Shipwright.BP_Shipwright_C.ExecuteUbergraph_BP_Shipwright
struct ABP_Shipwright_C_ExecuteUbergraph_BP_Shipwright_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
