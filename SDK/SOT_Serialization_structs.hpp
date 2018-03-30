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

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// 0x0030
struct FStructSerializerNumericTestStruct
{
	int8_t                                             Int8;                                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            Int16;                                                    // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Int32;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            Int64;                                                    // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UInt8;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           UInt16;                                                   // 0x0012(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           UInt32;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           UInt64;                                                   // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Float;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	double                                             Double;                                                   // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// 0x0008
struct FStructSerializerBooleanTestStruct
{
	unsigned char                                      BoolFalse;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BoolTrue;                                                 // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           Bitfield;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// 0x0010
struct FStructSerializerObjectTestStruct
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     ObjectPtr;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// 0x0040
struct FStructSerializerBuiltinTestStruct
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     String;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FRotator                                    Rotator;                                                  // 0x0028(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x0034(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// 0x0040
struct FStructSerializerArrayTestStruct
{
	TArray<int>                                        Int32Array;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                StaticSingleElement;                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StaticInt32Array[0x3];                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaticFloatArray[0x3];                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             VectorArray;                                              // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Serialization.StructSerializerTestStruct
// 0x00C8
struct FStructSerializerTestStruct
{
	struct FStructSerializerNumericTestStruct          Numerics;                                                 // 0x0000(0x0030)
	struct FStructSerializerBooleanTestStruct          Booleans;                                                 // 0x0030(0x0008)
	struct FStructSerializerObjectTestStruct           Objects;                                                  // 0x0038(0x0010)
	struct FStructSerializerBuiltinTestStruct          Builtins;                                                 // 0x0048(0x0040)
	struct FStructSerializerArrayTestStruct            Arrays;                                                   // 0x0088(0x0040)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
