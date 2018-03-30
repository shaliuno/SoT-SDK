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

// Class GameplayAbilities.AttributeSet
// 0x0008 (0x0030 - 0x0028)
class UAttributeSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AttributeSet")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectCalculation
// 0x0010 (0x0038 - 0x0028)
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                              // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayEffectCalculation")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffect
// 0x0550 (0x0578 - 0x0028)
class UGameplayEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TEnumAsByte<EGameplayEffectDurationType>           DurationPolicy;                                           // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FGameplayEffectModifierMagnitude            DurationMagnitude;                                        // 0x0038(0x0170) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FScalableFloat                              Period;                                                   // 0x01A8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      bExecutePeriodicEffectOnApplication;                      // 0x01C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	TArray<struct FGameplayModifierInfo>               Modifiers;                                                // 0x01D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionDefinition>  Executions;                                               // 0x01E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FScalableFloat                              ChanceToApplyToTarget;                                    // 0x01F0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<class UClass*>                              TargetEffectClasses;                                      // 0x0210(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UGameplayEffect*>                     TargetEffects;                                            // 0x0220(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)
	TArray<class UClass*>                              OverflowEffects;                                          // 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bDenyOverflowApplication;                                 // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bClearStackOnOverflow;                                    // 0x0241(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                         // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                           // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bRequireModifierSuccessToTriggerCues;                     // 0x0268(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	TArray<struct FGameplayEffectCue>                  GameplayCues;                                             // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UGameplayEffectUIData*                       UIData;                                                   // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FInheritedTagContainer                      InheritableGameplayEffectTags;                            // 0x0288(0x0078) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayEffectTags;                                       // 0x0300(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FInheritedTagContainer                      InheritableOwnedTagsContainer;                            // 0x0328(0x0078) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       OwnedTagsContainer;                                       // 0x03A0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    OngoingTagRequirements;                                   // 0x03C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    ApplicationTagRequirements;                               // 0x0418(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FInheritedTagContainer                      RemoveGameplayEffectsWithTags;                            // 0x0468(0x0078) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       ClearTagsContainer;                                       // 0x04E0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    GrantedApplicationImmunityTags;                           // 0x0508(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TEnumAsByte<EGameplayEffectStackingType>           StackingType;                                             // 0x0558(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                StackLimitCount;                                          // 0x055C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EGameplayEffectStackingDurationPolicy> StackDurationRefreshPolicy;                               // 0x0560(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EGameplayEffectStackingPeriodPolicy>   StackPeriodResetPolicy;                                   // 0x0561(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilities;                                         // 0x0568(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayEffect")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility
