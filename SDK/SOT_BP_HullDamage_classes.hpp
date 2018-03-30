#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C
// 0x008C (0x05FC - 0x0570)
class ABP_HullDamage_C : public AHullDamage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHitReactionComponent*                       HitReaction;                                              // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBakedDecalComponent*                        ImpactDecalComponent;                                     // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UTexture2D*>                          Persistent_Damage_Decals;                                 // 0x0590(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UParticleSystem*                             Damage_VFX;                                               // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInstance*>                   Deferred_Damage_Decals;                                   // 0x05A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Deferred_Min_Size;                                        // 0x05B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Deferred_Max_Size;                                        // 0x05BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Persistent_Min_Size;                                      // 0x05C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Persistent_Max_Size;                                      // 0x05C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRandomStream                               RandomDecalStream;                                        // 0x05C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              TEST_HitStrength;                                         // 0x05D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TEST_PenetrationThreshold;                                // 0x05D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AShip*                                       ParentShip;                                               // 0x05D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FWwiseEmitter                               CannonballHitEmitter;                                     // 0x05E0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                TEST_HitLevel;                                            // 0x05F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C")); }
		return ptr;
	}


	void Apply_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool Has_Decal, class UDecalComponent** Decal);
	void PlayHitSFX(const struct FVector& HitLocation, float HitStrenght);
	void Apply_Visual_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool HasDecal, class UDecalComponent** Decal);
	void Process_Hit(class UClass* DamagerType, const struct FVector& HitPosition, const struct FVector& HitNormal, const struct FVector& HitVelocity, int NumDamageZones);
	void Scale_Hit_Strength_and_Get_Decal_Flag(const struct FVector& Hit_Normal, const struct FVector& Hit_Velocity, float Hit_Strength, float* Strength, bool* HasDecal);
	void Get_Random_Deferred_Decal(class UMaterialInterface** Decal_Material);
	void Get_Random_Persistent_Decal(class UTexture2D** Decal_Texture);
	void Add_Hit_To_HitList(const struct FVector& HitPosition, const struct FVector& Hit_Normal, float HitStrength, bool HasDecal, class AActor* DamageZone, int HitLevel);
	void Initialize_Damage_Materials(TArray<class UStaticMeshComponent*>* StaticMeshes);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature(const struct FImpactDamageEvent& ImpactDamageEvent);
	void ExecuteUbergraph_BP_HullDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
