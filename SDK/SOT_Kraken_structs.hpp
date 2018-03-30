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

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationStateParams
// 0x0010
struct FKrakenShipWrappingTentacleAnimationStateParams
{
	unsigned char                                      Visible;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	int                                                StartFrame;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                EndFrame;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationPhaseCollection
// 0x0080
struct FKrakenShipWrappingTentacleAnimationPhaseCollection
{
	struct FKrakenShipWrappingTentacleAnimationStateParams Dormant;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams Wrapping;                                                 // 0x0010(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams AmbientWobble;                                            // 0x0020(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams EnteringShakeAttack;                                      // 0x0030(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams ShakeAttack;                                              // 0x0040(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams ExitingShakeAttack;                                       // 0x0050(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams HeavyAttack;                                              // 0x0060(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams Unwrapping;                                               // 0x0070(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleParams
// 0x0094
struct FKrakenShipWrappingTentacleParams
{
	struct FKrakenShipWrappingTentacleAnimationPhaseCollection AnimationStates;                                          // 0x0000(0x0080) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              TimeIntoWrappingToDisableInteractables;                   // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeIntoUnwrappingToEnableInteractables;                  // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeIntoWrappingToEnableCollisions;                       // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeIntoUnwrappingToDisableCollisions;                    // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HighDetailAnimationStreamingDistance;                     // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationState
// 0x0010
struct FKrakenShipWrappingTentacleAnimationState
{
	uint32_t                                           EpochId;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TEnumAsByte<EKrakenShipWrappingTentacleState>      State;                                                    // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	double                                             EndTime;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenTentaclesChanceParams
// 0x0028
struct FKrakenTentaclesChanceParams
{
	int                                                NumberOfTentaclesSpawned;                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRange                   ProbabilityRange;                                         // 0x0008(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenTentacleParams
// 0x0048
struct FKrakenTentacleParams
{
	struct FWeightedProbabilityRangeOfRanges           TentacleHealth;                                           // 0x0000(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FFloatRange                                 InactiveToActiveTentacleTimeout;                          // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ChanceOfInactiveToActiveTentacle;                         // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ChanceOfInactiveToActiveTentacleOnDeathOrFlee;            // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourParamsCollection
// 0x0010
struct FKrakenShipWrappingBehaviourParamsCollection
{
	TArray<class UKrakenShipWrappingBehaviourParamsDataAsset*> Params;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenBehaviourParams
// 0x0058
struct FKrakenBehaviourParams
{
	TEnumAsByte<EKrakenBehaviourType>                  Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	uint32_t                                           MaxInstancesOfBehaviourAllowed;                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           TargetTimeout;                                            // 0x0008(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	class UKrakenIdleBehaviourParamsDataAsset*         IdleParams;                                               // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FKrakenShipWrappingBehaviourParamsCollection ShipWrappingParams;                                       // 0x0040(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	class UKrakenPlayerGrabbingBehaviourParamsDataAsset* PlayerGrabbingParams;                                     // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenParams
// 0x0150
struct FKrakenParams
{
	class UClass*                                      KrakenType;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      MurkClass;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UGeneratedLocationsDataAsset*                PotentialTentacleSpawnLocations;                          // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FWeightedProbabilityRange                   NumberOfTentaclesToSpawn;                                 // 0x0018(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FKrakenTentaclesChanceParams>        TentaclesRequiredToDismissKraken;                         // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              TickFrequencyToLookForNewBehaviours;                      // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OperatingAreaRadius;                                      // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumOperatingAreaMovementDeltaToInvalidateLocations;   // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RadiusToleranceBeforeOperatingAreaDespawn;                // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FKrakenTentaclesChanceParams>        NumTentacleInstancesToAssignToShip;                       // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              GlobalPlayRateScale;                                      // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFloatRange                                 NewTargetTimeout;                                         // 0x006C(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFloatRange                                 UnavailableTargetTimeout;                                 // 0x007C(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FKrakenTentacleParams                       TentacleParams;                                           // 0x0090(0x0048) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DismissTimeoutWhenNoTargets;                              // 0x00D8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DismissTimeoutWithNewTarget;                              // 0x0108(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FKrakenBehaviourParams>              Behaviours;                                               // 0x0138(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              DamageAmountToTriggerAudioComponentNotification;          // 0x0148(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneFrame
// 0x000C
struct FKrakenAnimatedTentacleAnimationBoneFrame
{
	struct FVector                                     BoneLocation;                                             // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneTrack
// 0x0010
struct FKrakenAnimatedTentacleAnimationBoneTrack
{
	TArray<struct FKrakenAnimatedTentacleAnimationBoneFrame> Frames;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleMappedAnimation
// 0x0010
struct FKrakenAnimatedTentacleMappedAnimation
{
	class UAnimSequence*                               ClientAnimation;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UKrakenAnimatedTentacleAnimationDataAsset*   AnimationAsset;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationSpecBone
// 0x0008
struct FKrakenAnimatedTentacleAnimationSpecBone
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleTransitionAnimation
// 0x0020
struct FKrakenAnimatedTentacleTransitionAnimation
{
	class UClass*                                      FromState;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BranchAnimationTimeRemaining;                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UAnimSequence*>                       TransitionAnimations;                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleStateAnimationMapping
// 0x0028
struct FKrakenAnimatedTentacleStateAnimationMapping
{
	class UClass*                                      State;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               Animation;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Loop;                                                     // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FKrakenAnimatedTentacleTransitionAnimation> Transitions;                                              // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Kraken.KrakenTentacleBehaviourActionChances
// 0x0008
struct FKrakenTentacleBehaviourActionChances
{
	TEnumAsByte<EKrakenTentacleBehaviourDamageActions> ActionToTransitionTo;                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeightedChance;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenTentacleBehaviourParams
// 0x0088
struct FKrakenTentacleBehaviourParams
{
	class UEnvQuery*                                   InactiveSpawnQueryTemplate;                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ChanceOfCannonSideSpawn;                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UEnvQuery*                                   ActiveCannonSideSpawnQueryTemplate;                       // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UEnvQuery*                                   ActiveNonCannonSideSpawnQueryTemplate;                    // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      TentacleClass;                                            // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinScale;                                                 // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxScale;                                                 // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinPlayRateScale;                                         // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxPlayRateScale;                                         // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PanicDespawnShipRangeRadius;                              // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PanicDespawnTentacleRadius;                               // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PanicDespawnAnimationPlayRateScale;                       // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PreDeathAnimationPlayRateScale;                           // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FKrakenTentacleBehaviourActionChances> OnDamageActionChances;                                    // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeToSpendInActiveState;                                 // 0x0058(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenIdleBehaviourParams
// 0x0000 (0x0088 - 0x0088)
struct FKrakenIdleBehaviourParams : public FKrakenTentacleBehaviourParams
{

};

// ScriptStruct Kraken.KrakenPlayerGrabbingHoldingStateTransitionChance
// 0x0010
struct FKrakenPlayerGrabbingHoldingStateTransitionChance
{
	float                                              WeightedChance;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      StateToTransitionTo;                                      // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenPlayerGrabbingBehaviourParams
// 0x0018 (0x00A0 - 0x0088)
struct FKrakenPlayerGrabbingBehaviourParams : public FKrakenTentacleBehaviourParams
{
	float                                              MinUnsuccessfulTargetTimeout;                             // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxUnsuccessfulTargetTimeout;                             // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FKrakenPlayerGrabbingHoldingStateTransitionChance> HoldingTransitionChances;                                 // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenServiceSpawnParams
// 0x0080
struct FKrakenServiceSpawnParams
{
	float                                              SpawnLocationDistributionRadius;                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpawnLocationDistributionMinDistanceBetweenPoints;        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpawnDistanceInFrontOfShip;                               // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSpawnAttemptsRange;                            // 0x0010(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSpawnAttemptsPostSpawnFailure;                 // 0x0040(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              SpawnChance;                                              // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxConsecutiveFailedSpawnAttempts;                        // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UEnvQuery*                                   SpawnLocationQuery;                                       // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenServiceParams
// 0x0090
struct FKrakenServiceParams
{
	int                                                MaxNumberOfKrakenInstances;                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FKrakenServiceSpawnParams                   SpawnParams;                                              // 0x0008(0x0080) (CPF_Edit, CPF_DisableEditOnInstance)
	class UKrakenParamsDataAsset*                      KrakenParams;                                             // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourNamedTransform
// 0x0040
struct FKrakenShipWrappingBehaviourNamedTransform
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWarningParams
// 0x00A0
struct FKrakenShipWrappingBehaviourWarningParams
{
	class UClass*                                      TentacleType;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TickDuration;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	struct FFloatRange                                 TentacleTimeoutRange;                                     // 0x000C(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TentacleHealthRange;                                      // 0x0020(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> TentacleLocations;                                        // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              TentacleTimeout;                                          // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              TentacleHealth;                                           // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	struct FTransform                                  TentacleLocation;                                         // 0x0070(0x0030) (CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnchorDynamicsParams
// 0x0000 (0x0028 - 0x0028)
struct FKrakenAnchorDynamicsParams : public FStandardAnchorDynamicsParameters
{

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadLocations
// 0x0020
struct FKrakenShipWrappingBehaviourTentacleHeadLocations
{
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> Near;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> Far;                                                      // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenDynamicsStateEvent
// 0x000C
struct FKrakenDynamicsStateEvent
{
	TEnumAsByte<EKrakenDynamicsStateEvent>             Event;                                                    // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Time;                                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenDynamicsStateFragmentParams
// 0x0020
struct FKrakenDynamicsStateFragmentParams
{
	class UCurveVector*                                TorqueCurve;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BaselineTorque;                                           // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FKrakenDynamicsStateEvent>           Events;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenDynamicsStateParams
// 0x0010
struct FKrakenDynamicsStateParams
{
	TArray<struct FKrakenDynamicsStateFragmentParams>  FragmentParams;                                           // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenDynamicsParams
// 0x0050
struct FKrakenDynamicsParams
{
	struct FKrakenDynamicsStateParams                  AmbientWobble;                                            // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  EnteringShakeAttack;                                      // 0x0010(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  ShakeAttack;                                              // 0x0020(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  ExitingShakeAttack;                                       // 0x0030(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  HeavyAttack;                                              // 0x0040(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationParams
// 0x00E0
struct FKrakenShipWrappingBehaviourWrapLocationParams
{
	class UClass*                                      TentacleType;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     WrapLocationAnchorPoint;                                  // 0x0008(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FTransform                                  TentacleHeadHoldShipLocation;                             // 0x0020(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FKrakenShipWrappingBehaviourTentacleHeadLocations PortTentacleHeadLocations;                                // 0x0050(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourTentacleHeadLocations StarboardTentacleHeadLocations;                           // 0x0070(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenDynamicsParams                       DynamicsParams;                                           // 0x0090(0x0050) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationWeightedParams
// 0x00F0
struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FKrakenShipWrappingBehaviourWrapLocationParams Params;                                                   // 0x0010(0x00E0) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapParams
// 0x0140
struct FKrakenShipWrappingBehaviourWrapParams
{
	struct FFloatRange                                 WrapTimeBeforeGivingUpRange;                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ShipInternalWaterLevelToTriggerUnwrap;                    // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FKrakenAnchorDynamicsParams                 AnchorDynamicsParams;                                     // 0x0018(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams> WrapLocations;                                            // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              WrapTimeBeforeGivingUp;                                   // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FKrakenShipWrappingBehaviourWrapLocationParams WrapLocation;                                             // 0x0060(0x00E0) (CPF_Transient)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadParams
// 0x0048
struct FKrakenShipWrappingBehaviourTentacleHeadParams
{
	class UClass*                                      TentacleType;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           DamageRequiredToRelocate;                                 // 0x0008(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              RelocationThreshold;                                      // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ChanceOfSwitchingSides;                                   // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ChanceOfSelectingNearLocationAfterSwitchingSides;         // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ChanceOfSelectingSelectingDifferentDistanceFromShipWhenRemaningOnSameSide;// 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourShakeAttackParams
// 0x0068
struct FKrakenShipWrappingBehaviourShakeAttackParams
{
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenShakeAttackAttempts;                           // 0x0000(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           AttackDuration;                                           // 0x0030(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	uint32_t                                           MaxFailedShakeAttackAttempts;                             // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ChanceOfShake;                                            // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHeavyAttackParams
// 0x00A0
struct FKrakenShipWrappingBehaviourHeavyAttackParams
{
	struct FWeightedProbabilityRangeOfRanges           AttackDuration;                                           // 0x0000(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              ChanceOfEnteringHeavyAttack;                              // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FKnockBackInfo                              ExteriorKnockbackParams;                                  // 0x0034(0x0034) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKnockBackInfo                              InteriorKnockbackParams;                                  // 0x0068(0x0034) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourDamageParams
// 0x0018
struct FKrakenShipWrappingBehaviourDamageParams
{
	float                                              ChanceOfDamagingBottomDeckDamageHoles;                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ChanceThatExistingHolesWillBeDamaged;                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFloatRange                                 DamageIntervalRange;                                      // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHealthParams
// 0x0038
struct FKrakenShipWrappingBehaviourHealthParams
{
	struct FWeightedProbabilityRangeOfRanges           HealthReductionRequiredToUnwrapTheShipRange;              // 0x0000(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourParams
// 0x0390
struct FKrakenShipWrappingBehaviourParams
{
	class UClass*                                      ShipSize;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FKrakenShipWrappingBehaviourWarningParams   WarningParams;                                            // 0x0010(0x00A0) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourWrapParams      WrapParams;                                               // 0x00B0(0x0140) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourTentacleHeadParams TentacleHeadParams;                                       // 0x01F0(0x0048) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourShakeAttackParams ShakeAttackParams;                                        // 0x0238(0x0068) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourHeavyAttackParams HeavyAttackParams;                                        // 0x02A0(0x00A0) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourDamageParams    DamageParams;                                             // 0x0340(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourHealthParams    HealthParams;                                             // 0x0358(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenWorldSettingsParams
// 0x0001
struct FKrakenWorldSettingsParams
{
	unsigned char                                      KrakenEnabled;                                            // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenTentacleDestroyed
// 0x0008
struct FEventKrakenTentacleDestroyed
{
	class AActor*                                      KillingBlowInstigator;                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenDespawned
// 0x0001
struct FEventKrakenDespawned
{
	TEnumAsByte<EKrakenDespawnReason>                  DespawnReason;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenSpawned
// 0x0008
struct FEventKrakenSpawned
{
	class AShip*                                       PrimaryShipTarget;                                        // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenTentaclePreUninitializeComponents
// 0x0001
struct FEventKrakenTentaclePreUninitializeComponents
{

};

// ScriptStruct Kraken.KrakenTentacleDestroyedTelemetryEvent
// 0x0010
struct FKrakenTentacleDestroyedTelemetryEvent
{
	struct FString                                     KrakenId;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct Kraken.KrakenDespawnTelemetryEvent
// 0x0018
struct FKrakenDespawnTelemetryEvent
{
	struct FString                                     KrakenId;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TEnumAsByte<EKrakenDespawnReason>                  KrakenDespawnReason;                                      // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenSpawnTelemetryEvent
// 0x0010
struct FKrakenSpawnTelemetryEvent
{
	struct FString                                     KrakenId;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
