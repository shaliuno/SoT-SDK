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

// BlueprintGeneratedClass BP_Cutlass_Item.BP_Cutlass_Item_C
// 0x0008 (0x0950 - 0x0948)
class ABP_Cutlass_Item_C : public AMeleeWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0948(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Cutlass_Item.BP_Cutlass_Item_C")); }
		return ptr;
	}


	void DoBlockEffect();
	void UserConstructionScript();
	void OnBlockedAttack(struct FEventBlocked* Event);
	void ExecuteUbergraph_BP_Cutlass_Item(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
