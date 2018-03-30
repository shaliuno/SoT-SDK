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

// Function BP_Spyglass.BP_Spyglass_C.UserConstructionScript
struct ABP_Spyglass_C_UserConstructionScript_Params
{
};

// Function BP_Spyglass.BP_Spyglass_C.ReceiveTick
struct ABP_Spyglass_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Spyglass.BP_Spyglass_C.ScopeOn
struct ABP_Spyglass_C_ScopeOn_Params
{
};

// Function BP_Spyglass.BP_Spyglass_C.ScopeOff
struct ABP_Spyglass_C_ScopeOff_Params
{
};

// Function BP_Spyglass.BP_Spyglass_C.GlintOn
struct ABP_Spyglass_C_GlintOn_Params
{
};

// Function BP_Spyglass.BP_Spyglass_C.GlintOff
struct ABP_Spyglass_C_GlintOff_Params
{
};

// Function BP_Spyglass.BP_Spyglass_C.ForceScopeOff
struct ABP_Spyglass_C_ForceScopeOff_Params
{
};

// Function BP_Spyglass.BP_Spyglass_C.ExecuteUbergraph_BP_Spyglass
struct ABP_Spyglass_C_ExecuteUbergraph_BP_Spyglass_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
