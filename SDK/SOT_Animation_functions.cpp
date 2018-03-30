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

// Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FAnimDataEntryStructWrapper Wrapper                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UScriptStruct*           DestinationStruct              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGenericStruct          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAnimationDataFunctionLib::UnwrapAnimDataEntryStruct(const struct FAnimDataEntryStructWrapper& Wrapper, class UScriptStruct* DestinationStruct, struct FGenericStruct* Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct"));}

	UAnimationDataFunctionLib_UnwrapAnimDataEntryStruct_Params params;
	params.Wrapper = Wrapper;
	params.DestinationStruct = DestinationStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.MakeAnimationData
// (FUNC_Protected)
// Parameters:
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimationData*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimationData* UAnimationDataFunctionLib::MakeAnimationData(class UClass* Class)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataFunctionLib.MakeAnimationData"));}

	UAnimationDataFunctionLib_MakeAnimationData_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper
// (FUNC_Delegate)
// Parameters:
// class UAnimationData*          AnimationDataObject            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UScriptStruct*           TheClass                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAnimDataEntryStructWrapper ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAnimDataEntryStructWrapper UAnimationDataFunctionLib::GetAnimDataEntryStructAsStructWrapper(class UAnimationData* AnimationDataObject, class UScriptStruct* TheClass)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper"));}

	UAnimationDataFunctionLib_GetAnimDataEntryStructAsStructWrapper_Params params;
	params.AnimationDataObject = AnimationDataObject;
	params.TheClass = TheClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  InClass                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimationDataFunctionLib::CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(class UClass* InClass)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs"));}

	UAnimationDataFunctionLib_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.AnimationDataStoreAsset.LookupAnimationData
// (FUNC_Protected)
// Parameters:
// class UClass*                  AnimDataId                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimationData*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimationData* UAnimationDataStoreAsset::LookupAnimationData(class UClass* AnimDataId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataStoreAsset.LookupAnimationData"));}

	UAnimationDataStoreAsset_LookupAnimationData_Params params;
	params.AnimDataId = AnimDataId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.AnimationDataStoreInterface.GetAnimationDataForId
// (FUNC_Protected)
// Parameters:
// class UClass*                  AnimDataId                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimationData*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimationData* UAnimationDataStoreInterface::GetAnimationDataForId(class UClass* AnimDataId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataStoreInterface.GetAnimationDataForId"));}

	UAnimationDataStoreInterface_GetAnimationDataForId_Params params;
	params.AnimDataId = AnimDataId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.DockableInterface.HandleDestroy
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UDockableInterface::HandleDestroy()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.DockableInterface.HandleDestroy"));}

	UDockableInterface_HandleDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.DockableInterface.GetDockableInfo
// ()
// Parameters:
// struct FDockableInfo           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FDockableInfo UDockableInterface::GetDockableInfo()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.DockableInterface.GetDockableInfo"));}

	UDockableInterface_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.UpdateDock
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FDocker                 Docker                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          DeltaTime                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDockerBlueprintFunctions::UpdateDock(float DeltaTime, struct FDocker* Docker)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.DockerBlueprintFunctions.UpdateDock"));}

	UDockerBlueprintFunctions_UpdateDock_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;
}


// Function Animation.DockerBlueprintFunctions.StartDockingWithActor
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FDocker                 Docker                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AActor*                  Owner                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DockDuration                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDockerBlueprintFunctions::StartDockingWithActor(class AActor* Owner, class AActor* Target, float DockDuration, struct FDocker* Docker)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.DockerBlueprintFunctions.StartDockingWithActor"));}

	UDockerBlueprintFunctions_StartDockingWithActor_Params params;
	params.Owner = Owner;
	params.Target = Target;
	params.DockDuration = DockDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;
}


// Function Animation.DockerBlueprintFunctions.IsFullyDocked
// (FUNC_Final, FUNC_Net, FUNC_HasOutParms)
// Parameters:
// struct FDocker                 Docker                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDockerBlueprintFunctions::IsFullyDocked(struct FDocker* Docker)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.DockerBlueprintFunctions.IsFullyDocked"));}

	UDockerBlueprintFunctions_IsFullyDocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.IsDocking
// (FUNC_Final, FUNC_Net, FUNC_HasOutParms)
// Parameters:
// struct FDocker                 Docker                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDockerBlueprintFunctions::IsDocking(struct FDocker* Docker)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.DockerBlueprintFunctions.IsDocking"));}

	UDockerBlueprintFunctions_IsDocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.GetTargetLocalOffset
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_HasOutParms)
// Parameters:
// struct FDocker                 Docker                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UDockerBlueprintFunctions::GetTargetLocalOffset(const struct FDocker& Docker)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.DockerBlueprintFunctions.GetTargetLocalOffset"));}

	UDockerBlueprintFunctions_GetTargetLocalOffset_Params params;
	params.Docker = Docker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.EndDock
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FDocker                 Docker                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDockerBlueprintFunctions::EndDock(struct FDocker* Docker)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.DockerBlueprintFunctions.EndDock"));}

	UDockerBlueprintFunctions_EndDock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;
}


