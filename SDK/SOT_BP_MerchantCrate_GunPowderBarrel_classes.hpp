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

// BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C
// 0x0030 (0x07C0 - 0x0790)
class ABP_MerchantCrate_GunpowderBarrel_C : public AStaticMerchantCrate
{
public:
	class UBoxComponent*                               StashedAttackHitVolume;                                   // 0x0790(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBoxComponent*                               AttackHitVolume;                                          // 0x0798(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UExplosionComponent*                         Explosion;                                                // 0x07A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UExplosiveComponent*                         Explosive;                                                // 0x07A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UHealthComponent*                            Health;                                                   // 0x07B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageable;                                          // 0x07B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
