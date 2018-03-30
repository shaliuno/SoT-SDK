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

// Function AIModule.PathFollowingComponent.OnActorBump
struct UPathFollowingComponent_OnActorBump_Params
{
	class AActor*                                      SelfActor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     NormalImpulse;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 001C
};

// Function AIModule.PathFollowingComponent.GetPathDestination
struct UPathFollowingComponent_GetPathDestination_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.PathFollowingComponent.GetPathActionType
struct UPathFollowingComponent_GetPathActionType_Params
{
	TEnumAsByte<EPathFollowingAction>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
struct UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params
{
	struct FAIRequestID                                RequestID;                                                // (CPF_Parm) 0000
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               bUnlockMovement;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               UnlockAILogic;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0009
};

// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
struct UAIBlueprintHelperLibrary_SpawnAIFromClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      PawnClass;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UBehaviorTree*                               BehaviorTree;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	bool                                               bNoCollisionFail;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0038
};

// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
struct UAIBlueprintHelperLibrary_SendAIMessage_Params
{
	class APawn*                                       Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FName                                       Message;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UObject*                                     MessageSource;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bSuccess;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               bLockMovement;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               LockAILogic;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0009
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
struct UAIBlueprintHelperLibrary_IsValidAIRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
struct UAIBlueprintHelperLibrary_IsValidAILocation_Params
{
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
struct UAIBlueprintHelperLibrary_IsValidAIDirection_Params
{
	struct FVector                                     DirectionVector;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
struct UAIBlueprintHelperLibrary_GetBlackboard_Params
{
	class AActor*                                      Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UBlackboardComponent*                        ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0008
};

// Function AIModule.AIBlueprintHelperLibrary.GetAIController
struct UAIBlueprintHelperLibrary_GetAIController_Params
{
	class AActor*                                      ControlledActor;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAIController*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
struct UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     Destination;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              AcceptanceRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	bool                                               bStopOnOverlap;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
	class UAIAsyncTaskBlueprintProxy*                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function AIModule.PawnActionsComponent.K2_PushAction
struct UPawnActionsComponent_K2_PushAction_Params
{
	class UPawnAction*                                 NewAction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EAIRequestPriority>                    Priority;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UObject*                                     Instigator;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function AIModule.PawnActionsComponent.K2_PerformAction
struct UPawnActionsComponent_K2_PerformAction_Params
{
	class APawn*                                       Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPawnAction*                                 Action;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EAIRequestPriority>                    Priority;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0011
};

// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
struct UPawnActionsComponent_K2_ForceAbortAction_Params
{
	class UPawnAction*                                 ActionToAbort;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EPawnActionAbortState>                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.PawnActionsComponent.K2_AbortAction
struct UPawnActionsComponent_K2_AbortAction_Params
{
	class UPawnAction*                                 ActionToAbort;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EPawnActionAbortState>                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.AIController.UseBlackboard
struct AAIController_UseBlackboard_Params
{
	class UBlackboardData*                             BlackboardAsset;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UBlackboardComponent*                        BlackboardComponent;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function AIModule.AIController.SetMoveBlockDetection
struct AAIController_SetMoveBlockDetection_Params
{
	bool                                               bEnable;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIController.RunBehaviorTree
struct AAIController_RunBehaviorTree_Params
{
	class UBehaviorTree*                               BTAsset;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.AIController.OnUsingBlackBoard
struct AAIController_OnUsingBlackBoard_Params
{
	class UBlackboardComponent*                        BlackboardComp;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	class UBlackboardData*                             BlackboardAsset;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.AIController.OnPossess
struct AAIController_OnPossess_Params
{
	class APawn*                                       PossessedPawn;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
struct AAIController_OnGameplayTaskResourcesClaimed_Params
{
	struct FGameplayResourceSet                        NewlyClaimed;                                             // (CPF_Parm) 0000
	struct FGameplayResourceSet                        FreshlyReleased;                                          // (CPF_Parm) 0002
};

// Function AIModule.AIController.MoveToLocation
struct AAIController_MoveToLocation_Params
{
	struct FVector                                     Dest;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              AcceptanceRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	bool                                               bStopOnOverlap;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bUsePathfinding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0011
	bool                                               bProjectDestinationToNavigation;                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0012
	bool                                               bCanStrafe;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0013
	class UClass*                                      FilterClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               bAllowPartialPath;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0021
};

// Function AIModule.AIController.MoveToActor
struct AAIController_MoveToActor_Params
{
	class AActor*                                      Goal;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              AcceptanceRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               bStopOnOverlap;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	bool                                               bUsePathfinding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000D
	bool                                               bCanStrafe;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000E
	class UClass*                                      FilterClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bAllowPartialPath;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0019
};

// Function AIModule.AIController.K2_SetFocus
struct AAIController_K2_SetFocus_Params
{
	class AActor*                                      NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIController.K2_SetFocalPoint
struct AAIController_K2_SetFocalPoint_Params
{
	struct FVector                                     FP;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIController.K2_ClearFocus
struct AAIController_K2_ClearFocus_Params
{
};

// Function AIModule.AIController.HasPartialPath
struct AAIController_HasPartialPath_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIController.GetPathFollowingComponent
struct AAIController_GetPathFollowingComponent_Params
{
	class UPathFollowingComponent*                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIController.GetMoveStatus
struct AAIController_GetMoveStatus_Params
{
	TEnumAsByte<EPathFollowingStatus>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIController.GetImmediateMoveDestination
struct AAIController_GetImmediateMoveDestination_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIController.GetFocusActor
struct AAIController_GetFocusActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIController.GetFocalPointOnActor
struct AAIController_GetFocalPointOnActor_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.AIController.GetFocalPoint
struct AAIController_GetFocalPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIController.GetAIPerceptionComponent
struct AAIController_GetAIPerceptionComponent_Params
{
	class UAIPerceptionComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function AIModule.AISystem.AILoggingVerbose
struct UAISystem_AILoggingVerbose_Params
{
};

// Function AIModule.AISystem.AIIgnorePlayers
struct UAISystem_AIIgnorePlayers_Params
{
};

// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
struct UAIPerceptionSystem_ReportPerceptionEvent_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAISenseEvent*                               PerceptionEvent;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.AIPerceptionSystem.ReportEvent
struct UAIPerceptionSystem_ReportEvent_Params
{
	class UAISenseEvent*                               PerceptionEvent;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
struct UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      Sense;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
struct UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
struct UAIPerceptionSystem_GetSenseClassForStimulus_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FAIStimulus                                 Stimulus;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0048
};

// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
struct UAIPerceptionComponent_RequestStimuliListenerUpdate_Params
{
};

// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
struct UAIPerceptionComponent_OnOwnerEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIPerceptionComponent.IsIgnored
struct UAIPerceptionComponent_IsIgnored_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
struct UAIPerceptionComponent_GetPerceivedHostileActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0000
};

// Function AIModule.AIPerceptionComponent.GetPerceivedActors
struct UAIPerceptionComponent_GetPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0008
};

// Function AIModule.AIPerceptionComponent.GetActorsPerception
struct UAIPerceptionComponent_GetActorsPerception_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FActorPerceptionBlueprintInfo               Info;                                                     // (CPF_Parm, CPF_OutParm) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0028
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
struct UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params
{
	class UClass*                                      SenseClass;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
struct UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
struct UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
struct UAIPerceptionStimuliSourceComponent_RegisterForSense_Params
{
	class UClass*                                      SenseClass;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.AISense_Blueprint.OnUpdate
struct UAISense_Blueprint_OnUpdate_Params
{
	TArray<class UAISenseEvent*>                       EventsToProcess;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function AIModule.AISense_Blueprint.OnListenerUpdated
struct UAISense_Blueprint_OnListenerUpdated_Params
{
	class AActor*                                      ActorListener;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
};

// Function AIModule.AISense_Blueprint.OnListenerUnregistered
struct UAISense_Blueprint_OnListenerUnregistered_Params
{
	class AActor*                                      ActorListener;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
};

// Function AIModule.AISense_Blueprint.OnListenerRegistered
struct UAISense_Blueprint_OnListenerRegistered_Params
{
	class AActor*                                      ActorListener;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
};

// Function AIModule.AISense_Blueprint.K2_OnNewPawn
struct UAISense_Blueprint_K2_OnNewPawn_Params
{
	class APawn*                                       NewPawn;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.AISense_Blueprint.GetAllListenerComponents
struct UAISense_Blueprint_GetAllListenerComponents_Params
{
	TArray<class UAIPerceptionComponent*>              ListenerComponents;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0000
};

// Function AIModule.AISense_Blueprint.GetAllListenerActors
struct UAISense_Blueprint_GetAllListenerActors_Params
{
	TArray<class AActor*>                              ListenerActors;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0000
};

// Function AIModule.AISense_Damage.ReportDamageEvent
struct UAISense_Damage_ReportDamageEvent_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      DamagedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Instigator;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              DamageAmount;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FVector                                     EventLocation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function AIModule.AISense_Hearing.ReportNoiseEvent
struct UAISense_Hearing_ReportNoiseEvent_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     NoiseLocation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              Loudness;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	class AActor*                                      Instigator;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              MaxRange;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
};

// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
struct UAISense_Prediction_RequestPawnPredictionEvent_Params
{
	class APawn*                                       Requestor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      PredictedActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              PredictionTime;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
struct UAISense_Prediction_RequestControllerPredictionEvent_Params
{
	class AAIController*                               Requestor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      PredictedActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              PredictionTime;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function AIModule.AITask_MoveTo.AIMoveTo
struct UAITask_MoveTo_AIMoveTo_Params
{
	class AAIController*                               Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     GoalLocation;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      GoalActor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              AcceptanceRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	TEnumAsByte<EAIOptionFlag>                         StopOnOverlap;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	TEnumAsByte<EAIOptionFlag>                         AcceptPartialPath;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0025
	bool                                               bUsePathfinding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0026
	bool                                               bLockAILogic;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0027
	class UAITask_MoveTo*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0028
};

// Function AIModule.BrainComponent.StopLogic
struct UBrainComponent_StopLogic_Params
{
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function AIModule.BrainComponent.RestartLogic
struct UBrainComponent_RestartLogic_Params
{
};

// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
struct UBehaviorTreeComponent_SetDynamicSubtree_Params
{
	struct FGameplayTag                                InjectTag;                                                // (CPF_Parm) 0000
	class UBehaviorTree*                               BehaviorAsset;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
struct UBehaviorTreeComponent_GetTagCooldownEndTime_Params
{
	struct FGameplayTag                                CooldownTag;                                              // (CPF_Parm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
struct UBehaviorTreeComponent_AddCooldownTagDuration_Params
{
	struct FGameplayTag                                CooldownTag;                                              // (CPF_Parm) 0000
	float                                              CooldownDuration;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               bAddToExistingDuration;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function AIModule.BlackboardComponent.SetValueAsVector
struct UBlackboardComponent_SetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     VectorValue;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.SetValueAsString
struct UBlackboardComponent_SetValueAsString_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FString                                     StringValue;                                              // (CPF_Parm, CPF_ZeroConstructor) 0008
};

// Function AIModule.BlackboardComponent.SetValueAsRotator
struct UBlackboardComponent_SetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FRotator                                    VectorValue;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.SetValueAsObject
struct UBlackboardComponent_SetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class UObject*                                     ObjectValue;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.SetValueAsName
struct UBlackboardComponent_SetValueAsName_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FName                                       NameValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.SetValueAsInt
struct UBlackboardComponent_SetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	int                                                IntValue;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.SetValueAsFloat
struct UBlackboardComponent_SetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              FloatValue;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.SetValueAsEnum
struct UBlackboardComponent_SetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	unsigned char                                      EnumValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.SetValueAsClass
struct UBlackboardComponent_SetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class UClass*                                      ClassValue;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.SetValueAsBool
struct UBlackboardComponent_SetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               BoolValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.IsVectorValueSet
struct UBlackboardComponent_IsVectorValueSet_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.GetValueAsVector
struct UBlackboardComponent_GetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.GetValueAsString
struct UBlackboardComponent_GetValueAsString_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function AIModule.BlackboardComponent.GetValueAsRotator
struct UBlackboardComponent_GetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.GetValueAsObject
struct UBlackboardComponent_GetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.GetValueAsName
struct UBlackboardComponent_GetValueAsName_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.GetValueAsInt
struct UBlackboardComponent_GetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.GetValueAsFloat
struct UBlackboardComponent_GetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.GetValueAsEnum
struct UBlackboardComponent_GetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.GetValueAsClass
struct UBlackboardComponent_GetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.GetValueAsBool
struct UBlackboardComponent_GetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BlackboardComponent.GetRotationFromEntry
struct UBlackboardComponent_GetRotationFromEntry_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FRotator                                    ResultRotation;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function AIModule.BlackboardComponent.GetLocationFromEntry
struct UBlackboardComponent_GetLocationFromEntry_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     ResultLocation;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function AIModule.BlackboardComponent.ClearValueAsVector
struct UBlackboardComponent_ClearValueAsVector_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.BlackboardComponent.ClearValueAsRotator
struct UBlackboardComponent_ClearValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.BlackboardComponent.ClearValue
struct UBlackboardComponent_ClearValue_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
struct UBTFunctionLibrary_StopUsingExternalEvent_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
struct UBTFunctionLibrary_StartUsingExternalEvent_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      OwningActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
struct UBTFunctionLibrary_SetBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FVector                                     Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
struct UBTFunctionLibrary_SetBlackboardValueAsString_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_ZeroConstructor) 0030
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
struct UBTFunctionLibrary_SetBlackboardValueAsRotator_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FRotator                                    Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
struct UBTFunctionLibrary_SetBlackboardValueAsObject_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	class UObject*                                     Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
struct UBTFunctionLibrary_SetBlackboardValueAsName_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FName                                       Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
struct UBTFunctionLibrary_SetBlackboardValueAsInt_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	int                                                Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
struct UBTFunctionLibrary_SetBlackboardValueAsFloat_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
struct UBTFunctionLibrary_SetBlackboardValueAsEnum_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	unsigned char                                      Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
struct UBTFunctionLibrary_SetBlackboardValueAsClass_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	class UClass*                                      Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
struct UBTFunctionLibrary_SetBlackboardValueAsBool_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	bool                                               Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
struct UBTFunctionLibrary_GetOwnersBlackboard_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UBlackboardComponent*                        ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTFunctionLibrary.GetOwnerComponent
struct UBTFunctionLibrary_GetOwnerComponent_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UBehaviorTreeComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
struct UBTFunctionLibrary_GetBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
struct UBTFunctionLibrary_GetBlackboardValueAsString_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0030
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
struct UBTFunctionLibrary_GetBlackboardValueAsRotator_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
struct UBTFunctionLibrary_GetBlackboardValueAsObject_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
struct UBTFunctionLibrary_GetBlackboardValueAsName_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
struct UBTFunctionLibrary_GetBlackboardValueAsInt_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
struct UBTFunctionLibrary_GetBlackboardValueAsFloat_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
struct UBTFunctionLibrary_GetBlackboardValueAsEnum_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
struct UBTFunctionLibrary_GetBlackboardValueAsClass_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
struct UBTFunctionLibrary_GetBlackboardValueAsBool_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
struct UBTFunctionLibrary_GetBlackboardValueAsActor_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
struct UBTFunctionLibrary_ClearBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
struct UBTFunctionLibrary_ClearBlackboardValue_Params
{
	class UBTNode*                                     NodeOwner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlackboardKeySelector                      Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
struct UBTDecorator_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
struct UBTDecorator_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
struct UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
struct UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EBTNodeResult>                         NodeResult;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EBTNodeResult>                         NodeResult;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck
struct UBTDecorator_BlueprintBase_ReceiveConditionCheck_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
struct UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
struct UBTDecorator_BlueprintBase_PerformConditionCheck_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
struct UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
struct UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck
struct UBTDecorator_BlueprintBase_FinishConditionCheck_Params
{
	bool                                               bAllowExecution;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
struct UBTService_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function AIModule.BTService_BlueprintBase.ReceiveTick
struct UBTService_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
struct UBTService_BlueprintBase_ReceiveSearchStartAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
struct UBTService_BlueprintBase_ReceiveSearchStart_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
struct UBTService_BlueprintBase_ReceiveDeactivationAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
struct UBTService_BlueprintBase_ReceiveDeactivation_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
struct UBTService_BlueprintBase_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivation
struct UBTService_BlueprintBase_ReceiveActivation_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTService_BlueprintBase.IsServiceActive
struct UBTService_BlueprintBase_IsServiceActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
struct UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params
{
	struct FName                                       MessageName;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                RequestID;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
struct UBTTask_BlueprintBase_SetFinishOnMessage_Params
{
	struct FName                                       MessageName;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
struct UBTTask_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTick
struct UBTTask_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
struct UBTTask_BlueprintBase_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
struct UBTTask_BlueprintBase_ReceiveExecute_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
struct UBTTask_BlueprintBase_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
struct UBTTask_BlueprintBase_ReceiveAbort_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
struct UBTTask_BlueprintBase_IsTaskExecuting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
struct UBTTask_BlueprintBase_IsTaskAborting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTTask_BlueprintBase.FinishExecute
struct UBTTask_BlueprintBase_FinishExecute_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.BTTask_BlueprintBase.FinishAbort
struct UBTTask_BlueprintBase_FinishAbort_Params
{
};

// Function AIModule.PawnAction.GetActionPriority
struct UPawnAction_GetActionPriority_Params
{
	TEnumAsByte<EAIRequestPriority>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.PawnAction.Finish
struct UPawnAction_Finish_Params
{
	TEnumAsByte<EPawnActionResult>                     WithResult;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.PawnAction.CreateActionInstance
struct UPawnAction_CreateActionInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ActionClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UPawnAction*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
struct UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params
{
	class AActor*                                      QuerierActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     ResultingLocation;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
struct UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params
{
	class AActor*                                      QuerierActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      ResultingActor;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
struct UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params
{
	class AActor*                                      QuerierActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FVector>                             ResultingLocationSet;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0008
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
struct UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params
{
	class AActor*                                      QuerierActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class AActor*>                              ResultingActorsSet;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0008
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
struct UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params
{
	int                                                ItemIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
struct UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.EnvQueryManager.RunEQSQuery
struct UEnvQueryManager_RunEQSQuery_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UEnvQuery*                                   QueryTemplate;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UObject*                                     Querier;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class UClass*                                      WrapperClass;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	class UEnvQueryInstanceBlueprintWrapper*           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0028
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
struct UEnvQueryGenerator_BlueprintBase_GetQuerier_Params
{
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
struct UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params
{
	TArray<struct FVector>                             ContextLocations;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params
{
	struct FVector                                     GeneratedVector;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params
{
	class AActor*                                      GeneratedActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
struct UCrowdFollowingComponent_SuspendCrowdSteering_Params
{
	bool                                               bSuspend;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.PawnAction_BlueprintBase.ActionTick
struct UPawnAction_BlueprintBase_ActionTick_Params
{
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.PawnAction_BlueprintBase.ActionStart
struct UPawnAction_BlueprintBase_ActionStart_Params
{
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.PawnAction_BlueprintBase.ActionResume
struct UPawnAction_BlueprintBase_ActionResume_Params
{
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.PawnAction_BlueprintBase.ActionPause
struct UPawnAction_BlueprintBase_ActionPause_Params
{
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.PawnAction_BlueprintBase.ActionFinished
struct UPawnAction_BlueprintBase_ActionFinished_Params
{
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EPawnActionResult>                     WithResult;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
struct UPawnSensingComponent_SetSensingUpdatesEnabled_Params
{
	bool                                               bEnabled;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.PawnSensingComponent.SetSensingInterval
struct UPawnSensingComponent_SetSensingInterval_Params
{
	float                                              NewSensingInterval;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
struct UPawnSensingComponent_SetPeripheralVisionAngle_Params
{
	float                                              NewPeripheralVisionAngle;                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
struct UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params
{
	class APawn*                                       Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
struct UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params
{
	class APawn*                                       Instigator;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     Location;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	float                                              Volume;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
struct UPawnSensingComponent_GetPeripheralVisionCosine_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
struct UPawnSensingComponent_GetPeripheralVisionAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
