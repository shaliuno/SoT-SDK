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

// Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStarted
struct UBP_Anim_Concertina_C_OnUseStarted_Params
{
	class UClass**                                     InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWieldableItemActionVisuals*                ActionVisuals;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStopped
struct UBP_Anim_Concertina_C_OnUseStopped_Params
{
	class UClass**                                     InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Anim_Concertina.BP_Anim_Concertina_C.ExecuteUbergraph_BP_Anim_Concertina
struct UBP_Anim_Concertina_C_ExecuteUbergraph_BP_Anim_Concertina_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
