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

// BlueprintGeneratedClass AD_ThirdPerson_Skeleton_Captain.AD_ThirdPerson_Skeleton_Captain_C
// 0x0000 (0x05E0 - 0x05E0)
class UAD_ThirdPerson_Skeleton_Captain_C : public UAD_ThirdPerson_Skeleton_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass AD_ThirdPerson_Skeleton_Captain.AD_ThirdPerson_Skeleton_Captain_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
