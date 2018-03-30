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

// ScriptStruct StudiosAutomation.TestLevelMetadataEntry
// 0x0020
struct FTestLevelMetadataEntry
{
	struct FString                                     Property;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct StudiosAutomation.ClientPawnDetails
// 0x0010
struct FClientPawnDetails
{
	TArray<class APawn*>                               Pawns;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
