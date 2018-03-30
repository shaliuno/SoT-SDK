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

// Function AthenaAI.AthenaAIFormComponent.OnRep_FormData
struct UAthenaAIFormComponent_OnRep_FormData_Params
{
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression
struct UAIEncounterServiceInterface_RegisterLoadedSkillsetProgression_Params
{
	TAssetPtr<class UAISkillsetRankProgression>        Progression;                                              // (CPF_Parm) 0000
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset
struct UAIEncounterServiceInterface_RegisterLoadedSkillset_Params
{
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;                                                 // (CPF_Parm) 0000
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout
struct UAIEncounterServiceInterface_RegisterLoadedLoadout_Params
{
	TAssetPtr<class ULoadoutAsset>                     Loadout;                                                  // (CPF_Parm) 0000
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm
struct UAIEncounterServiceInterface_RegisterLoadedForm_Params
{
	TAssetPtr<class UAthenaAIFormDataAsset>            Form;                                                     // (CPF_Parm) 0000
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter
struct UAIEncounterServiceInterface_RegisterLoadedEncounter_Params
{
	TAssetPtr<class UAIEncounterSettings>              Encounter;                                                // (CPF_Parm) 0000
};

// Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression
struct AAIEncounterService_RegisterLoadedSkillsetProgression_Params
{
	TAssetPtr<class UAISkillsetRankProgression>        Progression;                                              // (CPF_Parm) 0000
};

// Function AthenaAI.AIEncounterService.RegisterLoadedSkillset
struct AAIEncounterService_RegisterLoadedSkillset_Params
{
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;                                                 // (CPF_Parm) 0000
};

// Function AthenaAI.AIEncounterService.RegisterLoadedLoadout
struct AAIEncounterService_RegisterLoadedLoadout_Params
{
	TAssetPtr<class ULoadoutAsset>                     Loadout;                                                  // (CPF_Parm) 0000
};

// Function AthenaAI.AIEncounterService.RegisterLoadedForm
struct AAIEncounterService_RegisterLoadedForm_Params
{
	TAssetPtr<class UAthenaAIFormDataAsset>            Form;                                                     // (CPF_Parm) 0000
};

// Function AthenaAI.AIEncounterService.RegisterLoadedEncounter
struct AAIEncounterService_RegisterLoadedEncounter_Params
{
	TAssetPtr<class UAIEncounterSettings>              Encounter;                                                // (CPF_Parm) 0000
};

// Function AthenaAI.AIManagerServiceInterface.StartDespawnAI
struct UAIManagerServiceInterface_StartDespawnAI_Params
{
	class APawn*                                       AIActor;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns
struct UAIManagerServiceInterface_GetNumOfSpawnedPawns_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AISpawner.GetNumOfSpawnRequests
struct UAISpawner_GetNumOfSpawnRequests_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AIManagerService.TickService
struct AAIManagerService_TickService_Params
{
	float                                              DeltaSeconds;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AIManagerService.StartDespawnAI
struct AAIManagerService_StartDespawnAI_Params
{
	class APawn*                                       AIActor;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AIManagerService.GetRegionSpawner
struct AAIManagerService_GetRegionSpawner_Params
{
	struct FName                                       Region;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	int                                                Index;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UAISpawner*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function AthenaAI.AIManagerService.GetNumOfSpawnRequests
struct AAIManagerService_GetNumOfSpawnRequests_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors
struct UDebugAIManagerServiceInterface_SetMaxNumOfSpawnedActors_Params
{
	int                                                InMaxNumOfSpawnedActors;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion
struct UDebugAIManagerServiceInterface_SetMaxAICostUnitsPerRegion_Params
{
	int                                                InMaxAICostUnitsPerRegion;                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld
struct UDebugAIManagerServiceInterface_SetMaxAICostUnitsForWorld_Params
{
	int                                                InMaxAICostUnitsForWorld;                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits
struct UDebugAIManagerServiceInterface_SetIgnoreCharacterLimits_Params
{
	bool                                               Ignore;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer
struct UDebugAIManagerServiceInterface_SetCharacterWorldDensityCheckTimer_Params
{
	float                                              InCharacterWorldDensityCheckTimer;                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer
struct UDebugAIManagerServiceInterface_SetCharacterRegionDensityCheckTimer_Params
{
	float                                              InCharacterRegionDensityCheckTimer;                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy
struct UDebugAIManagerServiceInterface_SetCharacterNetRelevancy_Params
{
	float                                              InCloseByCharactersRadius;                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors
struct ADebugAIManagerService_SetMaxNumOfSpawnedActors_Params
{
	int                                                InMaxNumOfSpawnedActors;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion
struct ADebugAIManagerService_SetMaxAICostUnitsPerRegion_Params
{
	int                                                InMaxAICostUnitsPerRegion;                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld
struct ADebugAIManagerService_SetMaxAICostUnitsForWorld_Params
{
	int                                                InMaxAICostUnitsForWorld;                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits
struct ADebugAIManagerService_SetIgnoreCharacterLimits_Params
{
	bool                                               Ignore;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer
struct ADebugAIManagerService_SetCharacterWorldDensityCheckTimer_Params
{
	float                                              InCharacterWorldDensityCheckTimer;                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer
struct ADebugAIManagerService_SetCharacterRegionDensityCheckTimer_Params
{
	float                                              InCharacterRegionDensityCheckTimer;                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy
struct ADebugAIManagerService_SetCharacterNetRelevancy_Params
{
	float                                              InCloseByCharactersRadius;                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup
struct UAIFaunaSpawner_SpawnFaunaGroup_Params
{
};

// Function AthenaAI.AIPerPlayerSpawner.PlayerDeath
struct UAIPerPlayerSpawner_PlayerDeath_Params
{
	class AActor*                                      Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AIPerPlayerSpawner.GetNumOfPlayers
struct UAIPerPlayerSpawner_GetNumOfPlayers_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget
struct UAITargetWeaponInterface_FindAimConfigToHitTarget_Params
{
	struct FVector                                     Target;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FRotator                                    OutAimConfig;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function AthenaAI.AthenaAIController.StopBehaviourLogic
struct AAthenaAIController_StopBehaviourLogic_Params
{
};

// Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor
struct AAthenaAIController_SetPerceptionExpirationAgeForActor_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ExpirationAge;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      Sense;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function AthenaAI.AthenaAIController.SetNamedControllerParam
struct AAthenaAIController_SetNamedControllerParam_Params
{
	struct FName                                       ParamName;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus
struct AAthenaAIController_RegisterSpawnTriggerActorAsStimulus_Params
{
	class AActor*                                      TriggerActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     TriggerActorLocation;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	struct FVector                                     SpawnPosition;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0014
};

// Function AthenaAI.AthenaAIController.OnPerceptionUpdated
struct AAthenaAIController_OnPerceptionUpdated_Params
{
	TArray<class AActor*>                              ChangedPerceivedActors;                                   // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function AthenaAI.AthenaAIController.OnNewlySpawned
struct AAthenaAIController_OnNewlySpawned_Params
{
};

// Function AthenaAI.AthenaAIController.OnFinishDespawn
struct AAthenaAIController_OnFinishDespawn_Params
{
};

// Function AthenaAI.AthenaAIController.IsActorPerceived
struct AAthenaAIController_IsActorPerceived_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AthenaAI.AthenaAIController.GetTargetActor
struct AAthenaAIController_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent
struct AAthenaAIController_GetAthenaAIPerceptionComponent_Params
{
	class UAthenaAIPerceptionComponent*                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AthenaAIController.GetAllSeenActors
struct AAthenaAIController_GetAllSeenActors_Params
{
	TArray<class AActor*>                              SeenActors;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0000
};

// Function AthenaAI.AthenaAIController.FindNamedWeightedRangesControllerParam
struct AAthenaAIController_FindNamedWeightedRangesControllerParam_Params
{
	struct FName                                       ParamName;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FWeightedProbabilityRangeOfRanges           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function AthenaAI.AthenaAIController.FindNamedControllerParam
struct AAthenaAIController_FindNamedControllerParam_Params
{
	struct FName                                       ParamName;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AthenaAI.AthenaAIController.ApplyControllerParams
struct AAthenaAIController_ApplyControllerParams_Params
{
	class UAthenaAIControllerParamsDataAsset*          ParamsAsset;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       InPawn;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam
struct AAthenaAICharacterController_SetItemSpecificNamedControllerParam_Params
{
	class UClass*                                      InItemCategory;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FName                                       ParamName;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed
struct AAthenaFaunaAIController_LeaderDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AthenaFaunaAIController.GetLeader
struct AAthenaFaunaAIController_GetLeader_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AthenaFaunaAIController.GetCourage
struct AAthenaFaunaAIController_GetCourage_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp
struct AAthenaFaunaAIController_GetAthenaAICharPathFollowingComp_Params
{
	class UAthenaAICharacterPathFollowingComponent*    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AthenaSwimmingAIController.TargetActorDestroyed
struct AAthenaSwimmingAIController_TargetActorDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AthenaSwimmingAIController.SetTargetActor
struct AAthenaSwimmingAIController_SetTargetActor_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings
struct UAthenaAIDebugFunctionLibrary_SpawnAIWithSettings_Params
{
	TAssetPtr<class UClass>                            AIType;                                                   // (CPF_ConstParm, CPF_Parm) 0000
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;                                                 // (CPF_ConstParm, CPF_Parm) 0020
	TAssetPtr<class ULoadoutAsset>                     Loadout;                                                  // (CPF_ConstParm, CPF_Parm) 0040
	TAssetPtr<class UAthenaAIFormDataAsset>            Form;                                                     // (CPF_ConstParm, CPF_Parm) 0060
	class UClass*                                      ClassId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0080
	struct FVector                                     Pos;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0088
	struct FRotator                                    Rot;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0094
	struct FName                                       Region;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 00A0
	class AActor*                                      TriggerActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00A8
	float                                              Delay;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00B0
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIBySpawner
struct UAthenaAIDebugFunctionLibrary_SpawnAIBySpawner_Params
{
	struct FName                                       RegionName;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class AActor*                                      TriggerActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI
struct UAthenaAIDebugFunctionLibrary_SpawnAI_Params
{
	TAssetPtr<class UClass>                            AIClass;                                                  // (CPF_ConstParm, CPF_Parm) 0000
	class UAIEncounterSettings*                        EncounterSettings;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FVector                                     Pos;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0028
	struct FRotator                                    Rot;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0034
	bool                                               RequireNavMesh;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	float                                              Delay;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0044
	bool                                               MakeAIPermanentlyNetRelevant;                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0048
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds
struct UAthenaAIDebugFunctionLibrary_SetEnvQueryManagerMaxAllowedSeconds_Params
{
	float                                              InMaxAllowedSeconds;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     QueryOwner;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries
struct UAthenaAIDebugFunctionLibrary_GetEnvQueryManagerNumRunningQueries_Params
{
	class UObject*                                     QueryOwner;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings
struct UAthenaAIDebugFunctionLibrary_EnableMaximumSightSettings_Params
{
	class AAthenaAIController*                         AIController;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAthenaAIControllerParamsDataAsset*          ControllerParams;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging
struct UAthenaAIDebugFunctionLibrary_EnableBehaviorTreeLogging_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn
struct UAthenaAIDebugFunctionLibrary_DespawnAIPawn_Params
{
	class APawn*                                       Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation
struct UAthenaAIDebugFunctionLibrary_CanProjectPointToNavigation_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     Point;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	class ANavigationData*                             NavData;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class UClass*                                      FilterClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FVector                                     QueryExtent;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0034
};

// Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled
struct UAthenaAIPerceptionComponent_IsAnyPerceptionEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense
struct UAthenaAIPerceptionComponent_EnablePerceptionSense_Params
{
	class UClass*                                      Sense;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Enable;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception
struct UAthenaAIPerceptionComponent_EnableAllPerception_Params
{
	bool                                               Enable;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
