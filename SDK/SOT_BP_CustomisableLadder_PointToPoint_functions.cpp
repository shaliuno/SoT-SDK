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

// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.Orientate Ladder
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Point_A                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Point_B                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CustomisableLadder_PointToPoint_C::Orientate_Ladder(const struct FVector& Point_A, const struct FVector& Point_B)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.Orientate Ladder"));}

	ABP_CustomisableLadder_PointToPoint_C_Orientate_Ladder_Params params;
	params.Point_A = Point_A;
	params.Point_B = Point_B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.UserConstructionScript
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ABP_CustomisableLadder_PointToPoint_C::UserConstructionScript()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.UserConstructionScript"));}

	ABP_CustomisableLadder_PointToPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ReceiveBeginPlay
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ABP_CustomisableLadder_PointToPoint_C::ReceiveBeginPlay()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ReceiveBeginPlay"));}

	ABP_CustomisableLadder_PointToPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ExecuteUbergraph_BP_CustomisableLadder_PointToPoint
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CustomisableLadder_PointToPoint_C::ExecuteUbergraph_BP_CustomisableLadder_PointToPoint(int EntryPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ExecuteUbergraph_BP_CustomisableLadder_PointToPoint"));}

	ABP_CustomisableLadder_PointToPoint_C_ExecuteUbergraph_BP_CustomisableLadder_PointToPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
