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

// Class Maths.AngleMaths
// 0x0000 (0x0028 - 0x0028)
class UAngleMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.AngleMaths")); }
		return ptr;
	}


	float CalculateEulerAngle(float FromAngle, float ToAngle);
	float AngleMoveTowardsMod180(float Angle, float TargetAngle, float Rate);
	float AngleMod360(float Angle);
	float AngleMod180(float Angle);
	float AngleLerpShortest(float Start, float End, float Amount);
};


// Class Maths.BuoyancyMaths
// 0x0000 (0x0028 - 0x0028)
class UBuoyancyMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.BuoyancyMaths")); }
		return ptr;
	}


	float CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity);
	float CalcBlendedProbeCurveBuoyancy(class UCurveFloat* PrimaryBuoyancyCurve, class UCurveFloat* SecondaryBuoyancyCurve, class UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, TEnumAsByte<EBuoyancyBlend> BlendType);
};


// Class Maths.CircleMaths
// 0x0000 (0x0028 - 0x0028)
class UCircleMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.CircleMaths")); }
		return ptr;
	}


	int ConvertAngleToCircleSectorIndex(float AngleInDegrees, int NumberOfSectors, float IgnoredFraction);
	float Area(float InRadius);
};


// Class Maths.CurveMaths
// 0x0000 (0x0028 - 0x0028)
class UCurveMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.CurveMaths")); }
		return ptr;
	}


	float GetDistanceSquaredToCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	float GetClosestTimeOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	struct FVector GetClosestPositionOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	float GetClosestPointOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
	struct FVector GetCentre(class USplineComponent* Spline);
};


// Class Maths.Density
// 0x0000 (0x0028 - 0x0028)
class UDensity : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.Density")); }
		return ptr;
	}


	float Water();
	float SeaWater();
	float Min();
	float Max();
	bool IsValid(float InValue);
	float Air();
};


// Class Maths.DragCoefficients
// 0x0000 (0x0028 - 0x0028)
class UDragCoefficients : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.DragCoefficients")); }
		return ptr;
	}


	float Sphere();
	float PlanePerpendicularToFlow();
	float PlaneParallelToFlow();
	float Min();
	float Max();
	bool IsValid(float Value);
	float Cube();
};


// Class Maths.DragMaths
// 0x0000 (0x0028 - 0x0028)
class UDragMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.DragMaths")); }
		return ptr;
	}


	float CalculateMagnitude(float InSurfaceArea, float InSpeedReltaiveToFluid, float InDragCoefficient, float InFluidDensity);
};


// Class Maths.FloatMaths
// 0x0000 (0x0028 - 0x0028)
class UFloatMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.FloatMaths")); }
		return ptr;
	}


	float WrapToRange(float Input, float LowerLimit, float UpperLimit);
	float WrapAroundPivot(float Input, float Pivot, float Range);
	float MoveTowards(float From, float To, float Speed, float Time);
	float Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp);
	bool IncrementCounter(float Delta, float CounterMax, float* Counter);
	float FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit);
	float Bound(float ValueToBound, float Bound1, float Bound2);
};


// Class Maths.Gravity
// 0x0000 (0x0028 - 0x0028)
class UGravity : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.Gravity")); }
		return ptr;
	}


	float Earth();
};


// Class Maths.PoissonDiscSampling
// 0x0000 (0x0028 - 0x0028)
class UPoissonDiscSampling : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.PoissonDiscSampling")); }
		return ptr;
	}


	TArray<struct FVector> GeneratePoissonDiscDistributionAcrossPlane(const struct FVector& InCenter, const struct FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int InRNGSeed);
};


// Class Maths.RotationMaths
// 0x0000 (0x0028 - 0x0028)
class URotationMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.RotationMaths")); }
		return ptr;
	}


	struct FTransform TransformAroundArbitraryPivot(const struct FTransform& TargetTransform, const struct FTransform& BaseTransform, const struct FTransform& TransformToApply, bool LockFinalOrientation);
	struct FQuat RotatorToQuat(const struct FRotator& Rotation);
};


// Class Maths.SphereMaths
// 0x0000 (0x0028 - 0x0028)
class USphereMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.SphereMaths")); }
		return ptr;
	}


	float VolumeFromRadius(float InRadius);
	float SurfaceAreaFromRadius(float InRadius);
};


// Class Maths.SphericalCapMaths
// 0x0000 (0x0028 - 0x0028)
class USphericalCapMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.SphericalCapMaths")); }
		return ptr;
	}


	float Volume(float InRadius, float InHeight);
	float CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight);
	float BaseRadius(float InRadius, float InHeight);
};


// Class Maths.TimedBufferFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimedBufferFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.TimedBufferFunctionLibrary")); }
		return ptr;
	}


	void UpdateInterval(float DeltaTime, float Value, struct FTimedBuffer* TimedBuffer);
	bool GetValueRange(float MinWindowLength, struct FTimedBuffer* TimedBuffer, float* ValueRange);
	struct FTimedBuffer CreateTimedBuffer(float WindowLength);
};


// Class Maths.TimeMaths
// 0x0000 (0x0028 - 0x0028)
class UTimeMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.TimeMaths")); }
		return ptr;
	}


	struct FTimespan GetDifference(const struct FDateTime& A, const struct FDateTime& B);
};


// Class Maths.VectorMaths
// 0x0000 (0x0028 - 0x0028)
class UVectorMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Maths.VectorMaths")); }
		return ptr;
	}


	bool LineIntersectsSphere(const struct FVector& LineStart, const struct FVector& LineDir, const struct FVector& SphereCentre, float SphereRadius, struct FVector* ClosestIntersectionPoint);
	TEnumAsByte<EPlaneLineIntersectionType> IntersectLineSegmentWithPlane(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlanePos, const struct FVector& PlaneNormal, float PlaneThickness, struct FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment);
	float Distance(const struct FVector& A, const struct FVector& B);
	float Cross_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
