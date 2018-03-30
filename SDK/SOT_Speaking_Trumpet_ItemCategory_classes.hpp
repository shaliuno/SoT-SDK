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

// BlueprintGeneratedClass Speaking_Trumpet_ItemCategory.Speaking_Trumpet_ItemCategory_C
// 0x0000 (0x0070 - 0x0070)
class USpeaking_Trumpet_ItemCategory_C : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Speaking_Trumpet_ItemCategory.Speaking_Trumpet_ItemCategory_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
