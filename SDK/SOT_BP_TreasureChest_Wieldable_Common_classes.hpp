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

// BlueprintGeneratedClass BP_TreasureChest_Wieldable_Common.BP_TreasureChest_Wieldable_Common_C
// 0x0000 (0x0778 - 0x0778)
class ABP_TreasureChest_Wieldable_Common_C : public ABP_TreasureChest_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_TreasureChest_Wieldable_Common.BP_TreasureChest_Wieldable_Common_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
