// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Maths.AngleMaths.CalculateEulerAngle
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// float                          FromAngle                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ToAngle                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAngleMaths::CalculateEulerAngle(float FromAngle, float ToAngle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.AngleMaths.CalculateEulerAngle"));}

	UAngleMaths_CalculateEulerAngle_Params params;
	params.FromAngle = FromAngle;
	params.ToAngle = ToAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMoveTowardsMod180
// (FUNC_Private, FUNC_Protected)
// Parameters:
// float                          Angle                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TargetAngle                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Rate                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAngleMaths::AngleMoveTowardsMod180(float Angle, float TargetAngle, float Rate)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.AngleMaths.AngleMoveTowardsMod180"));}

	UAngleMaths_AngleMoveTowardsMod180_Params params;
	params.Angle = Angle;
	params.TargetAngle = TargetAngle;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMod360
// (FUNC_BlueprintCosmetic, FUNC_Private)
// Parameters:
// float                          Angle                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAngleMaths::AngleMod360(float Angle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.AngleMaths.AngleMod360"));}

	UAngleMaths_AngleMod360_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleMod180
// (FUNC_BlueprintCosmetic, FUNC_Private)
// Parameters:
// float                          Angle                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAngleMaths::AngleMod180(float Angle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.AngleMaths.AngleMod180"));}

	UAngleMaths_AngleMod180_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.AngleMaths.AngleLerpShortest
// (FUNC_Private, FUNC_Protected)
// Parameters:
// float                          Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAngleMaths::AngleLerpShortest(float Start, float End, float Amount)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.AngleMaths.AngleLerpShortest"));}

	UAngleMaths_AngleLerpShortest_Params params;
	params.Start = Start;
	params.End = End;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.BuoyancyMaths.CalculateMagnitude
// (FUNC_Private, FUNC_Protected)
// Parameters:
// float                          InSubmersedVolume              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InFluidDensity                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InGravity                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UBuoyancyMaths::CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.BuoyancyMaths.CalculateMagnitude"));}

	UBuoyancyMaths_CalculateMagnitude_Params params;
	params.InSubmersedVolume = InSubmersedVolume;
	params.InFluidDensity = InFluidDensity;
	params.InGravity = InGravity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy
// (FUNC_BlueprintCosmetic, FUNC_Private, FUNC_NetServer)
// Parameters:
// class UCurveFloat*             PrimaryBuoyancyCurve           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             SecondaryBuoyancyCurve         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             TertiaryBuoyancyCurve          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          UnaryDistUnderwater            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Blend                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EBuoyancyBlend>    BlendType                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UBuoyancyMaths::CalcBlendedProbeCurveBuoyancy(class UCurveFloat* PrimaryBuoyancyCurve, class UCurveFloat* SecondaryBuoyancyCurve, class UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, TEnumAsByte<EBuoyancyBlend> BlendType)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy"));}

	UBuoyancyMaths_CalcBlendedProbeCurveBuoyancy_Params params;
	params.PrimaryBuoyancyCurve = PrimaryBuoyancyCurve;
	params.SecondaryBuoyancyCurve = SecondaryBuoyancyCurve;
	params.TertiaryBuoyancyCurve = TertiaryBuoyancyCurve;
	params.UnaryDistUnderwater = UnaryDistUnderwater;
	params.Blend = Blend;
	params.BlendType = BlendType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex
// (FUNC_Private, FUNC_Protected)
// Parameters:
// float                          AngleInDegrees                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumberOfSectors                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          IgnoredFraction                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCircleMaths::ConvertAngleToCircleSectorIndex(float AngleInDegrees, int NumberOfSectors, float IgnoredFraction)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex"));}

	UCircleMaths_ConvertAngleToCircleSectorIndex_Params params;
	params.AngleInDegrees = AngleInDegrees;
	params.NumberOfSectors = NumberOfSectors;
	params.IgnoredFraction = IgnoredFraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CircleMaths.Area
// (FUNC_BlueprintCosmetic, FUNC_Private)
// Parameters:
// float                          InRadius                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCircleMaths::Area(float InRadius)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CircleMaths.Area"));}

	UCircleMaths_Area_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetDistanceSquaredToCurve
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FVector                 WorldSpacePos                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USplineComponent*        Spline                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCurveMaths::GetDistanceSquaredToCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetDistanceSquaredToCurve"));}

	UCurveMaths_GetDistanceSquaredToCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestTimeOnCurve
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FVector                 WorldSpacePos                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USplineComponent*        Spline                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCurveMaths::GetClosestTimeOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetClosestTimeOnCurve"));}

	UCurveMaths_GetClosestTimeOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestPositionOnCurve
