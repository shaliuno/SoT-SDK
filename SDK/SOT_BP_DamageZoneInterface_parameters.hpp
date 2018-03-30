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

// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.GetNumExternalHits
struct UBP_DamageZoneInterface_C_GetNumExternalHits_Params
{
	int                                                NumExternalHits;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.ClearDecalFlags
struct UBP_DamageZoneInterface_C_ClearDecalFlags_Params
{
};

// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.AddExternalHit
struct UBP_DamageZoneInterface_C_AddExternalHit_Params
{
	struct FHullDamageHit                              Hit_Data;                                                 // (CPF_Parm) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
