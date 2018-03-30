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

// Function BP_DamageZone.BP_DamageZone_C.GetNumExternalHits
struct ABP_DamageZone_C_GetNumExternalHits_Params
{
	int                                                NumExternalHits;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_DamageZone.BP_DamageZone_C.Initialise
struct ABP_DamageZone_C_Initialise_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Update External Hits
struct ABP_DamageZone_C_Update_External_Hits_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.OnRep_Rep_ExternalHitList
struct ABP_DamageZone_C_OnRep_Rep_ExternalHitList_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Clear Decal Flags
struct ABP_DamageZone_C_Clear_Decal_Flags_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Add Deferred Decal
struct ABP_DamageZone_C_Add_Deferred_Decal_Params
{
	class UDecalComponent*                             Decal;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_DamageZone.BP_DamageZone_C.KillDeferredDecal
struct ABP_DamageZone_C_KillDeferredDecal_Params
{
	class UDecalComponent*                             Decal;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function BP_DamageZone.BP_DamageZone_C.RemoveDeferredDecals
struct ABP_DamageZone_C_RemoveDeferredDecals_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Set Repair Visibility
struct ABP_DamageZone_C_Set_Repair_Visibility_Params
{
	bool                                               Visible;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_DamageZone.BP_DamageZone_C.Add External Hit
struct ABP_DamageZone_C_Add_External_Hit_Params
{
	struct FHullDamageHit                              HitData;                                                  // (CPF_Parm) 0000
};

// Function BP_DamageZone.BP_DamageZone_C.Show Damage Level
struct ABP_DamageZone_C_Show_Damage_Level_Params
{
	int                                                DamageLevel;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_DamageZone.BP_DamageZone_C.Set Damage Level Visibility
struct ABP_DamageZone_C_Set_Damage_Level_Visibility_Params
{
	bool                                               Visibility;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Damage_Level;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function BP_DamageZone.BP_DamageZone_C.CollectTaggedComponents
struct ABP_DamageZone_C_CollectTaggedComponents_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.UserConstructionScript
struct ABP_DamageZone_C_UserConstructionScript_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.AddExternalHit
struct ABP_DamageZone_C_AddExternalHit_Params
{
	struct FHullDamageHit                              Hit_Data;                                                 // (CPF_Parm) 0000
};

// Function BP_DamageZone.BP_DamageZone_C.ClearDecalFlags
struct ABP_DamageZone_C_ClearDecalFlags_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.OnDamageLevelUpdate
struct ABP_DamageZone_C_OnDamageLevelUpdate_Params
{
	int*                                               InDamageLevel;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_DamageZone.BP_DamageZone_C.OnRepairableStateUpdate
struct ABP_DamageZone_C_OnRepairableStateUpdate_Params
{
	TEnumAsByte<ERepairableState>*                     InRepairableState;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_DamageZone.BP_DamageZone_C.OnInitialise
struct ABP_DamageZone_C_OnInitialise_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.ExecuteUbergraph_BP_DamageZone
struct ABP_DamageZone_C_ExecuteUbergraph_BP_DamageZone_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
