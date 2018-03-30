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

// Class GameServiceTests.GameModeWithServiceProviderGameState
// 0x0000 (0x0550 - 0x0550)
class AGameModeWithServiceProviderGameState : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameServiceTests.GameModeWithServiceProviderGameState")); }
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UTestGameServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameServiceTests.TestGameServiceInterface")); }
		return ptr;
	}

};


// Class GameServiceTests.TestGameService
// 0x0018 (0x0040 - 0x0028)
class UTestGameService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameServiceTests.TestGameService")); }
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceRequiringUninitialisation
// 0x0010 (0x0038 - 0x0028)
class UTestGameServiceRequiringUninitialisation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameServiceTests.TestGameServiceRequiringUninitialisation")); }
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceActorInterface
// 0x0000 (0x0028 - 0x0028)
class UTestGameServiceActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameServiceTests.TestGameServiceActorInterface")); }
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceActor
// 0x0008 (0x0470 - 0x0468)
class ATestGameServiceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameServiceTests.TestGameServiceActor")); }
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceProvider
// 0x0058 (0x0080 - 0x0028)
class UTestGameServiceProvider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameServiceTests.TestGameServiceProvider")); }
		return ptr;
	}

};


// Class GameServiceTests.TestGameStateWithCollection
// 0x0060 (0x0520 - 0x04C0)
class ATestGameStateWithCollection : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04C0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameServiceTests.TestGameStateWithCollection")); }
		return ptr;
	}

};


// Class GameServiceTests.TestServiceProviderGameInstance
// 0x0018 (0x0098 - 0x0080)
class UTestServiceProviderGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	class UObject*                                     ServiceToReturn;                                          // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameServiceTests.TestServiceProviderGameInstance")); }
		return ptr;
	}

};


// Class GameServiceTests.TestServiceProviderGameState
// 0x0018 (0x04D8 - 0x04C0)
class ATestServiceProviderGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET
	class UObject*                                     ServiceToReturn;                                          // 0x04D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameServiceTests.TestServiceProviderGameState")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
