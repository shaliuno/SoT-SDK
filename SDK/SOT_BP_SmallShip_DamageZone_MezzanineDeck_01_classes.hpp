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

// BlueprintGeneratedClass BP_SmallShip_DamageZone_MezzanineDeck_01.BP_SmallShip_DamageZone_MezzanineDeck_01_C
// 0x0008 (0x0860 - 0x0858)
class ABP_SmallShip_DamageZone_MezzanineDeck_01_C : public ABP_BaseInternalDamageZone_C
{
public:
	class UStaticMeshComponent*                        Cube;                                                     // 0x0858(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_SmallShip_DamageZone_MezzanineDeck_01.BP_SmallShip_DamageZone_MezzanineDeck_01_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
