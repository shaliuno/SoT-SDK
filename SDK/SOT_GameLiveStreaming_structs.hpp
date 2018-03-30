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

// ScriptStruct GameLiveStreaming.BlueprintLiveStreamInfo
// 0x0030
struct FBlueprintLiveStreamInfo
{
	struct FString                                     GameName;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     StreamName;                                               // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     URL;                                                      // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
