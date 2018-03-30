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

// ScriptStruct Serialisation.SerialisedNestedStruct
// 0x0028
struct FSerialisedNestedStruct
{
	struct FString                                     String;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        IntArray;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                Int;                                                      // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Float;                                                    // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Serialisation.SerialisedTestStruct
// 0x0050
struct FSerialisedTestStruct
{
	int                                                Int;                                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Float;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     String;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        IntArray;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FSerialisedNestedStruct                     NestedStruct;                                             // 0x0028(0x0028)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
