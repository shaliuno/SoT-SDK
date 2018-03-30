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

// Function AthenaInput.CompositeInputHandler.SetNotificationInputHandler
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  Id                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         Handler                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UCompositeInputHandler::SetNotificationInputHandler(class UClass* Id, const struct FScriptDelegate& Handler)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputHandler.SetNotificationInputHandler"));}

	UCompositeInputHandler_SetNotificationInputHandler_Params params;
	params.Id = Id;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  Id                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         Handler                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UCompositeInputHandler::SetAnalogInputHandler(class UClass* Id, const struct FScriptDelegate& Handler)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler"));}

	UCompositeInputHandler_SetAnalogInputHandler_Params params;
	params.Id = Id;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInput.InputHandlerInterface.HandleNotificationInput
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class UClass*                  Id                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UInputHandlerInterface::HandleNotificationInput(class UClass* Id)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.InputHandlerInterface.HandleNotificationInput"));}

	UInputHandlerInterface_HandleNotificationInput_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInput.InputHandlerInterface.HandleAnalogInput
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Protected)
// Parameters:
// class UClass*                  Id                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Input                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UInputHandlerInterface::HandleAnalogInput(class UClass* Id, float Input)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.InputHandlerInterface.HandleAnalogInput"));}

	UInputHandlerInterface_HandleAnalogInput_Params params;
	params.Id = Id;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler
// (FUNC_Final)
// Parameters:
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnSecondNotificationHandler()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler"));}

	UCompositeInputDelegatorTestsCallbackHelper_OnSecondNotificationHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private)
// Parameters:
// float                          Value                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnSecondHandler(float Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler"));}

	UCompositeInputDelegatorTestsCallbackHelper_OnSecondHandler_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler
// (FUNC_Final)
// Parameters:
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnFirstNotificationHandler()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler"));}

	UCompositeInputDelegatorTestsCallbackHelper_OnFirstNotificationHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private)
// Parameters:
// float                          Value                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnFirstHandler(float Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler"));}

	UCompositeInputDelegatorTestsCallbackHelper_OnFirstHandler_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UCompositeInputHandler*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCompositeInputHandler* UInputHandlerFunctionLibrary::MakeCompositeInputHandler()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler"));}

	UInputHandlerFunctionLibrary_MakeCompositeInputHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
