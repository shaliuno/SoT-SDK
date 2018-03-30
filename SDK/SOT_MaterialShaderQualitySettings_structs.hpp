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

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0004
struct FMaterialQualityOverrides
{
	unsigned char                                      bEnableOverride;                                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bForceFullyRough;                                         // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bForceNonMetal;                                           // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bForceDisableLMDirectionality;                            // 0x0003(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
};

// ScriptStruct MaterialShaderQualitySettings.ShaderQualityOverridesListItem
// 0x0020
struct FShaderQualityOverridesListItem
{
	struct FString                                     RangeName;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	class UBoolProperty*                               QualityProperty;                                          // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UShaderPlatformQualitySettings*              SettingContainer;                                         // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
