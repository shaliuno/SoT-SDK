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

// Function bp_cooker_01_a.bp_cooker_01_a_C.UserConstructionScript
struct Abp_cooker_01_a_C_UserConstructionScript_Params
{
};

// Function bp_cooker_01_a.bp_cooker_01_a_C.ReceiveBeginPlay
struct Abp_cooker_01_a_C_ReceiveBeginPlay_Params
{
};

// Function bp_cooker_01_a.bp_cooker_01_a_C.ReceiveTick
struct Abp_cooker_01_a_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function bp_cooker_01_a.bp_cooker_01_a_C.ExecuteUbergraph_bp_cooker_01_a
struct Abp_cooker_01_a_C_ExecuteUbergraph_bp_cooker_01_a_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
