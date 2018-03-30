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

// Class AthenaAI.AIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UAIStrategyId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIStrategyId")); }
		return ptr;
	}

};


// Class AthenaAI.AIPartsDesc
// 0x0000 (0x0028 - 0x0028)
class UAIPartsDesc : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIPartsDesc")); }
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTracker
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTracker : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIPlayerTracker")); }
		return ptr;
	}

};


// Class AthenaAI.AIInteractableComponent
// 0x0018 (0x00E8 - 0x00D0)
class UAIInteractableComponent : public UActorComponent
{
public:
	class UClass*                                      Type;                                                     // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     DetachOffsetFromOwner;                                    // 0x00D8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIInteractableComponent")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_BaseConditional
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_BaseConditional : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_BaseConditional")); }
		return ptr;
	}

};


// Class AthenaAI.AIInteractableType
// 0x0000 (0x0028 - 0x0028)
class UAIInteractableType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIInteractableType")); }
		return ptr;
	}

};


// Class AthenaAI.AthenaAIFormComponent
// 0x0060 (0x0130 - 0x00D0)
class UAthenaAIFormComponent : public UActorComponent
{
public:
	class UAthenaAIFormDataAsset*                      FormData;                                                 // 0x00D0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCharacterHitReactionDamagerTypeToAnimTypeLayer* HitReactionsLayer;                                        // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAIFormComponent")); }
		return ptr;
	}


	void OnRep_FormData();
};


// Class AthenaAI.AthenaAIFormDataAsset
// 0x0040 (0x0068 - 0x0028)
class UAthenaAIFormDataAsset : public UDataAsset
{
public:
	TArray<struct FAIFormDamageResponse>               DamageResponses;                                          // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UPhysicalMaterial*                           SurfaceMaterial;                                          // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     KilledVfxTemplate;                                        // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      AICharacterAudioComponent;                                // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      AnimNotifyEmitterWithObservers;                           // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementSpeedMultipler;                                   // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UClass*                                      FormComponentClass;                                       // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAIFormDataAsset")); }
		return ptr;
	}

};


// Class AthenaAI.AIClassId
// 0x0000 (0x0028 - 0x0028)
class UAIClassId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIClassId")); }
		return ptr;
	}

};


// Class AthenaAI.AIClassIdTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIClassIdTypeList : public UDataAsset
{
public:
	TArray<class UClass*>                              AllClassIds;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIClassIdTypeList")); }
		return ptr;
	}

};


// Class AthenaAI.AIColorVariantPool
// 0x0010 (0x0038 - 0x0028)
class UAIColorVariantPool : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               AvailableColors;                                          // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIColorVariantPool")); }
		return ptr;
	}

};


// Class AthenaAI.AIDebugVisualisationComponent
// 0x0040 (0x0110 - 0x00D0)
class UAIDebugVisualisationComponent : public UActorComponent
{
public:
	TArray<struct FAIDebugVisualisationBox>            Boxes;                                                    // 0x00D0(0x0010) (CPF_Edit, CPF_Net, CPF_ZeroConstructor)
	TArray<struct FAIDebugVisualisationCylinder>       Cylinders;                                                // 0x00E0(0x0010) (CPF_Edit, CPF_Net, CPF_ZeroConstructor)
	TArray<struct FAIDebugVisualisationSphere>         Spheres;                                                  // 0x00F0(0x0010) (CPF_Edit, CPF_Net, CPF_ZeroConstructor)
	TArray<struct FAIDebugVisualisationCone>           Cones;                                                    // 0x0100(0x0010) (CPF_Edit, CPF_Net, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIDebugVisualisationComponent")); }
		return ptr;
	}

};


// Class AthenaAI.AIDifficultyMatrix
// 0x0010 (0x0038 - 0x0028)
class UAIDifficultyMatrix : public UDataAsset
{
public:
	TArray<struct FAIDifficultyOccurrence>             Difficulties;                                             // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIDifficultyMatrix")); }
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipe
// 0x0020 (0x0048 - 0x0028)
class UAIEncounterGenerationRecipe : public UDataAsset
{
public:
	TArray<struct FAIFormVarietyEntry>                 Forms;                                                    // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FStringAssetReference                       SkillsetProgression;                                      // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIEncounterGenerationRecipe")); }
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipeRankOrderList
// 0x0010 (0x0038 - 0x0028)
class UAIEncounterGenerationRecipeRankOrderList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        Recipes;                                                  // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIEncounterGenerationRecipeRankOrderList")); }
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipeTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIEncounterGenerationRecipeTypeList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        AllRecipes;                                               // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIEncounterGenerationRecipeTypeList")); }
		return ptr;
	}

};


// Class AthenaAI.AIPartsCategory
// 0x0018 (0x0040 - 0x0028)
class UAIPartsCategory : public UDataAsset
{
public:
	TArray<class UAIPartsDesc*>                        Parts;                                                    // 0x0028(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	int                                                NextPartsIndex;                                           // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIPartsCategory")); }
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsDataAsset
// 0x0088 (0x00B0 - 0x0028)
class UAthenaAIControllerParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      OverrideMaxHealth;                                        // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHealth;                                                // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAthenaAIControllerSenseSettings            DefaultSenseSettings;                                     // 0x0030(0x0010) (CPF_Edit)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultPerceivedNotVisibleAge;                            // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentTargetPerceivedNotVisibleAge;                      // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      OverrideTeamID;                                           // 0x004C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAthenaAITeam>                         TeamID;                                                   // 0x004D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                          // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              TargetSwitchToleranceDistance;                            // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<float>                                      TargetLoadWeightingBias;                                  // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              VisionAngleToStartScalingDistance;                        // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScalingAppliedToDistanceAtMaxPeripheralVisionAngle;       // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAthenaAIControllerParamValue>       InitialBlackboardValues;                                  // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                    // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FAthenaAIControllerWeightedRangesParamValue> NamedWeightedRangesControllerParams;                      // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAIControllerParamsDataAsset")); }
		return ptr;
	}

};


// Class AthenaAI.AIEncounterServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIEncounterServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIEncounterServiceInterface")); }
		return ptr;
	}


	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
};


// Class AthenaAI.AIEncounterGenerationServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIEncounterGenerationServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIEncounterGenerationServiceInterface")); }
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationService
// 0x0088 (0x04F0 - 0x0468)
class AAIEncounterGenerationService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	class UAIEncounterGenerationRecipeTypeList*        GenerationRecipes;                                        // 0x0470(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class UAIEncounterServiceInterface> EncounterService;                                         // 0x0478(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0488(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIEncounterGenerationService")); }
		return ptr;
	}

};


