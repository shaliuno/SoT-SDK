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

// Function Water.FFTWaterInterface.SetComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UFFTWaterComponent*      InFFTWaterComponent            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UFFTWaterInterface::SetComponent(class UFFTWaterComponent* InFFTWaterComponent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterInterface.SetComponent"));}

	UFFTWaterInterface_SetComponent_Params params;
	params.InFFTWaterComponent = InFFTWaterComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.FFTWaterInterface.SetActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AAthenaFFTWater*         InFFTWaterActor                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFFTWaterInterface::SetActor(class AAthenaFFTWater* InFFTWaterActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterInterface.SetActor"));}

	UFFTWaterInterface_SetActor_Params params;
	params.InFFTWaterActor = InFFTWaterActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.FFTWaterInterface.GetComponent
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UFFTWaterComponent*      ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UFFTWaterComponent* UFFTWaterInterface::GetComponent()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterInterface.GetComponent"));}

	UFFTWaterInterface_GetComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.FFTWaterInterface.GetActor
// (FUNC_BlueprintCosmetic)
// Parameters:
// class AAthenaFFTWater*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AAthenaFFTWater* UFFTWaterInterface::GetActor()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterInterface.GetActor"));}

	UFFTWaterInterface_GetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterInterface.IsReadyToBeQueried
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWaterInterface::IsReadyToBeQueried()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.IsReadyToBeQueried"));}

	UWaterInterface_IsReadyToBeQueried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FVector                 SamplePosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ApproxVelocity                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Normal                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ChoppynessScalar               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterInformationWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, float ChoppynessScalar, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness"));}

	UWaterInterface_GetWaterInformationWithScaledChoppyness_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;
	params.ChoppynessScalar = ChoppynessScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
	if (ApproxVelocity != nullptr)
		*ApproxVelocity = params.ApproxVelocity;
	if (Normal != nullptr)
		*Normal = params.Normal;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterInformationBatched
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// TArray<struct FVector2D>       SamplePositions                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  Heights                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FVector2D>       ApproxVelocities               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FVector>         Normals                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterInformationBatched(TArray<struct FVector2D> SamplePositions, class AActor* Actor, TArray<float>* Heights, TArray<struct FVector2D>* ApproxVelocities, TArray<struct FVector>* Normals)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetWaterInformationBatched"));}

	UWaterInterface_GetWaterInformationBatched_Params params;
	params.SamplePositions = SamplePositions;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Heights != nullptr)
		*Heights = params.Heights;
	if (ApproxVelocities != nullptr)
		*ApproxVelocities = params.ApproxVelocities;
	if (Normals != nullptr)
		*Normals = params.Normals;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterInformation
// (FUNC_Final, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FVector                 SamplePosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ApproxVelocity                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Normal                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterInformation(const struct FVector& SamplePosition, class AActor* Actor, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetWaterInformation"));}

	UWaterInterface_GetWaterInformation_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
	if (ApproxVelocity != nullptr)
		*ApproxVelocity = params.ApproxVelocity;
	if (Normal != nullptr)
		*Normal = params.Normal;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_NetServer)
// Parameters:
// struct FVector                 SamplePosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Interpolate                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ChoppynessScalar               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterHeightWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float ChoppynessScalar, float* Height)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness"));}

	UWaterInterface_GetWaterHeightWithScaledChoppyness_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;
	params.Interpolate = Interpolate;
	params.ChoppynessScalar = ChoppynessScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterHeightsBatched
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_NetServer)
// Parameters:
// TArray<struct FVector2D>       SamplePositions                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<float>                  Heights                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterHeightsBatched(TArray<struct FVector2D> SamplePositions, class AActor* Actor, TArray<float>* Heights)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetWaterHeightsBatched"));}

	UWaterInterface_GetWaterHeightsBatched_Params params;
	params.SamplePositions = SamplePositions;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Heights != nullptr)
		*Heights = params.Heights;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetWaterHeight
