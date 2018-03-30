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

// Function BP_large_mast_main.BP_large_mast_main_C.UserConstructionScript
struct ABP_large_mast_main_C_UserConstructionScript_Params
{
};

// Function BP_large_mast_main.BP_large_mast_main_C.OnMastDescLoaded
struct ABP_large_mast_main_C_OnMastDescLoaded_Params
{
	class UMastDescAsset**                             MastDesc;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_large_mast_main.BP_large_mast_main_C.ExecuteUbergraph_BP_large_mast_main
struct ABP_large_mast_main_C_ExecuteUbergraph_BP_large_mast_main_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
