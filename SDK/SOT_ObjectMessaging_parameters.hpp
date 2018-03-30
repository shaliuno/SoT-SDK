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

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle
struct UObjectMessagingFunctions_UnregisterEventFromHandle_Params
{
	struct FObjectMessagingDispatcherHandle            Dispatcher;                                               // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FObjectMessagingHandle                      Handle;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent
struct UObjectMessagingFunctions_UnregisterEvent_Params
{
	struct FObjectMessagingDispatcher                  Dispatcher;                                               // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FObjectMessagingHandle                      Handle;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 00A0
};

// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle
struct UObjectMessagingFunctions_RegisterEventFromHandle_Params
{
	struct FObjectMessagingDispatcherHandle            MessageDispatcher;                                        // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FObjectMessagingHandle                      Handle;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	class UObject*                                     FunctionOwner;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	struct FString                                     FunctionName;                                             // (CPF_Parm, CPF_ZeroConstructor) 0048
	class UStruct*                                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0058
};

// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent
struct UObjectMessagingFunctions_RegisterEvent_Params
{
	struct FObjectMessagingDispatcher                  MessageDispatcher;                                        // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FObjectMessagingHandle                      Handle;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 00A0
	class UObject*                                     FunctionOwner;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00D8
	struct FString                                     FunctionName;                                             // (CPF_Parm, CPF_ZeroConstructor) 00E0
	class UStruct*                                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00F0
};

// Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid
struct UObjectMessagingFunctions_IsObjectMessagingDispatcherValid_Params
{
	struct FObjectMessagingDispatcherHandle            Handle;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered
struct UObjectMessagingFunctions_IsHandleRegistered_Params
{
	struct FObjectMessagingHandle                      Handle;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0038
};

// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor
struct UObjectMessagingFunctions_GetObjectMessagingDispatcherFromActor_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher
struct UObjectMessagingFunctions_GetObjectMessagingDispatcher_Params
{
	TScriptInterface<class UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0010
};

// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle
struct UObjectMessagingFunctions_FireEventWithDataFromHandle_Params
{
	struct FObjectMessagingDispatcherHandle            MessageDispatcher;                                        // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UStruct*                                     EventDataStruct;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FString                                     Scope;                                                    // (CPF_Parm, CPF_ZeroConstructor) 0010
	struct FString                                     ScopeId;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0020
	struct FGenericStruct                              Value;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0030
};

// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData
struct UObjectMessagingFunctions_FireEventWithData_Params
{
	struct FObjectMessagingDispatcher                  MessageDispatcher;                                        // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UStruct*                                     EventDataStruct;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00A0
	struct FString                                     Scope;                                                    // (CPF_Parm, CPF_ZeroConstructor) 00A8
	struct FString                                     ScopeId;                                                  // (CPF_Parm, CPF_ZeroConstructor) 00B8
	struct FGenericStruct                              Value;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 00C8
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