// Class AthenaAI.AIFormRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIFormRankProgression : public UDataAsset
{
public:
	TArray<struct FAIFormRankMapping>                  RankMappings;                                             // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIFormRankProgression")); }
		return ptr;
	}

};


// Class AthenaAI.AIFormProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIFormProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAIFormRankProgression*>              AllProgressions;                                          // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIFormProgressionTypeList")); }
		return ptr;
	}

};


// Class AthenaAI.AIFormTypeList
// 0x0018 (0x0040 - 0x0028)
class UAIFormTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIFormDataAsset*>              AllForms;                                                 // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UAthenaAIFormDataAsset*                      DefaultForm;                                              // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIFormTypeList")); }
		return ptr;
	}

};


// Class AthenaAI.AILoadoutRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAILoadoutRankProgression : public UDataAsset
{
public:
	TArray<struct FAILoadoutRankMapping>               RankMappings;                                             // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AILoadoutRankProgression")); }
		return ptr;
	}

};


// Class AthenaAI.AILoadoutProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAILoadoutProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAILoadoutRankProgression*>           AllProgressions;                                          // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AILoadoutProgressionTypeList")); }
		return ptr;
	}

};


// Class AthenaAI.AILoadoutTypeList
// 0x0010 (0x0038 - 0x0028)
class UAILoadoutTypeList : public UDataAsset
{
public:
	TArray<class ULoadoutAsset*>                       AllLoadouts;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AILoadoutTypeList")); }
		return ptr;
	}

};


// Class AthenaAI.AISkillsetRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAISkillsetRankProgression : public UDataAsset
{
public:
	TArray<struct FAISkillsetRankMapping>              RankMappings;                                             // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AISkillsetRankProgression")); }
		return ptr;
	}

};


// Class AthenaAI.AISkillsetProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAISkillsetProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAISkillsetRankProgression*>          AllProgressions;                                          // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AISkillsetProgressionTypeList")); }
		return ptr;
	}

};


// Class AthenaAI.AISkillsetTypeList
// 0x0010 (0x0038 - 0x0028)
class UAISkillsetTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIControllerParamsDataAsset*>  AllSkillsets;                                             // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AISkillsetTypeList")); }
		return ptr;
	}

};


// Class AthenaAI.AIPartsCategoryTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIPartsCategoryTypeList : public UDataAsset
{
public:
	TArray<class UAIPartsCategory*>                    AllPartsCategories;                                       // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIPartsCategoryTypeList")); }
		return ptr;
	}

};


// Class AthenaAI.AIEncounterService
// 0x0258 (0x06C0 - 0x0468)
class AAIEncounterService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	TArray<struct FAIPartsCategoryMapping>             DefaultPartsCategories;                                   // 0x0470(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FAIPartsCategoryFormMapping>         FormPartsCategories;                                      // 0x0480(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UAIFormTypeList*                             Forms;                                                    // 0x0490(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAIFormProgressionTypeList*                  FormProgressions;                                         // 0x0498(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAILoadoutTypeList*                          Loadouts;                                                 // 0x04A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAILoadoutProgressionTypeList*               LoadoutProgressions;                                      // 0x04A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAISkillsetTypeList*                         Skillsets;                                                // 0x04B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAISkillsetProgressionTypeList*              SkillsetProgressions;                                     // 0x04B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAIClassIdTypeList*                          ClassIds;                                                 // 0x04C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAIPartsCategoryTypeList*                    PartsCategories;                                          // 0x04C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F0];                                     // 0x04D0(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIEncounterService")); }
		return ptr;
	}


	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
};


// Class AthenaAI.AISpawnPattern
// 0x0060 (0x0088 - 0x0028)
class UAISpawnPattern : public UDataAsset
{
public:
	TAssetPtr<class UClass>                            CharacterPawn;                                            // 0x0028(0x0020) (CPF_Edit)
	TArray<struct FAISpawnCountOccurrence>             SpawnCounts;                                              // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FAISpawnableClassOccurrence>         Classes;                                                  // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FAILoadoutOccurrence>                Loadouts;                                                 // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UAIDifficultyMatrix*                         DifficultyOverride;                                       // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAISkillsetRankProgression*                  ProgressionOverride;                                      // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AISpawnPattern")); }
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettings
// 0x0048 (0x0070 - 0x0028)
class UAIEncounterSettings : public UDataAsset
{
public:
	TAssetPtr<class UClass>                            PawnClass;                                                // 0x0028(0x0020) (CPF_Edit)
	TArray<struct FAIEncounterOccurrence>              Encounters;                                               // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      AIClass;                                                  // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FStringAssetReference                       Skillset;                                                 // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIEncounterSettings")); }
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettingsFixed
// 0x0030 (0x00A0 - 0x0070)
class UAIEncounterSettingsFixed : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SpecificSkillset;                                         // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FStringAssetReference                       Loadout;                                                  // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FStringAssetReference                       Form;                                                     // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIEncounterSettingsFixed")); }
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettingsRankProgression
// 0x0030 (0x00A0 - 0x0070)
class UAIEncounterSettingsRankProgression : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SkillsetProgression;                                      // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FStringAssetReference                       LoadoutProgression;                                       // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FStringAssetReference                       FormProgression;                                          // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIEncounterSettingsRankProgression")); }
		return ptr;
	}

};


// Class AthenaAI.AIInteractableOperatorInterface
// 0x0000 (0x0028 - 0x0028)
class UAIInteractableOperatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIInteractableOperatorInterface")); }
		return ptr;
	}

};


// Class AthenaAI.AIItemParameterInterface
// 0x0000 (0x0028 - 0x0028)
class UAIItemParameterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIItemParameterInterface")); }
		return ptr;
	}

};


// Class AthenaAI.AIManagerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIManagerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIManagerServiceInterface")); }
		return ptr;
	}


	void StartDespawnAI(class APawn* AIActor);
	int GetNumOfSpawnedPawns();
};


// Class AthenaAI.AIPlayerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIPlayerServiceInterface")); }
		return ptr;
	}

};


// Class AthenaAI.AthenaAITypeListDataAsset
// 0x0020 (0x0048 - 0x0028)
class UAthenaAITypeListDataAsset : public UDataAsset
{
public:
	TArray<struct FAITypeData>                         AITypes;                                                  // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FStringClassReference>               AdditionalAIActors;                                       // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAITypeListDataAsset")); }
		return ptr;
	}

};


