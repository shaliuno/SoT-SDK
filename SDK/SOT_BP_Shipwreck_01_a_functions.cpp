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

// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.UserConstructionScript
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ABP_Shipwreck_01_a_C::UserConstructionScript()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.UserConstructionScript"));}

	ABP_Shipwreck_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ReceiveBeginPlay
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ABP_Shipwreck_01_a_C::ReceiveBeginPlay()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ReceiveBeginPlay"));}

	ABP_Shipwreck_01_a_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ReceiveEndPlay
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Shipwreck_01_a_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ReceiveEndPlay"));}

	ABP_Shipwreck_01_a_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ExecuteUbergraph_BP_Shipwreck_01_a
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Shipwreck_01_a_C::ExecuteUbergraph_BP_Shipwreck_01_a(int EntryPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shipwreck_01_a.BP_Shipwreck_01_a_C.ExecuteUbergraph_BP_Shipwreck_01_a"));}

	ABP_Shipwreck_01_a_C_ExecuteUbergraph_BP_Shipwreck_01_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
