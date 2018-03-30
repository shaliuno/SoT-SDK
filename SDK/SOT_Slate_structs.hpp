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

// ScriptStruct Slate.InputChord
// 0x0020
struct FInputChord
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018)
	unsigned char                                      bShift : 1;                                               // 0x0018(0x0001) ( BITFIELD: 0101)
	unsigned char                                      bCtrl : 1;                                                // 0x0018(0x0001) ( BITFIELD: 0202)
	unsigned char                                      bAlt : 1;                                                 // 0x0018(0x0001) ( BITFIELD: 0404)
	unsigned char                                      bCmd : 1;                                                 // 0x0018(0x0001) ( BITFIELD: 0808)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	struct FVector2D                                   Minimum;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Maximum;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
