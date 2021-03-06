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

// BlueprintGeneratedClass BP_MerchantCrate_ChickenCrateProxy.BP_MerchantCrate_ChickenCrateProxy_C
// 0x0010 (0x0858 - 0x0848)
class ABP_MerchantCrate_ChickenCrateProxy_C : public AMerchantCrateItemProxy
{
public:
	class UMountpointComponent*                        Mountpoint;                                               // 0x0848(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0850(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MerchantCrate_ChickenCrateProxy.BP_MerchantCrate_ChickenCrateProxy_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
