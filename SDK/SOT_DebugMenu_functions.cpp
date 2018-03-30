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

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDebugMenuTestFunctions::IsDebugMenuReady(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady"));}

	UDebugMenuTestFunctions_IsDebugMenuReady_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDebugMenuTestFunctions::IsDebugMenuOpen(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen"));}

	UDebugMenuTestFunctions_IsDebugMenuOpen_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDebugMenuTestFunctions::IsDebugMenuAvailable()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable"));}

	UDebugMenuTestFunctions_IsDebugMenuAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FKey                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FKey UDebugMenuTestFunctions::GetDebugMenuToggleKeyComboBetaKeyboard()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard"));}

	UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboBetaKeyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FKey                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FKey UDebugMenuTestFunctions::GetDebugMenuToggleKeyComboAlphaKeyboard()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard"));}

	UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboAlphaKeyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FKey                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FKey UDebugMenuTestFunctions::GetDebugMenuToggleButtonComboBetaGamepad()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad"));}

	UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboBetaGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FKey                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FKey UDebugMenuTestFunctions::GetDebugMenuToggleButtonComboAlphaGamepad()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad"));}

	UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboAlphaGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
