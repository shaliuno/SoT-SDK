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

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 LineStart                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LineEnd                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Intersect                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 IntersectionPoint              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_LargeShip_StandardHull_InternalShipWater_C::GetLineIntersectionFromPlane(const struct FVector& LineStart, const struct FVector& LineEnd, bool* Intersect, struct FVector* IntersectionPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane"));}

	ABP_LargeShip_StandardHull_InternalShipWater_C_GetLineIntersectionFromPlane_Params params;
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


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetWaterLevel
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          WaterLevel                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_LargeShip_StandardHull_InternalShipWater_C::GetWaterLevel(float* WaterLevel)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetWaterLevel"));}

	ABP_LargeShip_StandardHull_InternalShipWater_C_GetWaterLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaterLevel != nullptr)
		*WaterLevel = params.WaterLevel;
}


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_LargeShip_StandardHull_InternalShipWater_C::GetDistanceFromPlane(const struct FVector& Location, float* Distance)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane"));}

	ABP_LargeShip_StandardHull_InternalShipWater_C_GetDistanceFromPlane_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.UserConstructionScript
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ABP_LargeShip_StandardHull_InternalShipWater_C::UserConstructionScript()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.UserConstructionScript"));}

	ABP_LargeShip_StandardHull_InternalShipWater_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.AddWater
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Water_Amount                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_LargeShip_StandardHull_InternalShipWater_C::AddWater(float Water_Amount)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.AddWater"));}

	ABP_LargeShip_StandardHull_InternalShipWater_C_AddWater_Params params;
	params.Water_Amount = Water_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ABP_LargeShip_StandardHull_InternalShipWater_C::ReceiveBeginPlay()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay"));}

	ABP_LargeShip_StandardHull_InternalShipWater_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_LargeShip_StandardHull_InternalShipWater_C::ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater(int EntryPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater"));}

	ABP_LargeShip_StandardHull_InternalShipWater_C_ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
