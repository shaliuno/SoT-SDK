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

// Function BP_Anim_Cannon.BP_Anim_Cannon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Cannon_AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_Anim_Cannon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Cannon_AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Cannon.BP_Anim_Cannon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Cannon_AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E"));}

	UBP_Anim_Cannon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Cannon_AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_Cannon.BP_Anim_Cannon_C.AnimNotify_FireEnd
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_Anim_Cannon_C::AnimNotify_FireEnd()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Cannon.BP_Anim_Cannon_C.AnimNotify_FireEnd"));}

	UBP_Anim_Cannon_C_AnimNotify_FireEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_Cannon.BP_Anim_Cannon_C.ExecuteUbergraph_BP_Anim_Cannon
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Anim_Cannon_C::ExecuteUbergraph_BP_Anim_Cannon(int EntryPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Cannon.BP_Anim_Cannon_C.ExecuteUbergraph_BP_Anim_Cannon"));}

	UBP_Anim_Cannon_C_ExecuteUbergraph_BP_Anim_Cannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
