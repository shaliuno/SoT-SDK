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

// Class OnlineSubsystem.DefaultOnlineEnvironmentSettings
// 0x0038 (0x0060 - 0x0028)
class UDefaultOnlineEnvironmentSettings : public UObject
{
public:
	struct FString                                     EnvironmentId;                                            // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	uint32_t                                           TitleId;                                                  // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     ServiceConfigId;                                          // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     ClientCertificateThumbprint;                              // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class OnlineSubsystem.DefaultOnlineEnvironmentSettings")); }
		return ptr;
	}

};


// Class OnlineSubsystem.NamedInterfaces
// 0x0068 (0x0090 - 0x0028)
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>                     NamedInterfaces;                                          // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                       // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class OnlineSubsystem.NamedInterfaces")); }
		return ptr;
	}

};


// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (0x0028 - 0x0028)
class UTurnBasedMatchInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class OnlineSubsystem.TurnBasedMatchInterface")); }
		return ptr;
	}


	void OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const struct FString& Match);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
