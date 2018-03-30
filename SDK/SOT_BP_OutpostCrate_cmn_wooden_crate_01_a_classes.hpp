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

// BlueprintGeneratedClass BP_OutpostCrate_cmn_wooden_crate_01_a.BP_OutpostCrate_cmn_wooden_crate_01_a_C
// 0x0000 (0x05F0 - 0x05F0)
class ABP_OutpostCrate_cmn_wooden_crate_01_a_C : public AIslandStorageContainer
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_OutpostCrate_cmn_wooden_crate_01_a.BP_OutpostCrate_cmn_wooden_crate_01_a_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
