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

// BlueprintGeneratedClass BP_CustomisableLadder.BP_CustomisableLadder_C
// 0x007C (0x06DC - 0x0660)
class ABP_CustomisableLadder_C : public ALadder
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UInteractableComponent*                      InteractableComponent;                                    // 0x0668(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Ladder_Cap;                                               // 0x0670(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCustomisableLadderDefinitionStruct         LadderCustomisationDefinition;                            // 0x0678(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FVector>                             OffTopSplineComponentPositions;                           // 0x0698(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FVector>                             OnTopSplineComponentPositions;                            // 0x06A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                Steps;                                                    // 0x06B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StepHeight;                                               // 0x06BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Interactable_Position;                                    // 0x06C0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Interactable_Scale;                                       // 0x06CC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Minimum_Steps;                                            // 0x06D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_CustomisableLadder.BP_CustomisableLadder_C")); }
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	void Construct_Ladder();
	void Get_Total_Height_Before_Cap(float* Height);
	void Get_Steps(int* Num_Steps);
	struct FTransform GetBottomLadderRungTransform();
	struct FTransform GetTopLadderRungTransform();
	void Get_World_Loc_at_Height_Along_Z(float Relative_Z, struct FVector* Return_Value);
	void SetupSpline(class USplineComponent* Spline_Component, TArray<struct FVector>* Positions);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CustomisableLadder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
