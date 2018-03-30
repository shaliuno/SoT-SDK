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

// ScriptStruct AthenaAI.AIFormDamageResponse
// 0x0010
struct FAIFormDamageResponse
{
	class UClass*                                      DamagerType;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECharacterHitReactionAnimType>         HitReaction;                                              // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsKnockbackDisabled;                                      // 0x000D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AIDebugVisualisationBox
// 0x0040
struct FAIDebugVisualisationBox
{
	struct FVector                                     Centre;                                                   // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Extents;                                                  // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0020(0x0010) (CPF_IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0031(0x000F) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationCylinder
// 0x0020
struct FAIDebugVisualisationCylinder
{
	struct FVector                                     To;                                                       // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     From;                                                     // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x001C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AIDebugVisualisationSphere
// 0x0014
struct FAIDebugVisualisationSphere
{
	struct FVector                                     Centre;                                                   // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AIDebugVisualisationCone
// 0x0028
struct FAIDebugVisualisationCone
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Length;                                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngleWidthRadians;                                        // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngleHeightRadians;                                       // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AIDifficultyOccurrence
// 0x0008
struct FAIDifficultyOccurrence
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RankOffset;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AIIndividualVarietyEntry
// 0x0020
struct FAIIndividualVarietyEntry
{
	TArray<struct FStringAssetReference>               Loadouts;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                RankOffset;                                               // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Weight;                                                   // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPerEncounter;                                          // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIFormVarietyEntry
// 0x0028
struct FAIFormVarietyEntry
{
	struct FStringAssetReference                       Form;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Weight;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPerEncounter;                                          // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAIIndividualVarietyEntry>           Individuals;                                              // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettings
// 0x0010
struct FAthenaAIControllerSenseSettings
{
	float                                              SightRadius;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHearingRange;                                          // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettingOverride
// 0x0020
struct FAthenaAIControllerSenseSettingOverride
{
	class UClass*                                      AIStrategy;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAthenaAIControllerSenseSettings            SenseSettings;                                            // 0x0008(0x0010) (CPF_Edit)
	unsigned char                                      ClearPerceivedData;                                       // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAIControllerParamValue
// 0x000C
struct FAthenaAIControllerParamValue
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerWeightedRangesParamValue
// 0x0038
struct FAthenaAIControllerWeightedRangesParamValue
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           Value;                                                    // 0x0008(0x0030) (CPF_Edit)
};

// ScriptStruct AthenaAI.AIFormRankMapping
// 0x0018
struct FAIFormRankMapping
{
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct AthenaAI.AILoadoutRankMapping
// 0x0018
struct FAILoadoutRankMapping
{
	class ULoadoutAsset*                               Loadout;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct AthenaAI.AISkillsetRankMapping
// 0x0018
struct FAISkillsetRankMapping
{
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct AthenaAI.AIPartsCategoryMapping
// 0x0010
struct FAIPartsCategoryMapping
{
	class UClass*                                      ClassId;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPartsCategoryFormMapping
// 0x0018
struct FAIPartsCategoryFormMapping
{
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAIPartsCategoryMapping>             CategoryMappings;                                         // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct AthenaAI.AISpawnCountOccurrence
// 0x0008
struct FAISpawnCountOccurrence
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SpawnCount;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnableClassOccurrence
// 0x0010
struct FAISpawnableClassOccurrence
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ClassId;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AILoadoutOccurrence
// 0x0010
struct FAILoadoutOccurrence
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class ULoadoutAsset*                               Loadout;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnWave
// 0x0010
struct FAISpawnWave
{
	TArray<class UAISpawnPattern*>                     SpawnPatterns;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct AthenaAI.AIEncounterOccurrence
// 0x0020
struct FAIEncounterOccurrence
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FAISpawnWave>                        Waves;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UAIDifficultyMatrix*                         Difficulty;                                               // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AITypeData
// 0x0030
struct FAITypeData
{
	struct FName                                       AITypeName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FStringClassReference                       AIPawnClass;                                              // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      RequireNavMesh;                                           // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AIRegionCostUnits;                                        // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AIWorldCostUnits;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FeatureToggle;                                            // 0x0024(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AISpawnTypeParams
// 0x0058
struct FAISpawnTypeParams
{
	TAssetPtr<class UClass>                            AIClass;                                                  // 0x0000(0x0020) (CPF_Edit)
	struct FStringAssetReference                       SkillsetOverride;                                         // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FStringAssetReference                       LoadoutOverride;                                          // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FStringAssetReference                       FormOverride;                                             // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      AIClassIdOverride;                                        // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.WeightedAISpawnTypeParams
// 0x0060
struct FWeightedAISpawnTypeParams
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxTimesCanBeSelected;                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAISpawnTypeParams                          Params;                                                   // 0x0008(0x0058) (CPF_Edit)
};

// ScriptStruct AthenaAI.AISpawnTypeParamsCollection
// 0x0048
struct FAISpawnTypeParamsCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FWeightedAISpawnTypeParams>          SpawnParams;                                              // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct AthenaAI.AISpawnContextIdEncounterSettingsPair
// 0x0010
struct FAISpawnContextIdEncounterSettingsPair
{
	class UClass*                                      SpawnContext;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAIEncounterSettings*                        EncounterSettings;                                        // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnContextData
// 0x0010
struct FAISpawnContextData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Id;                                                       // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnerWave
// 0x0130
struct FAISpawnerWave
{
	float                                              SpawnChance;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRange                   NumOfSpawnsInWave;                                        // 0x0008(0x0020) (CPF_Edit)
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsOverride;                                  // 0x0028(0x0048) (CPF_Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeWave;                                          // 0x0070(0x0030) (CPF_Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBetweenSpawns;                                       // 0x00A0(0x0030) (CPF_Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeNextWaveIfSuccessful;                          // 0x00D0(0x0030) (CPF_Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeRetryingThisWaveIfUnsuccessful;                // 0x0100(0x0030) (CPF_Edit)
};

// ScriptStruct AthenaAI.AIBountySpawnerWave
// 0x0048 (0x0178 - 0x0130)
struct FAIBountySpawnerWave : public FAISpawnerWave
{
	unsigned char                                      IsTarget;                                                 // 0x0130(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBountyTargetGender>                   Gender;                                                   // 0x0131(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x0132(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2D];                                      // 0x0133(0x002D) MISSED OFFSET
	class UClass*                                      BountyReward;                                             // 0x0160(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0168(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIBountySpawnerWaveGroup
// 0x0028
struct FAIBountySpawnerWaveGroup
{
	TArray<struct FAIBountySpawnerWave>                Waves;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                NumNonTargetAIToKillToMoveToNextWaveGroup;                // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIFaunaSpawnerWave
// 0x0010 (0x0140 - 0x0130)
struct FAIFaunaSpawnerWave : public FAISpawnerWave
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.RankBasedWave
// 0x0148
struct FRankBasedWave
{
	int                                                MinRankInclusive;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxRankInclusive;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              AppliesOnlyToSpawnContextList;                            // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FAISpawnerWave                              Wave;                                                     // 0x0018(0x0130) (CPF_Edit)
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerRankBasedDelay
// 0x0048
struct FAIPerCrewSpawnerRankBasedDelay
{
	int                                                MinRankInclusive;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxRankInclusive;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              AppliesOnlyToSpawnContextList;                            // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWeightedProbabilityRangeOfRanges           WeightedProbabilityRangeOfRanges;                         // 0x0018(0x0030) (CPF_Edit)
};

// ScriptStruct AthenaAI.RankedWaveArray
// 0x0028
struct FRankedWaveArray
{
	int                                                MinRankInclusive;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxRankInclusive;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              AppliesOnlyToSpawnContextList;                            // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FAISpawnerWave>                      Waves;                                                    // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct AthenaAI.CarriedItemThreatOverride
// 0x0010
struct FCarriedItemThreatOverride
{
	class UClass*                                      ItemDesc;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Threat;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.HearingThreat
// 0x0010
struct FHearingThreat
{
	struct FName                                       SoundTag;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Threat;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CarrierSpeedThreshold;                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AIStategyControllerMovementMod
// 0x0010
struct FAIStategyControllerMovementMod
{
	class UClass*                                      AIStrategy;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverrideControlRotationInterpSpeed;                       // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIStrategyMovementProperties
// 0x0018
struct FAIStrategyMovementProperties
{
	class UClass*                                      AIStrategy;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpeedAmp;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAccelAmp;                                              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverrideRVOAvoidanceRadius;                               // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverrideBlendSpeed;                                       // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
// 0x0010
struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
{
	class UClass*                                      ItemCategory;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DistanceInMToProjectileHitChanceCurve;                    // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryNamedParams
// 0x0018
struct FAthenaAICharacterControllerItemCategoryNamedParams
{
	class UClass*                                      ItemCategory;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                    // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct AthenaAI.AthenaAIItemParamValue
// 0x0030
struct FAthenaAIItemParamValue
{
	TAssetPtr<class UClass>                            ItemClass;                                                // 0x0000(0x0020) (CPF_Edit)
	struct FName                                       ParamName;                                                // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.BlackboardValueCondition
// 0x0038
struct FBlackboardValueCondition
{
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0000(0x0028) (CPF_Edit)
	TEnumAsByte<EBlackboardValueComparisonType>        Comparison;                                               // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      OnEntry;                                                  // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      OnExit;                                                   // 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct AthenaAI.ChanceAndBlackboardKeyPair
// 0x0058
struct FChanceAndBlackboardKeyPair
{
	struct FAIDataProviderFloatValue                   Chance;                                                   // 0x0000(0x0030) (CPF_Edit)
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0030(0x0028) (CPF_Edit)
};

// ScriptStruct AthenaAI.AttackableTypeToAnimMapping
// 0x0028
struct FAttackableTypeToAnimMapping
{
	TEnumAsByte<ESwimAttackableType>                   AttackType;                                               // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     AnimMontage;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PlayAsDynamicMontage;                                     // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimLength;                                               // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeIntoAnimOfAttack;                                     // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetKnockBackStrength;                                  // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RumbleTag;                                                // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AIEncounterSpecification
// 0x0048
struct FAIEncounterSpecification
{
	TAssetPtr<class UClass>                            PawnClass;                                                // 0x0000(0x0020)
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULoadoutAsset*                               Loadout;                                                  // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      AIClass;                                                  // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AIEncounterWave
// 0x0010
struct FAIEncounterWave
{
	TArray<struct FAIEncounterSpecification>           Specifications;                                           // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct AthenaAI.AIBountySpawnerParams
// 0x0088
struct FAIBountySpawnerParams
{
	TArray<struct FAIEncounterWave>                    AISpawnerCreationDesc;                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        NumTargetsInWave;                                         // 0x0010(0x0010) (CPF_ZeroConstructor)
	float                                              MinTimeBetweenSpawns;                                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxTimeBetweenSpawns;                                     // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinTimeBetweenWaves;                                      // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxTimeBetweenWaves;                                      // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                         // 0x0030(0x0020)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                          // 0x0050(0x0020)
	TArray<float>                                      WaveSuicideTime;                                          // 0x0070(0x0010) (CPF_ZeroConstructor)
	float                                              WaveSuicideMinDist;                                       // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAIFormComponentAggregateTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FAthenaAIFormComponentAggregateTickFunction : public FTickFunction
{
	TArray<class UAthenaAIFormComponent*>              AIFormComponents;                                         // 0x0048(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.BountySpawnerTargetDesc
// 0x0002
struct FBountySpawnerTargetDesc
{
	TEnumAsByte<EBountyTargetGender>                   Gender;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AIBountySpawnerWaveLocation
// 0x0014
struct FAIBountySpawnerWaveLocation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowForTarget;                                           // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerCrewUnit
// 0x0018
struct FAIPerCrewSpawnerCrewUnit
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAIControllerAggregateTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FAthenaAIControllerAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIOnDelayedAssignedMeshConsumed
// 0x0010
struct FEventAIOnDelayedAssignedMeshConsumed
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMesh*                               ConsumedMesh;                                             // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIPawnCarrierChange
// 0x0008
struct FEventAIPawnCarrierChange
{
	class AActor*                                      Carrier;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIUnderwaterStateChange
// 0x0001
struct FEventAIUnderwaterStateChange
{
	unsigned char                                      IsAboveWater;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAICustomEventDuringDeath
// 0x0001
struct FEventAICustomEventDuringDeath
{
	TEnumAsByte<ECustomAiEventDuringDeathEnum>         UserData;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIDebugTextUpdated
// 0x0001
struct FEventAIDebugTextUpdated
{

};

// ScriptStruct AthenaAI.EventAIStartedDeadActionState
// 0x0001
struct FEventAIStartedDeadActionState
{

};

// ScriptStruct AthenaAI.EventAIControllerUnPossess
// 0x0001
struct FEventAIControllerUnPossess
{

};

// ScriptStruct AthenaAI.EventAIKnockbackEnded
// 0x0001
struct FEventAIKnockbackEnded
{

};

// ScriptStruct AthenaAI.EventAIKnockbackStarted
// 0x0018
struct FEventAIKnockbackStarted
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventNewAIStrategy
// 0x0008
struct FEventNewAIStrategy
{
	class UClass*                                      NewAIStrategy;                                            // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPawnRequestDespawn
// 0x0001
struct FEventPawnRequestDespawn
{

};

// ScriptStruct AthenaAI.EventPawnRemoveOwnership
// 0x0008
struct FEventPawnRemoveOwnership
{
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPawnFinishedDying
// 0x0010
struct FEventPawnFinishedDying
{
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPawnStartedDying
// 0x0018
struct FEventPawnStartedDying
{
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventOwnedPawnRemoveOwnership
// 0x0001
struct FEventOwnedPawnRemoveOwnership
{

};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedDying
// 0x0001
struct FEventOwnedPawnFinishedDying
{
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventOwnedPawnStartedDying
// 0x0010
struct FEventOwnedPawnStartedDying
{
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPartsCategorySelected
// 0x0008
struct FEventPartsCategorySelected
{
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAILoadoutSelected
// 0x0030
struct FEventAILoadoutSelected
{
	struct FItemLoadout                                Loadout;                                                  // 0x0000(0x0030)
};

// ScriptStruct AthenaAI.EventAIFormSelected
// 0x0008
struct FEventAIFormSelected
{
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIPawnReadyToConstructDebugText
// 0x0001
struct FEventAIPawnReadyToConstructDebugText
{

};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedSpawning
// 0x0038
struct FEventOwnedPawnFinishedSpawning
{
	class UObject*                                     AICoordinator;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Region;                                                   // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SpawnPos;                                                 // 0x0010(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      ActorToPerceiveOnSpawn;                                   // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaximumDistanceToPerceiveOnSpawn;                         // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.PeriodicAINoiseEventAggregateTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FPeriodicAINoiseEventAggregateTickFunction : public FTickFunction
{
	TArray<class UPeriodicAINoiseEventComponent*>      AINoiseEventComponents;                                   // 0x0048(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnableWater
// 0x0008
struct FEventPlayerLeftAISpawnableWater
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPlayerEnterAISpawnableWater
// 0x0018
struct FEventPlayerEnterAISpawnableWater
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerSetFootUponAISpawnRegion
// 0x0020
struct FEventPlayerSetFootUponAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnRegion
// 0x0018
struct FEventPlayerLeftAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerEnteredAISpawnRegion
// 0x0020
struct FEventPlayerEnteredAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.BountySpawnerNewWaveGroupSpawnedEvent
// 0x0018
struct FBountySpawnerNewWaveGroupSpawnedEvent
{
	TArray<struct FVector>                             SpawnLocations;                                           // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      WaveHasCaptain;                                           // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.BountySpawnerAudioChangedNetworkEvent
// 0x0018 (0x0028 - 0x0010)
struct FBountySpawnerAudioChangedNetworkEvent : public FNetworkEventStruct
{
	TEnumAsByte<EBountySpawnerAudioState>              AudioState;                                               // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Intensity;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBountySpawnerType>                    BountyType;                                               // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     BountyPosition;                                           // 0x001C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerAllTargetsKilled
// 0x0018
struct FEventAIBountySpawnerAllTargetsKilled
{
	struct FName                                       IslandName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerTargetKilled
// 0x0040
struct FEventAIBountySpawnerTargetKilled
{
	struct FString                                     TargetName;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FName                                       RewardId;                                                 // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       BootyId;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DeathLocation;                                            // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerWaveCompleted
// 0x0028
struct FEventAIBountySpawnerWaveCompleted
{
	struct FName                                       IslandName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WaveIndex;                                                // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalWaves;                                               // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      InstigatorOfFinalAIPawnDeath;                             // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventFaunaThreatLevelChanged
// 0x0001
struct FEventFaunaThreatLevelChanged
{
	TEnumAsByte<EAIThreatLevel>                        ThreatLevel;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.EventFaunaAgitationEnded
// 0x0001
struct FEventFaunaAgitationEnded
{

};

// ScriptStruct AthenaAI.EventFaunaAgitationBegun
// 0x0001
struct FEventFaunaAgitationBegun
{

};

// ScriptStruct AthenaAI.AITargetBounds
// 0x0018
struct FAITargetBounds
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Extents;                                                  // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaAI.AITargetInfo
// 0x0028
struct FAITargetInfo
{
	struct FAITargetBounds                             Bounds;                                                   // 0x0000(0x0018)
	struct FVector                                     TargetPos;                                                // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetYaw;                                                // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
