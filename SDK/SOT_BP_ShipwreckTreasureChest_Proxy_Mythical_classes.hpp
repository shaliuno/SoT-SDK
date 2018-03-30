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

// BlueprintGeneratedClass BP_ShipwreckTreasureChest_Proxy_Mythical.BP_ShipwreckTreasureChest_Proxy_Mythical_C
// 0x0000 (0x0978 - 0x0978)
class ABP_ShipwreckTreasureChest_Proxy_Mythical_C : public ABP_TreasureChestProxy_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ShipwreckTreasureChest_Proxy_Mythical.BP_ShipwreckTreasureChest_Proxy_Mythical_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
