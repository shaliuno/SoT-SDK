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

// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor
struct UServiceMessagingFunctions_GetServiceMessagingDispatcherFromActor_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
struct UServiceMessagingFunctions_GetServiceMessagingDispatcher_Params
{
	TScriptInterface<class UServiceMessagingDispatcherInterface> ServiceMessagingDispatcher;                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0010
};

// Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
struct UServiceMessagingListenerTestObject_TestFunctionWithMessage_Params
{
	struct FServiceMessagingTestMessage                InMessage;                                                // (CPF_Parm, CPF_OutParm) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
