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

// Class RareAudio.WwiseEmitterComponent
// 0x0020 (0x0300 - 0x02E0)
class UWwiseEmitterComponent : public USceneComponent
{
public:
	struct FWwiseEmitter                               Emitter;                                                  // 0x02E0(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UWwiseObjectPoolWrapper*                     WwiseObjectPoolWrapper;                                   // 0x02F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.WwiseEmitterComponent")); }
		return ptr;
	}

};


// Class RareAudio.AnimNotifyWwiseEmitterComponent
// 0x0020 (0x0320 - 0x0300)
class UAnimNotifyWwiseEmitterComponent : public UWwiseEmitterComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0300(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AnimNotifyWwiseEmitterComponent")); }
		return ptr;
	}

};


// Class RareAudio.WwiseEmitterBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWwiseEmitterBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.WwiseEmitterBlueprintLibrary")); }
		return ptr;
	}


	void WwiseSetState(const struct FName& StateGroup, const struct FName& StateValue);
	void WwiseSetGlobalRTPC(const struct FName& RTPCName, float RTPCValue);
	void WwisePostGlobalEvent(class UWwiseEvent* Event);
	int WwisePostEventAtLocation(class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<EEmitterRelationship> Relationship, struct FWwiseEmitter* Emitter);
	bool WwiseGetListenerInfo(int Viewport, struct FWwiseListenerInfo* InfoOut);
	bool WwiseGetListenerEmitter(class UObject* WorldContextObject, int ListenerIndex, const struct FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool, struct FWwiseEmitter* Emitter);
	bool WwiseGetEmitter(const struct FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset, struct FWwiseEmitter* Emitter);
	bool WwiseEmitterWaitToComplete(const struct FWwiseEmitter& Emitter, int PlayId, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	bool WwiseEmitterStop(const struct FWwiseEmitter& Emitter, int PlayId, float FadeTime);
	bool WwiseEmitterSetRTPCOnAll(TArray<struct FWwiseEmitter> Emitters, const struct FName& Name, float Value);
	bool WwiseEmitterSetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float Value);
	bool WwiseEmitterSetParams(const struct FWwiseEmitter& Emitter, const struct FWwiseEmitterParams& Params);
	bool WwiseEmitterSetLocation(const struct FWwiseEmitter& Emitter, const struct FVector& Location);
	TArray<int> WwiseEmitterPostEventOnAll(TArray<struct FWwiseEmitter> Emitters, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	int WwiseEmitterPostEvent(const struct FWwiseEmitter& Emitter, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	bool WwiseEmitterIsValid(const struct FWwiseEmitter& Emitter);
	bool WwiseEmitterIsPlaying(const struct FWwiseEmitter& Emitter, class UWwiseEvent* Event);
	bool WwiseEmitterGetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float* Value);
	void WwiseEmitterDestroy(struct FWwiseEmitter* Emitter);
	bool WwiseEmitterComponentSetRTPCOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, const struct FName& Name, float Value);
	bool WwiseEmitterComponentSetRTPC(class UWwiseEmitterComponent* EmitterComponent, const struct FName& Name, float Value);
	TArray<int> WwiseEmitterComponentPostEventOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	int WwiseEmitterComponentPostEvent(class UWwiseEmitterComponent* EmitterComponent, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	int WwiseCreateDetachedEmitter(const struct FName& Name, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Location, const struct FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<EEmitterRelationship> Relationship, const struct FVector& Forward, struct FWwiseEmitter* Emitter);
	bool SeekOnEvent(const struct FWwiseEmitter& WwiseEmitter, class UWwiseEvent* in_eventID, int in_iPosition, bool in_bSeekToNearestMarker, int in_PlayingID);
	bool GetPlaybackPosition(const struct FWwiseEmitter& WwiseEmitter, int in_PlayingID, int* PlaybackPositionInMs);
};


// Class RareAudio.AnimNotify_WwiseSound
// 0x0018 (0x0048 - 0x0030)
class UAnimNotify_WwiseSound : public UAnimNotify
{
public:
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      OwnedByWorld;                                             // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     OwnedByWorldWisePoolToUse;                                // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AnimNotify_WwiseSound")); }
		return ptr;
	}

};


