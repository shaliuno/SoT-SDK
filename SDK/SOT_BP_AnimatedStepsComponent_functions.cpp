// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_AnimatedStepsComponent_C::StartOpeningSteps()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps"));}

	UBP_AnimatedStepsComponent_C_StartOpeningSteps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<float>                  TargetZOffsets                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           OpeningOrClosing               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_AnimatedStepsComponent_C::SetAllStepsZs(bool OpeningOrClosing, TArray<float>* TargetZOffsets)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs"));}

	UBP_AnimatedStepsComponent_C_SetAllStepsZs_Params params;
	params.OpeningOrClosing = OpeningOrClosing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetZOffsets != nullptr)
		*TargetZOffsets = params.TargetZOffsets;
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.UpdateStep
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            BoneIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TargetZ                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MovementDelay                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBoxComponent*           AttachedBox                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 BoxOrigin                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_AnimatedStepsComponent_C::UpdateStep(int BoneIndex, float TargetZ, float MovementDelay, class UBoxComponent* AttachedBox, const struct FVector& BoxOrigin)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.UpdateStep"));}

	UBP_AnimatedStepsComponent_C_UpdateStep_Params params;
	params.BoneIndex = BoneIndex;
	params.TargetZ = TargetZ;
	params.MovementDelay = MovementDelay;
	params.AttachedBox = AttachedBox;
	params.BoxOrigin = BoxOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ReceiveTick
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_AnimatedStepsComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ReceiveTick"));}

	UBP_AnimatedStepsComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_AnimatedStepsComponent_C::StartOpening()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening"));}

	UBP_AnimatedStepsComponent_C_StartOpening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_AnimatedStepsComponent_C::OpenImmediate()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate"));}

	UBP_AnimatedStepsComponent_C_OpenImmediate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_AnimatedStepsComponent_C::Close()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close"));}

	UBP_AnimatedStepsComponent_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_AnimatedStepsComponent_C::ExecuteUbergraph_BP_AnimatedStepsComponent(int EntryPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent"));}

	UBP_AnimatedStepsComponent_C_ExecuteUbergraph_BP_AnimatedStepsComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
