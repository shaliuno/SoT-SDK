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

// Function BP_SailAnim.BP_SailAnim_C.Set Billow Animation Rate
struct UBP_SailAnim_C_Set_Billow_Animation_Rate_Params
{
};

// Function BP_SailAnim.BP_SailAnim_C.InitialiseSail
struct UBP_SailAnim_C_InitialiseSail_Params
{
	float*                                             PlayRateMultiplier;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool*                                              MainSail;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function BP_SailAnim.BP_SailAnim_C.ExecuteUbergraph_BP_SailAnim
struct UBP_SailAnim_C_ExecuteUbergraph_BP_SailAnim_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
