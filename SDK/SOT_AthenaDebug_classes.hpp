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

// Class AthenaDebug.Videprinter
// 0x0028 (0x0490 - 0x0468)
class AVideprinter : public AActor
{
public:
	TArray<struct FString>                             OutputRingBuffer;                                         // 0x0468(0x0010) (CPF_Net, CPF_ZeroConstructor)
	int                                                AddAt;                                                    // 0x0478(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Id;                                                       // 0x047C(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0484(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaDebug.Videprinter")); }
		return ptr;
	}

};


// Class AthenaDebug.VideprinterServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UVideprinterServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaDebug.VideprinterServiceInterface")); }
		return ptr;
	}

};


// Class AthenaDebug.VideprinterService
// 0x0018 (0x0040 - 0x0028)
class UVideprinterService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class AVideprinter*>                        Videprinters;                                             // 0x0030(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaDebug.VideprinterService")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