// Class AthenaAI.AthenaAISettings
// 0x0060 (0x0088 - 0x0028)
class UAthenaAISettings : public UObject
{
public:
	struct FStringAssetReference                       AITypesAsset;                                             // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       AISpawnContextListAsset;                                  // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	int                                                FallbackAIDifficultyRank;                                 // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MaxNumOfSpawnedActors;                                    // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MaxPlayerEquivalentAIsPerRegion;                          // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MaxWorldAICostUnitsForWorld;                              // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                AIRegionCostUnitsForPlayer;                               // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CharacterNetRelevancy;                                    // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CharacterRegionDensityCheckTimer;                         // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CharacterWorldDensityCheckTimer;                          // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MinRetryingCanSpawnRequestTime;                           // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MaxRetryingCanSpawnRequestTime;                           // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CharacterAINoiseTickInterval;                             // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PeriodicAINoiseComponentTickInterval;                     // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              FaunaPlayerProximityDormancyRange;                        // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              FaunaPlayerProximityTickTime;                             // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              FaunaTimeOutOfPlayerProximityForDormancy;                 // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAISettings")); }
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextId
// 0x0000 (0x0028 - 0x0028)
class UAISpawnContextId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AISpawnContextId")); }
		return ptr;
	}

};


// Class AthenaAI.AISpawner
// 0x0188 (0x01B0 - 0x0028)
class UAISpawner : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsCollection;                                // 0x0030(0x0048) (CPF_Edit)
	int                                                MaxNumOfSpawnedPawns;                                     // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FAISpawnContextIdEncounterSettingsPair> SpawnContextSpecificEncounterSettings;                    // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UAIEncounterSettings*                        DefaultEncounterSettings;                                 // 0x0090(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEnvQuery*                                   FindSpawnPosQuery;                                        // 0x0098(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEnvQueryRunMode>                      FindSpawnPosQueryRunMode;                                 // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PriorityForSpawnedPawns;                                  // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HasSpawnerLevelEncounters;                                // 0x00A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xFF];                                      // 0x00A9(0x00FF) MISSED OFFSET
	class UAthenaAISettings*                           AthenaAISettings;                                         // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AISpawner")); }
		return ptr;
	}


	int GetNumOfSpawnRequests();
};


// Class AthenaAI.AIManagerService
// 0x0510 (0x0978 - 0x0468)
class AAIManagerService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0468(0x0010) MISSED OFFSET
	int                                                MaxNumOfSpawnedPawns;                                     // 0x0478(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xA4];                                      // 0x047C(0x00A4) MISSED OFFSET
	TArray<class UClass*>                              CachedAIClasses;                                          // 0x0520(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x2A8];                                     // 0x0530(0x02A8) MISSED OFFSET
	TArray<class UAIPlayerTracker*>                    PlayerTrackers;                                           // 0x07D8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x158];                                     // 0x07E8(0x0158) MISSED OFFSET
	class UAthenaAITypeListDataAsset*                  AITypeList;                                               // 0x0940(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAISpawnContextList*                         AISpawnContextList;                                       // 0x0948(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x28];                                      // 0x0950(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIManagerService")); }
		return ptr;
	}


	void TickService(float DeltaSeconds);
	void StartDespawnAI(class APawn* AIActor);
	class UAISpawner* GetRegionSpawner(const struct FName& Region, int Index);
	int GetNumOfSpawnRequests();
};


// Class AthenaAI.DebugAIManagerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugAIManagerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.DebugAIManagerServiceInterface")); }
		return ptr;
	}


	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
};


// Class AthenaAI.DebugAIManagerService
// 0x0080 (0x09F8 - 0x0978)
class ADebugAIManagerService : public AAIManagerService
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0978(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.DebugAIManagerService")); }
		return ptr;
	}


	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
};


// Class AthenaAI.AIPartsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPartsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIPartsServiceInterface")); }
		return ptr;
	}

};


// Class AthenaAI.AIPartsService
// 0x0010 (0x0038 - 0x0028)
class UAIPartsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAIPartsCategoryTypeList*                    PartsCategoriesList;                                      // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIPartsService")); }
		return ptr;
	}

};


// Class AthenaAI.AIPawnInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIPawnInterface")); }
		return ptr;
	}

};


// Class AthenaAI.FaunaAIPlayerTracker
// 0x0020 (0x0048 - 0x0028)
class UFaunaAIPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.FaunaAIPlayerTracker")); }
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTrackerSpawnerInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTrackerSpawnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIPlayerTrackerSpawnerInterface")); }
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextList
// 0x0010 (0x0038 - 0x0028)
class UAISpawnContextList : public UDataAsset
{
public:
	TArray<struct FAISpawnContextData>                 SpawnContextList;                                         // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AISpawnContextList")); }
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnContextProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AISpawnContextProviderInterface")); }
		return ptr;
	}

};


// Class AthenaAI.BountySpawnerAudioZonesInterface
// 0x0000 (0x0028 - 0x0028)
class UBountySpawnerAudioZonesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BountySpawnerAudioZonesInterface")); }
		return ptr;
	}

};


// Class AthenaAI.AIBountySpawner
// 0x0150 (0x0300 - 0x01B0)
class UAIBountySpawner : public UAISpawner
{
public:
	float                                              MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup;         // 0x01B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	TArray<struct FAIBountySpawnerWaveGroup>           WaveGroups;                                               // 0x01B8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                         // 0x01C8(0x0020) (CPF_Edit)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                          // 0x01E8(0x0020) (CPF_Edit)
	TArray<float>                                      WaveSuicideTime;                                          // 0x0208(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              WaveSuicideMinDist;                                       // 0x0218(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x021C(0x002C) MISSED OFFSET
	TArray<class AActor*>                              CrewMembers;                                              // 0x0248(0x0010) (CPF_ZeroConstructor)
	TArray<class AActor*>                              NonCrewMembersInRegion;                                   // 0x0258(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x98];                                      // 0x0268(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIBountySpawner")); }
		return ptr;
	}

};


// Class AthenaAI.AIFaunaSpawner
// 0x0178 (0x0328 - 0x01B0)
class UAIFaunaSpawner : public UAISpawner
{
public:
	struct FAIFaunaSpawnerWave                         FaunaWave;                                                // 0x01B0(0x0140) (CPF_Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET
	class AActor*                                      FaunaLeader;                                              // 0x0300(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0308(0x0010) MISSED OFFSET
	TArray<class AActor*>                              PlayersInSpawnArea;                                       // 0x0318(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIFaunaSpawner")); }
		return ptr;
	}


	void SpawnFaunaGroup();
};


