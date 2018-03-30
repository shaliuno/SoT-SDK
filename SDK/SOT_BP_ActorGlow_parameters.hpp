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

// Function BP_ActorGlow.BP_ActorGlow_C.StartGlowEffect
struct ABP_ActorGlow_C_StartGlowEffect_Params
{
};

// Function BP_ActorGlow.BP_ActorGlow_C.StartReaction
struct ABP_ActorGlow_C_StartReaction_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function BP_ActorGlow.BP_ActorGlow_C.StopReaction
struct ABP_ActorGlow_C_StopReaction_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function BP_ActorGlow.BP_ActorGlow_C.CollectDecalMaterials
struct ABP_ActorGlow_C_CollectDecalMaterials_Params
{
};

// Function BP_ActorGlow.BP_ActorGlow_C.UserConstructionScript
struct ABP_ActorGlow_C_UserConstructionScript_Params
{
};

// Function BP_ActorGlow.BP_ActorGlow_C.ReceiveBeginPlay
struct ABP_ActorGlow_C_ReceiveBeginPlay_Params
{
};

// Function BP_ActorGlow.BP_ActorGlow_C.ExecuteUbergraph_BP_ActorGlow
struct ABP_ActorGlow_C_ExecuteUbergraph_BP_ActorGlow_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