// Class RareAudio.AnimNotifyState_WwiseSound
// 0x0060 (0x0088 - 0x0028)
class UAnimNotifyState_WwiseSound : public UAnimNotifyState
{
public:
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWwiseEvent*                                 WwiseEventEnd;                                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AnimNotifyState_WwiseSound")); }
		return ptr;
	}

};


// Class RareAudio.WwiseObjectPoolWrapper
// 0x0030 (0x0078 - 0x0048)
class UWwiseObjectPoolWrapper : public UObjectPoolWrapper
{
public:
	unsigned char                                      DisableOcclusion;                                         // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DisableReverb;                                            // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	struct FWwiseNativeEmitterPoolDensityParams        PoolDensityParams;                                        // 0x0050(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.WwiseObjectPoolWrapper")); }
		return ptr;
	}

};


// Class RareAudio.AudioEventToComponentMap
// 0x0008 (0x0470 - 0x0468)
class AAudioEventToComponentMap : public AActor
{
public:
	class UAudioEventToComponentMapComponent*          AudioEventToComponentMapComponent;                        // 0x0468(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AudioEventToComponentMap")); }
		return ptr;
	}


	void ClearMappings();
	void AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, class UWwiseEmitterComponent** WwiseEmitterComponent);
	void AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents);
};


// Class RareAudio.AudioEventToComponentMapComponent
// 0x0010 (0x00E0 - 0x00D0)
class UAudioEventToComponentMapComponent : public UActorComponent
{
public:
	TArray<struct FEventToComponentMapping>            LocalComponentMappings;                                   // 0x00D0(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AudioEventToComponentMapComponent")); }
		return ptr;
	}


	void ClearMappings();
	void AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, class UWwiseEmitterComponent** WwiseEmitterComponent);
	void AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents);
};


// Class RareAudio.StaticMeshAudioDataAsset
// 0x0010 (0x0038 - 0x0028)
class UStaticMeshAudioDataAsset : public UDataAsset
{
public:
	TArray<struct FStaticMeshAudioAssociation>         MeshToAudioAssociations;                                  // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.StaticMeshAudioDataAsset")); }
		return ptr;
	}

};


// Class RareAudio.AudioIslandStaticMeshAssociatorBase
// 0x0000 (0x0468 - 0x0468)
class AAudioIslandStaticMeshAssociatorBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AudioIslandStaticMeshAssociatorBase")); }
		return ptr;
	}

};


// Class RareAudio.AudioSpaceDataAsset
// 0x0018 (0x0040 - 0x0028)
class UAudioSpaceDataAsset : public UDataAsset
{
public:
	struct FName                                       RtpcToUpdate;                                             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWwiseEvent*                                 AmbienceToStart;                                          // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWwiseEvent*                                 AmbienceToStop;                                           // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AudioSpaceDataAsset")); }
		return ptr;
	}


	struct FName GetRtpcName();
};


// Class RareAudio.AudioPortalComponent
// 0x0030 (0x0310 - 0x02E0)
class UAudioPortalComponent : public USceneComponent
{
public:
	class UAudioSpaceDataAsset*                        AudioInsideSpace;                                         // 0x02E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioSpaceDataAsset*                        AudioOutsideSpace;                                        // 0x02E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PortalTriggerDistance;                                    // 0x02F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InsideRtpcUpdateDistance;                                 // 0x02F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutsideRtpcUpdateDistance;                                // 0x02F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TrackAttachmentToActor;                                   // 0x02FC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x02FD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AudioPortalComponent")); }
		return ptr;
	}


	void SetParentShip(class AActor* ParentShip);
};


