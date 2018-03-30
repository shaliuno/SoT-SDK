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

// BlueprintGeneratedClass BP_LargeShip_StandardHull_Damage.BP_LargeShip_StandardHull_Damage_C
// 0x0114 (0x0710 - 0x05FC)
class ABP_LargeShip_StandardHull_Damage_C : public ABP_HullDamage_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        projectile_collision;                                     // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_16;                               // 0x0608(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_15;                               // 0x0610(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_14;                               // 0x0618(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_13;                               // 0x0620(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_12;                               // 0x0628(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_11;                               // 0x0630(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_09;                               // 0x0638(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_08;                               // 0x0640(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_07;                               // 0x0648(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_06;                               // 0x0650(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_05;                               // 0x0658(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_04;                               // 0x0660(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_03;                               // 0x0668(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_02;                               // 0x0670(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_Wall_01;                               // 0x0678(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        largeship_standardhull_upper_01_a;                        // 0x0680(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_09;                                // 0x0688(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_08;                                // 0x0690(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_07;                                // 0x0698(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_06;                                // 0x06A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_17;                                // 0x06A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_16;                                // 0x06B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_15;                                // 0x06B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_14;                                // 0x06C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_13;                                // 0x06C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_12;                                // 0x06D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_11;                                // 0x06D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_05;                                // 0x06E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_04;                                // 0x06E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_03;                                // 0x06F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_02;                                // 0x06F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_Wall_01;                                // 0x0700(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        largeship_standardhull_lower_01_a;                        // 0x0708(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_LargeShip_StandardHull_Damage.BP_LargeShip_StandardHull_Damage_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
