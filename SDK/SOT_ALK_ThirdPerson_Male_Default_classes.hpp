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

// BlueprintGeneratedClass ALK_ThirdPerson_Male_Default.ALK_ThirdPerson_Male_Default_C
// 0x0000 (0x0028 - 0x0028)
class UALK_ThirdPerson_Male_Default_C : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass ALK_ThirdPerson_Male_Default.ALK_ThirdPerson_Male_Default_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
