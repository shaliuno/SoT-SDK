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

// ScriptStruct GameplayDebugger.GDTCustomViewNames
// 0x0050
struct FGDTCustomViewNames
{
	struct FString                                     GameView1;                                                // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     GameView2;                                                // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     GameView3;                                                // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     GameView4;                                                // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     GameView5;                                                // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