// 0x04A8 (0x04D0 - 0x0028)
class UGameplayAbility : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
	struct FGameplayTagContainer                       AbilityTags;                                              // 0x00C8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00F0(0x0048) MISSED OFFSET
	unsigned char                                      bReplicateInputDirectly;                                  // 0x0138(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x27];                                      // 0x0139(0x0027) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                        // 0x0160(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                         // 0x0161(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bServerRespectsRemoteAbilityCancellation;                 // 0x0162(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRetriggerInstancedAbility;                               // 0x0163(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FGameplayAbilityActivationInfo              CurrentActivationInfo;                                    // 0x0168(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayEventData                          CurrentEventData;                                         // 0x0188(0x0098) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                       // 0x0220(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class UClass*                                      CostGameplayEffectClass;                                  // 0x0228(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UGameplayEffect*                             CostGameplayEffect;                                       // 0x0230(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	TArray<struct FAbilityTriggerData>                 AbilityTriggers;                                          // 0x0238(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UClass*                                      CooldownGameplayEffectClass;                              // 0x0248(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UGameplayEffect*                             CooldownGameplayEffect;                                   // 0x0250(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	struct FGameplayTagQuery                           CancelAbilitiesMatchingTagQuery;                          // 0x0258(0x0048) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagQuery                           ConstTagQuery;                                            // 0x02A0(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_EditConst)
	struct FGameplayTagContainer                       CancelAbilitiesWithTag;                                   // 0x02E8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       BlockAbilitiesWithTag;                                    // 0x0310(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationOwnedTags;                                      // 0x0338(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationRequiredTags;                                   // 0x0360(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationBlockedTags;                                    // 0x0388(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceRequiredTags;                                       // 0x03B0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceBlockedTags;                                        // 0x03D8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetRequiredTags;                                       // 0x0400(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetBlockedTags;                                        // 0x0428(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x70];                                      // 0x0450(0x0070) MISSED OFFSET
	class UAnimMontage*                                CurrentMontage;                                           // 0x04C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsActive;                                                // 0x04C8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsCancelable;                                            // 0x04C9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsBlockingOtherAbilities;                                // 0x04CA(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x04CB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbility")); }
		return ptr;
	}


	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload);
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName);
	void MontageJumpToSection(const struct FName& SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& payload);
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility();
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UGameplayEffect* GameplayEffect, int GameplayEffectLevel);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToOwner(class UGameplayEffect* GameplayEffect, int GameplayEffectLevel);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& eventData);
	void K2_ActivateAbility();
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectSpecHandle GetOutgoingGameplayEffectSpec(class UGameplayEffect* GameplayEffect, float Level);
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	int GetAbilityLevel();
	void EndTaskByInstanceName(const struct FName& InstanceName);
	void EndAbilityState(const struct FName& OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(const struct FName& InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel);
};


// Class GameplayAbilities.GameplayCueInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayCueInterface")); }
		return ptr;
	}


	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilitySystemBlueprintLibrary")); }
		return ptr;
	}


	bool TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	bool TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	bool TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	bool TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FGameplayEffectSpecHandle SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	struct FGameplayEffectSpecHandle SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount);
	struct FGameplayEffectSpecHandle SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	void SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload);
	struct FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
	bool IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
	bool IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
	bool HasHitResult(const struct FGameplayCueParameters& Parameters);
	struct FTransform GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FTransform GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FVector GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FVector GetOrigin(const struct FGameplayCueParameters& Parameters);
	struct FTransform GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
	class AActor* GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	struct FHitResult GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	struct FHitResult GetHitResult(const struct FGameplayCueParameters& Parameters);
	bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	bool GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	float GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	int GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<class AActor*> GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	int GetActorCount(const struct FGameplayCueParameters& Parameters);
	class AActor* GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index);
	int GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);
	void ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	struct FGameplayAbilityTargetDataHandle FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
	bool EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
	bool EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class UObject* EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FVector EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FHitResult EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	bool DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor);
	bool DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs);
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude);
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	struct FGameplayEffectSpecHandle AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayEffectSpecHandle AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);
};


