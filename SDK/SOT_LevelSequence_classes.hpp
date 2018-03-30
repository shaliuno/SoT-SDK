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

// Class LevelSequence.LevelSequence
// 0x00A8 (0x00D0 - 0x0028)
class ULevelSequence : public UObject
{
public:
	struct FLevelSequenceObjectReferenceMap            DefaultObjectReferences;                                  // 0x0028(0x0050)
	class UMovieScene*                                 MovieScene;                                               // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                         // 0x0080(0x0050) (CPF_ZeroConstructor, CPF_Deprecated)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class LevelSequence.LevelSequence")); }
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceInstance
// 0x0108 (0x0130 - 0x0028)
class ULevelSequenceInstance : public UMovieSceneSequence
{
public:
	class ULevelSequence*                              LevelSequence;                                            // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bCanRemapBindings;                                        // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FLevelSequenceObjectReferenceMap            RemappedObjectReferences;                                 // 0x0038(0x0050)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0088(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class LevelSequence.LevelSequenceInstance")); }
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x0090 (0x00B8 - 0x0028)
class ULevelSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class ULevelSequenceInstance*                      LevelSequenceInstance;                                    // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsPlaying;                                               // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeCursorPosition;                                       // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLevelSequencePlaybackSettings              PlaybackSettings;                                         // 0x0040(0x0008)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0048(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class LevelSequence.LevelSequencePlayer")); }
		return ptr;
	}


	void Stop();
	void SetPlayRate(float PlayRate);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	bool IsPlaying();
	float GetPlayRate();
	float GetPlaybackPosition();
	float GetLength();
	class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FLevelSequencePlaybackSettings& Settings);
};


// Class LevelSequence.LevelSequenceActor
// 0x0030 (0x0498 - 0x0468)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      bAutoPlay;                                                // 0x0468(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLevelSequencePlaybackSettings              PlaybackSettings;                                         // 0x046C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FStringAssetReference                       LevelSequence;                                            // 0x0480(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class ULevelSequenceInstance*                      SequenceInstance;                                         // 0x0490(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class LevelSequence.LevelSequenceActor")); }
		return ptr;
	}


	void SetSequence(class ULevelSequence* InSequence);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
