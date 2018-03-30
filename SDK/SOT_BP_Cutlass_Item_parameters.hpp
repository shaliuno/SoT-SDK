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

// Function BP_Cutlass_Item.BP_Cutlass_Item_C.DoBlockEffect
struct ABP_Cutlass_Item_C_DoBlockEffect_Params
{
};

// Function BP_Cutlass_Item.BP_Cutlass_Item_C.UserConstructionScript
struct ABP_Cutlass_Item_C_UserConstructionScript_Params
{
};

// Function BP_Cutlass_Item.BP_Cutlass_Item_C.OnBlockedAttack
struct ABP_Cutlass_Item_C_OnBlockedAttack_Params
{
	struct FEventBlocked*                              Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function BP_Cutlass_Item.BP_Cutlass_Item_C.ExecuteUbergraph_BP_Cutlass_Item
struct ABP_Cutlass_Item_C_ExecuteUbergraph_BP_Cutlass_Item_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
