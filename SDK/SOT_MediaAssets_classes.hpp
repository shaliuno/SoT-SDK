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

// Class MediaAssets.MediaPlayer
// 0x00E8 (0x0110 - 0x0028)
class UMediaPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMediaClosed;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                            // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      Looping : 1;                                              // 0x0048(0x0001) (CPF_Edit BITFIELD: 0101)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     URL;                                                      // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x0060(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaPlayer")); }
		return ptr;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetRate(float Rate);
	bool SetLooping(bool InLooping);
	bool Seek(const struct FTimespan& InTime);
	bool Rewind();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& NewUrl);
	bool IsStopped();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	struct FString GetUrl();
	struct FTimespan GetTime();
	float GetRate();
	struct FTimespan GetDuration();
	void Close();
	bool CanPlay();
	bool CanPause();
};


// Class MediaAssets.MediaSoundWave
// 0x0050 (0x0260 - 0x0210)
class UMediaSoundWave : public USoundWave
{
public:
	int                                                AudioTrackIndex;                                          // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0220(0x0020) MISSED OFFSET
	TWeakObjectPtr<class UMediaPlayer>                 CurrentMediaPlayer;                                       // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0248(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaSoundWave")); }
		return ptr;
	}


	void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
};


// Class MediaAssets.MediaTexture
// 0x0060 (0x0198 - 0x0138)
class UMediaTexture : public UTexture
{
public:
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x0139(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ClearColor;                                               // 0x013C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                VideoTrackIndex;                                          // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UMediaPlayer>                 CurrentMediaPlayer;                                       // 0x0160(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0168(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaTexture")); }
		return ptr;
	}


	void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
