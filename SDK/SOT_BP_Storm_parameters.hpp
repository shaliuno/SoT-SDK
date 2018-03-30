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

// Function BP_Storm.BP_Storm_C.UserConstructionScript
struct ABP_Storm_C_UserConstructionScript_Params
{
};

// Function BP_Storm.BP_Storm_C.ReceiveBeginPlay
struct ABP_Storm_C_ReceiveBeginPlay_Params
{
};

// Function BP_Storm.BP_Storm_C.ReceiveTick
struct ABP_Storm_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Storm.BP_Storm_C.ExecuteUbergraph_BP_Storm
struct ABP_Storm_C_ExecuteUbergraph_BP_Storm_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
