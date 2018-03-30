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

// ScriptStruct Wind.WindTurbulenceParameters
// 0x0070
struct FWindTurbulenceParameters
{
	struct FFloatRange                                 GustPower;                                                // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           GustTime;                                                 // 0x0010(0x0030) (CPF_Edit, CPF_BlueprintVisible)
	struct FWeightedProbabilityRangeOfRanges           CalmTime;                                                 // 0x0040(0x0030) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Wind.WindZoneParams
// 0x000C
struct FWindZoneParams
{
	float                                              OuterRadius;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TurbulenceScalar;                                         // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Wind.WindServiceParams
// 0x0024
struct FWindServiceParams
{
	float                                              MinAngleChange;                                           // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAngleChange;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinTimeChange;                                            // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxTimeChange;                                            // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinWindMagnitude;                                         // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxWindMagnitude;                                         // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AbsoluteMaxWindMagnitude;                                 // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinBlendTimeBetweenChanges;                               // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxBlendTimeBetweenChanges;                               // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Wind.WindZoneTurbulence
// 0x0008
struct FWindZoneTurbulence
{
	float                                              Base;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Current;                                                  // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Wind.WindMagnitudeChanged
// 0x0001
struct FWindMagnitudeChanged
{

};

// ScriptStruct Wind.WindDirectionChanged
// 0x0001
struct FWindDirectionChanged
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
