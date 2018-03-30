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

// Function Landscape.LandscapeProxy.EditorApplySpline
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USplineComponent*        InSplineComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          StartWidth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndWidth                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartSideFalloff               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndSideFalloff                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartRoll                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndRoll                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumSubdivisions                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRaiseHeights                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bLowerHeights                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULandscapeLayerInfoObject* PaintLayer                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.EditorApplySpline"));}

	ALandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InLODDistanceFactor            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor"));}

	ALandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
