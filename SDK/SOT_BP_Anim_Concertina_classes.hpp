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

// AnimBlueprintGeneratedClass BP_Anim_Concertina.BP_Anim_Concertina_C
// 0x0109 (0x0709 - 0x0600)
class UBP_Anim_Concertina_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0600(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1DEFFA064699D8E6099882A07E015CFC;      // 0x0608(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8FB8B3AD41DDBE46E9AA00B94F72B643;      // 0x0650(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4FA004554F3D39839ABDF59B7BAB6781;// 0x06B0(0x0058)
	TEnumAsByte<EObjectAnimationState>                 ObjectAnimationState;                                     // 0x0708(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass BP_Anim_Concertina.BP_Anim_Concertina_C")); }
		return ptr;
	}


	void OnUseStarted(class UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals);
	void OnUseStopped(class UClass** InputID);
	void ExecuteUbergraph_BP_Anim_Concertina(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
