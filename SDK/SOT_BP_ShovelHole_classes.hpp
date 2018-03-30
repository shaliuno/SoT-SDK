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

// BlueprintGeneratedClass BP_ShovelHole.BP_ShovelHole_C
// 0x0030 (0x04D8 - 0x04A8)
class ABP_ShovelHole_C : public AShovelHole
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDecalComponent*                             DirtDecal;                                                // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        DirtPile;                                                 // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MeshDynamicMaterial;                                      // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    DecalDynamicMaterial;                                     // 0x04D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ShovelHole.BP_ShovelHole_C")); }
		return ptr;
	}


	void SetFadeInParameters(float FadeTime);
	void SetFadeOutParameters(float FadeTime);
	void UserConstructionScript();
	void OnStateChanged(TEnumAsByte<EHoleState>* InState);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ShovelHole(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
