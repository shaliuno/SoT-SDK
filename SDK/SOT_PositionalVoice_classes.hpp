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

// Class PositionalVoice.VoiceChatRendererInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatRendererInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class PositionalVoice.VoiceChatRendererInterface")); }
		return ptr;
	}

};


// Class PositionalVoice.MockVoiceChatRenderer
// 0x0028 (0x0050 - 0x0028)
class UMockVoiceChatRenderer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class PositionalVoice.MockVoiceChatRenderer")); }
		return ptr;
	}

};


// Class PositionalVoice.VoiceChatRendererRetreivalInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatRendererRetreivalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class PositionalVoice.VoiceChatRendererRetreivalInterface")); }
		return ptr;
	}

};


// Class PositionalVoice.MockVoiceChatRendererRetriever
// 0x0010 (0x0038 - 0x0028)
class UMockVoiceChatRendererRetriever : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class PositionalVoice.MockVoiceChatRendererRetriever")); }
		return ptr;
	}

};


// Class PositionalVoice.PositionalVoiceTestFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPositionalVoiceTestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class PositionalVoice.PositionalVoiceTestFunctionLibrary")); }
		return ptr;
	}


	int GetNumberOfUnmutedRemotePlayers(class APlayerController* CurrentPlayer);
	int GetNumberOfRegisteredChatEmitters(class UObject* WorldContextObject, class UClass* VoiceChatRendererClass);
	int GetMaxNumberOfAudibleChatEmitters();
};


// Class PositionalVoice.VoiceChatEmitterInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatEmitterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class PositionalVoice.VoiceChatEmitterInterface")); }
		return ptr;
	}


	struct FVector GetVoiceLocation();
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
	float GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter);
};


// Class PositionalVoice.TestVoiceChatEmitter
// 0x0030 (0x0498 - 0x0468)
class ATestVoiceChatEmitter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0468(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class PositionalVoice.TestVoiceChatEmitter")); }
		return ptr;
	}


	struct FVector GetVoiceLocation();
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
	float GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter);
};


// Class PositionalVoice.VoiceChatRenderer
// 0x0100 (0x0128 - 0x0028)
class UVoiceChatRenderer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UWwiseEvent*                                 AttenuatedVoiceEvent;                                     // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWwiseEvent*                                 AttenuatedAndSpatialisedVoiceEvent;                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWwiseEvent*                                 UnattenuatedVoiceEvent;                                   // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PreBufferInMilliseconds;                                  // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                ChatRoutingListenerIndex;                                 // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              EmitterHoldInSeconds;                                     // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xCC];                                      // 0x005C(0x00CC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class PositionalVoice.VoiceChatRenderer")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
