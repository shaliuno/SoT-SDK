#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ObjectMessaging.ObjectMessagingInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectMessagingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ObjectMessaging.ObjectMessagingInterface")); }
		return ptr;
	}

};


// Class ObjectMessaging.ObjectMessagingDispatcherInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectMessagingDispatcherInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ObjectMessaging.ObjectMessagingDispatcherInterface")); }
		return ptr;
	}

};


// Class ObjectMessaging.ObjectMessagingFunctions
// 0x0000 (0x0028 - 0x0028)
class UObjectMessagingFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ObjectMessaging.ObjectMessagingFunctions")); }
		return ptr;
	}


	void UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle);
	void UnregisterEvent(struct FObjectMessagingDispatcher* Dispatcher, struct FObjectMessagingHandle* Handle);
	void RegisterEventFromHandle(class UObject* FunctionOwner, const struct FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FObjectMessagingHandle* Handle);
	void RegisterEvent(class UObject* FunctionOwner, const struct FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcher* MessageDispatcher, struct FObjectMessagingHandle* Handle);
	bool IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle* Handle);
	bool IsHandleRegistered(struct FObjectMessagingHandle* Handle);
	struct FObjectMessagingDispatcherHandle GetObjectMessagingDispatcherFromActor(class UObject* Object);
	struct FObjectMessagingDispatcherHandle GetObjectMessagingDispatcher(const TScriptInterface<class UObjectMessagingDispatcherInterface>& ObjectMessagingDispatcher);
	void FireEventWithDataFromHandle(class UStruct* EventDataStruct, const struct FString& Scope, const struct FString& ScopeId, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FGenericStruct* Value);
	void FireEventWithData(class UStruct* EventDataStruct, const struct FString& Scope, const struct FString& ScopeId, struct FObjectMessagingDispatcher* MessageDispatcher, struct FGenericStruct* Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
