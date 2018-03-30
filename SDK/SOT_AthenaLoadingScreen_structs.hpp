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

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenStateResponse
// 0x0001
struct FEventAthenaLoadingScreenStateResponse
{
	unsigned char                                      IsVisible;                                                // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenStateRequest
// 0x0001
struct FEventAthenaLoadingScreenStateRequest
{

};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenBlockUntilUIIntialisedClear
// 0x0010
struct FEventAthenaLoadingScreenBlockUntilUIIntialisedClear
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenBlockUntilUIIntialised
// 0x0010
struct FEventAthenaLoadingScreenBlockUntilUIIntialised
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenClose
// 0x0001
struct FEventAthenaLoadingScreenClose
{

};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenOpen
// 0x0001
struct FEventAthenaLoadingScreenOpen
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
