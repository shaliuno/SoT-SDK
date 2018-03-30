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

// Function AthenaInput.CompositeInputHandler.SetNotificationInputHandler
struct UCompositeInputHandler_SetNotificationInputHandler_Params
{
	class UClass*                                      Id;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FScriptDelegate                             Handler;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
};

// Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler
struct UCompositeInputHandler_SetAnalogInputHandler_Params
{
	class UClass*                                      Id;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FScriptDelegate                             Handler;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
};

// Function AthenaInput.InputHandlerInterface.HandleNotificationInput
struct UInputHandlerInterface_HandleNotificationInput_Params
{
	class UClass*                                      Id;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AthenaInput.InputHandlerInterface.HandleAnalogInput
struct UInputHandlerInterface_HandleAnalogInput_Params
{
	class UClass*                                      Id;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Input;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnSecondNotificationHandler_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnSecondHandler_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnFirstNotificationHandler_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnFirstHandler_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler
struct UInputHandlerFunctionLibrary_MakeCompositeInputHandler_Params
{
	class UCompositeInputHandler*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
