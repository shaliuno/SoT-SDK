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

// Class GameService.GameServiceLifecycleInterface
// 0x0000 (0x0028 - 0x0028)
class UGameServiceLifecycleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameService.GameServiceLifecycleInterface")); }
		return ptr;
	}

};


// Class GameService.GameServiceMapFunctions
// 0x0000 (0x0028 - 0x0028)
class UGameServiceMapFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameService.GameServiceMapFunctions")); }
		return ptr;
	}


	void UnregisterService(class UObject* Service, struct FGameServiceMap* ServiceMap);
	void RegisterService(class UObject* Service, class UClass* Class, struct FGameServiceMap* ServiceMap);
	class UObject* GetService(class UClass* Class, struct FGameServiceMap* ServiceMap);
	int GetNumServices(struct FGameServiceMap* ServiceMap);
};


// Class GameService.GameServiceProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UGameServiceProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameService.GameServiceProviderInterface")); }
		return ptr;
	}


	void UnregisterService(class UObject* Service);
	void RegisterService(class UObject* Service, class UClass* Class);
	class UObject* GetService(class UClass* Class);
};


// Class GameService.GameServiceTickInterface
// 0x0000 (0x0028 - 0x0028)
class UGameServiceTickInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameService.GameServiceTickInterface")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