// (FUNC_BlueprintAuthorityOnly, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FVector                 WorldSpacePos                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USplineComponent*        Spline                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UCurveMaths::GetClosestPositionOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetClosestPositionOnCurve"));}

	UCurveMaths_GetClosestPositionOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetClosestPointOnCurve
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FVector                 WorldSpacePos                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USplineComponent*        Spline                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCurveMaths::GetClosestPointOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetClosestPointOnCurve"));}

	UCurveMaths_GetClosestPointOnCurve_Params params;
	params.WorldSpacePos = WorldSpacePos;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.CurveMaths.GetCentre
// (FUNC_BlueprintAuthorityOnly, FUNC_Protected)
// Parameters:
// class USplineComponent*        Spline                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UCurveMaths::GetCentre(class USplineComponent* Spline)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.CurveMaths.GetCentre"));}

	UCurveMaths_GetCentre_Params params;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.Water
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDensity::Water()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.Water"));}

	UDensity_Water_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.SeaWater
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDensity::SeaWater()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.SeaWater"));}

	UDensity_SeaWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.Min
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDensity::Min()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.Min"));}

	UDensity_Min_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.Max
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDensity::Max()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.Max"));}

	UDensity_Max_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.IsValid
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private)
// Parameters:
// float                          InValue                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDensity::IsValid(float InValue)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.IsValid"));}

	UDensity_IsValid_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Density.Air
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDensity::Air()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Density.Air"));}

	UDensity_Air_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Sphere
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDragCoefficients::Sphere()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.Sphere"));}

	UDragCoefficients_Sphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.PlanePerpendicularToFlow
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDragCoefficients::PlanePerpendicularToFlow()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.PlanePerpendicularToFlow"));}

	UDragCoefficients_PlanePerpendicularToFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.PlaneParallelToFlow
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDragCoefficients::PlaneParallelToFlow()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.PlaneParallelToFlow"));}

	UDragCoefficients_PlaneParallelToFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Min
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDragCoefficients::Min()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.Min"));}

	UDragCoefficients_Min_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Max
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDragCoefficients::Max()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.Max"));}

	UDragCoefficients_Max_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.IsValid
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private)
// Parameters:
// float                          Value                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDragCoefficients::IsValid(float Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.IsValid"));}

	UDragCoefficients_IsValid_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragCoefficients.Cube
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDragCoefficients::Cube()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragCoefficients.Cube"));}

	UDragCoefficients_Cube_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.DragMaths.CalculateMagnitude
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate)
// Parameters:
// float                          InSurfaceArea                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InSpeedReltaiveToFluid         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InDragCoefficient              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InFluidDensity                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDragMaths::CalculateMagnitude(float InSurfaceArea, float InSpeedReltaiveToFluid, float InDragCoefficient, float InFluidDensity)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.DragMaths.CalculateMagnitude"));}

	UDragMaths_CalculateMagnitude_Params params;
	params.InSurfaceArea = InSurfaceArea;
	params.InSpeedReltaiveToFluid = InSpeedReltaiveToFluid;
	params.InDragCoefficient = InDragCoefficient;
	params.InFluidDensity = InFluidDensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.WrapToRange
// (FUNC_Private, FUNC_Protected)
// Parameters:
// float                          Input                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LowerLimit                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          UpperLimit                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFloatMaths::WrapToRange(float Input, float LowerLimit, float UpperLimit)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.WrapToRange"));}

	UFloatMaths_WrapToRange_Params params;
	params.Input = Input;
	params.LowerLimit = LowerLimit;
	params.UpperLimit = UpperLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.WrapAroundPivot
