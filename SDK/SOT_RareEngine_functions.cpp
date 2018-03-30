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

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            InThreshold                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitchDiagnosisBlueprintFunctionLibrary::SetHitchThreshold(int InThreshold)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold"));}

	UHitchDiagnosisBlueprintFunctionLibrary_SetHitchThreshold_Params params;
	params.InThreshold = InThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame
// ()
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UHitchDiagnosisBlueprintFunctionLibrary::GetMaxHitchNameThisFrame()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame"));}

	UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchNameThisFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UHitchDiagnosisBlueprintFunctionLibrary::GetMaxHitchLengthThisFrameMs()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs"));}

	UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchLengthThisFrameMs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UHitchDiagnosisBlueprintFunctionLibrary::DumpThisFramesHitchesToLog()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog"));}

	UHitchDiagnosisBlueprintFunctionLibrary_DumpThisFramesHitchesToLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHitchDiagnosisBlueprintFunctionLibrary::DidHitchOccurThisFrame()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame"));}

	UHitchDiagnosisBlueprintFunctionLibrary_DidHitchOccurThisFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareEngine.StallDetector.Deactivate
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UStallDetector::Deactivate()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.StallDetector.Deactivate"));}

	UStallDetector_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareEngine.StallDetector.CreateStallDetector
// (FUNC_Protected)
// Parameters:
// float                          Delay                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           CreateActive                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UStallDetector*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UStallDetector* UStallDetector::CreateStallDetector(float Delay, bool CreateActive)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.StallDetector.CreateStallDetector"));}

	UStallDetector_CreateStallDetector_Params params;
	params.Delay = Delay;
	params.CreateActive = CreateActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareEngine.StallDetector.Activate
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UStallDetector::Activate()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.StallDetector.Activate"));}

	UStallDetector_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UStaticMesh*>     MeshFilter                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FStaticMeshComponentList> OutComponentLists              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// class ULevel*                  RestrictToLevel                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStaticMeshActorBlueprintLibrary::FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshComponentList>* OutComponentLists)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents"));}

	UStaticMeshActorBlueprintLibrary_FindAllStaticMeshComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MeshFilter = MeshFilter;
	params.RestrictToLevel = RestrictToLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutComponentLists != nullptr)
		*OutComponentLists = params.OutComponentLists;
}


// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UStaticMesh*>     MeshFilter                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FStaticMeshActorList> OutActorLists                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// class ULevel*                  RestrictToLevel                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStaticMeshActorBlueprintLibrary::FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshActorList>* OutActorLists)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors"));}

	UStaticMeshActorBlueprintLibrary_FindAllStaticMeshActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MeshFilter = MeshFilter;
	params.RestrictToLevel = RestrictToLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActorLists != nullptr)
		*OutActorLists = params.OutActorLists;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
