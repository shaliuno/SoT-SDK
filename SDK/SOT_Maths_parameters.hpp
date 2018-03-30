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

// Function Maths.AngleMaths.CalculateEulerAngle
struct UAngleMaths_CalculateEulerAngle_Params
{
	float                                              FromAngle;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ToAngle;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Maths.AngleMaths.AngleMoveTowardsMod180
struct UAngleMaths_AngleMoveTowardsMod180_Params
{
	float                                              Angle;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              TargetAngle;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Rate;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Maths.AngleMaths.AngleMod360
struct UAngleMaths_AngleMod360_Params
{
	float                                              Angle;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Maths.AngleMaths.AngleMod180
struct UAngleMaths_AngleMod180_Params
{
	float                                              Angle;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Maths.AngleMaths.AngleLerpShortest
struct UAngleMaths_AngleLerpShortest_Params
{
	float                                              Start;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              End;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Amount;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Maths.BuoyancyMaths.CalculateMagnitude
struct UBuoyancyMaths_CalculateMagnitude_Params
{
	float                                              InSubmersedVolume;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InFluidDensity;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              InGravity;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy
struct UBuoyancyMaths_CalcBlendedProbeCurveBuoyancy_Params
{
	class UCurveFloat*                                 PrimaryBuoyancyCurve;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UCurveFloat*                                 SecondaryBuoyancyCurve;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UCurveFloat*                                 TertiaryBuoyancyCurve;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              UnaryDistUnderwater;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              Blend;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	TEnumAsByte<EBuoyancyBlend>                        BlendType;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0024
};

// Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex
struct UCircleMaths_ConvertAngleToCircleSectorIndex_Params
{
	float                                              AngleInDegrees;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                NumberOfSectors;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              IgnoredFraction;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Maths.CircleMaths.Area
struct UCircleMaths_Area_Params
{
	float                                              InRadius;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Maths.CurveMaths.GetDistanceSquaredToCurve
struct UCurveMaths_GetDistanceSquaredToCurve_Params
{
	struct FVector                                     WorldSpacePos;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class USplineComponent*                            Spline;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0010
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Maths.CurveMaths.GetClosestTimeOnCurve
struct UCurveMaths_GetClosestTimeOnCurve_Params
{
	struct FVector                                     WorldSpacePos;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class USplineComponent*                            Spline;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0010
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Maths.CurveMaths.GetClosestPositionOnCurve
struct UCurveMaths_GetClosestPositionOnCurve_Params
{
	struct FVector                                     WorldSpacePos;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class USplineComponent*                            Spline;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0010
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Maths.CurveMaths.GetClosestPointOnCurve
struct UCurveMaths_GetClosestPointOnCurve_Params
{
	struct FVector                                     WorldSpacePos;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class USplineComponent*                            Spline;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0010
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Maths.CurveMaths.GetCentre
struct UCurveMaths_GetCentre_Params
{
	class USplineComponent*                            Spline;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Maths.Density.Water
struct UDensity_Water_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.Density.SeaWater
struct UDensity_SeaWater_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.Density.Min
struct UDensity_Min_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.Density.Max
struct UDensity_Max_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.Density.IsValid
struct UDensity_IsValid_Params
{
	float                                              InValue;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Maths.Density.Air
struct UDensity_Air_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.DragCoefficients.Sphere
struct UDragCoefficients_Sphere_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.DragCoefficients.PlanePerpendicularToFlow
struct UDragCoefficients_PlanePerpendicularToFlow_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.DragCoefficients.PlaneParallelToFlow
struct UDragCoefficients_PlaneParallelToFlow_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.DragCoefficients.Min
struct UDragCoefficients_Min_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.DragCoefficients.Max
struct UDragCoefficients_Max_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.DragCoefficients.IsValid
struct UDragCoefficients_IsValid_Params
{
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Maths.DragCoefficients.Cube
struct UDragCoefficients_Cube_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.DragMaths.CalculateMagnitude
struct UDragMaths_CalculateMagnitude_Params
{
	float                                              InSurfaceArea;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InSpeedReltaiveToFluid;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              InDragCoefficient;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              InFluidDensity;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Maths.FloatMaths.WrapToRange
struct UFloatMaths_WrapToRange_Params
{
	float                                              Input;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              LowerLimit;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              UpperLimit;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Maths.FloatMaths.WrapAroundPivot
struct UFloatMaths_WrapAroundPivot_Params
{
	float                                              Input;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Pivot;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Range;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Maths.FloatMaths.MoveTowards
struct UFloatMaths_MoveTowards_Params
{
	float                                              From;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              To;                                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Speed;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              Time;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Maths.FloatMaths.Map
struct UFloatMaths_Map_Params
{
	float                                              ValueToMapFrom;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              FromRangeStart;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              FromRangeEnd;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              ToRangeStart;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              ToRangeEnd;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               Clamp;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Maths.FloatMaths.IncrementCounter
struct UFloatMaths_IncrementCounter_Params
{
	float                                              Counter;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Delta;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              CounterMax;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Maths.FloatMaths.FindMidpointInWrappedRange
struct UFloatMaths_FindMidpointInWrappedRange_Params
{
	float                                              Value1;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Value2;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              LowerLimit;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              UpperLimit;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Maths.FloatMaths.Bound
struct UFloatMaths_Bound_Params
{
	float                                              ValueToBound;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Bound1;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Bound2;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Maths.Gravity.Earth
struct UGravity_Earth_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane
struct UPoissonDiscSampling_GeneratePoissonDiscDistributionAcrossPlane_Params
{
	struct FVector                                     InCenter;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FQuat                                       InOrientation;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
	float                                              InWidth;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              InHeight;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	float                                              InMinDistance;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	int                                                InRNGSeed;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
	TArray<struct FVector>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0030
};

// Function Maths.RotationMaths.TransformAroundArbitraryPivot
struct URotationMaths_TransformAroundArbitraryPivot_Params
{
	struct FTransform                                  TargetTransform;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FTransform                                  BaseTransform;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0030
	struct FTransform                                  TransformToApply;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData) 0060
	bool                                               LockFinalOrientation;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0090
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 00A0
};

// Function Maths.RotationMaths.RotatorToQuat
struct URotationMaths_RotatorToQuat_Params
{
	struct FRotator                                    Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FQuat                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Maths.SphereMaths.VolumeFromRadius
struct USphereMaths_VolumeFromRadius_Params
{
	float                                              InRadius;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Maths.SphereMaths.SurfaceAreaFromRadius
struct USphereMaths_SurfaceAreaFromRadius_Params
{
	float                                              InRadius;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function Maths.SphericalCapMaths.Volume
struct USphericalCapMaths_Volume_Params
{
	float                                              InRadius;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InHeight;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid
struct USphericalCapMaths_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid_Params
{
	float                                              InRadius;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InHeight;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Maths.SphericalCapMaths.BaseRadius
struct USphericalCapMaths_BaseRadius_Params
{
	float                                              InRadius;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              InHeight;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function Maths.TimedBufferFunctionLibrary.UpdateInterval
struct UTimedBufferFunctionLibrary_UpdateInterval_Params
{
	struct FTimedBuffer                                TimedBuffer;                                              // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              DeltaTime;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
};

// Function Maths.TimedBufferFunctionLibrary.GetValueRange
struct UTimedBufferFunctionLibrary_GetValueRange_Params
{
	struct FTimedBuffer                                TimedBuffer;                                              // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	float                                              MinWindowLength;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              ValueRange;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer
struct UTimedBufferFunctionLibrary_CreateTimedBuffer_Params
{
	float                                              WindowLength;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FTimedBuffer                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Maths.TimeMaths.GetDifference
struct UTimeMaths_GetDifference_Params
{
	struct FDateTime                                   A;                                                        // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FDateTime                                   B;                                                        // (CPF_Parm, CPF_ZeroConstructor) 0008
	struct FTimespan                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0010
};

// Function Maths.VectorMaths.LineIntersectsSphere
struct UVectorMaths_LineIntersectsSphere_Params
{
	struct FVector                                     LineStart;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     LineDir;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector                                     SphereCentre;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              SphereRadius;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	struct FVector                                     ClosestIntersectionPoint;                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0034
};

// Function Maths.VectorMaths.IntersectLineSegmentWithPlane
struct UVectorMaths_IntersectLineSegmentWithPlane_Params
{
	struct FVector                                     LineStart;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     LineEnd;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
	struct FVector                                     PlanePos;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0018
	struct FVector                                     PlaneNormal;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0024
	float                                              PlaneThickness;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	struct FVector                                     IntersectionPos;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0034
	float                                              NormalisedIntersectionTOnLineSegment;                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	TEnumAsByte<EPlaneLineIntersectionType>            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0044
};

// Function Maths.VectorMaths.Distance
struct UVectorMaths_Distance_Params
{
	struct FVector                                     A;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     B;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Maths.VectorMaths.Cross_Vector2DVector2D
struct UVectorMaths_Cross_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector2D                                   B;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
