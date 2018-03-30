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

// Function Wind.WindInterface.UnregisterWindZone
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TScriptInterface<class UWindZoneInterface> InWindZone                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindInterface::UnregisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.UnregisterWindZone"));}

	UWindInterface_UnregisterWindZone_Params params;
	params.InWindZone = InWindZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind.WindInterface.TriggerChange
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ChangeInstantly                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindInterface::TriggerChange(bool ChangeInstantly)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.TriggerChange"));}

	UWindInterface_TriggerChange_Params params;
	params.ChangeInstantly = ChangeInstantly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind.WindInterface.SetParams
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FWindServiceParams      Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWindInterface::SetParams(const struct FWindServiceParams& Params)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetParams"));}

	UWindInterface_SetParams_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind.WindInterface.SetGlobalWindVector
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 InWindVector                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UWindInterface::SetGlobalWindVector(const struct FVector& InWindVector)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetGlobalWindVector"));}

	UWindInterface_SetGlobalWindVector_Params params;
	params.InWindVector = InWindVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind.WindInterface.SetGlobalWindMagnitude
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InWindMagnitude                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindInterface::SetGlobalWindMagnitude(float InWindMagnitude)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetGlobalWindMagnitude"));}

	UWindInterface_SetGlobalWindMagnitude_Params params;
	params.InWindMagnitude = InWindMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind.WindInterface.SetGlobalWindDirection
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 InWindDirection                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UWindInterface::SetGlobalWindDirection(const struct FVector& InWindDirection)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetGlobalWindDirection"));}

	UWindInterface_SetGlobalWindDirection_Params params;
	params.InWindDirection = InWindDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind.WindInterface.SetGlobalWindAngle
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InAngle                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindInterface::SetGlobalWindAngle(float InAngle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetGlobalWindAngle"));}

	UWindInterface_SetGlobalWindAngle_Params params;
	params.InAngle = InAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind.WindInterface.RegisterWindZone
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TScriptInterface<class UWindZoneInterface> InWindZone                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindInterface::RegisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.RegisterWindZone"));}

	UWindInterface_RegisterWindZone_Params params;
	params.InWindZone = InWindZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind.WindInterface.GetWindZoneAtLocation
// (FUNC_Delegate)
// Parameters:
// struct FVector                 SamplePosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TScriptInterface<class UWindZoneInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TScriptInterface<class UWindZoneInterface> UWindInterface::GetWindZoneAtLocation(const struct FVector& SamplePosition)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindZoneAtLocation"));}

	UWindInterface_GetWindZoneAtLocation_Params params;
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindVector
// (FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Protected)
// Parameters:
// struct FVector                 SamplePosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UWindInterface::GetWindVector(const struct FVector& SamplePosition)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindVector"));}

	UWindInterface_GetWindVector_Params params;
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindMagnitude
// (FUNC_Private, FUNC_Protected)
// Parameters:
// struct FVector                 SamplePosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWindInterface::GetWindMagnitude(const struct FVector& SamplePosition)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindMagnitude"));}

	UWindInterface_GetWindMagnitude_Params params;
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindDirection
// (FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Protected)
// Parameters:
// struct FVector                 SamplePosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UWindInterface::GetWindDirection(const struct FVector& SamplePosition)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindDirection"));}

	UWindInterface_GetWindDirection_Params params;
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindAngle
// (FUNC_Private, FUNC_Protected)
// Parameters:
// struct FVector                 SamplePosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWindInterface::GetWindAngle(const struct FVector& SamplePosition)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindAngle"));}

	UWindInterface_GetWindAngle_Params params;
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetTurbulence
// (FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Protected)
// Parameters:
// struct FVector                 SamplePosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FWindZoneTurbulence     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FWindZoneTurbulence UWindInterface::GetTurbulence(const struct FVector& SamplePosition)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetTurbulence"));}

	UWindInterface_GetTurbulence_Params params;
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetMaxWindMagnitude
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWindInterface::GetMaxWindMagnitude()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetMaxWindMagnitude"));}

	UWindInterface_GetMaxWindMagnitude_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindZoneInterface.GetWindZoneParams
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic)
// Parameters:
// struct FWindZoneParams         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FWindZoneParams UWindZoneInterface::GetWindZoneParams()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindZoneInterface.GetWindZoneParams"));}

	UWindZoneInterface_GetWindZoneParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindZoneInterface.GetWindZoneLocation
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UWindZoneInterface::GetWindZoneLocation()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindZoneInterface.GetWindZoneLocation"));}

	UWindZoneInterface_GetWindZoneLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindZoneInterface.GetTurbulence
// (FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Protected)
// Parameters:
// struct FVector                 Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FWindZoneTurbulence     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FWindZoneTurbulence UWindZoneInterface::GetTurbulence(const struct FVector& Location)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindZoneInterface.GetTurbulence"));}

	UWindZoneInterface_GetTurbulence_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindFunctions.SetDefaultWindBlowingNorth
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindFunctions::SetDefaultWindBlowingNorth(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindFunctions.SetDefaultWindBlowingNorth"));}

	UWindFunctions_SetDefaultWindBlowingNorth_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind.WindFunctions.GetWindAtLocation
// (FUNC_Private, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 WorldPosition                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UWindFunctions::GetWindAtLocation(class UObject* WorldContextObject, const struct FVector& WorldPosition)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindFunctions.GetWindAtLocation"));}

	UWindFunctions_GetWindAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindService.OnRep_WindMagnitude
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AWindService::OnRep_WindMagnitude()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindService.OnRep_WindMagnitude"));}

	AWindService_OnRep_WindMagnitude_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind.WindService.OnRep_WindAngle
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AWindService::OnRep_WindAngle()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindService.OnRep_WindAngle"));}

	AWindService_OnRep_WindAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind.WindService.GetWindParams
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// struct FWindServiceParams      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FWindServiceParams AWindService::GetWindParams()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindService.GetWindParams"));}

	AWindService_GetWindParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FWindServiceParams      Params1                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FWindServiceParams      Params2                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWindServiceParamsFunctionLibrary::AreWindServiceParamsEqual(const struct FWindServiceParams& Params1, const struct FWindServiceParams& Params2)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual"));}

	UWindServiceParamsFunctionLibrary_AreWindServiceParamsEqual_Params params;
	params.Params1 = Params1;
	params.Params2 = Params2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