// Class AthenaAI.AIInteractableSpawner
// 0x0108 (0x02B8 - 0x01B0)
class UAIInteractableSpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET
	class UClass*                                      AIInteractableType;                                       // 0x01B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InhabitedChance;                                          // 0x01C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulInhabitedCheck;                       // 0x01C8(0x0030) (CPF_Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedInhabitedCheck;                           // 0x01F8(0x0030) (CPF_Edit)
	float                                              SpawnForInteractableChance;                               // 0x0228(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulSpawnOnInteractableCheck;             // 0x0230(0x0030) (CPF_Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedSpawnOnInteractableCheck;                 // 0x0260(0x0030) (CPF_Edit)
	unsigned char                                      RunInhabitedSimulation;                                   // 0x0290(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      RunSpawnForInteractableSimulation;                        // 0x0291(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumIterations;                                            // 0x0294(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0298(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIInteractableSpawner")); }
		return ptr;
	}

};


// Class AthenaAI.AIPerCrewSpawner
// 0x0100 (0x02B0 - 0x01B0)
class UAIPerCrewSpawner : public UAISpawner
{
public:
	int                                                MaxNumOfCrewsToSpawnFor;                                  // 0x01B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	TArray<struct FRankBasedWave>                      RankBasedWaves;                                           // 0x01B8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FAIPerCrewSpawnerRankBasedDelay>     RespawnTimerRangesBasedOnRank;                            // 0x01C8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x01D8(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIPerCrewSpawner")); }
		return ptr;
	}

};


// Class AthenaAI.AIPerPlayerSpawner
// 0x00F8 (0x02A8 - 0x01B0)
class UAIPerPlayerSpawner : public UAISpawner
{
public:
	unsigned char                                      CheckSpawnedActorsInRadiusBeforeSpawning;                 // 0x01B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadiusToCheckForExistingPopulation;                       // 0x01B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxExistingPopulationInRadius;                            // 0x01B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DespawnAllPawnsWhenAllPlayersLeave;                       // 0x01BC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxActorsTotalPerPlayer;                                  // 0x01C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	TArray<struct FRankedWaveArray>                    RankedWaveArrays;                                         // 0x01C8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      RunSimulation;                                            // 0x01D8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                RankForSimulation;                                        // 0x01DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumIterations;                                            // 0x01E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC4];                                      // 0x01E4(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIPerPlayerSpawner")); }
		return ptr;
	}


	void PlayerDeath(class AActor* Player);
	int GetNumOfPlayers();
};


// Class AthenaAI.AIBoobyTrapSpawner
// 0x00A0 (0x0348 - 0x02A8)
class UAIBoobyTrapSpawner : public UAIPerPlayerSpawner
{
public:
	int                                                NumberOfWavesToSpawn;                                     // 0x02A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 NewWaveSpawnSfx;                                          // 0x02B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NewWaveSpawnSfxTriggerRadius;                             // 0x02B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	class AActor*                                      ActorToTrack;                                             // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x02C8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AIBoobyTrapSpawner")); }
		return ptr;
	}

};


// Class AthenaAI.AISpawnerList
// 0x0010 (0x0038 - 0x0028)
class UAISpawnerList : public UDataAsset
{
public:
	TArray<class UAISpawner*>                          Spawners;                                                 // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AISpawnerList")); }
		return ptr;
	}

};


// Class AthenaAI.AISpawnPointSeedComponent
// 0x0000 (0x02E0 - 0x02E0)
class UAISpawnPointSeedComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AISpawnPointSeedComponent")); }
		return ptr;
	}

};


// Class AthenaAI.AISpawnRegionInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnRegionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AISpawnRegionInterface")); }
		return ptr;
	}

};


// Class AthenaAI.AITargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AITargetInterface")); }
		return ptr;
	}

};


// Class AthenaAI.AITargetWeaponInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetWeaponInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AITargetWeaponInterface")); }
		return ptr;
	}


	bool FindAimConfigToHitTarget(const struct FVector& Target, struct FRotator* OutAimConfig);
};


// Class AthenaAI.AthenaAICharacterPathFollowingComponent
// 0x0038 (0x02C0 - 0x0288)
class UAthenaAICharacterPathFollowingComponent : public UPathFollowingComponent
{
public:
	float                                              ProportionOfTurnToMove;                                   // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinAngleToTurnOnSpot;                                     // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReachedGoalMaxSpeedToSlowDistanceFactor;                  // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AbortMoveMaxSpeedToSlowDistanceFactor;                    // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0298(0x0004) MISSED OFFSET
	float                                              MinSlowDownSpeed;                                         // 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x02A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAICharacterPathFollowingComponent")); }
		return ptr;
	}

};


// Class AthenaAI.AthenaAIController
// 0x02D8 (0x0818 - 0x0540)
class AAthenaAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0540(0x0010) MISSED OFFSET
	float                                              CurrentTargetPerceivedNotVisibleAge;                      // 0x0550(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0554(0x000C) MISSED OFFSET
	class UAISenseConfig_Sight*                        SightConfig;                                              // 0x0560(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAISenseConfig_Hearing*                      HearingConfig;                                            // 0x0568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAISenseConfig_Damage*                       DamageSenseConfig;                                        // 0x0570(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0578(0x0010) MISSED OFFSET
	class UAthenaAIControllerParamsDataAsset*          ParamsDataAsset;                                          // 0x0588(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x280];                                     // 0x0590(0x0280) MISSED OFFSET
	class AActor*                                      CurrentNotSeenPerceivedActor;                             // 0x0810(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAIController")); }
		return ptr;
	}


	void StopBehaviourLogic();
	void SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense);
	void SetNamedControllerParam(const struct FName& ParamName, float Value);
	void RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor, const struct FVector& TriggerActorLocation, const struct FVector& SpawnPosition);
	void OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors);
	void OnNewlySpawned();
	void OnFinishDespawn();
	bool IsActorPerceived(class AActor* TargetActor);
	class AActor* GetTargetActor();
	class UAthenaAIPerceptionComponent* GetAthenaAIPerceptionComponent();
	void GetAllSeenActors(TArray<class AActor*>* SeenActors);
	struct FWeightedProbabilityRangeOfRanges FindNamedWeightedRangesControllerParam(const struct FName& ParamName);
	float FindNamedControllerParam(const struct FName& ParamName);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
};


