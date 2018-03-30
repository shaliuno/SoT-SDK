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

// Function BP_AudioCoast.BP_AudioCoast_C.UserConstructionScript
struct ABP_AudioCoast_C_UserConstructionScript_Params
{
};

// Function BP_AudioCoast.BP_AudioCoast_C.ReceiveBeginPlay
struct ABP_AudioCoast_C_ReceiveBeginPlay_Params
{
};

// Function BP_AudioCoast.BP_AudioCoast_C.ReceiveEndPlay
struct ABP_AudioCoast_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_AudioCoast.BP_AudioCoast_C.ExecuteUbergraph_BP_AudioCoast
struct ABP_AudioCoast_C_ExecuteUbergraph_BP_AudioCoast_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
