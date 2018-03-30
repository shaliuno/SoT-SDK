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

// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.UserConstructionScript
struct ABP_Tavern_B_AudioLayer_C_UserConstructionScript_Params
{
};

// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveBeginPlay
struct ABP_Tavern_B_AudioLayer_C_ReceiveBeginPlay_Params
{
};

// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveEndPlay
struct ABP_Tavern_B_AudioLayer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ExecuteUbergraph_BP_Tavern_B_AudioLayer
struct ABP_Tavern_B_AudioLayer_C_ExecuteUbergraph_BP_Tavern_B_AudioLayer_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
