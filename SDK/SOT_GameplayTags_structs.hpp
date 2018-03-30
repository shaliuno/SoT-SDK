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

// ScriptStruct GameplayTags.GameplayTag
// 0x0008
struct FGameplayTag
{
	struct FName                                       TagName;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0048
struct FGameplayTagQuery
{
	int                                                TokenStreamVersion;                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FGameplayTag>                        TagDictionary;                                            // 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<unsigned char>                              QueryTokenStream;                                         // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserDescription;                                          // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AutoDescription;                                          // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0028
struct FGameplayTagContainer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FGameplayTag>                        GameplayTags;                                             // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FName>                               Tags;                                                     // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
};

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0060
struct FGameplayTagNode
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0037 (0x0038 - 0x0001)
struct FGameplayTagTableRow : public FTableRowBase
{
	struct FString                                     Tag;                                                      // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FText                                       CategoryText;                                             // 0x0010(0x0028) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
