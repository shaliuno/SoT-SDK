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

// BlueprintGeneratedClass BP_TreasureArtifact_Proxy_Base.BP_TreasureArtifact_Proxy_Base_C
// 0x0010 (0x0838 - 0x0828)
class ABP_TreasureArtifact_Proxy_Base_C : public AStaticSimpleBootyItemProxy
{
public:
	class UStaticMeshComponent*                        Glint;                                                    // 0x0828(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0830(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_TreasureArtifact_Proxy_Base.BP_TreasureArtifact_Proxy_Base_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
