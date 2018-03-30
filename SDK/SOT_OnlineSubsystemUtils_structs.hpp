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

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0028
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0000(0x0010) (CPF_Transient)
	struct FString                                     ValidationStr;                                            // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	float                                              ElapsedTime;                                              // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0028
struct FPartyReservation
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0008(0x0010) (CPF_Transient)
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00C8
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
