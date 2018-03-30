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

// AnimBlueprintGeneratedClass BP_Anim_TreasureChest.BP_Anim_TreasureChest_C
// 0x00A0 (0x06A0 - 0x0600)
class UBP_Anim_TreasureChest_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0600(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F070536E4391701403115F87197E6883;      // 0x0608(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0963D6274B6A08B871BEACBD45613A07;// 0x0650(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass BP_Anim_TreasureChest.BP_Anim_TreasureChest_C")); }
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_TreasureChest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
