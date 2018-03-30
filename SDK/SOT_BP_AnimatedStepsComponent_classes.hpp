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

// BlueprintGeneratedClass BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C
// 0x003C (0x0134 - 0x00F8)
class UBP_AnimatedStepsComponent_C : public UAnimatedStepsComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<float>                                      BoxDelays;                                                // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      BoxTargetZs;                                              // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UCurveFloat*                                 AnimCurve;                                                // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementTimer;                                            // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AnimationDuration;                                        // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AnimationStartDelay;                                      // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C")); }
		return ptr;
	}


	void StartOpeningSteps();
	void SetAllStepsZs(bool OpeningOrClosing, TArray<float>* TargetZOffsets);
	void UpdateStep(int BoneIndex, float TargetZ, float MovementDelay, class UBoxComponent* AttachedBox, const struct FVector& BoxOrigin);
	void ReceiveTick(float* DeltaSeconds);
	void StartOpening();
	void OpenImmediate();
	void Close();
	void ExecuteUbergraph_BP_AnimatedStepsComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
