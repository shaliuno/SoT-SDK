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

// Class CalmWaterMapping.CalmWaterMappingInterface
// 0x0000 (0x0028 - 0x0028)
class UCalmWaterMappingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CalmWaterMapping.CalmWaterMappingInterface")); }
		return ptr;
	}


	float GetDampeningFactor(const struct FVector2D& InPosition);
	float GetChoppinessFactor(const struct FVector2D& InPosition);
};


// Class CalmWaterMapping.AthenaCalmWaterZone
// 0x0020 (0x0490 - 0x0470)
class AAthenaCalmWaterZone : public ACalmWaterZone
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0470(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CalmWaterMapping.AthenaCalmWaterZone")); }
		return ptr;
	}

};


// Class CalmWaterMapping.CalmWaterMappingService
// 0x0020 (0x0048 - 0x0028)
class UCalmWaterMappingService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CalmWaterMapping.CalmWaterMappingService")); }
		return ptr;
	}


	float GetMaxWindSpeed();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
