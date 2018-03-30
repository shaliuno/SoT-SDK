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

// Class SimpleOverlaps.OverlapTestActor
// 0x0018 (0x0480 - 0x0468)
class AOverlapTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0468(0x0010) MISSED OFFSET
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // 0x0478(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class SimpleOverlaps.OverlapTestActor")); }
		return ptr;
	}

};


// Class SimpleOverlaps.SimpleOverlapCollectionKey
// 0x0000 (0x0028 - 0x0028)
class USimpleOverlapCollectionKey : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class SimpleOverlaps.SimpleOverlapCollectionKey")); }
		return ptr;
	}

};


// Class SimpleOverlaps.TestObjectMessagingDispatcherInterface
// 0x00A8 (0x0510 - 0x0468)
class ATestObjectMessagingDispatcherInterface : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0468(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class SimpleOverlaps.TestObjectMessagingDispatcherInterface")); }
		return ptr;
	}

};


// Class SimpleOverlaps.TestSimpleOverlapsGameState
// 0x0060 (0x0520 - 0x04C0)
class ATestSimpleOverlapsGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04C0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class SimpleOverlaps.TestSimpleOverlapsGameState")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
