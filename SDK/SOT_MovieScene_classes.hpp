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

// Class MovieScene.MovieScene
// 0x0058 (0x0080 - 0x0028)
class UMovieScene : public UObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x0038(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x0048(0x0010) (CPF_ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x0058(0x0010) (CPF_ZeroConstructor)
	class UMovieSceneTrack*                            ShotTrack;                                                // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InTime;                                                   // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutTime;                                                  // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndTime;                                                  // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MovieScene.MovieScene")); }
		return ptr;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneSection : public UObject
{
public:
	float                                              StartTime;                                                // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndTime;                                                  // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RowIndex;                                                 // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x0034(0x0001) (CPF_Edit BITFIELD: 0101)
	unsigned char                                      bIsInfinite : 1;                                          // 0x0034(0x0001) (CPF_Edit BITFIELD: 0202)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MovieScene.MovieSceneSection")); }
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneSequence : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MovieScene.MovieSceneSequence")); }
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneTrack : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class MovieScene.MovieSceneTrack")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
