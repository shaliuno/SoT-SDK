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

// BlueprintGeneratedClass BP_MerchantCrate_PigCrate.BP_MerchantCrate_PigCrate_C
// 0x0010 (0x07A0 - 0x0790)
class ABP_MerchantCrate_PigCrate_C : public AStaticMerchantCrate
{
public:
	class UFeedingComponent*                           Feeding;                                                  // 0x0790(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMountpointComponent*                        Mountpoint;                                               // 0x0798(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MerchantCrate_PigCrate.BP_MerchantCrate_PigCrate_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
