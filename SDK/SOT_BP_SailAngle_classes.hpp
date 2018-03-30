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

// BlueprintGeneratedClass BP_SailAngle.BP_SailAngle_C
// 0x0008 (0x07C0 - 0x07B8)
class ABP_SailAngle_C : public ASailAngle
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x07B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_SailAngle.BP_SailAngle_C")); }
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
