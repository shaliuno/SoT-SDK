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

// BlueprintGeneratedClass BP_ShipwreckBananaSpawner.BP_ShipwreckBananaSpawner_C
// 0x0000 (0x03F0 - 0x03F0)
class UBP_ShipwreckBananaSpawner_C : public UItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ShipwreckBananaSpawner.BP_ShipwreckBananaSpawner_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