// (FUNC_Final, FUNC_NetServer)
// Parameters:
// struct FVector                 SamplePosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Interpolate                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TEnumAsByte<EWaterQueryResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EWaterQueryResult> UWaterInterface::GetWaterHeight(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetWaterHeight"));}

	UWaterInterface_GetWaterHeight_Params params;
	params.SamplePosition = SamplePosition;
	params.Actor = Actor;
	params.Interpolate = Interpolate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetIsActorUsingNonDefaultWaterPlane
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWaterInterface::GetIsActorUsingNonDefaultWaterPlane(class AActor* Actor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetIsActorUsingNonDefaultWaterPlane"));}

	UWaterInterface_GetIsActorUsingNonDefaultWaterPlane_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetActorWaterPlane
// (FUNC_Net, FUNC_Delegate)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWaterSimPlane          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FWaterSimPlane UWaterInterface::GetActorWaterPlane(class AActor* Actor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetActorWaterPlane"));}

	UWaterInterface_GetActorWaterPlane_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterInterface.GetActorWaterInformation
// (FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWaterInformation       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FWaterInformation UWaterInterface::GetActorWaterInformation(class AActor* Actor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInterface.GetActorWaterInformation"));}

	UWaterInterface_GetActorWaterInformation_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.FFTWaterService.OnRep_FFTWaterComponent
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AFFTWaterService::OnRep_FFTWaterComponent()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterService.OnRep_FFTWaterComponent"));}

	AFFTWaterService_OnRep_FFTWaterComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.FFTWaterService.OnRep_FFTWaterActor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AFFTWaterService::OnRep_FFTWaterActor()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterService.OnRep_FFTWaterActor"));}

	AFFTWaterService_OnRep_FFTWaterActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.FFTWaterPerformanceCountService.EndScopePerformanceCount
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FFFTWaterPerformanceCountData ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFFTWaterPerformanceCountData AFFTWaterPerformanceCountService::EndScopePerformanceCount()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterPerformanceCountService.EndScopePerformanceCount"));}

	AFFTWaterPerformanceCountService_EndScopePerformanceCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.FFTWaterPerformanceCountService.BeginScopePerformanceCount
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AFFTWaterPerformanceCountService::BeginScopePerformanceCount()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.FFTWaterPerformanceCountService.BeginScopePerformanceCount"));}

	AFFTWaterPerformanceCountService_BeginScopePerformanceCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFlatWaterPlaneComponent::OnActorLeaveWaterPlane(class AActor* Actor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane"));}

	UFlatWaterPlaneComponent_OnActorLeaveWaterPlane_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFlatWaterPlaneComponent::OnActorEnterWaterPlane(class AActor* Actor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane"));}

	UFlatWaterPlaneComponent_OnActorEnterWaterPlane_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace
// (FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Protected)
// Parameters:
// struct FVector                 WorldSpacePosition             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UFlatWaterPlaneComponent::ConvertToWaterSpace(const struct FVector& WorldSpacePosition)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace"));}

	UFlatWaterPlaneComponent_ConvertToWaterSpace_Params params;
	params.WorldSpacePosition = WorldSpacePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_Private, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// class AActor*                  InOwner                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWaterBuoyancy          InWaterBuoyancy                (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          InDeltaTime                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InChoppinessScalar             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FakeZOffsetGeneratorScalar     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWaterBuoyancyFunctionLibrary::TickBuoyancy(class AActor* InOwner, float InDeltaTime, float InChoppinessScalar, float FakeZOffsetGeneratorScalar, struct FWaterBuoyancy* InWaterBuoyancy)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy"));}

	UWaterBuoyancyFunctionLibrary_TickBuoyancy_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;
	params.InChoppinessScalar = InChoppinessScalar;
	params.FakeZOffsetGeneratorScalar = FakeZOffsetGeneratorScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;

	return params.ReturnValue;
}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FWaterBuoyancy          InWaterBuoyancy                (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ZOffset                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaterBuoyancyFunctionLibrary::SetBuoyancySamplesZOffsetSymmetricalAroundXAxis(float ZOffset, struct FWaterBuoyancy* InWaterBuoyancy)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis"));}

	UWaterBuoyancyFunctionLibrary_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis_Params params;
	params.ZOffset = ZOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FWaterBuoyancy          InWaterBuoyancy                (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          UnaryBlendOverride             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaterBuoyancyFunctionLibrary::SetBuoyancyProbeCurveBlendDebugOverride(float UnaryBlendOverride, struct FWaterBuoyancy* InWaterBuoyancy)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride"));}

	UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlendDebugOverride_Params params;
	params.UnaryBlendOverride = UnaryBlendOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
}


// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FWaterBuoyancy          InWaterBuoyancy                (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          Blend                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EBuoyancyBlend>    BlendType                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaterBuoyancyFunctionLibrary::SetBuoyancyProbeCurveBlend(float Blend, TEnumAsByte<EBuoyancyBlend> BlendType, struct FWaterBuoyancy* InWaterBuoyancy)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend"));}

	UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlend_Params params;
	params.Blend = Blend;
	params.BlendType = BlendType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  InActor                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWaterBuoyancy          InWaterBuoyancy                (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FBuoyancySampleMovement InSampleMovement               (CPF_Parm, CPF_OutParm)
// float                          DeltaTime                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRigidBodyTouchingLand         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaterBuoyancySampleMovementFunctionLibrary::TickLocalSampleMovement(class AActor* InActor, float DeltaTime, bool bRigidBodyTouchingLand, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement"));}

	UWaterBuoyancySampleMovementFunctionLibrary_TickLocalSampleMovement_Params params;
	params.InActor = InActor;
	params.DeltaTime = DeltaTime;
	params.bRigidBodyTouchingLand = bRigidBodyTouchingLand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex
// (FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  InActor                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWaterBuoyancy          InWaterBuoyancy                (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FBuoyancySampleMovement InSampleMovement               (CPF_Parm, CPF_OutParm)

void UWaterBuoyancySampleMovementFunctionLibrary::StartMovingVolumeSamplesLocallyByRandomConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex"));}

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  InActor                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWaterBuoyancy          InWaterBuoyancy                (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FBuoyancySampleMovement InSampleMovement               (CPF_Parm, CPF_OutParm)
// int                            ConfigurationIndex             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaterBuoyancySampleMovementFunctionLibrary::StartMovingVolumeSamplesLocallyByConfigurationIndex(class AActor* InActor, int ConfigurationIndex, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex"));}

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByConfigurationIndex_Params params;
	params.InActor = InActor;
	params.ConfigurationIndex = ConfigurationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
}


// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  InActor                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWaterBuoyancy          InWaterBuoyancy                (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FBuoyancySampleMovement InSampleMovement               (CPF_Parm, CPF_OutParm)
// class UCurveVector*            InCenterOfMassOffsetCurve      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FBuoyancySampleMovementConfigurationEntry> NewSampleData                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// float                          BuoyancyScalarAtNewPosition    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             BuoyancyScalarCurve            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MoveTime                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaterBuoyancySampleMovementFunctionLibrary::StartMovingVolumeSamplesLocally(class AActor* InActor, class UCurveVector* InCenterOfMassOffsetCurve, float BuoyancyScalarAtNewPosition, class UCurveFloat* BuoyancyScalarCurve, float MoveTime, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, TArray<struct FBuoyancySampleMovementConfigurationEntry>* NewSampleData)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally"));}

	UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocally_Params params;
	params.InActor = InActor;
	params.InCenterOfMassOffsetCurve = InCenterOfMassOffsetCurve;
	params.BuoyancyScalarAtNewPosition = BuoyancyScalarAtNewPosition;
	params.BuoyancyScalarCurve = BuoyancyScalarCurve;
	params.MoveTime = MoveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWaterBuoyancy != nullptr)
		*InWaterBuoyancy = params.InWaterBuoyancy;
	if (InSampleMovement != nullptr)
		*InSampleMovement = params.InSampleMovement;
	if (NewSampleData != nullptr)
		*NewSampleData = params.NewSampleData;
}


// Function Water.WaterInteractionComponent.LeaveWaterPlane
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UBaseWaterComponent*     WaterComponent                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWaterInteractionComponent::LeaveWaterPlane(class UBaseWaterComponent* WaterComponent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.LeaveWaterPlane"));}

	UWaterInteractionComponent_LeaveWaterPlane_Params params;
	params.WaterComponent = WaterComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.WaterInteractionComponent.LeaveWaterExclusionZone
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UWaterInteractionComponent::LeaveWaterExclusionZone()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.LeaveWaterExclusionZone"));}

	UWaterInteractionComponent_LeaveWaterExclusionZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.WaterInteractionComponent.IsInWaterExcludedZone
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWaterInteractionComponent::IsInWaterExcludedZone()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.IsInWaterExcludedZone"));}

	UWaterInteractionComponent_IsInWaterExcludedZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.GetWaterPlaneComponent
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UBaseWaterComponent*     ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UBaseWaterComponent* UWaterInteractionComponent::GetWaterPlaneComponent()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.GetWaterPlaneComponent"));}

	UWaterInteractionComponent_GetWaterPlaneComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes
// (FUNC_Final)
// Parameters:
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

unsigned char UWaterInteractionComponent::GetNumberOfWaterPlanes()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes"));}

	UWaterInteractionComponent_GetNumberOfWaterPlanes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterInteractionComponent.EnterWaterPlane
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UBaseWaterComponent*     WaterComponent                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWaterInteractionComponent::EnterWaterPlane(class UBaseWaterComponent* WaterComponent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.EnterWaterPlane"));}

	UWaterInteractionComponent_EnterWaterPlane_Params params;
	params.WaterComponent = WaterComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.WaterInteractionComponent.EnterWaterExclusionZone
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UWaterInteractionComponent::EnterWaterExclusionZone()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponent.EnterWaterExclusionZone"));}

	UWaterInteractionComponent_EnterWaterExclusionZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.WaterInteractionComponentProviderInterface.GetWaterInteractionComponent
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWaterInteractionComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWaterInteractionComponent* UWaterInteractionComponentProviderInterface::GetWaterInteractionComponent()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterInteractionComponentProviderInterface.GetWaterInteractionComponent"));}

	UWaterInteractionComponentProviderInterface_GetWaterInteractionComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterPlaneExclusionComponent.OnOverlapEnd
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaterPlaneExclusionComponent::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterPlaneExclusionComponent.OnOverlapEnd"));}

	UWaterPlaneExclusionComponent_OnOverlapEnd_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.WaterPlaneExclusionComponent.OnOverlapBegin
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           FromSweep                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWaterPlaneExclusionComponent::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterPlaneExclusionComponent.OnOverlapBegin"));}

	UWaterPlaneExclusionComponent_OnOverlapBegin_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.WaterSplashProbeFunctionLibrary.TickProbes
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  InOwner                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FWaterSplashProbe> InSplashProbes                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          InDeltaTime                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaterSplashProbeFunctionLibrary::TickProbes(class AActor* InOwner, float InDeltaTime, TArray<struct FWaterSplashProbe>* InSplashProbes)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterSplashProbeFunctionLibrary.TickProbes"));}

	UWaterSplashProbeFunctionLibrary_TickProbes_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;
}


// Function Water.WaterSplashProbeFunctionLibrary.TickProbe
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  InOwner                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWaterSplashProbe       InSplashProbe                  (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          InDeltaTime                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaterSplashProbeFunctionLibrary::TickProbe(class AActor* InOwner, float InDeltaTime, struct FWaterSplashProbe* InSplashProbe)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterSplashProbeFunctionLibrary.TickProbe"));}

	UWaterSplashProbeFunctionLibrary_TickProbe_Params params;
	params.InOwner = InOwner;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSplashProbe != nullptr)
		*InSplashProbe = params.InSplashProbe;
}


// Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<struct FWaterSplashProbe> InSplashProbes                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          SamplingTime                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaterSplashProbeFunctionLibrary::SetSamplingTime(float SamplingTime, TArray<struct FWaterSplashProbe>* InSplashProbes)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime"));}

	UWaterSplashProbeFunctionLibrary_SetSamplingTime_Params params;
	params.SamplingTime = SamplingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;
}


// Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd
// (FUNC_Private, FUNC_Delegate)
// Parameters:
// TArray<struct FWaterSplashProbe> InSplashProbes                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            ProbeIndex                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UWaterSplashProbeFunctionLibrary::GetRelativeWaterHeightChangeSpd(int ProbeIndex, TArray<struct FWaterSplashProbe>* InSplashProbes)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd"));}

	UWaterSplashProbeFunctionLibrary_GetRelativeWaterHeightChangeSpd_Params params;
	params.ProbeIndex = ProbeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSplashProbes != nullptr)
		*InSplashProbes = params.InSplashProbes;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
