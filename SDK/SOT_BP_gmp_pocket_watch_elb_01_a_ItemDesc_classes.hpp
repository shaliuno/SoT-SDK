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

// BlueprintGeneratedClass BP_gmp_pocket_watch_elb_01_a_ItemDesc.BP_gmp_pocket_watch_elb_01_a_ItemDesc_C
// 0x0000 (0x0100 - 0x0100)
class UBP_gmp_pocket_watch_elb_01_a_ItemDesc_C : public UItemDesc
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_gmp_pocket_watch_elb_01_a_ItemDesc.BP_gmp_pocket_watch_elb_01_a_ItemDesc_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
