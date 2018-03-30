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

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Min                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Max                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Delta                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Hit_Min                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Hit_Max                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::DriveValueToClampByDelta(float Min, float Max, float Delta, class UObject* __WorldContext, float* Value, bool* Hit_Min, bool* Hit_Max)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta"));}

	UBP_LocomotionFunctionLibrary_C_DriveValueToClampByDelta_Params params;
	params.Min = Min;
	params.Max = Max;
	params.Delta = Delta;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Hit_Min != nullptr)
		*Hit_Min = params.Hit_Min;
	if (Hit_Max != nullptr)
		*Hit_Max = params.Hit_Max;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Animation_Hand_IK_Location     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LowerRopeLocation              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 UpperRopeLocation              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location_On_Rope               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::FindSailControlHandIKPositionFromAnimation(const struct FVector& Animation_Hand_IK_Location, const struct FVector& LowerRopeLocation, const struct FVector& UpperRopeLocation, class UObject* __WorldContext, struct FVector* Location_On_Rope)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation"));}

	UBP_LocomotionFunctionLibrary_C_FindSailControlHandIKPositionFromAnimation_Params params;
	params.Animation_Hand_IK_Location = Animation_Hand_IK_Location;
	params.LowerRopeLocation = LowerRopeLocation;
	params.UpperRopeLocation = UpperRopeLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location_On_Rope != nullptr)
		*Location_On_Rope = params.Location_On_Rope;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class UBlendSpace*>     TargetArrayBlendspace          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UBlendSpace*>     LoadedArrayDataBlendspace      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UBlendSpace*             FallbackBlendspace             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ArrayLoadingFromDataDrivenBlendSpace(class UBlendSpace* FallbackBlendspace, class UObject* __WorldContext, TArray<class UBlendSpace*>* TargetArrayBlendspace, TArray<class UBlendSpace*>* LoadedArrayDataBlendspace)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace"));}

	UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDrivenBlendSpace_Params params;
	params.FallbackBlendspace = FallbackBlendspace;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArrayBlendspace != nullptr)
		*TargetArrayBlendspace = params.TargetArrayBlendspace;
	if (LoadedArrayDataBlendspace != nullptr)
		*LoadedArrayDataBlendspace = params.LoadedArrayDataBlendspace;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class UBlendSpace1D*>   TargetArray_1D                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UBlendSpace1D*>   LoadedArrayData_1D             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UBlendSpace1D*           FallbackBlendspace1D           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ArrayLoadingFromDataDriven1DBlendSpace(class UBlendSpace1D* FallbackBlendspace1D, class UObject* __WorldContext, TArray<class UBlendSpace1D*>* TargetArray_1D, TArray<class UBlendSpace1D*>* LoadedArrayData_1D)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace"));}

	UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven1DBlendSpace_Params params;
	params.FallbackBlendspace1D = FallbackBlendspace1D;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray_1D != nullptr)
		*TargetArray_1D = params.TargetArray_1D;
	if (LoadedArrayData_1D != nullptr)
		*LoadedArrayData_1D = params.LoadedArrayData_1D;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class UAnimSequence*>   TargetArray                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UAnimSequence*>   LoadedArrayData                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UAnimSequence*           FallbackAnimation              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ArrayLoadingFromDataDriven(class UAnimSequence* FallbackAnimation, class UObject* __WorldContext, TArray<class UAnimSequence*>* TargetArray, TArray<class UAnimSequence*>* LoadedArrayData)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven"));}

	UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven_Params params;
	params.FallbackAnimation = FallbackAnimation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
	if (LoadedArrayData != nullptr)
		*LoadedArrayData = params.LoadedArrayData;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EIKLimbName>       Limb_ID                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Active                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ELimbIKSpace>      Coordinate_Space               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Translation_Strength           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Rotation_Strength              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              Transform                      (CPF_Parm, CPF_IsPlainOldData)
// float                          BlendIn                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BlendOut                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_IK_Limb_Controls(class USkeletalMeshComponent* SkeletalMeshComponent, TEnumAsByte<EIKLimbName> Limb_ID, bool Active, TEnumAsByte<ELimbIKSpace> Coordinate_Space, float Translation_Strength, float Rotation_Strength, const struct FTransform& Transform, float BlendIn, float BlendOut, class UObject* __WorldContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls"));}

	UBP_LocomotionFunctionLibrary_C_Update_IK_Limb_Controls_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.Limb_ID = Limb_ID;
	params.Active = Active;
	params.Coordinate_Space = Coordinate_Space;
	params.Translation_Strength = Translation_Strength;
	params.Rotation_Strength = Rotation_Strength;
	params.Transform = Transform;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            Decrement                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Decrement_Integer(int Decrement, class UObject* __WorldContext, int* Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer"));}

	UBP_LocomotionFunctionLibrary_C_Decrement_Integer_Params params;
	params.Decrement = Decrement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            integer                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            Increment                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Increment_Integer(int Increment, class UObject* __WorldContext, int* integer)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer"));}

	UBP_LocomotionFunctionLibrary_C_Increment_Integer_Params params;
	params.Increment = Increment;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (integer != nullptr)
		*integer = params.integer;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           TurnLeft                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrentControllerYaw           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PreviousControllerYaw          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FBP_Turning             Turning                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Calculate_Turn_Times(bool TurnLeft, float CurrentControllerYaw, class UObject* __WorldContext, float* PreviousControllerYaw, struct FBP_Turning* Turning)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times"));}

	UBP_LocomotionFunctionLibrary_C_Calculate_Turn_Times_Params params;
	params.TurnLeft = TurnLeft;
	params.CurrentControllerYaw = CurrentControllerYaw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PreviousControllerYaw != nullptr)
		*PreviousControllerYaw = params.PreviousControllerYaw;
	if (Turning != nullptr)
		*Turning = params.Turning;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate
// (FUNC_Final, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// bool                           InZone                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Min                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Max                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBP_Turning             Turning                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBP_LocomotionFunctionLibrary_C::InRangeAndRate(bool InZone, float Min, float Max, class UObject* __WorldContext, struct FBP_Turning* Turning)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate"));}

	UBP_LocomotionFunctionLibrary_C_InRangeAndRate_Params params;
	params.InZone = InZone;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Turning != nullptr)
		*Turning = params.Turning;

	return params.ReturnValue;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FBP_Turning             Turning                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           InZone                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Turn_State_Change_Check(bool InZone, class UObject* __WorldContext, struct FBP_Turning* Turning)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check"));}

	UBP_LocomotionFunctionLibrary_C_Turn_State_Change_Check_Params params;
	params.InZone = InZone;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Turning != nullptr)
		*Turning = params.Turning;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Min                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Max                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBP_LocomotionFunctionLibrary_C::Not_In_Range(float Value, float Min, float Max, class UObject* __WorldContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range"));}

	UBP_LocomotionFunctionLibrary_C_Not_In_Range_Params params;
	params.Value = Value;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FBP_Turning             Turning                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Animation_Turn_State(class UObject* __WorldContext, struct FBP_Turning* Turning)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State"));}

	UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_State_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Turning != nullptr)
		*Turning = params.Turning;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           TurningLeft                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrentTurnAngle               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Reset_Angle                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Previous_Controller_Yaw        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Current_Controller_Yaw         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Animation_Time                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Animation_Turn_Time(bool TurningLeft, float Reset_Angle, float Current_Controller_Yaw, class UObject* __WorldContext, float* CurrentTurnAngle, float* Previous_Controller_Yaw, float* Animation_Time)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time"));}

	UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_Time_Params params;
	params.TurningLeft = TurningLeft;
	params.Reset_Angle = Reset_Angle;
	params.Current_Controller_Yaw = Current_Controller_Yaw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentTurnAngle != nullptr)
		*CurrentTurnAngle = params.CurrentTurnAngle;
	if (Previous_Controller_Yaw != nullptr)
		*Previous_Controller_Yaw = params.Previous_Controller_Yaw;
	if (Animation_Time != nullptr)
		*Animation_Time = params.Animation_Time;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class ACharacter*              PlayerCharacter                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MovementSpeed                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FrameDelta                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          JumpImpactTimerMax             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TEnumAsByte<EJumping>          JumpingState                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          PreImpactTime                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          JumpImpactTimer                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::JumpingLogic(class ACharacter* PlayerCharacter, float MovementSpeed, float FrameDelta, class UObject* __WorldContext, float* JumpImpactTimerMax, TEnumAsByte<EJumping>* JumpingState, float* PreImpactTime, float* JumpImpactTimer)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic"));}

	UBP_LocomotionFunctionLibrary_C_JumpingLogic_Params params;
	params.PlayerCharacter = PlayerCharacter;
	params.MovementSpeed = MovementSpeed;
	params.FrameDelta = FrameDelta;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpImpactTimerMax != nullptr)
		*JumpImpactTimerMax = params.JumpImpactTimerMax;
	if (JumpingState != nullptr)
		*JumpingState = params.JumpingState;
	if (PreImpactTime != nullptr)
		*PreImpactTime = params.PreImpactTime;
	if (JumpImpactTimer != nullptr)
		*JumpImpactTimer = params.JumpImpactTimer;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          BlendCounter                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           IKON                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Translation_Strength           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Rotation_Strength              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TEnumAsByte<EEasingFunc>       EaseingType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BlendMax                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FrameDeltaTime                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Ik_Blending(bool IKON, TEnumAsByte<EEasingFunc> EaseingType, float BlendMax, float FrameDeltaTime, class UObject* __WorldContext, float* BlendCounter, float* Translation_Strength, float* Rotation_Strength)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending"));}

	UBP_LocomotionFunctionLibrary_C_Ik_Blending_Params params;
	params.IKON = IKON;
	params.EaseingType = EaseingType;
	params.BlendMax = BlendMax;
	params.FrameDeltaTime = FrameDeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BlendCounter != nullptr)
		*BlendCounter = params.BlendCounter;
	if (Translation_Strength != nullptr)
		*Translation_Strength = params.Translation_Strength;
	if (Rotation_Strength != nullptr)
		*Rotation_Strength = params.Rotation_Strength;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Counter                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CounterMax                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Hit_Max_Count                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          IncrementedCounter             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Increment_Counter(float Counter, float CounterMax, float DeltaTime, class UObject* __WorldContext, bool* Hit_Max_Count, float* IncrementedCounter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter"));}

	UBP_LocomotionFunctionLibrary_C_Increment_Counter_Params params;
	params.Counter = Counter;
	params.CounterMax = CounterMax;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit_Max_Count != nullptr)
		*Hit_Max_Count = params.Hit_Max_Count;
	if (IncrementedCounter != nullptr)
		*IncrementedCounter = params.IncrementedCounter;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Counter                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CounterMin                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Hit_Min_Count                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DecrementedCounter             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Decrement_Counter(float Counter, float CounterMin, float DeltaTime, class UObject* __WorldContext, bool* Hit_Min_Count, float* DecrementedCounter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter"));}

	UBP_LocomotionFunctionLibrary_C_Decrement_Counter_Params params;
	params.Counter = Counter;
	params.CounterMin = CounterMin;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit_Min_Count != nullptr)
		*Hit_Min_Count = params.Hit_Min_Count;
	if (DecrementedCounter != nullptr)
		*DecrementedCounter = params.DecrementedCounter;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          CurrentTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxTime                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EEasingFunc>       EasingType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Return_Val___0_1               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Out_Over_Time(float CurrentTime, float MaxTime, TEnumAsByte<EEasingFunc> EasingType, class UObject* __WorldContext, float* Return_Val___0_1)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time"));}

	UBP_LocomotionFunctionLibrary_C_Out_Over_Time_Params params;
	params.CurrentTime = CurrentTime;
	params.MaxTime = MaxTime;
	params.EasingType = EasingType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Val___0_1 != nullptr)
		*Return_Val___0_1 = params.Return_Val___0_1;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           TurningLeft                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Current_Controller_Yaw         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Previous_Controller_Yaw        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FBP_Turning             Turning                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Animation_Times(bool TurningLeft, float Current_Controller_Yaw, class UObject* __WorldContext, float* Previous_Controller_Yaw, struct FBP_Turning* Turning)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times"));}

	UBP_LocomotionFunctionLibrary_C_Update_Animation_Times_Params params;
	params.TurningLeft = TurningLeft;
	params.Current_Controller_Yaw = Current_Controller_Yaw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Previous_Controller_Yaw != nullptr)
		*Previous_Controller_Yaw = params.Previous_Controller_Yaw;
	if (Turning != nullptr)
		*Turning = params.Turning;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           TurningLeft                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrentYaw                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PreviousYaw                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FrameDeltaTime                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBP_Turning             Turning                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Update_Turn_Animations(bool TurningLeft, float CurrentYaw, float PreviousYaw, float FrameDeltaTime, class UObject* __WorldContext, struct FBP_Turning* Turning)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations"));}

	UBP_LocomotionFunctionLibrary_C_Update_Turn_Animations_Params params;
	params.TurningLeft = TurningLeft;
	params.CurrentYaw = CurrentYaw;
	params.PreviousYaw = PreviousYaw;
	params.FrameDeltaTime = FrameDeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Turning != nullptr)
		*Turning = params.Turning;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          CurrentYaw                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PreviousYaw                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewPreviousYaw                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Fix_Yaw_Wraparound(float CurrentYaw, float PreviousYaw, class UObject* __WorldContext, float* NewPreviousYaw)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound"));}

	UBP_LocomotionFunctionLibrary_C_Fix_Yaw_Wraparound_Params params;
	params.CurrentYaw = CurrentYaw;
	params.PreviousYaw = PreviousYaw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPreviousYaw != nullptr)
		*NewPreviousYaw = params.NewPreviousYaw;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Direction_A                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Direction_B                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReflexAngle                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ReflexAngleCheck(float Direction_A, float Direction_B, class UObject* __WorldContext, bool* ReflexAngle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck"));}

	UBP_LocomotionFunctionLibrary_C_ReflexAngleCheck_Params params;
	params.Direction_A = Direction_A;
	params.Direction_B = Direction_B;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReflexAngle != nullptr)
		*ReflexAngle = params.ReflexAngle;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Pitch                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Yaw                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::ControllerRotation(class ACharacter* Character, class UObject* __WorldContext, float* Pitch, float* Yaw)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation"));}

	UBP_LocomotionFunctionLibrary_C_ControllerRotation_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Velocity                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Speed                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocomotionFunctionLibrary_C::Character_Speed(class ACharacter* Character, class UObject* __WorldContext, struct FVector* Velocity, float* Speed)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed"));}

	UBP_LocomotionFunctionLibrary_C_Character_Speed_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
	if (Speed != nullptr)
		*Speed = params.Speed;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