// Class GameplayAbilities.AbilitySystemComponent
// 0x0D48 (0x0E78 - 0x0130)
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	TArray<struct FAttributeDefaults>                  DefaultStartingData;                                      // 0x0138(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                        // 0x0148(0x0010) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor)
	struct FPredictionKey                              ReplicatedPredictionKey;                                  // 0x0158(0x0018) (CPF_Net)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0170(0x00D8) MISSED OFFSET
	float                                              OutgoingDuration;                                         // 0x0248(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IncomingDuration;                                         // 0x024C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAbilitySpecContainer               ActivatableAbilities;                                     // 0x0250(0x00C0) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0310(0x0050) MISSED OFFSET
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                          // 0x0360(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x270];                                     // 0x0370(0x0270) MISSED OFFSET
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                      // 0x05E0(0x0010) (CPF_ZeroConstructor)
	struct FGameplayAbilityRepAnimMontage              RepAnimMontageInfo;                                       // 0x05F0(0x0030) (CPF_Net)
	struct FGameplayAbilityLocalAnimMontage            LocalAnimMontageInfo;                                     // 0x0620(0x0030)
	unsigned char                                      UnknownData04[0xA0];                                      // 0x0650(0x00A0) MISSED OFFSET
	class AActor*                                      OwnerActor;                                               // 0x06F0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      AvatarActor;                                              // 0x06F8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0700(0x0010) MISSED OFFSET
	struct FActiveGameplayEffectsContainer             ActiveGameplayEffects;                                    // 0x0710(0x03C8) (CPF_Net)
	struct FActiveGameplayCueContainer                 ActiveGameplayCues;                                       // 0x0AD8(0x00C0) (CPF_Net)
	unsigned char                                      UnknownData06[0x160];                                     // 0x0B98(0x0160) MISSED OFFSET
	TArray<unsigned char>                              BlockedAbilityBindings;                                   // 0x0CF8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData07[0x170];                                     // 0x0D08(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilitySystemComponent")); }
		return ptr;
	}


	bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName);
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);
	void RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	void OnRep_ReplicatedAnimMontage();
	void OnRep_PredictionKey();
	void OnRep_OwningActor();
	void OnRep_GameplayEffects();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
	void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToTarget(class UGameplayEffect* GameplayEffect, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToSelf(class UGameplayEffect* GameplayEffect, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	struct FGameplayEffectSpecHandle GetOutgoingSpec(class UGameplayEffect* GameplayEffect, float Level);
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
	int GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent);
	struct FGameplayEffectContextHandle GetEffectContext();
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(class UAbilitySystemComponent* Target, struct FGameplayEffectSpecHandle* SpecHandle);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int InputID);
};


// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0000 (0x0560 - 0x0560)
class AAbilitySystemDebugHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilitySystemDebugHUD")); }
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemGlobals
// 0x0100 (0x0128 - 0x0028)
class UAbilitySystemGlobals : public UObject
{
public:
	struct FStringClassReference                       AbilitySystemGlobalsClassName;                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FGameplayTag                                ActivateFailCooldownTag;                                  // 0x0038(0x0008)
	struct FName                                       ActivateFailCooldownName;                                 // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FGameplayTag                                ActivateFailCostTag;                                      // 0x0048(0x0008)
	struct FName                                       ActivateFailCostName;                                     // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsBlockedTag;                               // 0x0058(0x0008)
	struct FName                                       ActivateFailTagsBlockedName;                              // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsMissingTag;                               // 0x0068(0x0008)
	struct FName                                       ActivateFailTagsMissingName;                              // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FGameplayTag                                ActivateFailNetworkingTag;                                // 0x0078(0x0008)
	struct FName                                       ActivateFailNetworkingName;                               // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     GlobalCurveTableName;                                     // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FString                                     GlobalAttributeMetaDataTableName;                         // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FString                                     GlobalAttributeSetDefaultsTableName;                      // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       GlobalGameplayCueManagerName;                             // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             GameplayCueNotifyPaths;                                   // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       GameplayTagResponseTableName;                             // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_Config)
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                 // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PredictTargetGameplayEffects;                             // 0x00F0(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class UCurveTable*                                 GlobalCurveTable;                                         // 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveTable*                                 GlobalAttributeDefaultsTable;                             // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataTable*                                  GlobalAttributeMetaDataTable;                             // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                 // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilitySystemGlobals")); }
		return ptr;
	}


	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
};


// Class GameplayAbilities.AbilitySystemInterface
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilitySystemInterface")); }
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0020 (0x0510 - 0x04F0)
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04F0(0x0018) MISSED OFFSET
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilitySystemTestPawn")); }
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask
// 0x0010 (0x0068 - 0x0058)
class UAbilityTask : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask")); }
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x0048 (0x00B0 - 0x0068)
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnTargetLocationReached;                                  // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0078(0x0004) MISSED OFFSET
	struct FVector                                     StartLocation;                                            // 0x007C(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0088(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DurationOfMovement;                                       // 0x0094(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	class UCurveFloat*                                 LerpCurve;                                                // 0x00A0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                LerpCurveVector;                                          // 0x00A8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_MoveToLocation")); }
		return ptr;
	}


	class UAbilityTask_MoveToLocation* MoveToLocation(class UObject* WorldContextObject, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};


// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnSync;                                                   // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_NetworkSyncPoint")); }
		return ptr;
	}


	class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UObject* WorldContextObject, TEnumAsByte<EAbilityTaskNetSyncType> SyncType);
	void OnSignalCallback();
};


// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x0058 (0x00C0 - 0x0068)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnComplete;                                               // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelled;                                              // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0098(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_PlayMontageAndWait")); }
		return ptr;
	}


	void OnMontageInterrupted();
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UObject* WorldContextObject, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection);
};


// Class GameplayAbilities.AbilityTask_Repeat
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPerformAction;                                          // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_Repeat")); }
		return ptr;
	}


	class UAbilityTask_Repeat* RepeatAction(class UObject* WorldContextObject, float TimeBetweenActions, int TotalActionCount);
};


// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                  // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_SpawnActor")); }
		return ptr;
	}


	class UAbilityTask_SpawnActor* SpawnActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class);
	void FinishSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0038 (0x00A0 - 0x0068)
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnStateEnded;                                             // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateInterrupted;                                       // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_StartAbilityState")); }
		return ptr;
	}


	class UAbilityTask_StartAbilityState* StartAbilityState(class UObject* WorldContextObject, const struct FName& StateName, bool bEndCurrentState);
};


// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x0028 (0x0090 - 0x0068)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    TimeElapsed;                                              // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_VisualizeTargeting")); }
		return ptr;
	}


	class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration);
	class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UObject* WorldContextObject, class UClass* Class, const struct FName& TaskInstanceName, float Duration);
	void FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnActivate;                                               // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitAbilityActivate")); }
		return ptr;
	}


	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCommit;                                                 // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitAbilityCommit")); }
		return ptr;
	}


	class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0040 (0x00A8 - 0x0068)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitAttributeChange")); }
		return ptr;
	}


	class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UObject* WorldContextObject, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce);
	class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitCancel")); }
		return ptr;
	}


	class UAbilityTask_WaitCancel* WaitCancel(class UObject* WorldContextObject);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};


// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitConfirm")); }
		return ptr;
	}


	class UAbilityTask_WaitConfirm* WaitConfirm(class UObject* WorldContextObject);
	void OnConfirmCallback(class UGameplayAbility* Ability);
};


// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0028 (0x0090 - 0x0068)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitConfirmCancel")); }
		return ptr;
	}


	class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UObject* WorldContextObject);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};


// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitDelay")); }
		return ptr;
	}


	class UAbilityTask_WaitDelay* WaitDelay(class UObject* WorldContextObject, float Time);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x00C0 (0x0128 - 0x0068)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0068(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied")); }
		return ptr;
	}


	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0018 (0x0140 - 0x0128)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self")); }
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0018 (0x0140 - 0x0128)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target")); }
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRemoved;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    InvalidHandle;                                            // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved")); }
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved();
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayTag")); }
		return ptr;
	}


	void GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0010 (0x0098 - 0x0088)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Added;                                                    // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded")); }
		return ptr;
	}


	class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0010 (0x0098 - 0x0088)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Removed;                                                  // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved")); }
		return ptr;
	}


	class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPress;                                                  // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitInputPress")); }
		return ptr;
	}


	class UAbilityTask_WaitInputPress* WaitInputPress(class UObject* WorldContextObject, bool bTestAlreadyPressed);
	void OnPressCallback();
};


// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRelease;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitInputRelease")); }
		return ptr;
	}


	class UAbilityTask_WaitInputRelease* WaitInputRelease(class UObject* WorldContextObject, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};


// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitMovementModeChange")); }
		return ptr;
	}


	void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UObject* WorldContextObject, TEnumAsByte<EMovementMode> NewMode);
};


// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0010 (0x0078 - 0x0068)
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnOverlap;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitOverlap")); }
		return ptr;
	}


	class UAbilityTask_WaitOverlap* WaitForOverlap(class UObject* WorldContextObject);
	void OnOverlapCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnHitCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0040 (0x00A8 - 0x0068)
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    ValidData;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    Cancelled;                                                // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitTargetData")); }
		return ptr;
	}


	class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	class UAbilityTask_WaitTargetData* WaitTargetData(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0028 (0x0090 - 0x0068)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnVelocityChage;                                          // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UMovementComponent*                          CachedMovementComponent;                                  // 0x0078(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilityTask_WaitVelocityChange")); }
		return ptr;
	}


	class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UObject* WorldContextObject, const struct FVector& Direction, float MinimumMagnitude);
};


// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0040 (0x0070 - 0x0030)
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                              MaxHealth;                                                // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mana;                                                     // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxMana;                                                  // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damage;                                                   // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpellDamage;                                              // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PhysicalDamage;                                           // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CritChance;                                               // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CritMultiplier;                                           // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ArmorDamageReduction;                                     // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DodgeChance;                                              // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LifeSteal;                                                // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                                 // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StackingAttribute1;                                       // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StackingAttribute2;                                       // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NoStackAttribute;                                         // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.AbilitySystemTestAttributeSet")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0000 (0x04D0 - 0x04D0)
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbility_CharacterJump")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility_Montage
// 0x0038 (0x0508 - 0x04D0)
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                                MontageToPlay;                                            // 0x04D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x04D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SectionName;                                              // 0x04DC(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                      // 0x04E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                            // 0x04F8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbility_Montage")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0000 (0x0138 - 0x0138)
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbilityBlueprint")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityBlueprintGeneratedClass
// 0x0000 (0x0200 - 0x0200)
class UGameplayAbilityBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbilityBlueprintGeneratedClass")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilitySet
// 0x0010 (0x0038 - 0x0028)
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FGameplayAbilityBindInfo>            Abilities;                                                // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbilitySet")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0020 (0x0488 - 0x0468)
class AGameplayAbilityWorldReticle : public AActor
{
public:
	struct FWorldReticleParameters                     Parameters;                                               // 0x0468(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	unsigned char                                      bFaceOwnerFlat;                                           // 0x0474(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSnapToTargetedActor;                                     // 0x0475(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsTargetValid;                                           // 0x0476(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsTargetAnActor;                                         // 0x0477(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APlayerController*                           MasterPC;                                                 // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      TargetingActor;                                           // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbilityWorldReticle")); }
		return ptr;
	}


	void SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(const struct FName& ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};


// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x0168 (0x05D0 - 0x0468)
class AGameplayAbilityTargetActor : public AActor
{
public:
	unsigned char                                      ShouldProduceTargetDataOnServer;                          // 0x0468(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       StartLocation;                                            // 0x0470(0x0070) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net)
	unsigned char                                      UnknownData01[0x90];                                      // 0x04E0(0x0090) MISSED OFFSET
	class APlayerController*                           MasterPC;                                                 // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGameplayAbility*                            OwningAbility;                                            // 0x0578(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDestroyOnConfirmation;                                   // 0x0580(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	class AActor*                                      SourceActor;                                              // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWorldReticleParameters                     ReticleParams;                                            // 0x0590(0x000C) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData03[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class UClass*                                      ReticleClass;                                             // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             Filter;                                                   // 0x05A8(0x0010) (CPF_BlueprintVisible, CPF_Net)
	unsigned char                                      bDebug;                                                   // 0x05B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x17];                                      // 0x05B9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor")); }
		return ptr;
	}


	void ConfirmTargeting();
	void CancelTargeting();
};


// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0010 (0x05E0 - 0x05D0)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:
	float                                              Radius;                                                   // 0x05D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x05D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_Radius")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x0020 (0x05F0 - 0x05D0)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	float                                              MaxRange;                                                 // 0x05D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCollisionProfileName                       TraceProfile;                                             // 0x05D4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	unsigned char                                      bTraceAffectsAimPitch;                                    // 0x05DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x05DD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_Trace")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0020 (0x0610 - 0x05F0)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0018 (0x04A0 - 0x0488)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x0488(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     VisualizationComponents;                                  // 0x0490(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0010 (0x0620 - 0x0610)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	class UMaterialInterface*                          PlacedActorMaterial;                                      // 0x0610(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0618(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x0000 (0x05F0 - 0x05F0)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x0020 (0x0488 - 0x0468)