// Function Animation.LimbIKFunctionLibrary.SetTranslationStrength
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          InRotationStrength             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULimbIKFunctionLibrary::SetTranslationStrength(float InRotationStrength, struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetTranslationStrength"));}

	ULimbIKFunctionLibrary_SetTranslationStrength_Params params;
	params.InRotationStrength = InRotationStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetTransform
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTransform              InTransform                    (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)

void ULimbIKFunctionLibrary::SetTransform(const struct FTransform& InTransform, struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetTransform"));}

	ULimbIKFunctionLibrary_SetTransform_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetRotationStrength
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          InRotationStrength             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULimbIKFunctionLibrary::SetRotationStrength(float InRotationStrength, struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetRotationStrength"));}

	ULimbIKFunctionLibrary_SetRotationStrength_Params params;
	params.InRotationStrength = InRotationStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetParentBone
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   Bone                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void ULimbIKFunctionLibrary::SetParentBone(const struct FName& Bone, struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetParentBone"));}

	ULimbIKFunctionLibrary_SetParentBone_Params params;
	params.Bone = Bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetIKSpace
// (FUNC_Final, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ELimbIKSpace>      IKSpace                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULimbIKFunctionLibrary::SetIKSpace(TEnumAsByte<ELimbIKSpace> IKSpace, struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetIKSpace"));}

	ULimbIKFunctionLibrary_SetIKSpace_Params params;
	params.IKSpace = IKSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetEnabled
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Enabled                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ELimbIKSpace>      IKSpace                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ParentBone                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULimbIKFunctionLibrary::SetEnabled(bool Enabled, TEnumAsByte<ELimbIKSpace> IKSpace, const struct FName& ParentBone, struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetEnabled"));}

	ULimbIKFunctionLibrary_SetEnabled_Params params;
	params.Enabled = Enabled;
	params.IKSpace = IKSpace;
	params.ParentBone = ParentBone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          BlendOutSpeed                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULimbIKFunctionLibrary::SetBlendOutSpeed(float BlendOutSpeed, struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed"));}

	ULimbIKFunctionLibrary_SetBlendOutSpeed_Params params;
	params.BlendOutSpeed = BlendOutSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          BlendInSpeed                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULimbIKFunctionLibrary::SetBlendInSpeed(float BlendInSpeed, struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed"));}

	ULimbIKFunctionLibrary_SetBlendInSpeed_Params params;
	params.BlendInSpeed = BlendInSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetAnimationOverride
// (FUNC_Final, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           AnimationOverride              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULimbIKFunctionLibrary::SetAnimationOverride(bool AnimationOverride, struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetAnimationOverride"));}

	ULimbIKFunctionLibrary_SetAnimationOverride_Params params;
	params.AnimationOverride = AnimationOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetAlphaTarget
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          AlphaTarget                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULimbIKFunctionLibrary::SetAlphaTarget(float AlphaTarget, struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetAlphaTarget"));}

	ULimbIKFunctionLibrary_SetAlphaTarget_Params params;
	params.AlphaTarget = AlphaTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.IsEnabled
// (FUNC_Final, FUNC_Net, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULimbIKFunctionLibrary::IsEnabled(struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.IsEnabled"));}

	ULimbIKFunctionLibrary_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetTranslationStrength
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULimbIKFunctionLibrary::GetTranslationStrength(struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetTranslationStrength"));}

	ULimbIKFunctionLibrary_GetTranslationStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetTransform
// (FUNC_NetReliable, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform ULimbIKFunctionLibrary::GetTransform(struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetTransform"));}

	ULimbIKFunctionLibrary_GetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetRotationStrength
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULimbIKFunctionLibrary::GetRotationStrength(struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetRotationStrength"));}

	ULimbIKFunctionLibrary_GetRotationStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetParentBone
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName ULimbIKFunctionLibrary::GetParentBone(struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetParentBone"));}

	ULimbIKFunctionLibrary_GetParentBone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetIKSpace
// (FUNC_Final, FUNC_Net, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ELimbIKSpace>      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ELimbIKSpace> ULimbIKFunctionLibrary::GetIKSpace(struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetIKSpace"));}

	ULimbIKFunctionLibrary_GetIKSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULimbIKFunctionLibrary::GetCurrentAlpha(struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha"));}

	ULimbIKFunctionLibrary_GetCurrentAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetAnimationOverride
// (FUNC_Final, FUNC_Net, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULimbIKFunctionLibrary::GetAnimationOverride(struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetAnimationOverride"));}

	ULimbIKFunctionLibrary_GetAnimationOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetAlphaTarget
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FLimbIK                 LimbIK                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULimbIKFunctionLibrary::GetAlphaTarget(struct FLimbIK* LimbIK)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetAlphaTarget"));}

	ULimbIKFunctionLibrary_GetAlphaTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha
// (FUNC_BlueprintCosmetic, FUNC_Private)
// Parameters:
// bool                           InBool                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULimbIKFunctionLibrary::ConvertBoolToAlpha(bool InBool)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha"));}

	ULimbIKFunctionLibrary_ConvertBoolToAlpha_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation
// (FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Delegate)
// Parameters:
// struct FRotator                CharacterRotation              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          AngleSpeedMax                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AngleSpeedMin                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULocomotionFunctionLib::UpdateControllerSpineRotation(const struct FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation"));}

	ULocomotionFunctionLib_UpdateControllerSpineRotation_Params params;
	params.CharacterRotation = CharacterRotation;
	params.AngleSpeedMax = AngleSpeedMax;
	params.AngleSpeedMin = AngleSpeedMin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// struct FVector                 Velocity                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          CurrentMaxWalkSpeed            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          WantedMovementSpeed            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BaseMaxWalkSpeed               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SpeedBlendValue                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsSwimming                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FActorVelocityData      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActorVelocityData ULocomotionFunctionLib::UpdateCharacterSpeed(const struct FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed"));}

	ULocomotionFunctionLib_UpdateCharacterSpeed_Params params;
	params.Velocity = Velocity;
	params.CurrentMaxWalkSpeed = CurrentMaxWalkSpeed;
	params.WantedMovementSpeed = WantedMovementSpeed;
	params.BaseMaxWalkSpeed = BaseMaxWalkSpeed;
	params.SpeedBlendValue = SpeedBlendValue;
	params.IsSwimming = IsSwimming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FRotator                CharacterRotation              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          LargeRate                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrentCharacterYaw            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          DeltaSeconds                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULocomotionFunctionLib::UpdateCalculateRateAndCurrentYaw(const struct FRotator& CharacterRotation, float LargeRate, float DeltaSeconds, float* CurrentCharacterYaw)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw"));}

	ULocomotionFunctionLib_UpdateCalculateRateAndCurrentYaw_Params params;
	params.CharacterRotation = CharacterRotation;
	params.LargeRate = LargeRate;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCharacterYaw != nullptr)
		*CurrentCharacterYaw = params.CurrentCharacterYaw;

	return params.ReturnValue;
}


// Function Animation.TurningFunctionLib.TurningUpdate
// (FUNC_RequiredAPI, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Private, FUNC_Delegate)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           CharacterMoving                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DeadZone                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          TurnRate                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DelayedCounter                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          CounterMax                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TurningLeft                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTurningFunctionLib::TurningUpdate(float DeltaSeconds, bool CharacterMoving, float TurnRate, float CounterMax, bool* DeadZone, float* DelayedCounter, bool* TurningLeft)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.TurningFunctionLib.TurningUpdate"));}

	UTurningFunctionLib_TurningUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.CharacterMoving = CharacterMoving;
	params.TurnRate = TurnRate;
	params.CounterMax = CounterMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeadZone != nullptr)
		*DeadZone = params.DeadZone;
	if (DelayedCounter != nullptr)
		*DelayedCounter = params.DelayedCounter;
	if (TurningLeft != nullptr)
		*TurningLeft = params.TurningLeft;

	return params.ReturnValue;
}


// Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   path                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaitForAnimationStateEntryProxy::OnEnteredState(const struct FName& path)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState"));}

	UWaitForAnimationStateEntryProxy_OnEnteredState_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UWaitForAnimationStateEntryProxy::OnAnimationUpdated()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated"));}

	UWaitForAnimationStateEntryProxy_OnAnimationUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.WaitForAnimationStateEntryProxy.CreateProxy
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UAnimInstance*           AnimInstance                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TargetPath                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UWaitForAnimationStateEntryProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWaitForAnimationStateEntryProxy* UWaitForAnimationStateEntryProxy::CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateEntryProxy.CreateProxy"));}

	UWaitForAnimationStateEntryProxy_CreateProxy_Params params;
	params.AnimInstance = AnimInstance;
	params.TargetPath = TargetPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.WaitForAnimationStateExitProxy.OnExitState
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   path                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaitForAnimationStateExitProxy::OnExitState(const struct FName& path)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateExitProxy.OnExitState"));}

	UWaitForAnimationStateExitProxy_OnExitState_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UWaitForAnimationStateExitProxy::OnAnimationUpdated()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated"));}

	UWaitForAnimationStateExitProxy_OnAnimationUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.WaitForAnimationStateExitProxy.CreateProxy
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UAnimInstance*           AnimInstance                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TargetPath                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UWaitForAnimationStateExitProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWaitForAnimationStateExitProxy* UWaitForAnimationStateExitProxy::CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateExitProxy.CreateProxy"));}

	UWaitForAnimationStateExitProxy_CreateProxy_Params params;
	params.AnimInstance = AnimInstance;
	params.TargetPath = TargetPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
