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

// ScriptStruct Water.WaterInformation
// 0x0010
struct FWaterInformation
{
	class UClass*                                      WaterType;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      CanSwim;                                                  // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Water.FFTWaterPerformanceCountData
// 0x0008
struct FFFTWaterPerformanceCountData
{
	int                                                WaterHeightQueryCallCount;                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WaterInformationQueryCallCount;                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Water.WaterSplashProbe
// 0x00C0
struct FWaterSplashProbe
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     ProbeDebugName;                                           // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FVector                                     LocalOffset;                                              // 0x0018(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                                   // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Yaw;                                                      // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RateOfChangeThreshold;                                    // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LocalOffsetAdjustment;                                    // 0x0030(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalOffsetAdjustmentDuration;                            // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0040(0x0080) MISSED OFFSET
};

// ScriptStruct Water.BuoyancyVolumeSample
// 0x0058
struct FBuoyancyVolumeSample
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBuoyancySampleType>                   Type;                                                     // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRelevantForSubmersionVolumeCalculation;                  // 0x0011(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scalar;                                                   // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingScalar;                                            // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForce;                            // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForceSecondary;                   // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForceTertiary;                    // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 FakeZOffsetGeneratorCurve;                                // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FakeZOffsetAmp;                                           // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FakeZOffsetGeneratorTimeScale;                            // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct Water.BuoyancyDragSample
// 0x0030
struct FBuoyancyDragSample
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x0018(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBuoyancyDragSampleType>               Type;                                                     // 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Water.WaterBuoyancy
// 0x0050
struct FWaterBuoyancy
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              OverallBuyoancyScalar;                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingPerSample;                                         // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AdditionalAngularDampingWhenSubmerged;                    // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FBuoyancyVolumeSample>               VolumeSamples;                                            // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FBuoyancyDragSample>                 DragSamples;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UCurveFloat*                                 BuyoancySampleZSpeedVSDampeningScalar;                    // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              QuadSubmersionTestSampleResolution;                       // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct Water.BuoyancySampleMovementConfigurationEntry
// 0x0018
struct FBuoyancySampleMovementConfigurationEntry
{
	struct FVector                                     SampleOffset;                                             // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BuoyancyScaleCurve;                                       // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Water.BuoyancySampleMovementConfiguration
// 0x0030
struct FBuoyancySampleMovementConfiguration
{
	class UCurveVector*                                CenterOfMassOffsetCurve;                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBuoyancySampleMovementConfigurationEntry> SampleMoveData;                                           // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              OverallBuoyancyScalar;                                    // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 OverallBuoyancyScalarBlendCurve;                          // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Water.BuoyancySampleMovement
// 0x0068
struct FBuoyancySampleMovement
{
	TArray<struct FBuoyancySampleMovementConfiguration> Configurations;                                           // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
	class UCurveFloat*                                 BuoyancyScalarCurve;                                      // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0058(0x0010) MISSED OFFSET
};

// ScriptStruct Water.WaterSplashProbesContainer
// 0x0018
struct FWaterSplashProbesContainer
{
	TArray<struct FWaterSplashProbe>                   Probes;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              ProbeSamplingTime;                                        // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Water.FFTWaterQueryResult
// 0x001C
struct FFFTWaterQueryResult
{
	float                                              Height;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Choppiness;                                               // 0x0004(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     WaterQueryResult;                                         // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Water.FFTWaterTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FFFTWaterTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
