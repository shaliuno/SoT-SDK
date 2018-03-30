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

// BlueprintGeneratedClass BP_tls_shovel_smp_01_a_Wieldable.BP_tls_shovel_smp_01_a_Wieldable_C
// 0x0000 (0x07F0 - 0x07F0)
class ABP_tls_shovel_smp_01_a_Wieldable_C : public ABP_Shovel_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_tls_shovel_smp_01_a_Wieldable.BP_tls_shovel_smp_01_a_Wieldable_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
