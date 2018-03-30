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

// BlueprintGeneratedClass BP_ipg_hook_04_v03_Desc.BP_ipg_hook_04_v03_Desc_C
// 0x0000 (0x00C0 - 0x00C0)
class UBP_ipg_hook_04_v03_Desc_C : public UClothingDesc
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ipg_hook_04_v03_Desc.BP_ipg_hook_04_v03_Desc_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
