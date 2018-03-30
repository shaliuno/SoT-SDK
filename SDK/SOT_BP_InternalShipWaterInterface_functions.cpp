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

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetLineIntersectionFromPlane
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 LineStart                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LineEnd                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Intersect                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 IntersectionPoint              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InternalShipWaterInterface_C::GetLineIntersectionFromPlane(const struct FVector& LineStart, const struct FVector& LineEnd, bool* Intersect, struct FVector* IntersectionPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetLineIntersectionFromPlane"));}

	UBP_InternalShipWaterInterface_C_GetLineIntersectionFromPlane_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intersect != nullptr)
		*Intersect = params.Intersect;
	if (IntersectionPoint != nullptr)
		*IntersectionPoint = params.IntersectionPoint;
}


// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetDistanceFromPlane
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InternalShipWaterInterface_C::GetDistanceFromPlane(const struct FVector& Location, float* Distance)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetDistanceFromPlane"));}

	UBP_InternalShipWaterInterface_C_GetDistanceFromPlane_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetWaterLevel
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          WaterLevel                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InternalShipWaterInterface_C::GetWaterLevel(float* WaterLevel)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetWaterLevel"));}

	UBP_InternalShipWaterInterface_C_GetWaterLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaterLevel != nullptr)
		*WaterLevel = params.WaterLevel;
}


// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.AddWater
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Water_Amount                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InternalShipWaterInterface_C::AddWater(float Water_Amount)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.AddWater"));}

	UBP_InternalShipWaterInterface_C_AddWater_Params params;
	params.Water_Amount = Water_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
