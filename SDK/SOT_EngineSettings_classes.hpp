#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EngineSettings.ConsoleSettings
// 0x0028 (0x0050 - 0x0028)
class UConsoleSettings : public UObject
{
public:
	int                                                MaxScrollbackSize;                                        // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                   // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteMapPaths;                                     // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class EngineSettings.ConsoleSettings")); }
		return ptr;
	}

};


// Class EngineSettings.GameMapsSettings
// 0x0088 (0x00B0 - 0x0028)
class UGameMapsSettings : public UObject
{
public:
	struct FString                                     EditorStartupMap;                                         // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     LocalMapOptions;                                          // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     TransitionMap;                                            // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bUseSplitscreen;                                          // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                               // 0x0059(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                             // 0x005A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	struct FStringClassReference                       GameInstanceClass;                                        // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_NoClear)
	struct FString                                     GameDefaultMap;                                           // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     ServerDefaultMap;                                         // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringClassReference                       GlobalDefaultGameMode;                                    // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_NoClear)
	struct FStringClassReference                       GlobalDefaultServerGameMode;                              // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class EngineSettings.GameMapsSettings")); }
		return ptr;
	}

};


// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (0x0058 - 0x0028)
class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                      // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                MaxDynamicBandwidth;                                      // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                TotalNetBandwidth;                                        // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                BadPingThreshold;                                         // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                            // 0x0038(0x0001) (CPF_Edit, CPF_Config BITFIELD: 0101)
	float                                              StandbyRxCheatTime;                                       // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              StandbyTxCheatTime;                                       // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PercentMissingForRxStandby;                               // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PercentMissingForTxStandby;                               // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PercentForBadPing;                                        // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              JoinInProgressStandbyWaitTime;                            // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class EngineSettings.GameNetworkManagerSettings")); }
		return ptr;
	}

};


// Class EngineSettings.GameSessionSettings
// 0x0010 (0x0038 - 0x0028)
class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                            // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      bRequiresPushToTalk : 1;                                  // 0x0030(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig BITFIELD: 0101)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class EngineSettings.GameSessionSettings")); }
		return ptr;
	}

};


// Class EngineSettings.GeneralEngineSettings
// 0x0000 (0x0028 - 0x0028)
class UGeneralEngineSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class EngineSettings.GeneralEngineSettings")); }
		return ptr;
	}

};


// Class EngineSettings.GeneralProjectSettings
// 0x00D8 (0x0100 - 0x0028)
class UGeneralProjectSettings : public UObject
{
public:
	struct FString                                     CompanyName;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     CompanyDistinguishedName;                                 // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     CopyrightNotice;                                          // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Description;                                              // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Homepage;                                                 // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     LicensingTerms;                                           // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     PrivacyPolicy;                                            // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FGuid                                       ProjectID;                                                // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     ProjectName;                                              // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     ProjectVersion;                                           // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     SupportContact;                                           // 0x00C8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FText                                       ProjectDisplayedTitle;                                    // 0x00D8(0x0028) (CPF_Edit, CPF_Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class EngineSettings.GeneralProjectSettings")); }
		return ptr;
	}

};


// Class EngineSettings.HudSettings
// 0x0018 (0x0040 - 0x0028)
class UHudSettings : public UObject
{
public:
	unsigned char                                      bUnknown0028_0101 : 1;                                    // 0x0028(0x0001) (CPF_Edit, CPF_ConfigMANUAL_ADD_BIT 0101)
	unsigned char                                      bUnknown0028_0202 : 1;                                    // 0x0028(0x0001) (MANUAL_ADD_BIT 0202)
	unsigned char                                      bUnknown0028_0404 : 1;                                    // 0x0028(0x0001) (MANUAL_ADD_BIT 0404)
	unsigned char                                      bUnknown0028_0808 : 1;                                    // 0x0028(0x0001) (MANUAL_ADD_BIT 0808)
	unsigned char                                      bUnknown0028_1010 : 1;                                    // 0x0028(0x0001) (MANUAL_ADD_BIT 1010)
	unsigned char                                      bUnknown0028_2020 : 1;                                    // 0x0028(0x0001) (MANUAL_ADD_BIT 2020)
	unsigned char                                      bUnknown0028_4040 : 1;                                    // 0x0028(0x0001) (MANUAL_ADD_BIT 4040)
	unsigned char                                      bUnknown0028_8080 : 1;                                    // 0x0028(0x0001) (MANUAL_ADD_BIT 8080)
	unsigned char                                      bShowHUD : 1;                                             // 0x0028(0x0001) (CPF_Edit, CPF_Config BITFIELD: 0101)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FName>                               DebugDisplay;                                             // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class EngineSettings.HudSettings")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
