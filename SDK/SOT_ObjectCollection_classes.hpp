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

// Class ObjectCollection.ObjectCollectorInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectCollectorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ObjectCollection.ObjectCollectorInterface")); }
		return ptr;
	}

};


// Class ObjectCollection.TestCollector
// 0x0060 (0x0088 - 0x0028)
class UTestCollector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ObjectCollection.TestCollector")); }
		return ptr;
	}

};


// Class ObjectCollection.TestObjectForCollection
// 0x0038 (0x0060 - 0x0028)
class UTestObjectForCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ObjectCollection.TestObjectForCollection")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
