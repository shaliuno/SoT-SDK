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

// Function Athena.ControllableObject.TakenControlImpl
struct AControllableObject_TakenControlImpl_Params
{
	class AActor*                                      Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllableObject.SetCanInteract
struct AControllableObject_SetCanInteract_Params
{
	bool                                               InCanInteract;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllableObject.RelinquishedControlImpl
struct AControllableObject_RelinquishedControlImpl_Params
{
	class AActor*                                      Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllableObject.GetControllingActor
struct AControllableObject_GetControllingActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllableObject.CanInteractImpl
struct AControllableObject_CanInteractImpl_Params
{
	class AActor*                                      InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.SailManipulator.SetRopeDeltaOffset
struct ASailManipulator_SetRopeDeltaOffset_Params
{
	float                                              InRopeDeltaOffset;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SailManipulator.SetMastSocketId
struct ASailManipulator_SetMastSocketId_Params
{
	struct FSocketId                                   InMastSocketId;                                           // (CPF_Parm) 0000
};

// Function Athena.SailManipulator.SetMast
struct ASailManipulator_SetMast_Params
{
	class AMast*                                       InMast;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SailManipulator.RotateTowardsLocation
struct ASailManipulator_RotateTowardsLocation_Params
{
	struct FVector                                     TargetLocation;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailManipulator.OnRep_PendingBoundMast
struct ASailManipulator_OnRep_PendingBoundMast_Params
{
};

// Function Athena.SailManipulator.HandleBoundMastEndPlay
struct ASailManipulator_HandleBoundMastEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SailManipulator.HandleBoundMastDestroyed
struct ASailManipulator_HandleBoundMastDestroyed_Params
{
};

// Function Athena.SailManipulator.GetRopeUVOffset
struct ASailManipulator_GetRopeUVOffset_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailManipulator.GetMast
struct ASailManipulator_GetMast_Params
{
	class AMast*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Mast.UpdateSailsLoweredBasedOnIntent
struct AMast_UpdateSailsLoweredBasedOnIntent_Params
{
	float                                              LoweredIntent;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Mast.UpdateSailsBasedOnIntent
struct AMast_UpdateSailsBasedOnIntent_Params
{
	float                                              AngleIntent;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              LoweredIntent;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.Mast.UpdateSailsAngleBasedOnIntent
struct AMast_UpdateSailsAngleBasedOnIntent_Params
{
	float                                              AngleIntent;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Mast.OnMastDescLoaded
struct AMast_OnMastDescLoaded_Params
{
	class UMastDescAsset*                              MastDesc;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Mast.OnLoweredProportionChange
struct AMast_OnLoweredProportionChange_Params
{
	float                                              LoweredProportion;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.Mast.OnAngleChanged
struct AMast_OnAngleChanged_Params
{
	float                                              Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.Mast.GetSailTurnRate
struct AMast_GetSailTurnRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Mast.GetSails
struct AMast_GetSails_Params
{
	TArray<class ASail*>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.Mast.GetSailMovementRate
struct AMast_GetSailMovementRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Mast.GetSailLoweredProportion
struct AMast_GetSailLoweredProportion_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Mast.GetSailAngleRatio
struct AMast_GetSailAngleRatio_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Mast.GetMastAngleBoneTransform
struct AMast_GetMastAngleBoneTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Mast.GetLookAtPos
struct AMast_GetLookAtPos_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Mast.FinaliseSails
struct AMast_FinaliseSails_Params
{
	TArray<class ASail*>                               InSails;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.ActionRulesBlueprintFunctionLibrary.AddOneShotUseActionRule
struct UActionRulesBlueprintFunctionLibrary_AddOneShotUseActionRule_Params
{
	class UClass*                                      StartInput;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.ActionRulesBlueprintFunctionLibrary.AddHoldToUseActionRule
struct UActionRulesBlueprintFunctionLibrary_AddHoldToUseActionRule_Params
{
	class UClass*                                      StartInput;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      EndInput;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.ActorCoherentViewComponent.ReadyForBindingsEventReceived
struct UActorCoherentViewComponent_ReadyForBindingsEventReceived_Params
{
};

// Function Athena.ActorFunctionLibrary.TestSetNetCullDistance
struct UActorFunctionLibrary_TestSetNetCullDistance_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InDistance;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.ActorFunctionLibrary.TestSetActorRoleAutonomousProxy
struct UActorFunctionLibrary_TestSetActorRoleAutonomousProxy_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ActorFunctionLibrary.IsParentActorInChildActorComponentHierarchy
struct UActorFunctionLibrary_IsParentActorInChildActorComponentHierarchy_Params
{
	class AActor*                                      ChildActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      TestParentActor;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ActorFunctionLibrary.IsDependentActorSpawnAckedOnClient
struct UActorFunctionLibrary_IsDependentActorSpawnAckedOnClient_Params
{
	class AActor*                                      RealViewer;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      DependencyActor;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ActorFunctionLibrary.IsActorTickFunctionRegistered
struct UActorFunctionLibrary_IsActorTickFunctionRegistered_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ActorFunctionLibrary.GetTransformOfActorRelativeToAnother
struct UActorFunctionLibrary_GetTransformOfActorRelativeToAnother_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      RelativeToActor;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ActorFunctionLibrary.GetActorNetGuidValue
struct UActorFunctionLibrary_GetActorNetGuidValue_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ActorFunctionLibrary.FindActorByNetGuidValue
struct UActorFunctionLibrary_FindActorByNetGuidValue_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                NetGuidValue;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ActorFunctionLibrary.FindActorByName
struct UActorFunctionLibrary_FindActorByName_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     ActorName;                                                // (CPF_Parm, CPF_ZeroConstructor) 0008
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Athena.ActorFunctionLibrary.FindActorByClass
struct UActorFunctionLibrary_FindActorByClass_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      Class;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ActorFunctionLibrary.FilterActorArrayByInterface
struct UActorFunctionLibrary_FilterActorArrayByInterface_Params
{
	TArray<class AActor*>                              Actors;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	class UClass*                                      InterfaceToTest;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0018
};

// Function Athena.ActorFunctionLibrary.ClosestActorToPoint
struct UActorFunctionLibrary_ClosestActorToPoint_Params
{
	TArray<class AActor*>                              Actors;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function Athena.ActorRelevancyTestFunctions.WaitForActorToBeAckedForPlayerId
struct UActorRelevancyTestFunctions_WaitForActorToBeAckedForPlayerId_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	int                                                ClientId;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	int                                                SplitScreenIndex;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
};

// Function Athena.ActorRelevancyTestFunctions.WaitForActorToBeAckedForPlayerController
struct UActorRelevancyTestFunctions_WaitForActorToBeAckedForPlayerController_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function Athena.ActorRelevancyTestFunctions.IsActorAckedForPlayer
struct UActorRelevancyTestFunctions_IsActorAckedForPlayer_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AILocomotionCompositeInputHandler.OnSecondaryItemUseReleased
struct UAILocomotionCompositeInputHandler_OnSecondaryItemUseReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AILocomotionCompositeInputHandler.OnSecondaryItemUsePressed
struct UAILocomotionCompositeInputHandler_OnSecondaryItemUsePressed_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AILocomotionCompositeInputHandler.OnQuickSwitchWeapon
struct UAILocomotionCompositeInputHandler_OnQuickSwitchWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AILocomotionCompositeInputHandler.OnQuickSwitchSecondaryWeapon
struct UAILocomotionCompositeInputHandler_OnQuickSwitchSecondaryWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AILocomotionCompositeInputHandler.OnQuickSwitchPrimaryWeapon
struct UAILocomotionCompositeInputHandler_OnQuickSwitchPrimaryWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AILocomotionCompositeInputHandler.OnPrimaryItemUseReleased
struct UAILocomotionCompositeInputHandler_OnPrimaryItemUseReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AILocomotionCompositeInputHandler.OnPrimaryItemUsePressed
struct UAILocomotionCompositeInputHandler_OnPrimaryItemUsePressed_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AIPartsRetrievalComponent.RequestNewAIParts
struct UAIPartsRetrievalComponent_RequestNewAIParts_Params
{
	class UAIPartsCategory*                            AssignedPartsCategory;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData
struct UAIPartsRetrievalComponent_OnRep_ReplicatedAIPartsData_Params
{
};

// Function Athena.AISpawnActionStateId.PushCharacterIntoAISpawnActionState
struct UAISpawnActionStateId_PushCharacterIntoAISpawnActionState_Params
{
	class AActor*                                      InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Anchor.SetAnchorLoweredProportion
struct AAnchor_SetAnchorLoweredProportion_Params
{
	float                                              InLoweredProportion;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AnimatedStepsComponent.StartOpening
struct UAnimatedStepsComponent_StartOpening_Params
{
};

// Function Athena.AnimatedStepsComponent.OpenImmediate
struct UAnimatedStepsComponent_OpenImmediate_Params
{
};

// Function Athena.AnimatedStepsComponent.Close
struct UAnimatedStepsComponent_Close_Params
{
};

// Function Athena.ShipServiceInterface.GetShipForCrew
struct UShipServiceInterface_GetShipForCrew_Params
{
	struct FGuid                                       CrewId;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class AShip*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ShipServiceInterface.GetCrewFromShip
struct UShipServiceInterface_GetCrewFromShip_Params
{
	class AShip*                                       Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FGuid                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaAIInteractableComponent.GetTriggerRegionRadius
struct UAthenaAIInteractableComponent_GetTriggerRegionRadius_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAIInteractableComponent.GetTriggerRegionCenterPoint
struct UAthenaAIInteractableComponent_GetTriggerRegionCenterPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationCapstanBlueprintFunctions.SetAnimationRemapSpeed
struct UAthenaAnimationCapstanBlueprintFunctions_SetAnimationRemapSpeed_Params
{
	struct FAthenaAnimationCapstan                     Capstan;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              Speed;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0138
};

// Function Athena.AthenaAnimationCapstanBlueprintFunctions.GetCapstanState
struct UAthenaAnimationCapstanBlueprintFunctions_GetCapstanState_Params
{
	struct FAthenaAnimationCapstan                     Capstan;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<EAthenaAnimationCapstanState>          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0138
};

// Function Athena.AthenaAnimationCapstanBlueprintFunctions.GetAngularVelocityWanted
struct UAthenaAnimationCapstanBlueprintFunctions_GetAngularVelocityWanted_Params
{
	struct FAthenaAnimationCapstan                     Capstan;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0138
};

// Function Athena.AthenaAnimationLODInterface.SetIKState
struct UAthenaAnimationLODInterface_SetIKState_Params
{
	TEnumAsByte<EIKState>                              NewState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationLODInterface.SetIKSolverType
struct UAthenaAnimationLODInterface_SetIKSolverType_Params
{
	TEnumAsByte<EIKSolverType>                         NewState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationLODInterface.SetIKFootplantState
struct UAthenaAnimationLODInterface_SetIKFootplantState_Params
{
	TEnumAsByte<EIKFootPlantingState>                  NewState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterAnimationInterface.UnbindFromCharacter
struct UCharacterAnimationInterface_UnbindFromCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterAnimationInterface.OnImpact
struct UCharacterAnimationInterface_OnImpact_Params
{
	struct FVector                                     ImpactLocation;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     ImpactNormal;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
	struct FVector                                     ImpactVelocity;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0018
	TEnumAsByte<ECharacterHitReactionAnimType>         HitReactionAnimType;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
};

// Function Athena.CharacterAnimationInterface.LoadCharacterAnimations
struct UCharacterAnimationInterface_LoadCharacterAnimations_Params
{
	class UClass*                                      AnimDataId;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterAnimationInterface.BindThirdPersonToCharacter
struct UCharacterAnimationInterface_BindThirdPersonToCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      AnimDataId;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.CharacterAnimationInterface.BindFirstPersonToCharacter
struct UCharacterAnimationInterface_BindFirstPersonToCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      AnimDataId;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.MarkRunStopComplete
struct UAthenaAnimationLocomotionComponentFunctions_MarkRunStopComplete_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetWantedMovementSpeed
struct UAthenaAnimationLocomotionComponentFunctions_GetWantedMovementSpeed_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetVelocity
struct UAthenaAnimationLocomotionComponentFunctions_GetVelocity_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetTurningLeft
struct UAthenaAnimationLocomotionComponentFunctions_GetTurningLeft_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetTurningActive
struct UAthenaAnimationLocomotionComponentFunctions_GetTurningActive_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetRunStopWanted
struct UAthenaAnimationLocomotionComponentFunctions_GetRunStopWanted_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetIsUnderwaterSwimming
struct UAthenaAnimationLocomotionComponentFunctions_GetIsUnderwaterSwimming_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetIsSwimming
struct UAthenaAnimationLocomotionComponentFunctions_GetIsSwimming_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetCurrentYaw
struct UAthenaAnimationLocomotionComponentFunctions_GetCurrentYaw_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetCurrentDirection
struct UAthenaAnimationLocomotionComponentFunctions_GetCurrentDirection_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetCharacterMoving
struct UAthenaAnimationLocomotionComponentFunctions_GetCharacterMoving_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetBlendedTurnRate
struct UAthenaAnimationLocomotionComponentFunctions_GetBlendedTurnRate_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.InventoryItemInterface.SetItemType
struct UInventoryItemInterface_SetItemType_Params
{
	TEnumAsByte<EItemType>                             InType;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryItemInterface.OnAddedToInventory
struct UInventoryItemInterface_OnAddedToInventory_Params
{
};

// Function Athena.InventoryItemInterface.GetItemType
struct UInventoryItemInterface_GetItemType_Params
{
	TEnumAsByte<EItemType>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryItemInterface.GetIconURL
struct UInventoryItemInterface_GetIconURL_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.InventoryItemInterface.GetIconScale
struct UInventoryItemInterface_GetIconScale_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryItemInterface.GetIconRotation
struct UInventoryItemInterface_GetIconRotation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WielderAnimationInterface.SetItemVisibility
struct UWielderAnimationInterface_SetItemVisibility_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               Visibility;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.WielderAnimationInterface.ItemWielded
struct UWielderAnimationInterface_ItemWielded_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FWieldAnimationParams                       AnimParams;                                               // (CPF_Parm, CPF_OutParm) 0010
};

// Function Athena.WielderAnimationInterface.ItemStowed
struct UWielderAnimationInterface_ItemStowed_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               FastStow;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.WielderAnimationInterface.GetWieldedItemMesh
struct UWielderAnimationInterface_GetWieldedItemMesh_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0010
};

// Function Athena.WielderAnimationInterface.DetachWieldedItem
struct UWielderAnimationInterface_DetachWieldedItem_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WielderAnimationInterface.AttachWieldedItem
struct UWielderAnimationInterface_AttachWieldedItem_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FWieldAnimationParams                       AnimParams;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0010
};

// Function Athena.AthenaAnimationInstance.SpawnCosmeticItem
struct UAthenaAnimationInstance_SpawnCosmeticItem_Params
{
	class AAthenaCharacter*                            Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ObjectToSpawn;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EWieldAnimationLocation>               SpawnLocation;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EWieldAnimationGraph>                  Animgraph;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0011
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0012
};

// Function Athena.AthenaAnimationInstance.SetWieldedItemContinuousIsAlternate
struct UAthenaAnimationInstance_SetWieldedItemContinuousIsAlternate_Params
{
	bool                                               IsAlternate;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.SetLoadedItemAllAnimations
struct UAthenaAnimationInstance_SetLoadedItemAllAnimations_Params
{
	struct FAthenaAnimationCoreObjectAnimations        AllAnimationSet;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.AthenaAnimationInstance.SetControllableSocketGroupCharacterSize
struct UAthenaAnimationInstance_SetControllableSocketGroupCharacterSize_Params
{
	TEnumAsByte<EAthenaAnimationSocketGroupCharacterSize> InGroup;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.SetControllableSocketGroup
struct UAthenaAnimationInstance_SetControllableSocketGroup_Params
{
	TEnumAsByte<EAthenaAnimationSocketGroup>           InGroup;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.PickItemOneShotSequencePitchOverride
struct UAthenaAnimationInstance_PickItemOneShotSequencePitchOverride_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.PickItemOneShotSequence
struct UAthenaAnimationInstance_PickItemOneShotSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.NotRunningOnServer
struct UAthenaAnimationInstance_NotRunningOnServer_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.LoadAllItemAnimations
struct UAthenaAnimationInstance_LoadAllItemAnimations_Params
{
	class AAthenaCharacter*                            Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UScriptStruct*                               DestinationStruct;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      CharacterType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TArray<struct FAthenaAnimationLoadObjectsWrapper>  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0018
};

// Function Athena.AthenaAnimationInstance.LeftItemBlockingFeedbackState
struct UAthenaAnimationInstance_LeftItemBlockingFeedbackState_Params
{
};

// Function Athena.AthenaAnimationInstance.InMeleeBlock
struct UAthenaAnimationInstance_InMeleeBlock_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.InMeleeAttack
struct UAthenaAnimationInstance_InMeleeAttack_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetWantsToReenterItemBlockingFeedback
struct UAthenaAnimationInstance_GetWantsToReenterItemBlockingFeedback_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetMeleeStrikeType
struct UAthenaAnimationInstance_GetMeleeStrikeType_Params
{
	TEnumAsByte<EWieldableItemComplexOneShotAnimType>  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetLocomotion
struct UAthenaAnimationInstance_GetLocomotion_Params
{
	struct FAthenaAnimationLocomotion                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemWieldedParams
struct UAthenaAnimationInstance_GetLoadedItemWieldedParams_Params
{
	struct FWieldAnimationParams                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemSecondaryPitchOverride
struct UAthenaAnimationInstance_GetLoadedItemSecondaryPitchOverride_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemSecondaryContinuousAnimationsMain
struct UAthenaAnimationInstance_GetLoadedItemSecondaryContinuousAnimationsMain_Params
{
	struct FAthenaAnimationObjectActionContinuousStruct ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemRightHandOffset
struct UAthenaAnimationInstance_GetLoadedItemRightHandOffset_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemPrimaryPitchOverride
struct UAthenaAnimationInstance_GetLoadedItemPrimaryPitchOverride_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemPrimaryContinuousAnimationsMain
struct UAthenaAnimationInstance_GetLoadedItemPrimaryContinuousAnimationsMain_Params
{
	struct FAthenaAnimationObjectActionContinuousStruct ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemMeleeAnimationsV2
struct UAthenaAnimationInstance_GetLoadedItemMeleeAnimationsV2_Params
{
	struct FAthenaAnimationObjectMeleeV2               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemLocomotionAnimations
struct UAthenaAnimationInstance_GetLoadedItemLocomotionAnimations_Params
{
	struct FAthenaAnimationObjectLocomotionAnimations  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemLeftHandOffset
struct UAthenaAnimationInstance_GetLoadedItemLeftHandOffset_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemJumpingAnimations
struct UAthenaAnimationInstance_GetLoadedItemJumpingAnimations_Params
{
	struct FAthenaAnimationObjectJumpingAnimations     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemIsRangedWeapon
struct UAthenaAnimationInstance_GetLoadedItemIsRangedWeapon_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemIdleAnimations
struct UAthenaAnimationInstance_GetLoadedItemIdleAnimations_Params
{
	struct FAthenaAnimationObjectIdleAnimations        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemHandAdditiveOverlayAnimation
struct UAthenaAnimationInstance_GetLoadedItemHandAdditiveOverlayAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemFacialAnimations
struct UAthenaAnimationInstance_GetLoadedItemFacialAnimations_Params
{
	struct FAthenaAnimationObjectFacial                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemEquippingAnimations
struct UAthenaAnimationInstance_GetLoadedItemEquippingAnimations_Params
{
	struct FAthenaAnimationObjectEquipAnimations       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemAllAnimations
struct UAthenaAnimationInstance_GetLoadedItemAllAnimations_Params
{
	struct FAthenaAnimationCoreObjectAnimations        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaAnimationInstance.GetItemUsePitchOverride
struct UAthenaAnimationInstance_GetItemUsePitchOverride_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetItemMeleeDodgeBlendspace
struct UAthenaAnimationInstance_GetItemMeleeDodgeBlendspace_Params
{
	class UBlendSpace*                                 ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetItemContinuousStructurePitchOverride
struct UAthenaAnimationInstance_GetItemContinuousStructurePitchOverride_Params
{
	TEnumAsByte<EContinuousUseID>                      ContinuousUseID;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EContinuousUseOverride>                Override;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
	struct FAthenaAnimationObjectActionContinuousStructPitchOverride ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Athena.AthenaAnimationInstance.GetItemContinuousStructure
struct UAthenaAnimationInstance_GetItemContinuousStructure_Params
{
	TEnumAsByte<EContinuousUseID>                      ContinuousUseID;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EContinuousUseOverride>                Override;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
	struct FAthenaAnimationObjectActionContinuousStruct ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Athena.AthenaAnimationInstance.GetItemComplexOneShotSequence
struct UAthenaAnimationInstance_GetItemComplexOneShotSequence_Params
{
	TEnumAsByte<EComplexOneShotSubState>               ComplexOneShotSubState;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAnimSequence*                               ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaAnimationInstance.GetItemComplexOneShotPlaySpeed
struct UAthenaAnimationInstance_GetItemComplexOneShotPlaySpeed_Params
{
	class UAnimSequence*                               AnimSequence;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EComplexOneShotSubState>               ComplexOneShotSubState;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.AthenaAnimationInstance.GetItemBlockingSubState
struct UAthenaAnimationInstance_GetItemBlockingSubState_Params
{
	TEnumAsByte<EItemBlockingSubState>                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetItemBlockingMainOutOfAnimation
struct UAthenaAnimationInstance_GetItemBlockingMainOutOfAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetItemBlockingMainIntoAnimation
struct UAthenaAnimationInstance_GetItemBlockingMainIntoAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetItemBlockingMainBlendspace
struct UAthenaAnimationInstance_GetItemBlockingMainBlendspace_Params
{
	class UBlendSpace*                                 ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetItemBlockingFeedbackSequence
struct UAthenaAnimationInstance_GetItemBlockingFeedbackSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetInDockingTransition
struct UAthenaAnimationInstance_GetInDockingTransition_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetCurrentEqippedItem
struct UAthenaAnimationInstance_GetCurrentEqippedItem_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetControllableSocketGroupCharacterSize
struct UAthenaAnimationInstance_GetControllableSocketGroupCharacterSize_Params
{
	TEnumAsByte<EAthenaAnimationSocketGroupCharacterSize> ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetControllableSocketGroup
struct UAthenaAnimationInstance_GetControllableSocketGroup_Params
{
	TEnumAsByte<EAthenaAnimationSocketGroup>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstance.GetAnimationLength
struct UAthenaAnimationInstance_GetAnimationLength_Params
{
	class UAnimSequence*                               Animation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaAnimationInstance.EnteredItemBlockingFeedbackState
struct UAthenaAnimationInstance_EnteredItemBlockingFeedbackState_Params
{
};

// Function Athena.AthenaAnimationInstance.DestroyCosmeticItem
struct UAthenaAnimationInstance_DestroyCosmeticItem_Params
{
	TEnumAsByte<EWieldAnimationLocation>               SpawnLocation;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0001
};

// Function Athena.CameraFunctionLib.UpdateCameraAdditiveType
struct UCameraFunctionLib_UpdateCameraAdditiveType_Params
{
	TEnumAsByte<ECameraLookatAnimationType>            EnumControllableType;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              CameraAdditiveBlendValue;                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              IsCameraAdditive;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              CameraPitchTime;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              CameraYawTime;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              CameraYawAngle;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              CameraPitchAngle;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              MinPitchAngle;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	float                                              MaxPitchAngle;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              MaxYawAngle;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	float                                              MinYawAngle;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function Athena.FirstPersonAnimationInstance.LoadSpecificItemAnimations
struct UFirstPersonAnimationInstance_LoadSpecificItemAnimations_Params
{
	TArray<struct FAthenaAnimationLoadObjectsWrapper>  AllItemData;                                              // (CPF_Parm, CPF_ZeroConstructor) 0000
	class UClass*                                      ItemId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.ThirdPersonAnimationInstance.UpdateSkeletonFleeingAnimations
struct UThirdPersonAnimationInstance_UpdateSkeletonFleeingAnimations_Params
{
	class UClass*                                      ObjectID;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ThirdPersonAnimationInstance.UpdatePitchOverrideAnimation
struct UThirdPersonAnimationInstance_UpdatePitchOverrideAnimation_Params
{
	bool                                               IsPrimary;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ThirdPersonAnimationInstance.UpdateAISpawnAnimation
struct UThirdPersonAnimationInstance_UpdateAISpawnAnimation_Params
{
	class AAthenaCharacter*                            Owner;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ObjectID;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               OnLand;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               QuickSpawn;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0011
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function Athena.ThirdPersonAnimationInstance.TriggerSensingAnimation
struct UThirdPersonAnimationInstance_TriggerSensingAnimation_Params
{
	TEnumAsByte<ESkeletonSensingState>                 NewSensingState;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ThirdPersonAnimationInstance.StopMeleeStanceChange
struct UThirdPersonAnimationInstance_StopMeleeStanceChange_Params
{
};

// Function Athena.ThirdPersonAnimationInstance.StartMeleeStanceChange
struct UThirdPersonAnimationInstance_StartMeleeStanceChange_Params
{
};

// Function Athena.ThirdPersonAnimationInstance.SetLocomotionTypeActive
struct UThirdPersonAnimationInstance_SetLocomotionTypeActive_Params
{
	TEnumAsByte<ELocomotionType>                       LocomotionType;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Active;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
};

// Function Athena.ThirdPersonAnimationInstance.SelectSkeletonFleeingVariationAnimation
struct UThirdPersonAnimationInstance_SelectSkeletonFleeingVariationAnimation_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ThirdPersonAnimationInstance.OnEventAllocateShopInteractionAnimations
struct UThirdPersonAnimationInstance_OnEventAllocateShopInteractionAnimations_Params
{
	class AAthenaCharacter*                            Owner;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Active;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EInteractionObject>                    Type;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0009
};

// Function Athena.ThirdPersonAnimationInstance.LoadSpecificItemAnimations
struct UThirdPersonAnimationInstance_LoadSpecificItemAnimations_Params
{
	TArray<struct FAthenaAnimationLoadObjectsWrapper>  AllItemData;                                              // (CPF_Parm, CPF_ZeroConstructor) 0000
	class UClass*                                      ItemId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.ThirdPersonAnimationInstance.GetTargetingPitch
struct UThirdPersonAnimationInstance_GetTargetingPitch_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ThirdPersonAnimationInstance.GetCurrentLocomotionType
struct UThirdPersonAnimationInstance_GetCurrentLocomotionType_Params
{
	TEnumAsByte<ELocomotionType>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ThirdPersonAnimationInstance.GetCharacterPitch
struct UThirdPersonAnimationInstance_GetCharacterPitch_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ThirdPersonAnimationInstance.GetAIKnockbackAnimation
struct UThirdPersonAnimationInstance_GetAIKnockbackAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ThirdPersonAnimationInstance.AllocateNewRandomContinuousEmote
struct UThirdPersonAnimationInstance_AllocateNewRandomContinuousEmote_Params
{
	bool                                               IsSlotA;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAnimationInstanceTestFunctions.IsStateActiveOnAnimationInstance
struct UAthenaAnimationInstanceTestFunctions_IsStateActiveOnAnimationInstance_Params
{
	class UAthenaAnimationInstance*                    AnimationInstance;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FName                                       InStatePathName;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaAnimationInstanceTestFunctions.GetActiveStatesOnAnimationInstance
struct UAthenaAnimationInstanceTestFunctions_GetActiveStatesOnAnimationInstance_Params
{
	class UAthenaAnimationInstance*                    AnimationInstance;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.SetMaxJumpSequence
struct UAthenaAnimationJumpingBlueprintFunctions_SetMaxJumpSequence_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	int                                                NewMaxJumpSequence;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00B0
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.SetJumpCompleted
struct UAthenaAnimationJumpingBlueprintFunctions_SetJumpCompleted_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.IsHeavyLanding
struct UAthenaAnimationJumpingBlueprintFunctions_IsHeavyLanding_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 00B0
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.GetPreImpactTime
struct UAthenaAnimationJumpingBlueprintFunctions_GetPreImpactTime_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 00B0
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.GetLandingSequence
struct UAthenaAnimationJumpingBlueprintFunctions_GetLandingSequence_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 00B0
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.GetJumpSequence
struct UAthenaAnimationJumpingBlueprintFunctions_GetJumpSequence_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 00B0
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.GetJumpingState
struct UAthenaAnimationJumpingBlueprintFunctions_GetJumpingState_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<EAthenaAnimationJumpingState>          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 00B0
};

// Function Athena.AthenaAnimationLadderBlueprintFunctions.SetClimbOnComplete
struct UAthenaAnimationLadderBlueprintFunctions_SetClimbOnComplete_Params
{
	struct FAthenaAnimationLadder                      Ladder;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.AthenaAnimationLadderBlueprintFunctions.SetClimbOffComplete
struct UAthenaAnimationLadderBlueprintFunctions_SetClimbOffComplete_Params
{
	struct FAthenaAnimationLadder                      Ladder;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.AthenaAnimationLadderBlueprintFunctions.GetPlayerIntent
struct UAthenaAnimationLadderBlueprintFunctions_GetPlayerIntent_Params
{
	struct FAthenaAnimationLadder                      Ladder;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 01C0
};

// Function Athena.AthenaAnimationLadderBlueprintFunctions.GetLadderState
struct UAthenaAnimationLadderBlueprintFunctions_GetLadderState_Params
{
	struct FAthenaAnimationLadder                      Ladder;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<EAthenaAnimationLadderState>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 01C0
};

// Function Athena.AthenaAnimationLadderBlueprintFunctions.GetClimbDistance
struct UAthenaAnimationLadderBlueprintFunctions_GetClimbDistance_Params
{
	struct FAthenaAnimationLadder                      Ladder;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 01C0
};

// Function Athena.AthenaAnimationMountedWeaponBlueprintFunctions.SetFireFinished
struct UAthenaAnimationMountedWeaponBlueprintFunctions_SetFireFinished_Params
{
	struct FAthenaAnimationMountedWeapon               MountedWeapon;                                            // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetWheelTime
struct UAthenaAnimationWheelBlueprintFunctions_GetWheelTime_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 01B0
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetWheelDirection
struct UAthenaAnimationWheelBlueprintFunctions_GetWheelDirection_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 01B0
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetWheelAnimationType
struct UAthenaAnimationWheelBlueprintFunctions_GetWheelAnimationType_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<EWheelAnimationType>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 01B0
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetRightWheelArmDown
struct UAthenaAnimationWheelBlueprintFunctions_GetRightWheelArmDown_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 01B0
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetRightHandSocket
struct UAthenaAnimationWheelBlueprintFunctions_GetRightHandSocket_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UAthenaAnimationInstance*                    Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 01B0
	struct FSocketId                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 01B8
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetRightFingerAlpha
struct UAthenaAnimationWheelBlueprintFunctions_GetRightFingerAlpha_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 01B0
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetLeftWheelArmDown
struct UAthenaAnimationWheelBlueprintFunctions_GetLeftWheelArmDown_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 01B0
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetLeftHandSocket
struct UAthenaAnimationWheelBlueprintFunctions_GetLeftHandSocket_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UAthenaAnimationInstance*                    Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 01B0
	struct FSocketId                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 01B8
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetLeftFingerAlpha
struct UAthenaAnimationWheelBlueprintFunctions_GetLeftFingerAlpha_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 01B0
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetFullBodyAlpha
struct UAthenaAnimationWheelBlueprintFunctions_GetFullBodyAlpha_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 01B0
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.UpdateThirdPersonArmOverlayFlags
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_UpdateThirdPersonArmOverlayFlags_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     SourceString;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0008
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.UpdateFirstPersonArmOverlayFlags
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_UpdateFirstPersonArmOverlayFlags_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     SourceString;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0008
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.UpdateAnimOverlayParameters
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_UpdateAnimOverlayParameters_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EArmOverlayState>                      ArmOverlayState;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ThirdPersonAnimgraph;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0009
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.StopFacialAnimationMontage
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_StopFacialAnimationMontage_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAnimMontage*                                MontageToStop;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              BlendTime;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EFacialPriority>                       Priority;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0015
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.PlayNewFacialAnimation
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_PlayNewFacialAnimation_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAnimMontage*                                MontageToPlay;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              MontagePlayRate;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EFacialPriority>                       Priority;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0015
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.JumpToFacialAnimationMontageSection
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_JumpToFacialAnimationMontageSection_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAnimMontage*                                PlayingMontage;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FName                                       MontageSection;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EFacialPriority>                       Priority;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0019
};

// Function Athena.AthenaAnimationWieldedItemFunctions.GetIntoContinuousUseSwimmingAnimationBlendSpace
struct UAthenaAnimationWieldedItemFunctions_GetIntoContinuousUseSwimmingAnimationBlendSpace_Params
{
	class UAthenaAnimationInstance*                    AnimInstance;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EContinuousUseOverride>                Override;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UBlendSpace*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaAnimationWieldedItemFunctions.GetIntoContinuousUseAnimationSequence
struct UAthenaAnimationWieldedItemFunctions_GetIntoContinuousUseAnimationSequence_Params
{
	class UAthenaAnimationInstance*                    AnimInstance;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EContinuousUseOverride>                Override;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UAnimSequenceBase*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCameraComponent.GetIsUnderwater
struct UAthenaCameraComponent_GetIsUnderwater_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCameraComponent.Activate
struct UAthenaCameraComponent_Activate_Params
{
	bool                                               bReset;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LookAtOffsetComponent.GetLookAtOffset
struct ULookAtOffsetComponent_GetLookAtOffset_Params
{
	struct FLookAtOffset                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.CharacterInterface.GetMouthPosition
struct UCharacterInterface_GetMouthPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterFootImpactMeshInterface.GetFootImpactSkeletonMeshComponent
struct UCharacterFootImpactMeshInterface_GetFootImpactSkeletonMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterInertInterface.SetInert
struct UCharacterInertInterface_SetInert_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterInertInterface.IsInert
struct UCharacterInertInterface_IsInert_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterInertInterface.ClearInert
struct UCharacterInertInterface_ClearInert_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllerInterface.EndControl
struct UControllerInterface_EndControl_Params
{
};

// Function Athena.LoadableItemInterface.CanBeUnloaded
struct ULoadableItemInterface_CanBeUnloaded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LoadableItemInterface.CanBeLoaded
struct ULoadableItemInterface_CanBeLoaded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorInterface.WieldItemByActor
struct UInventoryManipulatorInterface_WieldItemByActor_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               UnwieldFast;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0009
};

// Function Athena.InventoryManipulatorInterface.ToggleWieldItem
struct UInventoryManipulatorInterface_ToggleWieldItem_Params
{
};

// Function Athena.InventoryManipulatorInterface.RemoveItem
struct UInventoryManipulatorInterface_RemoveItem_Params
{
	class AItemInfo*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorInterface.QuickSelectItemOfType
struct UInventoryManipulatorInterface_QuickSelectItemOfType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                TypedItemIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.InventoryManipulatorInterface.QuickSelectItemOfCategory
struct UInventoryManipulatorInterface_QuickSelectItemOfCategory_Params
{
	class UClass*                                      Category;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                IndexIntoCategory;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorInterface.QuickSelectItem
struct UInventoryManipulatorInterface_QuickSelectItem_Params
{
	int                                                ItemIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorInterface.PickUpItem
struct UInventoryManipulatorInterface_PickUpItem_Params
{
	class AItemInfo*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               AndWield;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0009
};

// Function Athena.InventoryManipulatorInterface.GetNumberOfItemsOfItemCategory
struct UInventoryManipulatorInterface_GetNumberOfItemsOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorInterface.GetItems
struct UInventoryManipulatorInterface_GetItems_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.InventoryManipulatorInterface.GetCurrentItemIndex
struct UInventoryManipulatorInterface_GetCurrentItemIndex_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorInterface.DropWieldedItem
struct UInventoryManipulatorInterface_DropWieldedItem_Params
{
	TEnumAsByte<EDropItemReturnCode>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorInterface.CycleItemUp
struct UInventoryManipulatorInterface_CycleItemUp_Params
{
};

// Function Athena.InventoryManipulatorInterface.CycleItemType
struct UInventoryManipulatorInterface_CycleItemType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorInterface.CycleItemDown
struct UInventoryManipulatorInterface_CycleItemDown_Params
{
};

// Function Athena.InventoryManipulatorInterface.CycleItemCategory
struct UInventoryManipulatorInterface_CycleItemCategory_Params
{
	class UClass*                                      Category;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorInterface.ConsumeItem
struct UInventoryManipulatorInterface_ConsumeItem_Params
{
	class AItemInfo*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorInterface.CanDropWieldedItem
struct UInventoryManipulatorInterface_CanDropWieldedItem_Params
{
	TEnumAsByte<EDropItemReturnCode>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorInterface.CanAddItemOfItemCategory
struct UInventoryManipulatorInterface_CanAddItemOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<ECanAddItemQueryResult>                ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorInterface.AddItemOfSubclass
struct UInventoryManipulatorInterface_AddItemOfSubclass_Params
{
	class UClass*                                      InItem;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorInterface.AddItem
struct UInventoryManipulatorInterface_AddItem_Params
{
	class AItemInfo*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldedItemInterface.WieldItem
struct UWieldedItemInterface_WieldItem_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Fast;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0011
};

// Function Athena.WieldedItemInterface.UnstashItem
struct UWieldedItemInterface_UnstashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldedItemInterface.StashItem
struct UWieldedItemInterface_StashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldedItemInterface.SlowStashItem
struct UWieldedItemInterface_SlowStashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldedItemInterface.GetWieldedItemIfNotStashed
struct UWieldedItemInterface_GetWieldedItemIfNotStashed_Params
{
	TScriptInterface<class UWieldableInterface>        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldedItemInterface.GetWieldedItem
struct UWieldedItemInterface_GetWieldedItem_Params
{
	TScriptInterface<class UWieldableInterface>        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CloudDomeInterface.UpdateCloudMeshes
struct UCloudDomeInterface_UpdateCloudMeshes_Params
{
	struct FCloudVisualParameters                      CloudVisualParametersIn;                                  // (CPF_Parm, CPF_OutParm) 0000
	TArray<struct FTiledCloudProperties>               CloudTileIn;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0070
	TArray<struct FRenderedCloudProperties>            RenderedCloudsIn;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0080
	TArray<struct FCloudTypeDefinition>                CloudMeshesIn;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0090
	TArray<struct FCloudTypeNormalizedWeight>          NormalizedCloudWeightsIn;                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 00A0
};

// Function Athena.CloudDomeInterface.GetCloudDomePosition
struct UCloudDomeInterface_GetCloudDomePosition_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.WieldItem
struct AAthenaCharacter_WieldItem_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Fast;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0011
};

// Function Athena.AthenaCharacter.UseItem
struct AAthenaCharacter_UseItem_Params
{
	class UClass*                                      NotificationInputId;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacter.UnforceWaterHeight
struct AAthenaCharacter_UnforceWaterHeight_Params
{
};

// Function Athena.AthenaCharacter.SetIgnoreReplicationRotationOnly
struct AAthenaCharacter_SetIgnoreReplicationRotationOnly_Params
{
	bool                                               InIgnoreReplicationRotationOnly;                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.ReceiveRestart
struct AAthenaCharacter_ReceiveRestart_Params
{
};

// Function Athena.AthenaCharacter.PickUpItem
struct AAthenaCharacter_PickUpItem_Params
{
	class AItemInfo*                                   ItemInfo;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               AndWield;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacter.Kill
struct AAthenaCharacter_Kill_Params
{
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.IsInWater
struct AAthenaCharacter_IsInWater_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.IsInteractionValid
struct AAthenaCharacter_IsInteractionValid_Params
{
	class AActor*                                      InInteractable;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacter.IsDead
struct AAthenaCharacter_IsDead_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.IsCurrentItemReadyForAI
struct AAthenaCharacter_IsCurrentItemReadyForAI_Params
{
	class UClass*                                      NotificationInputId;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacter.InteractWith
struct AAthenaCharacter_InteractWith_Params
{
	class AActor*                                      InInteractable;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      NotificationInputId;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacter.Interact
struct AAthenaCharacter_Interact_Params
{
	class AActor*                                      InInteractable;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.HasValidWaterHeight
struct AAthenaCharacter_HasValidWaterHeight_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.HandleCharacterMovementUpdated
struct AAthenaCharacter_HandleCharacterMovementUpdated_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     OldLocation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	struct FVector                                     OldVelocity;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCharacter.GetYawOnMovingBase
struct AAthenaCharacter_GetYawOnMovingBase_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetWaterLevelRelativeToCharacterBasePosition
struct AAthenaCharacter_GetWaterLevelRelativeToCharacterBasePosition_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetWaterInformation
struct AAthenaCharacter_GetWaterInformation_Params
{
	struct FWaterInformation                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaCharacter.GetWaterHeight
struct AAthenaCharacter_GetWaterHeight_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetViewPitch
struct AAthenaCharacter_GetViewPitch_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetValidWaterHeightAtomic
struct AAthenaCharacter_GetValidWaterHeightAtomic_Params
{
	float                                              OutWaterHeight;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.AthenaCharacter.GetThirdPersonMeshComponent
struct AAthenaCharacter_GetThirdPersonMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetInputBinder
struct AAthenaCharacter_GetInputBinder_Params
{
	class UCharacterInputBinder*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetIgnoreReplicationRotationOnly
struct AAthenaCharacter_GetIgnoreReplicationRotationOnly_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetFocusedInteractable
struct AAthenaCharacter_GetFocusedInteractable_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetFloorSweepCollisionResponseContainer
struct AAthenaCharacter_GetFloorSweepCollisionResponseContainer_Params
{
	struct FCollisionResponseContainer                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AthenaCharacter.GetFirstPersonMeshComponent
struct AAthenaCharacter_GetFirstPersonMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetCurrentShipAsActor
struct AAthenaCharacter_GetCurrentShipAsActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetCurrentShip
struct AAthenaCharacter_GetCurrentShip_Params
{
	class AShip*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetCharacterTransform
struct AAthenaCharacter_GetCharacterTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GetCharacterRotation
struct AAthenaCharacter_GetCharacterRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacter.GenerateNewRandomAnimationSeed
struct AAthenaCharacter_GenerateNewRandomAnimationSeed_Params
{
};

// Function Athena.AthenaCharacter.ForceWaterHeight
struct AAthenaCharacter_ForceWaterHeight_Params
{
	float                                              WaterHeight;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      WaterId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacter.CureAllAilings
struct AAthenaCharacter_CureAllAilings_Params
{
};

// Function Athena.AthenaCharacter.CreateProjectileTraceHitVolume
struct AAthenaCharacter_CreateProjectileTraceHitVolume_Params
{
};

// Function Athena.AthenaCharacter.CanInteractWith
struct AAthenaCharacter_CanInteractWith_Params
{
	class AActor*                                      InInteractable;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      NotificationInputId;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCharacter.CalculateWaterHeight
struct AAthenaCharacter_CalculateWaterHeight_Params
{
};

// Function Athena.AthenaCharacter.AllAnimationsLoaded
struct AAthenaCharacter_AllAnimationsLoaded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageInstigatorInterface.CanDamageActor
struct UDamageInstigatorInterface_CanDamageActor_Params
{
	class AActor*                                      DamageRecipient;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.NamedObjectInterface.GetObjectDisplayName
struct UNamedObjectInterface_GetObjectDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.ItemInfo.GetItemType
struct AItemInfo_GetItemType_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ItemInfo.GetItemCategory
struct AItemInfo_GetItemCategory_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ItemInfo.GetItem
struct AItemInfo_GetItem_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ItemInfo.GetAsWieldable
struct AItemInfo_GetAsWieldable_Params
{
	class AWieldableItem*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ItemInfo.CreateWieldableItem
struct AItemInfo_CreateWieldableItem_Params
{
	class AActor*                                      InNewOwner;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTransform                                  InTransform;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
	class AWieldableItem*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.ItemInfo.CreateProxyItem
struct AItemInfo_CreateProxyItem_Params
{
	struct FTransform                                  InTransform;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	TEnumAsByte<EItemLifetimeManagement>               LifetimeManagement;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	class AItemProxy*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0038
};

// Function Athena.AthenaAICharacter.SetTargetActorToFace
struct AAthenaAICharacter_SetTargetActorToFace_Params
{
	class AActor*                                      InActor;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAICharacter.SetRegion
struct AAthenaAICharacter_SetRegion_Params
{
	struct FName                                       InRegion;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAICharacter.SetOverrideShotHitChance
struct AAthenaAICharacter_SetOverrideShotHitChance_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              HitChance;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.AthenaAICharacter.SetOverrideCannonShotHitChance
struct AAthenaAICharacter_SetOverrideCannonShotHitChance_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              HitChance;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.AthenaAICharacter.SetLoadout
struct AAthenaAICharacter_SetLoadout_Params
{
	TAssetPtr<class ULoadoutAsset>                     InLoadout;                                                // (CPF_Parm) 0000
};

// Function Athena.AthenaAICharacter.SetAIStrategy
struct AAthenaAICharacter_SetAIStrategy_Params
{
	class UClass*                                      InStrategy;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAICharacter.OnRep_CurrentAIStrategy
struct AAthenaAICharacter_OnRep_CurrentAIStrategy_Params
{
	class UClass*                                      OldAIStrategy;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAICharacter.GetRegion
struct AAthenaAICharacter_GetRegion_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaAICharacter.GetAIStrategy
struct AAthenaAICharacter_GetAIStrategy_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerCharacterInterface.GetFirstPersonWwiseEmitterOwner
struct UPlayerCharacterInterface_GetFirstPersonWwiseEmitterOwner_Params
{
	class USceneComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerCharacterInterface.ExecuteRumbleProfile
struct UPlayerCharacterInterface_ExecuteRumbleProfile_Params
{
	struct FName                                       RumbleTag;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerManagerServiceInterface.GetPlayerCharacterFromPlayerState
struct UPlayerManagerServiceInterface_GetPlayerCharacterFromPlayerState_Params
{
	class AAthenaPlayerState*                          PlayerState;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaPlayerCharacter*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.PlayerManagerServiceInterface.GetNumPlayers
struct UPlayerManagerServiceInterface_GetNumPlayers_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerManagerServiceInterface.GetNumActiveLocalPlayers
struct UPlayerManagerServiceInterface_GetNumActiveLocalPlayers_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerManagerServiceInterface.GetFirstLocalPlayer
struct UPlayerManagerServiceInterface_GetFirstLocalPlayer_Params
{
	class AAthenaPlayerCharacter*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerManagerServiceInterface.GetAllPlayerControllersWeakActorHandle
struct UPlayerManagerServiceInterface_GetAllPlayerControllersWeakActorHandle_Params
{
	TArray<struct FWeakActorHandle>                    ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm) 0000
};

// Function Athena.PlayerManagerServiceInterface.GetAllActivePlayers
struct UPlayerManagerServiceInterface_GetAllActivePlayers_Params
{
	TArray<class AAthenaPlayerCharacter*>              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.PlayerManagerServiceInterface.GetActiveLocalPlayers
struct UPlayerManagerServiceInterface_GetActiveLocalPlayers_Params
{
	TArray<class AAthenaPlayerCharacter*>              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.WieldableInterface.GetItemInfo
struct UWieldableInterface_GetItemInfo_Params
{
	class AItemInfo*                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableInterface.GetAnimationKey
struct UWieldableInterface_GetAnimationKey_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableInterface.GetActor
struct UWieldableInterface_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ItemLoadoutViewInterface.HasCapacity
struct UItemLoadoutViewInterface_HasCapacity_Params
{
	class UClass*                                      InItemCategory;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ItemLoadoutViewInterface.GetWeaponsLoadout
struct UItemLoadoutViewInterface_GetWeaponsLoadout_Params
{
	TArray<struct FWeaponSlot>                         ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm) 0000
};

// Function Athena.ItemLoadoutViewInterface.GetNumItems
struct UItemLoadoutViewInterface_GetNumItems_Params
{
	class UClass*                                      InItemCategory;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ItemLoadoutViewInterface.GetNumCategories
struct UItemLoadoutViewInterface_GetNumCategories_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ItemLoadoutViewInterface.GetItems
struct UItemLoadoutViewInterface_GetItems_Params
{
	class UClass*                                      InItemCategory;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class AItemInfo*>                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.ItemLoadoutViewInterface.GetItemLoadout
struct UItemLoadoutViewInterface_GetItemLoadout_Params
{
	struct FItemLoadout                                ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm) 0000
};

// Function Athena.ItemLoadoutViewInterface.GetItemByIndex
struct UItemLoadoutViewInterface_GetItemByIndex_Params
{
	class UClass*                                      InItemCategory;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Index;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AItemInfo*                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ItemLoadoutViewInterface.GetItem
struct UItemLoadoutViewInterface_GetItem_Params
{
	class UClass*                                      InItemCategory;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AItemInfo*                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ItemLoadoutViewInterface.GetCategories
struct UItemLoadoutViewInterface_GetCategories_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.ItemLoadoutViewInterface.GetCapacity
struct UItemLoadoutViewInterface_GetCapacity_Params
{
	class UClass*                                      InItemCategory;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ItemLoadoutViewInterface.GetAllItems
struct UItemLoadoutViewInterface_GetAllItems_Params
{
	TArray<class AItemInfo*>                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.RadialInventoryInterface.ResetRadialInventory
struct URadialInventoryInterface_ResetRadialInventory_Params
{
};

// Function Athena.RadialInventoryInterface.OnRadialInventoryInput
struct URadialInventoryInterface_OnRadialInventoryInput_Params
{
	struct FVector2D                                   InputVector;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryInterface.IsFullyOpened
struct URadialInventoryInterface_IsFullyOpened_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryInterface.GetNumSlots
struct URadialInventoryInterface_GetNumSlots_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryInterface.GetMaxNumOfPages
struct URadialInventoryInterface_GetMaxNumOfPages_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryInterface.GetLastSelectedItem
struct URadialInventoryInterface_GetLastSelectedItem_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryInterface.DeactivateRadialInventory
struct URadialInventoryInterface_DeactivateRadialInventory_Params
{
};

// Function Athena.RadialInventoryInterface.ConfirmRadialFullyOpened
struct URadialInventoryInterface_ConfirmRadialFullyOpened_Params
{
};

// Function Athena.RadialInventoryInterface.ActivateRadialInventory
struct URadialInventoryInterface_ActivateRadialInventory_Params
{
	TEnumAsByte<ERadialMenuInputModality>              InputModality;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItemSetInterface.RemoveItem
struct UWieldableItemSetInterface_RemoveItem_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetInterface.GetSlotForItem
struct UWieldableItemSetInterface_GetSlotForItem_Params
{
	int                                                Index;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetInterface.GetNumItemsOfType
struct UWieldableItemSetInterface_GetNumItemsOfType_Params
{
	class UClass*                                      Type;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetInterface.GetNumItems
struct UWieldableItemSetInterface_GetNumItems_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItemSetInterface.GetItemsOfCategory
struct UWieldableItemSetInterface_GetItemsOfCategory_Params
{
	class UClass*                                      ItemCategory;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.WieldableItemSetInterface.GetItemIndexInCategorySet
struct UWieldableItemSetInterface_GetItemIndexInCategorySet_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ItemCategory;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.WieldableItemSetInterface.GetItemIndex
struct UWieldableItemSetInterface_GetItemIndex_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetInterface.GetItemFromSlot
struct UWieldableItemSetInterface_GetItemFromSlot_Params
{
	class UClass*                                      ItemCategory;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetInterface.GetItem
struct UWieldableItemSetInterface_GetItem_Params
{
	int                                                Index;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetInterface.ContainsItemOfType
struct UWieldableItemSetInterface_ContainsItemOfType_Params
{
	class UClass*                                      ItemType;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetInterface.Contains
struct UWieldableItemSetInterface_Contains_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetInterface.AddItemToSlot
struct UWieldableItemSetInterface_AddItemToSlot_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ItemCategory;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.WieldableItemSetInterface.AddItem
struct UWieldableItemSetInterface_AddItem_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.RadialInventoryComponent.SetDefaultRemappingPolicy
struct URadialInventoryComponent_SetDefaultRemappingPolicy_Params
{
};

// Function Athena.RadialInventoryComponent.ResetRadialInventory
struct URadialInventoryComponent_ResetRadialInventory_Params
{
};

// Function Athena.RadialInventoryComponent.OnRadialInventoryInput
struct URadialInventoryComponent_OnRadialInventoryInput_Params
{
	struct FVector2D                                   InputVector;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryComponent.IsHUDScriptingReady
struct URadialInventoryComponent_IsHUDScriptingReady_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryComponent.IsFullyOpened
struct URadialInventoryComponent_IsFullyOpened_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryComponent.GetSelectedRadialInventorySlot
struct URadialInventoryComponent_GetSelectedRadialInventorySlot_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryComponent.GetNumSlots
struct URadialInventoryComponent_GetNumSlots_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryComponent.GetMaxNumOfPages
struct URadialInventoryComponent_GetMaxNumOfPages_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryComponent.GetLastSelectedItem
struct URadialInventoryComponent_GetLastSelectedItem_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryComponent.GetInputModality
struct URadialInventoryComponent_GetInputModality_Params
{
	TEnumAsByte<ERadialMenuInputModality>              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryComponent.DeactivateRadialInventory
struct URadialInventoryComponent_DeactivateRadialInventory_Params
{
};

// Function Athena.RadialInventoryComponent.ConfirmRadialFullyOpened
struct URadialInventoryComponent_ConfirmRadialFullyOpened_Params
{
};

// Function Athena.RadialInventoryComponent.ActivateRadialInventory
struct URadialInventoryComponent_ActivateRadialInventory_Params
{
	TEnumAsByte<ERadialMenuInputModality>              InputModality;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.PhrasesRadialComponent.GetNumSlots
struct UPhrasesRadialComponent_GetNumSlots_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PhrasesRadialComponent.GetLastSelectedItem
struct UPhrasesRadialComponent_GetLastSelectedItem_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PhrasesRadialComponent.DeactivateRadialInventory
struct UPhrasesRadialComponent_DeactivateRadialInventory_Params
{
};

// Function Athena.RadialPhrasesAdjusterInterface.GetRadialPhrases
struct URadialPhrasesAdjusterInterface_GetRadialPhrases_Params
{
	class UPhrasesRadialDataAsset*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItem.SetItemWwiseSwitch
struct AWieldableItem_SetItemWwiseSwitch_Params
{
	struct FName                                       SwitchGroup;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FName                                       SwitchOption;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItem.SetItemWwiseRTPC
struct AWieldableItem_SetItemWwiseRTPC_Params
{
	struct FName                                       RTPCName;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItem.PostItemWwiseEvent
struct AWieldableItem_PostItemWwiseEvent_Params
{
	class UWwiseEvent*                                 Event;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItem.OnWielderHasLandedFromJumpBPImpl
struct AWieldableItem_OnWielderHasLandedFromJumpBPImpl_Params
{
};

// Function Athena.WieldableItem.IsUnderwater
struct AWieldableItem_IsUnderwater_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItem.GetWielderCharacter
struct AWieldableItem_GetWielderCharacter_Params
{
	class AAthenaCharacter*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItem.GetWielder
struct AWieldableItem_GetWielder_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItem.GetWieldableItemSize
struct AWieldableItem_GetWieldableItemSize_Params
{
	TEnumAsByte<EWieldableItemSize>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItem.GetLastKnownWielder
struct AWieldableItem_GetLastKnownWielder_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItem.GetItemSfxEmitter
struct AWieldableItem_GetItemSfxEmitter_Params
{
	struct FWwiseEmitter                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.WieldableItem.GetIsFirstPerson
struct AWieldableItem_GetIsFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialCompositeInputHandler.OnRadialY
struct URadialCompositeInputHandler_OnRadialY_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.RadialCompositeInputHandler.OnRadialX
struct URadialCompositeInputHandler_OnRadialX_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.RadialCompositeInputHandler.HandleAxisChange
struct URadialCompositeInputHandler_HandleAxisChange_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialCompositeInputHandler.HandleAnalogInputsIfBlocking
struct URadialCompositeInputHandler_HandleAnalogInputsIfBlocking_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.CloudDomeServiceInterface.UnregisterCloudDomeFromService
struct UCloudDomeServiceInterface_UnregisterCloudDomeFromService_Params
{
	TScriptInterface<class UCloudDomeInterface>        CloudDome;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CloudDomeServiceInterface.RegisterCloudDomeWithService
struct UCloudDomeServiceInterface_RegisterCloudDomeWithService_Params
{
	TScriptInterface<class UCloudDomeInterface>        CloudDome;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CloudDomeServiceInterface.GetNumberOfCloudDomes
struct UCloudDomeServiceInterface_GetNumberOfCloudDomes_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CloudDomeServiceInterface.GetCloudDome
struct UCloudDomeServiceInterface_GetCloudDome_Params
{
	int                                                CloudDomeIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TScriptInterface<class UCloudDomeInterface>        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CloudDomeServiceInterface.GetActualCloudDome
struct UCloudDomeServiceInterface_GetActualCloudDome_Params
{
	int                                                CloudDomeIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class ACloudDome*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaPlayerCharacter.WalkActivate
struct AAthenaPlayerCharacter_WalkActivate_Params
{
};

// Function Athena.AthenaPlayerCharacter.UseItem
struct AAthenaPlayerCharacter_UseItem_Params
{
	class UClass*                                      NotificationInputId;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaPlayerCharacter.SprintActivate
struct AAthenaPlayerCharacter_SprintActivate_Params
{
};

// Function Athena.AthenaPlayerCharacter.OnWieldedItem
struct AAthenaPlayerCharacter_OnWieldedItem_Params
{
};

// Function Athena.AthenaPlayerCharacter.OnRep_ReplicatedIsSprinting
struct AAthenaPlayerCharacter_OnRep_ReplicatedIsSprinting_Params
{
};

// Function Athena.AthenaPlayerCharacter.OnRep_OverridePirateDescSeed
struct AAthenaPlayerCharacter_OnRep_OverridePirateDescSeed_Params
{
};

// Function Athena.AthenaPlayerCharacter.OnMeshSet
struct AAthenaPlayerCharacter_OnMeshSet_Params
{
};

// Function Athena.AthenaPlayerCharacter.Multicast_OnKrakenTentacleDeath
struct AAthenaPlayerCharacter_Multicast_OnKrakenTentacleDeath_Params
{
	int                                                RemainingTentacles;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.IsSprintEnabled
struct AAthenaPlayerCharacter_IsSprintEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.IsInteractionValid
struct AAthenaPlayerCharacter_IsInteractionValid_Params
{
	class AActor*                                      InInteractable;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaPlayerCharacter.HasMeshSet
struct AAthenaPlayerCharacter_HasMeshSet_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.HasFinishedSpawning
struct AAthenaPlayerCharacter_HasFinishedSpawning_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.GetPawnViewLocation
struct AAthenaPlayerCharacter_GetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.GetLocalPlayerWorldRegionName
struct AAthenaPlayerCharacter_GetLocalPlayerWorldRegionName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.GetIsSprinting
struct AAthenaPlayerCharacter_GetIsSprinting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.GetIsDigitallyWalking
struct AAthenaPlayerCharacter_GetIsDigitallyWalking_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.GetFocusedInteractable
struct AAthenaPlayerCharacter_GetFocusedInteractable_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.GetFirstPersonMeshOffset
struct AAthenaPlayerCharacter_GetFirstPersonMeshOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.GetCurrentShipRegion
struct AAthenaPlayerCharacter_GetCurrentShipRegion_Params
{
	TEnumAsByte<EShipRegion>                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.ClientAddPlayerAsFriend
struct AAthenaPlayerCharacter_ClientAddPlayerAsFriend_Params
{
	class AAthenaPlayerCharacter*                      PlayerToAddAsFriend;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerCharacter.AllAnimationsLoaded
struct AAthenaPlayerCharacter_AllAnimationsLoaded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.VoyageParticipantComponent.OnRep_View
struct UVoyageParticipantComponent_OnRep_View_Params
{
};

// Function Athena.AthenaCharacterDockingFunctions.StartDockingCharacterWithActor
struct UAthenaCharacterDockingFunctions_StartDockingCharacterWithActor_Params
{
	struct FDocker                                     Docker;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class AAthenaCharacter*                            Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	class AActor*                                      Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0048
	float                                              DockDuration;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
};

// Function Athena.AthenaCharacterDodgeComponent.Server_RequestDodge
struct UAthenaCharacterDodgeComponent_Server_RequestDodge_Params
{
	struct FVector                                     Direction;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterDodgeComponent.Multicast_CharacterDodge
struct UAthenaCharacterDodgeComponent_Multicast_CharacterDodge_Params
{
	struct FVector                                     Direction;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterFunctions.TeleportPlayerToLocation
struct UAthenaCharacterFunctions_TeleportPlayerToLocation_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTeleportLocation                           Where;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function Athena.AthenaCharacterFunctions.GetTeleportLocationForPlayer
struct UAthenaCharacterFunctions_GetTeleportLocationForPlayer_Params
{
	class AAthenaCharacter*                            Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTeleportLocation                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Athena.AthenaCharacterFunctions.AllAnimationsLoadedForCharacter
struct UAthenaCharacterFunctions_AllAnimationsLoadedForCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacterKnockbackComponent.SetDisabled
struct UAthenaCharacterKnockbackComponent_SetDisabled_Params
{
	bool                                               IsDisabled;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterKnockbackComponent.KnockBack
struct UAthenaCharacterKnockbackComponent_KnockBack_Params
{
	struct FKnockBackInfo                              KnockBackInfo;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FVector                                     Direction;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0034
	float                                              NoWaterDragDuration;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	class UClass*                                      DamagerType;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0048
};

// Function Athena.AthenaCharacterKnockbackComponent.Client_PlayerKnockBackRPC
struct UAthenaCharacterKnockbackComponent_Client_PlayerKnockBackRPC_Params
{
	struct FKnockBackInfo                              KnockBackInfo;                                            // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
	struct FVector                                     Direction;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0034
	float                                              NoWaterDragDuration;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
};

// Function Athena.LocalDisturbanceFunctionLibrary.SetWindowSize
struct ULocalDisturbanceFunctionLibrary_SetWindowSize_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector2D                                   WindowSize;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.LocalDisturbanceFunctionLibrary.SetBlendValues
struct ULocalDisturbanceFunctionLibrary_SetBlendValues_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector4                                    BlendValues;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.LocalDisturbanceFunctionLibrary.AddDisturbance
struct ULocalDisturbanceFunctionLibrary_AddDisturbance_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     Position;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     Velocity;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              Size;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              GrassCutScale;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
};

// Function Athena.AthenaCharacterMovementComponent.SetMovementMode
struct UAthenaCharacterMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	unsigned char                                      NewCustomMode;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
};

// Function Athena.AthenaCharacterMovementComponent.SetErrorOnResolvePenetration
struct UAthenaCharacterMovementComponent_SetErrorOnResolvePenetration_Params
{
	bool                                               ErrorOnResolve;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterMovementComponent.HasValidAckedMoveClientOnly
struct UAthenaCharacterMovementComponent_HasValidAckedMoveClientOnly_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterMovementComponent.GetTimestampOfMostRecentPredictedMoveClientOnly
struct UAthenaCharacterMovementComponent_GetTimestampOfMostRecentPredictedMoveClientOnly_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterMovementComponent.GetTimestampOfLastAckedMoveClientOnly
struct UAthenaCharacterMovementComponent_GetTimestampOfLastAckedMoveClientOnly_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterMovementComponent.GetTerminalVelocity
struct UAthenaCharacterMovementComponent_GetTerminalVelocity_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterMovementComponent.GetMovementMode
struct UAthenaCharacterMovementComponent_GetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterMovementComponent.GetMaxSprintSpeed
struct UAthenaCharacterMovementComponent_GetMaxSprintSpeed_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterMovementComponent.GetMaxMoveSpeedScalar
struct UAthenaCharacterMovementComponent_GetMaxMoveSpeedScalar_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterMovementComponent.FindCurrentFloor
struct UAthenaCharacterMovementComponent_FindCurrentFloor_Params
{
};

// Function Athena.AthenaPlayerCharacterMovementComponent.RestoreAudioStateAfterFallDamage
struct UAthenaPlayerCharacterMovementComponent_RestoreAudioStateAfterFallDamage_Params
{
};

// Function Athena.AthenaCharacterTestFunctions.WaitUntilFullySpawned
struct UAthenaCharacterTestFunctions_WaitUntilFullySpawned_Params
{
	class AAthenaCharacter*                            Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
};

// Function Athena.AthenaCharacterTestFunctions.WaitUntilDocked
struct UAthenaCharacterTestFunctions_WaitUntilDocked_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function Athena.AthenaCharacterTestFunctions.WaitForTeleport
struct UAthenaCharacterTestFunctions_WaitForTeleport_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0010
};

// Function Athena.AthenaCharacterTestFunctions.WaitForMovementMode
struct UAthenaCharacterTestFunctions_WaitForMovementMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	TEnumAsByte<EMovementMode>                         WantedMovementMode;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	int                                                NumFramesInMovementMode;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
};

// Function Athena.AthenaCharacterTestFunctions.WaitForCustomMovementMode
struct UAthenaCharacterTestFunctions_WaitForCustomMovementMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	unsigned char                                      CustomMovementMode;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	int                                                NumFramesInMovementMode;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
};

// Function Athena.AthenaCharacterTestFunctions.TestAthenaCharacterHandleNotificationInput
struct UAthenaCharacterTestFunctions_TestAthenaCharacterHandleNotificationInput_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      Id;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacterTestFunctions.TestAthenaCharacterHandleAnalogInput
struct UAthenaCharacterTestFunctions_TestAthenaCharacterHandleAnalogInput_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      Id;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCharacterTestFunctions.TeleportToPosition
struct UAthenaCharacterTestFunctions_TeleportToPosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	class USceneComponent*                             TeleportBase;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0028
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	struct FRotator                                    Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 003C
	int                                                StreamOutLevel;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0048
	int                                                StreamInLevel;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 004C
};

// Function Athena.AthenaCharacterTestFunctions.SimulateButtonPress
struct UAthenaCharacterTestFunctions_SimulateButtonPress_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FKey                                        Button;                                                   // (CPF_Parm) 0008
};

// Function Athena.AthenaCharacterTestFunctions.SetupInputBinder
struct UAthenaCharacterTestFunctions_SetupInputBinder_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UCharacterInputBinder*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacterTestFunctions.SetupCharacterForMPTesting
struct UAthenaCharacterTestFunctions_SetupCharacterForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacterTestFunctions.SetupAthenaCharacterForInteractionTestByIndex
struct UAthenaCharacterTestFunctions_SetupAthenaCharacterForInteractionTestByIndex_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AAthenaCharacter*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCharacterTestFunctions.SetupAthenaCharacterForInteractionTest
struct UAthenaCharacterTestFunctions_SetupAthenaCharacterForInteractionTest_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AAthenaCharacter*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCharacterTestFunctions.SendCharacterMoveInput
struct UAthenaCharacterTestFunctions_SendCharacterMoveInput_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector2D                                   Movement;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacterTestFunctions.HasAnyoneGotInputBindings
struct UAthenaCharacterTestFunctions_HasAnyoneGotInputBindings_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCharacterTestFunctions.GetLocalAthenaCharacter
struct UAthenaCharacterTestFunctions_GetLocalAthenaCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AAthenaPlayerCharacter*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCharacterTestFunctions.GetClientPlayerCharacter
struct UAthenaCharacterTestFunctions_GetClientPlayerCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ClientId;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                SplitScreenIndex;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	class AAthenaPlayerCharacter*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCharacterTestFunctions.GetClientCharacter
struct UAthenaCharacterTestFunctions_GetClientCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ClientId;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                SplitScreenIndex;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	class AAthenaCharacter*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCharacterTestFunctions.ForceInteract
struct UAthenaCharacterTestFunctions_ForceInteract_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	class AActor*                                      Interactable;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	bool                                               WaitUntilFullyDocked;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function Athena.AthenaCharacterTestFunctions.CreateAndEquipItemDesc
struct UAthenaCharacterTestFunctions_CreateAndEquipItemDesc_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ItemDesc;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AItemInfo*                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCharacterTestFunctions.CreateAndAddItemDescToInventory
struct UAthenaCharacterTestFunctions_CreateAndAddItemDescToInventory_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ItemDesc;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AItemInfo*                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCharacterTestFunctions.ClearInputBindings
struct UAthenaCharacterTestFunctions_ClearInputBindings_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCharacterTestFunctions.ClearCharacterInteractionPolicies
struct UAthenaCharacterTestFunctions_ClearCharacterInteractionPolicies_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.WindTriggerChange
struct UAthenaCheatManager_WindTriggerChange_Params
{
	int                                                ChangeInstantly;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.WindSetVector
struct UAthenaCheatManager_WindSetVector_Params
{
	float                                              X;                                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Y;                                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.AthenaCheatManager.WindSetMagnitude
struct UAthenaCheatManager_WindSetMagnitude_Params
{
	float                                              Magnitude;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.WindSetDirection
struct UAthenaCheatManager_WindSetDirection_Params
{
	float                                              X;                                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Y;                                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.AthenaCheatManager.WindReloadParams
struct UAthenaCheatManager_WindReloadParams_Params
{
};

// Function Athena.AthenaCheatManager.WindPrintDirection
struct UAthenaCheatManager_WindPrintDirection_Params
{
};

// Function Athena.AthenaCheatManager.WindEnableDebug
struct UAthenaCheatManager_WindEnableDebug_Params
{
};

// Function Athena.AthenaCheatManager.WindDisableDebug
struct UAthenaCheatManager_WindDisableDebug_Params
{
};

// Function Athena.AthenaCheatManager.WindAlignWithCamera
struct UAthenaCheatManager_WindAlignWithCamera_Params
{
};

// Function Athena.AthenaCheatManager.Walk
struct UAthenaCheatManager_Walk_Params
{
};

// Function Athena.AthenaCheatManager.VomitWithType
struct UAthenaCheatManager_VomitWithType_Params
{
	struct FName                                       VomitType;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              Duration;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCheatManager.Vomit
struct UAthenaCheatManager_Vomit_Params
{
};

// Function Athena.AthenaCheatManager.UnlockAllEntitlements
struct UAthenaCheatManager_UnlockAllEntitlements_Params
{
	int                                                TrueFalse;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.TriggerRewardNotification
struct UAthenaCheatManager_TriggerRewardNotification_Params
{
	struct FName                                       Identifier;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.TriggerLandmarkReaction
struct UAthenaCheatManager_TriggerLandmarkReaction_Params
{
	int                                                ActionType;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.TriggerEmblemUnlockedMessage
struct UAthenaCheatManager_TriggerEmblemUnlockedMessage_Params
{
	struct FString                                     EmblemFriendlyName;                                       // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.TriggerControllerConnectionChange
struct UAthenaCheatManager_TriggerControllerConnectionChange_Params
{
	bool                                               IsConnect;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                UserId;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	int                                                ControllerId;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCheatManager.ToggleVideprinter
struct UAthenaCheatManager_ToggleVideprinter_Params
{
	struct FString                                     Id;                                                       // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.ToggleThirdPerson
struct UAthenaCheatManager_ToggleThirdPerson_Params
{
};

// Function Athena.AthenaCheatManager.ToggleFastShipControls
struct UAthenaCheatManager_ToggleFastShipControls_Params
{
};

// Function Athena.AthenaCheatManager.ToggleDrawShipSpeed
struct UAthenaCheatManager_ToggleDrawShipSpeed_Params
{
};

// Function Athena.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones
struct UAthenaCheatManager_ToggleDisplayCannonAISpawnerZones_Params
{
};

// Function Athena.AthenaCheatManager.ToggleDebugFlying
struct UAthenaCheatManager_ToggleDebugFlying_Params
{
};

// Function Athena.AthenaCheatManager.ToggleDeathCamera
struct UAthenaCheatManager_ToggleDeathCamera_Params
{
};

// Function Athena.AthenaCheatManager.ToggleCinematicCamera
struct UAthenaCheatManager_ToggleCinematicCamera_Params
{
};

// Function Athena.AthenaCheatManager.ToggleAttributeOverride
struct UAthenaCheatManager_ToggleAttributeOverride_Params
{
};

// Function Athena.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread
struct UAthenaCheatManager_TestCrashDumpCreationOnRunnableThread_Params
{
};

// Function Athena.AthenaCheatManager.TestCrashDumpCreationOnMainThread
struct UAthenaCheatManager_TestCrashDumpCreationOnMainThread_Params
{
};

// Function Athena.AthenaCheatManager.TeleportToShip
struct UAthenaCheatManager_TeleportToShip_Params
{
};

// Function Athena.AthenaCheatManager.TeleportToPlayerStart
struct UAthenaCheatManager_TeleportToPlayerStart_Params
{
};

// Function Athena.AthenaCheatManager.TeleportToNearestTreasureLocation
struct UAthenaCheatManager_TeleportToNearestTreasureLocation_Params
{
};

// Function Athena.AthenaCheatManager.TeleportToLocation
struct UAthenaCheatManager_TeleportToLocation_Params
{
	float                                              LocationX;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              LocationY;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              LocationZ;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCheatManager.TeleportToHideout
struct UAthenaCheatManager_TeleportToHideout_Params
{
};

// Function Athena.AthenaCheatManager.TeleportShip
struct UAthenaCheatManager_TeleportShip_Params
{
	float                                              X;                                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Y;                                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Z;                                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCheatManager.TeleportPlayerToSafety
struct UAthenaCheatManager_TeleportPlayerToSafety_Params
{
};

// Function Athena.AthenaCheatManager.TeleportPlayerToKraken
struct UAthenaCheatManager_TeleportPlayerToKraken_Params
{
};

// Function Athena.AthenaCheatManager.TeleportOutOfHideout
struct UAthenaCheatManager_TeleportOutOfHideout_Params
{
};

// Function Athena.AthenaCheatManager.TeleportCrewToShip
struct UAthenaCheatManager_TeleportCrewToShip_Params
{
	struct FString                                     CrewId;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor
struct UAthenaCheatManager_TeleportCrewToSafeSpawnLocationFromRemoteActor_Params
{
	struct FString                                     ActorIdString;                                            // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     CrewId;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0010
};

// Function Athena.AthenaCheatManager.TeleportCrewToSafeSpawnLocation
struct UAthenaCheatManager_TeleportCrewToSafeSpawnLocation_Params
{
	struct FString                                     CrewId;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.TeleportCrewMemberToShip
struct UAthenaCheatManager_TeleportCrewMemberToShip_Params
{
	struct FString                                     ActorIdString;                                            // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.TeleportAllPlayersToShip
struct UAthenaCheatManager_TeleportAllPlayersToShip_Params
{
};

// Function Athena.AthenaCheatManager.TeleportAllPlayersToPlayerStart
struct UAthenaCheatManager_TeleportAllPlayersToPlayerStart_Params
{
};

// Function Athena.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations
struct UAthenaCheatManager_TeleportAllCrewsToCrewSpawnLocations_Params
{
};

// Function Athena.AthenaCheatManager.TeleportActorToTeleportLocationActor
struct UAthenaCheatManager_TeleportActorToTeleportLocationActor_Params
{
	struct FString                                     ControllerActorIdString;                                  // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     TeleportLocationActorIdString;                            // (CPF_Parm, CPF_ZeroConstructor) 0010
};

// Function Athena.AthenaCheatManager.TeleportActorToLocation
struct UAthenaCheatManager_TeleportActorToLocation_Params
{
	struct FString                                     ActorIdString;                                            // (CPF_Parm, CPF_ZeroConstructor) 0000
	float                                              LocationX;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              LocationY;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              LocationZ;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              Yaw;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
};

// Function Athena.AthenaCheatManager.TeleportActorToIsland
struct UAthenaCheatManager_TeleportActorToIsland_Params
{
	struct FString                                     ActorIdString;                                            // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     IslandName;                                               // (CPF_Parm, CPF_ZeroConstructor) 0010
};

// Function Athena.AthenaCheatManager.TeleportActorToActorWithOffset
struct UAthenaCheatManager_TeleportActorToActorWithOffset_Params
{
	struct FString                                     ActorIdString;                                            // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     DestinationActorIdString;                                 // (CPF_Parm, CPF_ZeroConstructor) 0010
	float                                              OffsetX;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              OffsetY;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	float                                              OffsetZ;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function Athena.AthenaCheatManager.SuperSailor
struct UAthenaCheatManager_SuperSailor_Params
{
};

// Function Athena.AthenaCheatManager.StartVoyage
struct UAthenaCheatManager_StartVoyage_Params
{
	struct FString                                     SourceAssetName;                                          // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.StartDemoSession
struct UAthenaCheatManager_StartDemoSession_Params
{
};

// Function Athena.AthenaCheatManager.StartAllCrewVoyages
struct UAthenaCheatManager_StartAllCrewVoyages_Params
{
};

// Function Athena.AthenaCheatManager.SpinShip
struct UAthenaCheatManager_SpinShip_Params
{
	float                                              YawSpdInDegreesPerSecond;                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SpawnTreasureChestOfType
struct UAthenaCheatManager_SpawnTreasureChestOfType_Params
{
	struct FString                                     ChestTypeString;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SpawnTreasureArtifact
struct UAthenaCheatManager_SpawnTreasureArtifact_Params
{
	struct FString                                     TypeString;                                               // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SpawnStrongholdKey
struct UAthenaCheatManager_SpawnStrongholdKey_Params
{
};

// Function Athena.AthenaCheatManager.SpawnSmallShipAtIsland
struct UAthenaCheatManager_SpawnSmallShipAtIsland_Params
{
	struct FString                                     IslandName;                                               // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SpawnSmallShip
struct UAthenaCheatManager_SpawnSmallShip_Params
{
	float                                              SpawnLocationX;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              SpawnLocationY;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              SpawnLocationZ;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              SpawnYaw;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.AthenaCheatManager.SpawnShipwreck
struct UAthenaCheatManager_SpawnShipwreck_Params
{
	float                                              SpawnLocationX;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              SpawnLocationY;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              SpawnLocationZ;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable
struct UAthenaCheatManager_SpawnShipInFrontOfNearestAIInteractable_Params
{
	float                                              XProportion;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              YProportion;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Yaw;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCheatManager.SpawnShipFromDesc
struct UAthenaCheatManager_SpawnShipFromDesc_Params
{
	struct FString                                     InShipDescAssetString;                                    // (CPF_Parm, CPF_ZeroConstructor) 0000
	float                                              SpawnLocationX;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              SpawnLocationY;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              SpawnLocationZ;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              SpawnYaw;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
};

// Function Athena.AthenaCheatManager.SpawnShipAtIsland
struct UAthenaCheatManager_SpawnShipAtIsland_Params
{
	struct FString                                     IslandName;                                               // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SpawnShip
struct UAthenaCheatManager_SpawnShip_Params
{
	float                                              SpawnLocationX;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              SpawnLocationY;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              SpawnLocationZ;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              SpawnYaw;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.AthenaCheatManager.SpawnNumberOfAI
struct UAthenaCheatManager_SpawnNumberOfAI_Params
{
	struct FString                                     AITypeString;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
	int                                                NumToSpawn;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCheatManager.SpawnMessageInABottle
struct UAthenaCheatManager_SpawnMessageInABottle_Params
{
	struct FString                                     MessageInABottleTypeString;                               // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SpawnMermaid
struct UAthenaCheatManager_SpawnMermaid_Params
{
};

// Function Athena.AthenaCheatManager.SpawnMerchantFauna
struct UAthenaCheatManager_SpawnMerchantFauna_Params
{
	struct FString                                     FaunaTypeString;                                          // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SpawnMerchantCrate
struct UAthenaCheatManager_SpawnMerchantCrate_Params
{
	struct FString                                     MerchantCrateTypeString;                                  // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SpawnMerchantCargo
struct UAthenaCheatManager_SpawnMerchantCargo_Params
{
	struct FString                                     MerchantCargoTypeString;                                  // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles
struct UAthenaCheatManager_SpawnKrakenAtCurrentLocationWithNumTentacles_Params
{
	uint32_t                                           NumTentacles;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SpawnKrakenAtCurrentLocation
struct UAthenaCheatManager_SpawnKrakenAtCurrentLocation_Params
{
};

// Function Athena.AthenaCheatManager.SpawnKraken
struct UAthenaCheatManager_SpawnKraken_Params
{
};

// Function Athena.AthenaCheatManager.SpawnBountyReward
struct UAthenaCheatManager_SpawnBountyReward_Params
{
	struct FString                                     BountyTypeString;                                         // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SpawnBarrelGroup
struct UAthenaCheatManager_SpawnBarrelGroup_Params
{
};

// Function Athena.AthenaCheatManager.SpawnAINoTrigger
struct UAthenaCheatManager_SpawnAINoTrigger_Params
{
	struct FString                                     AIDescString;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SpawnAIBySpawner
struct UAthenaCheatManager_SpawnAIBySpawner_Params
{
};

// Function Athena.AthenaCheatManager.SpawnAIAtLocationDelayed
struct UAthenaCheatManager_SpawnAIAtLocationDelayed_Params
{
	struct FString                                     AITypeString;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
	float                                              LocationX;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              LocationY;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              LocationZ;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              Yaw;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	float                                              Delay;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function Athena.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed
struct UAthenaCheatManager_SpawnAIAtCurrentLocationDelayed_Params
{
	struct FString                                     AITypeString;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
	float                                              Delay;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCheatManager.SpawnAI
struct UAthenaCheatManager_SpawnAI_Params
{
	struct FString                                     AIDescString;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SlowMotionOverride
struct UAthenaCheatManager_SlowMotionOverride_Params
{
	bool                                               InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SinkShipWithKeelOverIndex
struct UAthenaCheatManager_SinkShipWithKeelOverIndex_Params
{
	int                                                KeelOverConfigIndex;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SinkShipByActorId
struct UAthenaCheatManager_SinkShipByActorId_Params
{
	struct FString                                     ShipActorIdString;                                        // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SinkShip
struct UAthenaCheatManager_SinkShip_Params
{
};

// Function Athena.AthenaCheatManager.SinkAllBarrels
struct UAthenaCheatManager_SinkAllBarrels_Params
{
};

// Function Athena.AthenaCheatManager.ShowRandomCrewMemberGamerCard
struct UAthenaCheatManager_ShowRandomCrewMemberGamerCard_Params
{
};

// Function Athena.AthenaCheatManager.ShowAllItemsInRadialInventory
struct UAthenaCheatManager_ShowAllItemsInRadialInventory_Params
{
};

// Function Athena.AthenaCheatManager.ShipUpdateMassProperies
struct UAthenaCheatManager_ShipUpdateMassProperies_Params
{
};

// Function Athena.AthenaCheatManager.SetWheelAngle
struct UAthenaCheatManager_SetWheelAngle_Params
{
	float                                              Angle;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetWeaponsLockedOut
struct UAthenaCheatManager_SetWeaponsLockedOut_Params
{
	bool                                               WeaponsLockedOut;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetWaveFlag
struct UAthenaCheatManager_SetWaveFlag_Params
{
	int                                                InFlag;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetWaterWaveParams
struct UAthenaCheatManager_SetWaterWaveParams_Params
{
	float                                              Amplitude;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              WaveLength;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              PropagationSpeed;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCheatManager.SetVoiceChatEndpointXAudio2
struct UAthenaCheatManager_SetVoiceChatEndpointXAudio2_Params
{
};

// Function Athena.AthenaCheatManager.SetVoiceChatEndpointWwise
struct UAthenaCheatManager_SetVoiceChatEndpointWwise_Params
{
};

// Function Athena.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise
struct UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUseWwise_Params
{
};

// Function Athena.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform
struct UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUsePlatform_Params
{
};

// Function Athena.AthenaCheatManager.SetTimeScalar
struct UAthenaCheatManager_SetTimeScalar_Params
{
	float                                              TimeScalar;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetTimeHoursAndMinutes
struct UAthenaCheatManager_SetTimeHoursAndMinutes_Params
{
	int                                                Hours;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Minutes;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.AthenaCheatManager.SetTime
struct UAthenaCheatManager_SetTime_Params
{
	int                                                Hours;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetShipYaw
struct UAthenaCheatManager_SetShipYaw_Params
{
	float                                              Yaw;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetShipBuoyancyBlend
struct UAthenaCheatManager_SetShipBuoyancyBlend_Params
{
	float                                              UnaryBlend;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetSailLoweredProportions
struct UAthenaCheatManager_SetSailLoweredProportions_Params
{
	float                                              Proportion;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetSailAngles
struct UAthenaCheatManager_SetSailAngles_Params
{
	float                                              Angle;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetPreventLeakingOnAllDamageZones
struct UAthenaCheatManager_SetPreventLeakingOnAllDamageZones_Params
{
	bool                                               PreventLeaking;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetPlayerVisibleToAI
struct UAthenaCheatManager_SetPlayerVisibleToAI_Params
{
};

// Function Athena.AthenaCheatManager.SetPlayerInvisibleToAI
struct UAthenaCheatManager_SetPlayerInvisibleToAI_Params
{
};

// Function Athena.AthenaCheatManager.SetPhotoMode
struct UAthenaCheatManager_SetPhotoMode_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetNonCrewChatSpatialisation
struct UAthenaCheatManager_SetNonCrewChatSpatialisation_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetIdleDisconnectEnabled
struct UAthenaCheatManager_SetIdleDisconnectEnabled_Params
{
	bool                                               Enabled;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetGrogSecondary
struct UAthenaCheatManager_SetGrogSecondary_Params
{
	bool                                               InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetFOV
struct UAthenaCheatManager_SetFOV_Params
{
	float                                              InNewFOV;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel
struct UAthenaCheatManager_SetDebugCameraUseProjectileCollisionChannel_Params
{
	bool                                               bUseProjectileChannel;                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetDeathPenaltyRespawnTimer
struct UAthenaCheatManager_SetDeathPenaltyRespawnTimer_Params
{
	float                                              InSpawnTimer;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetCapstanPosition
struct UAthenaCheatManager_SetCapstanPosition_Params
{
	float                                              Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.SetAITeamAttitude
struct UAthenaCheatManager_SetAITeamAttitude_Params
{
	struct FString                                     TeamAString;                                              // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     TeamBString;                                              // (CPF_Parm, CPF_ZeroConstructor) 0010
	struct FString                                     AttitudeString;                                           // (CPF_Parm, CPF_ZeroConstructor) 0020
};

// Function Athena.AthenaCheatManager.SendStatEvent
struct UAthenaCheatManager_SendStatEvent_Params
{
	struct FString                                     StatName;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0000
	uint64_t                                           StatValue;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCheatManager.SendRewardRequestEvent
struct UAthenaCheatManager_SendRewardRequestEvent_Params
{
	struct FString                                     CompanyNameAndRewardIdSeparatedByColon;                   // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.SailShip
struct UAthenaCheatManager_SailShip_Params
{
};

// Function Athena.AthenaCheatManager.RewindPhysicsSceneBy
struct UAthenaCheatManager_RewindPhysicsSceneBy_Params
{
	float                                              SecondsToRewindBy;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.RestockIslandBarrels
struct UAthenaCheatManager_RestockIslandBarrels_Params
{
};

// Function Athena.AthenaCheatManager.RestockAllReplenishables
struct UAthenaCheatManager_RestockAllReplenishables_Params
{
};

// Function Athena.AthenaCheatManager.RespawnAllIslandItemSpawners
struct UAthenaCheatManager_RespawnAllIslandItemSpawners_Params
{
};

// Function Athena.AthenaCheatManager.ResetStats
struct UAthenaCheatManager_ResetStats_Params
{
};

// Function Athena.AthenaCheatManager.ResetMouseDelta
struct UAthenaCheatManager_ResetMouseDelta_Params
{
};

// Function Athena.AthenaCheatManager.ResetDemoSession
struct UAthenaCheatManager_ResetDemoSession_Params
{
	bool                                               StartNewSession;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.ResetAITeamAttitudes
struct UAthenaCheatManager_ResetAITeamAttitudes_Params
{
};

// Function Athena.AthenaCheatManager.ReplenishShip
struct UAthenaCheatManager_ReplenishShip_Params
{
};

// Function Athena.AthenaCheatManager.ReplaceShipWithSmallShip
struct UAthenaCheatManager_ReplaceShipWithSmallShip_Params
{
	struct FString                                     ShipActorIdConsoleString;                                 // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.RenameTreasure
struct UAthenaCheatManager_RenameTreasure_Params
{
	struct FString                                     InVendorName;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.RemoveItemInSlot
struct UAthenaCheatManager_RemoveItemInSlot_Params
{
	int                                                SlotIndex;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.PushShip
struct UAthenaCheatManager_PushShip_Params
{
	float                                              FwdSpdInMetersPerSecond;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.PullLatestEmblemProgress
struct UAthenaCheatManager_PullLatestEmblemProgress_Params
{
};

// Function Athena.AthenaCheatManager.PrintTime
struct UAthenaCheatManager_PrintTime_Params
{
};

// Function Athena.AthenaCheatManager.PrintAllNetworkActors
struct UAthenaCheatManager_PrintAllNetworkActors_Params
{
};

// Function Athena.AthenaCheatManager.OverrideShipPartFromCatalogue
struct UAthenaCheatManager_OverrideShipPartFromCatalogue_Params
{
	struct FString                                     InShipActorIdConsoleString;                               // (CPF_Parm, CPF_ZeroConstructor) 0000
	int                                                InCataloguePartIndex;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	int                                                InCataloguePartCustomisationIndex;                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
};

// Function Athena.AthenaCheatManager.OpenSkeletonFortDoor
struct UAthenaCheatManager_OpenSkeletonFortDoor_Params
{
};

// Function Athena.AthenaCheatManager.MessageBoxOnGraphicsThreadTest
struct UAthenaCheatManager_MessageBoxOnGraphicsThreadTest_Params
{
};

// Function Athena.AthenaCheatManager.MakeSharksBrainDead
struct UAthenaCheatManager_MakeSharksBrainDead_Params
{
};

// Function Athena.AthenaCheatManager.LogShipHierarchy
struct UAthenaCheatManager_LogShipHierarchy_Params
{
};

// Function Athena.AthenaCheatManager.LogServerShipHierarchy
struct UAthenaCheatManager_LogServerShipHierarchy_Params
{
};

// Function Athena.AthenaCheatManager.LogAITeamAttitudes
struct UAthenaCheatManager_LogAITeamAttitudes_Params
{
};

// Function Athena.AthenaCheatManager.LocallyUnBreakLeg
struct UAthenaCheatManager_LocallyUnBreakLeg_Params
{
};

// Function Athena.AthenaCheatManager.LaunchPlayer
struct UAthenaCheatManager_LaunchPlayer_Params
{
	float                                              Velocity;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Angle;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer
struct UAthenaCheatManager_KrakenAnimatedTentacleThrowPlayer_Params
{
};

// Function Athena.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage
struct UAthenaCheatManager_KrakenAnimatedTentacleTakeDamage_Params
{
	float                                              Damage;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer
struct UAthenaCheatManager_KrakenAnimatedTentacleSwallowPlayer_Params
{
};

// Function Athena.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer
struct UAthenaCheatManager_KrakenAnimatedTentacleSuckPlayer_Params
{
};

// Function Athena.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer
struct UAthenaCheatManager_KrakenAnimatedTentaclePowerSlamPlayer_Params
{
};

// Function Athena.AthenaCheatManager.KrakenAnimatedTentacleKill
struct UAthenaCheatManager_KrakenAnimatedTentacleKill_Params
{
};

// Function Athena.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer
struct UAthenaCheatManager_KrakenAnimatedTentacleIngestPlayer_Params
{
};

// Function Athena.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer
struct UAthenaCheatManager_KrakenAnimatedTentacleDropPlayer_Params
{
};

// Function Athena.AthenaCheatManager.KrakenAnimatedTentacleDespawn
struct UAthenaCheatManager_KrakenAnimatedTentacleDespawn_Params
{
};

// Function Athena.AthenaCheatManager.KrakenAnimatedTentacleDefeat
struct UAthenaCheatManager_KrakenAnimatedTentacleDefeat_Params
{
};

// Function Athena.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState
struct UAthenaCheatManager_KrakenAnimatedTentacleChangePlayerHoldState_Params
{
	struct FString                                     HoldState;                                                // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.KillPlayer
struct UAthenaCheatManager_KillPlayer_Params
{
};

// Function Athena.AthenaCheatManager.KillCrew
struct UAthenaCheatManager_KillCrew_Params
{
	struct FString                                     CrewId;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.KillAllPlayers
struct UAthenaCheatManager_KillAllPlayers_Params
{
};

// Function Athena.AthenaCheatManager.KillAllCrews
struct UAthenaCheatManager_KillAllCrews_Params
{
};

// Function Athena.AthenaCheatManager.IPGOverride
struct UAthenaCheatManager_IPGOverride_Params
{
	struct FName                                       BodyShape;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              Distance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCheatManager.IPGLoad
struct UAthenaCheatManager_IPGLoad_Params
{
	struct FString                                     path;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.InfiniteGunAmmo
struct UAthenaCheatManager_InfiniteGunAmmo_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.IncrementTime
struct UAthenaCheatManager_IncrementTime_Params
{
	int                                                Hours;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Minutes;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.AthenaCheatManager.HealthReset
struct UAthenaCheatManager_HealthReset_Params
{
};

// Function Athena.AthenaCheatManager.HealthAdjust
struct UAthenaCheatManager_HealthAdjust_Params
{
	float                                              Amount;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.God
struct UAthenaCheatManager_God_Params
{
};

// Function Athena.AthenaCheatManager.GenerateShipwrecks
struct UAthenaCheatManager_GenerateShipwrecks_Params
{
};

// Function Athena.AthenaCheatManager.ForceOpenShop
struct UAthenaCheatManager_ForceOpenShop_Params
{
};

// Function Athena.AthenaCheatManager.ForceCloseShop
struct UAthenaCheatManager_ForceCloseShop_Params
{
};

// Function Athena.AthenaCheatManager.Fly
struct UAthenaCheatManager_Fly_Params
{
};

// Function Athena.AthenaCheatManager.FloodShipWithKeelOverIndex
struct UAthenaCheatManager_FloodShipWithKeelOverIndex_Params
{
	float                                              NormalisedWaterAmount;                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                KeelOverConfigIndex;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.AthenaCheatManager.FloodShip
struct UAthenaCheatManager_FloodShip_Params
{
	float                                              NormalisedWaterAmount;                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.EquipPirateTitle
struct UAthenaCheatManager_EquipPirateTitle_Params
{
	struct FString                                     PirateTitleType;                                          // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.EquipCompassInLoadout
struct UAthenaCheatManager_EquipCompassInLoadout_Params
{
};

// Function Athena.AthenaCheatManager.EndDemoSession
struct UAthenaCheatManager_EndDemoSession_Params
{
};

// Function Athena.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals
struct UAthenaCheatManager_EnableVoiceChatMeteringForOutgoingSignals_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals
struct UAthenaCheatManager_EnableVoiceChatMeteringForIncomingSignals_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.EnableNTP
struct UAthenaCheatManager_EnableNTP_Params
{
	bool                                               Enable;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.EnableMermaidSpawning
struct UAthenaCheatManager_EnableMermaidSpawning_Params
{
	int                                                Enable;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.EnableMermaidDeletion
struct UAthenaCheatManager_EnableMermaidDeletion_Params
{
	int                                                Enable;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.EnableHeadphoneMixing
struct UAthenaCheatManager_EnableHeadphoneMixing_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.EnableCinematicCamera
struct UAthenaCheatManager_EnableCinematicCamera_Params
{
};

// Function Athena.AthenaCheatManager.EnableBeaconOnAllMermaids
struct UAthenaCheatManager_EnableBeaconOnAllMermaids_Params
{
	int                                                Enable;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.DrawVideprinter
struct UAthenaCheatManager_DrawVideprinter_Params
{
	struct FString                                     Id;                                                       // (CPF_Parm, CPF_ZeroConstructor) 0000
	bool                                               Active;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCheatManager.DrawTreasureDebug
struct UAthenaCheatManager_DrawTreasureDebug_Params
{
	int                                                Enabled;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.DrawTemporaryLandmarkDebug
struct UAthenaCheatManager_DrawTemporaryLandmarkDebug_Params
{
	bool                                               Enabled;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.DrawShipwreckDebugBeacons
struct UAthenaCheatManager_DrawShipwreckDebugBeacons_Params
{
	bool                                               bEnabled;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.DrawNearbyAISpawnPointsRanged
struct UAthenaCheatManager_DrawNearbyAISpawnPointsRanged_Params
{
	float                                              Range;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.DrawNearbyAISpawnPoints
struct UAthenaCheatManager_DrawNearbyAISpawnPoints_Params
{
};

// Function Athena.AthenaCheatManager.DisplaySingleEmblemProgress
struct UAthenaCheatManager_DisplaySingleEmblemProgress_Params
{
	struct FString                                     StatName;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults
struct UAthenaCheatManager_DisplayServersideHitsAtPlayerPosWithDefaults_Params
{
};

// Function Athena.AthenaCheatManager.DisplayServersideHitsAtPlayerPos
struct UAthenaCheatManager_DisplayServersideHitsAtPlayerPos_Params
{
	uint32_t                                           NumSamplesPerDimension;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              DistanceBetweenSamples;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              TestHeight;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland
struct UAthenaCheatManager_DisplayNonVagueNonUniqueLandmarksForIsland_Params
{
	bool                                               Enabled;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer
struct UAthenaCheatManager_DisplayLandmarkValidTreasureLocationsForPlayer_Params
{
};

// Function Athena.AthenaCheatManager.DisplayLandmarkRegions
struct UAthenaCheatManager_DisplayLandmarkRegions_Params
{
};

// Function Athena.AthenaCheatManager.DisplayLandmarkNames
struct UAthenaCheatManager_DisplayLandmarkNames_Params
{
};

// Function Athena.AthenaCheatManager.DisplayFallDamageDebug
struct UAthenaCheatManager_DisplayFallDamageDebug_Params
{
	int                                                Enable;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.DisplayDrunkenness
struct UAthenaCheatManager_DisplayDrunkenness_Params
{
	bool                                               Flag;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.DisableCinematicCamera
struct UAthenaCheatManager_DisableCinematicCamera_Params
{
};

// Function Athena.AthenaCheatManager.DestroyShip
struct UAthenaCheatManager_DestroyShip_Params
{
	struct FString                                     ShipActorIdConsoleString;                                 // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.DestroyMyShip
struct UAthenaCheatManager_DestroyMyShip_Params
{
};

// Function Athena.AthenaCheatManager.DestroyKraken
struct UAthenaCheatManager_DestroyKraken_Params
{
};

// Function Athena.AthenaCheatManager.DestroyAllTreasureChests
struct UAthenaCheatManager_DestroyAllTreasureChests_Params
{
};

// Function Athena.AthenaCheatManager.DestroyAllShips
struct UAthenaCheatManager_DestroyAllShips_Params
{
};

// Function Athena.AthenaCheatManager.DespawnNumberOfAI
struct UAthenaCheatManager_DespawnNumberOfAI_Params
{
	struct FString                                     AITypeString;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
	int                                                NumToDespawn;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.AthenaCheatManager.DespawnFirstAI
struct UAthenaCheatManager_DespawnFirstAI_Params
{
};

// Function Athena.AthenaCheatManager.DespawnAI
struct UAthenaCheatManager_DespawnAI_Params
{
	struct FString                                     AITypeString;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaCheatManager.DeleteVoyageHistory
struct UAthenaCheatManager_DeleteVoyageHistory_Params
{
};

// Function Athena.AthenaCheatManager.DeleteAllMermaids
struct UAthenaCheatManager_DeleteAllMermaids_Params
{
};

// Function Athena.AthenaCheatManager.DebugIslandDelta
struct UAthenaCheatManager_DebugIslandDelta_Params
{
};

// Function Athena.AthenaCheatManager.DamageShipFromRemoteActor
struct UAthenaCheatManager_DamageShipFromRemoteActor_Params
{
	struct FString                                     ActorIdString;                                            // (CPF_Parm, CPF_ZeroConstructor) 0000
	float                                              Strength;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              CameraLocationX;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              CameraLocationY;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              CameraLocationZ;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	float                                              CameraForwardDirectionX;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              CameraForwardDirectionY;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	float                                              CameraForwardDirectionZ;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function Athena.AthenaCheatManager.DamageShip
struct UAthenaCheatManager_DamageShip_Params
{
	float                                              Strength;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.DamagePlayerFromRemoteActor
struct UAthenaCheatManager_DamagePlayerFromRemoteActor_Params
{
	struct FString                                     ActorIdString;                                            // (CPF_Parm, CPF_ZeroConstructor) 0000
	float                                              Strength;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              CameraLocationX;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              CameraLocationY;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              CameraLocationZ;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	float                                              CameraForwardDirectionX;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              CameraForwardDirectionY;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	float                                              CameraForwardDirectionZ;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function Athena.AthenaCheatManager.DamagePlayer
struct UAthenaCheatManager_DamagePlayer_Params
{
	float                                              Strength;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.CureAllAilings
struct UAthenaCheatManager_CureAllAilings_Params
{
};

// Function Athena.AthenaCheatManager.CompleteVoyage
struct UAthenaCheatManager_CompleteVoyage_Params
{
};

// Function Athena.AthenaCheatManager.CompleteActiveQuests
struct UAthenaCheatManager_CompleteActiveQuests_Params
{
};

// Function Athena.AthenaCheatManager.CloseSkeletonFortDoor
struct UAthenaCheatManager_CloseSkeletonFortDoor_Params
{
};

// Function Athena.AthenaCheatManager.ClearVoiceChatMeters
struct UAthenaCheatManager_ClearVoiceChatMeters_Params
{
};

// Function Athena.AthenaCheatManager.ClearSlowMotionOverride
struct UAthenaCheatManager_ClearSlowMotionOverride_Params
{
};

// Function Athena.AthenaCheatManager.ClearShipRestockingTimeouts
struct UAthenaCheatManager_ClearShipRestockingTimeouts_Params
{
};

// Function Athena.AthenaCheatManager.ClearGrogSecondary
struct UAthenaCheatManager_ClearGrogSecondary_Params
{
};

// Function Athena.AthenaCheatManager.ClearAllItemsInInventory
struct UAthenaCheatManager_ClearAllItemsInInventory_Params
{
};

// Function Athena.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos
struct UAthenaCheatManager_CheckLandmarkValidTreasureLocationsAtPlayerPos_Params
{
};

// Function Athena.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation
struct UAthenaCheatManager_CheckLandmarkRelativeToIslandCalculation_Params
{
};

// Function Athena.AthenaCheatManager.CancelVoyage
struct UAthenaCheatManager_CancelVoyage_Params
{
};

// Function Athena.AthenaCheatManager.CancelAllCrewVoyages
struct UAthenaCheatManager_CancelAllCrewVoyages_Params
{
};

// Function Athena.AthenaCheatManager.BreakLeg
struct UAthenaCheatManager_BreakLeg_Params
{
};

// Function Athena.AthenaCheatManager.ApplyVenomWithParams
struct UAthenaCheatManager_ApplyVenomWithParams_Params
{
	float                                              InitialDamage;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              DamagePerSecond;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              DamageOverTimeDuration;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaCheatManager.ApplyVenom
struct UAthenaCheatManager_ApplyVenom_Params
{
};

// Function Athena.AthenaCheatManager.ApplyDamageToAllDamageZones
struct UAthenaCheatManager_ApplyDamageToAllDamageZones_Params
{
	float                                              Damage;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaCheatManager.AddShipToCrew
struct UAthenaCheatManager_AddShipToCrew_Params
{
	struct FString                                     ActorIdString;                                            // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     CrewId;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0010
};

// Function Athena.AthenaCheatManager.AddPlayerToCrew
struct UAthenaCheatManager_AddPlayerToCrew_Params
{
	struct FString                                     ActorIdString;                                            // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     CrewId;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0010
};

// Function Athena.AthenaCheatManager.AddDrunkenness
struct UAthenaCheatManager_AddDrunkenness_Params
{
	int                                                DrunkennessType;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              DrunkennessChange;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.AthenaCheatManager.ActivateSkellyFort
struct UAthenaCheatManager_ActivateSkellyFort_Params
{
	struct FString                                     FortName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function Athena.AthenaGameInstance.SetClientOnboardingEnabled
struct UAthenaGameInstance_SetClientOnboardingEnabled_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaGameMode.SetStorageContainerRefreshInterval
struct AAthenaGameMode_SetStorageContainerRefreshInterval_Params
{
	float                                              InRefreshInterval;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaGameMode.SetRespawnTimer
struct AAthenaGameMode_SetRespawnTimer_Params
{
	float                                              InRespawnTimer;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaGameMode.ResetStorageContainers
struct AAthenaGameMode_ResetStorageContainers_Params
{
};

// Function Athena.AthenaGameMode.RequestDemoSessionReset
struct AAthenaGameMode_RequestDemoSessionReset_Params
{
	class AAthenaPlayerController*                     AthenaPlayerController;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               InStartNewSession;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaGameMode.IsPlayerOnGhostShip
struct AAthenaGameMode_IsPlayerOnGhostShip_Params
{
	class APawn*                                       PlayerPawn;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaPlayerCharacterTestFunctions.ForceShipRegion
struct UAthenaPlayerCharacterTestFunctions_ForceShipRegion_Params
{
	class AAthenaPlayerCharacter*                      AthenaPlayerCharacter;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EShipRegion>                           ShipRegion;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaPlayerCharacterTestFunctions.ForceReCalculateShipRegion
struct UAthenaPlayerCharacterTestFunctions_ForceReCalculateShipRegion_Params
{
	class AAthenaPlayerCharacter*                      AthenaPlayerCharacter;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllableInterface.TakenControl
struct UControllableInterface_TakenControl_Params
{
	class AActor*                                      Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllableInterface.RequestStateChange
struct UControllableInterface_RequestStateChange_Params
{
	class AActor*                                      Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllableInterface.RequestRelinquishControl
struct UControllableInterface_RequestRelinquishControl_Params
{
};

// Function Athena.ControllableInterface.RelinquishedController
struct UControllableInterface_RelinquishedController_Params
{
	class AActor*                                      Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MountedWeaponInterface.GetYaw
struct UMountedWeaponInterface_GetYaw_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MountedWeaponInterface.GetPitch
struct UMountedWeaponInterface_GetPitch_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LaunchableProjectile.TrailSfxIsActive
struct ALaunchableProjectile_TrailSfxIsActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LaunchableProjectile.TrailIsActive
struct ALaunchableProjectile_TrailIsActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LaunchableProjectile.OnStop
struct ALaunchableProjectile_OnStop_Params
{
	struct FHitResult                                  Result;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.LaunchableProjectile.OnReachedDeepWater
struct ALaunchableProjectile_OnReachedDeepWater_Params
{
};

// Function Athena.LaunchableProjectile.OnImpactEffects
struct ALaunchableProjectile_OnImpactEffects_Params
{
	struct FHitResult                                  Result;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.LaunchableProjectile.OnImpact
struct ALaunchableProjectile_OnImpact_Params
{
	struct FHitResult                                  Result;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.LaunchableProjectile.OnExitWater
struct ALaunchableProjectile_OnExitWater_Params
{
};

// Function Athena.LaunchableProjectile.OnEnterWater
struct ALaunchableProjectile_OnEnterWater_Params
{
};

// Function Athena.LaunchableProjectile.LaunchWithOffset
struct ALaunchableProjectile_LaunchWithOffset_Params
{
	struct FVector                                     LaunchVelocity;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     SpawnLaunchOffset;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
};

// Function Athena.LaunchableProjectile.IsInWater
struct ALaunchableProjectile_IsInWater_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ReplicatedShipPartCustomizationComponent.OnReplicate_PartDesc
struct UReplicatedShipPartCustomizationComponent_OnReplicate_PartDesc_Params
{
};

// Function Athena.Cannon.Server_RequestAim
struct ACannon_Server_RequestAim_Params
{
	float                                              NewPitch;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              NewYaw;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.Cannon.Server_Fire
struct ACannon_Server_Fire_Params
{
	float                                              InPitch;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InYaw;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.Cannon.OnRep_ServerYaw
struct ACannon_OnRep_ServerYaw_Params
{
};

// Function Athena.Cannon.OnRep_ServerPitch
struct ACannon_OnRep_ServerPitch_Params
{
};

// Function Athena.Cannon.OnCannonDescLoaded
struct ACannon_OnCannonDescLoaded_Params
{
	class UCannonDescAsset*                            CannonDesc;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Cannon.Multicast_OnPlayerUnloaded
struct ACannon_Multicast_OnPlayerUnloaded_Params
{
	class AActor*                                      UnloadedPlayer;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Cannon.Multicast_OnPlayerLoaded
struct ACannon_Multicast_OnPlayerLoaded_Params
{
	class AActor*                                      LoadedPlayer;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Cannon.Multicast_FireProjectile
struct ACannon_Multicast_FireProjectile_Params
{
	class AActor*                                      InInstigator;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     AuthoritySpawnLocation;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	struct FVector                                     LaunchVelocity;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0014
};

// Function Athena.Cannon.Multicast_FirePlayer
struct ACannon_Multicast_FirePlayer_Params
{
	class AActor*                                      InInstigator;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               InstigatorWasControllingActor;                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.Cannon.IsReadyToFire
struct ACannon_IsReadyToFire_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Cannon.HandleYawInput
struct ACannon_HandleYawInput_Params
{
	float                                              YawInput;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Cannon.HandlePitchInput
struct ACannon_HandlePitchInput_Params
{
	float                                              PitchInput;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Cannon.GetNormalisedYawRate
struct ACannon_GetNormalisedYawRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Cannon.GetNormalisedPitchRate
struct ACannon_GetNormalisedPitchRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Cannon.ForceAimCannon
struct ACannon_ForceAimCannon_Params
{
	float                                              Pitch;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Yaw;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.Cannon.Fire
struct ACannon_Fire_Params
{
};

// Function Athena.AthenaPlayerController.Server_ReportPlayerDelta
struct AAthenaPlayerController_Server_ReportPlayerDelta_Params
{
	struct FVector                                     InVector;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerController.Server_ExecuteCommand
struct AAthenaPlayerController_Server_ExecuteCommand_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaPlayerController.GetPlayerStreamingReferenceLocation
struct AAthenaPlayerController_GetPlayerStreamingReferenceLocation_Params
{
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.AthenaPlayerController.GetAthenaCheatManager
struct AAthenaPlayerController_GetAthenaCheatManager_Params
{
	class UAthenaCheatManager*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerController.EOS
struct AAthenaPlayerController_EOS_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaPlayerController.AddYawRotationInput
struct AAthenaPlayerController_AddYawRotationInput_Params
{
	float                                              Input;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<ELookAtRotationType>                   RotationType;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.AthenaPlayerController.AddPitchRotationInput
struct AAthenaPlayerController_AddPitchRotationInput_Params
{
	float                                              Input;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<ELookAtRotationType>                   RotationType;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.OnlineAthenaPlayerController.ModifyActiveState
struct AOnlineAthenaPlayerController_ModifyActiveState_Params
{
	bool                                               IsActive;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TestAthenaPlayerController.TestConsoleExecutableFunction
struct ATestAthenaPlayerController_TestConsoleExecutableFunction_Params
{
};

// Function Athena.TestAthenaPlayerController.GrantDebugMenuPermissions
struct ATestAthenaPlayerController_GrantDebugMenuPermissions_Params
{
	bool                                               AllowAccess;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TestAthenaPlayerController.FakeInput
struct ATestAthenaPlayerController_FakeInput_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm) 0000
};

// Function Athena.TestAthenaPlayerController.FakeAxisInput
struct ATestAthenaPlayerController_FakeAxisInput_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm) 0000
	float                                              Delta;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              DeltaTime;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
};

// Function Athena.TestPlayerRelevancyAthenaPlayerController.QueryRelevancyService
struct ATestPlayerRelevancyAthenaPlayerController_QueryRelevancyService_Params
{
	float                                              Timeout;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerControllerTestFunctions.TestAthenaPlayerControllerDisableNormalInputHandling
struct UAthenaPlayerControllerTestFunctions_TestAthenaPlayerControllerDisableNormalInputHandling_Params
{
	class AAthenaPlayerController*                     AthenaPlayerController;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaPlayerControllerTestFunctions.AddEntitlementDescToInventory
struct UAthenaPlayerControllerTestFunctions_AddEntitlementDescToInventory_Params
{
	class AAthenaPlayerController*                     Controller;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      EntitlementDesc;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.AthenaPlayerState.OnRep_PirateDescription
struct AAthenaPlayerState_OnRep_PirateDescription_Params
{
};

// Function Athena.TestAthenaPlayerState.SetUniquePlayerID
struct ATestAthenaPlayerState_SetUniquePlayerID_Params
{
	struct FString                                     InUniquePlayerId;                                         // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.AthenaTextRender.OnTextCanvasUpdate
struct AAthenaTextRender_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Width;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Height;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.AtmosphericPressureZoneInterface.GetPressureZoneParameters
struct UAtmosphericPressureZoneInterface_GetPressureZoneParameters_Params
{
	struct FAtmosphericPressureZoneParametersAndLocation ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AtmosphericPressureServiceInterface.UnregisterAtmosphericPressureZoneFromService
struct UAtmosphericPressureServiceInterface_UnregisterAtmosphericPressureZoneFromService_Params
{
	TScriptInterface<class UAtmosphericPressureZoneInterface> PressureZone;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AtmosphericPressureServiceInterface.RegisterAtmosphericPressureZoneWithService
struct UAtmosphericPressureServiceInterface_RegisterAtmosphericPressureZoneWithService_Params
{
	TScriptInterface<class UAtmosphericPressureZoneInterface> PressureZone;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AtmosphericPressureServiceInterface.GetNumberOfAtmosphericPressureZones
struct UAtmosphericPressureServiceInterface_GetNumberOfAtmosphericPressureZones_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AtmosphericPressureServiceInterface.GetAtmosphericPressureZone
struct UAtmosphericPressureServiceInterface_GetAtmosphericPressureZone_Params
{
	int                                                PressureZoneIndex;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FAtmosphericPressureZoneParametersAndLocation ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0004
};

// Function Athena.AtmosphericPressureServiceInterface.GetAllAtmosphericPressureZones
struct UAtmosphericPressureServiceInterface_GetAllAtmosphericPressureZones_Params
{
	TArray<struct FAtmosphericPressureZoneParametersAndLocation> ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.AudioEmitterInterface.GetAudioEmitter
struct UAudioEmitterInterface_GetAudioEmitter_Params
{
	struct FWwiseEmitter                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.AudioEmitterPoolSourceInterface.GetAudioEmitterPool
struct UAudioEmitterPoolSourceInterface_GetAudioEmitterPool_Params
{
	class UWwiseObjectPoolWrapper*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AudioUtilities.UpdateCharacterWadingRtpc
struct UAudioUtilities_UpdateCharacterWadingRtpc_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FWwiseEmitter>                       Emitters;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0008
	struct FName                                       WadingRtpcName;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FName                                       SquelchRtpcName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              MinRtpcValue;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	float                                              MaxRtpcValue;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
};

// Function Athena.AudioUtilities.PlayFootstepSound
struct UAudioUtilities_PlayFootstepSound_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_Parm) 0010
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	class UWwiseEvent*                                 Cue;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	struct FName                                       CharacterSpeedRtpc;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0044
	float                                              MinRtpcValue;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 004C
	float                                              MaxRtpcValue;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
	TEnumAsByte<ECharacterFootImpactType>              FootImpactType;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0054
};

// Function Athena.AudioUtilities.FilterLocalPlayerFootStepSounds
struct UAudioUtilities_FilterLocalPlayerFootStepSounds_Params
{
	TEnumAsByte<ECharacterFootImpactType>              FootImpactType;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.BakedDecalComponent.GetTargetTexture
struct UBakedDecalComponent_GetTargetTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.BakedDecalComponent.FinishInitialisation
struct UBakedDecalComponent_FinishInitialisation_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.BakedDecalComponent.FilterEdges
struct UBakedDecalComponent_FilterEdges_Params
{
};

// Function Athena.BakedDecalComponent.DrawDecal
struct UBakedDecalComponent_DrawDecal_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     Normal;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              Radius;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              NearDistance;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	float                                              FarDistance;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	float                                              CullDistance;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
	class UTexture2D*                                  DecalTexture;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
	int                                                LODIndex;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 003C
};

// Function Athena.BakedDecalComponent.CopyToTargetTexture
struct UBakedDecalComponent_CopyToTargetTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UTexture*                                    SourceTexture;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.BakedDecalComponent.ClearTargetTexture
struct UBakedDecalComponent_ClearTargetTexture_Params
{
	struct FLinearColor                                ClearColor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.BakedDecalComponent.AddMesh
struct UBakedDecalComponent_AddMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.BodyLightControllerComponent.GetTargetLight
struct UBodyLightControllerComponent_GetTargetLight_Params
{
	class UAmbientLightSourceComponent*                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.BodyLightControllerComponent.AssignTargetLight
struct UBodyLightControllerComponent_AssignTargetLight_Params
{
	class UAmbientLightSourceComponent*                InTargetLight;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.BoxedRpcDispatcherComponent.Server_SendRpc
struct UBoxedRpcDispatcherComponent_Server_SendRpc_Params
{
	struct FSerialisedRpc                              Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
};

// Function Athena.BoxedRpcDispatcherComponent.Client_SendRpc
struct UBoxedRpcDispatcherComponent_Client_SendRpc_Params
{
	struct FSerialisedRpc                              Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
};

// Function Athena.BTService_DetermineRecoveryMethod.OnDamageTaken
struct UBTService_DetermineRecoveryMethod_OnDamageTaken_Params
{
	struct FImpactDamageEvent                          Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.BTService_ObserveTargetMeleeAttacks.OnTargetActorDestroyed
struct UBTService_ObserveTargetMeleeAttacks_OnTargetActorDestroyed_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.BuoyancyComponent.Sink
struct UBuoyancyComponent_Sink_Params
{
};

// Function Athena.BuoyancyComponent.ShouldBeStationary
struct UBuoyancyComponent_ShouldBeStationary_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.BuoyancyComponent.SetEnabled
struct UBuoyancyComponent_SetEnabled_Params
{
	bool                                               InEnabled;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.BuoyancyComponent.OnRigidBodyWake
struct UBuoyancyComponent_OnRigidBodyWake_Params
{
	struct FName                                       InBoneName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.BuoyancyComponent.OnRigidBodySleep
struct UBuoyancyComponent_OnRigidBodySleep_Params
{
	struct FName                                       InBoneName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.BuoyancyComponent.OnRep_State
struct UBuoyancyComponent_OnRep_State_Params
{
};

// Function Athena.BuoyancyComponent.IsStationary
struct UBuoyancyComponent_IsStationary_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.BuoyancyComponent.IsSinking
struct UBuoyancyComponent_IsSinking_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.BuoyancyComponent.IsEnabled
struct UBuoyancyComponent_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InteractableObject.Blueprint_OnInteract_Server
struct AInteractableObject_Blueprint_OnInteract_Server_Params
{
	class AActor*                                      InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InteractableObject.Blueprint_OnInteract_Client
struct AInteractableObject_Blueprint_OnInteract_Client_Params
{
	class AActor*                                      InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ReplenishableInterface.Replenish
struct UReplenishableInterface_Replenish_Params
{
};

// Function Athena.ReplenishableInterface.IsAtMaxCapacity
struct UReplenishableInterface_IsAtMaxCapacity_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ReplenishableInterface.Deplete
struct UReplenishableInterface_Deplete_Params
{
};

// Function Athena.ReplenishableInterface.CanBeReplenished
struct UReplenishableInterface_CanBeReplenished_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ReplenishableInterface.AddDefaultStockLevel
struct UReplenishableInterface_AddDefaultStockLevel_Params
{
};

// Function Athena.StorageContainer.TestReplenish
struct AStorageContainer_TestReplenish_Params
{
};

// Function Athena.StorageContainer.TakeItem
struct AStorageContainer_TakeItem_Params
{
	class AActor*                                      Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.StorageContainer.Replenish
struct AStorageContainer_Replenish_Params
{
};

// Function Athena.StorageContainer.IsAtMaxCapacity
struct AStorageContainer_IsAtMaxCapacity_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.StorageContainer.GetSubjectId
struct AStorageContainer_GetSubjectId_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.StorageContainer.GetMaxCapacity
struct AStorageContainer_GetMaxCapacity_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.StorageContainer.GetItemCount
struct AStorageContainer_GetItemCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.StorageContainer.GetDefaultItemDesc
struct AStorageContainer_GetDefaultItemDesc_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.StorageContainer.Deplete
struct AStorageContainer_Deplete_Params
{
};

// Function Athena.StorageContainer.CanBeReplenished
struct AStorageContainer_CanBeReplenished_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.StorageContainer.AddItem
struct AStorageContainer_AddItem_Params
{
	class AActor*                                      Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.StorageContainer.AddDefaultStockLevel
struct AStorageContainer_AddDefaultStockLevel_Params
{
};

// Function Athena.BurpComponent.Multicast_Burp
struct UBurpComponent_Multicast_Burp_Params
{
	float                                              DurationRTPC;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              TypeRTPC;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.BurpComponent.GetCurrentGasAmount
struct UBurpComponent_GetCurrentGasAmount_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.BurpTestActor.WieldItemByActor
struct ABurpTestActor_WieldItemByActor_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               UnwieldFast;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0009
};

// Function Athena.BurpTestActor.ToggleWieldItem
struct ABurpTestActor_ToggleWieldItem_Params
{
};

// Function Athena.BurpTestActor.RemoveItem
struct ABurpTestActor_RemoveItem_Params
{
	class AItemInfo*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.BurpTestActor.QuickSelectItemOfType
struct ABurpTestActor_QuickSelectItemOfType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                TypedItemIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.BurpTestActor.QuickSelectItemOfCategory
struct ABurpTestActor_QuickSelectItemOfCategory_Params
{
	class UClass*                                      Category;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                IndexIntoCategory;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.BurpTestActor.QuickSelectItem
struct ABurpTestActor_QuickSelectItem_Params
{
	int                                                ItemIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.BurpTestActor.PickUpItem
struct ABurpTestActor_PickUpItem_Params
{
	class AItemInfo*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               AndWield;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0009
};

// Function Athena.BurpTestActor.GetNumberOfItemsOfItemCategory
struct ABurpTestActor_GetNumberOfItemsOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.BurpTestActor.GetCurrentItemIndex
struct ABurpTestActor_GetCurrentItemIndex_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.BurpTestActor.CycleItemUp
struct ABurpTestActor_CycleItemUp_Params
{
};

// Function Athena.BurpTestActor.CycleItemType
struct ABurpTestActor_CycleItemType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.BurpTestActor.CycleItemDown
struct ABurpTestActor_CycleItemDown_Params
{
};

// Function Athena.BurpTestActor.CycleItemCategory
struct ABurpTestActor_CycleItemCategory_Params
{
	class UClass*                                      Category;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.BurpTestActor.ConsumeItem
struct ABurpTestActor_ConsumeItem_Params
{
	class AItemInfo*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.BurpTestActor.CanAddItemOfItemCategory
struct ABurpTestActor_CanAddItemOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<ECanAddItemQueryResult>                ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.BurpTestActor.AddItem
struct ABurpTestActor_AddItem_Params
{
	class AItemInfo*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CameraFadeManagerTestFunctions.IsFadeComplete
struct UCameraFadeManagerTestFunctions_IsFadeComplete_Params
{
	class APlayerController*                           TargetController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CameraFadeManagerTestFunctions.IsFadeActive
struct UCameraFadeManagerTestFunctions_IsFadeActive_Params
{
	class APlayerController*                           TargetController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CameraFadeManagerTestFunctions.FireFadeAckRequestToClient
struct UCameraFadeManagerTestFunctions_FireFadeAckRequestToClient_Params
{
	class AAthenaPlayerController*                     TargetController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              AckTimeout;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.CannonAnimInterface.SetCannonFiring
struct UCannonAnimInterface_SetCannonFiring_Params
{
	bool                                               CannonFiring;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CannonAnimInterface.GetCannonFiring
struct UCannonAnimInterface_GetCannonFiring_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CannonAnimInstance.GetCannonFiring
struct UCannonAnimInstance_GetCannonFiring_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.IterativeCanvasRenderTarget2D.ReceiveUpdate
struct UIterativeCanvasRenderTarget2D_ReceiveUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Width;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Height;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.IterativeCanvasRenderTarget2D.GetSize
struct UIterativeCanvasRenderTarget2D_GetSize_Params
{
	int                                                Width;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.IterativeCanvasRenderTarget2D.Create
struct UIterativeCanvasRenderTarget2D_Create_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      CanvasRenderTarget2DClass;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Width;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	int                                                Height;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FLinearColor                                InClearColor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class UIterativeCanvasRenderTarget2D*              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0028
};

// Function Athena.CanvasWorldMapComponent.OnCanvasUpdate
struct UCanvasWorldMapComponent_OnCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Width;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Height;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.CapstanInterface.IsLocked
struct UCapstanInterface_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CapstanInterface.GetCapstanState
struct UCapstanInterface_GetCapstanState_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CapstanInterface.GetCapstanRatioVelocity
struct UCapstanInterface_GetCapstanRatioVelocity_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CapstanInterface.GetCapstanNumCurrentUsers
struct UCapstanInterface_GetCapstanNumCurrentUsers_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CapstanInterface.GetCapstanMaxRatioVelocity
struct UCapstanInterface_GetCapstanMaxRatioVelocity_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Capstan.OnCapstanDescLoaded
struct ACapstan_OnCapstanDescLoaded_Params
{
	class UCapstanDescAsset*                           CapstanDesc;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Capstan.GetCapstanReleaseActor
struct ACapstan_GetCapstanReleaseActor_Params
{
	class ACapstanRelease*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Capstan.GetArms
struct ACapstan_GetArms_Params
{
	TArray<class ACapstanArm*>                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.CapstanArmInterface.SetIntent
struct UCapstanArmInterface_SetIntent_Params
{
	float                                              NewIntent;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CapstanArmInterface.IsLocked
struct UCapstanArmInterface_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CapstanArmInterface.IsArmInUse
struct UCapstanArmInterface_IsArmInUse_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CapstanArmInterface.GetCurrentIntent
struct UCapstanArmInterface_GetCurrentIntent_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CapstanArmInterface.GetCapstanRatioVelocity
struct UCapstanArmInterface_GetCapstanRatioVelocity_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CapstanTestFunctions.SetupCapstanTestServerSide
struct UCapstanTestFunctions_SetupCapstanTestServerSide_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      CapstanClass;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class ACapstan*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function Athena.CapstanTestFunctions.SetupCapstanTestClientSide
struct UCapstanTestFunctions_SetupCapstanTestClientSide_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class ACapstan*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CapstanTestFunctions.SetCapstanSpeed
struct UCapstanTestFunctions_SetCapstanSpeed_Params
{
	class ACapstan*                                    Capstan;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              MaxPlayerVelocity;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              MaxLoweringVelocity;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.CapstanTestFunctions.GetCapstanArm
struct UCapstanTestFunctions_GetCapstanArm_Params
{
	class ACapstan*                                    Capstan;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ArmIndex;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class ACapstanArm*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.CapstanTestFunctions.ForceSetCapstanRatio
struct UCapstanTestFunctions_ForceSetCapstanRatio_Params
{
	class ACapstan*                                    Capstan;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              TargetRatio;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.CapturedByKrakenActionStateId.PushCharacterIntoCapturedByKrakenActionState
struct UCapturedByKrakenActionStateId_PushCharacterIntoCapturedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AKrakenAnimatedTentacle*                     Tentacle;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.CapturedByKrakenActionStateId.PopCharacterOutOfCapturedByKrakenActionState
struct UCapturedByKrakenActionStateId_PopCharacterOutOfCapturedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CarouselPirateDescConversion.ToPirateDescriptor
struct UCarouselPirateDescConversion_ToPirateDescriptor_Params
{
	struct FCarouselPirateDesc                         InParams;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FPirateDescription                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0030
};

// Function Athena.CarouselPirateDescConversion.ToOutfit
struct UCarouselPirateDescConversion_ToOutfit_Params
{
	struct FCarouselPirateDesc                         InParams;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TArray<class UClass*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0030
};

// Function Athena.CarouselPirateGenerator.RefreshCurrentPirateStatus
struct UCarouselPirateGenerator_RefreshCurrentPirateStatus_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Locked;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.CarouselPirateGenerator.GenerateSetOfPirates
struct UCarouselPirateGenerator_GenerateSetOfPirates_Params
{
	int                                                InSeed;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                InCount;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	struct FCarouselPirateGeneratorParams              InParams;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	TArray<struct FCarouselPirateDesc>                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 00D0
};

// Function Athena.PickupableInterface.HandleDestroy
struct UPickupableInterface_HandleDestroy_Params
{
};

// Function Athena.ItemProxy.PerformDropOnSurfaceFx
struct AItemProxy_PerformDropOnSurfaceFx_Params
{
	TEnumAsByte<EPhysicalSurface>                      ServerSurfaceType;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               AttachVFXToItem;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
	struct FVector                                     OverrideVFXPos;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0004
	class AActor*                                      ActorToParentVfxTo;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.ItemProxy.Multicast_DropOnSurfaceRPC
struct AItemProxy_Multicast_DropOnSurfaceRPC_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               AttachVFXToItem;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
	struct FVector                                     OverrideVFXPos;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0004
	class AActor*                                      ActorToParentVfxTo;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.ItemProxy.GetItemInfo
struct AItemProxy_GetItemInfo_Params
{
	class AItemInfo*                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FloatingItemProxy.OnRep_PhysicsState
struct AFloatingItemProxy_OnRep_PhysicsState_Params
{
};

// Function Athena.CharacterAudioComponent.SetNamedState
struct UCharacterAudioComponent_SetNamedState_Params
{
	struct FName                                       StateName;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               Active;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0009
};

// Function Athena.CharacterAudioComponent.ResetNamedStates
struct UCharacterAudioComponent_ResetNamedStates_Params
{
};

// Function Athena.CharacterAudioComponent.PlaySoundOnLocalClientOnly_RPC
struct UCharacterAudioComponent_PlaySoundOnLocalClientOnly_RPC_Params
{
	class UWwiseEvent*                                 Event;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterAudioComponent.GetSpaceRtpcValueFromRtpcName
struct UCharacterAudioComponent_GetSpaceRtpcValueFromRtpcName_Params
{
	struct FName                                       RTPCName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CharacterAudioComponent.GetNumberOfSkeletonsAffectingMusicSystem
struct UCharacterAudioComponent_GetNumberOfSkeletonsAffectingMusicSystem_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterAudioComponent.GetEmitter
struct UCharacterAudioComponent_GetEmitter_Params
{
	struct FWwiseEmitter                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.CharacterAudioComponent.GetCurrentPlayerMusicState
struct UCharacterAudioComponent_GetCurrentPlayerMusicState_Params
{
	TEnumAsByte<EPlayerMusicState>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterInputBinder.SpoofNotificationInput
struct UCharacterInputBinder_SpoofNotificationInput_Params
{
	class UClass*                                      Id;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterInputBinder.SpoofAnalogInput
struct UCharacterInputBinder_SpoofAnalogInput_Params
{
	class UClass*                                      Id;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.CharacterInputBinder.IsContinuousActionActive
struct UCharacterInputBinder_IsContinuousActionActive_Params
{
	class UClass*                                      BeginNotificationInputId;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CharacterInputBinder.IgnoreNonSpoofedInput
struct UCharacterInputBinder_IgnoreNonSpoofedInput_Params
{
	bool                                               InShouldIgnore;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterInteractionComponentTestFunctions.PushCanInteractValidatorToInteractionComponent
struct UCharacterInteractionComponentTestFunctions_PushCanInteractValidatorToInteractionComponent_Params
{
	class UCharacterInteractionComponent*              InCharacterInteractionComponent;                          // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterInteractionComponentTestFunctions.CharacterInteractionComponentWithoutInteractors_WhenPolicyIsAdded_PolicyIsntCalled
struct UCharacterInteractionComponentTestFunctions_CharacterInteractionComponentWithoutInteractors_WhenPolicyIsAdded_PolicyIsntCalled_Params
{
	class UCharacterInteractionComponent*              InCharacterInteractionComponent;                          // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CharacterInteractionComponentTestFunctions.CharacterInteractionComponentWithInteractors_WhenPolicyIsAdded_PolicyIsCalled
struct UCharacterInteractionComponentTestFunctions_CharacterInteractionComponentWithInteractors_WhenPolicyIsAdded_PolicyIsCalled_Params
{
	class UCharacterInteractionComponent*              InCharacterInteractionComponent;                          // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CharacterInteractionComponentTestFunctions.CharacterInteractionComponentWithInteractor_TwoPolicies_HighestPriorityFirst
struct UCharacterInteractionComponentTestFunctions_CharacterInteractionComponentWithInteractor_TwoPolicies_HighestPriorityFirst_Params
{
	class UCharacterInteractionComponent*              InCharacterInteractionComponent;                          // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CharacterPossessedEventTestComponent.HasReceivedPlayerStateReplicatedEvent
struct UCharacterPossessedEventTestComponent_HasReceivedPlayerStateReplicatedEvent_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CharacterSocketCollisionFunctionLibrary.NotEqual
struct UCharacterSocketCollisionFunctionLibrary_NotEqual_Params
{
	struct FCharacterSocketCollisionHandle             A;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FCharacterSocketCollisionHandle             B;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 000C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Athena.CharacterSocketCollisionFunctionLibrary.IsValid
struct UCharacterSocketCollisionFunctionLibrary_IsValid_Params
{
	struct FCharacterSocketCollisionHandle             Handle;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.CharacterSocketCollisionFunctionLibrary.Equal
struct UCharacterSocketCollisionFunctionLibrary_Equal_Params
{
	struct FCharacterSocketCollisionHandle             A;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FCharacterSocketCollisionHandle             B;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 000C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Athena.CharacterSocketCollisionServiceInterface.UnregisterSocket
struct UCharacterSocketCollisionServiceInterface_UnregisterSocket_Params
{
	struct FCharacterSocketCollisionHandle             Handle;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.CharacterSocketCollisionServiceInterface.RegisterSocket
struct UCharacterSocketCollisionServiceInterface_RegisterSocket_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FCharacterSocketCollisionDesc               InDesc;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FCharacterSocketCollisionHandle             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0030
};

// Function Athena.CharacterSocketCollisionServiceInterface.IsSocketRegistered
struct UCharacterSocketCollisionServiceInterface_IsSocketRegistered_Params
{
	struct FCharacterSocketCollisionHandle             Handle;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.ChatboxCompositeInputHandler.OnOpenChatbox
struct UChatboxCompositeInputHandler_OnOpenChatbox_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CinematicCameraController.SetFOV
struct ACinematicCameraController_SetFOV_Params
{
	float                                              NewFOV;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CinematicCameraController.GetFOV
struct ACinematicCameraController_GetFOV_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ClothingLoadoutControlInterface.UnequipClothing
struct UClothingLoadoutControlInterface_UnequipClothing_Params
{
	class UClass*                                      InDesc;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ClothingLoadoutControlInterface.SetClothingLoadout
struct UClothingLoadoutControlInterface_SetClothingLoadout_Params
{
	struct FClothingLoadout                            InLoadout;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.ClothingLoadoutControlInterface.EquipClothing
struct UClothingLoadoutControlInterface_EquipClothing_Params
{
	class UClass*                                      InDesc;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ClothingLoadoutViewInterface.GetClothingLoadout
struct UClothingLoadoutViewInterface_GetClothingLoadout_Params
{
	struct FClothingLoadout                            ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm) 0000
};

// Function Athena.TitleLoadoutControlInterface.Client_UpdateTitleUI
struct UTitleLoadoutControlInterface_Client_UpdateTitleUI_Params
{
	class UClass*                                      InLoadout;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TitleLoadoutViewInterface.GetTitleLoadout
struct UTitleLoadoutViewInterface_GetTitleLoadout_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ClothingLoadoutComponent.OnRep_Loadout
struct UClothingLoadoutComponent_OnRep_Loadout_Params
{
};

// Function Athena.CloudSystem.SetGlobalAtmosphericPressure
struct ACloudSystem_SetGlobalAtmosphericPressure_Params
{
	float                                              NewAtmosphericPressure;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CoastInterface.UnregisterCoast
struct UCoastInterface_UnregisterCoast_Params
{
	struct FBlueprintableIntegerHandle                 CoastHandle;                                              // (CPF_Parm) 0000
};

// Function Athena.CoastInterface.RegisterCoast
struct UCoastInterface_RegisterCoast_Params
{
	class USplineComponent*                            CoastalSpline;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	class USplineComponent*                            InnerSpline;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	struct FVector                                     SplineOrigin;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FBlueprintableIntegerHandle                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 001C
};

// Function Athena.CoastInterface.GetClosestIslandNameOfCoastlineForPointAndTolerance
struct UCoastInterface_GetClosestIslandNameOfCoastlineForPointAndTolerance_Params
{
	struct FVector                                     Pos;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              MaxDistFromCoast;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              OutClosestDistToShore;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function Athena.CoastInterface.GetClosestCoastObjects
struct UCoastInterface_GetClosestCoastObjects_Params
{
	struct FVector                                     LookupPosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	TArray<struct FCoastObject>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0010
};

// Function Athena.CoherentBaseHUD.IsViewportValid
struct ACoherentBaseHUD_IsViewportValid_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaHUD.ShowTooltipsDetailedAtlas
struct AAthenaHUD_ShowTooltipsDetailedAtlas_Params
{
};

// Function Athena.AthenaHUD.ShowTooltipsAtlas
struct AAthenaHUD_ShowTooltipsAtlas_Params
{
};

// Function Athena.AthenaHUD.ShowNameplatesAtlas
struct AAthenaHUD_ShowNameplatesAtlas_Params
{
};

// Function Athena.AthenaHUD.HasInputFocus
struct AAthenaHUD_HasInputFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaHUD.AreInGameMenusActive
struct AAthenaHUD_AreInGameMenusActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaHUD.AreAllViewScriptingReady
struct AAthenaHUD_AreAllViewScriptingReady_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CoherentUIGTInstancedComponent.ScriptingReadyEventReceived
struct UCoherentUIGTInstancedComponent_ScriptingReadyEventReceived_Params
{
};

// Function Athena.CoherentUIGTInstancedComponent.ReadyForBindingsEventReceived
struct UCoherentUIGTInstancedComponent_ReadyForBindingsEventReceived_Params
{
};

// Function Athena.CoherentUIGTInstancedComponent.OnScriptingReady
struct UCoherentUIGTInstancedComponent_OnScriptingReady_Params
{
};

// Function Athena.CoherentUIGTInstancedComponent.OnReadyForBindings
struct UCoherentUIGTInstancedComponent_OnReadyForBindings_Params
{
};

// Function Athena.CoherentUIGTInstancedComponent.IsScriptingReady
struct UCoherentUIGTInstancedComponent_IsScriptingReady_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CoherentUIGTInstancedComponent.GetHUDMaterial
struct UCoherentUIGTInstancedComponent_GetHUDMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CoherentUIGTInstancedComponent.FinishLoadEventReceived
struct UCoherentUIGTInstancedComponent_FinishLoadEventReceived_Params
{
	struct FString                                     path;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
	bool                                               isMainFrame;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.CoherentUIGTInstancedComponent.BindingsReleasedEventReceived
struct UCoherentUIGTInstancedComponent_BindingsReleasedEventReceived_Params
{
};

// Function Athena.CoherentBaseHUDComponent.OnScriptingReady
struct UCoherentBaseHUDComponent_OnScriptingReady_Params
{
};

// Function Athena.CoherentBaseHUDComponent.OnReadyForBindings
struct UCoherentBaseHUDComponent_OnReadyForBindings_Params
{
};

// Function Athena.CoherentBaseHUDComponent.HasInitializationErrorOccurred
struct UCoherentBaseHUDComponent_HasInitializationErrorOccurred_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FrontendHUDComponent.SetFrontendMessagingDispatcher
struct UFrontendHUDComponent_SetFrontendMessagingDispatcher_Params
{
	TScriptInterface<class UObjectMessagingDispatcherInterface> Dispatcher;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.FrontendHUDComponent.OnReadyForBindings
struct UFrontendHUDComponent_OnReadyForBindings_Params
{
};

// Function Athena.UIInputForwardComponent.TargetViewScriptingReady
struct UUIInputForwardComponent_TargetViewScriptingReady_Params
{
};

// Function Athena.UIInputForwardComponent.SetUIFocus
struct UUIInputForwardComponent_SetUIFocus_Params
{
	TEnumAsByte<EUIInputFocusType>                     FocusType;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UCoherentUIGTBaseComponent*                  TargetViewComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
};

// Function Athena.UIInputForwardComponent.SetTargetView
struct UUIInputForwardComponent_SetTargetView_Params
{
	class UCoherentUIGTBaseComponent*                  ViewComponent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.UIInputForwardComponent.IsUIFocused
struct UUIInputForwardComponent_IsUIFocused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.UIInputForwardComponent.GetCurrentInputFocusType
struct UUIInputForwardComponent_GetCurrentInputFocusType_Params
{
	TEnumAsByte<EUIInputFocusType>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.UIInputForwardComponent.CentreMouseCursor
struct UUIInputForwardComponent_CentreMouseCursor_Params
{
};

// Function Athena.FrontendHUD.SetBootFlowMessagingDispatcher
struct AFrontendHUD_SetBootFlowMessagingDispatcher_Params
{
	TScriptInterface<class UObjectMessagingDispatcherInterface> Dispatcher;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.FrontendHUD.GetBootFlowMessagingDispatcher
struct AFrontendHUD_GetBootFlowMessagingDispatcher_Params
{
	TScriptInterface<class UObjectMessagingDispatcherInterface> ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FrontendHUD.DeletePirate
struct AFrontendHUD_DeletePirate_Params
{
};

// Function Athena.FrontendHUD.AttachToBootFlowMessagingDispatcher
struct AFrontendHUD_AttachToBootFlowMessagingDispatcher_Params
{
};

// Function Athena.CoherentToWwiseEventComponent.IsPlayingAny
struct UCoherentToWwiseEventComponent_IsPlayingAny_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CoherentToWwiseEventComponent.GetEmitter
struct UCoherentToWwiseEventComponent_GetEmitter_Params
{
	struct FWwiseEmitter                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.CoherentUIGTHUDComponent.OnScriptingReady
struct UCoherentUIGTHUDComponent_OnScriptingReady_Params
{
};

// Function Athena.CoherentUIGTHUDComponent.OnReadyForBindings
struct UCoherentUIGTHUDComponent_OnReadyForBindings_Params
{
};

// Function Athena.CoherentUIGTInGameMenusComponent.OnReadyForBindings
struct UCoherentUIGTInGameMenusComponent_OnReadyForBindings_Params
{
};

// Function Athena.CoherentUIGTAtlasComponent.OnReadyForBindings
struct UCoherentUIGTAtlasComponent_OnReadyForBindings_Params
{
};

// Function Athena.CompanyNPCInterface.PurchaseWieldedBooty
struct UCompanyNPCInterface_PurchaseWieldedBooty_Params
{
	class AActor*                                      Vendor;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CompanyNPCInterface.CanPurchaseBootyOfType
struct UCompanyNPCInterface_CanPurchaseBootyOfType_Params
{
	TEnumAsByte<EBootyTypes>                           BootyType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0001
};

// Function Athena.ControlCapstanArmActionStateId.PushCharacterIntoControlCapstanArmActionState
struct UControlCapstanArmActionStateId_PushCharacterIntoControlCapstanArmActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      ControlledObject;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.ControllableMessagesInterface.TakenControlOfWheel
struct UControllableMessagesInterface_TakenControlOfWheel_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllableMessagesInterface.RelinquishedControl
struct UControllableMessagesInterface_RelinquishedControl_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllableObjectFunctionLibrary.GetAnyUncontrolledActor
struct UControllableObjectFunctionLibrary_GetAnyUncontrolledActor_Params
{
	TArray<class AActor*>                              Actors;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0000
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ControllableObjectFunctionLibrary.FilterUncontrolledActors
struct UControllableObjectFunctionLibrary_FilterUncontrolledActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0000
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0010
};

// Function Athena.ControllableObjectFunctionLibrary.FilterControllableActors
struct UControllableObjectFunctionLibrary_FilterControllableActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0000
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0010
};

// Function Athena.ControlObjectActionStateId.PushCharacterIntoControlObjectActionState
struct UControlObjectActionStateId_PushCharacterIntoControlObjectActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      ControlledObject;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.ControlSailManipulatorActionStateId.PushCharacterIntoControlSailManipulatorActionState
struct UControlSailManipulatorActionStateId_PushCharacterIntoControlSailManipulatorActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      ControlledObject;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EControllableObjectType>               ControllableType;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class UClass*                                      AnalogInputId;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function Athena.ControlWheelActionStateId.PushCharacterIntoControlWheelActionState
struct UControlWheelActionStateId_PushCharacterIntoControlWheelActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AWheel*                                      ControlledObject;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.CrewFunctions.ResetCrewToSpawnLocation
struct UCrewFunctions_ResetCrewToSpawnLocation_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FGuid                                       CrewId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AShipSpawnLocation*                          SpawnLocation;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function Athena.CrewFunctions.ResetCrewToSafeSpawnLocation
struct UCrewFunctions_ResetCrewToSafeSpawnLocation_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FGuid                                       CrewId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     ActorLocation;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function Athena.CrewFunctions.RemoveCharacterFromCrew
struct UCrewFunctions_RemoveCharacterFromCrew_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaCharacter*                            Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.CrewFunctions.IsCharacterMemberOfCrew
struct UCrewFunctions_IsCharacterMemberOfCrew_Params
{
	class AAthenaCharacter*                            Player;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FGuid                                       CrewId;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Athena.CrewFunctions.IsActorMemberOfCharactersCrew
struct UCrewFunctions_IsActorMemberOfCharactersCrew_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaCharacter*                            Player;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.CrewFunctions.GetShipSizeForCrewId
struct UCrewFunctions_GetShipSizeForCrewId_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FGuid                                       CrewId;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Athena.CrewFunctions.GetShipSizeForActorsCrew
struct UCrewFunctions_GetShipSizeForActorsCrew_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.CrewFunctions.GetCrewIdFromActor
struct UCrewFunctions_GetCrewIdFromActor_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FGuid                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.CrewFunctions.CreateCrewWithSessionTemplate
struct UCrewFunctions_CreateCrewWithSessionTemplate_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FGuid                                       CrewId;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	struct FCrewSessionTemplate                        CrewSessionTemplate;                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
	class AAthenaPlayerState*                          FirstMember;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
};

// Function Athena.CrewFunctions.CreateCrew
struct UCrewFunctions_CreateCrew_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FGuid                                       CrewId;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	class AAthenaPlayerState*                          FirstMember;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function Athena.CrewFunctions.AreInSameCrew
struct UCrewFunctions_AreInSameCrew_Params
{
	struct FGuid                                       CrewId1;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FGuid                                       CrewId2;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function Athena.CrewFunctions.AreCharactersInSameCrew
struct UCrewFunctions_AreCharactersInSameCrew_Params
{
	class AAthenaCharacter*                            Player1;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaCharacter*                            Player2;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.CrewFunctions.AddShipToCrew
struct UCrewFunctions_AddShipToCrew_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AShip*                                       Ship;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FGuid                                       CrewId;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
};

// Function Athena.CrewFunctions.AddCharacterToCrew
struct UCrewFunctions_AddCharacterToCrew_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaCharacter*                            Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FGuid                                       CrewId;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
};

// Function Athena.CrewMembershipInterface.GetLastKnownCrewId
struct UCrewMembershipInterface_GetLastKnownCrewId_Params
{
	struct FGuid                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CrewMembershipInterface.GetCrewId
struct UCrewMembershipInterface_GetCrewId_Params
{
	struct FGuid                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CrewShipManifest.SetProposedVoyage
struct ACrewShipManifest_SetProposedVoyage_Params
{
	class UVoyageProposalDesc*                         Proposal;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.CrewShipManifest.OnRep_VoyageSelectionVoteData
struct ACrewShipManifest_OnRep_VoyageSelectionVoteData_Params
{
};

// Function Athena.CrewShipManifest.OnRep_VoyageCancelVoteData
struct ACrewShipManifest_OnRep_VoyageCancelVoteData_Params
{
};

// Function Athena.CrewShipManifest.OnRep_ProposedVoyages
struct ACrewShipManifest_OnRep_ProposedVoyages_Params
{
};

// Function Athena.CrewShipManifest.OnRep_CurrentActiveVoyage
struct ACrewShipManifest_OnRep_CurrentActiveVoyage_Params
{
};

// Function Athena.CrewShipManifest.OnCrewUpdated
struct ACrewShipManifest_OnCrewUpdated_Params
{
};

// Function Athena.CrewShipManifest.IsCurrentVoyageActive
struct ACrewShipManifest_IsCurrentVoyageActive_Params
{
	class UVoyageProposalDesc*                         Proposal;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CrewShipManifest.HasPlayerProposedVoyage
struct ACrewShipManifest_HasPlayerProposedVoyage_Params
{
	class AAthenaPlayerState*                          Proposal;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.CrewShipManifest.GetProposedVoyages
struct ACrewShipManifest_GetProposedVoyages_Params
{
	TArray<struct FProposedVoyageEntry>                OutProposedVoyages;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0000
};

// Function Athena.CrewVoyageParticipant.OnPlayerStateEndPlay
struct UCrewVoyageParticipant_OnPlayerStateEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        InReason;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.CrewVoyageParticipant.OnPlayerStateDestroyed
struct UCrewVoyageParticipant_OnPlayerStateDestroyed_Params
{
};

// Function Athena.DamageableInterface.OnDamageableImpact
struct UDamageableInterface_OnDamageableImpact_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0058
};

// Function Athena.DamageableInterface.CanApplyDamage
struct UDamageableInterface_CanApplyDamage_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0058
};

// Function Athena.DamageableComponent.OnDamageableImpact
struct UDamageableComponent_OnDamageableImpact_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0058
};

// Function Athena.ShipDamageableComponent.Multicast_DamageTriggered
struct UShipDamageableComponent_Multicast_DamageTriggered_Params
{
	struct FImpactDamageEvent                          DamageEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
};

// Function Athena.DamageBlueprintFunctionLibrary.TriggerShipImpactDamageFromLookAt
struct UDamageBlueprintFunctionLibrary_TriggerShipImpactDamageFromLookAt_Params
{
	class AAthenaPlayerCharacter*                      AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Strength;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TArray<class AActor*>                              IgnoreList;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0010
};

// Function Athena.DamageBlueprintFunctionLibrary.TriggerShipImpactDamageFromLocationAndDirection
struct UDamageBlueprintFunctionLibrary_TriggerShipImpactDamageFromLocationAndDirection_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Strength;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector                                     Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	TArray<class AActor*>                              IgnoreList;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0028
};

// Function Athena.DamageBlueprintFunctionLibrary.TriggerPlayerImpactDamageFromLookAt
struct UDamageBlueprintFunctionLibrary_TriggerPlayerImpactDamageFromLookAt_Params
{
	class AAthenaPlayerCharacter*                      AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Strength;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TArray<class AActor*>                              IgnoreList;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0010
};

// Function Athena.DamageBlueprintFunctionLibrary.TriggerPlayerImpactDamageFromLocationAndDirection
struct UDamageBlueprintFunctionLibrary_TriggerPlayerImpactDamageFromLocationAndDirection_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Strength;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector                                     Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	TArray<class AActor*>                              IgnoreList;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0028
};

// Function Athena.DeadActionStateId.PushCharacterIntoDeadActionState
struct UDeadActionStateId_PushCharacterIntoDeadActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FDamageInstance                             FinalBlow;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function Athena.DebugFlyingActionStateId.PushCharacterIntoDebugFlyingActionState
struct UDebugFlyingActionStateId_PushCharacterIntoDebugFlyingActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DebugFlyingCompositeInputHandler.OnTurnRate
struct UDebugFlyingCompositeInputHandler_OnTurnRate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugFlyingCompositeInputHandler.OnTurn
struct UDebugFlyingCompositeInputHandler_OnTurn_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugFlyingCompositeInputHandler.OnMoveUp
struct UDebugFlyingCompositeInputHandler_OnMoveUp_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugFlyingCompositeInputHandler.OnMoveRight
struct UDebugFlyingCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugFlyingCompositeInputHandler.OnMoveForward
struct UDebugFlyingCompositeInputHandler_OnMoveForward_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugFlyingCompositeInputHandler.OnLookUpRate
struct UDebugFlyingCompositeInputHandler_OnLookUpRate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugFlyingCompositeInputHandler.OnLookUp
struct UDebugFlyingCompositeInputHandler_OnLookUp_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugFlyingCompositeInputHandler.OnDisengageInput
struct UDebugFlyingCompositeInputHandler_OnDisengageInput_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DebugLandmarkLocation.EnableDrawingForAllMachines_RPC
struct ADebugLandmarkLocation_EnableDrawingForAllMachines_RPC_Params
{
	bool                                               Flag;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DebugShipControlActionStateId.PushCharacterIntoDebugShipControlActionState
struct UDebugShipControlActionStateId_PushCharacterIntoDebugShipControlActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class ADebugShipController*                        DebugShipController;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.DebugShipControlCompositeInputHandler.OnTurnRate
struct UDebugShipControlCompositeInputHandler_OnTurnRate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugShipControlCompositeInputHandler.OnMoveRight
struct UDebugShipControlCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugShipControlCompositeInputHandler.OnLookUpRate
struct UDebugShipControlCompositeInputHandler_OnLookUpRate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugShipControlCompositeInputHandler.OnJump
struct UDebugShipControlCompositeInputHandler_OnJump_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DebugShipFunctionLibrary.SetAllWheelAngle
struct UDebugShipFunctionLibrary_SetAllWheelAngle_Params
{
	class AActor*                                      Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Angle;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DebugShipFunctionLibrary.SetAllSailsLoweredProportion
struct UDebugShipFunctionLibrary_SetAllSailsLoweredProportion_Params
{
	class AActor*                                      Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Proportion;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DebugShipFunctionLibrary.SetAllSailsDamageScalar
struct UDebugShipFunctionLibrary_SetAllSailsDamageScalar_Params
{
	class AActor*                                      Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Proportion;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DebugShipFunctionLibrary.SetAllSailsAngle
struct UDebugShipFunctionLibrary_SetAllSailsAngle_Params
{
	class AActor*                                      Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Angle;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DebugShipFunctionLibrary.SetAllRuddersAngleRatio
struct UDebugShipFunctionLibrary_SetAllRuddersAngleRatio_Params
{
	class AActor*                                      Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InRudderAngleRatio;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DebugShipFunctionLibrary.SetAllCapstansPosition
struct UDebugShipFunctionLibrary_SetAllCapstansPosition_Params
{
	class AActor*                                      Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DebugShipFunctionLibrary.SetAllCannonsAim
struct UDebugShipFunctionLibrary_SetAllCannonsAim_Params
{
	class AActor*                                      Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Pitch;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              Yaw;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.DebugShipFunctionLibrary.SetAllAnchorsLoweredProportion
struct UDebugShipFunctionLibrary_SetAllAnchorsLoweredProportion_Params
{
	class AActor*                                      Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InLoweredProportion;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DebugShipFunctionLibrary.RotateAllMastsSailAngles
struct UDebugShipFunctionLibrary_RotateAllMastsSailAngles_Params
{
	TArray<class AActor*>                              Masts;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              PercentPerSec;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0014
};

// Function Athena.DebugShipFunctionLibrary.FireEveryNthCannons
struct UDebugShipFunctionLibrary_FireEveryNthCannons_Params
{
	class AActor*                                      Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                EveryNthCannons;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DebugShipFunctionLibrary.FireCannonEveryXSecond
struct UDebugShipFunctionLibrary_FireCannonEveryXSecond_Params
{
	TArray<class AActor*>                              Cannons;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              SecondsBetweenShots;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              Accumulator;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0018
	int                                                CannonIndex;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 001C
};

// Function Athena.DebugShipFunctionLibrary.FireAllCannons
struct UDebugShipFunctionLibrary_FireAllCannons_Params
{
	class AActor*                                      Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DebugShipFunctionLibrary.CycleAllMastsSailLowered
struct UDebugShipFunctionLibrary_CycleAllMastsSailLowered_Params
{
	TArray<class AActor*>                              Masts;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              PercentPerSec;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0014
};

// Function Athena.DebugSuperSailorActionStateId.PushCharacterIntoDebugSuperSailorActionState
struct UDebugSuperSailorActionStateId_PushCharacterIntoDebugSuperSailorActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DebugSuperSailorCompositeInputHandler.OnRightTrigger
struct UDebugSuperSailorCompositeInputHandler_OnRightTrigger_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugSuperSailorCompositeInputHandler.OnMoveRight
struct UDebugSuperSailorCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugSuperSailorCompositeInputHandler.OnMoveForward
struct UDebugSuperSailorCompositeInputHandler_OnMoveForward_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.DebugSuperSailorCompositeInputHandler.OnDisengageInput
struct UDebugSuperSailorCompositeInputHandler_OnDisengageInput_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DebugTreasureLocation.EnableDrawingForAllMachines_RPC
struct ADebugTreasureLocation_EnableDrawingForAllMachines_RPC_Params
{
	bool                                               Flag;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DitherComponent.SetCurrentTransparency
struct UDitherComponent_SetCurrentTransparency_Params
{
	float                                              Val;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DitherComponent.FadeOut
struct UDitherComponent_FadeOut_Params
{
};

// Function Athena.DitherComponent.FadeIn
struct UDitherComponent_FadeIn_Params
{
};

// Function Athena.DitherFunctionLibrary.DisableDitheringOnMaterial
struct UDitherFunctionLibrary_DisableDitheringOnMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DockToObjectCompositeInputHandler.OnDisengage
struct UDockToObjectCompositeInputHandler_OnDisengage_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DrawDebugService.OnRep_ReplicatedItems
struct ADrawDebugService_OnRep_ReplicatedItems_Params
{
};

// Function Athena.WaterModifierZoneInterface.GetWaterModifierZoneType
struct UWaterModifierZoneInterface_GetWaterModifierZoneType_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WaterModifierZoneInterface.GetWaterModifierZoneParameters
struct UWaterModifierZoneInterface_GetWaterModifierZoneParameters_Params
{
	struct FWaterModifierZoneParametersAndLocation     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.WaterModifierZoneServiceInterface.UnregisterWaterModifierZoneFromService
struct UWaterModifierZoneServiceInterface_UnregisterWaterModifierZoneFromService_Params
{
	TScriptInterface<class UWaterModifierZoneInterface> WaterModifierZone;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WaterModifierZoneServiceInterface.RegisterWaterModifierZoneWithService
struct UWaterModifierZoneServiceInterface_RegisterWaterModifierZoneWithService_Params
{
	TScriptInterface<class UWaterModifierZoneInterface> WaterModifierZone;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WaterModifierZoneServiceInterface.GetWaterModifierZones
struct UWaterModifierZoneServiceInterface_GetWaterModifierZones_Params
{
	class UClass*                                      Type;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	TArray<struct FWaterModifierZoneParametersAndLocation> ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.WaterModifierZoneServiceInterface.GetWaterModifierZone
struct UWaterModifierZoneServiceInterface_GetWaterModifierZone_Params
{
	int                                                WaterModifierZoneIndex;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWaterModifierZoneParametersAndLocation     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0004
};

// Function Athena.WaterModifierZoneServiceInterface.GetWaterModifierStrength
struct UWaterModifierZoneServiceInterface_GetWaterModifierStrength_Params
{
	class UClass*                                      Type;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function Athena.WaterModifierZoneServiceInterface.GetWaterModifierDrowningParams
struct UWaterModifierZoneServiceInterface_GetWaterModifierDrowningParams_Params
{
	class AAthenaCharacter*                            Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FBlendableDrowningParams                    DefaultParams;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FBlendableDrowningParams                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0024
};

// Function Athena.WaterModifierZoneServiceInterface.GetNumberOfWaterModifierZonesByType
struct UWaterModifierZoneServiceInterface_GetNumberOfWaterModifierZonesByType_Params
{
	class UClass*                                      Type;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WaterModifierZoneServiceInterface.GetNumberOfWaterModifierZones
struct UWaterModifierZoneServiceInterface_GetNumberOfWaterModifierZones_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WaterModifierZoneServiceInterface.GetDragScalarAtLocation
struct UWaterModifierZoneServiceInterface_GetDragScalarAtLocation_Params
{
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.WaterModifierZoneServiceInterface.GetAllWaterModifierZones
struct UWaterModifierZoneServiceInterface_GetAllWaterModifierZones_Params
{
	TArray<struct FWaterModifierZoneParametersAndLocation> ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.DrowningComponent.OnRep_CurrentOxygen
struct UDrowningComponent_OnRep_CurrentOxygen_Params
{
};

// Function Athena.DrowningComponent.GetOxygenLevel
struct UDrowningComponent_GetOxygenLevel_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DrunkennessComponent.TestForceVomiting
struct UDrunkennessComponent_TestForceVomiting_Params
{
	float                                              Duration;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DrunkennessComponent.SetTargetDrunkenness_RPC
struct UDrunkennessComponent_SetTargetDrunkenness_RPC_Params
{
	TEnumAsByte<EDrunkennessType>                      Type;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	bool                                               bInstantlySetActualToTarget;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DrunkennessComponent.SetTargetDrunkenness
struct UDrunkennessComponent_SetTargetDrunkenness_Params
{
	TEnumAsByte<EDrunkennessType>                      Type;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              TargetDrunkeness;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.DrunkennessComponent.Reset
struct UDrunkennessComponent_Reset_Params
{
};

// Function Athena.DrunkennessComponent.OnRep_RemainingAmountToSoberUpDueToWaterSplash
struct UDrunkennessComponent_OnRep_RemainingAmountToSoberUpDueToWaterSplash_Params
{
};

// Function Athena.DrunkennessComponent.OnRep_CurrentDrunkenness
struct UDrunkennessComponent_OnRep_CurrentDrunkenness_Params
{
};

// Function Athena.DrunkennessComponent.GetVomitComponent
struct UDrunkennessComponent_GetVomitComponent_Params
{
	class UVomitComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.DrunkennessComponent.GetStaggerAmplitude
struct UDrunkennessComponent_GetStaggerAmplitude_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DrunkennessComponent.GetOverallCurrentDrunkenness
struct UDrunkennessComponent_GetOverallCurrentDrunkenness_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DrunkennessComponent.ChangeDrunkenness
struct UDrunkennessComponent_ChangeDrunkenness_Params
{
	TEnumAsByte<EDrunkennessType>                      Type;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              DrunkennessChange;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.DynamicFlowComponent.SetTexture
struct UDynamicFlowComponent_SetTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UTexture*                                    SourceTexture;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.DynamicFlowComponent.GetTexture
struct UDynamicFlowComponent_GetTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DynamicFlowComponent.ClearTexture
struct UDynamicFlowComponent_ClearTexture_Params
{
	struct FLinearColor                                ClearColor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.EmoteActionStateId.PushCharacterIntoEmoteActionState
struct UEmoteActionStateId_PushCharacterIntoEmoteActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FEmoteData                                  EmoteData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function Athena.EmoteCompositeInputHandler.OnZoomOut
struct UEmoteCompositeInputHandler_OnZoomOut_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.EmoteCompositeInputHandler.OnZoomMouse
struct UEmoteCompositeInputHandler_OnZoomMouse_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.EmoteCompositeInputHandler.OnZoomIn
struct UEmoteCompositeInputHandler_OnZoomIn_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.EmoteCompositeInputHandler.OnTurnRate
struct UEmoteCompositeInputHandler_OnTurnRate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.EmoteCompositeInputHandler.OnTurn
struct UEmoteCompositeInputHandler_OnTurn_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.EmoteCompositeInputHandler.OnMoveRight
struct UEmoteCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.EmoteCompositeInputHandler.OnMoveForward
struct UEmoteCompositeInputHandler_OnMoveForward_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.EmoteCompositeInputHandler.OnLookUpRate
struct UEmoteCompositeInputHandler_OnLookUpRate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.EmoteCompositeInputHandler.OnLookUp
struct UEmoteCompositeInputHandler_OnLookUp_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.EmoteCompositeInputHandler.OnJump
struct UEmoteCompositeInputHandler_OnJump_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.EmoteCompositeInputHandler.OnCancel
struct UEmoteCompositeInputHandler_OnCancel_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.EmotesRadialComponent.GetNumSlots
struct UEmotesRadialComponent_GetNumSlots_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.EmotesRadialComponent.GetLastSelectedItem
struct UEmotesRadialComponent_GetLastSelectedItem_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.EmotesRadialComponent.DeactivateRadialInventory
struct UEmotesRadialComponent_DeactivateRadialInventory_Params
{
};

// Function Athena.EncounterService.StopListeningForEncounters
struct UEncounterService_StopListeningForEncounters_Params
{
	class AActor*                                      EncounterListenerActor;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Ensemble.OnRep_Instruments
struct AEnsemble_OnRep_Instruments_Params
{
};

// Function Athena.Ensemble.GetNumInstruments
struct AEnsemble_GetNumInstruments_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ensemble.GetNumInstrumentData
struct AEnsemble_GetNumInstrumentData_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ensemble.GetInstrumentDataPlaybackPosition
struct AEnsemble_GetInstrumentDataPlaybackPosition_Params
{
	int                                                Index;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.UsableInterface.UpdateUsage
struct UUsableInterface_UpdateUsage_Params
{
	float                                              DeltaTime;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.UsableInterface.StopUsing
struct UUsableInterface_StopUsing_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.UsableInterface.StartUsing
struct UUsableInterface_StartUsing_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.UsableInterface.IsBeingUsed
struct UUsableInterface_IsBeingUsed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.UsableInterface.CanBeUsed
struct UUsableInterface_CanBeUsed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.NamedNotificationInputInterface.GetNotificationInputDisplayName
struct UNamedNotificationInputInterface_GetNotificationInputDisplayName_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Athena.InventoryItemComponent.SetItemType
struct UInventoryItemComponent_SetItemType_Params
{
	TEnumAsByte<EItemType>                             InType;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryItemComponent.SetIconURL
struct UInventoryItemComponent_SetIconURL_Params
{
	struct FStringAssetReference                       InIconURL;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function Athena.InventoryItemComponent.SetIconRotation
struct UInventoryItemComponent_SetIconRotation_Params
{
	float                                              InIconRotation;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryItemComponent.OnAddedToInventory
struct UInventoryItemComponent_OnAddedToInventory_Params
{
};

// Function Athena.InventoryItemComponent.GetItemType
struct UInventoryItemComponent_GetItemType_Params
{
	TEnumAsByte<EItemType>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryItemComponent.GetIconURL
struct UInventoryItemComponent_GetIconURL_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.InventoryItemComponent.GetIconScale
struct UInventoryItemComponent_GetIconScale_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryItemComponent.GetIconRotation
struct UInventoryItemComponent_GetIconRotation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.IslandServiceInterface.OnCrewSpawningOnIsland
struct UIslandServiceInterface_OnCrewSpawningOnIsland_Params
{
	struct FName                                       IslandName;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.IslandServiceInterface.GetAllIslandNames
struct UIslandServiceInterface_GetAllIslandNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.HitReactionInterface.OnHitReactionImpact
struct UHitReactionInterface_OnHitReactionImpact_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.ExplosiveComponent.Multicast_Explode
struct UExplosiveComponent_Multicast_Explode_Params
{
};

// Function Athena.FaceTargetComponent.OnRep_TargetActorToFace
struct UFaceTargetComponent_OnRep_TargetActorToFace_Params
{
	class AActor*                                      PrevTargetActorToFace;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Fauna.TestingSetWaterState
struct AFauna_TestingSetWaterState_Params
{
	TEnumAsByte<EFaunaInWaterState>                    NewInState;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Fauna.SetAIStrategy
struct AFauna_SetAIStrategy_Params
{
	class UClass*                                      InStrategy;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Fauna.OnRep_TargetTurnAngle
struct AFauna_OnRep_TargetTurnAngle_Params
{
};

// Function Athena.Fauna.OnRep_IsPlayingStarvingAnim
struct AFauna_OnRep_IsPlayingStarvingAnim_Params
{
};

// Function Athena.Fauna.OnRep_IsCalm
struct AFauna_OnRep_IsCalm_Params
{
};

// Function Athena.Fauna.OnRep_IsAgitated
struct AFauna_OnRep_IsAgitated_Params
{
};

// Function Athena.Fauna.OnRep_InWaterState
struct AFauna_OnRep_InWaterState_Params
{
};

// Function Athena.Fauna.OnRep_CurrentAIStrategy
struct AFauna_OnRep_CurrentAIStrategy_Params
{
	class UClass*                                      OldAIStrategy;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Fauna.OnRep_CratedState
struct AFauna_OnRep_CratedState_Params
{
	TEnumAsByte<EFaunaCratedState>                     PreviousCratedState;                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Fauna.Multicast_PlayPutInCrateEffectsRPC
struct AFauna_Multicast_PlayPutInCrateEffectsRPC_Params
{
	class AActor*                                      Crate;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Fauna.Multicast_JustBeenFedRPC
struct AFauna_Multicast_JustBeenFedRPC_Params
{
	class AActor*                                      FedBy;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Fauna.Multicast_HightlightLeader
struct AFauna_Multicast_HightlightLeader_Params
{
	bool                                               bIsLeader;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Fauna.Multicast_DespawnRPC
struct AFauna_Multicast_DespawnRPC_Params
{
};

// Function Athena.Fauna.GetAIStrategy
struct AFauna_GetAIStrategy_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Fauna.GenerateNewRandomAnimationSeed
struct AFauna_GenerateNewRandomAnimationSeed_Params
{
};

// Function Athena.FaunaAnimationInstance.GetTurnRightAnimation
struct UFaunaAnimationInstance_GetTurnRightAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetTurnRate
struct UFaunaAnimationInstance_GetTurnRate_Params
{
	float                                              ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetTurnLeftAnimation
struct UFaunaAnimationInstance_GetTurnLeftAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetSurfaceOrientation
struct UFaunaAnimationInstance_GetSurfaceOrientation_Params
{
	float                                              NewPitch;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetStartledLowUnderwaterAnimation
struct UFaunaAnimationInstance_GetStartledLowUnderwaterAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetStartledLowOnSeaAnimation
struct UFaunaAnimationInstance_GetStartledLowOnSeaAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetStartledLowOnLandAnimation
struct UFaunaAnimationInstance_GetStartledLowOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetStartledHighUnderwaterAnimation
struct UFaunaAnimationInstance_GetStartledHighUnderwaterAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetStartledHighOnSeaAnimation
struct UFaunaAnimationInstance_GetStartledHighOnSeaAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetStartledHighOnLandAnimation
struct UFaunaAnimationInstance_GetStartledHighOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetSpecialUnderwaterAnimation
struct UFaunaAnimationInstance_GetSpecialUnderwaterAnimation_Params
{
	bool                                               LoopSpecial;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.FaunaAnimationInstance.GetSpecialSeaAnimation
struct UFaunaAnimationInstance_GetSpecialSeaAnimation_Params
{
	bool                                               LoopSpecial;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.FaunaAnimationInstance.GetSpecialLandAnimation
struct UFaunaAnimationInstance_GetSpecialLandAnimation_Params
{
	bool                                               LoopSpecial;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.FaunaAnimationInstance.GetSnakeStrikeOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeStrikeOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetSnakeCharmStanceOutOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeCharmStanceOutOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetSnakeCharmStanceLoopOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeCharmStanceLoopOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetSnakeCharmStanceInOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeCharmStanceInOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetSnakeAttackStanceOutOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeAttackStanceOutOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetSnakeAttackStanceLoopOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeAttackStanceLoopOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetSnakeAttackStanceInOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeAttackStanceInOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetPigStarveStartledLowOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveStartledLowOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetPigStarveStartledHighOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveStartledHighOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetPigStarveOutOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveOutOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetPigStarveLoopOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveLoopOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetPigStarveInOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveInOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetPigStarveDeathOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveDeathOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetPigEatingUnderwaterAnimation
struct UFaunaAnimationInstance_GetPigEatingUnderwaterAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetPigEatingOnSeaAnimation
struct UFaunaAnimationInstance_GetPigEatingOnSeaAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetPigEatingOnLandAnimation
struct UFaunaAnimationInstance_GetPigEatingOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetLocomotionUnderwaterAnimationB
struct UFaunaAnimationInstance_GetLocomotionUnderwaterAnimationB_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetLocomotionUnderwaterAnimationA
struct UFaunaAnimationInstance_GetLocomotionUnderwaterAnimationA_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetLocomotionSeaAnimationB
struct UFaunaAnimationInstance_GetLocomotionSeaAnimationB_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetLocomotionSeaAnimationA
struct UFaunaAnimationInstance_GetLocomotionSeaAnimationA_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetLocomotionLandAnimationB
struct UFaunaAnimationInstance_GetLocomotionLandAnimationB_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetLocomotionLandAnimationA
struct UFaunaAnimationInstance_GetLocomotionLandAnimationA_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetImpactUnderwaterAnimation
struct UFaunaAnimationInstance_GetImpactUnderwaterAnimation_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetImpactOnSeaAnimation
struct UFaunaAnimationInstance_GetImpactOnSeaAnimation_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetImpactOnLandAnimation
struct UFaunaAnimationInstance_GetImpactOnLandAnimation_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetIdleUnderwaterAnimationB
struct UFaunaAnimationInstance_GetIdleUnderwaterAnimationB_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetIdleUnderwaterAnimationA
struct UFaunaAnimationInstance_GetIdleUnderwaterAnimationA_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetIdleSeaAnimationB
struct UFaunaAnimationInstance_GetIdleSeaAnimationB_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetIdleSeaAnimationA
struct UFaunaAnimationInstance_GetIdleSeaAnimationA_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetIdleLandAnimationB
struct UFaunaAnimationInstance_GetIdleLandAnimationB_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetIdleLandAnimationA
struct UFaunaAnimationInstance_GetIdleLandAnimationA_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetDyingLoopUnderwaterAnimation
struct UFaunaAnimationInstance_GetDyingLoopUnderwaterAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetDyingLoopOnSeaAnimation
struct UFaunaAnimationInstance_GetDyingLoopOnSeaAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetDyingLoopOnLandAnimation
struct UFaunaAnimationInstance_GetDyingLoopOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetDeathUnderwaterAnimation
struct UFaunaAnimationInstance_GetDeathUnderwaterAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetDeathOnSeaAnimation
struct UFaunaAnimationInstance_GetDeathOnSeaAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GetDeathOnLandAnimation
struct UFaunaAnimationInstance_GetDeathOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FaunaAnimationInstance.GenerateNewValidAnimationIndex
struct UFaunaAnimationInstance_GenerateNewValidAnimationIndex_Params
{
	class AActor*                                      Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EFaunaAnimationLocation>               InLocation;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EFaunaAnimationState>                  InState;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0009
	bool                                               IsIdleStateA;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000A
};

// Function Athena.FaunaAnimationInstance.AssetArrayValidationCheck
struct UFaunaAnimationInstance_AssetArrayValidationCheck_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.FeedingComponent.OnRep_ActorToFeed
struct UFeedingComponent_OnRep_ActorToFeed_Params
{
};

// Function Athena.FiredFromActorActionStateId.PushCharacterIntoFiredFromActorActionState
struct UFiredFromActorActionStateId_PushCharacterIntoFiredFromActorActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      FiringActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     LaunchVelocity;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
};

// Function Athena.FiredFromActorActionStateId.PopCharacterOutOfFiredFromActorActionState
struct UFiredFromActorActionStateId_PopCharacterOutOfFiredFromActorActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.FiredFromCannonActionStateId.PushCharacterIntoFiredFromCannonActionState
struct UFiredFromCannonActionStateId_PushCharacterIntoFiredFromCannonActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      FiringActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     LaunchVelocity;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
};

// Function Athena.FiredFromCannonActionStateId.PopCharacterOutOfFiredFromCannonActionState
struct UFiredFromCannonActionStateId_PopCharacterOutOfFiredFromCannonActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.FOVHandlerFunctions.SetTargetFOV
struct UFOVHandlerFunctions_SetTargetFOV_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              TargetFOV;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.FOVHandlerFunctions.SetBlendSpeed
struct UFOVHandlerFunctions_SetBlendSpeed_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              BlendSpeed;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.FOVHandlerFunctions.ResetToDefault
struct UFOVHandlerFunctions_ResetToDefault_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.FOVHandlerFunctions.GetTargetFOV
struct UFOVHandlerFunctions_GetTargetFOV_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.FOVHandlerFunctions.GetDefaultTargetFOV
struct UFOVHandlerFunctions_GetDefaultTargetFOV_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.FOVHandlerFunctions.GetDefaultFOV
struct UFOVHandlerFunctions_GetDefaultFOV_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.FOVHandlerFunctions.GetBlendSpeed
struct UFOVHandlerFunctions_GetBlendSpeed_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.FrontendCameraComponent.SetMapTablePlaybackRate
struct UFrontendCameraComponent_SetMapTablePlaybackRate_Params
{
	float                                              InPlaybackRate;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.FrontendCameraComponent.MapTableAnimationFinished
struct UFrontendCameraComponent_MapTableAnimationFinished_Params
{
};

// Function Athena.FrontendGameMode.BeginPreloading
struct AFrontendGameMode_BeginPreloading_Params
{
};

// Function Athena.GameAudioInterface.UnregisterShip
struct UGameAudioInterface_UnregisterShip_Params
{
	class AShip*                                       Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.GameAudioInterface.RegisterShip
struct UGameAudioInterface_RegisterShip_Params
{
	class AShip*                                       Ship;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.GameAudioInterface.GetClosestNonCrewShipDistance
struct UGameAudioInterface_GetClosestNonCrewShipDistance_Params
{
	class AShip*                                       PlayerShip;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.GameplayEventSignal.DeactivateAndDestroy
struct AGameplayEventSignal_DeactivateAndDestroy_Params
{
};

// Function Athena.GameStateFunctionLibrary.GetAthenaGameStateFromWorld
struct UGameStateFunctionLibrary_GetAthenaGameStateFromWorld_Params
{
	class UWorld*                                      InWorld;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaGameState*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.GameStateFunctionLibrary.GetAthenaGameState
struct UGameStateFunctionLibrary_GetAthenaGameState_Params
{
	class UObject*                                     InWorldContextObject;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaGameState*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.GarbageGenerator.SetSizeOfPersistentSet
struct AGarbageGenerator_SetSizeOfPersistentSet_Params
{
	int                                                InSizeOfPersistentSet;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.GarbageGenerator.SetGarbageGenerationRatePerTick
struct AGarbageGenerator_SetGarbageGenerationRatePerTick_Params
{
	int                                                InAmountToGenerate;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.GenericPart.OnPartMeshLoaded
struct AGenericPart_OnPartMeshLoaded_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.GenericPart.OnPartDescLoaded
struct AGenericPart_OnPartDescLoaded_Params
{
	class UGenericPartDescAsset*                       Desc;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.GhostShipDoor.Multicast_ResetForPlayer
struct AGhostShipDoor_Multicast_ResetForPlayer_Params
{
	class APawn*                                       Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.GhostShipDoor.Multicast_OpenForPlayer
struct AGhostShipDoor_Multicast_OpenForPlayer_Params
{
	class APawn*                                       Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.GhostShipDoor.Multicast_OnDoorFullyOpen
struct AGhostShipDoor_Multicast_OnDoorFullyOpen_Params
{
	class APawn*                                       Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.GhostShipTickManager.EnableActorsOnGhostShip
struct AGhostShipTickManager_EnableActorsOnGhostShip_Params
{
	bool                                               bEnable;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.HandlesFunctionLibrary.NotEqual
struct UHandlesFunctionLibrary_NotEqual_Params
{
	struct FBlueprintableIntegerHandle                 A;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FBlueprintableIntegerHandle                 B;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0004
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.HandlesFunctionLibrary.IsValid
struct UHandlesFunctionLibrary_IsValid_Params
{
	struct FBlueprintableIntegerHandle                 Handle;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.HandlesFunctionLibrary.Equal
struct UHandlesFunctionLibrary_Equal_Params
{
	struct FBlueprintableIntegerHandle                 A;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FBlueprintableIntegerHandle                 B;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0004
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.HealthComponent.ToggleGodMode
struct UHealthComponent_ToggleGodMode_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.HealthComponent.TakeDamage
struct UHealthComponent_TakeDamage_Params
{
	struct FDamageInstance                             DamageInstance;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.HealthComponent.StopContinuousHealthChange
struct UHealthComponent_StopContinuousHealthChange_Params
{
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.HealthComponent.StartContinuousHealthChange
struct UHealthComponent_StartContinuousHealthChange_Params
{
	float                                              AmountPerSecond;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.HealthComponent.SetHealth
struct UHealthComponent_SetHealth_Params
{
	float                                              Amount;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.HealthComponent.ResetToMaxHealth
struct UHealthComponent_ResetToMaxHealth_Params
{
};

// Function Athena.HealthComponent.PreventAdjustmentFromHealthChangeReason
struct UHealthComponent_PreventAdjustmentFromHealthChangeReason_Params
{
	TEnumAsByte<EPreventDamageTypeLockReasons>         LockReason;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EHealthChangedReason>                  HealthChangeReason;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
};

// Function Athena.HealthComponent.PredictHealthChange
struct UHealthComponent_PredictHealthChange_Params
{
	float                                              Change;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.HealthComponent.OnRep_ContinuousHealthChangeSources
struct UHealthComponent_OnRep_ContinuousHealthChangeSources_Params
{
	TArray<struct FContinuousHealthChange>             PrevContinuousDamageSources;                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function Athena.HealthComponent.Multicast_SetHealthOnClients
struct UHealthComponent_Multicast_SetHealthOnClients_Params
{
	struct FHealthChange                               Instance;                                                 // (CPF_ConstParm, CPF_Parm) 0000
};

// Function Athena.HealthComponent.IsGodModeActive
struct UHealthComponent_IsGodModeActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.HealthComponent.IsDamageTypePrevented
struct UHealthComponent_IsDamageTypePrevented_Params
{
	TEnumAsByte<EHealthChangedReason>                  HealthChangeReason;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0001
};

// Function Athena.HealthComponent.GetMaxHealth
struct UHealthComponent_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.HealthComponent.GetCurrentHealth
struct UHealthComponent_GetCurrentHealth_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.HealthComponent.EnableAdjustHealth
struct UHealthComponent_EnableAdjustHealth_Params
{
	TEnumAsByte<EHealthAdjustLockReasons>              Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Strict;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
};

// Function Athena.HealthComponent.DisableAdjustHealth
struct UHealthComponent_DisableAdjustHealth_Params
{
	TEnumAsByte<EHealthAdjustLockReasons>              Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Strict;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
};

// Function Athena.HealthComponent.CanAdjustHealth
struct UHealthComponent_CanAdjustHealth_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.HealthComponent.AllowAdjustmentFromHealthChangeReason
struct UHealthComponent_AllowAdjustmentFromHealthChangeReason_Params
{
	TEnumAsByte<EPreventDamageTypeLockReasons>         LockReason;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EHealthChangedReason>                  HealthChangeReason;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
};

// Function Athena.HealthComponent.AdjustHealth
struct UHealthComponent_AdjustHealth_Params
{
	float                                              Amount;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.HealthTestFunctions.MakeDamageInstance
struct UHealthTestFunctions_MakeDamageInstance_Params
{
	float                                              Amount;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      From;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FDamageInstance                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0018
};

// Function Athena.HideInObjectActionStateId.PushCharacterIntoHideInObjectActionState
struct UHideInObjectActionStateId_PushCharacterIntoHideInObjectActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      ObjectToHideIn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Dockable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.HideInObjectActionStateId.PopCharacterOutOfHideInObjectActionState
struct UHideInObjectActionStateId_PopCharacterOutOfHideInObjectActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.HideInObjectCompositeInputHandler.OnUseConcealingObjectNotificationRecieved
struct UHideInObjectCompositeInputHandler_OnUseConcealingObjectNotificationRecieved_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Hideout.OnPlayerInViewOfHideout
struct AHideout_OnPlayerInViewOfHideout_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  OverlapInfo;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.HideoutEntrance.OnBeginOverlap
struct AHideoutEntrance_OnBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.HideoutExit.OnBeginOverlap
struct AHideoutExit_OnBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.HitReactionComponent.OnHitReactionImpact
struct UHitReactionComponent_OnHitReactionImpact_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.HitReactionComponent.Multicast_ProcessHitReaction
struct UHitReactionComponent_Multicast_ProcessHitReaction_Params
{
	struct FImpactDamageEvent                          DamageEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
};

// Function Athena.MockHitReactionComponent.SetServerAuthoritiveReactions
struct UMockHitReactionComponent_SetServerAuthoritiveReactions_Params
{
	bool                                               ServerAuthoritive;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MockHitReactionComponent.ResetMockHitReactionComponent
struct UMockHitReactionComponent_ResetMockHitReactionComponent_Params
{
};

// Function Athena.Hole.OnStateChanged
struct AHole_OnStateChanged_Params
{
	TEnumAsByte<EHoleState>                            InState;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Hole.OnRep_State
struct AHole_OnRep_State_Params
{
};

// Function Athena.ShovelHole.OnRep_ParallaxValue
struct AShovelHole_OnRep_ParallaxValue_Params
{
};

// Function Athena.ShipPartInterface.SetShip
struct UShipPartInterface_SetShip_Params
{
	class AShip*                                       Ship;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipPartInterface.ClearShip
struct UShipPartInterface_ClearShip_Params
{
};

// Function Athena.LeakableInterface.GetLeakAmount
struct ULeakableInterface_GetLeakAmount_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RepairableInterface.HandleDestroy
struct URepairableInterface_HandleDestroy_Params
{
};

// Function Athena.RepairableInterface.GetRepairType
struct URepairableInterface_GetRepairType_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RepairableInterface.GetRepairTime
struct URepairableInterface_GetRepairTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RepairableInterface.GetRepairableState
struct URepairableInterface_GetRepairableState_Params
{
	TEnumAsByte<ERepairableState>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageZone.UpdateWaterLeak
struct ADamageZone_UpdateWaterLeak_Params
{
	bool                                               ForceUpdate;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageZone.PlayHitVFX
struct ADamageZone_PlayHitVFX_Params
{
	class UParticleSystem*                             Vfx;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageZone.OnUnderwaterStateChanged
struct ADamageZone_OnUnderwaterStateChanged_Params
{
};

// Function Athena.DamageZone.OnShipSet
struct ADamageZone_OnShipSet_Params
{
};

// Function Athena.DamageZone.OnShipCleared
struct ADamageZone_OnShipCleared_Params
{
};

// Function Athena.DamageZone.OnShipBeginsToSink
struct ADamageZone_OnShipBeginsToSink_Params
{
};

// Function Athena.DamageZone.OnRepairMounted
struct ADamageZone_OnRepairMounted_Params
{
};

// Function Athena.DamageZone.OnRepairableStateUpdate
struct ADamageZone_OnRepairableStateUpdate_Params
{
	TEnumAsByte<ERepairableState>                      InRepairableState;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageZone.OnRep_DamageLevel
struct ADamageZone_OnRep_DamageLevel_Params
{
};

// Function Athena.DamageZone.OnRep_AuthorityRepairableState
struct ADamageZone_OnRep_AuthorityRepairableState_Params
{
};

// Function Athena.DamageZone.OnInitialise
struct ADamageZone_OnInitialise_Params
{
};

// Function Athena.DamageZone.OnDamageLevelUpdate
struct ADamageZone_OnDamageLevelUpdate_Params
{
	int                                                InDamageLevel;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageZone.Multicast_PlayDamageEffectsRPC
struct ADamageZone_Multicast_PlayDamageEffectsRPC_Params
{
	bool                                               PlaySfx;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               PlayVFX;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
};

// Function Athena.DamageZone.IsOnSinkingShip
struct ADamageZone_IsOnSinkingShip_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageZone.IsAboutToBlow
struct ADamageZone_IsAboutToBlow_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageZone.InitialiseInternalWaterSamplePositions
struct ADamageZone_InitialiseInternalWaterSamplePositions_Params
{
};

// Function Athena.DamageZone.GetShipOwner
struct ADamageZone_GetShipOwner_Params
{
	class AShip*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageZone.GetRepairMountLocation
struct ADamageZone_GetRepairMountLocation_Params
{
	class USceneComponent*                             MountLocation;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	struct FName                                       MountSocket;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.DamageZone.GetLeakAmount
struct ADamageZone_GetLeakAmount_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageZone.GetDamagePercentage
struct ADamageZone_GetDamagePercentage_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageZone.GetDamageLevel
struct ADamageZone_GetDamageLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DamageZone.ApplyDamage
struct ADamageZone_ApplyDamage_Params
{
	struct FHullDamageHit                              InHit;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.HullDamage.ShouldHitGenerateDecal
struct AHullDamage_ShouldHitGenerateDecal_Params
{
	struct FVector                                     HitNormal;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     HitVelocity;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
	float                                              HitStrength;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 001C
};

// Function Athena.HullDamage.GetDamageZonesByDamagerType
struct AHullDamage_GetDamageZonesByDamagerType_Params
{
	class UClass*                                      InDamagerType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     InPosition;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	int                                                InNumDamageZones;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	TArray<class ADamageZone*>                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0018
};

// Function Athena.HullDamage.CalculateHitStrengthForImpact
struct AHullDamage_CalculateHitStrengthForImpact_Params
{
	struct FVector                                     HitNormal;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     HitVelocity;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
	float                                              HitStrength;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 001C
};

// Function Athena.ShipInternalWater.TryGetIntersectionPosition
struct AShipInternalWater_TryGetIntersectionPosition_Params
{
	struct FVector                                     StartPosition;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     EndPosition;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
	struct FVector                                     IntersectionPosition;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0024
};

// Function Athena.ShipInternalWater.ShrinkWaterOcclusionVolume
struct AShipInternalWater_ShrinkWaterOcclusionVolume_Params
{
	float                                              Time;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipInternalWater.SetNormalizedWaterAmountLimit
struct AShipInternalWater_SetNormalizedWaterAmountLimit_Params
{
	float                                              NormalizedWaterAmount;                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipInternalWater.SetNormalizedWaterAmount
struct AShipInternalWater_SetNormalizedWaterAmount_Params
{
	float                                              NoramlisedWaterAmount;                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipInternalWater.RegisterComponents
struct AShipInternalWater_RegisterComponents_Params
{
	class UCurveFloat*                                 CurveFloat;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipInternalWater.OnRep_ServerWaterAmount
struct AShipInternalWater_OnRep_ServerWaterAmount_Params
{
};

// Function Athena.ShipInternalWater.IsWaterMeshVisible
struct AShipInternalWater_IsWaterMeshVisible_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipInternalWater.IsOcclusionZoneFullyReduced
struct AShipInternalWater_IsOcclusionZoneFullyReduced_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipInternalWater.GetWaterAmount
struct AShipInternalWater_GetWaterAmount_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipInternalWater.GetNormalizedWaterAmount
struct AShipInternalWater_GetNormalizedWaterAmount_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipInternalWater.GetNormalizedVisualWaterAmount
struct AShipInternalWater_GetNormalizedVisualWaterAmount_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipInternalWater.GetDistanceFromPosition
struct AShipInternalWater_GetDistanceFromPosition_Params
{
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.ShipInternalWater.AddWaterAmount
struct AShipInternalWater_AddWaterAmount_Params
{
	float                                              WaterToAdd;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ImpactDecalParamModifier.SetParamValues
struct UImpactDecalParamModifier_SetParamValues_Params
{
	struct FHitResult                                  HitResult;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UMaterialInstanceDynamic*                    DecalMatInstance;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0080
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0088
};

// Function Athena.ImpactDecalParamModifierTime.SetParamValues
struct UImpactDecalParamModifierTime_SetParamValues_Params
{
	struct FHitResult                                  HitResult;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UMaterialInstanceDynamic*                    DecalMatInstance;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0080
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0088
};

// Function Athena.ImpactDecalParamModifierVomit.SetParamValues
struct UImpactDecalParamModifierVomit_SetParamValues_Params
{
	struct FHitResult                                  HitResult;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UMaterialInstanceDynamic*                    DecalMatInstance;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0080
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0088
};

// Function Athena.IngestedByKrakenActionStateId.PushCharacterIntoIngestedByKrakenActionState
struct UIngestedByKrakenActionStateId_PushCharacterIntoIngestedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AKrakenAnimatedTentacle*                     Tentacle;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.IngestedByKrakenActionStateId.PopCharacterOutOfIngestedByKrakenActionState
struct UIngestedByKrakenActionStateId_PopCharacterOutOfIngestedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.IngestedByKrakenCompositeInputHandler.OnLookUpRate
struct UIngestedByKrakenCompositeInputHandler_OnLookUpRate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.IngestedByKrakenCompositeInputHandler.OnLookUp
struct UIngestedByKrakenCompositeInputHandler_OnLookUp_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.IntentCombinerComponent.SetIntentProviders
struct UIntentCombinerComponent_SetIntentProviders_Params
{
	TArray<class UControllableIntentComponent*>        InIntentProviders;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function Athena.IntentCombinerComponent.GetCombinedIntent
struct UIntentCombinerComponent_GetCombinedIntent_Params
{
	bool                                               IsMoving;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.IntentComponent.SetIntent
struct UIntentComponent_SetIntent_Params
{
	float                                              NewIntent;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.IntentComponent.Server_SetIntent
struct UIntentComponent_Server_SetIntent_Params
{
	float                                              NewIntent;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.IntentComponent.GetIntent
struct UIntentComponent_GetIntent_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ClimbingComponent.SetClimbId
struct UClimbingComponent_SetClimbId_Params
{
	unsigned char                                      InClimbId;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ClimbingComponent.IsClimbIdInSyncWithServer
struct UClimbingComponent_IsClimbIdInSyncWithServer_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ClimbingComponent.GetServerHeight
struct UClimbingComponent_GetServerHeight_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ClimbingComponent.GetIsCurrentlyClimbing
struct UClimbingComponent_GetIsCurrentlyClimbing_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllableIntentComponent.HasController
struct UControllableIntentComponent_HasController_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ControllableIntentComponent.GetIntent
struct UControllableIntentComponent_GetIntent_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.CapstanArm.GetLookAtPos
struct ACapstanArm_GetLookAtPos_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.DebugShipController.Server_RequestUpdateSailsLowered
struct ADebugShipController_Server_RequestUpdateSailsLowered_Params
{
	float                                              InRateOfChange;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DebugShipController.Server_RequestUpdateSailsAngle
struct ADebugShipController_Server_RequestUpdateSailsAngle_Params
{
	float                                              InRateOfChange;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.DebugShipController.Server_RequestToggleAnchorState
struct ADebugShipController_Server_RequestToggleAnchorState_Params
{
};

// Function Athena.DebugShipController.Server_RequestSetRuddersAngleRatio
struct ADebugShipController_Server_RequestSetRuddersAngleRatio_Params
{
	float                                              InRateOfChange;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerLoadingInteractionPoint.Server_NotifyInteractionPointUsed
struct APlayerLoadingInteractionPoint_Server_NotifyInteractionPointUsed_Params
{
	class AActor*                                      UsingActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SailManipulatorInterface.SetLocked
struct USailManipulatorInterface_SetLocked_Params
{
	bool                                               IsLocked;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SailManipulatorInterface.SetIntent
struct USailManipulatorInterface_SetIntent_Params
{
	float                                              NewIntent;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SailManipulatorInterface.IsLocked
struct USailManipulatorInterface_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailManipulatorInterface.GetTopMeshComponent
struct USailManipulatorInterface_GetTopMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.SailManipulatorInterface.GetCurrentIntent
struct USailManipulatorInterface_GetCurrentIntent_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailManipulatorInterface.GetBaseMeshComponent
struct USailManipulatorInterface_GetBaseMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.SailAngleInterface.GetSailTurnRate
struct USailAngleInterface_GetSailTurnRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailAngleInterface.GetSailAngleRatio
struct USailAngleInterface_GetSailAngleRatio_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailAngleInterface.GetRightRopeStartingPoint
struct USailAngleInterface_GetRightRopeStartingPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailAngleInterface.GetRightRopeEndingPoint
struct USailAngleInterface_GetRightRopeEndingPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailAngleInterface.GetLeftRopeStartingPoint
struct USailAngleInterface_GetLeftRopeStartingPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailAngleInterface.GetLeftRopeEndingPoint
struct USailAngleInterface_GetLeftRopeEndingPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailHoistInterface.GetSailRaisedPercentage
struct USailHoistInterface_GetSailRaisedPercentage_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailHoistInterface.GetSailMovementRate
struct USailHoistInterface_GetSailMovementRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailHoistInterface.GetRopeStartingPoint
struct USailHoistInterface_GetRopeStartingPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailHoistInterface.GetRopeEndingPoint
struct USailHoistInterface_GetRopeEndingPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TestControllableObject.TestForceDisconnectIdleSecondsThreshold
struct ATestControllableObject_TestForceDisconnectIdleSecondsThreshold_Params
{
	float                                              DisconnectIdleThreshold;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TestControllableObject.TestForceCanDisconnectWhenIdle
struct ATestControllableObject_TestForceCanDisconnectWhenIdle_Params
{
	bool                                               CanDisconnect;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WheelInterface.GetWheelRate
struct UWheelInterface_GetWheelRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WheelInterface.GetWheelAngle
struct UWheelInterface_GetWheelAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WheelInterface.GetWantedWheelAngle
struct UWheelInterface_GetWantedWheelAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WheelInterface.GetServerWheelAngle
struct UWheelInterface_GetServerWheelAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WheelInterface.GetNormalizedWheelPosition
struct UWheelInterface_GetNormalizedWheelPosition_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WheelInterface.GetAnimationType
struct UWheelInterface_GetAnimationType_Params
{
	TEnumAsByte<EWheelAnimationType>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WheelInterface.GetAnimationTime
struct UWheelInterface_GetAnimationTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Wheel.Server_SetWheelAngle
struct AWheel_Server_SetWheelAngle_Params
{
	float                                              WheelAngleIncrement;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Wheel.OnWheelDescLoaded
struct AWheel_OnWheelDescLoaded_Params
{
	class UWheelDescAsset*                             WheelDesc;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Wheel.OnRep_ServerWheelAngle
struct AWheel_OnRep_ServerWheelAngle_Params
{
};

// Function Athena.Wheel.Multicast_ForceSetWheelAngle
struct AWheel_Multicast_ForceSetWheelAngle_Params
{
	float                                              Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Wheel.GetWheelMesh
struct AWheel_GetWheelMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.Wheel.GetMaxWheelAngle
struct AWheel_GetMaxWheelAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Wheel.ForceSetWheelAngle
struct AWheel_ForceSetWheelAngle_Params
{
	float                                              Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Wheel.ApplyWheelInput
struct AWheel_ApplyWheelInput_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TestDamageZone.TestStopWaterLeakSfx
struct ATestDamageZone_TestStopWaterLeakSfx_Params
{
};

// Function Athena.TestDamageZone.TestStopWaterLeakRepairingSfx
struct ATestDamageZone_TestStopWaterLeakRepairingSfx_Params
{
};

// Function Athena.TestDamageZone.TestPlayWaterLeakSfx
struct ATestDamageZone_TestPlayWaterLeakSfx_Params
{
};

// Function Athena.TestDamageZone.TestPlayWaterLeakRepairingSfx
struct ATestDamageZone_TestPlayWaterLeakRepairingSfx_Params
{
};

// Function Athena.TestDamageZone.IsWaterLeakSfxPlaying
struct ATestDamageZone_IsWaterLeakSfxPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TestDamageZone.IsWaterLeakRepairSfxPlaying
struct ATestDamageZone_IsWaterLeakRepairSfxPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Bell.RingBell
struct ABell_RingBell_Params
{
	bool                                               IsInTurbulence;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InteractableLight.OnRep_OnLightStateChanged
struct AInteractableLight_OnRep_OnLightStateChanged_Params
{
};

// Function Athena.InteractableLight.LightStateChanged
struct AInteractableLight_LightStateChanged_Params
{
};

// Function Athena.InteractableLight.IsLightOn
struct AInteractableLight_IsLightOn_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Mermaid.OnRep_State
struct AMermaid_OnRep_State_Params
{
};

// Function Athena.Mermaid.Multicast_TeleportPlayerRPC
struct AMermaid_Multicast_TeleportPlayerRPC_Params
{
	class AAthenaPlayerCharacter*                      Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Mermaid.Multicast_SurfacedRPC
struct AMermaid_Multicast_SurfacedRPC_Params
{
};

// Function Athena.Mermaid.Multicast_DiveRPC
struct AMermaid_Multicast_DiveRPC_Params
{
};

// Function Athena.Mermaid.IsBeaconActive
struct AMermaid_IsBeaconActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Mermaid.GetUniqueMermaidId
struct AMermaid_GetUniqueMermaidId_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Mermaid.GetCrewIdsResponsibleForSavingAsCopy
struct AMermaid_GetCrewIdsResponsibleForSavingAsCopy_Params
{
	TArray<struct FGuid>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.Mermaid.AddCrewResponsibleForSaving
struct AMermaid_AddCrewResponsibleForSaving_Params
{
	struct FGuid                                       CrewId;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MusicBox.OnRep_OnIsPlayingChanged
struct AMusicBox_OnRep_OnIsPlayingChanged_Params
{
	bool                                               WasPlaying;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipwrightOneShot.TestForceExpireAllRestockMoratoriums
struct AShipwrightOneShot_TestForceExpireAllRestockMoratoriums_Params
{
};

// Function Athena.ShipwrightOneShot.RestockShip
struct AShipwrightOneShot_RestockShip_Params
{
	class AActor*                                      InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipwrightOneShot.IsShipCloseAndSlowEnoughToRestock
struct AShipwrightOneShot_IsShipCloseAndSlowEnoughToRestock_Params
{
	class AShip*                                       Ship;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ShipwrightOneShot.GetTimeInSecondsUntilNextRestock
struct AShipwrightOneShot_GetTimeInSecondsUntilNextRestock_Params
{
	class AActor*                                      Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ShipwrightOneShot.GetHasRestockMoratoriumDataForPlayerCrew
struct AShipwrightOneShot_GetHasRestockMoratoriumDataForPlayerCrew_Params
{
	class AActor*                                      Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.LandmarkReactionInterface.StopReaction
struct ULandmarkReactionInterface_StopReaction_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LandmarkReactionInterface.StartReaction
struct ULandmarkReactionInterface_StartReaction_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LandmarkReactionActor.StopReaction
struct ALandmarkReactionActor_StopReaction_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LandmarkReactionActor.StartReaction
struct ALandmarkReactionActor_StartReaction_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SkeletonFortDoor.ResetDoor
struct ASkeletonFortDoor_ResetDoor_Params
{
};

// Function Athena.SkeletonFortDoor.OpenDoor
struct ASkeletonFortDoor_OpenDoor_Params
{
};

// Function Athena.SkeletonFortDoor.OnRep_ServerDoorState
struct ASkeletonFortDoor_OnRep_ServerDoorState_Params
{
};

// Function Athena.BuoyantStorageContainer.OnRep_PhysicsState
struct ABuoyantStorageContainer_OnRep_PhysicsState_Params
{
};

// Function Athena.TankardRefiller.Replenish
struct ATankardRefiller_Replenish_Params
{
};

// Function Athena.TankardRefiller.IsAtMaxCapacity
struct ATankardRefiller_IsAtMaxCapacity_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TankardRefiller.HasRemainingCapacity
struct ATankardRefiller_HasRemainingCapacity_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TankardRefiller.GetRemainingCapacity
struct ATankardRefiller_GetRemainingCapacity_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TankardRefiller.GetRefillCost
struct ATankardRefiller_GetRefillCost_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TankardRefiller.GetCapacity
struct ATankardRefiller_GetCapacity_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TankardRefiller.Deplete
struct ATankardRefiller_Deplete_Params
{
};

// Function Athena.TankardRefiller.CanBeReplenished
struct ATankardRefiller_CanBeReplenished_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TankardRefiller.AddDefaultStockLevel
struct ATankardRefiller_AddDefaultStockLevel_Params
{
};

// Function Athena.TankardRefillerMock.SetRemainingCapacity
struct ATankardRefillerMock_SetRemainingCapacity_Params
{
	int                                                InRemainingCapacity;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TankardRefillerMock.SetCapacity
struct ATankardRefillerMock_SetCapacity_Params
{
	int                                                InCapacity;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LadderInterface.GetLadderHeight
struct ULadderInterface_GetLadderHeight_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ladder.GetTopLadderRungTransform
struct ALadder_GetTopLadderRungTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ladder.GetBottomLadderRungTransform
struct ALadder_GetBottomLadderRungTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.VoyageProposalContainer.SetManifest
struct AVoyageProposalContainer_SetManifest_Params
{
	class ACrewShipManifest*                           Manifest;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TreasureChestItemProxy.OnRep_State
struct ATreasureChestItemProxy_OnRep_State_Params
{
	TEnumAsByte<ETreasureChestProxyState>              OldState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TreasureChestItemProxy.OnRep_NumDigsLeft
struct ATreasureChestItemProxy_OnRep_NumDigsLeft_Params
{
	int                                                PrevNumDigsLeft;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MessageInABottleItemProxy.Multicast_Smash
struct AMessageInABottleItemProxy_Multicast_Smash_Params
{
};

// Function Athena.VotableObjectView.OnVoteRemoved
struct AVotableObjectView_OnVoteRemoved_Params
{
	TScriptInterface<class UVoterInterface>            Voter;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.VotableObjectView.OnVoteCompleted
struct AVotableObjectView_OnVoteCompleted_Params
{
	bool                                               IsWinner;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.VotableObjectView.OnVoteAdded
struct AVotableObjectView_OnVoteAdded_Params
{
	TScriptInterface<class UVoterInterface>            Voter;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.VotableObjectView.GetVoter
struct AVotableObjectView_GetVoter_Params
{
	int                                                Index;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TScriptInterface<class UVoterInterface>            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InteractablesTestFunctions.SpawnLargeShipForMPTesting
struct UInteractablesTestFunctions_SpawnLargeShipForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FRotator                                    Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	class AShip*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function Athena.InteractablesTestFunctions.SetupServerSideAndSpawnShip
struct UInteractablesTestFunctions_SetupServerSideAndSpawnShip_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              CapstanPosition;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              SailsLoweredPosition;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	class AShip*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.InteractablesTestFunctions.SetupClientSide
struct UInteractablesTestFunctions_SetupClientSide_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AShip*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InteractionCompositeInputHandler.OnSecondaryInteractReleased
struct UInteractionCompositeInputHandler_OnSecondaryInteractReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InteractionCompositeInputHandler.OnSecondaryInteract
struct UInteractionCompositeInputHandler_OnSecondaryInteract_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InteractionCompositeInputHandler.OnPrimaryInteractReleased
struct UInteractionCompositeInputHandler_OnPrimaryInteractReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InteractionCompositeInputHandler.OnPrimaryInteract
struct UInteractionCompositeInputHandler_OnPrimaryInteract_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InteractionPoliciesTestFunctions.WithinInteractionAngleValidationPolicy_WithInteractorBehindTheObject_IsInvalidReturnsFalse
struct UInteractionPoliciesTestFunctions_WithinInteractionAngleValidationPolicy_WithInteractorBehindTheObject_IsInvalidReturnsFalse_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      InInteractable;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.InteractionPoliciesTestFunctions.WithinInteractionAngleValidationPolicy_WithinInteractionAngleInteractor_IsValidReturnsTrue
struct UInteractionPoliciesTestFunctions_WithinInteractionAngleValidationPolicy_WithinInteractionAngleInteractor_IsValidReturnsTrue_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InInteractionRegionDegrees;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UInteractableArea*                           InRegionInteractor;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Athena.InteractionPoliciesTestFunctions.WithinInteractionAngleValidationPolicy_OutsideInteractionAngleInteractor_IsValidReturnsFalse
struct UInteractionPoliciesTestFunctions_WithinInteractionAngleValidationPolicy_OutsideInteractionAngleInteractor_IsValidReturnsFalse_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InInteractionRegionDegrees;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UInteractableArea*                           InOutOfRegionInteractor;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Athena.InteractionPoliciesTestFunctions.ClosestToPlayerSortingPolicy_WithTwoInteractablesClosestAndFurthest_ClosestTakesHighestPrecedent
struct UInteractionPoliciesTestFunctions_ClosestToPlayerSortingPolicy_WithTwoInteractablesClosestAndFurthest_ClosestTakesHighestPrecedent_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UInteractableArea*                           InClosestInteractable;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UInteractableArea*                           InFurthestInteractable;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Athena.InteractionPoliciesTestFunctions.CenterOfScreenDistanceSortingPolicy_ExecuteTakesHighestPrecedent
struct UInteractionPoliciesTestFunctions_CenterOfScreenDistanceSortingPolicy_ExecuteTakesHighestPrecedent_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UInteractableArea*                           InLhsInteractor;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UInteractableArea*                           InRhsInteractor;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              InPlayerDistanceDelta;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              InCenterDistanceDelta;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function Athena.InteractionPoliciesTestFunctions.CanInteractValidationPolicy_WithCantInteractInteractor_IsValidReturnsFalse
struct UInteractionPoliciesTestFunctions_CanInteractValidationPolicy_WithCantInteractInteractor_IsValidReturnsFalse_Params
{
	class AActor*                                      InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UInteractableArea*                           InCanInteractInteractor;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.InteractionPoliciesTestFunctions.CanInteractValidationPolicy_WithCanInteractInteractor_IsValidReturnsTrue
struct UInteractionPoliciesTestFunctions_CanInteractValidationPolicy_WithCanInteractInteractor_IsValidReturnsTrue_Params
{
	class AActor*                                      InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UInteractableArea*                           InCanInteractInteractor;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.InteractionPoliciesTestFunctions.AirbornePolicy_ExecuteCanInteract
struct UInteractionPoliciesTestFunctions_AirbornePolicy_ExecuteCanInteract_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      InInteractable;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.InteractObjectActionStateId.PushCharacterIntoInteractObjectActionState
struct UInteractObjectActionStateId_PushCharacterIntoInteractObjectActionState_Params
{
	class AActor*                                      InteractObject;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorComponent.WieldItemByActor
struct UInventoryManipulatorComponent_WieldItemByActor_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               UnwieldFast;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0009
};

// Function Athena.InventoryManipulatorComponent.WieldItem
struct UInventoryManipulatorComponent_WieldItem_Params
{
	int                                                ItemIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Fast;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.InventoryManipulatorComponent.ToggleWieldItem
struct UInventoryManipulatorComponent_ToggleWieldItem_Params
{
};

// Function Athena.InventoryManipulatorComponent.Server_DropItemRPC
struct UInventoryManipulatorComponent_Server_DropItemRPC_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorComponent.RemoveItem
struct UInventoryManipulatorComponent_RemoveItem_Params
{
	class AItemInfo*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorComponent.QuickSelectItemOfType
struct UInventoryManipulatorComponent_QuickSelectItemOfType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                TypedItemIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.InventoryManipulatorComponent.QuickSelectItemOfCategory
struct UInventoryManipulatorComponent_QuickSelectItemOfCategory_Params
{
	class UClass*                                      Category;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                IndexIntoCategory;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorComponent.QuickSelectItem
struct UInventoryManipulatorComponent_QuickSelectItem_Params
{
	int                                                ItemIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorComponent.PickUpItem
struct UInventoryManipulatorComponent_PickUpItem_Params
{
	class AItemInfo*                                   ItemInfo;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               AndWield;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0009
};

// Function Athena.InventoryManipulatorComponent.Multicast_ItemPickedUpRPC
struct UInventoryManipulatorComponent_Multicast_ItemPickedUpRPC_Params
{
	TEnumAsByte<EWieldableItemSize>                    ItemSize;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               WasEmptyHanded;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
};

// Function Athena.InventoryManipulatorComponent.Multicast_CurrentItemActorIndexChangedRPC
struct UInventoryManipulatorComponent_Multicast_CurrentItemActorIndexChangedRPC_Params
{
	int                                                NewIndex;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorComponent.IsIdle
struct UInventoryManipulatorComponent_IsIdle_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorComponent.GetNumberOfItemsOfItemCategory
struct UInventoryManipulatorComponent_GetNumberOfItemsOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorComponent.GetCurrentItemIndex
struct UInventoryManipulatorComponent_GetCurrentItemIndex_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorComponent.DropWieldedItem
struct UInventoryManipulatorComponent_DropWieldedItem_Params
{
	TEnumAsByte<EDropItemReturnCode>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorComponent.DropOrDestroyLargeWieldedItem
struct UInventoryManipulatorComponent_DropOrDestroyLargeWieldedItem_Params
{
};

// Function Athena.InventoryManipulatorComponent.DetermineDropPos
struct UInventoryManipulatorComponent_DetermineDropPos_Params
{
	struct FVector                                     InSpawnPos;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FHitResult                                  OutHit;                                                   // (CPF_Parm, CPF_OutParm) 000C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 008C
};

// Function Athena.InventoryManipulatorComponent.CycleItemUp
struct UInventoryManipulatorComponent_CycleItemUp_Params
{
};

// Function Athena.InventoryManipulatorComponent.CycleItemType
struct UInventoryManipulatorComponent_CycleItemType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorComponent.CycleItemDown
struct UInventoryManipulatorComponent_CycleItemDown_Params
{
};

// Function Athena.InventoryManipulatorComponent.CycleItemCategory
struct UInventoryManipulatorComponent_CycleItemCategory_Params
{
	class UClass*                                      Category;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorComponent.ConsumeItem
struct UInventoryManipulatorComponent_ConsumeItem_Params
{
	class AItemInfo*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorComponent.CanDropWieldedItem
struct UInventoryManipulatorComponent_CanDropWieldedItem_Params
{
	TEnumAsByte<EDropItemReturnCode>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.InventoryManipulatorComponent.CanAddItemOfItemCategory
struct UInventoryManipulatorComponent_CanAddItemOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<ECanAddItemQueryResult>                ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorComponent.AddItem
struct UInventoryManipulatorComponent_AddItem_Params
{
	class AItemInfo*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.InventoryManipulatorComponentMock.ForceDroppedItemToAttachToHitActor
struct UInventoryManipulatorComponentMock_ForceDroppedItemToAttachToHitActor_Params
{
	bool                                               InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.AthenaGameState.OnRep_ReplicatedWindService
struct AAthenaGameState_OnRep_ReplicatedWindService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedWaterService
struct AAthenaGameState_OnRep_ReplicatedWaterService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedTimeService
struct AAthenaGameState_OnRep_ReplicatedTimeService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedStormService
struct AAthenaGameState_OnRep_ReplicatedStormService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedShipwrightService
struct AAthenaGameState_OnRep_ReplicatedShipwrightService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedShipService
struct AAthenaGameState_OnRep_ReplicatedShipService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedPlayerManagerService
struct AAthenaGameState_OnRep_ReplicatedPlayerManagerService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedKrakenService
struct AAthenaGameState_OnRep_ReplicatedKrakenService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedIslandService
struct AAthenaGameState_OnRep_ReplicatedIslandService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedDrawDebugService
struct AAthenaGameState_OnRep_ReplicatedDrawDebugService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedCrewService
struct AAthenaGameState_OnRep_ReplicatedCrewService_Params
{
};

// Function Athena.IslandData.OnOverlapEnd
struct AIslandData_OnOverlapEnd_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.IslandData.OnOverlapBegin
struct AIslandData_OnOverlapBegin_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  OverlapInfo;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.IslandData.MakeFIsland
struct AIslandData_MakeFIsland_Params
{
	struct FIsland                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.IslandLocationVerifierInterface.VerifyLocation
struct UIslandLocationVerifierInterface_VerifyLocation_Params
{
	struct FVector                                     Location;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               RequiresNavMesh;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FIslandLocationVerifierResult               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0010
};

// Function Athena.IslandService.OnRep_ReplicatedIslandArray
struct AIslandService_OnRep_ReplicatedIslandArray_Params
{
};

// Function Athena.IslandService.CollectLandmarksFromWorld
struct AIslandService_CollectLandmarksFromWorld_Params
{
};

// Function Athena.IslandService.CollectIslandDataFromWorld
struct AIslandService_CollectIslandDataFromWorld_Params
{
};

// Function Athena.ItemFactoryFunctions.SpawnItemAsWieldable
struct UItemFactoryFunctions_SpawnItemAsWieldable_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      What;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FTransform                                  Where;                                                    // (CPF_Parm, CPF_IsPlainOldData) 0010
	class AActor*                                      Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	class AWieldableItem*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0048
};

// Function Athena.ItemFactoryFunctions.SpawnItemAsProxy
struct UItemFactoryFunctions_SpawnItemAsProxy_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      What;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FTransform                                  Where;                                                    // (CPF_Parm, CPF_IsPlainOldData) 0010
	class AItemProxy*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.ItemFactoryFunctions.SpawnItem
struct UItemFactoryFunctions_SpawnItem_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      What;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FTransform                                  Where;                                                    // (CPF_Parm, CPF_IsPlainOldData) 0010
	class AItemInfo*                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function Athena.ItemLoadoutControlInterface.SetItemLoadout
struct UItemLoadoutControlInterface_SetItemLoadout_Params
{
	struct FItemLoadout                                InItemLoadout;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.ItemLoadoutControlInterface.RemoveItem
struct UItemLoadoutControlInterface_RemoveItem_Params
{
	class AItemInfo*                                   InItem;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EItemLoadoutDestroyBehaviour>          InDestroyBehaviour;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0009
};

// Function Athena.ItemLoadoutControlInterface.PushItem
struct UItemLoadoutControlInterface_PushItem_Params
{
	class AItemInfo*                                   InItem;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ItemLoadoutControlInterface.EquipWeapon
struct UItemLoadoutControlInterface_EquipWeapon_Params
{
	class UClass*                                      InItemDesc;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                InIndex;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.ItemLoadoutControlInterface.EquipItem
struct UItemLoadoutControlInterface_EquipItem_Params
{
	class UClass*                                      InItemDesc;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ItemLoadoutComponent.OnRep_Slots
struct UItemLoadoutComponent_OnRep_Slots_Params
{
};

// Function Athena.ItemLoadoutComponent.OnItemDestroyed
struct UItemLoadoutComponent_OnItemDestroyed_Params
{
	class AActor*                                      InActor;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ItemPickupBlueprintFunctionLibrary.IsActorWieldingLargeItem
struct UItemPickupBlueprintFunctionLibrary_IsActorWieldingLargeItem_Params
{
	class AActor*                                      WieldingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.KrakenAnimatedTentacle.TestToggleInstantStateSwitching
struct AKrakenAnimatedTentacle_TestToggleInstantStateSwitching_Params
{
};

// Function Athena.KrakenAnimatedTentacle.SetMinHoldingTargetTime
struct AKrakenAnimatedTentacle_SetMinHoldingTargetTime_Params
{
	float                                              HoldingTime;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.KrakenAnimatedTentacle.SetCurrentTarget
struct AKrakenAnimatedTentacle_SetCurrentTarget_Params
{
	class AAthenaCharacter*                            Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.KrakenAnimatedTentacle.RequestState
struct AKrakenAnimatedTentacle_RequestState_Params
{
	class UClass*                                      NewState;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.KrakenAnimatedTentacle.RequestIdleState
struct AKrakenAnimatedTentacle_RequestIdleState_Params
{
	class UClass*                                      IdleState;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.KrakenAnimatedTentacle.OnRep_TentacleYaw
struct AKrakenAnimatedTentacle_OnRep_TentacleYaw_Params
{
	float                                              OldTentacleYaw;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.KrakenAnimatedTentacle.OnRep_TentacleWorldLocation
struct AKrakenAnimatedTentacle_OnRep_TentacleWorldLocation_Params
{
	struct FVector                                     OldTentacleWorldLocation;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.KrakenAnimatedTentacle.OnRep_PendingState
struct AKrakenAnimatedTentacle_OnRep_PendingState_Params
{
};

// Function Athena.KrakenAnimatedTentacle.OnRep_CurrentTarget
struct AKrakenAnimatedTentacle_OnRep_CurrentTarget_Params
{
};

// Function Athena.KrakenAnimatedTentacle.OnRep_CurrentState
struct AKrakenAnimatedTentacle_OnRep_CurrentState_Params
{
};

// Function Athena.KrakenAnimatedTentacle.OnRep_AnimationProgression
struct AKrakenAnimatedTentacle_OnRep_AnimationProgression_Params
{
};

// Function Athena.KrakenAnimatedTentacle.IsAnimationLooping
struct AKrakenAnimatedTentacle_IsAnimationLooping_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.KrakenAnimatedTentacle.GetCurrentTarget
struct AKrakenAnimatedTentacle_GetCurrentTarget_Params
{
	class AAthenaCharacter*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.KrakenAnimatedTentacle.GetCurrentState
struct AKrakenAnimatedTentacle_GetCurrentState_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.KrakenAnimatedTentacle.DockToActor
struct AKrakenAnimatedTentacle_DockToActor_Params
{
	class AActor*                                      ActorToDockTo;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.KrakenAnimatedTentacleRecordingAnimationInstance.StartRecordingAllAnimations
struct UKrakenAnimatedTentacleRecordingAnimationInstance_StartRecordingAllAnimations_Params
{
};

// Function Athena.KrakenDebugFunctionLibrary.SpawnTentacleAndSuckTarget
struct UKrakenDebugFunctionLibrary_SpawnTentacleAndSuckTarget_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	class UClass*                                      TentacleClass;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	class AAthenaCharacter*                            AthenaCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
	float                                              AnimPlayRate;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	float                                              SuckingTellTime;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0044
	class AKrakenAnimatedTentacle*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0048
};

// Function Athena.KrakenDebugFunctionLibrary.RequestKrakenWithShip
struct UKrakenDebugFunctionLibrary_RequestKrakenWithShip_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AShip*                                       ShipTarget;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.KrakenDebugFunctionLibrary.OverridePlayRateScaleInKrakenServiceParams
struct UKrakenDebugFunctionLibrary_OverridePlayRateScaleInKrakenServiceParams_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              OverridePlayRateScale;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.KrakenDebugFunctionLibrary.OverrideNumberOfTentaclesSpawnedInKrakenServiceParams
struct UKrakenDebugFunctionLibrary_OverrideNumberOfTentaclesSpawnedInKrakenServiceParams_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                OverrideNumberOfTentacles;                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.KrakenDebugFunctionLibrary.OverrideNewTargetTimeoutInKrakenServiceParams
struct UKrakenDebugFunctionLibrary_OverrideNewTargetTimeoutInKrakenServiceParams_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              OverrideNewTargetTimeout;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.KrakenDebugFunctionLibrary.GenerateKrakenSpawnLocationDistribution
struct UKrakenDebugFunctionLibrary_GenerateKrakenSpawnLocationDistribution_Params
{
	TArray<struct FKrakenSpawnLocationExclusionZone>   SeaRockExclusionZones;                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<struct FKrakenSpawnLocationExclusionZone>   IslandExclusionZones;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	float                                              DistributionWidth;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              DistributionHeight;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	float                                              MinDistanceBetweenSamplePoints;                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	int                                                Seed;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
	struct FKrakenSpawnLocationParams                  SpawnLocationParams;                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0030
	TArray<struct FVector>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0038
};

// Function Athena.LadderBlueprintFunctionLibrary.GetRelativePositionAtHeight
struct ULadderBlueprintFunctionLibrary_GetRelativePositionAtHeight_Params
{
	TScriptInterface<class ULadderInterface>           LadderInterface;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              Height;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function Athena.OverlapTriggerComponent.OnActivationRegionOverlapEnd
struct UOverlapTriggerComponent_OnActivationRegionOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.OverlapTriggerComponent.OnActivationRegionOverlapBegin
struct UOverlapTriggerComponent_OnActivationRegionOverlapBegin_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  OverlapInfo;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.Landmark.TriggerLandmarkReactionForNearbyPlayersExplicitList
struct ALandmark_TriggerLandmarkReactionForNearbyPlayersExplicitList_Params
{
	int                                                LandmarkReactionIndex;                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class AAthenaPlayerCharacter*>              Players;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0008
};

// Function Athena.VomitProjectile.SetImpactCallback
struct AVomitProjectile_SetImpactCallback_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function Athena.VomitProjectile.SetChannelToIgnoreInShip
struct AVomitProjectile_SetChannelToIgnoreInShip_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.VomitProjectile.LaunchVomitProjectile
struct AVomitProjectile_LaunchVomitProjectile_Params
{
	class AActor*                                      Vomiter;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FName                                       LaunchSocketName;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	float                                              Speed;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              AdditionalLiftAngle;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class AVomitProjectile*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function Athena.LaunchedFromKrakenActionStateId.PushCharacterIntoLaunchedFromKrakenActionState
struct ULaunchedFromKrakenActionStateId_PushCharacterIntoLaunchedFromKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      FiringActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AKrakenAnimatedTentacle*                     Tentacle;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.LaunchedFromKrakenActionStateId.PopCharacterOutOfLaunchedFromKrakenActionState
struct ULaunchedFromKrakenActionStateId_PopCharacterOutOfLaunchedFromKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LauncherParentInterface.GetProjectileIgnoreActors
struct ULauncherParentInterface_GetProjectileIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.LauncherParentInterface.GetInheritedLaunchVelocity
struct ULauncherParentInterface_GetInheritedLaunchVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LeaveGhostShipActionStateId.PushCharacterIntoLeaveGhostShipActionState
struct ULeaveGhostShipActionStateId_PushCharacterIntoLeaveGhostShipActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LightingControllerSettings.GetOutput
struct ULightingControllerSettings_GetOutput_Params
{
	class ULightingControllerSettings*                 Settings;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Input;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FLightingControllerSettingsOutput           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 000C
};

// Function Athena.LightingZoneInterface.GetLightingZoneParameters
struct ULightingZoneInterface_GetLightingZoneParameters_Params
{
	struct FLightingZoneParametersAndLocation          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.RainZoneInterface.GetRainZoneParametersAtTime
struct URainZoneInterface_GetRainZoneParametersAtTime_Params
{
	double                                             InTime;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRainZoneParametersAndLocation              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Athena.RainZoneInterface.GetRainZoneParameters
struct URainZoneInterface_GetRainZoneParameters_Params
{
	struct FRainZoneParametersAndLocation              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.LightingController.IsPlayingInEditor
struct ALightingController_IsPlayingInEditor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LightingController.IsPlayerInBoatSpace
struct ALightingController_IsPlayerInBoatSpace_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LightingController.GetZoneWeights
struct ALightingController_GetZoneWeights_Params
{
	TArray<struct FLightingZoneBlendValues>            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.LightingController.GetRainWeight
struct ALightingController_GetRainWeight_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LightingZoneServiceInterface.UnregisterLightingZoneFromService
struct ULightingZoneServiceInterface_UnregisterLightingZoneFromService_Params
{
	TScriptInterface<class ULightingZoneInterface>     LightingZone;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LightingZoneServiceInterface.RegisterLightingZoneWithService
struct ULightingZoneServiceInterface_RegisterLightingZoneWithService_Params
{
	TScriptInterface<class ULightingZoneInterface>     LightingZone;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LightingZoneServiceInterface.GetNumberOfLightingZones
struct ULightingZoneServiceInterface_GetNumberOfLightingZones_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LightingZoneServiceInterface.GetLightingZone
struct ULightingZoneServiceInterface_GetLightingZone_Params
{
	int                                                LightingZoneIndex;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLightingZoneParametersAndLocation          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0004
};

// Function Athena.LightingZoneServiceInterface.GetAllLightingZones
struct ULightingZoneServiceInterface_GetAllLightingZones_Params
{
	TArray<struct FLightingZoneParametersAndLocation>  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.LimpingComponent.TestForceLimpingOffLocally
struct ULimpingComponent_TestForceLimpingOffLocally_Params
{
};

// Function Athena.LimpingComponent.StartLimping
struct ULimpingComponent_StartLimping_Params
{
};

// Function Athena.LimpingComponent.PredictStartLimping
struct ULimpingComponent_PredictStartLimping_Params
{
};

// Function Athena.LimpingComponent.OnRep_IsLimping
struct ULimpingComponent_OnRep_IsLimping_Params
{
};

// Function Athena.LimpingComponent.IsLimpingPredicted
struct ULimpingComponent_IsLimpingPredicted_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LimpingComponent.IsLimping
struct ULimpingComponent_IsLimping_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LimpingComponent.GetHasActiveCameraModifiers
struct ULimpingComponent_GetHasActiveCameraModifiers_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LimpingComponent.GetCheatPenaltyTimeLeft
struct ULimpingComponent_GetCheatPenaltyTimeLeft_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LiquidContainerInterface.SetLiquidLevel
struct ULiquidContainerInterface_SetLiquidLevel_Params
{
	float                                              Level;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LiquidContainerInterface.GetWantedLiquidLevel
struct ULiquidContainerInterface_GetWantedLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LiquidContainerInterface.GetLiquidLevel
struct ULiquidContainerInterface_GetLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LiquidContainerComponent.SetLiquidType
struct ULiquidContainerComponent_SetLiquidType_Params
{
	TEnumAsByte<ELiquidType>                           LiquidType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LiquidContainerComponent.SetLiquidLevel
struct ULiquidContainerComponent_SetLiquidLevel_Params
{
	float                                              Level;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LiquidContainerComponent.GetLiquidLevel
struct ULiquidContainerComponent_GetLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LiquidContainerComponent.CollectLiquidMaterials
struct ULiquidContainerComponent_CollectLiquidMaterials_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.LoadableInterface.IsLoaded
struct ULoadableInterface_IsLoaded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LoadableInterface.CanBeUnloaded
struct ULoadableInterface_CanBeUnloaded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LoadableInterface.CanBeLoaded
struct ULoadableInterface_CanBeLoaded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LoadableComponent.OnRepLoadedItem
struct ULoadableComponent_OnRepLoadedItem_Params
{
	class UObject*                                     PrevLoadedItem;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LoadableComponent.OnRepLoadableState
struct ULoadableComponent_OnRepLoadableState_Params
{
	TEnumAsByte<ELoadableState>                        PrevLoadableState;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LoadItemActionStateId.PushCharacterIntoLoadItemActionState
struct ULoadItemActionStateId_PushCharacterIntoLoadItemActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      LoadableActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Interactable;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	class UClass*                                      DefaultItemDesc;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function Athena.LoadItemActionStateId.PopCharacterOutOfLoadItemActionState
struct ULoadItemActionStateId_PopCharacterOutOfLoadItemActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LoadoutControlInterface.IsRequestLoadoutCompleted
struct ULoadoutControlInterface_IsRequestLoadoutCompleted_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LoadPlayerActionStateId.PushCharacterIntoLoadPlayerActionState
struct ULoadPlayerActionStateId_PushCharacterIntoLoadPlayerActionState_Params
{
	class AActor*                                      InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      InLoadable;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      InInteractable;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.LocomotionActionStateId.PushCharacterIntoLocomotionActionState
struct ULocomotionActionStateId_PushCharacterIntoLocomotionActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnWalkActivate
struct ULocomotionCompositeInputHandler_OnWalkActivate_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnTurnRate
struct ULocomotionCompositeInputHandler_OnTurnRate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.LocomotionCompositeInputHandler.OnTurn
struct ULocomotionCompositeInputHandler_OnTurn_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.LocomotionCompositeInputHandler.OnToggleItem
struct ULocomotionCompositeInputHandler_OnToggleItem_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnSprintActivate
struct ULocomotionCompositeInputHandler_OnSprintActivate_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnSecondaryItemUseReleased
struct ULocomotionCompositeInputHandler_OnSecondaryItemUseReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnSecondaryItemUsePressed
struct ULocomotionCompositeInputHandler_OnSecondaryItemUsePressed_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickSwitchWeapon
struct ULocomotionCompositeInputHandler_OnQuickSwitchWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickSwitchSecondaryWeapon
struct ULocomotionCompositeInputHandler_OnQuickSwitchSecondaryWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickSwitchPrimaryWeapon
struct ULocomotionCompositeInputHandler_OnQuickSwitchPrimaryWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickSelectItemOfCategory
struct ULocomotionCompositeInputHandler_OnQuickSelectItemOfCategory_Params
{
	class UClass*                                      Category;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                IndexIntoCategory;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToWoodPlank
struct ULocomotionCompositeInputHandler_OnQuickCycleToWoodPlank_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToTankard
struct ULocomotionCompositeInputHandler_OnQuickCycleToTankard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToSpyglass
struct ULocomotionCompositeInputHandler_OnQuickCycleToSpyglass_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToShovel
struct ULocomotionCompositeInputHandler_OnQuickCycleToShovel_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToPocketWatch
struct ULocomotionCompositeInputHandler_OnQuickCycleToPocketWatch_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToLantern
struct ULocomotionCompositeInputHandler_OnQuickCycleToLantern_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToInstrument
struct ULocomotionCompositeInputHandler_OnQuickCycleToInstrument_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToFruit
struct ULocomotionCompositeInputHandler_OnQuickCycleToFruit_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToCompass
struct ULocomotionCompositeInputHandler_OnQuickCycleToCompass_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToCannonball
struct ULocomotionCompositeInputHandler_OnQuickCycleToCannonball_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToBucket
struct ULocomotionCompositeInputHandler_OnQuickCycleToBucket_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleItemsOfCategory
struct ULocomotionCompositeInputHandler_OnQuickCycleItemsOfCategory_Params
{
	class UClass*                                      Category;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.LocomotionCompositeInputHandler.OnPrimaryItemUseReleased
struct ULocomotionCompositeInputHandler_OnPrimaryItemUseReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnPrimaryItemUsePressed
struct ULocomotionCompositeInputHandler_OnPrimaryItemUsePressed_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnMoveRight
struct ULocomotionCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.LocomotionCompositeInputHandler.OnMoveForward
struct ULocomotionCompositeInputHandler_OnMoveForward_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.LocomotionCompositeInputHandler.OnLookUpRate
struct ULocomotionCompositeInputHandler_OnLookUpRate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.LocomotionCompositeInputHandler.OnLookUp
struct ULocomotionCompositeInputHandler_OnLookUp_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.LocomotionCompositeInputHandler.OnJump
struct ULocomotionCompositeInputHandler_OnJump_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnDropLargeWieldedItem
struct ULocomotionCompositeInputHandler_OnDropLargeWieldedItem_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnCycleItemUp
struct ULocomotionCompositeInputHandler_OnCycleItemUp_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LocomotionCompositeInputHandler.OnCycleItemDown
struct ULocomotionCompositeInputHandler_OnCycleItemDown_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.LookAtOffsetCompositeInputHandler.OnYawRate
struct ULookAtOffsetCompositeInputHandler_OnYawRate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.LookAtOffsetCompositeInputHandler.OnYaw
struct ULookAtOffsetCompositeInputHandler_OnYaw_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.LookAtOffsetCompositeInputHandler.OnPitchRate
struct ULookAtOffsetCompositeInputHandler_OnPitchRate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.LookAtOffsetCompositeInputHandler.OnPitch
struct ULookAtOffsetCompositeInputHandler_OnPitch_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.ControlIntentCompositeInputHandler.OnRightTriggerAnalog
struct UControlIntentCompositeInputHandler_OnRightTriggerAnalog_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.ControlIntentCompositeInputHandler.OnChangeIntent
struct UControlIntentCompositeInputHandler_OnChangeIntent_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.ControlWheelCompositeInputHandler.OnRightTrigger
struct UControlWheelCompositeInputHandler_OnRightTrigger_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.ControlWheelCompositeInputHandler.OnMoveRight
struct UControlWheelCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.UseLadderCompositeInputHandler.OnClimbLadder
struct UUseLadderCompositeInputHandler_OnClimbLadder_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.LookAtOffsetFunctions.IsLookAtEnabled
struct ULookAtOffsetFunctions_IsLookAtEnabled_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 00D8
};

// Function Athena.LookAtOffsetFunctions.GetLookAtYaw
struct ULookAtOffsetFunctions_GetLookAtYaw_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 00D8
};

// Function Athena.LookAtOffsetFunctions.GetLookAtWorldLocation
struct ULookAtOffsetFunctions_GetLookAtWorldLocation_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 00D8
};

// Function Athena.LookAtOffsetFunctions.GetLookAtPitch
struct ULookAtOffsetFunctions_GetLookAtPitch_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 00D8
};

// Function Athena.LookAtOffsetFunctions.AddYawInput
struct ULookAtOffsetFunctions_AddYawInput_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              YawInput;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00D8
};

// Function Athena.LookAtOffsetFunctions.AddPitchInput
struct ULookAtOffsetFunctions_AddPitchInput_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              PitchInput;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00D8
};

// Function Athena.LPVReferenceFrameAdaptationFunctionLibrary.TickLPVAdaptation
struct ULPVReferenceFrameAdaptationFunctionLibrary_TickLPVAdaptation_Params
{
	struct FLPVAdaptationState                         InOutLPVAdaptationState;                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FPostProcessSettings                        InOutPostProcessSettings;                                 // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 00F0
	struct FTransform                                  InCurrentShipTransform;                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0620
	float                                              InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0650
};

// Function Athena.LPVReferenceFrameAdaptationFunctionLibrary.SetLPVAdaptationState
struct ULPVReferenceFrameAdaptationFunctionLibrary_SetLPVAdaptationState_Params
{
	struct FLPVAdaptationState                         InOutLPVAdaptationState;                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FVector                                     InPlayerPawnLocation;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 00F0
	struct FTransform                                  InCurrentShipTransform;                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0100
	bool                                               bInIsPlayerInLPVRefFrameArea;                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0130
};

// Function Athena.LPVReferenceFrameAdaptationFunctionLibrary.InitializeLPVAdaptationStateDefaultOptions
struct ULPVReferenceFrameAdaptationFunctionLibrary_InitializeLPVAdaptationStateDefaultOptions_Params
{
	struct FLPVAdaptationState                         InOutLPVAdaptationState;                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<ELPVAdaptationType>                    InAdaptationType;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00F0
	float                                              InRotationBlendTime;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00F4
	float                                              InTranslationBlendTime;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00F8
	float                                              InAdditionalBlendTime;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00FC
};

// Function Athena.MapTable.Server_SetPins
struct AMapTable_Server_SetPins_Params
{
	TArray<struct FVector2D>                           InMapPins;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function Athena.MapTable.Server_MoveMap
struct AMapTable_Server_MoveMap_Params
{
	struct FVector2D                                   CentreLocation;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ZoomLevel;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTable.Server_LeaveTable
struct AMapTable_Server_LeaveTable_Params
{
	class AActor*                                      Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MapTable.Server_JoinTable
struct AMapTable_Server_JoinTable_Params
{
	class AActor*                                      Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MapTable.OnRep_ZoomLevel
struct AMapTable_OnRep_ZoomLevel_Params
{
};

// Function Athena.MapTable.OnRep_MapPins
struct AMapTable_OnRep_MapPins_Params
{
};

// Function Athena.MapTable.OnRep_CentreLocation
struct AMapTable_OnRep_CentreLocation_Params
{
};

// Function Athena.MapTable.OnMapMove
struct AMapTable_OnMapMove_Params
{
	struct FVector2D                                   CentreLocation;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ZoomLevel;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTable.OnMapActivate
struct AMapTable_OnMapActivate_Params
{
	bool                                               IsMapActive;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UTextureRenderTarget2D*                      Texture;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTableTestFunctions.ZoomOut
struct UMapTableTestFunctions_ZoomOut_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ZoomValue;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTableTestFunctions.ZoomIn
struct UMapTableTestFunctions_ZoomIn_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ZoomValue;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTableTestFunctions.SetMinZoom
struct UMapTableTestFunctions_SetMinZoom_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              MinValue;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTableTestFunctions.SetMinPan
struct UMapTableTestFunctions_SetMinPan_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector2D                                   MinValue;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTableTestFunctions.SetMaxZoom
struct UMapTableTestFunctions_SetMaxZoom_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              MaxValue;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTableTestFunctions.SetMaxPan
struct UMapTableTestFunctions_SetMaxPan_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector2D                                   MaxValue;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTableTestFunctions.PanY
struct UMapTableTestFunctions_PanY_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              PanValue;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTableTestFunctions.PanX
struct UMapTableTestFunctions_PanX_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              PanValue;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTableTestFunctions.IsUnderLocalControl
struct UMapTableTestFunctions_IsUnderLocalControl_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTableTestFunctions.IsLocationDirty
struct UMapTableTestFunctions_IsLocationDirty_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.MapTableTestFunctions.GetControlPoint
struct UMapTableTestFunctions_GetControlPoint_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                PointIndex;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AMapTableControlPoint*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.MapTableTestFunctions.ConsumeLocationChange
struct UMapTableTestFunctions_ConsumeLocationChange_Params
{
	class AMapTable*                                   MapTable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWorldMapSetLocation                        Event;                                                    // (CPF_Parm, CPF_OutParm) 0008
};

// Function Athena.MastAnimInterface.SetMastAngle
struct UMastAnimInterface_SetMastAngle_Params
{
	float                                              Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MastAnimInterface.InitializeMast
struct UMastAnimInterface_InitializeMast_Params
{
	float                                              FallingLimit;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MaterialInformationServiceBlueprintFunctions.GetVFXInformationForSurface
struct UMaterialInformationServiceBlueprintFunctions_GetVFXInformationForSurface_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FMaterialInformationVFXData                 VFXSurfaceData;                                           // (CPF_Parm, CPF_OutParm) 000C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.MaterialInformationServiceBlueprintFunctions.GetAudioInformationForSurface
struct UMaterialInformationServiceBlueprintFunctions_GetAudioInformationForSurface_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FMaterialInformationAudioData               AudioSurfaceData;                                         // (CPF_Parm, CPF_OutParm) 000C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 001C
};

// Function Athena.MatineeUtility.Multicast_BroadcastStop
struct AMatineeUtility_Multicast_BroadcastStop_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MatineeUtility.Multicast_BroadcastSetPosition
struct AMatineeUtility_Multicast_BroadcastSetPosition_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InterpolationPosition;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               Jump;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.MatineeUtility.Multicast_BroadcastPlay
struct AMatineeUtility_Multicast_BroadcastPlay_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MatineeUtility.HandleCharacterEndPlay
struct AMatineeUtility_HandleCharacterEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MatineeUtility.HandleCharacterDestroyed
struct AMatineeUtility_HandleCharacterDestroyed_Params
{
};

// Function Athena.MatineeUtility.BroadcastStop
struct AMatineeUtility_BroadcastStop_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MatineeUtility.BroadcastSetPosition
struct AMatineeUtility_BroadcastSetPosition_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InterpolationPosition;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               Jump;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.MatineeUtility.BroadcastPlay
struct AMatineeUtility_BroadcastPlay_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MeleeAttackProcessorComponent.Multicast_RespondToHit
struct UMeleeAttackProcessorComponent_Multicast_RespondToHit_Params
{
	struct FMeleeAttackHitResponseData                 HitResponseData;                                          // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
};

// Function Athena.MeleeAttackProcessorComponent.Client_AttackCompleted
struct UMeleeAttackProcessorComponent_Client_AttackCompleted_Params
{
	class UMeleeAttackDataAsset*                       AttackCompleted;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MeleeBlockingActionStateId.PushCharacterIntoMeleeBlockingActionState
struct UMeleeBlockingActionStateId_PushCharacterIntoMeleeBlockingActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              BlockMovementTime;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.MeleeBlockingActionStateId.PopCharacterOutOfMeleeBlockingActionState
struct UMeleeBlockingActionStateId_PopCharacterOutOfMeleeBlockingActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MeleeBlockingCompositeInputHandler.OnDodge
struct UMeleeBlockingCompositeInputHandler_OnDodge_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MemoryTestPawn.Server_SetActorLocationAndRotation
struct AMemoryTestPawn_Server_SetActorLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRotator                                    Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.MemoryTestPawn.IsFinished
struct AMemoryTestPawn_IsFinished_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MenuInputHandler.OnOpenQuickMenu
struct UMenuInputHandler_OnOpenQuickMenu_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MenuInputHandler.OnOpenEscapeMenu
struct UMenuInputHandler_OnOpenEscapeMenu_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MerchantCrateProviderInterface.CollectCrate
struct UMerchantCrateProviderInterface_CollectCrate_Params
{
	class AActor*                                      Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      CrateDesc;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
};

// Function Athena.MermaidServiceInterface.SpawnMermaidForCrewWhoLostShip
struct UMermaidServiceInterface_SpawnMermaidForCrewWhoLostShip_Params
{
	struct FGuid                                       CrewId;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     LostShipPos;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
};

// Function Athena.MermaidServiceInterface.DebugEnableMermaidSpawning
struct UMermaidServiceInterface_DebugEnableMermaidSpawning_Params
{
	bool                                               Flag;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MermaidService.SetParams
struct AMermaidService_SetParams_Params
{
	struct FMermaidServiceParams                       P;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MermaidService.IsMermaidActive
struct AMermaidService_IsMermaidActive_Params
{
	class AMermaid*                                    M;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.MermaidService.GetParams
struct AMermaidService_GetParams_Params
{
	struct FMermaidServiceParams                       ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.MermaidService.GetNumActiveMermaids
struct AMermaidService_GetNumActiveMermaids_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MetalAIFormComponent.OnRep_IsWet
struct UMetalAIFormComponent_OnRep_IsWet_Params
{
};

// Function Athena.MigrationActionStateId.PushCharacterIntoMigrationActionState
struct UMigrationActionStateId_PushCharacterIntoMigrationActionState_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MigrationUIComponent.OnTextCanvasUpdate
struct UMigrationUIComponent_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Width;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Height;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.OneShotUsable.Trigger
struct UOneShotUsable_Trigger_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      InTriggeringActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.OneShotUsable.CanTrigger
struct UOneShotUsable_CanTrigger_Params
{
	class AActor*                                      InTriggeringActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.Shovel.Server_RequestDigRPC
struct AShovel_Server_RequestDigRPC_Params
{
};

// Function Athena.Shovel.Multicast_DigRPC
struct AShovel_Multicast_DigRPC_Params
{
	TEnumAsByte<EShovelDigType>                        NewDigType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EBuriedItemType>                       DigUnearthingType;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
};

// Function Athena.Shovel.GetShouldWielderBeLocked
struct AShovel_GetShouldWielderBeLocked_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Shovel.GetLastKnownDigTypeOnServer
struct AShovel_GetLastKnownDigTypeOnServer_Params
{
	TEnumAsByte<EShovelDigType>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Shovel.GetCurrentDigType
struct AShovel_GetCurrentDigType_Params
{
	TEnumAsByte<EShovelDigType>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MockTelemetryDispatcher.ValidateGameEndTelemetryEvent
struct UMockTelemetryDispatcher_ValidateGameEndTelemetryEvent_Params
{
	struct FPlayerGameEndTelemetryEvent                Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	int                                                MinIdleDuration;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	int                                                MinActiveDuration;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	int                                                MinVoiceChatDuration;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 001C
};

// Function Athena.MockTelemetryDispatcher.SeamlessTravelTo
struct UMockTelemetryDispatcher_SeamlessTravelTo_Params
{
	class AAthenaPlayerController*                     Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.MockTelemetryDispatcher.OnUIScreenTransitionTelemetryEvent
struct UMockTelemetryDispatcher_OnUIScreenTransitionTelemetryEvent_Params
{
	struct FUIScreenTransitionTelemetryEvent           Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnShovelTelemetryEvent
struct UMockTelemetryDispatcher_OnShovelTelemetryEvent_Params
{
	struct FShovelTelemetryEvent                       Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnShipSpawnedTelemetryEvent
struct UMockTelemetryDispatcher_OnShipSpawnedTelemetryEvent_Params
{
	struct FShipSpawnedTelemetryEvent                  Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MockTelemetryDispatcher.OnShipHeartbeatTelemetryEvent
struct UMockTelemetryDispatcher_OnShipHeartbeatTelemetryEvent_Params
{
	struct FShipHeartbeatTelemetryEvent                Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnShipDestroyedTelemetryEvent
struct UMockTelemetryDispatcher_OnShipDestroyedTelemetryEvent_Params
{
	struct FShipDestroyedTelemetryEvent                Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MockTelemetryDispatcher.OnShipDamagedTelemetryEvent
struct UMockTelemetryDispatcher_OnShipDamagedTelemetryEvent_Params
{
	struct FShipDamagedTelemetryEvent                  Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerSpawnTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerSpawnTelemetryEvent_Params
{
	struct FPlayerSpawnTelemetryEvent                  Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerObjectUsageStartTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerObjectUsageStartTelemetryEvent_Params
{
	struct FPlayerObjectUsageStartTelemetryEvent       Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerObjectUsageEndTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerObjectUsageEndTelemetryEvent_Params
{
	struct FPlayerObjectUsageEndTelemetryEvent         Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerItemRetrievalFromContainerTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerItemRetrievalFromContainerTelemetryEvent_Params
{
	struct FPlayerItemRetrievalFromContainerTelemetryEvent Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerItemEquipTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerItemEquipTelemetryEvent_Params
{
	struct FPlayerItemEquipTelemetryEvent              Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerHealthChangeTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerHealthChangeTelemetryEvent_Params
{
	struct FPlayerHealthChangeTelemetryEvent           Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerGameStartTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerGameStartTelemetryEvent_Params
{
	struct FPlayerGameStartTelemetryEvent              Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerGameEndTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerGameEndTelemetryEvent_Params
{
	struct FPlayerGameEndTelemetryEvent                Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerCapstanUsageStartTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerCapstanUsageStartTelemetryEvent_Params
{
	struct FPlayerCapstanUsageStartTelemetryEvent      Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerCapstanUsageEndTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerCapstanUsageEndTelemetryEvent_Params
{
	struct FPlayerCapstanUsageEndTelemetryEvent        Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerAttackTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerAttackTelemetryEvent_Params
{
	struct FPlayerAttackTelemetryEvent                 Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerActionTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerActionTelemetryEvent_Params
{
	struct FPlayerActionTelemetryEvent                 Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MockTelemetryDispatcher.OnPlayerActionCannonTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerActionCannonTelemetryEvent_Params
{
	struct FPlayerActionCannonTelemetryEvent           Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnLoadingTelemetryEvent
struct UMockTelemetryDispatcher_OnLoadingTelemetryEvent_Params
{
	struct FLoadingTelemetryEvent                      Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MockTelemetryDispatcher.OnCrewPlayerLeftTelemetryEvent
struct UMockTelemetryDispatcher_OnCrewPlayerLeftTelemetryEvent_Params
{
	struct FCrewPlayerLeftTelemetryEvent               Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MockTelemetryDispatcher.OnCrewPlayerJoinedTelemetryEvent
struct UMockTelemetryDispatcher_OnCrewPlayerJoinedTelemetryEvent_Params
{
	struct FCrewPlayerJoinedTelemetryEvent             Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MockTelemetryDispatcher.OnCrewDestroyedTelemetryEvent
struct UMockTelemetryDispatcher_OnCrewDestroyedTelemetryEvent_Params
{
	struct FCrewDestroyedTelemetryEvent                Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MockTelemetryDispatcher.OnCrewCreatedTelemetryEvent
struct UMockTelemetryDispatcher_OnCrewCreatedTelemetryEvent_Params
{
	struct FCrewCreatedTelemetryEvent                  Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MockTelemetryDispatcher.IsHeartbeatValid
struct UMockTelemetryDispatcher_IsHeartbeatValid_Params
{
	class AAthenaPlayerController*                     Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ArmoryChestInteraction.Server_ArmoryChestEquipWeapon
struct AArmoryChestInteraction_Server_ArmoryChestEquipWeapon_Params
{
	class UClass*                                      InItemDesc;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                InIndex;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.ClothingChestInteraction.Server_ClothingChestUnequipItem
struct AClothingChestInteraction_Server_ClothingChestUnequipItem_Params
{
	class UClass*                                      InDesc;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ClothingChestInteraction.Server_ClothingChestEquipItem
struct AClothingChestInteraction_Server_ClothingChestEquipItem_Params
{
	class UClass*                                      InDesc;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ClothingChestInteraction.Server_ClothingChestChangeClothing
struct AClothingChestInteraction_Server_ClothingChestChangeClothing_Params
{
	TArray<class UClass*>                              InAdds;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<class UClass*>                              InRemoves;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
};

// Function Athena.ClothingChestInteraction.OnRep_Loadout
struct AClothingChestInteraction_OnRep_Loadout_Params
{
};

// Function Athena.EquipmentChestInteraction.Server_EquipmentChestEquipItem
struct AEquipmentChestInteraction_Server_EquipmentChestEquipItem_Params
{
	class UClass*                                      InItemDesc;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipCustomizationChestInteraction.Server_ShipCustomizationChestUnequipItem
struct AShipCustomizationChestInteraction_Server_ShipCustomizationChestUnequipItem_Params
{
	class UClass*                                      InDesc;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipCustomizationChestInteraction.Server_ShipCustomizationChestEquipItem
struct AShipCustomizationChestInteraction_Server_ShipCustomizationChestEquipItem_Params
{
	class UClass*                                      InDesc;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.VoyageProposalContainerInteraction.Server_VoyageProposalSelected
struct AVoyageProposalContainerInteraction_Server_VoyageProposalSelected_Params
{
	struct FString                                     ProposalDescName;                                         // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.ModalInteractionActionStateId.PushCharacterIntoModalInteractionActionState
struct UModalInteractionActionStateId_PushCharacterIntoModalInteractionActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AModalInteractionProxy*                      InInteractionProxy;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.ModalInteractionCompositeInputHandler.OnDisengage
struct UModalInteractionCompositeInputHandler_OnDisengage_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MountpointComponent.OnRep_ReplicatedMountedItem
struct UMountpointComponent_OnRep_ReplicatedMountedItem_Params
{
};

// Function Athena.NameplateComponent.GetWorldPosition
struct UNameplateComponent_GetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.NetProxy.OnRep_OwningActor
struct ANetProxy_OnRep_OwningActor_Params
{
};

// Function Athena.NetProxy.OnOwningActorDestroyed
struct ANetProxy_OnOwningActorDestroyed_Params
{
};

// Function Athena.ShipNetProxy.OnRep_LanternBits
struct AShipNetProxy_OnRep_LanternBits_Params
{
};

// Function Athena.ShipNetProxy.OnLanternStateChanged
struct AShipNetProxy_OnLanternStateChanged_Params
{
	unsigned char                                      LanternStateBits;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipNetProxy.GetLanternBits
struct AShipNetProxy_GetLanternBits_Params
{
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.NPCReactionBound.OnActivationRegionOverlapEnd
struct UNPCReactionBound_OnActivationRegionOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.NPCReactionBound.OnActivationRegionOverlapBegin
struct UNPCReactionBound_OnActivationRegionOverlapBegin_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  OverlapInfo;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.ObjectUtilities.GetDefaultObject
struct UObjectUtilities_GetDefaultObject_Params
{
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ObjectUtilities.CreateObject
struct UObjectUtilities_CreateObject_Params
{
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.OffBottomTransitionLadderActionStateId.PushCharacterIntoOffBottomTransitionLadderActionState
struct UOffBottomTransitionLadderActionStateId_PushCharacterIntoOffBottomTransitionLadderActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      LadderActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              InteractingHeight;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	unsigned char                                      ClimbId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	TEnumAsByte<ELadderTransitionMode>                 LadderTransitionMode;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001D
	struct FLadderDefinition                           LadderDefinition;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0020
};

// Function Athena.OffTopTransitionLadderActionStateId.PushCharacterIntoOffTopTransitionLadderActionState
struct UOffTopTransitionLadderActionStateId_PushCharacterIntoOffTopTransitionLadderActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      LadderActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              InteractingHeight;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	unsigned char                                      ClimbId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	TEnumAsByte<ELadderTransitionMode>                 LadderTransitionMode;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001D
	struct FLadderDefinition                           LadderDefinition;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0020
};

// Function Athena.OnBottomTransitionLadderActionStateId.PushCharacterIntoOnBottomTransitionLadderActionState
struct UOnBottomTransitionLadderActionStateId_PushCharacterIntoOnBottomTransitionLadderActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      LadderActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              InteractingHeight;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	unsigned char                                      ClimbId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	TEnumAsByte<ELadderTransitionMode>                 LadderTransitionMode;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001D
	struct FLadderDefinition                           LadderDefinition;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0020
};

// Function Athena.OnTopTransitionLadderActionStateId.PushCharacterIntoOnTopTransitionLadderActionState
struct UOnTopTransitionLadderActionStateId_PushCharacterIntoOnTopTransitionLadderActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      LadderActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              InteractingHeight;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	unsigned char                                      ClimbId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	TEnumAsByte<ELadderTransitionMode>                 LadderTransitionMode;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001D
	struct FLadderDefinition                           LadderDefinition;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0020
};

// Function Athena.PacingComponent.StopPacing
struct UPacingComponent_StopPacing_Params
{
};

// Function Athena.PacingComponent.StartPacing
struct UPacingComponent_StartPacing_Params
{
};

// Function Athena.PacingComponent.IsPacing
struct UPacingComponent_IsPacing_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PartConnectionMock.Tick
struct UPartConnectionMock_Tick_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.PartConnectionMock.AddMultipleConnection
struct UPartConnectionMock_AddMultipleConnection_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EMockShipConnectionPartType>           ConnectionType;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TArray<class AActor*>                              ActorFromList;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	class AActor*                                      ActorTo;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function Athena.PartConnectionMock.AddConnection
struct UPartConnectionMock_AddConnection_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EMockShipConnectionPartType>           ConnectionType;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      ActorFrom;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	class AActor*                                      ActorTo;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function Athena.PhysicsCollisionFunctions.IsWorldSpacePositionInsideVolume
struct UPhysicsCollisionFunctions_IsWorldSpacePositionInsideVolume_Params
{
	class UStaticMeshComponent*                        Volume;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function Athena.PickupObjectActionStateId.PushCharacterIntoPickupObjectActionState
struct UPickupObjectActionStateId_PushCharacterIntoPickupObjectActionState_Params
{
	class AActor*                                      InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      InPickupableObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.PirateGeneratorServiceInterface.BakeFromDescriptionAsync
struct UPirateGeneratorServiceInterface_BakeFromDescriptionAsync_Params
{
	struct FPirateDescription                          Desc;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<EPirateBakeFlags>                      Flags;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0078
	struct FGuid                                       Guid;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 007C
	struct FScriptDelegate                             AsyncResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 008C
};

// Function Athena.PirateIdentityBlueprintFunctionLibrary.GetServicesScopeId
struct UPirateIdentityBlueprintFunctionLibrary_GetServicesScopeId_Params
{
	struct FPirateIdentity                             InPirateIdentity;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0020
};

// Function Athena.PirateIdentityBlueprintFunctionLibrary.GetPirateIdentity
struct UPirateIdentityBlueprintFunctionLibrary_GetPirateIdentity_Params
{
	class AActor*                                      InPawn;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FPirateIdentity                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Athena.PiratePreviewInterface.PreCreatePreview
struct UPiratePreviewInterface_PreCreatePreview_Params
{
};

// Function Athena.PirateSelector.WaitForTavernTimerTick
struct UPirateSelector_WaitForTavernTimerTick_Params
{
};

// Function Athena.PirateSelector.RequestOpenAccountPicker
struct UPirateSelector_RequestOpenAccountPicker_Params
{
};

// Function Athena.PirateSelector.OnPirateGenerateRequested
struct UPirateSelector_OnPirateGenerateRequested_Params
{
};

// Function Athena.PirateSelector.IsSelectedPirateSet
struct UPirateSelector_IsSelectedPirateSet_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PirateSelector.GetSelectedPirateOutfit
struct UPirateSelector_GetSelectedPirateOutfit_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.PirateSelector.GetSelectedPirateDescription
struct UPirateSelector_GetSelectedPirateDescription_Params
{
	struct FPirateDescription                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.PirateSelector.EndCelebration
struct UPirateSelector_EndCelebration_Params
{
};

// Function Athena.PirateSelector.ConfirmAndSavePirate
struct UPirateSelector_ConfirmAndSavePirate_Params
{
	struct FPirateDescription                          Description;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TArray<class UClass*>                              Outfit;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0078
};

// Function Athena.PlantAIFormComponent.OnRep_IsWet
struct UPlantAIFormComponent_OnRep_IsWet_Params
{
};

// Function Athena.PlantAIFormComponent.OnRep_IsWeak
struct UPlantAIFormComponent_OnRep_IsWeak_Params
{
};

// Function Athena.PlayerAtmosphericsAudioComponent.GetPoolDensityFactor
struct UPlayerAtmosphericsAudioComponent_GetPoolDensityFactor_Params
{
	class UWwiseObjectPoolWrapper*                     PoolDensityWrapper;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.PlayerAtmosphericsAudioComponent.GetPoolDensityAveragePosition
struct UPlayerAtmosphericsAudioComponent_GetPoolDensityAveragePosition_Params
{
	class UWwiseObjectPoolWrapper*                     PoolDensityWrapper;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.PlayerAtmosphericsAudioComponent.GetIsWindAudioPlaying
struct UPlayerAtmosphericsAudioComponent_GetIsWindAudioPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerCrewComponent.Server_VoteOnSendPlayerToBrig
struct UPlayerCrewComponent_Server_VoteOnSendPlayerToBrig_Params
{
	class AAthenaPlayerState*                          PlayerState;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               SendIn;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.PlayerCrewComponent.Server_VoteOnScuttleShip
struct UPlayerCrewComponent_Server_VoteOnScuttleShip_Params
{
	bool                                               Scuttle;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerCrewComponent.Server_VoteOnReleasePlayerFromBrig
struct UPlayerCrewComponent_Server_VoteOnReleasePlayerFromBrig_Params
{
	class AAthenaPlayerState*                          PlayerState;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Release;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.PlayerCrewComponent.OnRep_CrewShip
struct UPlayerCrewComponent_OnRep_CrewShip_Params
{
};

// Function Athena.PlayerCrewComponent.OnRep_CrewMembers
struct UPlayerCrewComponent_OnRep_CrewMembers_Params
{
};

// Function Athena.PlayerEntitlementBlueprintFunctionLibrary.GetEntitlements
struct UPlayerEntitlementBlueprintFunctionLibrary_GetEntitlements_Params
{
	TScriptInterface<class UPlayerEntitlementViewInterface> InPlayerEntitlementViewInterface;                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class UClass*                                      InEntitlementType;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TArray<class UClass*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0018
};

// Function Athena.PlayerEntitlementComponent.OnRep_Entitlements
struct UPlayerEntitlementComponent_OnRep_Entitlements_Params
{
};

// Function Athena.PlayerFunctionLibrary.DebugRemoveLocalPlayer
struct UPlayerFunctionLibrary_DebugRemoveLocalPlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ControllerId;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.PlayerHeroStatsComponent.Client_UpdateValue
struct UPlayerHeroStatsComponent_Client_UpdateValue_Params
{
	uint32_t                                           PlayerStatId;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	uint64_t                                           AbsoluteValue;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.PlayerNonVerbalComponent.Server_SendText
struct UPlayerNonVerbalComponent_Server_SendText_Params
{
	struct FText                                       Message;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
};

// Function Athena.PlayerNonVerbalComponent.Server_SendPhrase
struct UPlayerNonVerbalComponent_Server_SendPhrase_Params
{
	struct FString                                     PhraseKey;                                                // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.PlayerNonVerbalComponent.Client_ReceiveText
struct UPlayerNonVerbalComponent_Client_ReceiveText_Params
{
	class AAthenaPlayerState*                          SenderPlayerState;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FText                                       Message;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0008
};

// Function Athena.PlayerNonVerbalComponent.Client_ReceivePhrase
struct UPlayerNonVerbalComponent_Client_ReceivePhrase_Params
{
	class AAthenaPlayerState*                          SenderPlayerState;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     PhraseKey;                                                // (CPF_Parm, CPF_ZeroConstructor) 0008
};

// Function Athena.PlayerOceanAudioComponent.GetIsUnderwater
struct UPlayerOceanAudioComponent_GetIsUnderwater_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerOceanAudioComponent.GetIsPlaying
struct UPlayerOceanAudioComponent_GetIsPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerOceanAudioComponent.GetIsOnIsland
struct UPlayerOceanAudioComponent_GetIsOnIsland_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerOceanAudioComponent.GetEmitterPosition
struct UPlayerOceanAudioComponent_GetEmitterPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TestPlayerPermissionsComponent.SetAllowExecuteOnServer
struct UTestPlayerPermissionsComponent_SetAllowExecuteOnServer_Params
{
	bool                                               AllowAccess;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TestPlayerPermissionsComponent.SetAllowDebugMenuButtonShortcutsAccess
struct UTestPlayerPermissionsComponent_SetAllowDebugMenuButtonShortcutsAccess_Params
{
	bool                                               AllowAccess;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TestPlayerPermissionsComponent.SetAllowDebugMenuAccess
struct UTestPlayerPermissionsComponent_SetAllowDebugMenuAccess_Params
{
	bool                                               AllowAccess;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TestPlayerPermissionsComponent.GrantDebugMenuPermissions
struct UTestPlayerPermissionsComponent_GrantDebugMenuPermissions_Params
{
	bool                                               AllowAccess;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.PlayerWalletComponent.OnRep_BalanceUpdated
struct UPlayerWalletComponent_OnRep_BalanceUpdated_Params
{
};

// Function Athena.PosablePirate.OnEndGeneratingPirate
struct APosablePirate_OnEndGeneratingPirate_Params
{
};

// Function Athena.PosablePirate.OnBeginGeneratingPirate
struct APosablePirate_OnBeginGeneratingPirate_Params
{
};

// Function Athena.PosablePirate.IsPirateLoaded
struct APosablePirate_IsPirateLoaded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PosablePirate.GetCurrentOutfit
struct APosablePirate_GetCurrentOutfit_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.PosablePirate.GetCurrentDescription
struct APosablePirate_GetCurrentDescription_Params
{
	struct FPirateDescription                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.PosablePirate.BeginGeneratingPirate
struct APosablePirate_BeginGeneratingPirate_Params
{
	struct FPirateDescription                          Desc;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TArray<class UClass*>                              Outfit;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0078
};

// Function Athena.PrimitiveComponentTestFunctionLibrary.CheckWeldParentMatches
struct UPrimitiveComponentTestFunctionLibrary_CheckWeldParentMatches_Params
{
	class UPrimitiveComponent*                         TestComponent;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         ExpectedParentComponent;                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
};

// Function Athena.ProjectileWeapon.ScopeTick
struct AProjectileWeapon_ScopeTick_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ProjectileWeapon.ScopeOn
struct AProjectileWeapon_ScopeOn_Params
{
};

// Function Athena.ProjectileWeapon.ScopeOffImmediate
struct AProjectileWeapon_ScopeOffImmediate_Params
{
};

// Function Athena.ProjectileWeapon.ScopeOff
struct AProjectileWeapon_ScopeOff_Params
{
};

// Function Athena.ProjectileWeapon.RadialBlurOn
struct AProjectileWeapon_RadialBlurOn_Params
{
};

// Function Athena.ProjectileWeapon.RadialBlurOff
struct AProjectileWeapon_RadialBlurOff_Params
{
};

// Function Athena.ProjectileWeapon.OnWeaponFired
struct AProjectileWeapon_OnWeaponFired_Params
{
};

// Function Athena.ProjectileWeapon.OnRep_State
struct AProjectileWeapon_OnRep_State_Params
{
};

// Function Athena.ProjectileWeapon.OnRep_AmmoLeft
struct AProjectileWeapon_OnRep_AmmoLeft_Params
{
	int                                                PreviousAmmo;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ProjectileWeapon.Multicast_ReceiveFire
struct AProjectileWeapon_Multicast_ReceiveFire_Params
{
	struct FFireBroadcast                              Broadcast;                                                // (CPF_Parm) 0000
};

// Function Athena.ProjectileWeapon.Multicast_ReceiveDryFire
struct AProjectileWeapon_Multicast_ReceiveDryFire_Params
{
};

// Function Athena.ProjectileWeapon.GlintOn
struct AProjectileWeapon_GlintOn_Params
{
};

// Function Athena.ProjectileWeapon.GlintOff
struct AProjectileWeapon_GlintOff_Params
{
};

// Function Athena.ProjectileWeapon.GetNumShotsLeftInClip
struct AProjectileWeapon_GetNumShotsLeftInClip_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ProjectileWeapon.GetLastAttackId
struct AProjectileWeapon_GetLastAttackId_Params
{
	struct FGuid                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ProjectileWeapon.Client_RequestDenied
struct AProjectileWeapon_Client_RequestDenied_Params
{
};

// Function Athena.ProjectileWeapon.Client_CorrectPredictedMiss
struct AProjectileWeapon_Client_CorrectPredictedMiss_Params
{
	TArray<struct FHitResult>                          CorrectedServerHits;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function Athena.ProjectileWeapon.CanFire
struct AProjectileWeapon_CanFire_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ProjectileWeapon.AddBulletsToClip
struct AProjectileWeapon_AddBulletsToClip_Params
{
	int                                                NumBullets;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               DoClipSizeCheck;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.ProjectileWeaponValidationFunctionLibrary.ClampAimPositionToWeapon
struct UProjectileWeaponValidationFunctionLibrary_ClampAimPositionToWeapon_Params
{
	class AProjectileWeapon*                           ProjectileWeapon;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FProjectileAim                              InAim;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	double                                             RewindTime;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	struct FProjectileAim                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0030
};

// Function Athena.EmotesRadialCompositeInputHandler.OnEmotesRadialTriggerNextSetOfPhrases
struct UEmotesRadialCompositeInputHandler_OnEmotesRadialTriggerNextSetOfPhrases_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.EmotesRadialCompositeInputHandler.OnEmotesRadialDeactivatedKeyboard
struct UEmotesRadialCompositeInputHandler_OnEmotesRadialDeactivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.EmotesRadialCompositeInputHandler.OnEmotesRadialDeactivatedGamepad
struct UEmotesRadialCompositeInputHandler_OnEmotesRadialDeactivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.EmotesRadialCompositeInputHandler.OnEmotesRadialActivatedKeyboard
struct UEmotesRadialCompositeInputHandler_OnEmotesRadialActivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.EmotesRadialCompositeInputHandler.OnEmotesRadialActivatedGamepad
struct UEmotesRadialCompositeInputHandler_OnEmotesRadialActivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnPhrasesRadialTriggerNextSetOfPhrases
struct UPhrasesRadialCompositeInputHandler_OnPhrasesRadialTriggerNextSetOfPhrases_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnPhrasesRadialInventoryDeactivatedKeyboard
struct UPhrasesRadialCompositeInputHandler_OnPhrasesRadialInventoryDeactivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnPhrasesRadialInventoryDeactivatedGamepad
struct UPhrasesRadialCompositeInputHandler_OnPhrasesRadialInventoryDeactivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnPhrasesRadialInventoryActivatedKeyboard
struct UPhrasesRadialCompositeInputHandler_OnPhrasesRadialInventoryActivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnPhrasesRadialInventoryActivatedGamepad
struct UPhrasesRadialCompositeInputHandler_OnPhrasesRadialInventoryActivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnBlock
struct UPhrasesRadialCompositeInputHandler_OnBlock_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryCompositeInputHandler.OnMapRadialInventoryDeactivatedKeyboard
struct URadialInventoryCompositeInputHandler_OnMapRadialInventoryDeactivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryCompositeInputHandler.OnMapRadialInventoryDeactivatedGamepad
struct URadialInventoryCompositeInputHandler_OnMapRadialInventoryDeactivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryCompositeInputHandler.OnMapRadialInventoryActivatedKeyboard
struct URadialInventoryCompositeInputHandler_OnMapRadialInventoryActivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryCompositeInputHandler.OnMapRadialInventoryActivatedGamepad
struct URadialInventoryCompositeInputHandler_OnMapRadialInventoryActivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryCompositeInputHandler.OnItemRadialTriggerNextSetOfItems
struct URadialInventoryCompositeInputHandler_OnItemRadialTriggerNextSetOfItems_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryCompositeInputHandler.OnItemRadialInventoryDeactivatedKeyboard
struct URadialInventoryCompositeInputHandler_OnItemRadialInventoryDeactivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryCompositeInputHandler.OnItemRadialInventoryDeactivatedGamepad
struct URadialInventoryCompositeInputHandler_OnItemRadialInventoryDeactivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryCompositeInputHandler.OnItemRadialInventoryActivatedKeyboard
struct URadialInventoryCompositeInputHandler_OnItemRadialInventoryActivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RadialInventoryCompositeInputHandler.OnItemRadialInventoryActivatedGamepad
struct URadialInventoryCompositeInputHandler_OnItemRadialInventoryActivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RainZoneServiceInterface.UnregisterRainZoneFromService
struct URainZoneServiceInterface_UnregisterRainZoneFromService_Params
{
	TScriptInterface<class URainZoneInterface>         RainZone;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.RainZoneServiceInterface.RegisterRainZoneWithService
struct URainZoneServiceInterface_RegisterRainZoneWithService_Params
{
	TScriptInterface<class URainZoneInterface>         RainZone;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.RainZoneServiceInterface.GetRainZone
struct URainZoneServiceInterface_GetRainZone_Params
{
	int                                                RainZoneIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRainZoneParametersAndLocation              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0004
};

// Function Athena.RainZoneServiceInterface.GetRainStrengthAtTime
struct URainZoneServiceInterface_GetRainStrengthAtTime_Params
{
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	double                                             InTime;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Athena.RainZoneServiceInterface.GetRainStrength
struct URainZoneServiceInterface_GetRainStrength_Params
{
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.RainZoneServiceInterface.GetNumberOfRainZones
struct URainZoneServiceInterface_GetNumberOfRainZones_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RainZoneServiceInterface.GetAllRainZones
struct URainZoneServiceInterface_GetAllRainZones_Params
{
	TArray<struct FRainZoneParametersAndLocation>      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.RendererSettingsFunctionLibrary.UpdateRendererSettings
struct URendererSettingsFunctionLibrary_UpdateRendererSettings_Params
{
};

// Function Athena.RepairingInterface.GetRepairType
struct URepairingInterface_GetRepairType_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RepairObjectActionStateId.PushCharacterIntoRepairObjectActionState
struct URepairObjectActionStateId_PushCharacterIntoRepairObjectActionState_Params
{
	class AActor*                                      RepairableActor;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.RepairObjectActionStateId.PopCharacterOutOfRepairObjectActionState
struct URepairObjectActionStateId_PopCharacterOutOfRepairObjectActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.RewardComponent.Client_OnRewardRequestSucceededEvent
struct URewardComponent_Client_OnRewardRequestSucceededEvent_Params
{
	struct FRewardRequestSucceededEvent                RewardRequestSucceededEvent;                              // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
};

// Function Athena.RewardComponent.Client_OnRewardRequestFailedEvent
struct URewardComponent_Client_OnRewardRequestFailedEvent_Params
{
	struct FRewardRequestFailedEvent                   RewardRequestFailedEvent;                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
};

// Function Athena.Rudder.SetRudderAngleRatio
struct ARudder_SetRudderAngleRatio_Params
{
	float                                              InRudderAngleRatio;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Rudder.GetServerAngleRatio
struct ARudder_GetServerAngleRatio_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.RumbleHandlerComponent.EventFired
struct URumbleHandlerComponent_EventFired_Params
{
	struct FName                                       InTag;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.SetTurbulence
struct ASail_SetTurbulence_Params
{
	float                                              InTurbulence;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.SetSailLoweredProportion
struct ASail_SetSailLoweredProportion_Params
{
	float                                              Proportion;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.SetSailAngleRatio
struct ASail_SetSailAngleRatio_Params
{
	float                                              AngleRatio;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.SetForceScalarFromBPParams
struct ASail_SetForceScalarFromBPParams_Params
{
	float                                              Scalar;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.SetDamageScalar
struct ASail_SetDamageScalar_Params
{
	float                                              Scalar;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.SetBillowAmount
struct ASail_SetBillowAmount_Params
{
	float                                              InBillowingAmount;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.GetVisualBillowAmount
struct ASail_GetVisualBillowAmount_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.GetSailLoweredProportion
struct ASail_GetSailLoweredProportion_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.GetSailAngleRatio
struct ASail_GetSailAngleRatio_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.GetSailAngle
struct ASail_GetSailAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.GetMaxRotation
struct ASail_GetMaxRotation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.GetBillowAmount
struct ASail_GetBillowAmount_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Sail.CalculateFurlValue
struct ASail_CalculateFurlValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SailAnimInterface.UpdateParameters
struct USailAnimInterface_UpdateParameters_Params
{
	float                                              Turning;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Billow;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              WindStrength;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              SailHeight;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              Falling;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	int                                                FallingAnimation;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
};

// Function Athena.SailAnimInterface.InitialiseSail
struct USailAnimInterface_InitialiseSail_Params
{
	float                                              PlayRateMultiplier;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               MainSail;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.SailAnimInterface.InitialiseMast
struct USailAnimInterface_InitialiseMast_Params
{
	float                                              MastFallingLimit;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SailHoistTestFunctions.SetupSailHoistServerSide
struct USailHoistTestFunctions_SetupSailHoistServerSide_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      SailHoistClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class ASailHoist*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function Athena.SailHoistTestFunctions.SetupSailHoistClientSideWithProvidedHoist
struct USailHoistTestFunctions_SetupSailHoistClientSideWithProvidedHoist_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class ASailHoist*                                  Hoist;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.SailHoistTestFunctions.SetupSailHoistClientSide
struct USailHoistTestFunctions_SetupSailHoistClientSide_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class ASailHoist*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.Seagulls.Multicast_DismissSeagulls
struct ASeagulls_Multicast_DismissSeagulls_Params
{
};

// Function Athena.Seagulls.FadeOut
struct ASeagulls_FadeOut_Params
{
};

// Function Athena.Seagulls.FadeIn
struct ASeagulls_FadeIn_Params
{
};

// Function Athena.ServiceProviderInterfaceTestFunctions.TestRegisterAndGetService
struct UServiceProviderInterfaceTestFunctions_TestRegisterAndGetService_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ServiceProviderInterfaceTestFunctions.TestGetServiceUnregistered
struct UServiceProviderInterfaceTestFunctions_TestGetServiceUnregistered_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ShadowAIFormComponent.OnRep_CurrentState
struct UShadowAIFormComponent_OnRep_CurrentState_Params
{
	TEnumAsByte<EShadowAIFormState>                    PreviousState;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShadowAIFormComponent.Multicast_ChangedToState
struct UShadowAIFormComponent_Multicast_ChangedToState_Params
{
	TEnumAsByte<EShadowAIFormState>                    InState;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShantyInterface.RequestInstrumentStop
struct UShantyInterface_RequestInstrumentStop_Params
{
	class AActor*                                      InstrumentActor;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShantyInterface.RequestInstrumentPlay
struct UShantyInterface_RequestInstrumentPlay_Params
{
	class AActor*                                      InstrumentActor;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TScriptInterface<class UPlayerEntitlementViewInterface> EntitlementInterface;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ShantyInterface.GetNumberOfShantiesPlaying
struct UShantyInterface_GetNumberOfShantiesPlaying_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShantyInterface.GetNumberOfInstrumentsPlayingOnEnsemble
struct UShantyInterface_GetNumberOfInstrumentsPlayingOnEnsemble_Params
{
	int                                                EnsembleIndex;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.SharkPawn.SetAIStrategy
struct ASharkPawn_SetAIStrategy_Params
{
	class UClass*                                      InStrategy;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SharkPawn.OnRep_CurrentAIStrategy
struct ASharkPawn_OnRep_CurrentAIStrategy_Params
{
	class UClass*                                      OldAIStrategy;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SharkPawn.Multicast_PlayMontageRPC
struct ASharkPawn_Multicast_PlayMontageRPC_Params
{
	int                                                AnimIndex;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               PlayAsDynamicMontage;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.SharkPawn.Multicast_DespawnRPC
struct ASharkPawn_Multicast_DespawnRPC_Params
{
};

// Function Athena.SharkPawn.IsDoingQuickDeath
struct ASharkPawn_IsDoingQuickDeath_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SharkPawn.GetIndexForMontage
struct ASharkPawn_GetIndexForMontage_Params
{
	class UObject*                                     Montage;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.SharkPawn.GetCreatureDistanceFromWaterHeight
struct ASharkPawn_GetCreatureDistanceFromWaterHeight_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SharkPawn.GetAIStrategy
struct ASharkPawn_GetAIStrategy_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TeleportLocationInterface.GetTeleportLocationForCharacter
struct UTeleportLocationInterface_GetTeleportLocationForCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTeleportLocation                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Athena.TeleportLocationInterface.GetAllTeleportLocationsForCharacter
struct UTeleportLocationInterface_GetAllTeleportLocationsForCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FTeleportLocation>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.SurfaceWaterComponent.SetSimulationActive
struct USurfaceWaterComponent_SetSimulationActive_Params
{
	bool                                               IsActive;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SurfaceWaterComponent.OnRep_AddWater
struct USurfaceWaterComponent_OnRep_AddWater_Params
{
};

// Function Athena.SurfaceWaterComponent.GetWaterTexture
struct USurfaceWaterComponent_GetWaterTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SurfaceWaterComponent.GetNormalTexture
struct USurfaceWaterComponent_GetNormalTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SurfaceWaterComponent.ConvertToWaterSpace
struct USurfaceWaterComponent_ConvertToWaterSpace_Params
{
	struct FVector                                     WorldSpacePosition;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.SurfaceWaterComponent.ClearWaterTexture
struct USurfaceWaterComponent_ClearWaterTexture_Params
{
	struct FLinearColor                                ClearColor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SurfaceWaterComponent.AddWater
struct USurfaceWaterComponent_AddWater_Params
{
	struct FVector                                     Position;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              Strength;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               CheckBounds;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
};

// Function Athena.Ship.ToggleShipWaterReflections
struct AShip_ToggleShipWaterReflections_Params
{
	bool                                               EnableReflections;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.SetVelocity
struct AShip_SetVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.SetDebugKeelOverSpeedScalar
struct AShip_SetDebugKeelOverSpeedScalar_Params
{
	float                                              Scalar;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.Replenish
struct AShip_Replenish_Params
{
};

// Function Athena.Ship.ReduceWaterOcclusionZone
struct AShip_ReduceWaterOcclusionZone_Params
{
	float                                              ReduceWaterOcclusionZoneTime;                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.OnShipPartUnregistered
struct AShip_OnShipPartUnregistered_Params
{
	struct FName                                       PartName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class AActor*                                      PartActor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.Ship.OnShipPartRegistered
struct AShip_OnShipPartRegistered_Params
{
	struct FName                                       PartName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class AActor*                                      PartActor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.Ship.OnRep_CrewShipManifest
struct AShip_OnRep_CrewShipManifest_Params
{
};

// Function Athena.Ship.OnOverlapEnd
struct AShip_OnOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.Ship.OnOverlapBegin
struct AShip_OnOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               FromSweep;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.Ship.Multicast_DisableAllShipInteractables
struct AShip_Multicast_DisableAllShipInteractables_Params
{
};

// Function Athena.Ship.IsWorldSpacePositionBelowTopDeckPlane
struct AShip_IsWorldSpacePositionBelowTopDeckPlane_Params
{
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.Ship.IsWorldSpacePositionBelowMidDeckPlane
struct AShip_IsWorldSpacePositionBelowMidDeckPlane_Params
{
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.Ship.IsOcclusionZoneFullyReduced
struct AShip_IsOcclusionZoneFullyReduced_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.GetShipLocatorPositionChecked
struct AShip_GetShipLocatorPositionChecked_Params
{
	TEnumAsByte<EShipLocation>                         LocatorID;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.Ship.GetShipLocatorPosition
struct AShip_GetShipLocatorPosition_Params
{
	TEnumAsByte<EShipLocation>                         LocatorName;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     LocatorPosition;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0004
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.Ship.GetSampledSpeed
struct AShip_GetSampledSpeed_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.GetInternalWater
struct AShip_GetInternalWater_Params
{
	class AShipInternalWater*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.GetHullSubmersedPercentage
struct AShip_GetHullSubmersedPercentage_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.GetHasShipEverSetSail
struct AShip_GetHasShipEverSetSail_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.GetEmpiricalMaxShipSpeedInMPS
struct AShip_GetEmpiricalMaxShipSpeedInMPS_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.GetDeckSurfaceWater
struct AShip_GetDeckSurfaceWater_Params
{
	class USurfaceWaterComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.GetCurrentVelocity
struct AShip_GetCurrentVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.EnableCalmWaterBobbing
struct AShip_EnableCalmWaterBobbing_Params
{
	bool                                               bEnable;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.Deplete
struct AShip_Deplete_Params
{
};

// Function Athena.Ship.CanBeReplenished
struct AShip_CanBeReplenished_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Ship.AreShipInteractablesDisabled
struct AShip_AreShipInteractablesDisabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipCustomizationLoadoutControlInterface.UnequipShipCustomization
struct UShipCustomizationLoadoutControlInterface_UnequipShipCustomization_Params
{
	class UClass*                                      InDesc;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.ShipCustomizationLoadoutControlInterface.SetShipCustomizationLoadout
struct UShipCustomizationLoadoutControlInterface_SetShipCustomizationLoadout_Params
{
	struct FShipCustomizationLoadout                   InLoadout;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.ShipCustomizationLoadoutControlInterface.SetInitialShipCustomizations
struct UShipCustomizationLoadoutControlInterface_SetInitialShipCustomizations_Params
{
	TArray<class UClass*>                              InInitialCustomizations;                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ShipCustomizationLoadoutControlInterface.EquipShipCustomization
struct UShipCustomizationLoadoutControlInterface_EquipShipCustomization_Params
{
	class UClass*                                      InDesc;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      InInstigator;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ShipCustomizationLoadoutViewInterface.GetShipCustomizationLoadout
struct UShipCustomizationLoadoutViewInterface_GetShipCustomizationLoadout_Params
{
	struct FShipCustomizationLoadout                   ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm) 0000
};

// Function Athena.ShipCustomizationLoadoutViewInterface.GetInitialShipCustomizations
struct UShipCustomizationLoadoutViewInterface_GetInitialShipCustomizations_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm) 0000
};

// Function Athena.ShipCustomizationLoadoutViewInterface.GetActivePartCustomizations
struct UShipCustomizationLoadoutViewInterface_GetActivePartCustomizations_Params
{
	TArray<struct FPartDesc>                           ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm) 0000
};

// Function Athena.ShipCustomizationLoadoutComponent.OnRep_Loadout
struct UShipCustomizationLoadoutComponent_OnRep_Loadout_Params
{
};

// Function Athena.ShipDescConversionFunctions.ShipDescToJson
struct UShipDescConversionFunctions_ShipDescToJson_Params
{
	struct FShipDesc                                   ShipDesc;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FString                                     JsonString;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0048
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0058
};

// Function Athena.ShipDescConversionFunctions.ShipDescFromJson
struct UShipDescConversionFunctions_ShipDescFromJson_Params
{
	struct FString                                     JsonString;                                               // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FShipDesc                                   ShipDesc;                                                 // (CPF_Parm, CPF_OutParm) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0058
};

// Function Athena.ShipDescGeneratorTestFunctionLibrary.GenerateShipDescForTestLargeShip
struct UShipDescGeneratorTestFunctionLibrary_GenerateShipDescForTestLargeShip_Params
{
	struct FShipDesc                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.ShipFactory.SpawnSyncWithDatabase
struct UShipFactory_SpawnSyncWithDatabase_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FShipDesc                                   Desc;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	TScriptInterface<class UShipAssetClassDatabaseInterface> ShipAssetClassDatabaseInterface;                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	struct FRotator                                    Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 006C
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0078
};

// Function Athena.ShipFactory.SpawnSync
struct UShipFactory_SpawnSync_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FShipDesc                                   Desc;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
	struct FRotator                                    Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 005C
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0068
};

// Function Athena.ShipFactory.MakeShipFactory
struct UShipFactory_MakeShipFactory_Params
{
	class UShipFactory*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipFactorySpawnCallbackCounter.OnSuccess
struct UShipFactorySpawnCallbackCounter_OnSuccess_Params
{
	class AActor*                                      InActor;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipFactorySpawnCallbackCounter.OnFailure
struct UShipFactorySpawnCallbackCounter_OnFailure_Params
{
};

// Function Athena.ShipFunctionLibrary.SpawnShip
struct UShipFunctionLibrary_SpawnShip_Params
{
	struct FVector                                     Pos;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRotator                                    Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Athena.ShipFunctionLibrary.SpawnFunctioningSmallShipWithCrewId
struct UShipFunctionLibrary_SpawnFunctioningSmallShipWithCrewId_Params
{
	struct FVector                                     Pos;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRotator                                    Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FGuid                                       CrewId;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0018
};

// Function Athena.ShipFunctionLibrary.SpawnFunctioningSmallShip
struct UShipFunctionLibrary_SpawnFunctioningSmallShip_Params
{
	struct FVector                                     Pos;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRotator                                    Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.ShipFunctionLibrary.SpawnFunctioningLargeShip
struct UShipFunctionLibrary_SpawnFunctioningLargeShip_Params
{
	struct FVector                                     Pos;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRotator                                    Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.ShipFunctionLibrary.GetWheels
struct UShipFunctionLibrary_GetWheels_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class AWheel*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.ShipFunctionLibrary.GetSailHoists
struct UShipFunctionLibrary_GetSailHoists_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class ASailHoist*>                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.ShipFunctionLibrary.GetSailAnglers
struct UShipFunctionLibrary_GetSailAnglers_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class ASailAngle*>                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.ShipFunctionLibrary.GetLadders
struct UShipFunctionLibrary_GetLadders_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class ALadder*>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.ShipFunctionLibrary.GetInteractablesOfClass
struct UShipFunctionLibrary_GetInteractablesOfClass_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      Class;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0010
};

// Function Athena.ShipFunctionLibrary.GetInteractables
struct UShipFunctionLibrary_GetInteractables_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.ShipFunctionLibrary.GetCannons
struct UShipFunctionLibrary_GetCannons_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class ACannon*>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.ShipHullCollisionComponent.StopShipImpactSfx_RPC
struct UShipHullCollisionComponent_StopShipImpactSfx_RPC_Params
{
};

// Function Athena.ShipHullCollisionComponent.PlayShipImpactSfx_RPC
struct UShipHullCollisionComponent_PlayShipImpactSfx_RPC_Params
{
};

// Function Athena.ShipHullCollisionComponent.IsWorldSpacePositionInsideHull
struct UShipHullCollisionComponent_IsWorldSpacePositionInsideHull_Params
{
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.ShipHullCollisionComponent.IsWorldSpacePositionInsideCabin
struct UShipHullCollisionComponent_IsWorldSpacePositionInsideCabin_Params
{
	struct FVector                                     Position;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Athena.ShipHullCollisionComponent.GetIsShipInContactWithSolidHits
struct UShipHullCollisionComponent_GetIsShipInContactWithSolidHits_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipHullCollisionComponent.GetIsShipInContactWithLand
struct UShipHullCollisionComponent_GetIsShipInContactWithLand_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipPartCustomization.MakeSyncShipPartCustomization
struct UShipPartCustomization_MakeSyncShipPartCustomization_Params
{
	class UShipPartCustomization*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipPartCustomization.MakeAsyncShipPartCustomization
struct UShipPartCustomization_MakeAsyncShipPartCustomization_Params
{
	class UShipPartCustomization*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipPartCustomization.Customize
struct UShipPartCustomization_Customize_Params
{
	class AShip*                                       InShip;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FPartDesc                                   PartDesc;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FScriptDelegate                             OnSuccessCallback;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0028
	struct FScriptDelegate                             OnFailureCallback;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0038
};

// Function Athena.ShipPartCustomizationTestCallbacks.OnSuccess
struct UShipPartCustomizationTestCallbacks_OnSuccess_Params
{
	class AActor*                                      InActor;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipPartCustomizationTestCallbacks.OnFailure
struct UShipPartCustomizationTestCallbacks_OnFailure_Params
{
	TEnumAsByte<EShipPartCustomizationErrorCode>       InErrorCode;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipPartCustomizationTestLibrary.ApplyCustomization
struct UShipPartCustomizationTestLibrary_ApplyCustomization_Params
{
	class UShipPartCustomizationComponent*             CustomizationComponent;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	struct FPartDesc                                   InPartDesc;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0028
};

// Function Athena.ShipService.IsWorldPosInsideHull
struct AShipService_IsWorldPosInsideHull_Params
{
	struct FVector                                     Pos;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class AShip*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ShipService.IsWorldPosInsideCabin
struct AShipService_IsWorldPosInsideCabin_Params
{
	struct FVector                                     Pos;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class AShip*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.ShipStuckDetectionComponent.GetDoesShipAppearCurrentlyStuck
struct UShipStuckDetectionComponent_GetDoesShipAppearCurrentlyStuck_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipTelemetryComponent.SetShipHeartbeatInterval
struct UShipTelemetryComponent_SetShipHeartbeatInterval_Params
{
	float                                              Interval;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipTelemetryComponent.GetShipIdForWebServices
struct UShipTelemetryComponent_GetShipIdForWebServices_Params
{
	struct FGuid                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.ShipTrackerComponent.IsPlayerAbandoned
struct UShipTrackerComponent_IsPlayerAbandoned_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Shipwreck.OnOverlapEnd
struct AShipwreck_OnOverlapEnd_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.Shipwreck.OnOverlapBegin
struct AShipwreck_OnOverlapBegin_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  OverlapInfo;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.ShipwreckSiteGeneratorSimulator.SetIslands
struct AShipwreckSiteGeneratorSimulator_SetIslands_Params
{
};

// Function Athena.ShipwreckSiteGeneratorSimulator.ResetShipwrecks
struct AShipwreckSiteGeneratorSimulator_ResetShipwrecks_Params
{
};

// Function Athena.ShipwreckSiteGeneratorSimulator.ResetDebugDrawing
struct AShipwreckSiteGeneratorSimulator_ResetDebugDrawing_Params
{
};

// Function Athena.ShipwreckSiteGeneratorSimulator.GetIslands
struct AShipwreckSiteGeneratorSimulator_GetIslands_Params
{
	TArray<struct FIsland>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.ShipwreckSiteGeneratorSimulator.GenerateWreck
struct AShipwreckSiteGeneratorSimulator_GenerateWreck_Params
{
};

// Function Athena.SinkingComponent.SinkShip
struct USinkingComponent_SinkShip_Params
{
};

// Function Athena.SinkingComponent.SetSinkingParams
struct USinkingComponent_SetSinkingParams_Params
{
	struct FSinkingShipParams                          Params;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.SinkingComponent.SetDebugKeelOverConfigIndexOverride
struct USinkingComponent_SetDebugKeelOverConfigIndexOverride_Params
{
	int                                                Index;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SinkingComponent.OnRep_ShipState
struct USinkingComponent_OnRep_ShipState_Params
{
	unsigned char                                      PreviousState;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SinkingComponent.IsSinking
struct USinkingComponent_IsSinking_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SinkingComponent.IsKeeledOver
struct USinkingComponent_IsKeeledOver_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SinkingComponent.IsDeepEnoughInWaterToSink
struct USinkingComponent_IsDeepEnoughInWaterToSink_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SinkingComponent.GetSinkingParams
struct USinkingComponent_GetSinkingParams_Params
{
	struct FSinkingShipParams                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.SinkingComponent.GetShipState
struct USinkingComponent_GetShipState_Params
{
	TEnumAsByte<EShipState>                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SinkingComponent.ForceSinkShip
struct USinkingComponent_ForceSinkShip_Params
{
};

// Function Athena.SinkingComponent.BeginningToSinkRPC
struct USinkingComponent_BeginningToSinkRPC_Params
{
};

// Function Athena.SkellyFort.Multicast_OnWaveGroupSpawned
struct ASkellyFort_Multicast_OnWaveGroupSpawned_Params
{
	struct FBountySpawnerNewWaveGroupSpawnedEvent      Ev;                                                       // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
	class UWwiseEvent*                                 AudioEvent;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function Athena.SkellyFort.Multicast_OnFortComplete
struct ASkellyFort_Multicast_OnFortComplete_Params
{
	struct FVector                                     DeathLocation;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class UWwiseEvent*                                 AudioEvent;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.StaggerComponent.SetStaggerStrength
struct UStaggerComponent_SetStaggerStrength_Params
{
	float                                              UnaryStrength;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.StatusEffectComponentProviderInterface.GetStatusEffectComponent
struct UStatusEffectComponentProviderInterface_GetStatusEffectComponent_Params
{
	class UStatusEffectComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Athena.StatusEffectComponent.OnRep_StatusEffect
struct UStatusEffectComponent_OnRep_StatusEffect_Params
{
};

// Function Athena.StorageContainerComponent.OnRep_ItemCount
struct UStorageContainerComponent_OnRep_ItemCount_Params
{
	int                                                InOldItemCount;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Storm.Multicast_QueueLightning
struct AStorm_Multicast_QueueLightning_Params
{
	struct FLightningImpact                            LightningImpact;                                          // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
};

// Function Athena.StunnedActionStateId.PushCharacterIntoStunnedActionState
struct UStunnedActionStateId_PushCharacterIntoStunnedActionState_Params
{
	class AAthenaCharacter*                            Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FStunnedActionStateParams                   Params;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function Athena.SwallowedByKrakenActionStateId.PushCharacterIntoSwallowedByKrakenActionState
struct USwallowedByKrakenActionStateId_PushCharacterIntoSwallowedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AKrakenAnimatedTentacle*                     Tentacle;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.SwallowedByKrakenActionStateId.PopCharacterOutOfSwallowedByKrakenActionState
struct USwallowedByKrakenActionStateId_PopCharacterOutOfSwallowedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SwimmingCreatureAnimationInstance.RunningOnServer
struct USwimmingCreatureAnimationInstance_RunningOnServer_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SwimmingCreatureMovementComponent.SetSwimmingMode
struct USwimmingCreatureMovementComponent_SetSwimmingMode_Params
{
	TEnumAsByte<ESwimmingMode>                         InSwimmingMode;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.SwimmingCreatureMovementComponent.OnRep_ReplicatedSwimmingMode
struct USwimmingCreatureMovementComponent_OnRep_ReplicatedSwimmingMode_Params
{
};

// Function Athena.SwimmingCreatureMovementComponent.OnHasSolidHit
struct USwimmingCreatureMovementComponent_OnHasSolidHit_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	struct FVector                                     NormalImpulse;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 001C
};

// Function Athena.SwimmingCreatureMovementComponent.Multicast_SetNewPathFollowingParamsRPC
struct USwimmingCreatureMovementComponent_Multicast_SetNewPathFollowingParamsRPC_Params
{
	struct FVector                                     ServerGoalLocation;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ServerYawTurnRate;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              ServerMaxSpeed;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              ServerVelocitySmoothingFactor;                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	bool                                               IsServerCorrectionTurn;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function Athena.SwimmingCreatureMovementComponent.GetSwimmingMode
struct USwimmingCreatureMovementComponent_GetSwimmingMode_Params
{
	TEnumAsByte<ESwimmingMode>                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SwimmingCreatureMovementComponent.GetMovementPropertiesForAIStrategy
struct USwimmingCreatureMovementComponent_GetMovementPropertiesForAIStrategy_Params
{
	class UClass*                                      AIStrategy;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FSwimmingCreatureAIStrategyMovementProperties ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Athena.SwimmingCreatureMovementComponent.GetCurrentYawTurnRate
struct USwimmingCreatureMovementComponent_GetCurrentYawTurnRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SwimmingCreatureMovementComponent.GetCurrentVelocity
struct USwimmingCreatureMovementComponent_GetCurrentVelocity_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.SwimmingCreatureMovementComponent.GetComponentDistanceFromWaterHeight
struct USwimmingCreatureMovementComponent_GetComponentDistanceFromWaterHeight_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TalkToNPCActionStateId.PushCharIntoActionState
struct UTalkToNPCActionStateId_PushCharIntoActionState_Params
{
	class UNPCDialogComponent*                         NPCDialogComp;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.TalkToNPCActionStateId.PopCharOutOfActionState
struct UTalkToNPCActionStateId_PopCharOutOfActionState_Params
{
	class UNPCDialogComponent*                         NPCDialogComp;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.TavernStepsTrigger.OnRep_StepsState
struct ATavernStepsTrigger_OnRep_StepsState_Params
{
	TEnumAsByte<EStepsTriggerState>                    LastState;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TavernStepsTrigger.OnEndOverlapTavern
struct ATavernStepsTrigger_OnEndOverlapTavern_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.TavernStepsTrigger.OnEndOverlapStepsListener
struct ATavernStepsTrigger_OnEndOverlapStepsListener_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.TavernStepsTrigger.OnBeginOverlapTavern
struct ATavernStepsTrigger_OnBeginOverlapTavern_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.TavernStepsTrigger.OnBeginOverlapStepsListener
struct ATavernStepsTrigger_OnBeginOverlapStepsListener_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.TavernStepsTrigger.Multicast_StartAnimatedStepsOpen
struct ATavernStepsTrigger_Multicast_StartAnimatedStepsOpen_Params
{
};

// Function Athena.TeleportActionStateId.PushCharacterIntoTeleportActionStateWithCustomTeleportLocation
struct UTeleportActionStateId_PushCharacterIntoTeleportActionStateWithCustomTeleportLocation_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTeleportLocation                           TeleportLocation;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	TEnumAsByte<ETeleportActionStateFadeType>          TeleportFadeType;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	TEnumAsByte<ETeleportActionStateConditions>        TeleportConditions;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0031
	int                                                StreamOutLevelId;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0034
	int                                                StreamInLevelId;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
};

// Function Athena.TeleportActionStateId.PushCharacterIntoTeleportActionState
struct UTeleportActionStateId_PushCharacterIntoTeleportActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<ETeleportActionStateFadeType>          TeleportFadeType;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<ETeleportActionStateConditions>        TeleportConditions;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0009
	int                                                StreamOutLevelId;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	int                                                StreamInLevelId;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.TeleportFunctions.GetTeleportLocationOnShip
struct UTeleportFunctions_GetTeleportLocationOnShip_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AShip*                                       InShip;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FTeleportLocation                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0010
};

// Function Athena.TeleportFunctions.GetTeleportLocationAroundTarget
struct UTeleportFunctions_GetTeleportLocationAroundTarget_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      InTarget;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              InDistanceFromTarget;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FTeleportLocation                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0018
};

// Function Athena.TeleportFunctions.GetNearestTeleportLocationOnLand
struct UTeleportFunctions_GetNearestTeleportLocationOnLand_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTeleportLocation                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Athena.TestControlObjectActionStateId.PushCharacterIntoTestControlObjectActionState
struct UTestControlObjectActionStateId_PushCharacterIntoTestControlObjectActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      ControlledObject;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              DockTime;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function Athena.TestNetworkedEventsFunctionLibrary.FireTestEventToServer
struct UTestNetworkedEventsFunctionLibrary_FireTestEventToServer_Params
{
	class AAthenaPlayerController*                     PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                TestEventData;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.TestNetworkedEventsFunctionLibrary.FireTestEventToClient
struct UTestNetworkedEventsFunctionLibrary_FireTestEventToClient_Params
{
	class AAthenaPlayerController*                     PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                TestEventData;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.TestQuestProxy.Stop
struct ATestQuestProxy_Stop_Params
{
};

// Function Athena.TestQuestProxy.CreateXMarksTheSpotQuest
struct ATestQuestProxy_CreateXMarksTheSpotQuest_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FXMarksTheSpotQuestDesc                     QuestDesc;                                                // (CPF_Parm) 0008
};

// Function Athena.TestQuestProxy.AddParticipant
struct ATestQuestProxy_AddParticipant_Params
{
	class AAthenaPlayerCharacter*                      Participant;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TestReturnCompleteAfterTimeoutPlayerRelevancyService.CreateTestReturnCompleteAfterTimeoutPlayerRelevancyService
struct UTestReturnCompleteAfterTimeoutPlayerRelevancyService_CreateTestReturnCompleteAfterTimeoutPlayerRelevancyService_Params
{
	float                                              InTimeoutWanted;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UTestReturnCompleteAfterTimeoutPlayerRelevancyService* ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.TestShipAssetClassDatabase.MakeTestShipAssetClassDatabase
struct UTestShipAssetClassDatabase_MakeTestShipAssetClassDatabase_Params
{
	class UTestShipAssetClassDatabase*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TestStreamingTeleport.GetTeleportPoints
struct UTestStreamingTeleport_GetTeleportPoints_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<ECollisionChannel>                     BlockingChannel;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              CharacterRadius;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              CharacterHalfHeight;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              IntervalSize;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FVector                                     MinExtents;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0018
	struct FVector                                     MaxExtents;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0024
	TArray<struct FVector>                             Points;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0030
};

// Function Athena.TextureFeedbackComponent.SetInputTexture1
struct UTextureFeedbackComponent_SetInputTexture1_Params
{
	class UTextureRenderTarget2D*                      InRenderTargetTexture;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TextureFeedbackComponent.SetEffectActive
struct UTextureFeedbackComponent_SetEffectActive_Params
{
	bool                                               IsActive;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TextureFeedbackComponent.GetTexture
struct UTextureFeedbackComponent_GetTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TextureFeedbackComponent.CopyToTargetTexture
struct UTextureFeedbackComponent_CopyToTargetTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UTextureRenderTarget2D*                      RenderTarget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UTexture*                                    SourceTexture;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.TextureFeedbackComponent.ClearTexture
struct UTextureFeedbackComponent_ClearTexture_Params
{
	struct FLinearColor                                ClearColor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TrackedActorService.OnTrackedActorDestroyed
struct UTrackedActorService_OnTrackedActorDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.BountyMap.RefreshContents
struct ABountyMap_RefreshContents_Params
{
};

// Function Athena.BountyMap.OnTextCanvasUpdate
struct ABountyMap_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Width;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Height;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.BountyMap.OnRep_MapInventoryTexturePath
struct ABountyMap_OnRep_MapInventoryTexturePath_Params
{
};

// Function Athena.BountyMap.OnRep_Contents
struct ABountyMap_OnRep_Contents_Params
{
	struct FBountyMapContents                          InPreviousContents;                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.MerchantMap.RefreshContents
struct AMerchantMap_RefreshContents_Params
{
};

// Function Athena.MerchantMap.OnTextCanvasUpdate
struct AMerchantMap_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Width;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Height;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.MerchantMap.OnRep_Contents
struct AMerchantMap_OnRep_Contents_Params
{
	struct FMerchantMapContents                        InPreviousContents;                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.RiddleMap.TriggerMagicGlow_RPC
struct ARiddleMap_TriggerMagicGlow_RPC_Params
{
};

// Function Athena.RiddleMap.StartMagicGlowEffect
struct ARiddleMap_StartMagicGlowEffect_Params
{
};

// Function Athena.RiddleMap.RefreshContents
struct ARiddleMap_RefreshContents_Params
{
};

// Function Athena.RiddleMap.OnTextCanvasUpdate
struct ARiddleMap_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Width;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Height;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.RiddleMap.OnRep_MapInventoryTexturePath
struct ARiddleMap_OnRep_MapInventoryTexturePath_Params
{
};

// Function Athena.RiddleMap.OnRep_Contents
struct ARiddleMap_OnRep_Contents_Params
{
	struct FRiddleMapContents                          InPreviousContents;                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.RiddleMap.OnMaskCanvasUpdate
struct ARiddleMap_OnMaskCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Width;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Height;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.XMarksTheSpotMap.SetMapData
struct AXMarksTheSpotMap_SetMapData_Params
{
	TAssetPtr<class UTexture>                          InMapTextureAsset;                                        // (CPF_Parm) 0000
	TAssetPtr<class UTexture>                          InMapInventoryTextureAsset;                               // (CPF_Parm) 0020
	TArray<struct FXMarksTheSpotMapMark>               InMarks;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0040
	float                                              InRotation;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
};

// Function Athena.XMarksTheSpotMap.OnRep_Marks
struct AXMarksTheSpotMap_OnRep_Marks_Params
{
};

// Function Athena.XMarksTheSpotMap.OnRep_MapTexturePath
struct AXMarksTheSpotMap_OnRep_MapTexturePath_Params
{
};

// Function Athena.XMarksTheSpotMap.OnRep_MapInventoryTexturePath
struct AXMarksTheSpotMap_OnRep_MapInventoryTexturePath_Params
{
};

// Function Athena.XMarksTheSpotMap.OnCanvasUpdate
struct AXMarksTheSpotMap_OnCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Width;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Height;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.XMarksTheSpotMap.IsMapTextureLoaded
struct AXMarksTheSpotMap_IsMapTextureLoaded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.XMarksTheSpotMap.GetRenderTarget
struct AXMarksTheSpotMap_GetRenderTarget_Params
{
	class UCanvasRenderTarget2D*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.XMarksTheSpotMap.GetMarks
struct AXMarksTheSpotMap_GetMarks_Params
{
	TArray<struct FXMarksTheSpotMapMark>               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.XMarksTheSpotMap.GetMapTextureAsset
struct AXMarksTheSpotMap_GetMapTextureAsset_Params
{
	TAssetPtr<class UTexture>                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.XMarksTheSpotMap.GetDynamicMaterialThird
struct AXMarksTheSpotMap_GetDynamicMaterialThird_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.XMarksTheSpotMap.GetDynamicMaterialFirst
struct AXMarksTheSpotMap_GetDynamicMaterialFirst_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TriggerObject.Trigger
struct ATriggerObject_Trigger_Params
{
	class AActor*                                      InTriggeringActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TriggerObject.OnTriggerServer
struct ATriggerObject_OnTriggerServer_Params
{
	class AActor*                                      InTriggeringActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TriggerObject.OnTriggerClient
struct ATriggerObject_OnTriggerClient_Params
{
	class AActor*                                      InTriggeringActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TriggerObject.MulticastTrigger
struct ATriggerObject_MulticastTrigger_Params
{
	class AActor*                                      InTriggeringActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TriggerObject.CanActorTrigger
struct ATriggerObject_CanActorTrigger_Params
{
	class AActor*                                      InTriggeringActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.TeleportTriggerObject.OnTriggerTeleportServer
struct ATeleportTriggerObject_OnTriggerTeleportServer_Params
{
	class AActor*                                      InTriggeringActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TutorialComponent.OnRep_HasBegun
struct UTutorialComponent_OnRep_HasBegun_Params
{
};

// Function Athena.UnifiedDelegateTestUnifiedDelegate.UnbindDelegate
struct UUnifiedDelegateTestUnifiedDelegate_UnbindDelegate_Params
{
};

// Function Athena.UnifiedDelegateTestUnifiedDelegate.MakeTestUnifiedDelegate
struct UUnifiedDelegateTestUnifiedDelegate_MakeTestUnifiedDelegate_Params
{
	class UUnifiedDelegateTestUnifiedDelegate*         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.UnifiedDelegateTestUnifiedDelegate.IsDelegateBound
struct UUnifiedDelegateTestUnifiedDelegate_IsDelegateBound_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.UnifiedDelegateTestUnifiedDelegate.BindDelegate
struct UUnifiedDelegateTestUnifiedDelegate_BindDelegate_Params
{
	struct FScriptDelegate                             InDynamicDelegate;                                        // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function Athena.UnloadItemActionStateId.PushCharacterIntoUnloadItemActionState
struct UUnloadItemActionStateId_PushCharacterIntoUnloadItemActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      UnloadableActor;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Interactable;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.UnloadItemActionStateId.PopCharacterOutOfUnloadItemActionState
struct UUnloadItemActionStateId_PopCharacterOutOfUnloadItemActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.UsableWieldableComponent.Server_TriggerOneShotUse
struct UUsableWieldableComponent_Server_TriggerOneShotUse_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.UsableWieldableComponent.Multicast_TriggerOneShotUse
struct UUsableWieldableComponent_Multicast_TriggerOneShotUse_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.UseCannonActionStateId.PushCharacterIntoUseCannonActionState
struct UUseCannonActionStateId_PushCharacterIntoUseCannonActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      CannonActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.UseCannonCompositeInputHandler.OnSecondaryInteractReleased
struct UUseCannonCompositeInputHandler_OnSecondaryInteractReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.UseCannonCompositeInputHandler.OnSecondaryInteract
struct UUseCannonCompositeInputHandler_OnSecondaryInteract_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.UseCannonCompositeInputHandler.OnMoveYaw
struct UUseCannonCompositeInputHandler_OnMoveYaw_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.UseCannonCompositeInputHandler.OnMovePitch
struct UUseCannonCompositeInputHandler_OnMovePitch_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.UseCannonCompositeInputHandler.OnFireCannon
struct UUseCannonCompositeInputHandler_OnFireCannon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.UseItemActionStateId.PushCharacterIntoUseItemActionState
struct UUseItemActionStateId_PushCharacterIntoUseItemActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      Usable;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.UseItemActionStateId.PopCharacterOutOfUseItemActionState
struct UUseItemActionStateId_PopCharacterOutOfUseItemActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.UseLadderActionStateId.PushCharacterIntoUseLadderActionState
struct UUseLadderActionStateId_PushCharacterIntoUseLadderActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      LadderActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              InteractingHeight;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	unsigned char                                      ClimbId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	struct FLadderDefinition                           LadderDefinition;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0020
};

// Function Athena.UseMapTableActionStateId.PushCharacterIntoUseMapTableActionState
struct UUseMapTableActionStateId_PushCharacterIntoUseMapTableActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      MapTableActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Athena.UseMapTableCompositeInputHandler.OnZoomOut
struct UUseMapTableCompositeInputHandler_OnZoomOut_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.UseMapTableCompositeInputHandler.OnZoomIn
struct UUseMapTableCompositeInputHandler_OnZoomIn_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.UseMapTableCompositeInputHandler.OnTogglePin
struct UUseMapTableCompositeInputHandler_OnTogglePin_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.UseMapTableCompositeInputHandler.OnPanY
struct UUseMapTableCompositeInputHandler_OnPanY_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.UseMapTableCompositeInputHandler.OnPanX
struct UUseMapTableCompositeInputHandler_OnPanX_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.UseMapTableCompositeInputHandler.OnMouseZoom
struct UUseMapTableCompositeInputHandler_OnMouseZoom_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.UseMapTableCompositeInputHandler.OnMousePanY
struct UUseMapTableCompositeInputHandler_OnMousePanY_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.UseMapTableCompositeInputHandler.OnMousePanX
struct UUseMapTableCompositeInputHandler_OnMousePanX_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.VenomComponent.SprayVenomInDirection
struct UVenomComponent_SprayVenomInDirection_Params
{
	struct FVector                                     SourceLocation;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     Direction;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
};

// Function Athena.VenomComponent.SprayVenomAtClosestTarget
struct UVenomComponent_SprayVenomAtClosestTarget_Params
{
	struct FVector                                     SourceLocation;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.VenomComponent.ApplyVenomToTarget
struct UVenomComponent_ApplyVenomToTarget_Params
{
	class AActor*                                      Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.VfxFunctionLibrary.WithWorldOwner
struct UVfxFunctionLibrary_WithWorldOwner_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.VfxFunctionLibrary.WithRelativeScale
struct UVfxFunctionLibrary_WithRelativeScale_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FVector                                     Scale3D;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0060
};

// Function Athena.VfxFunctionLibrary.WithOwner
struct UVfxFunctionLibrary_WithOwner_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UObject*                                     InOwner;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	bool                                               InOwnerOnlySee;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0068
	bool                                               InOwnerNoSee;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0069
};

// Function Athena.VfxFunctionLibrary.WithEffect
struct UVfxFunctionLibrary_WithEffect_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UObject*                                     InEmitterTemplate;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	bool                                               InAutoDestroy;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0068
};

// Function Athena.VfxFunctionLibrary.Spawn
struct UVfxFunctionLibrary_Spawn_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	class UParticleSystemComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0068
};

// Function Athena.VfxFunctionLibrary.SetUnderwater
struct UVfxFunctionLibrary_SetUnderwater_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               IsUnderwater;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
};

// Function Athena.VfxFunctionLibrary.InVfxRegion
struct UVfxFunctionLibrary_InVfxRegion_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<EVfxRegion>                            InRegion;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
};

// Function Athena.VfxFunctionLibrary.AttachedToSocket
struct UVfxFunctionLibrary_AttachedToSocket_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class USceneComponent*                             InAttachToComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0060
	struct FName                                       InAttachPointName;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0068
	TEnumAsByte<EAttachLocation>                       InLocationType;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0070
};

// Function Athena.VfxFunctionLibrary.AttachedToComponent
struct UVfxFunctionLibrary_AttachedToComponent_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class USceneComponent*                             InAttachToComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0060
	TEnumAsByte<EAttachLocation>                       InLocationType;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0068
};

// Function Athena.VfxFunctionLibrary.AtSocketLocation
struct UVfxFunctionLibrary_AtSocketLocation_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class USceneComponent*                             InSocketOwnerComponent;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0060
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0068
	struct FVector                                     InLocation;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0070
	struct FRotator                                    InRotation;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 007C
};

// Function Athena.VfxFunctionLibrary.AtLocation
struct UVfxFunctionLibrary_AtLocation_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FVector                                     InLocation;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	struct FRotator                                    InRotation;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 006C
};

// Function Athena.VfxFunctionLibrary.AthenaSpawnShipRelativeEmitterAtSocketLocation
struct UVfxFunctionLibrary_AthenaSpawnShipRelativeEmitterAtSocketLocation_Params
{
	class UObject*                                     EmitterTemplate;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AAthenaPlayerCharacter*                      AthenaPlayerCharacter;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class USceneComponent*                             SocketOwnerComponent;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0010
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
	bool                                               bAutoDestroy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
	bool                                               bOwnerOnlySee;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0039
	bool                                               bOwnerNoSee;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 003A
	bool                                               bIsUnderwater;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 003B
	TEnumAsByte<EVfxRegion>                            VfxRegion;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 003C
	class UParticleSystemComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0040
};

// Function Athena.VfxFunctionLibrary.AthenaSpawnEmitterAttachedWithOwner
struct UVfxFunctionLibrary_AthenaSpawnEmitterAttachedWithOwner_Params
{
	class UObject*                                     EmitterTemplate;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class USceneComponent*                             AttachToComponent;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	class UObject*                                     Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FName                                       AttachPointName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
	bool                                               bAutoDestroy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0039
	bool                                               bOwnerOnlySee;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 003A
	bool                                               bOwnerNoSee;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 003B
	bool                                               bIsUnderwater;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 003C
	TEnumAsByte<EVfxRegion>                            VfxRegion;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 003D
	class UParticleSystemComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0040
};

// Function Athena.VfxFunctionLibrary.AthenaSpawnEmitterAttachedAndWorldOwned
struct UVfxFunctionLibrary_AthenaSpawnEmitterAttachedAndWorldOwned_Params
{
	class UObject*                                     EmitterTemplate;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class USceneComponent*                             AttachToComponent;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	struct FName                                       AttachPointName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	bool                                               bAutoDestroy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0031
	bool                                               bIsUnderwater;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0032
	TEnumAsByte<EVfxRegion>                            VfxRegion;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0033
	class UParticleSystemComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0038
};

// Function Athena.VfxFunctionLibrary.AthenaSpawnEmitterAtLocationWithOwner
struct UVfxFunctionLibrary_AthenaSpawnEmitterAtLocationWithOwner_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     EmitterTemplate;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FRotator                                    SpawnRotation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	bool                                               bAutoDestroy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	bool                                               bOwnerOnlySee;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0031
	bool                                               bOwnerNoSee;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0032
	bool                                               bIsUnderwater;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0033
	TEnumAsByte<EVfxRegion>                            VfxRegion;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0034
	class UParticleSystemComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0038
};

// Function Athena.VfxFunctionLibrary.AthenaSpawnEmitterAtLocation
struct UVfxFunctionLibrary_AthenaSpawnEmitterAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     EmitterTemplate;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	bool                                               bAutoDestroy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	bool                                               bIsUnderwater;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0029
	TEnumAsByte<EVfxRegion>                            VfxRegion;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002A
	class UParticleSystemComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0030
};

// Function Athena.VfxSelectorFunctionLibrary.SelectUpdateVfxWithOwner
struct UVfxSelectorFunctionLibrary_SelectUpdateVfxWithOwner_Params
{
	class UVfxSelectorDataAsset*                       SelectorAsset;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class AActor*                                      Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	class UParticleSystemComponent*                    ExistingVfx;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0018
	class USceneComponent*                             AttachToComponent;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0020
	struct FName                                       AttachPointName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0034
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	bool                                               bAutoDestroy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 004C
	bool                                               bOwnerOnlySee;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 004D
	bool                                               bOwnerNoSee;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 004E
	bool                                               bIsUnderwater;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 004F
	class UParticleSystemComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0050
};

// Function Athena.VfxSelectorFunctionLibrary.SelectSpawnVfxAttachedWithOwner
struct UVfxSelectorFunctionLibrary_SelectSpawnVfxAttachedWithOwner_Params
{
	class UVfxSelectorDataAsset*                       SelectorAsset;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class USceneComponent*                             AttachToComponent;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0010
	class AActor*                                      Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FName                                       AttachPointName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
	bool                                               bAutoDestroy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0044
	bool                                               bOwnerOnlySee;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0045
	bool                                               bOwnerNoSee;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0046
	bool                                               bIsUnderwater;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0047
	class UParticleSystemComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0048
};

// Function Athena.VfxSelectorFunctionLibrary.SelectSpawnVfx
struct UVfxSelectorFunctionLibrary_SelectSpawnVfx_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UVfxSelectorDataAsset*                       SelectorAsset;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	bool                                               bAutoDestroy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
	bool                                               bOwnerOnlySee;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002D
	bool                                               bOwnerNoSee;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002E
	bool                                               bIsUnderwater;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002F
	class UParticleSystemComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0030
};

// Function Athena.VomitComponent.VomitActivate
struct UVomitComponent_VomitActivate_Params
{
	struct FName                                       VomitType;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              Duration;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.VomitComponent.OnOverlapBegin
struct UVomitComponent_OnOverlapBegin_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Athena.VomitComponent.Multicast_VomitImpact
struct UVomitComponent_Multicast_VomitImpact_Params
{
	struct FHitResult                                  Result;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
};

// Function Athena.VomitComponent.Multicast_VomitActivate
struct UVomitComponent_Multicast_VomitActivate_Params
{
	struct FName                                       VomitType;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.VomitComponent.IsFaceCoveredWithVomit
struct UVomitComponent_IsFaceCoveredWithVomit_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.VomitComponent.DidVomitVFXSpawn
struct UVomitComponent_DidVomitVFXSpawn_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.VomitComponent.Client_VomitHit
struct UVomitComponent_Client_VomitHit_Params
{
};

// Function Athena.VotableWithSessionComponent.SetVoteDataIndex
struct UVotableWithSessionComponent_SetVoteDataIndex_Params
{
	int                                                InVoteDataIndex;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.VotableWithSessionComponent.IsSessionLocked
struct UVotableWithSessionComponent_IsSessionLocked_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.VotableWithSessionComponent.GetVoteDataIndex
struct UVotableWithSessionComponent_GetVoteDataIndex_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.BindToParentShipCrewVotingSession.OnRep_Manifest
struct UBindToParentShipCrewVotingSession_OnRep_Manifest_Params
{
};

// Function Athena.VoyageGeneratorSim.SimulateVoyageChain
struct AVoyageGeneratorSim_SimulateVoyageChain_Params
{
	int                                                Count;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Seed;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	int                                                MaxHistory;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     StartingLocation;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
	TArray<struct FIsland>                             Islands;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0018
	class UVoyageRecipeDataAsset*                      Recipe;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function Athena.VoyageGeneratorSim.ProcessSimulatedVoyage
struct AVoyageGeneratorSim_ProcessSimulatedVoyage_Params
{
	class UVoyageGeneratorSimResult*                   Voyage;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.VoyageGeneratorSim.OnEndSimulationRun
struct AVoyageGeneratorSim_OnEndSimulationRun_Params
{
};

// Function Athena.VoyageGeneratorSim.OnBeginSimulationRun
struct AVoyageGeneratorSim_OnBeginSimulationRun_Params
{
};

// Function Athena.VoyageGeneratorSimBlackboardFunctions.PrintBlackboard
struct UVoyageGeneratorSimBlackboardFunctions_PrintBlackboard_Params
{
	struct FVoyageGeneratorSimBlackboard               Blackboard;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Athena.VoyageGeneratorSimBlackboardFunctions.GetValuesFromBlackboardByNameInt
struct UVoyageGeneratorSimBlackboardFunctions_GetValuesFromBlackboardByNameInt_Params
{
	struct FVoyageGeneratorSimBlackboard               Blackboard;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FName                                       Name;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	TArray<int>                                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0048
};

// Function Athena.VoyageGeneratorSimBlackboardFunctions.GetValuesFromBlackboardByName
struct UVoyageGeneratorSimBlackboardFunctions_GetValuesFromBlackboardByName_Params
{
	struct FVoyageGeneratorSimBlackboard               Blackboard;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FName                                       Name;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0048
};

// Function Athena.VoyageGeneratorSimBlackboardFunctions.CombineBlackboards
struct UVoyageGeneratorSimBlackboardFunctions_CombineBlackboards_Params
{
	struct FVoyageGeneratorSimBlackboard               A;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FVoyageGeneratorSimBlackboard               B;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0040
	struct FVoyageGeneratorSimBlackboard               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0080
};

// Function Athena.VoyageGeneratorSimFunctions.GetIslandLocation
struct UVoyageGeneratorSimFunctions_GetIslandLocation_Params
{
	TArray<struct FIsland>                             Islands;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	struct FName                                       InName;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Athena.VoyageGeneratorSimFunctions.GenerateVoyageFromRecipe
struct UVoyageGeneratorSimFunctions_GenerateVoyageFromRecipe_Params
{
	struct FVector                                     StartingLocation;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class UVoyageRecipeDataAsset*                      Recipe;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TArray<struct FIsland>                             Islands;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0018
	int                                                Seed;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	class UVoyageGeneratorSimResult*                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0038
};

// Function Athena.VoyageGeneratorSimFunctions.GenerateDistributionFromRecipe
struct UVoyageGeneratorSimFunctions_GenerateDistributionFromRecipe_Params
{
	class UVoyageRecipeDataAsset*                      Recipe;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Seed;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TArray<int>                                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0010
};

// Function Athena.VoyageGeneratorSimResult.VisitChapter
struct UVoyageGeneratorSimResult_VisitChapter_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVoyageGeneratorSimBlackboard               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Athena.VoyageGeneratorSimResult.Visit
struct UVoyageGeneratorSimResult_Visit_Params
{
	struct FVoyageGeneratorSimBlackboard               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.VoyageGeneratorSimResult.GetTitle
struct UVoyageGeneratorSimResult_GetTitle_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Athena.VoyageGeneratorSimResult.GetNumQuests
struct UVoyageGeneratorSimResult_GetNumQuests_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.VoyageGeneratorSimResult.GetNumChapters
struct UVoyageGeneratorSimResult_GetNumChapters_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WaitForDemoResetActionStateId.PushCharacterIntoWaitForDemoResetActionState
struct UWaitForDemoResetActionStateId_PushCharacterIntoWaitForDemoResetActionState_Params
{
	class AActor*                                      Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WaitingToSpawnActionStateId.PushCharacterIntoWaitingToSpawnActionState
struct UWaitingToSpawnActionStateId_PushCharacterIntoWaitingToSpawnActionState_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      InStartSpot;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               InReceiveLoadout;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               InReceiveEntitlement;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0011
	bool                                               InWaitForStreaming;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0012
};

// Function Athena.WaterHeightProviderInterface.HasValidWaterHeight
struct UWaterHeightProviderInterface_HasValidWaterHeight_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WaterHeightProviderInterface.GetWaterHeight
struct UWaterHeightProviderInterface_GetWaterHeight_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WaterHeightProviderInterface.GetValidWaterHeightAtomic
struct UWaterHeightProviderInterface_GetValidWaterHeightAtomic_Params
{
	float                                              OutWaterHeight;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.WaterHeightProviderComponent.HasValidWaterHeight
struct UWaterHeightProviderComponent_HasValidWaterHeight_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WaterHeightProviderComponent.GetWaterHeight
struct UWaterHeightProviderComponent_GetWaterHeight_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WaterHeightProviderComponent.GetValidWaterHeightAtomic
struct UWaterHeightProviderComponent_GetValidWaterHeightAtomic_Params
{
	float                                              OutWaterHeight;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Athena.MurkWaterModifierZoneComponent.OnRep_State
struct UMurkWaterModifierZoneComponent_OnRep_State_Params
{
	TEnumAsByte<EMurkWaterModifierZoneState>           PreviousState;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// DelegateFunction Athena.WaterSplashComponent.OnWaterSplashReachedDeepWaterDelegate__DelegateSignature
struct UWaterSplashComponent_OnWaterSplashReachedDeepWaterDelegate__DelegateSignature_Params
{
};

// DelegateFunction Athena.WaterSplashComponent.OnWaterSplashExitWaterDelegate__DelegateSignature
struct UWaterSplashComponent_OnWaterSplashExitWaterDelegate__DelegateSignature_Params
{
};

// DelegateFunction Athena.WaterSplashComponent.OnWaterSplashEnterWaterDelegate__DelegateSignature
struct UWaterSplashComponent_OnWaterSplashEnterWaterDelegate__DelegateSignature_Params
{
};

// Function Athena.WaterVolume.RegisterComponents
struct AWaterVolume_RegisterComponents_Params
{
	class UFlatWaterMeshComponent*                     FlatWaterMesh;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	class UFlatWaterPlaneComponent*                    FlatWaterPlane;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
};

// Function Athena.WeakActorHandleTestsFunctionLib.TestCreatingWeakActorHandleFromConsoleStringWithValidNetGuidInvalidName
struct UWeakActorHandleTestsFunctionLib_TestCreatingWeakActorHandleFromConsoleStringWithValidNetGuidInvalidName_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WeepingComponent.OnRep_State
struct UWeepingComponent_OnRep_State_Params
{
};

// Function Athena.WetnessComponent.SetWet
struct UWetnessComponent_SetWet_Params
{
	struct FVector                                     WorldSpaceWaterPos;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               FullyWet;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function Athena.WetnessComponent.OnRep_WetData
struct UWetnessComponent_OnRep_WetData_Params
{
};

// Function Athena.WetnessComponent.GetWet
struct UWetnessComponent_GetWet_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WheelInteractableFunctionLib.UpdateAdditiveIdles
struct UWheelInteractableFunctionLib_UpdateAdditiveIdles_Params
{
	float                                              Rate;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              AnimationTime;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	struct FWheelAdditiveProperties                    WithinRange;                                              // (CPF_ConstParm, CPF_Parm) 0008
	struct FWheelAdditiveAlphaSets                     SetAdditiveIdles;                                         // (CPF_Parm) 0028
	struct FBlendAdditiveValues                        SetAdditiveBlendValues;                                   // (CPF_ConstParm, CPF_Parm) 004C
	TEnumAsByte<EWheelAnimationType>                   WheelTurnType;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 005C
	struct FWheelAdditiveAlphaSets                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0060
};

// Function Athena.WheelInteractableFunctionLib.CharacterWheelAnimationUpdate
struct UWheelInteractableFunctionLib_CharacterWheelAnimationUpdate_Params
{
	class AActor*                                      Wheel;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FSocketId                                   LeftHandSocketName;                                       // (CPF_ConstParm, CPF_Parm) 0008
	struct FSocketId                                   RightHandSocketName;                                      // (CPF_ConstParm, CPF_Parm) 0028
	struct FTransform                                  LeftHandTransform;                                        // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData) 0050
	struct FTransform                                  RightHandTransform;                                       // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData) 0080
	float                                              WheelTime;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00B0
	float                                              Rate;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00B4
	bool                                               LeftArm;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00B8
	bool                                               RightArm;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00B9
	TEnumAsByte<EWheelAnimationType>                   WheelTurnType;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00BA
	struct FWheelArmIKDownWithinRange                  WithinRange;                                              // (CPF_ConstParm, CPF_Parm) 00BC
	struct FWheelArmIKBoolSets                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 00DC
};

// Function Athena.WheelMock.GetNormalizedWheelPosition
struct AWheelMock_GetNormalizedWheelPosition_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Bucket.Server_OnThrow
struct ABucket_Server_OnThrow_Params
{
	struct FProjectileAim                              AimData;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm) 0000
};

// Function Athena.Bucket.OnRep_FillState
struct ABucket_OnRep_FillState_Params
{
};

// Function Athena.Bucket.Multicast_Throw
struct ABucket_Multicast_Throw_Params
{
};

// Function Athena.Bucket.Multicast_Scoop
struct ABucket_Multicast_Scoop_Params
{
};

// Function Athena.Bucket.GetFillState
struct ABucket_GetFillState_Params
{
	TEnumAsByte<EBucketFillState>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Bucket.FillWithVomit
struct ABucket_FillWithVomit_Params
{
};

// Function Athena.Bucket.CanBeVomitedInto
struct ABucket_CanBeVomitedInto_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MusicalInstrument.TriggerMagicGlow_Multicast_RPC
struct AMusicalInstrument_TriggerMagicGlow_Multicast_RPC_Params
{
};

// Function Athena.MusicalInstrument.StartMagicGlowEffect
struct AMusicalInstrument_StartMagicGlowEffect_Params
{
};

// Function Athena.TestProjectileWeapon.TestGetState
struct ATestProjectileWeapon_TestGetState_Params
{
	TEnumAsByte<EProjectileWeaponState>                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.TestProjectileWeapon.SpoofFireRequest
struct ATestProjectileWeapon_SpoofFireRequest_Params
{
	struct FFireRequest                                Request;                                                  // (CPF_Parm) 0000
};

// Function Athena.TestProjectileWeapon.RegisterAndWield
struct ATestProjectileWeapon_RegisterAndWield_Params
{
	class AActor*                                      TargetOwner;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.TestProjectileWeapon.GenerateAndFireProjectiles
struct ATestProjectileWeapon_GenerateAndFireProjectiles_Params
{
	TArray<struct FHitResult>                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Athena.TestProjectileWeapon.FireInstantly
struct ATestProjectileWeapon_FireInstantly_Params
{
};

// Function Athena.Spyglass.ScopeOn
struct ASpyglass_ScopeOn_Params
{
};

// Function Athena.Spyglass.ScopeOff
struct ASpyglass_ScopeOff_Params
{
};

// Function Athena.Spyglass.GlintOn
struct ASpyglass_GlintOn_Params
{
};

// Function Athena.Spyglass.GlintOff
struct ASpyglass_GlintOff_Params
{
};

// Function Athena.Spyglass.ForceScopeOff
struct ASpyglass_ForceScopeOff_Params
{
};

// Function Athena.Fruit.Multicast_EatRPC
struct AFruit_Multicast_EatRPC_Params
{
};

// Function Athena.Lantern.TriggerGlow
struct ALantern_TriggerGlow_Params
{
};

// Function Athena.Lantern.Server_RequestChangeLight
struct ALantern_Server_RequestChangeLight_Params
{
	bool                                               InLightOn;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Raised;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
};

// Function Athena.Lantern.Server_ExternalLightFactorChange
struct ALantern_Server_ExternalLightFactorChange_Params
{
	float                                              ExternalLightFactor;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Lantern.ReceiveWieldThirdPerson
struct ALantern_ReceiveWieldThirdPerson_Params
{
};

// Function Athena.Lantern.ReceiveWieldFirstPerson
struct ALantern_ReceiveWieldFirstPerson_Params
{
};

// Function Athena.Lantern.ReceiveTurnOnOffOneshotFx
struct ALantern_ReceiveTurnOnOffOneshotFx_Params
{
	bool                                               On;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Lantern.ReceiveLightChange
struct ALantern_ReceiveLightChange_Params
{
};

// Function Athena.Lantern.PreMeshChangedBPEvent
struct ALantern_PreMeshChangedBPEvent_Params
{
};

// Function Athena.Lantern.PostMeshChangedBPEvent
struct ALantern_PostMeshChangedBPEvent_Params
{
};

// Function Athena.Lantern.OnRep_Raised
struct ALantern_OnRep_Raised_Params
{
};

// Function Athena.Lantern.OnRep_LightOn
struct ALantern_OnRep_LightOn_Params
{
};

// Function Athena.Lantern.Multicast_PlayTurnOnOffOneshotFx
struct ALantern_Multicast_PlayTurnOnOffOneshotFx_Params
{
	bool                                               TurnOn;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Lantern.GetUnaryRaisedBlendFactor
struct ALantern_GetUnaryRaisedBlendFactor_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Lantern.GetUnaryActiveBlendFactor
struct ALantern_GetUnaryActiveBlendFactor_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Lantern.FlareLight_Multicast_RPC
struct ALantern_FlareLight_Multicast_RPC_Params
{
};

// Function Athena.MeleeWeapon.Server_RequestAttack
struct AMeleeWeapon_Server_RequestAttack_Params
{
	TEnumAsByte<EMeleeWeaponAttackType>                Type;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Index;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.MeleeWeapon.OnBlockedAttack
struct AMeleeWeapon_OnBlockedAttack_Params
{
	struct FEventBlocked                               Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Athena.MeleeWeapon.Multicast_TriggerAttack
struct AMeleeWeapon_Multicast_TriggerAttack_Params
{
	TEnumAsByte<EMeleeWeaponAttackType>                Type;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Index;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function Athena.MeleeWeapon.Client_RequestAttackResponse
struct AMeleeWeapon_Client_RequestAttackResponse_Params
{
	bool                                               Accepted;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Tankard.SetLiquidLevel
struct ATankard_SetLiquidLevel_Params
{
	float                                              Level;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.Tankard.OnRep_RemainingVolume
struct ATankard_OnRep_RemainingVolume_Params
{
};

// Function Athena.Tankard.GetWantedLiquidLevel
struct ATankard_GetWantedLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.Tankard.GetLiquidLevel
struct ATankard_GetLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItemAnimationInterface.TriggerOneShotAnimation
struct UWieldableItemAnimationInterface_TriggerOneShotAnimation_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItemAnimationInterface.StartUnequipAnimation
struct UWieldableItemAnimationInterface_StartUnequipAnimation_Params
{
};

// Function Athena.WieldableItemAnimationInterface.StartOutOfContinuousUseAnimation
struct UWieldableItemAnimationInterface_StartOutOfContinuousUseAnimation_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItemAnimationInterface.StartIntoContinuousAnimation
struct UWieldableItemAnimationInterface_StartIntoContinuousAnimation_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItemAnimationInterface.StartEquipAnimation
struct UWieldableItemAnimationInterface_StartEquipAnimation_Params
{
};

// Function Athena.WieldableItemAnimationInterface.StartContinuousAnimation
struct UWieldableItemAnimationInterface_StartContinuousAnimation_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItemAnimationInterface.ReturnToIdle
struct UWieldableItemAnimationInterface_ReturnToIdle_Params
{
};

// Function Athena.WieldableItemAnimationInterface.IsEquipAnimationPlaying
struct UWieldableItemAnimationInterface_IsEquipAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItemAnimationInstance.OnUseStopped
struct UWieldableItemAnimationInstance_OnUseStopped_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItemAnimationInstance.OnUseStarted
struct UWieldableItemAnimationInstance_OnUseStarted_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWieldableItemActionVisuals                 ActionVisuals;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function Athena.WieldableItemAnimationInstance.OnOneShotUseTriggered
struct UWieldableItemAnimationInstance_OnOneShotUseTriggered_Params
{
	class UClass*                                      InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWieldableItemActionVisuals                 ActionVisuals;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function Athena.WieldableItemFunctionLibrary.IsThirdPersonMeshComponentTickEnabled
struct UWieldableItemFunctionLibrary_IsThirdPersonMeshComponentTickEnabled_Params
{
	class AWieldableItem*                              InWieldable;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemFunctionLibrary.IsFirstPersonMeshComponentTickEnabled
struct UWieldableItemFunctionLibrary_IsFirstPersonMeshComponentTickEnabled_Params
{
	class AWieldableItem*                              InWieldable;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetComponent.RemoveItem
struct UWieldableItemSetComponent_RemoveItem_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetComponent.OnRep_Items
struct UWieldableItemSetComponent_OnRep_Items_Params
{
};

// Function Athena.WieldableItemSetComponent.OnItemDestroyed
struct UWieldableItemSetComponent_OnItemDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItemSetComponent.GetSlotForItem
struct UWieldableItemSetComponent_GetSlotForItem_Params
{
	int                                                Index;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetComponent.GetNumItemsOfType
struct UWieldableItemSetComponent_GetNumItemsOfType_Params
{
	class UClass*                                      Type;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetComponent.GetNumItems
struct UWieldableItemSetComponent_GetNumItems_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldableItemSetComponent.GetItemsOfCategory
struct UWieldableItemSetComponent_GetItemsOfCategory_Params
{
	class UClass*                                      ItemCategory;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Athena.WieldableItemSetComponent.GetItemIndexInCategorySet
struct UWieldableItemSetComponent_GetItemIndexInCategorySet_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ItemCategory;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.WieldableItemSetComponent.GetItemIndex
struct UWieldableItemSetComponent_GetItemIndex_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetComponent.GetItemFromSlot
struct UWieldableItemSetComponent_GetItemFromSlot_Params
{
	class UClass*                                      ItemCategory;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetComponent.GetItem
struct UWieldableItemSetComponent_GetItem_Params
{
	int                                                Index;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetComponent.ContainsItemOfType
struct UWieldableItemSetComponent_ContainsItemOfType_Params
{
	class UClass*                                      ItemType;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetComponent.Contains
struct UWieldableItemSetComponent_Contains_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableItemSetComponent.AddItemToSlot
struct UWieldableItemSetComponent_AddItemToSlot_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ItemCategory;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Athena.WieldableItemSetComponent.AddItem
struct UWieldableItemSetComponent_AddItem_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldableTestFunctions.ChangeItemSize
struct UWieldableTestFunctions_ChangeItemSize_Params
{
	class AWieldableItem*                              InWieldable;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EWieldableItemSize>                    InNewSize;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldedItemComponent.WieldItem
struct UWieldedItemComponent_WieldItem_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Fast;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0011
};

// Function Athena.WieldedItemComponent.UnstashItem
struct UWieldedItemComponent_UnstashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldedItemComponent.StashItem
struct UWieldedItemComponent_StashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldedItemComponent.SlowStashItem
struct UWieldedItemComponent_SlowStashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldedItemComponent.Server_WieldRPC
struct UWieldedItemComponent_Server_WieldRPC_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                InEpochId;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldedItemComponent.OnRep_HeldItem
struct UWieldedItemComponent_OnRep_HeldItem_Params
{
};

// Function Athena.WieldedItemComponent.IsItemWielded
struct UWieldedItemComponent_IsItemWielded_Params
{
	class AActor*                                      ItemActor;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Athena.WieldedItemComponent.IsItemStashed
struct UWieldedItemComponent_IsItemStashed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldedItemComponent.GetWieldedItemIfNotStashed
struct UWieldedItemComponent_GetWieldedItemIfNotStashed_Params
{
	TScriptInterface<class UWieldableInterface>        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldedItemComponent.GetWieldedItem
struct UWieldedItemComponent_GetWieldedItem_Params
{
	TScriptInterface<class UWieldableInterface>        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldedItemComponent.Client_WieldItemCorrectionRPC
struct UWieldedItemComponent_Client_WieldItemCorrectionRPC_Params
{
	class AActor*                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Athena.WieldedItemComponent.Client_WieldItem
struct UWieldedItemComponent_Client_WieldItem_Params
{
	struct FNetActorPtr                                Item;                                                     // (CPF_Parm) 0000
	int                                                InEpochId;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	bool                                               Fast;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function Athena.WorldRegionBlueprintFunctionLibrary.GetSeaIdFromWorldSpaceLocation
struct UWorldRegionBlueprintFunctionLibrary_GetSeaIdFromWorldSpaceLocation_Params
{
	struct FVector                                     InLocation;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
