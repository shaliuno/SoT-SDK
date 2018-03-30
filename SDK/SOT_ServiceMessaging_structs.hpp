#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ServiceMessaging.ServiceMessagingTestMessage
// 0x0004
struct FServiceMessagingTestMessage
{
	int                                                Data;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ServiceMessaging.ServiceMessagingUnsubscribedEvent
// 0x0010
struct FServiceMessagingUnsubscribedEvent
{
	struct FString                                     RoutingKey;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct ServiceMessaging.ServiceMessagingSubscribedEvent
// 0x0010
struct FServiceMessagingSubscribedEvent
{
	struct FString                                     RoutingKey;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