// Class AthenaAI.AthenaAICharacterController
// 0x00A0 (0x08B8 - 0x0818)
class AAthenaAICharacterController : public AAthenaAIController
{
public:
	class UAthenaAIItemParamsDataAsset*                ItemParamsDataAsset;                                      // 0x0818(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ControlRotationInterpSpeed;                               // 0x0820(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ControlRotationUseConstantInterp;                         // 0x0824(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x83];                                      // 0x0825(0x0083) MISSED OFFSET
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                    // 0x08A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAICharacterController")); }
		return ptr;
	}


	void SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value);
};


// Class AthenaAI.FaunaAIContollerParamsDataAsset
// 0x0088 (0x0138 - 0x00B0)
class UFaunaAIContollerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	struct FWeightedProbabilityRange                   Courage;                                                  // 0x00B0(0x0020) (CPF_Edit)
	TArray<struct FCarriedItemThreatOverride>          CarriedItemThreatOverrides;                               // 0x00D0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      ThreatenedBySightOfCarrier;                               // 0x00E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<struct FHearingThreat>                      KnownHearingDangers;                                      // 0x00E8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              CarrierHearingThreatSpeedThreshold;                       // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageThreat;                                             // 0x00FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 CharacterDistanceToDangerRatingCurve;                     // 0x0100(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DangerRatingToAgitationDurationCurve;                     // 0x0108(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeToBecomeAgitatedMin;                                  // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeToBecomeAgitatedMax;                                  // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AgitationDurationVariance;                                // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AlertThreshold;                                           // 0x011C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FleeThreshold;                                            // 0x0120(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeToBecomeCalm;                                         // 0x0124(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CalmCooldownTime;                                         // 0x0128(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDistanceFromLeaderForIdle;                             // 0x012C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DistanceToLeaderPatrolChanceCurve;                        // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.FaunaAIContollerParamsDataAsset")); }
		return ptr;
	}

};


// Class AthenaAI.AthenaFaunaAIController
// 0x0130 (0x0948 - 0x0818)
class AAthenaFaunaAIController : public AAthenaAIController
{
public:
	float                                              MaxTimeBetweenThreatDetermination;                        // 0x0818(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultControlRotationInterpSpeed;                        // 0x081C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FAIStategyControllerMovementMod>     StrategyControllerMovementMods;                           // 0x0820(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              MinAgentHalfHeightPctOverride;                            // 0x0830(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0834(0x000C) MISSED OFFSET
	class AActor*                                      CarrierActor;                                             // 0x0840(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0848(0x0050) MISSED OFFSET
	class AActor*                                      HighestDangerActor;                                       // 0x0898(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x78];                                      // 0x08A0(0x0078) MISSED OFFSET
	class UFaunaAIPlayerTracker*                       PlayerTracker;                                            // 0x0918(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0920(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaFaunaAIController")); }
		return ptr;
	}


	void LeaderDestroyed(class AActor* Actor);
	class AActor* GetLeader();
	float GetCourage();
	class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
};


// Class AthenaAI.AthenaSwimmingAIController
// 0x00B8 (0x08D0 - 0x0818)
class AAthenaSwimmingAIController : public AAthenaAIController
{
public:
	class USwimmingPathFollowingComponent*             SwimmingPathFollowingComponent;                           // 0x0818(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCurveFloat*                                 DistOfAttackerVsChanceToPursue;                           // 0x0820(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FName>                               TimersToZeroIfStartingRevengeAttack;                      // 0x0828(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FName                                       DespawnRequiredBlackboardKey;                             // 0x0838(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DespawnRequiredReasonBlackboardKey;                       // 0x0840(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PathingFailedWeight;                                      // 0x0848(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PathingFailedThresholdToDespawn;                          // 0x084C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0850(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaSwimmingAIController")); }
		return ptr;
	}


	void TargetActorDestroyed(class AActor* Actor);
	void SetTargetActor(class AActor* Actor);
};


// Class AthenaAI.AthenaAICharacterControllerParamsDataAsset
// 0x0060 (0x0110 - 0x00B0)
class UAthenaAICharacterControllerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	unsigned char                                      UseRVOAvoidance;                                          // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<struct FAIStrategyMovementProperties>       AIStrategyMovementProperties;                             // 0x00B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> ItemCategoryAIStrategyMovementPropertiesOverrides;        // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                    // 0x00D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> WieldedItemProjectileEffectivenessProperties;             // 0x00E0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> WieldedItemOverrideNamedControllerParams;                 // 0x00F0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             NamedItemParams;                                          // 0x0100(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAICharacterControllerParamsDataAsset")); }
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsDataProvider
// 0x0018 (0x0040 - 0x0028)
class UAthenaAIControllerParamsDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BoolValue;                                                // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAIControllerParamsDataProvider")); }
		return ptr;
	}

};


// Class AthenaAI.AthenaAIDebugFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAIDebugFunctionLibrary")); }
		return ptr;
	}


	void SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, class UClass* ClassId, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, float Delay);
	void SpawnAIBySpawner(const struct FName& RegionName, class AActor* TriggerActor);
	void SpawnAI(TAssetPtr<class UClass> AIClass, class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, bool RequireNavMesh, float Delay, bool MakeAIPermanentlyNetRelevant);
	void SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner);
	int GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner);
	void EnableMaximumSightSettings(class AAthenaAIController* AIController, class UAthenaAIControllerParamsDataAsset* ControllerParams);
	void EnableBehaviorTreeLogging(class UObject* WorldContext);
	void DespawnAIPawn(class APawn* Pawn);
	struct FVector CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
};


// Class AthenaAI.AthenaAIPerceptionComponent
// 0x0000 (0x01D0 - 0x01D0)
class UAthenaAIPerceptionComponent : public UAIPerceptionComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAIPerceptionComponent")); }
		return ptr;
	}


	bool IsAnyPerceptionEnabled();
	void EnablePerceptionSense(class UClass* Sense, bool Enable);
	void EnableAllPerception(bool Enable);
};


// Class AthenaAI.AthenaAISightTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAISightTargetInterface : public UAISightTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAISightTargetInterface")); }
		return ptr;
	}

};


