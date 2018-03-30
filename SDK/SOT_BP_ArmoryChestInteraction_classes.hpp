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

// BlueprintGeneratedClass BP_ArmoryChestInteraction.BP_ArmoryChestInteraction_C
// 0x0008 (0x0518 - 0x0510)
class ABP_ArmoryChestInteraction_C : public AArmoryChestInteraction
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ArmoryChestInteraction.BP_ArmoryChestInteraction_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
