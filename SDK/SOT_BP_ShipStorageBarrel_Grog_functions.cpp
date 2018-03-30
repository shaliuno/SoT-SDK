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

// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.GetClosestInteractionPoint
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// struct FVector*                ReferencePosition              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          OutInteractionPointRadius      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ABP_ShipStorageBarrel_Grog_C::GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.GetClosestInteractionPoint"));}

	ABP_ShipStorageBarrel_Grog_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.ShouldDrawTooltipInWorldSpace
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Delegate)
// Parameters:
// class AActor**                 InInteractor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 DesiredTooltipWorldPosition    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABP_ShipStorageBarrel_Grog_C::ShouldDrawTooltipInWorldSpace(class AActor** InInteractor, struct FVector* DesiredTooltipWorldPosition)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.ShouldDrawTooltipInWorldSpace"));}

	ABP_ShipStorageBarrel_Grog_C_ShouldDrawTooltipInWorldSpace_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;

	return params.ReturnValue;
}


// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.UserConstructionScript
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ABP_ShipStorageBarrel_Grog_C::UserConstructionScript()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.UserConstructionScript"));}

	ABP_ShipStorageBarrel_Grog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
