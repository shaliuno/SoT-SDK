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

// BlueprintGeneratedClass figurehead_bilgerat_01_V02_CustomizationDesc2.figurehead_bilgerat_01_v02_CustomizationDesc2_C
// 0x0000 (0x00C8 - 0x00C8)
class Ufigurehead_bilgerat_01_v02_CustomizationDesc2_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass figurehead_bilgerat_01_V02_CustomizationDesc2.figurehead_bilgerat_01_v02_CustomizationDesc2_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
