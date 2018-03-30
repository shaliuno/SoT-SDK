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

// AnimBlueprintGeneratedClass BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C
// 0x0140 (0x0740 - 0x0600)
class UBP_Anim_FlintlockPistol_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0600(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BA28F382499BAD2D62FC829468574B03;      // 0x0608(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F39798534963A2FAA39D00965995ABD4;      // 0x0650(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_10C67A1147FD9A4753E31CA816D0F579;// 0x06B0(0x0050)
	TEnumAsByte<EObjectAnimationState>                 ObjectAnimationState;                                     // 0x0700(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bReloadWanted;                                            // 0x0701(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0702(0x0006) MISSED OFFSET
	struct FObjectMessagingHandle                      ReloadEventHandle;                                        // 0x0708(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C")); }
		return ptr;
	}


	void AnimNotify_ExitedFire();
	void OnOneShotUseTriggered(class UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals);
	void OnUseStarted(class UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals);
	void BlueprintInitializeAnimation();
	void ReloadEventDelegate(const struct FEventProjectileWeaponReload& Event);
	void BlueprintUninitializeAnimation();
	void AnimNotify_ResetReload();
	void ExecuteUbergraph_BP_Anim_FlintlockPistol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
