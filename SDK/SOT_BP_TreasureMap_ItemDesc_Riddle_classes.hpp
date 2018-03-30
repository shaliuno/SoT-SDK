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

// BlueprintGeneratedClass BP_TreasureMap_ItemDesc_Riddle.BP_TreasureMap_ItemDesc_Riddle_C
// 0x0000 (0x0100 - 0x0100)
class UBP_TreasureMap_ItemDesc_Riddle_C : public UTreasureMapItemDesc
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_TreasureMap_ItemDesc_Riddle.BP_TreasureMap_ItemDesc_Riddle_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
