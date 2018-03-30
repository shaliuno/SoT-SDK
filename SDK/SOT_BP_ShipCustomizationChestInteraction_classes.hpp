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

// BlueprintGeneratedClass BP_ShipCustomizationChestInteraction.BP_ShipCustomizationChestInteraction_C
// 0x0008 (0x0560 - 0x0558)
class ABP_ShipCustomizationChestInteraction_C : public AShipCustomizationChestInteraction
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ShipCustomizationChestInteraction.BP_ShipCustomizationChestInteraction_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
