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

// BlueprintGeneratedClass BP_TreasureChest_Wieldable_Drunken.BP_TreasureChest_Wieldable_Drunken_C
// 0x0008 (0x0780 - 0x0778)
class ABP_TreasureChest_Wieldable_Drunken_C : public ABP_TreasureChest_C
{
public:
	class UDrunkenChestComponent*                      DrunkenChest;                                             // 0x0778(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_TreasureChest_Wieldable_Drunken.BP_TreasureChest_Wieldable_Drunken_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
