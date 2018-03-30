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

// AnimBlueprintGeneratedClass BP_Anim_Bucket.BP_Anim_Bucket_C
// 0x00B0 (0x06B0 - 0x0600)
class UBP_Anim_Bucket_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0600(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_ED7B862E4F56A4793A1861A824B99CAC;      // 0x0608(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A67D48FC4EC45A2222C682BB2B12AC8D;      // 0x0650(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass BP_Anim_Bucket.BP_Anim_Bucket_C")); }
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_Bucket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
