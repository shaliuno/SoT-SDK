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

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FObjectMessagingDispatcherHandle Dispatcher                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UObjectMessagingFunctions::UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle"));}

	UObjectMessagingFunctions_UnregisterEventFromHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FObjectMessagingDispatcher Dispatcher                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UObjectMessagingFunctions::UnregisterEvent(struct FObjectMessagingDispatcher* Dispatcher, struct FObjectMessagingHandle* Handle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent"));}

	UObjectMessagingFunctions_UnregisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FObjectMessagingDispatcherHandle MessageDispatcher              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 FunctionOwner                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 FunctionName                   (CPF_Parm, CPF_ZeroConstructor)
// class UStruct*                 EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjectMessagingFunctions::RegisterEventFromHandle(class UObject* FunctionOwner, const struct FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FObjectMessagingHandle* Handle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle"));}

	UObjectMessagingFunctions_RegisterEventFromHandle_Params params;
	params.FunctionOwner = FunctionOwner;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FObjectMessagingDispatcher MessageDispatcher              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 FunctionOwner                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 FunctionName                   (CPF_Parm, CPF_ZeroConstructor)
// class UStruct*                 EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjectMessagingFunctions::RegisterEvent(class UObject* FunctionOwner, const struct FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcher* MessageDispatcher, struct FObjectMessagingHandle* Handle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent"));}

	UObjectMessagingFunctions_RegisterEvent_Params params;
	params.FunctionOwner = FunctionOwner;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// struct FObjectMessagingDispatcherHandle Handle                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UObjectMessagingFunctions::IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle* Handle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid"));}

	UObjectMessagingFunctions_IsObjectMessagingDispatcherValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FObjectMessagingHandle  Handle                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UObjectMessagingFunctions::IsHandleRegistered(struct FObjectMessagingHandle* Handle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered"));}

	UObjectMessagingFunctions_IsHandleRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor
// (FUNC_Protected)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FObjectMessagingDispatcherHandle UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(class UObject* Object)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor"));}

	UObjectMessagingFunctions_GetObjectMessagingDispatcherFromActor_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// TScriptInterface<class UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FObjectMessagingDispatcherHandle UObjectMessagingFunctions::GetObjectMessagingDispatcher(const TScriptInterface<class UObjectMessagingDispatcherInterface>& ObjectMessagingDispatcher)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher"));}

	UObjectMessagingFunctions_GetObjectMessagingDispatcher_Params params;
	params.ObjectMessagingDispatcher = ObjectMessagingDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FObjectMessagingDispatcherHandle MessageDispatcher              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UStruct*                 EventDataStruct                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Scope                          (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ScopeId                        (CPF_Parm, CPF_ZeroConstructor)
// struct FGenericStruct          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UObjectMessagingFunctions::FireEventWithDataFromHandle(class UStruct* EventDataStruct, const struct FString& Scope, const struct FString& ScopeId, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FGenericStruct* Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle"));}

	UObjectMessagingFunctions_FireEventWithDataFromHandle_Params params;
	params.EventDataStruct = EventDataStruct;
	params.Scope = Scope;
	params.ScopeId = ScopeId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FObjectMessagingDispatcher MessageDispatcher              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UStruct*                 EventDataStruct                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Scope                          (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ScopeId                        (CPF_Parm, CPF_ZeroConstructor)
// struct FGenericStruct          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UObjectMessagingFunctions::FireEventWithData(class UStruct* EventDataStruct, const struct FString& Scope, const struct FString& ScopeId, struct FObjectMessagingDispatcher* MessageDispatcher, struct FGenericStruct* Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData"));}

	UObjectMessagingFunctions_FireEventWithData_Params params;
	params.EventDataStruct = EventDataStruct;
	params.Scope = Scope;
	params.ScopeId = ScopeId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Value != nullptr)
		*Value = params.Value;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
