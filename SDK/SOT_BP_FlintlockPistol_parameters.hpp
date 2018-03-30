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

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.SetScopeEffectOn
struct ABP_FlintlockPistol_C_SetScopeEffectOn_Params
{
	bool                                               IsOn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.determine sfx relationship
struct ABP_FlintlockPistol_C_determine_sfx_relationship_Params
{
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.DoFireEffect
struct ABP_FlintlockPistol_C_DoFireEffect_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.UserConstructionScript
struct ABP_FlintlockPistol_C_UserConstructionScript_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.OnWeaponFired
struct ABP_FlintlockPistol_C_OnWeaponFired_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOn
struct ABP_FlintlockPistol_C_RadialBlurOn_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOff
struct ABP_FlintlockPistol_C_RadialBlurOff_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.ExecuteUbergraph_BP_FlintlockPistol
struct ABP_FlintlockPistol_C_ExecuteUbergraph_BP_FlintlockPistol_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
