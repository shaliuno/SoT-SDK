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

// Class WwiseAudio.WwiseAudioSettings
// 0x0290 (0x02B8 - 0x0028)
class UWwiseAudioSettings : public UObject
{
public:
	struct FWwiseAudioReverbPresets                    ReverbPresetSettings;                                     // 0x0028(0x0064) (CPF_Edit, CPF_Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FWwiseBinkSettings                          BinkSettings;                                             // 0x0090(0x0038) (CPF_Edit, CPF_Config)
	TArray<struct FStringAssetReference>               PersistentSoundBanks;                                     // 0x00C8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       InitBank;                                                 // 0x00D8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FDirectoryPath                              WwiseSoundbanksRoot;                                      // 0x00E8(0x0010) (CPF_Edit, CPF_Config)
	struct FDirectoryPath                              WwiseStreamedFilesDirectory;                              // 0x00F8(0x0010) (CPF_Edit, CPF_Config)
	struct FDirectoryPath                              TritonAcousticMapsDirectory;                              // 0x0108(0x0010) (CPF_Edit, CPF_Config)
	struct FString                                     DefaultLanguage;                                          // 0x0118(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     SinkSharesetName;                                         // 0x0128(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       PauseEventStart;                                          // 0x0138(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       PauseEventRelease;                                        // 0x0148(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       StopAllEvent;                                             // 0x0158(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FWwiseNetworkRelationship                   NetworkRelationship;                                      // 0x0168(0x0018) (CPF_Edit, CPF_Config)
	struct FWwiseAudioGameStateSettings                AudioStateSettings;                                       // 0x0180(0x0080) (CPF_Edit, CPF_Config)
	class UWwiseEvent*                                 PauseEventStartInstance;                                  // 0x0200(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UWwiseEvent*                                 PauseEventReleaseInstance;                                // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UWwiseEvent*                                 StopAllEventInstance;                                     // 0x0210(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0218(0x0040) MISSED OFFSET
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontendStartInstance;                      // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontendEndInstance;                        // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnLoadingStartInstance;                       // 0x0278(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnLoadingEndInstance;                         // 0x0288(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontEndOrLoadingStartInstance;             // 0x0298(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontEndOrLoadingEndInstance;               // 0x02A8(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class WwiseAudio.WwiseAudioSettings")); }
		return ptr;
	}

};


// Class WwiseAudio.WwiseBank
// 0x0030 (0x0058 - 0x0028)
class UWwiseBank : public UObject
{
public:
	struct FString                                     path;                                                     // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	uint32_t                                           WwiseId;                                                  // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x003C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class WwiseAudio.WwiseBank")); }
		return ptr;
	}

};


// Class WwiseAudio.WwiseSubSystemInterface
// 0x0000 (0x0028 - 0x0028)
class UWwiseSubSystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class WwiseAudio.WwiseSubSystemInterface")); }
		return ptr;
	}

};


// Class WwiseAudio.WwiseDebugManager
// 0x0048 (0x0070 - 0x0028)
class UWwiseDebugManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class WwiseAudio.WwiseDebugManager")); }
		return ptr;
	}

};


// Class WwiseAudio.WwiseEmitterManager
// 0x0018 (0x0040 - 0x0028)
class UWwiseEmitterManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class WwiseAudio.WwiseEmitterManager")); }
		return ptr;
	}

};


// Class WwiseAudio.WwiseEvent
// 0x0020 (0x0048 - 0x0028)
class UWwiseEvent : public UObject
{
public:
	class UWwiseBank*                                  RequiredBank;                                             // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      WaitForBankToLoad;                                        // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WwiseId;                                                  // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              DurationMin;                                              // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              DurationMax;                                              // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              MaxAttenuation;                                           // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TEnumAsByte<EWwiseEventDurationType>               DurationType;                                             // 0x0044(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class WwiseAudio.WwiseEvent")); }
		return ptr;
	}


	bool IsAudible(const struct FVector& SoundPosition, const struct FVector& ListenerPos);
	float GetMaxAttenuation();
	TEnumAsByte<EWwiseEventDurationType> GetDurationType();
	float GetDurationMin();
	float GetDurationMax();
};


// Class WwiseAudio.WwiseInputManager
// 0x0018 (0x0040 - 0x0028)
class UWwiseInputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class WwiseAudio.WwiseInputManager")); }
		return ptr;
	}

};


// Class WwiseAudio.WwisePersistentContentStore
// 0x0010 (0x0038 - 0x0028)
class UWwisePersistentContentStore : public UObject
{
public:
	TArray<class UWwiseBank*>                          PersistentlyLoadedBanks;                                  // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class WwiseAudio.WwisePersistentContentStore")); }
		return ptr;
	}

};


// Class WwiseAudio.WwiseSoundFrameManager
// 0x0018 (0x0040 - 0x0028)
class UWwiseSoundFrameManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class WwiseAudio.WwiseSoundFrameManager")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
