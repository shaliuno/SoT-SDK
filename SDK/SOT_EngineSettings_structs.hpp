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

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0030
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Desc;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Keywords;                                                 // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
