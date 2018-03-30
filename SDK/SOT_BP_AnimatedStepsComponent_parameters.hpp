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

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps
struct UBP_AnimatedStepsComponent_C_StartOpeningSteps_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs
struct UBP_AnimatedStepsComponent_C_SetAllStepsZs_Params
{
	TArray<float>                                      TargetZOffsets;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	bool                                               OpeningOrClosing;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.UpdateStep
struct UBP_AnimatedStepsComponent_C_UpdateStep_Params
{
	int                                                BoneIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              TargetZ;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              MovementDelay;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UBoxComponent*                               AttachedBox;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     BoxOrigin;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ReceiveTick
struct UBP_AnimatedStepsComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening
struct UBP_AnimatedStepsComponent_C_StartOpening_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate
struct UBP_AnimatedStepsComponent_C_OpenImmediate_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close
struct UBP_AnimatedStepsComponent_C_Close_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent
struct UBP_AnimatedStepsComponent_C_ExecuteUbergraph_BP_AnimatedStepsComponent_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
