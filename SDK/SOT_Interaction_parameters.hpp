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

// Function Interaction.CharacterInteractionComponent.IsInteractionValid
struct UCharacterInteractionComponent_IsInteractionValid_Params
{
	class AActor*                                      InInteractable;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject
struct UCharacterInteractionComponent_InvalidateOptimalObject_Params
{
};

// Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject
struct UCharacterInteractionComponent_GetOptimalFocusObject_Params
{
	class UInteractableArea*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.CharacterInteractionComponent.ClearAllPolicies
struct UCharacterInteractionComponent_ClearAllPolicies_Params
{
};

// Function Interaction.InteractableArea.SetParent
struct UInteractableArea_SetParent_Params
{
	class AActor*                                      InParent;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableArea.SetInteractable
struct UInteractableArea_SetInteractable_Params
{
	class AActor*                                      InInteractable;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableArea.SetAreaName
struct UInteractableArea_SetAreaName_Params
{
	struct FName                                       InName;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableArea.SetAreaBounds
struct UInteractableArea_SetAreaBounds_Params
{
	struct FBoxSphereBounds                            InBounds;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableArea.GetParent
struct UInteractableArea_GetParent_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableArea.GetInteractable
struct UInteractableArea_GetInteractable_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableArea.GetAreaName
struct UInteractableArea_GetAreaName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableArea.GetAreaBounds
struct UInteractableArea_GetAreaBounds_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableComponent.SetBoxOrigin
struct UInteractableComponent_SetBoxOrigin_Params
{
	struct FVector                                     IntBoxOrigin;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableComponent.SetBoxExtent
struct UInteractableComponent_SetBoxExtent_Params
{
	struct FVector                                     InBoxExtent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableComponent.GetInteractableArea
struct UInteractableComponent_GetInteractableArea_Params
{
	class UInteractableArea*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableComponent.GetBoxWorldOrigin
struct UInteractableComponent_GetBoxWorldOrigin_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableComponent.GetBoxSphereRadius
struct UInteractableComponent_GetBoxSphereRadius_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableComponent.GetBoxOrigin
struct UInteractableComponent_GetBoxOrigin_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableComponent.GetBoxExtent
struct UInteractableComponent_GetBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace
struct UInteractableInterface_ShouldDrawTooltipInWorldSpace_Params
{
	class AActor*                                      InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     DesiredTooltipWorldPosition;                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function Interaction.InteractableInterface.SetInteractionsDisabled
struct UInteractableInterface_SetInteractionsDisabled_Params
{
	bool                                               Disabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableInterface.InteractionsCanBeDisabled
struct UInteractableInterface_InteractionsCanBeDisabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableInterface.Interact
struct UInteractableInterface_Interact_Params
{
	class AActor*                                      InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      NotificationInputId;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Interaction.InteractableInterface.GetInteractionsDisabled
struct UInteractableInterface_GetInteractionsDisabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableInterface.GetFrontFacingVector
struct UInteractableInterface_GetFrontFacingVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableInterface.GetClosestInteractionPoint
struct UInteractableInterface_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              OutInteractionPointRadius;                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker
struct UInteractableInterface_GetActorsToIgnoreDuringOcclusionChecker_Params
{
	TArray<class AActor*>                              ActorsToIgnore;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0000
};

// Function Interaction.InteractableInterface.GetActionRulesComponent
struct UInteractableInterface_GetActionRulesComponent_Params
{
	class UActionRulesComponent*                       ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne
struct UInteractableInterface_DoesRequireNotBeingAirborne_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableInterface.DoesRequireFacingFront
struct UInteractableInterface_DoesRequireFacingFront_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Interaction.InteractableInterface.CanInteractWithNotificationInputId
struct UInteractableInterface_CanInteractWithNotificationInputId_Params
{
	class AActor*                                      InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      NotificationInputId;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Interaction.InteractableInterface.CanInteract
struct UInteractableInterface_CanInteract_Params
{
	class AActor*                                      InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