// (FUNC_Private, FUNC_Protected)
// Parameters:
// float                          Input                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Pivot                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Range                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFloatMaths::WrapAroundPivot(float Input, float Pivot, float Range)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.WrapAroundPivot"));}

	UFloatMaths_WrapAroundPivot_Params params;
	params.Input = Input;
	params.Pivot = Pivot;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.MoveTowards
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate)
// Parameters:
// float                          From                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          To                             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Speed                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Time                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFloatMaths::MoveTowards(float From, float To, float Speed, float Time)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.MoveTowards"));}

	UFloatMaths_MoveTowards_Params params;
	params.From = From;
	params.To = To;
	params.Speed = Speed;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.Map
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// float                          ValueToMapFrom                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FromRangeStart                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FromRangeEnd                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ToRangeStart                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ToRangeEnd                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Clamp                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFloatMaths::Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.Map"));}

	UFloatMaths_Map_Params params;
	params.ValueToMapFrom = ValueToMapFrom;
	params.FromRangeStart = FromRangeStart;
	params.FromRangeEnd = FromRangeEnd;
	params.ToRangeStart = ToRangeStart;
	params.ToRangeEnd = ToRangeEnd;
	params.Clamp = Clamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.IncrementCounter
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Protected)
// Parameters:
// float                          Counter                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Delta                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CounterMax                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UFloatMaths::IncrementCounter(float Delta, float CounterMax, float* Counter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.IncrementCounter"));}

	UFloatMaths_IncrementCounter_Params params;
	params.Delta = Delta;
	params.CounterMax = CounterMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Counter != nullptr)
		*Counter = params.Counter;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.FindMidpointInWrappedRange
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate)
// Parameters:
// float                          Value1                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value2                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LowerLimit                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          UpperLimit                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFloatMaths::FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.FindMidpointInWrappedRange"));}

	UFloatMaths_FindMidpointInWrappedRange_Params params;
	params.Value1 = Value1;
	params.Value2 = Value2;
	params.LowerLimit = LowerLimit;
	params.UpperLimit = UpperLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.FloatMaths.Bound
// (FUNC_Private, FUNC_Protected)
// Parameters:
// float                          ValueToBound                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Bound1                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Bound2                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFloatMaths::Bound(float ValueToBound, float Bound1, float Bound2)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.FloatMaths.Bound"));}

	UFloatMaths_Bound_Params params;
	params.ValueToBound = ValueToBound;
	params.Bound1 = Bound1;
	params.Bound2 = Bound2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.Gravity.Earth
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UGravity::Earth()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.Gravity.Earth"));}

	UGravity_Earth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane
// (FUNC_Net, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FVector                 InCenter                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FQuat                   InOrientation                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          InWidth                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InHeight                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InMinDistance                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InRNGSeed                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FVector> UPoissonDiscSampling::GeneratePoissonDiscDistributionAcrossPlane(const struct FVector& InCenter, const struct FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int InRNGSeed)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane"));}

	UPoissonDiscSampling_GeneratePoissonDiscDistributionAcrossPlane_Params params;
	params.InCenter = InCenter;
	params.InOrientation = InOrientation;
	params.InWidth = InWidth;
	params.InHeight = InHeight;
	params.InMinDistance = InMinDistance;
	params.InRNGSeed = InRNGSeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.RotationMaths.TransformAroundArbitraryPivot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_HasDefaults)
// Parameters:
// struct FTransform              TargetTransform                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FTransform              BaseTransform                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FTransform              TransformToApply               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           LockFinalOrientation           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform URotationMaths::TransformAroundArbitraryPivot(const struct FTransform& TargetTransform, const struct FTransform& BaseTransform, const struct FTransform& TransformToApply, bool LockFinalOrientation)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.TransformAroundArbitraryPivot"));}

	URotationMaths_TransformAroundArbitraryPivot_Params params;
	params.TargetTransform = TargetTransform;
	params.BaseTransform = BaseTransform;
	params.TransformToApply = TransformToApply;
	params.LockFinalOrientation = LockFinalOrientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.RotationMaths.RotatorToQuat
// (FUNC_Delegate)
// Parameters:
// struct FRotator                Rotation                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FQuat URotationMaths::RotatorToQuat(const struct FRotator& Rotation)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.RotationMaths.RotatorToQuat"));}

	URotationMaths_RotatorToQuat_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.SphereMaths.VolumeFromRadius
// (FUNC_BlueprintCosmetic, FUNC_Private)
// Parameters:
// float                          InRadius                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USphereMaths::VolumeFromRadius(float InRadius)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.SphereMaths.VolumeFromRadius"));}

	USphereMaths_VolumeFromRadius_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.SphereMaths.SurfaceAreaFromRadius
