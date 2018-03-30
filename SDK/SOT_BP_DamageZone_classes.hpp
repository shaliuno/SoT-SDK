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

// BlueprintGeneratedClass BP_DamageZone.BP_DamageZone_C
// 0x0090 (0x0828 - 0x0798)
class ABP_DamageZone_C : public ADamageZone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FBP_InternalDamageGroup>             InternalDamageLevels;                                     // 0x07A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FName>                               InternalDamageTags;                                       // 0x07B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FHullDamageHit>                      Rep_ExternalHitList;                                      // 0x07C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       Repair_Tag;                                               // 0x07D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBP_InternalDamageGroup                     RepairGroup;                                              // 0x07D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UPrimitiveComponent*                         InteractionBox;                                           // 0x07E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Interaction_Tag;                                          // 0x07F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExternalHitBufferIndex;                                   // 0x07F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxStoredHits;                                            // 0x07FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UDecalComponent*>                     Deferred_Decals;                                          // 0x0800(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                Rep_ServerUpdateEventCount;                               // 0x0810(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ClientUpdateEventCount;                                   // 0x0814(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ExternalDecalBufferIndex;                                 // 0x0818(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      HasBeenInitialized;                                       // 0x081C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       OneShotTag;                                               // 0x0820(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_DamageZone.BP_DamageZone_C")); }
		return ptr;
	}


	void GetNumExternalHits(int* NumExternalHits);
	void Initialise();
	void Update_External_Hits();
	void OnRep_Rep_ExternalHitList();
	void Clear_Decal_Flags();
	void Add_Deferred_Decal(class UDecalComponent* Decal);
	void KillDeferredDecal(class UDecalComponent** Decal);
	void RemoveDeferredDecals();
	void Set_Repair_Visibility(bool Visible);
	void Add_External_Hit(const struct FHullDamageHit& HitData);
	void Show_Damage_Level(int DamageLevel);
	void Set_Damage_Level_Visibility(bool Visibility, int Damage_Level);
	void CollectTaggedComponents();
	void UserConstructionScript();
	void AddExternalHit(const struct FHullDamageHit& Hit_Data);
	void ClearDecalFlags();
	void OnDamageLevelUpdate(int* InDamageLevel);
	void OnRepairableStateUpdate(TEnumAsByte<ERepairableState>* InRepairableState);
	void OnInitialise();
	void ExecuteUbergraph_BP_DamageZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