class AGameplayCueNotify_Actor : public AActor
{
public:
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0468(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FName                                       GameplayCueName;                                          // 0x0470(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAutoDestroyOnRemove;                                     // 0x0478(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AutoDestroyDelay;                                         // 0x047C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsOverride;                                               // 0x0480(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUniqueInstancePerInstigator;                             // 0x0481(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUniqueInstancePerSourceObject;                           // 0x0482(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0483(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayCueNotify_Actor")); }
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed();
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.GameplayCueManager
// 0x0140 (0x0168 - 0x0028)
class UGameplayCueManager : public UDataAsset
{
public:
	class UGameplayCueSet*                             GlobalCueSet;                                             // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UObjectLibrary*                              GameplayCueNotifyActorObjectLibrary;                      // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UObjectLibrary*                              GameplayCueNotifyStaticObjectLibrary;                     // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FStreamableManager                          StreamableManager;                                        // 0x0040(0x00A8) (CPF_Transient)
	unsigned char                                      UnknownData00[0x60];                                      // 0x00E8(0x0060) MISSED OFFSET
	TArray<struct FGameplayCuePendingExecute>          PendingExecuteCues;                                       // 0x0148(0x0010) (CPF_ZeroConstructor)
	int                                                GameplayCueSendContextCount;                              // 0x0158(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x015C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayCueManager")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0018 (0x0040 - 0x0028)
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0028(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FName                                       GameplayCueName;                                          // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsOverride;                                               // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayCueNotify_Static")); }
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0010 (0x0050 - 0x0040)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayCueNotify_HitImpact")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueSet
// 0x0060 (0x0088 - 0x0028)
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>              GameplayCueData;                                          // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayCueSet")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectTemplate
// 0x0000 (0x0578 - 0x0578)
class UGameplayEffectTemplate : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayEffectTemplate")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	unsigned char                                      bRequiresPassedInTags;                                    // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayEffectExecutionCalculation")); }
		return ptr;
	}


	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};


// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0000 (0x0038 - 0x0038)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayModMagnitudeCalculation")); }
		return ptr;
	}


	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);
};


// Class GameplayAbilities.GameplayEffectExtension
// 0x0020 (0x0048 - 0x0028)
class UGameplayEffectExtension : public UObject
{
public:
	TArray<struct FGameplayAttribute>                  RelevantSourceAttributes;                                 // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FGameplayAttribute>                  RelevantTargetAttributes;                                 // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayEffectExtension")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExtension_LifestealTest
// 0x0008 (0x0050 - 0x0048)
class UGameplayEffectExtension_LifestealTest : public UGameplayEffectExtension
{
public:
	class UGameplayEffect*                             HealthRestoreGameplayEffect;                              // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayEffectExtension_LifestealTest")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExtension_ShieldTest
// 0x0008 (0x0050 - 0x0048)
class UGameplayEffectExtension_ShieldTest : public UGameplayEffectExtension
{
public:
	class UGameplayEffect*                             ShieldRemoveGameplayEffect;                               // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayEffectExtension_ShieldTest")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectUIData
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectUIData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayEffectUIData")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x0028 (0x0050 - 0x0028)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	struct FText                                       Description;                                              // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayEffectUIData_TextOnly")); }
		return ptr;
	}

};


// Class GameplayAbilities.GameplayTagReponseTable
// 0x0060 (0x0088 - 0x0028)
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct FGameplayTagResponseTableEntry>      Entries;                                                  // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.GameplayTagReponseTable")); }
		return ptr;
	}


	void TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int idx);
};


// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000 (0x0028 - 0x0028)
class UTickableAttributeSetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayAbilities.TickableAttributeSetInterface")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
