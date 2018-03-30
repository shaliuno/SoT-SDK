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

// BlueprintGeneratedClass BP_tls_lantern_smp_01_a_Wieldable.BP_tls_lantern_smp_01_a_Wieldable_C
// 0x0000 (0x08DC - 0x08DC)
class ABP_tls_lantern_smp_01_a_Wieldable_C : public ABP_Lantern_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_tls_lantern_smp_01_a_Wieldable.BP_tls_lantern_smp_01_a_Wieldable_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
