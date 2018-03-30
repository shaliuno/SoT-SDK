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

// Function Water.FFTWaterInterface.SetComponent
struct UFFTWaterInterface_SetComponent_Params
{
	class UFFTWaterComponent*                          InFFTWaterComponent;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Water.FFTWaterInterface.SetActor
struct UFFTWaterInterface_SetActor_Params
{
	class AAthenaFFTWater*                             InFFTWaterActor;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Water.FFTWaterInterface.GetComponent
struct UFFTWaterInterface_GetComponent_Params
{
	class UFFTWaterComponent*                          ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Water.FFTWaterInterface.GetActor
struct UFFTWaterInterface_GetActor_Params
{
	class AAthenaFFTWater*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Water.WaterInterface.IsReadyToBeQueried
struct UWaterInterface_IsReadyToBeQueried_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness
struct UWaterInterface_GetWaterInformationWithScaledChoppyness_Params
{
	struct FVector                                     SamplePosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector2D                                   ApproxVelocity;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     Normal;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	float                                              ChoppynessScalar;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0034
};

// Function Water.WaterInterface.GetWaterInformationBatched
struct UWaterInterface_GetWaterInformationBatched_Params
{
	TArray<struct FVector2D>                           SamplePositions;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<float>                                      Heights;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0010
	TArray<struct FVector2D>                           ApproxVelocities;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0020
	TArray<struct FVector>                             Normals;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0030
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0048
};

// Function Water.WaterInterface.GetWaterInformation
struct UWaterInterface_GetWaterInformation_Params
{
	struct FVector                                     SamplePosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector2D                                   ApproxVelocity;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     Normal;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness
struct UWaterInterface_GetWaterHeightWithScaledChoppyness_Params
{
	struct FVector                                     SamplePosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               Interpolate;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 001C
	float                                              ChoppynessScalar;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0024
};

// Function Water.WaterInterface.GetWaterHeightsBatched
struct UWaterInterface_GetWaterHeightsBatched_Params
{
	TArray<struct FVector2D>                           SamplePositions;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TArray<float>                                      Heights;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0018
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0028
};

// Function Water.WaterInterface.GetWaterHeight
struct UWaterInterface_GetWaterHeight_Params
{
	struct FVector                                     SamplePosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               Interpolate;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 001C
	TEnumAsByte<EWaterQueryResult>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function Water.WaterInterface.GetIsActorUsingNonDefaultWaterPlane
struct UWaterInterface_GetIsActorUsingNonDefaultWaterPlane_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Water.WaterInterface.GetActorWaterPlane
struct UWaterInterface_GetActorWaterPlane_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWaterSimPlane                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0010
};

// Function Water.WaterInterface.GetActorWaterInformation
struct UWaterInterface_GetActorWaterInformation_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWaterInformation                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Water.FFTWaterService.OnRep_FFTWaterComponent
struct AFFTWaterService_OnRep_FFTWaterComponent_Params
{
};

// Function Water.FFTWaterService.OnRep_FFTWaterActor
struct AFFTWaterService_OnRep_FFTWaterActor_Params
{
};

// Function Water.FFTWaterPerformanceCountService.EndScopePerformanceCount
struct AFFTWaterPerformanceCountService_EndScopePerformanceCount_Params
{
	struct FFFTWaterPerformanceCountData               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Water.FFTWaterPerformanceCountService.BeginScopePerformanceCount
struct AFFTWaterPerformanceCountService_BeginScopePerformanceCount_Params
{
};

// Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane
struct UFlatWaterPlaneComponent_OnActorLeaveWaterPlane_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane
struct UFlatWaterPlaneComponent_OnActorEnterWaterPlane_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace
struct UFlatWaterPlaneComponent_ConvertToWaterSpace_Params
{
	struct FVector                                     WorldSpacePosition;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy
struct UWaterBuoyancyFunctionLibrary_TickBuoyancy_Params
{
	class AActor*                                      InOwner;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	float                                              InDeltaTime;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0058
	float                                              InChoppinessScalar;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 005C
	float                                              FakeZOffsetGeneratorScalar;                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0064
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis
struct UWaterBuoyancyFunctionLibrary_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              ZOffset;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride
struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlendDebugOverride_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              UnaryBlendOverride;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
};

// Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend
struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlend_Params
{
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              Blend;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
	TEnumAsByte<EBuoyancyBlend>                        BlendType;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0054
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement
struct UWaterBuoyancySampleMovementFunctionLibrary_TickLocalSampleMovement_Params
{
	class AActor*                                      InActor;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FBuoyancySampleMovement                     InSampleMovement;                                         // (CPF_Parm, CPF_OutParm) 0058
	float                                              DeltaTime;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00C0
	bool                                               bRigidBodyTouchingLand;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00C4
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex_Params
{
	class AActor*                                      InActor;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FBuoyancySampleMovement                     InSampleMovement;                                         // (CPF_Parm, CPF_OutParm) 0058
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByConfigurationIndex_Params
{
	class AActor*                                      InActor;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FBuoyancySampleMovement                     InSampleMovement;                                         // (CPF_Parm, CPF_OutParm) 0058
	int                                                ConfigurationIndex;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00C0
};

// Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally
struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocally_Params
{
	class AActor*                                      InActor;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWaterBuoyancy                              InWaterBuoyancy;                                          // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FBuoyancySampleMovement                     InSampleMovement;                                         // (CPF_Parm, CPF_OutParm) 0058
	class UCurveVector*                                InCenterOfMassOffsetCurve;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00C0
	TArray<struct FBuoyancySampleMovementConfigurationEntry> NewSampleData;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 00C8
	float                                              BuoyancyScalarAtNewPosition;                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00D8
	class UCurveFloat*                                 BuoyancyScalarCurve;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00E0
	float                                              MoveTime;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00E8
};

// Function Water.WaterInteractionComponent.LeaveWaterPlane
struct UWaterInteractionComponent_LeaveWaterPlane_Params
{
	class UBaseWaterComponent*                         WaterComponent;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Water.WaterInteractionComponent.LeaveWaterExclusionZone
struct UWaterInteractionComponent_LeaveWaterExclusionZone_Params
{
};

// Function Water.WaterInteractionComponent.IsInWaterExcludedZone
struct UWaterInteractionComponent_IsInWaterExcludedZone_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Water.WaterInteractionComponent.GetWaterPlaneComponent
struct UWaterInteractionComponent_GetWaterPlaneComponent_Params
{
	class UBaseWaterComponent*                         ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes
struct UWaterInteractionComponent_GetNumberOfWaterPlanes_Params
{
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Water.WaterInteractionComponent.EnterWaterPlane
struct UWaterInteractionComponent_EnterWaterPlane_Params
{
	class UBaseWaterComponent*                         WaterComponent;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Water.WaterInteractionComponent.EnterWaterExclusionZone
struct UWaterInteractionComponent_EnterWaterExclusionZone_Params
{
};

// Function Water.WaterInteractionComponentProviderInterface.GetWaterInteractionComponent
struct UWaterInteractionComponentProviderInterface_GetWaterInteractionComponent_Params
{
	class UWaterInteractionComponent*                  ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function Water.WaterPlaneExclusionComponent.OnOverlapEnd
struct UWaterPlaneExclusionComponent_OnOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Water.WaterPlaneExclusionComponent.OnOverlapBegin
struct UWaterPlaneExclusionComponent_OnOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               FromSweep;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function Water.WaterSplashProbeFunctionLibrary.TickProbes
struct UWaterSplashProbeFunctionLibrary_TickProbes_Params
{
	class AActor*                                      InOwner;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
	float                                              InDeltaTime;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function Water.WaterSplashProbeFunctionLibrary.TickProbe
struct UWaterSplashProbeFunctionLibrary_TickProbe_Params
{
	class AActor*                                      InOwner;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWaterSplashProbe                           InSplashProbe;                                            // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	float                                              InDeltaTime;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00C8
};

// Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime
struct UWaterSplashProbeFunctionLibrary_SetSamplingTime_Params
{
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	float                                              SamplingTime;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd
struct UWaterSplashProbeFunctionLibrary_GetRelativeWaterHeightChangeSpd_Params
{
	TArray<struct FWaterSplashProbe>                   InSplashProbes;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	int                                                ProbeIndex;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
