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

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0008
struct FGameplayAttribute
{
	class UProperty*                                   Attribute;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0010
struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute                          AttributeToCapture;                                       // 0x0000(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	TEnumAsByte<EGameplayEffectAttributeCaptureSource> AttributeSource;                                          // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSnapshot;                                                // 0x0009(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0020
struct FScalableFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FCurveTableRowHandle                        Curve;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x00D8
struct FAttributeBasedFloat
{
	struct FScalableFloat                              Coefficient;                                              // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 // 0x0020(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                // 0x0040(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayEffectAttributeCaptureDefinition   BackingAttribute;                                         // 0x0060(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCurveTableRowHandle                        AttributeCurve;                                           // 0x0070(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	TEnumAsByte<EAttributeBasedFloatCalculationType>   AttributeCalculationType;                                 // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       SourceTagFilter;                                          // 0x0088(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetTagFilter;                                          // 0x00B0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0068
struct FCustomCalculationBasedFloat
{
	class UClass*                                      CalculationClassMagnitude;                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScalableFloat                              Coefficient;                                              // 0x0008(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 // 0x0028(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                // 0x0048(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0008
struct FSetByCallerFloat
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x0170
struct FGameplayEffectModifierMagnitude
{
	TEnumAsByte<EGameplayEffectMagnitudeCalculation>   MagnitudeCalculationType;                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FScalableFloat                              ScalableFloatMagnitude;                                   // 0x0008(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAttributeBasedFloat                        AttributeBasedMagnitude;                                  // 0x0028(0x00D8) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCustomCalculationBasedFloat                CustomMagnitude;                                          // 0x0100(0x0068) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSetByCallerFloat                           SetByCallerMagnitude;                                     // 0x0168(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0050
struct FGameplayTagRequirements
{
	struct FGameplayTagContainer                       RequireTags;                                              // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTagContainer                       IgnoreTags;                                               // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x0240
struct FGameplayModifierInfo
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FScalableFloat                              Magnitude;                                                // 0x0010(0x0020)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        // 0x0030(0x0170) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x01A0(0x0050) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x01F0(0x0050) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0228
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition   CapturedAttribute;                                        // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_EditConst)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        // 0x0018(0x0170) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x0188(0x0050) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x01D8(0x0050) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0050
struct FGameplayEffectExecutionDefinition
{
	class UClass*                                      CalculationClass;                                         // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       PassedInTags;                                             // 0x0008(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                     // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                         // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0038
struct FGameplayEffectCue
{
	struct FGameplayAttribute                          MagnitudeAttribute;                                       // 0x0000(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              MinLevel;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxLevel;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       GameplayCueTags;                                          // 0x0010(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0078
struct FInheritedTagContainer
{
	struct FGameplayTagContainer                       CombinedTags;                                             // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_EditConst)
	struct FGameplayTagContainer                       Added;                                                    // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       Removed;                                                  // 0x0050(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0004
struct FGameplayAbilitySpecHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x0028
struct FGameplayAbilitySpecDef
{
	class UClass*                                      Ability;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                Level;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                InputID;                                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TEnumAsByte<EGameplayEffectGrantedAbilityRemovePolicy> RemovalPolicy;                                            // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UObject*                                     SourceObject;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FGameplayAbilitySpecHandle                  AssignedHandle;                                           // 0x0020(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.PredictionKey
// 0x0018
struct FPredictionKey
{
	int16_t                                            Current;                                                  // 0x0000(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            Base;                                                     // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UPackageMap*                                 PredictiveConnection;                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bIsStale;                                                 // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bIsServerInitiated;                                       // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0020
struct FGameplayAbilityActivationInfo
{
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                           // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanBeEndedByOtherInstance;                               // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FPredictionKey                              PredictionKeyWhenActivated;                               // 0x0008(0x0018)
};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0018
struct FGameplayEffectContextHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x0098
struct FGameplayEventData
{
	struct FGameplayTag                                EventTag;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     OptionalObject2;                                          // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle                ContextHandle;                                            // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTagContainer                       InstigatorTags;                                           // 0x0040(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTagContainer                       TargetTags;                                               // 0x0068(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              EventMagnitude;                                           // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x000C
struct FAbilityTriggerData
{
	struct FGameplayTag                                TriggerTag;                                               // 0x0000(0x0008) (CPF_Edit)
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                            // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0010
struct FAttributeDefaults
{
	class UClass*                                      Attributes;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataTable*                                  DefaultStartingTable;                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0004
struct FActiveGameplayEffectHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x0070 (0x0078 - 0x0008)
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // 0x0008(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UGameplayAbility*                            Ability;                                                  // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Level;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InputID;                                                  // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     SourceObject;                                             // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      InputPressed;                                             // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      ActiveCount;                                              // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      RemoveAfterActivation;                                    // 0x002A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // 0x0030(0x0020) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                   // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                      // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FActiveGameplayEffectHandle                 GameplayEffectHandle;                                     // 0x0070(0x0004) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      PendingRemove;                                            // 0x0074(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0018 (0x00C0 - 0x00A8)
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
	TArray<struct FGameplayAbilitySpec>                Items;                                                    // 0x00A8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0030
struct FGameplayAbilityRepAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Position;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendTime;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      NextSectionID;                                            // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsStopped : 1;                                            // 0x0015(0x0001) ( BITFIELD: 0101)
	unsigned char                                      ForcePlayBit : 1;                                         // 0x0015(0x0001) ( BITFIELD: 0202)
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0030
struct FGameplayAbilityLocalAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PlayBit;                                                  // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0010(0x0018)
	class UGameplayAbility*                            AnimatingAbility;                                         // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0010
struct FGameplayEffectModifiedAttribute
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0008)
	float                                              TotalMagnitude;                                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0020
struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition   BackingDefinition;                                        // 0x0000(0x0010)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                         // 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bHasNonSnapshottedAttributes;                             // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x00A8
struct FTagContainerAggregator
{
	struct FGameplayTagContainer                       CapturedActorTags;                                        // 0x0000(0x0028)
	struct FGameplayTagContainer                       CapturedSpecTags;                                         // 0x0028(0x0028)
	struct FGameplayTagContainer                       ScopedTags;                                               // 0x0050(0x0028)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0004
struct FModifierSpec
{
	float                                              EvaluatedMagnitude;                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x0298
struct FGameplayEffectSpec
{
	class UGameplayEffect*                             Def;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                               // 0x0018(0x0028) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Duration;                                                 // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Period;                                                   // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChanceToApplyToTarget;                                    // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FTagContainerAggregator                     CapturedSourceTags;                                       // 0x0060(0x00A8) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FTagContainerAggregator                     CapturedTargetTags;                                       // 0x0108(0x00A8) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       DynamicGrantedTags;                                       // 0x01B0(0x0028)
	struct FGameplayTagContainer                       DynamicAssetTags;                                         // 0x01D8(0x0028)
	TArray<struct FModifierSpec>                       Modifiers;                                                // 0x0200(0x0010) (CPF_ZeroConstructor)
	int                                                StackCount;                                               // 0x0210(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCompletedSourceAttributeCapture : 1;                     // 0x0214(0x0001) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate BITFIELD: 0101)
	unsigned char                                      bCompletedTargetAttributeCapture : 1;                     // 0x0214(0x0001) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate BITFIELD: 0202)
	unsigned char                                      bDurationLocked : 1;                                      // 0x0214(0x0001) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate BITFIELD: 0404)
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilitySpecs;                                      // 0x0218(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0228(0x0050) MISSED OFFSET
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0278(0x0018)
	float                                              Level;                                                    // 0x0290(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x0320 (0x0328 - 0x0008)
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FGameplayEffectSpec                         Spec;                                                     // 0x0010(0x0298)
	struct FPredictionKey                              PredictionKey;                                            // 0x02A8(0x0018)
	float                                              StartServerWorldTime;                                     // 0x02C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CachedStartServerWorldTime;                               // 0x02C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	float                                              StartWorldTime;                                           // 0x02C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bIsInhibited;                                             // 0x02CC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5B];                                      // 0x02CD(0x005B) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x0320 (0x03C8 - 0x00A8)
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x00A8(0x0050) MISSED OFFSET
	TArray<struct FActiveGameplayEffect>               GameplayEffects_Internal;                                 // 0x00F8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x2C0];                                     // 0x0108(0x02C0) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x0028 (0x0030 - 0x0008)
struct FActiveGameplayCue : public FFastArraySerializerItem
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0008(0x0008)
	struct FPredictionKey                              PredictionKey;                                            // 0x0010(0x0018)
	unsigned char                                      bPredictivelyRemoved;                                     // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0018 (0x00C0 - 0x00A8)
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
	TArray<struct FActiveGameplayCue>                  GameplayCues;                                             // 0x00A8(0x0010) (CPF_ZeroConstructor)
	class UAbilitySystemComponent*                     Owner;                                                    // 0x00B8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0010
struct FGameplayAbilityBindInfo
{
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      GameplayAbilityClass;                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C
struct FWorldReticleParameters
{
	struct FVector                                     AOEScale;                                                 // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070
struct FGameplayAbilityTargetingLocationInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                             // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct FTransform                                  LiteralTransform;                                         // 0x0020(0x0030) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x0050(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMeshComponent*                              SourceComponent;                                          // 0x0058(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGameplayAbility*                            SourceAbility;                                            // 0x0060(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceSocketName;                                         // 0x0068(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0010
struct FGameplayTargetDataFilterHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0088
struct FGameplayEffectSpecForRPC
{
	class UGameplayEffect*                             Def;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0018(0x0018)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // 0x0030(0x0028)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // 0x0058(0x0028)
	float                                              Level;                                                    // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x0080
struct FGameplayCueParameters
{
	float                                              NormalizedMagnitude;                                      // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RawMagnitude;                                             // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0008(0x0018) (CPF_BlueprintVisible)
	struct FName                                       MatchedTagName;                                           // 0x0020(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                OriginalTag;                                              // 0x0028(0x0008) (CPF_BlueprintVisible)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // 0x0030(0x0028) (CPF_BlueprintVisible)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // 0x0058(0x0028) (CPF_BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0138
struct FGameplayCuePendingExecute
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0000(0x0008)
	struct FPredictionKey                              PredictionKey;                                            // 0x0008(0x0018)
	TEnumAsByte<EGameplayCuePayloadType>               PayloadType;                                              // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UAbilitySystemComponent*                     OwningComponent;                                          // 0x0028(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGameplayEffectSpecForRPC                   FromSpec;                                                 // 0x0030(0x0088)
	struct FGameplayCueParameters                      CueParameters;                                            // 0x00B8(0x0080)
};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0028
struct FGameplayCueNotifyData
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0000(0x0008) (CPF_Edit)
	struct FStringAssetReference                       GameplayCueNotifyObj;                                     // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      LoadedGameplayCueClass;                                   // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0010
struct FGameplayTagReponsePair
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (CPF_Edit)
	class UClass*                                      ResponseGameplayEffect;                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0020
struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair                     Positive;                                                 // 0x0000(0x0010) (CPF_Edit)
	struct FGameplayTagReponsePair                     Negative;                                                 // 0x0010(0x0010) (CPF_Edit)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0018
struct FGameplayEffectSpecHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0010
struct FGameplayAbilityTargetDataHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0027 (0x0028 - 0x0001)
struct FAttributeMetaData : public FTableRowBase
{
	float                                              BaseValue;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinValue;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     DerivedAttributeInfo;                                     // 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bCanStack;                                                // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GlobalCurveDataOverride
// 0x0010
struct FGlobalCurveDataOverride
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0058
struct FGameplayEffectContext
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Instigator;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      InstigatorAbilitySystemComponent;                         // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                   // 0x0028(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	struct FVector                                     WorldOrigin;                                              // 0x0048(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasWorldOrigin;                                          // 0x0054(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0018
struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0008)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Magnitude;                                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // 0x0010(0x0004)
	unsigned char                                      IsValid;                                                  // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0008
struct FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0080 (0x0088 - 0x0008)
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
	struct FHitResult                                  HitResult;                                                // 0x0008(0x0080)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // 0x0010(0x0070) (CPF_Edit, CPF_BlueprintVisible)
	TArray<TWeakObjectPtr<class AActor>>               TargetActorArray;                                         // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00E8 (0x00F0 - 0x0008)
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // 0x0010(0x0070) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                           // 0x0080(0x0070) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x0050
struct FActiveGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x00D0
struct FGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FScriptDelegate                             CustomMatchDelegate_BP;                                   // 0x0008(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FGameplayTagQuery                           OwningTagQuery;                                           // 0x0018(0x0048) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTagQuery                           EffectTagQuery;                                           // 0x0060(0x0048) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayAttribute                          ModifyingAttribute;                                       // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	class UObject*                                     EffectSource;                                             // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGameplayEffect*                             EffectDefinition;                                         // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // 0x0000(0x0004)
	int                                                PredictionKeyAtCreation;                                  // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0038
struct FGameplayAbilityActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       OwnerActor;                                               // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       AvatarActor;                                              // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class APlayerController>            PlayerController;                                         // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      AbilitySystemComponent;                                   // 0x0020(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UAnimInstance>                AnimInstance;                                             // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UMovementComponent>           MovementComponent;                                        // 0x0030(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0028
struct FGameplayTargetDataFilter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      SelfActor;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                               // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UClass*                                      RequiredActorClass;                                       // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReverseFilter;                                           // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0018
struct FGameplayEffectCustomExecutionOutput
{
	TArray<struct FGameplayModifierEvaluatedData>      OutputModifiers;                                          // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bTriggerConditionalGameplayEffects : 1;                   // 0x0010(0x0001) ( BITFIELD: 0101)
	unsigned char                                      bHandledStackCountManually : 1;                           // 0x0010(0x0001) ( BITFIELD: 0202)
	unsigned char                                      bHandledGameplayCuesManually : 1;                         // 0x0010(0x0001) ( BITFIELD: 0404)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x0088
struct FGameplayEffectCustomExecutionParameters
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
