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

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     InterfaceObject;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     InterfaceClassName;                                       // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x00A0
struct FInAppPurchaseProductInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     TransactionIdentifier;                                    // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DisplayDescription;                                       // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DisplayPrice;                                             // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     CurrencyCode;                                             // 0x0050(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     CurrencySymbol;                                           // 0x0060(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DecimalSeparator;                                         // 0x0070(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     GroupingSeparator;                                        // 0x0080(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     ReceiptData;                                              // 0x0090(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0020
struct FInAppPurchaseRestoreInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     ReceiptData;                                              // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0018
struct FInAppPurchaseProductRequest
{
	struct FString                                     ProductIdentifier;                                        // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bIsConsumable;                                            // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
