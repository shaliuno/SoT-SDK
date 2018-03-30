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

// ScriptStruct RareEngine.MemoryVisualiserStat
// 0x0020
struct FMemoryVisualiserStat
{
	struct FName                                       StatName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     DisplayName;                                              // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct RareEngine.MemoryVisualiserClass
// 0x0028
struct FMemoryVisualiserClass
{
	class UClass*                                      ClassType;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMemoryGatheringMode>                  MemoryGatheringMode;                                      // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct RareEngine.MemoryVisualiserCategory
// 0x0058
struct FMemoryVisualiserCategory
{
	struct FString                                     CategoryName;                                             // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FMemoryVisualiserStat>               CategoryStats;                                            // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FMemoryVisualiserClass>              CategoryClasses;                                          // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              XboxOneBudgetMB;                                          // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              XboxOneSBudgetMB;                                         // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              XboxOneXBudgetMB;                                         // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PCLowSpecBudgetMB;                                        // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PCMidSpecBudgetMB;                                        // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PCHighSpecBudgetMB;                                       // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PCUltraSpecBudgetMB;                                      // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x004C(0x000C) MISSED OFFSET
};

// ScriptStruct RareEngine.StaticMeshComponentList
// 0x0010
struct FStaticMeshComponentList
{
	TArray<class UStaticMeshComponent*>                Components;                                               // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct RareEngine.StaticMeshActorList
// 0x0010
struct FStaticMeshActorList
{
	TArray<class AStaticMeshActor*>                    Actors;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
