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

// ScriptStruct JsonUtilities.JsonObjectWrapper
// 0x0010
struct FJsonObjectWrapper
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct JsonUtilities.TestTextObject
// 0x0050
struct FTestTextObject
{
	struct FText                                       TestText;                                                 // 0x0000(0x0028)
	struct FText                                       TestTextExport;                                           // 0x0028(0x0028)
};

// ScriptStruct JsonUtilities.TestFloatObject
// 0x0008
struct FTestFloatObject
{
	float                                              TestFloat1;                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TestFloat2;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct JsonUtilities.TestEnumObject
// 0x0001
struct FTestEnumObject
{
	TEnumAsByte<ETestEnum>                             TestEnum;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct JsonUtilities.TestMessageTimespan
// 0x0008
struct FTestMessageTimespan
{
	struct FTimespan                                   Timespan;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor)
};

// ScriptStruct JsonUtilities.TestMessageDateTime
// 0x0008
struct FTestMessageDateTime
{
	struct FDateTime                                   DateTime;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor)
};

// ScriptStruct JsonUtilities.TestSerializationObject
// 0x0028
struct FTestSerializationObject
{
	unsigned char                                      TestBool;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TestInt;                                                  // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     TestString;                                               // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       TestGuid;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct JsonUtilities.TestSerializationNestedObject
// 0x0028
struct FTestSerializationNestedObject
{
	struct FTestSerializationObject                    NestedObject;                                             // 0x0000(0x0028)
};

// ScriptStruct JsonUtilities.TestMessageUInt64
// 0x0008
struct FTestMessageUInt64
{
	uint64_t                                           TestInt;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct JsonUtilities.TestMessageInt64
// 0x0008
struct FTestMessageInt64
{
	int64_t                                            TestInt;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct JsonUtilities.TestUStructMapSerializationObject
// 0x0050
struct FTestUStructMapSerializationObject
{
	TMap<struct FString, struct FTestSerializationObject> StructMap;                                                // 0x0000(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct JsonUtilities.TestInt32MapSerializationObject
// 0x0050
struct FTestInt32MapSerializationObject
{
	TMap<struct FString, int>                          Int32Map;                                                 // 0x0000(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct JsonUtilities.TestInvalidStringMapSerializationObject
// 0x0050
struct FTestInvalidStringMapSerializationObject
{
	TMap<int, struct FString>                          StringMap;                                                // 0x0000(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct JsonUtilities.TestStringMapSerializationObject
// 0x0050
struct FTestStringMapSerializationObject
{
	TMap<struct FString, struct FString>               StringMap;                                                // 0x0000(0x0050) (CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
