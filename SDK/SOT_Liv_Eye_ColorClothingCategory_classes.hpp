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

// BlueprintGeneratedClass Liv_Eye_ColorClothingCategory.Liv_Eye_ColorClothingCategory_C
// 0x0000 (0x0068 - 0x0068)
class ULiv_Eye_ColorClothingCategory_C : public UClothingCategory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Liv_Eye_ColorClothingCategory.Liv_Eye_ColorClothingCategory_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
