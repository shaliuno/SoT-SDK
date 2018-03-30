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

// Class JsonUtilities.JsonUtilitiesBlueprintHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UJsonUtilitiesBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class JsonUtilities.JsonUtilitiesBlueprintHelperLibrary")); }
		return ptr;
	}


	bool UStructToJsonObjectString(const struct FGenericStruct& Struct, struct FString* OutJsonString);
	bool JsonObjectStringToUStruct(const struct FString& InJsonString, const struct FGenericStruct& Struct);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
