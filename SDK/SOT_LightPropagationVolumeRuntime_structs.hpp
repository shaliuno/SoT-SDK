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

// ScriptStruct LightPropagationVolumeRuntime.LightPropagationVolumeSettings
// 0x0070
struct FLightPropagationVolumeSettings
{
	unsigned char                                      bUnknown0000_0101 : 1;                                    // 0x0000(0x0001) (CPF_BlueprintVisibleMANUAL_ADD_BIT 0101)
	unsigned char                                      bUnknown0000_0202 : 1;                                    // 0x0000(0x0001) (MANUAL_ADD_BIT 0202)
	unsigned char                                      bUnknown0000_0404 : 1;                                    // 0x0000(0x0001) (MANUAL_ADD_BIT 0404)
	unsigned char                                      bUnknown0000_0808 : 1;                                    // 0x0000(0x0001) (MANUAL_ADD_BIT 0808)
	unsigned char                                      bUnknown0000_1010 : 1;                                    // 0x0000(0x0001) (MANUAL_ADD_BIT 1010)
	unsigned char                                      bUnknown0000_2020 : 1;                                    // 0x0000(0x0001) (MANUAL_ADD_BIT 2020)
	unsigned char                                      bUnknown0000_4040 : 1;                                    // 0x0000(0x0001) (MANUAL_ADD_BIT 4040)
	unsigned char                                      bUnknown0000_8080 : 1;                                    // 0x0000(0x0001) (MANUAL_ADD_BIT 8080)
	unsigned char                                      bOverride_LPVIntensity : 1;                               // 0x0000(0x0001) (CPF_BlueprintVisible BITFIELD: 0101)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           // 0x0000(0x0001) (CPF_BlueprintVisible BITFIELD: 0202)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              // 0x0000(0x0001) (CPF_BlueprintVisible BITFIELD: 0404)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                // 0x0000(0x0001) (CPF_BlueprintVisible BITFIELD: 0808)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               // 0x0000(0x0001) (CPF_BlueprintVisible BITFIELD: 1010)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               // 0x0000(0x0001) (CPF_BlueprintVisible BITFIELD: 2020)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x0000(0x0001) (CPF_BlueprintVisible BITFIELD: 4040)
	unsigned char                                      bOverride_LPVSize : 1;                                    // 0x0000(0x0001) (CPF_BlueprintVisible BITFIELD: 8080)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             // 0x0001(0x0001) (CPF_BlueprintVisible BITFIELD: 0101)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                // 0x0001(0x0001) (CPF_BlueprintVisible BITFIELD: 0202)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      // 0x0001(0x0001) (CPF_BlueprintVisible BITFIELD: 0404)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        // 0x0001(0x0001) (CPF_BlueprintVisible BITFIELD: 0808)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              // 0x0001(0x0001) (CPF_BlueprintVisible BITFIELD: 1010)
	float                                              LPVIntensity;                                             // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSize;                                                  // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  LPVWorldRef;                                              // 0x0040(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
