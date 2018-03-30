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

// BlueprintGeneratedClass BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C
// 0x0028 (0x0704 - 0x06DC)
class ABP_CustomisableLadder_PointToPoint_C : public ABP_CustomisableLadder_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              Ladder_Roll;                                              // 0x06E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Ladder_Top_Target;                                        // 0x06EC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Ladder_Bottom_Target;                                     // 0x06F8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C")); }
		return ptr;
	}


	void Orientate_Ladder(const struct FVector& Point_A, const struct FVector& Point_B);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CustomisableLadder_PointToPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
