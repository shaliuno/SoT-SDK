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

// Class ServiceMessaging.ServiceMessagingDispatcherInterface
// 0x0000 (0x0028 - 0x0028)
class UServiceMessagingDispatcherInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServiceMessaging.ServiceMessagingDispatcherInterface")); }
		return ptr;
	}

};


// Class ServiceMessaging.ServiceMessagingInterface
// 0x0000 (0x0028 - 0x0028)
class UServiceMessagingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServiceMessaging.ServiceMessagingInterface")); }
		return ptr;
	}

};


// Class ServiceMessaging.ServiceMessagingFunctions
// 0x0000 (0x0028 - 0x0028)
class UServiceMessagingFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServiceMessaging.ServiceMessagingFunctions")); }
		return ptr;
	}


	struct FObjectMessagingDispatcherHandle GetServiceMessagingDispatcherFromActor(class UObject* Object);
	struct FObjectMessagingDispatcherHandle GetServiceMessagingDispatcher(const TScriptInterface<class UServiceMessagingDispatcherInterface>& ServiceMessagingDispatcher);
};


// Class ServiceMessaging.ServiceMessagingListenerTestObject
// 0x0010 (0x0038 - 0x0028)
class UServiceMessagingListenerTestObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServiceMessaging.ServiceMessagingListenerTestObject")); }
		return ptr;
	}


	void TestFunctionWithMessage(struct FServiceMessagingTestMessage* InMessage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
