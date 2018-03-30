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

// BlueprintGeneratedClass BP_MerchantCrate_WoodCrate.BP_MerchantCrate_WoodCrate_C
// 0x0010 (0x07A8 - 0x0798)
class ABP_MerchantCrate_WoodCrate_C : public AMerchantCrate
{
public:
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x0798(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x07A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MerchantCrate_WoodCrate.BP_MerchantCrate_WoodCrate_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
