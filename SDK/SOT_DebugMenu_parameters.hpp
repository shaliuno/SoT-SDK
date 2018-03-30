#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady
struct UDebugMenuTestFunctions_IsDebugMenuReady_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen
struct UDebugMenuTestFunctions_IsDebugMenuOpen_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable
struct UDebugMenuTestFunctions_IsDebugMenuAvailable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard
struct UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboBetaKeyboard_Params
{
	struct FKey                                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard
struct UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboAlphaKeyboard_Params
{
	struct FKey                                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad
struct UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboBetaGamepad_Params
{
	struct FKey                                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad
struct UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboAlphaGamepad_Params
{
	struct FKey                                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
