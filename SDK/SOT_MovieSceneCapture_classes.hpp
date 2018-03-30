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

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneCaptureInterface")); }
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCapture
// 0x00A8 (0x00D0 - 0x0028)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FMovieSceneCaptureSettings                  Settings;                                                 // 0x0030(0x0050) (CPF_Edit, CPF_Config)
	struct FString                                     AdditionalCommandLineArguments;                           // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      bBufferVisualizationDumpFrames;                           // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0091(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneCapture")); }
		return ptr;
	}

};


// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0048 (0x0118 - 0x00D0)
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:
	struct FStringAssetReference                       LevelSequence;                                            // 0x00D0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FStringAssetReference                       Level;                                                    // 0x00E0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FLevelSequencePlaybackSettings              PlaybackSettings;                                         // 0x00F0(0x0008) (CPF_Edit, CPF_Config)
	float                                              PrerollAmount;                                            // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class ULevelSequenceInstance*                      AnimationInstance;                                        // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ULevelSequencePlayer*                        AnimationPlayback;                                        // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.AutomatedLevelSequenceCapture")); }
		return ptr;
	}

};


// Class MovieSceneCapture.LevelCapture
// 0x0010 (0x00E0 - 0x00D0)
class ULevelCapture : public UMovieSceneCapture
{
public:
	struct FStringAssetReference                       Level;                                                    // 0x00D0(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.LevelCapture")); }
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneCaptureEnvironment")); }
		return ptr;
	}


	int GetCaptureFrameNumber();
	float GetCaptureElapsedTime();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
