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

// Function BP_LightingZone.BP_LightingZone_C.Update Lighting Zone
struct ABP_LightingZone_C_Update_Lighting_Zone_Params
{
};

// Function BP_LightingZone.BP_LightingZone_C.UserConstructionScript
struct ABP_LightingZone_C_UserConstructionScript_Params
{
};

// Function BP_LightingZone.BP_LightingZone_C.ReceiveBeginPlay
struct ABP_LightingZone_C_ReceiveBeginPlay_Params
{
};

// Function BP_LightingZone.BP_LightingZone_C.ExecuteUbergraph_BP_LightingZone
struct ABP_LightingZone_C_ExecuteUbergraph_BP_LightingZone_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
