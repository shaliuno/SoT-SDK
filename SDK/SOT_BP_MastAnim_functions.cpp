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

// Function BP_MastAnim.BP_MastAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_MastAnim_AnimGraphNode_SequenceEvaluator_289A9AD845D48FFB76FDEA99E492FF2B
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_MastAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_MastAnim_AnimGraphNode_SequenceEvaluator_289A9AD845D48FFB76FDEA99E492FF2B()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_MastAnim.BP_MastAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_MastAnim_AnimGraphNode_SequenceEvaluator_289A9AD845D48FFB76FDEA99E492FF2B"));}

	UBP_MastAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_MastAnim_AnimGraphNode_SequenceEvaluator_289A9AD845D48FFB76FDEA99E492FF2B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastAnim.BP_MastAnim_C.SetMastAngle
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MastAnim_C::SetMastAngle(float Angle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_MastAnim.BP_MastAnim_C.SetMastAngle"));}

	UBP_MastAnim_C_SetMastAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastAnim.BP_MastAnim_C.InitializeMast
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          FallingLimit                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MastAnim_C::InitializeMast(float FallingLimit)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_MastAnim.BP_MastAnim_C.InitializeMast"));}

	UBP_MastAnim_C_InitializeMast_Params params;
	params.FallingLimit = FallingLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastAnim.BP_MastAnim_C.ExecuteUbergraph_BP_MastAnim
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MastAnim_C::ExecuteUbergraph_BP_MastAnim(int EntryPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_MastAnim.BP_MastAnim_C.ExecuteUbergraph_BP_MastAnim"));}

	UBP_MastAnim_C_ExecuteUbergraph_BP_MastAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
