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

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DisplayAllCharacterSockets
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AAthenaCharacter*        Athena_Character               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Size                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MathAndTrigAnimation_C::DisplayAllCharacterSockets(class AAthenaCharacter* Athena_Character, float Size, class UObject* __WorldContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DisplayAllCharacterSockets"));}

	UBP_MathAndTrigAnimation_C_DisplayAllCharacterSockets_Params params;
	params.Athena_Character = Athena_Character;
	params.Size = Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DecrementFloat
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Float                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          DecrementValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MathAndTrigAnimation_C::DecrementFloat(float DecrementValue, class UObject* __WorldContext, float* Float)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DecrementFloat"));}

	UBP_MathAndTrigAnimation_C_DecrementFloat_Params params;
	params.DecrementValue = DecrementValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Float != nullptr)
		*Float = params.Float;
}


// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Increment Float
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Float                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Incement_Value                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MathAndTrigAnimation_C::Increment_Float(float Incement_Value, class UObject* __WorldContext, float* Float)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Increment Float"));}

	UBP_MathAndTrigAnimation_C_Increment_Float_Params params;
	params.Incement_Value = Incement_Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Float != nullptr)
		*Float = params.Float;
}


// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Apply Relative Transform
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTransform              RelativeTransform              (CPF_Parm, CPF_IsPlainOldData)
// struct FTransform              BaseTransform                  (CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              CombinedTransform              (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UBP_MathAndTrigAnimation_C::Apply_Relative_Transform(const struct FTransform& RelativeTransform, const struct FTransform& BaseTransform, class UObject* __WorldContext, struct FTransform* CombinedTransform)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Apply Relative Transform"));}

	UBP_MathAndTrigAnimation_C_Apply_Relative_Transform_Params params;
	params.RelativeTransform = RelativeTransform;
	params.BaseTransform = BaseTransform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CombinedTransform != nullptr)
		*CombinedTransform = params.CombinedTransform;
}


// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Calculate Relative Transform
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTransform              RelativeObjectsWorldTransform  (CPF_Parm, CPF_IsPlainOldData)
// struct FTransform              BaseObjectsWorldTransform      (CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              RealtiveOffsetTransform        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UBP_MathAndTrigAnimation_C::Calculate_Relative_Transform(const struct FTransform& RelativeObjectsWorldTransform, const struct FTransform& BaseObjectsWorldTransform, class UObject* __WorldContext, struct FTransform* RealtiveOffsetTransform)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Calculate Relative Transform"));}

	UBP_MathAndTrigAnimation_C_Calculate_Relative_Transform_Params params;
	params.RelativeObjectsWorldTransform = RelativeObjectsWorldTransform;
	params.BaseObjectsWorldTransform = BaseObjectsWorldTransform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RealtiveOffsetTransform != nullptr)
		*RealtiveOffsetTransform = params.RealtiveOffsetTransform;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
