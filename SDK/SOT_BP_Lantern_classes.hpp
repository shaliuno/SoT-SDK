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

// BlueprintGeneratedClass BP_Lantern.BP_Lantern_C
// 0x005C (0x08DC - 0x0880)
class ABP_Lantern_C : public ALantern
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        LanternTriggerGlow;                                       // 0x0888(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        LanternGlow;                                              // 0x0890(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAmbientLightSourceComponent*                AmbientLightSource;                                       // 0x0898(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x08A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x08B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    LanternGlowDynamicMaterial;                               // 0x08B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              EmissiveInt_threshold;                                    // 0x08C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    LanternTriggerGlowDynamicMaterial;                        // 0x08C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TriggerGlowDuration;                                      // 0x08D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TriggerGlowRampInDuration;                                // 0x08D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TriggerGlowRampOutDuration;                               // 0x08D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Lantern.BP_Lantern_C")); }
		return ptr;
	}


	void CreateLanternDynamicMaterial();
	void OnAttachThirdPerson();
	void OnAttachFirstPerson();
	void TurnOff();
	void TurnOn();
	void UserConstructionScript();
	void ReceiveWieldFirstPerson();
	void ReceiveWieldThirdPerson();
	void ReceiveBeginPlay();
	void ReceiveLightChange();
	void TriggerGlow();
	void PostMeshChangedBPEvent();
	void ExecuteUbergraph_BP_Lantern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
