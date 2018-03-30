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

// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor
// (FUNC_Protected)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::GetServiceMessagingDispatcherFromActor(class UObject* Object)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor"));}

	UServiceMessagingFunctions_GetServiceMessagingDispatcherFromActor_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// TScriptInterface<class UServiceMessagingDispatcherInterface> ServiceMessagingDispatcher     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::GetServiceMessagingDispatcher(const TScriptInterface<class UServiceMessagingDispatcherInterface>& ServiceMessagingDispatcher)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher"));}

	UServiceMessagingFunctions_GetServiceMessagingDispatcher_Params params;
	params.ServiceMessagingDispatcher = ServiceMessagingDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FServiceMessagingTestMessage InMessage                      (CPF_Parm, CPF_OutParm)

void UServiceMessagingListenerTestObject::TestFunctionWithMessage(struct FServiceMessagingTestMessage* InMessage)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage"));}

	UServiceMessagingListenerTestObject_TestFunctionWithMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMessage != nullptr)
		*InMessage = params.InMessage;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
