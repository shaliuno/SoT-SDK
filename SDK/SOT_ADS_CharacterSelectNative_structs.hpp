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

// AnimDataEntryStruct ADS_CharacterSelectNative.ADS_CharacterSelectNative
// 0x0010
struct FADS_CharacterSelectNative
{
	TArray<struct FAthenaAnimationCharacterSelect>     CharacterSelect_41_79356B9543A918FE5739F99C97F7EC6A;      // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
