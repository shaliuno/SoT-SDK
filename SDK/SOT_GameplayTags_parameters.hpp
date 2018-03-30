#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
struct UGameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
	struct FGameplayTag                                TagToCheck;                                               // (CPF_Parm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               bCountEmptyAsMatch;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0029
};

// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               bCountEmptyAsMatch;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0029
};

// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
struct UGameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_Parm, CPF_OutParm) 0000
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
{
	struct FGameplayTag                                Value;                                                    // (CPF_Parm) 0000
	struct FGameplayTag                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
{
	struct FGameplayTagQuery                           TagQuery;                                                 // (CPF_Parm) 0000
	struct FGameplayTagQuery                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0048
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
{
	TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FGameplayTagContainer                       OtherContainer;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0010
	bool                                               bCountEmptyAsMatch;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0039
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0028
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch
struct UBlueprintGameplayTagLibrary_DoGameplayTagsMatch_Params
{
	struct FGameplayTag                                TagOne;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FGameplayTag                                TagTwo;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	TEnumAsByte<EGameplayTagMatchType>                 TagOneMatchType;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EGameplayTagMatchType>                 TagTwoMatchType;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0011
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0012
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
{
	TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EGameplayTagMatchType>                 ContainerTagsMatchType;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FGameplayTag                                Tag;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0014
	TEnumAsByte<EGameplayTagMatchType>                 TagMatchType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 001D
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FGameplayTagQuery                           TagQuery;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0028
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0070
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer
struct UBlueprintGameplayTagLibrary_DoesContainerMatchAnyTagsInContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FGameplayTagContainer                       OtherContainer;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0028
	bool                                               bCountEmptyAsMatch;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0051
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer
struct UBlueprintGameplayTagLibrary_DoesContainerMatchAllTagsInContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FGameplayTagContainer                       OtherContainer;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0028
	bool                                               bCountEmptyAsMatch;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0051
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag
struct UBlueprintGameplayTagLibrary_DoesContainerHaveTag_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<EGameplayTagMatchType>                 ContainerTagsMatchType;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	struct FGameplayTag                                Tag;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 002C
	TEnumAsByte<EGameplayTagMatchType>                 TagMatchType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0034
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0035
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
{
	struct FGameplayTagContainer                       InTagContainer;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FGameplayTagContainer                       InOutTagContainer;                                        // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0028
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0050
};

// Function GameplayTags.GameplayTagsManager.RequestGameplayTag
struct UGameplayTagsManager_RequestGameplayTag_Params
{
	struct FName                                       TagName;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ErrorIfNotFound;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FGameplayTag                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 000C
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
