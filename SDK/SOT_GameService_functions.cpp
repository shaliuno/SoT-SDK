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

// Function GameService.GameServiceMapFunctions.UnregisterService
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 Service                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameServiceMapFunctions::UnregisterService(class UObject* Service, struct FGameServiceMap* ServiceMap)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.UnregisterService"));}

	UGameServiceMapFunctions_UnregisterService_Params params;
	params.Service = Service;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;
}


// Function GameService.GameServiceMapFunctions.RegisterService
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 Service                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameServiceMapFunctions::RegisterService(class UObject* Service, class UClass* Class, struct FGameServiceMap* ServiceMap)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.RegisterService"));}

	UGameServiceMapFunctions_RegisterService_Params params;
	params.Service = Service;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;
}


// Function GameService.GameServiceMapFunctions.GetService
// (FUNC_Net, FUNC_Protected, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UGameServiceMapFunctions::GetService(class UClass* Class, struct FGameServiceMap* ServiceMap)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.GetService"));}

	UGameServiceMapFunctions_GetService_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;

	return params.ReturnValue;
}


// Function GameService.GameServiceMapFunctions.GetNumServices
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UGameServiceMapFunctions::GetNumServices(struct FGameServiceMap* ServiceMap)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.GetNumServices"));}

	UGameServiceMapFunctions_GetNumServices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;

	return params.ReturnValue;
}


// Function GameService.GameServiceProviderInterface.UnregisterService
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 Service                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameServiceProviderInterface::UnregisterService(class UObject* Service)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceProviderInterface.UnregisterService"));}

	UGameServiceProviderInterface_UnregisterService_Params params;
	params.Service = Service;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameService.GameServiceProviderInterface.RegisterService
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 Service                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameServiceProviderInterface::RegisterService(class UObject* Service, class UClass* Class)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceProviderInterface.RegisterService"));}

	UGameServiceProviderInterface_RegisterService_Params params;
	params.Service = Service;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameService.GameServiceProviderInterface.GetService
// (FUNC_Protected)
// Parameters:
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UGameServiceProviderInterface::GetService(class UClass* Class)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceProviderInterface.GetService"));}

	UGameServiceProviderInterface_GetService_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
