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

// Function BP_HullDamage.BP_HullDamage_C.Apply Hit
struct ABP_HullDamage_C_Apply_Hit_Params
{
	struct FVector                                     HitPosition;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     HitNormal;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              HitStrength;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               Has_Decal;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	class UDecalComponent*                             Decal;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function BP_HullDamage.BP_HullDamage_C.PlayHitSFX
struct ABP_HullDamage_C_PlayHitSFX_Params
{
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              HitStrenght;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function BP_HullDamage.BP_HullDamage_C.Apply Visual Hit
struct ABP_HullDamage_C_Apply_Visual_Hit_Params
{
	struct FVector                                     HitPosition;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     HitNormal;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              HitStrength;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               HasDecal;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	class UDecalComponent*                             Decal;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function BP_HullDamage.BP_HullDamage_C.Process Hit
struct ABP_HullDamage_C_Process_Hit_Params
{
	class UClass*                                      DamagerType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     HitPosition;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     HitNormal;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FVector                                     HitVelocity;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	int                                                NumDamageZones;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
};

// Function BP_HullDamage.BP_HullDamage_C.Scale Hit Strength and Get Decal Flag
struct ABP_HullDamage_C_Scale_Hit_Strength_and_Get_Decal_Flag_Params
{
	struct FVector                                     Hit_Normal;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     Hit_Velocity;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              Hit_Strength;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              Strength;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	bool                                               HasDecal;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function BP_HullDamage.BP_HullDamage_C.Get Random Deferred Decal
struct ABP_HullDamage_C_Get_Random_Deferred_Decal_Params
{
	class UMaterialInterface*                          Decal_Material;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_HullDamage.BP_HullDamage_C.Get Random Persistent Decal
struct ABP_HullDamage_C_Get_Random_Persistent_Decal_Params
{
	class UTexture2D*                                  Decal_Texture;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_HullDamage.BP_HullDamage_C.Add Hit To HitList
struct ABP_HullDamage_C_Add_Hit_To_HitList_Params
{
	struct FVector                                     HitPosition;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     Hit_Normal;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              HitStrength;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               HasDecal;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	class AActor*                                      DamageZone;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	int                                                HitLevel;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function BP_HullDamage.BP_HullDamage_C.Initialize Damage Materials
struct ABP_HullDamage_C_Initialize_Damage_Materials_Params
{
	TArray<class UStaticMeshComponent*>                StaticMeshes;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript
struct ABP_HullDamage_C_UserConstructionScript_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay
struct ABP_HullDamage_C_ReceiveBeginPlay_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature
struct ABP_HullDamage_C_BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage
struct ABP_HullDamage_C_ExecuteUbergraph_BP_HullDamage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