// Class RareAudio.AudioPortalInterface
// 0x0000 (0x0028 - 0x0028)
class UAudioPortalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AudioPortalInterface")); }
		return ptr;
	}


	void UnregisterPortal(class UAudioPortalComponent* AudioPortal);
	void RegisterPortal(class UAudioPortalComponent* AudioPortal, class AActor* OwningActor);
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> GetAllRegisteredPortalsInSpecificSpace(class UAudioSpaceDataAsset* AudioSpace, class AActor* OwningActor);
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> GetAllRegisteredPortals();
};


// Class RareAudio.AudioPortalService
// 0x00B0 (0x00D8 - 0x0028)
class UAudioPortalService : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AudioPortalService")); }
		return ptr;
	}

};


// Class RareAudio.AudioSpaceComponent
// 0x0010 (0x06E0 - 0x06D0)
class UAudioSpaceComponent : public UStaticMeshComponent
{
public:
	class UAudioSpaceDataAsset*                        AudioSpace;                                               // 0x06D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AudioSpaceComponent")); }
		return ptr;
	}


	void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
};


// Class RareAudio.AudioSpaceTrackerComponent
// 0x0010 (0x00E0 - 0x00D0)
class UAudioSpaceTrackerComponent : public UActorComponent
{
public:
	TArray<class UAudioSpaceComponent*>                CurrentSpaces;                                            // 0x00D0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.AudioSpaceTrackerComponent")); }
		return ptr;
	}


	class UAudioSpaceDataAsset* GetCurrentSpace();
};


// Class RareAudio.RareAudioHardwareDeviceService
// 0x0020 (0x0230 - 0x0210)
class URareAudioHardwareDeviceService : public UAudioHardwareDeviceService
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0210(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.RareAudioHardwareDeviceService")); }
		return ptr;
	}

};


// Class RareAudio.StaticMeshAudioEmittersComponent
// 0x0010 (0x02F0 - 0x02E0)
class UStaticMeshAudioEmittersComponent : public USceneComponent
{
public:
	TArray<struct FStaticMeshComponentAudioAssociation> InstanceAssociations;                                     // 0x02E0(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.StaticMeshAudioEmittersComponent")); }
		return ptr;
	}


	void PopulateInstanceAssociations();
};


// Class RareAudio.TritonAcousticMap
// 0x0038 (0x0060 - 0x0028)
class UTritonAcousticMap : public UObject
{
public:
	struct FString                                     TritonMapFilename;                                        // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.TritonAcousticMap")); }
		return ptr;
	}

};


// Class RareAudio.TritonComponent
// 0x0010 (0x02F0 - 0x02E0)
class UTritonComponent : public USceneComponent
{
public:
	class UTritonAcousticMap*                          TritonMapAsset;                                           // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TritonEffectRadius;                                       // 0x02E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.TritonComponent")); }
		return ptr;
	}

};


// Class RareAudio.TritonInterface
// 0x0000 (0x0028 - 0x0028)
class UTritonInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.TritonInterface")); }
		return ptr;
	}

};


// Class RareAudio.TritonService
// 0x00A8 (0x00D0 - 0x0028)
class UTritonService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class UTritonComponent*>                    RegisteredTritonComponents;                               // 0x0038(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.TritonService")); }
		return ptr;
	}

};


// Class RareAudio.WwiseEmitterComponentBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWwiseEmitterComponentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.WwiseEmitterComponentBlueprintLibrary")); }
		return ptr;
	}


	bool GetNamedEmitter(const struct FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn, struct FWwiseEmitter* OutEmitter);
	bool GetClosestNEmitters(const struct FVector& InFromPosition, int InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn, TArray<struct FWwiseEmitter>* OutEmitters);
	bool GetClosestEmitter(const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn, struct FWwiseEmitter* OutEmitter);
};


// Class RareAudio.WwiseEmitterComponentBlueprintLibraryTestActor
// 0x0000 (0x0468 - 0x0468)
class AWwiseEmitterComponentBlueprintLibraryTestActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.WwiseEmitterComponentBlueprintLibraryTestActor")); }
		return ptr;
	}

};


// Class RareAudio.WwisePoolManager
// 0x0090 (0x00B8 - 0x0028)
class UWwisePoolManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareAudio.WwisePoolManager")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