// (FUNC_BlueprintCosmetic, FUNC_Private)
// Parameters:
// float                          InRadius                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USphereMaths::SurfaceAreaFromRadius(float InRadius)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.SphereMaths.SurfaceAreaFromRadius"));}

	USphereMaths_SurfaceAreaFromRadius_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.SphericalCapMaths.Volume
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// float                          InRadius                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InHeight                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USphericalCapMaths::Volume(float InRadius, float InHeight)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.SphericalCapMaths.Volume"));}

	USphericalCapMaths_Volume_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// float                          InRadius                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InHeight                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USphericalCapMaths::CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid"));}

	USphericalCapMaths_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.SphericalCapMaths.BaseRadius
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// float                          InRadius                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InHeight                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USphericalCapMaths::BaseRadius(float InRadius, float InHeight)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.SphericalCapMaths.BaseRadius"));}

	USphericalCapMaths_BaseRadius_Params params;
	params.InRadius = InRadius;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.TimedBufferFunctionLibrary.UpdateInterval
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTimedBuffer            TimedBuffer                    (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          DeltaTime                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTimedBufferFunctionLibrary::UpdateInterval(float DeltaTime, float Value, struct FTimedBuffer* TimedBuffer)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimedBufferFunctionLibrary.UpdateInterval"));}

	UTimedBufferFunctionLibrary_UpdateInterval_Params params;
	params.DeltaTime = DeltaTime;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimedBuffer != nullptr)
		*TimedBuffer = params.TimedBuffer;
}


// Function Maths.TimedBufferFunctionLibrary.GetValueRange
// (FUNC_Final, FUNC_NetServer)
// Parameters:
// struct FTimedBuffer            TimedBuffer                    (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          MinWindowLength                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ValueRange                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTimedBufferFunctionLibrary::GetValueRange(float MinWindowLength, struct FTimedBuffer* TimedBuffer, float* ValueRange)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimedBufferFunctionLibrary.GetValueRange"));}

	UTimedBufferFunctionLibrary_GetValueRange_Params params;
	params.MinWindowLength = MinWindowLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimedBuffer != nullptr)
		*TimedBuffer = params.TimedBuffer;
	if (ValueRange != nullptr)
		*ValueRange = params.ValueRange;

	return params.ReturnValue;
}


// Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer
// (FUNC_Protected)
// Parameters:
// float                          WindowLength                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTimedBuffer            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTimedBuffer UTimedBufferFunctionLibrary::CreateTimedBuffer(float WindowLength)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer"));}

	UTimedBufferFunctionLibrary_CreateTimedBuffer_Params params;
	params.WindowLength = WindowLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.TimeMaths.GetDifference
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// struct FDateTime               A                              (CPF_Parm, CPF_ZeroConstructor)
// struct FDateTime               B                              (CPF_Parm, CPF_ZeroConstructor)
// struct FTimespan               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FTimespan UTimeMaths::GetDifference(const struct FDateTime& A, const struct FDateTime& B)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.TimeMaths.GetDifference"));}

	UTimeMaths_GetDifference_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.LineIntersectsSphere
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FVector                 LineStart                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LineDir                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 SphereCentre                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SphereRadius                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ClosestIntersectionPoint       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVectorMaths::LineIntersectsSphere(const struct FVector& LineStart, const struct FVector& LineDir, const struct FVector& SphereCentre, float SphereRadius, struct FVector* ClosestIntersectionPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.LineIntersectsSphere"));}

	UVectorMaths_LineIntersectsSphere_Params params;
	params.LineStart = LineStart;
	params.LineDir = LineDir;
	params.SphereCentre = SphereCentre;
	params.SphereRadius = SphereRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestIntersectionPoint != nullptr)
		*ClosestIntersectionPoint = params.ClosestIntersectionPoint;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.IntersectLineSegmentWithPlane
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// struct FVector                 LineStart                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 LineEnd                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 PlanePos                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 PlaneNormal                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          PlaneThickness                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 IntersectionPos                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NormalisedIntersectionTOnLineSegment (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EPlaneLineIntersectionType> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EPlaneLineIntersectionType> UVectorMaths::IntersectLineSegmentWithPlane(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlanePos, const struct FVector& PlaneNormal, float PlaneThickness, struct FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.IntersectLineSegmentWithPlane"));}

	UVectorMaths_IntersectLineSegmentWithPlane_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.PlanePos = PlanePos;
	params.PlaneNormal = PlaneNormal;
	params.PlaneThickness = PlaneThickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntersectionPos != nullptr)
		*IntersectionPos = params.IntersectionPos;
	if (NormalisedIntersectionTOnLineSegment != nullptr)
		*NormalisedIntersectionTOnLineSegment = params.NormalisedIntersectionTOnLineSegment;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.Distance
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FVector                 A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVectorMaths::Distance(const struct FVector& A, const struct FVector& B)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.Distance"));}

	UVectorMaths_Distance_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Maths.VectorMaths.Cross_Vector2DVector2D
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate)
// Parameters:
// struct FVector2D               A                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVectorMaths::Cross_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Maths.VectorMaths.Cross_Vector2DVector2D"));}

	UVectorMaths_Cross_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
