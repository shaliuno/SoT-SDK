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

// ScriptStruct DebugMenu.DebugMenuDataAssetEntry
// 0x0038
struct FDebugMenuDataAssetEntry
{
	struct FString                                     MenuPath;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     ConsoleCommand;                                           // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      CloseMenuWhenExecuted;                                    // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AvailableInShippingBuilds;                                // 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct DebugMenu.DebugMenuButtonShortcut
// 0x0040
struct FDebugMenuButtonShortcut
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     ConsoleCommand;                                           // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FKey>                                Buttons;                                                  // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              RequiredHoldTime;                                         // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AvailableInShippingBuilds;                                // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
};

// ScriptStruct DebugMenu.DebugMenuUserItem
// 0x0020
struct FDebugMenuUserItem
{
	struct FString                                     path;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Command;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct DebugMenu.DebugMenuOptionExecutedEvent
// 0x0020
struct FDebugMenuOptionExecutedEvent
{
	struct FString                                     DebugMenuItemName;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     ConsoleCommand;                                           // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