// Class AthenaAI.AthenaAIWeightedRangesDataProvider
// 0x0038 (0x0060 - 0x0028)
class UAthenaAIWeightedRangesDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           WeightedRangesValue;                                      // 0x0030(0x0030)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.AthenaAIWeightedRangesDataProvider")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ActionState
// 0x0020 (0x0088 - 0x0068)
class UBTDecorator_ActionState : public UBTDecorator
{
public:
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UClass*                                      StateId;                                                  // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_ActionState")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ActorInWater
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_ActorInWater : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      ReverseLogic;                                             // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_ActorInWater")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardClassValue
// 0x0020 (0x00B0 - 0x0090)
class UBTDecorator_CompareBlackboardClassValue : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      Class;                                                    // 0x0090(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CachedDescription;                                        // 0x0098(0x0010) (CPF_ZeroConstructor)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x00A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardClassValue")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardValues
// 0x0018 (0x0080 - 0x0068)
class UBTDecorator_CompareBlackboardValues : public UBTDecorator
{
public:
	TArray<struct FBlackboardValueCondition>           FloatConditions;                                          // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TEnumAsByte<EBlackboardValueCompositeType>         FloatConditionComposite;                                  // 0x0078(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardValues")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareFloatValueBase
// 0x0038 (0x00B8 - 0x0080)
class UBTDecorator_CompareFloatValueBase : public UBTDecorator_CompareBlackboardValues
{
public:
	TEnumAsByte<EFloatValueComparisonType>             Comparison;                                               // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   Value;                                                    // 0x0088(0x0030) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_CompareFloatValueBase")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardFloatValue
// 0x0028 (0x00E0 - 0x00B8)
class UBTDecorator_CompareBlackboardFloatValue : public UBTDecorator_CompareFloatValueBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x00B8(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardFloatValue")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareCurrentHealth
// 0x0000 (0x00B8 - 0x00B8)
class UBTDecorator_CompareCurrentHealth : public UBTDecorator_CompareFloatValueBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_CompareCurrentHealth")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TargetInRange
// 0x0088 (0x0108 - 0x0080)
class UBTDecorator_TargetInRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                               // 0x0080(0x0030) (CPF_Edit)
	struct FAIDataProviderFloatValue                   ExitRange;                                                // 0x00B0(0x0030) (CPF_Edit)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00E0(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_TargetInRange")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestRange
// 0x0068 (0x00E8 - 0x0080)
class UBTDecorator_TestRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                               // 0x0080(0x0030) (CPF_Edit)
	struct FAIDataProviderFloatValue                   ExitRange;                                                // 0x00B0(0x0030) (CPF_Edit)
	unsigned char                                      TestForOutsideRange;                                      // 0x00E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_TestRange")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestRangeOfSeenActors
// 0x0010 (0x00F8 - 0x00E8)
class UBTDecorator_TestRangeOfSeenActors : public UBTDecorator_TestRange
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_TestRangeOfSeenActors")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ConeCheck3D
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_ConeCheck3D : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (CPF_Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x0098(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_ConeCheck3D")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_DockedToInteractable
// 0x0000 (0x0090 - 0x0090)
class UBTDecorator_DockedToInteractable : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_DockedToInteractable")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_FeatureToggle
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_FeatureToggle : public UBTDecorator
{
public:
	struct FName                                       FeatureName;                                              // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_FeatureToggle")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ItemReadyToUse
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_ItemReadyToUse : public UBTDecorator
{
public:
	class UClass*                                      NotificationId;                                           // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_ItemReadyToUse")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_LineOfSightToTarget
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_LineOfSightToTarget : public UBTDecorator_BlackboardBase
{
public:
	float                                              Interval;                                                 // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_LineOfSightToTarget")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_MultipleRandomDiceRolls
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_MultipleRandomDiceRolls : public UBTDecorator
{
public:
	TArray<struct FChanceAndBlackboardKeyPair>         ChanceKeyPairs;                                           // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_MultipleRandomDiceRolls")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_NearSurfaceOfWater
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_NearSurfaceOfWater : public UBTDecorator
{
public:
	float                                              DistanceFromSurface;                                      // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_NearSurfaceOfWater")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RandomDiceRoll
// 0x0030 (0x0098 - 0x0068)
class UBTDecorator_RandomDiceRoll : public UBTDecorator
{
public:
	struct FAIDataProviderFloatValue                   Chance;                                                   // 0x0068(0x0030) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_RandomDiceRoll")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RandomLoop
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_RandomLoop : public UBTDecorator
{
public:
	int                                                MinNumLoops;                                              // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxNumLoops;                                              // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 RandomNumLoopCurve;                                       // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_RandomLoop")); }
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RollAgainstPatrolChance
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_RollAgainstPatrolChance : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTDecorator_RollAgainstPatrolChance")); }
		return ptr;
	}

};


// Class AthenaAI.BTService_AimAIInteractable
// 0x0078 (0x00E8 - 0x0070)
class UBTService_AimAIInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0070(0x0028) (CPF_Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0098(0x0028) (CPF_Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                  // 0x00C0(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTService_AimAIInteractable")); }
		return ptr;
	}

};


// Class AthenaAI.BTService_EnableFaceFocusActor
// 0x0008 (0x00A0 - 0x0098)
class UBTService_EnableFaceFocusActor : public UBTService_BlackboardBase
{
public:
	unsigned char                                      DisableUpdateMoveFocusForCurrentPathOnExit;               // 0x0098(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTService_EnableFaceFocusActor")); }
		return ptr;
	}

};


// Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch
// 0x0008 (0x00A0 - 0x0098)
class UBTService_IncrementFloatValueWithTimeSpentInBranch : public UBTService_BlackboardBase
{
public:
	float                                              TimeMultiplier;                                           // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch")); }
		return ptr;
	}

};


// Class AthenaAI.BTService_QueryPerceptionForTarget
// 0x0000 (0x0070 - 0x0070)
class UBTService_QueryPerceptionForTarget : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTService_QueryPerceptionForTarget")); }
		return ptr;
	}

};


// Class AthenaAI.BTService_RunEQSQuery
// 0x0020 (0x00B8 - 0x0098)
class UBTService_RunEQSQuery : public UBTService_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0098(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTService_RunEQSQuery")); }
		return ptr;
	}

};


// Class AthenaAI.BTService_RunEQSQueryOnActorMovement
// 0x0068 (0x0120 - 0x00B8)
class UBTService_RunEQSQueryOnActorMovement : public UBTService_RunEQSQuery
{
public:
	unsigned char                                      OverrideQueryTemplateWithBlackboardValue;                 // 0x00B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      OverrideEQSKey;                                           // 0x00C0(0x0028) (CPF_Edit)
	struct FBlackboardKeySelector                      MovingActorKey;                                           // 0x00E8(0x0028) (CPF_Edit)
	float                                              MinimumActorMovementToRunEQS;                             // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumActorVelocityChangeToRunEQS;                       // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTService_RunEQSQueryOnActorMovement")); }
		return ptr;
	}

};


// Class AthenaAI.BTService_SetAIStrategy
// 0x0008 (0x0078 - 0x0070)
class UBTService_SetAIStrategy : public UBTService
{
public:
	class UClass*                                      NewStrategy;                                              // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTService_SetAIStrategy")); }
		return ptr;
	}

};


// Class AthenaAI.BTService_TriggerNotifications
// 0x0020 (0x0090 - 0x0070)
class UBTService_TriggerNotifications : public UBTService
{
public:
	class UClass*                                      EnterBranchNotificationId;                                // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      LeaveBranchNotificationId;                                // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTService_TriggerNotifications")); }
		return ptr;
	}

};


// Class AthenaAI.BTService_UpdateTargetForInteractable
// 0x0050 (0x00C0 - 0x0070)
class UBTService_UpdateTargetForInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0070(0x0028) (CPF_Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0098(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTService_UpdateTargetForInteractable")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaMoveTo
// 0x0018 (0x00B8 - 0x00A0)
class UBTTask_AthenaMoveTo : public UBTTask_MoveTo
{
public:
	unsigned char                                      ShouldFailBeforeSlowDown;                                 // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExitBeforeSlowDownDistanceTolerance;                      // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShouldOverrideMaxSpeedToSlow;                             // 0x00A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                     // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaintainFacingBeforeMove;                                 // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_AthenaMoveTo")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceChange
// 0x0008 (0x00C0 - 0x00B8)
class UBTTask_MoveToFailOnDistanceChange : public UBTTask_AthenaMoveTo
{
public:
	unsigned char                                      FailOnDistanceBeingLess;                                  // 0x00B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FailDistance;                                             // 0x00BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_MoveToFailOnDistanceChange")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors
// 0x0010 (0x00D0 - 0x00C0)
class UBTTask_MoveToFailOnDistanceToSeenActors : public UBTTask_MoveToFailOnDistanceChange
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged
// 0x0028 (0x00E8 - 0x00C0)
class UBTTask_MoveToFailOnDistanceToTargetChanged : public UBTTask_MoveToFailOnDistanceChange
{
public:
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x00C0(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToMovingLocation
// 0x0010 (0x00C8 - 0x00B8)
class UBTTask_MoveToMovingLocation : public UBTTask_AthenaMoveTo
{
public:
	float                                              MinimumLocationMovementForRePath;                         // 0x00B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumTimeBeforeRePath;                                  // 0x00BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsContinuous;                                             // 0x00C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_MoveToMovingLocation")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaWait
// 0x0060 (0x00C0 - 0x0060)
class UBTTask_AthenaWait : public UBTTaskNode
{
public:
	struct FAIDataProviderFloatValue                   Min;                                                      // 0x0060(0x0030) (CPF_Edit)
	struct FAIDataProviderFloatValue                   Max;                                                      // 0x0090(0x0030) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_AthenaWait")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_ClearBlackboardValue
// 0x0000 (0x0088 - 0x0088)
class UBTTask_ClearBlackboardValue : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_ClearBlackboardValue")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_ClearPerceptualData
// 0x0000 (0x0060 - 0x0060)
class UBTTask_ClearPerceptualData : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_ClearPerceptualData")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_CopyBlackboardActor
// 0x0050 (0x00B0 - 0x0060)
class UBTTask_CopyBlackboardActor : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         // 0x0060(0x0028) (CPF_Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x0088(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_CopyBlackboardActor")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_IgnoreActorTemporarily
// 0x0008 (0x0090 - 0x0088)
class UBTTask_IgnoreActorTemporarily : public UBTTask_BlackboardBase
{
public:
	float                                              TimeToForget;                                             // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_IgnoreActorTemporarily")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_InteractWith
// 0x0008 (0x0090 - 0x0088)
class UBTTask_InteractWith : public UBTTask_BlackboardBase
{
public:
	class UClass*                                      NotificationId;                                           // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_InteractWith")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToTarget
// 0x0030 (0x00D0 - 0x00A0)
class UBTTask_MoveToTarget : public UBTTask_MoveTo
{
public:
	float                                              MaxDistFromDestinationPosToTargetPos;                     // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                     // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x00A8(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_MoveToTarget")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_NOP
// 0x0008 (0x0068 - 0x0060)
class UBTTask_NOP : public UBTTaskNode
{
public:
	int                                                Id;                                                       // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_NOP")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_PlayMontage
// 0x0010 (0x0070 - 0x0060)
class UBTTask_PlayMontage : public UBTTaskNode
{
public:
	class UObject*                                     MontageToPlay;                                            // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PlayAsDynamicMontage;                                     // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_PlayMontage")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_RequestDespawn
// 0x0000 (0x0060 - 0x0060)
class UBTTask_RequestDespawn : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_RequestDespawn")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetAIStrategy
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetAIStrategy : public UBTTaskNode
{
public:
	class UClass*                                      NewStrategy;                                              // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_SetAIStrategy")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardActor
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardActor : public UBTTask_BlackboardBase
{
public:
	class AActor*                                      Actor;                                                    // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_SetBlackboardActor")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardBoolValue
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardBoolValue : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      NewValue;                                                 // 0x0088(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_SetBlackboardBoolValue")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardEQSValue
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardEQSValue : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   EQS;                                                      // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_SetBlackboardEQSValue")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValue
// 0x0030 (0x00B8 - 0x0088)
class UBTTask_SetBlackboardFloatValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   FloatValue;                                               // 0x0088(0x0030) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_SetBlackboardFloatValue")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax
// 0x0060 (0x00E8 - 0x0088)
class UBTTask_SetBlackboardFloatValueFromMinMax : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   MinValue;                                                 // 0x0088(0x0030) (CPF_Edit)
	struct FAIDataProviderFloatValue                   MaxValue;                                                 // 0x00B8(0x0030) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot
// 0x0078 (0x00D8 - 0x0060)
class UBTTask_SetupAITargetWeaponForNextShot : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0060(0x0028) (CPF_Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0088(0x0028) (CPF_Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                  // 0x00B0(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_StopMovementImmediately
// 0x0000 (0x0060 - 0x0060)
class UBTTask_StopMovementImmediately : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_StopMovementImmediately")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_StorePawnLocationInBlackboard
// 0x0000 (0x0088 - 0x0088)
class UBTTask_StorePawnLocationInBlackboard : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_StorePawnLocationInBlackboard")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimAttackTargetActor
// 0x0058 (0x00E0 - 0x0088)
class UBTTask_SwimAttackTargetActor : public UBTTask_BlackboardBase
{
public:
	float                                              DamageToApply;                                            // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAngleToTargetToSuccessfullyAttack;                     // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAttackableTypeToAnimMapping>        AttackAnimMapping;                                        // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FName                                       LoSTraceProfileName;                                      // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                           // 0x00A8(0x0030) (CPF_Edit)
	float                                              MaxDistanceToTargetToApplyDamage;                         // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_SwimAttackTargetActor")); }
		return ptr;
	}

};


// Class AthenaAI.SwimmingPathFollowingComponent
// 0x0108 (0x01D8 - 0x00D0)
class USwimmingPathFollowingComponent : public UActorComponent
{
public:
	float                                              DirectSwimmingDotToTarget;                                // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxTargetPitchFactor;                                     // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinPosDeltaSqToRepathToMovingTarget;                      // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinPosDeltaSqToInvalidateFixedLocation;                   // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PitchBezierControlPointsLengthFactor;                     // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeMovingAwayFromTargetPosToFlagFailure;                 // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LineOfSightCollisionProfile;                              // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LineOfSightSphereCastRadius;                              // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LineOfSightCheckInterval;                                 // 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FirstLoSTriggerTimeInNewPath;                             // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FirstLoSTriggerTimeInRePath;                              // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DrawDebugOnServer;                                        // 0x0100(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             CollisionTypesToDoPathUpdate;                             // 0x0108(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class USwimmingCreatureMovementComponent*          MovementComponent;                                        // 0x0118(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0120(0x0058) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0178(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0180(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.SwimmingPathFollowingComponent")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimTo
// 0x0040 (0x00C8 - 0x0088)
class UBTTask_SwimTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESwimmingGoalCheckMode>                GoalCheckMode;                                            // 0x008C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESwimmingArcMode>                      ArcMode;                                                  // 0x008D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Abort3DSwimIfCresting;                                    // 0x008E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetActorZOffset;                                       // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESwimmingSyncMode>                     SwimSyncMode;                                             // 0x0094(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TrackTargetActor;                                         // 0x0095(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlackboardKeySelector                      TrackedTargetActorKey;                                    // 0x0098(0x0028) (CPF_Edit)
	TEnumAsByte<ESwimmingLineOfSightTest>              LineOfSightTestMode;                                      // 0x00C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_SwimTo")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimTurnOnTheSpot
// 0x0010 (0x0098 - 0x0088)
class UBTTask_SwimTurnOnTheSpot : public UBTTask_BlackboardBase
{
public:
	float                                              MaxTurnSpringAccel;                                       // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeUntilMaxTurnSpringAccel;                              // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngleDeltaToAcceptFinalRotation;                          // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeout;                                                  // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_SwimTurnOnTheSpot")); }
		return ptr;
	}

};


// Class AthenaAI.BTTask_TriggerNotification
// 0x0008 (0x0068 - 0x0060)
class UBTTask_TriggerNotification : public UBTTaskNode
{
public:
	class UClass*                                      NotificationId;                                           // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.BTTask_TriggerNotification")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_LeaderFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_LeaderFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryContext_LeaderFromBlackboard")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_PositionFromBlackboard
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryContext_PositionFromBlackboard : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryContext_PositionFromBlackboard")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_ContextLocationFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_HomePositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_KnockbackPosFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_SeenActors
// 0x0010 (0x0038 - 0x0028)
class UEnvQueryContext_SeenActors : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryContext_SeenActors")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActorFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActorFromBlackboardPredictedLocation : public UEnvQueryContext_TargetActorFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_LineTowardsBlackboardPosition
// 0x0070 (0x00F0 - 0x0080)
class UEnvQueryGenerator_LineTowardsBlackboardPosition : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      LineOrigin;                                               // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      LineEnd;                                                  // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAIDataProviderFloatValue                   DistanceBetweenPointsData;                                // 0x0090(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAIDataProviderIntValue                     MaxPointsPerLineData;                                     // 0x00C0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryGenerator_LineTowardsBlackboardPosition")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_PointsAtContext
// 0x0008 (0x0088 - 0x0080)
class UEnvQueryGenerator_PointsAtContext : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      Context;                                                  // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryGenerator_PointsAtContext")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_WaterDonut
// 0x0150 (0x01D0 - 0x0080)
class UEnvQueryGenerator_WaterDonut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0080(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x00B0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x00E0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x0110(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x0140(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0160(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ZOffsetFromCentre;                                        // 0x0190(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	class UClass*                                      Center;                                                   // 0x01C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01C8(0x0001) ( BITFIELD: 0101)
	unsigned char                                      ProjectPointsToWaterSurface : 1;                          // 0x01C8(0x0001) (CPF_Edit BITFIELD: 0202)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryGenerator_WaterDonut")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing
// 0x0078 (0x00F8 - 0x0080)
class UEnvQueryGenerator_WaterMultiDeckerRing : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   Radius;                                                   // 0x0080(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<float>                                      ZOffsetOfRingsFromContext;                                // 0x00B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x00C0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	class UClass*                                      Center;                                                   // 0x00F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_HasLineOfSight
// 0x0010 (0x0180 - 0x0170)
class UEnvQueryTest_HasLineOfSight : public UEnvQueryTest
{
public:
	TEnumAsByte<ETraceDirection>                       TraceDirection;                                           // 0x0170(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x0178(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryTest_HasLineOfSight")); }
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_IsAngleInRange2D
// 0x00A0 (0x0210 - 0x0170)
class UEnvQueryTest_IsAngleInRange2D : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    // 0x0170(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x0190(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MinAngleDegrees;                                          // 0x01B0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MaxAngleDegrees;                                          // 0x01E0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.EnvQueryTest_IsAngleInRange2D")); }
		return ptr;
	}

};


// Class AthenaAI.PeriodicAINoiseEventComponent
// 0x0038 (0x0108 - 0x00D0)
class UPeriodicAINoiseEventComponent : public UActorComponent
{
public:
	struct FName                                       NoiseTag;                                                 // 0x00D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      NoiseRangeBasedOnMovementSpeed;                           // 0x00D8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConstantNoiseRange;                                       // 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 MovementSpeedToNoiseRange;                                // 0x00E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.PeriodicAINoiseEventComponent")); }
		return ptr;
	}

};


// Class AthenaAI.WaterbasedAISupplier
// 0x0008 (0x0470 - 0x0468)
class AWaterbasedAISupplier : public AActor
{
public:
	class UAISpawnerList*                              Spawners;                                                 // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaAI.WaterbasedAISupplier")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
