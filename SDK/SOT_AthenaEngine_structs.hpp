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

// ScriptStruct AthenaEngine.StringAssetClassPair
// 0x0030
struct FStringAssetClassPair
{
	struct FString                                     String;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TAssetPtr<class UClass>                            AssetClass;                                               // 0x0010(0x0020) (CPF_Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
