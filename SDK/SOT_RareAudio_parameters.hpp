#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
struct UWwiseEmitterBlueprintLibrary_WwiseSetState_Params
{
	struct FName                                       StateGroup;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FName                                       StateValue;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseSetGlobalRTPC_Params
{
	struct FName                                       RTPCName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              RTPCValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
struct UWwiseEmitterBlueprintLibrary_WwisePostGlobalEvent_Params
{
	class UWwiseEvent*                                 Event;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation
struct UWwiseEmitterBlueprintLibrary_WwisePostEventAtLocation_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_Parm, CPF_OutParm) 0000
	class UWwiseEvent*                                 Event;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FVector                                     Front;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0044
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerInfo_Params
{
	struct FWwiseListenerInfo                          InfoOut;                                                  // (CPF_Parm, CPF_OutParm) 0000
	int                                                Viewport;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 003C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_Parm, CPF_OutParm) 0000
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	int                                                ListenerIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FName                                       Name;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	struct FVector                                     Offset;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
	bool                                               bFollowOrientaion;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0040
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0048
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseGetEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_Parm, CPF_OutParm) 0000
	struct FName                                       Name;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class UObject*                                     Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	struct FVector                                     Offset;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 003C
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterWaitToComplete_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	int                                                PlayId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0028
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0040
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterStop_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	int                                                PlayId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              FadeTime;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPCOnAll_Params
{
	TArray<struct FWwiseEmitter>                       Emitters;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0000
	struct FName                                       Name;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 001C
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPC_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FName                                       Name;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0024
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetParams_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FWwiseEmitterParams                         Params;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 001A
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetLocation_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FVector                                     Location;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0018
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0024
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEventOnAll_Params
{
	TArray<struct FWwiseEmitter>                       Emitters;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0000
	class UWwiseEvent*                                 WwiseEvent;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FName                                       SourcePath;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	struct FName                                       SourceObj;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	TArray<int>                                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0030
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEvent_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UWwiseEvent*                                 WwiseEvent;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FName                                       SourcePath;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	struct FName                                       SourceObj;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 002C
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0034
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsValid_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsPlaying_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UWwiseEvent*                                 Event;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterGetRTPC_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FName                                       Name;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              Value;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0024
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterDestroy_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPCOnAll_Params
{
	TArray<class UWwiseEmitterComponent*>              EmitterComponents;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0000
	struct FName                                       Name;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 001C
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPC_Params
{
	class UWwiseEmitterComponent*                      EmitterComponent;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	struct FName                                       Name;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEventOnAll_Params
{
	TArray<class UWwiseEmitterComponent*>              EmitterComponents;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0000
	class UWwiseEvent*                                 WwiseEvent;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FName                                       SourcePath;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	struct FName                                       SourceObj;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	TArray<int>                                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0030
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEvent_Params
{
	class UWwiseEmitterComponent*                      EmitterComponent;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	class UWwiseEvent*                                 WwiseEvent;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FName                                       SourcePath;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FName                                       SourceObj;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0024
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseCreateDetachedEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (CPF_Parm, CPF_OutParm) 0000
	struct FName                                       Name;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	struct FWwiseEmitterCreationParams                 CreationParams;                                           // (CPF_Parm) 0038
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	struct FVector                                     Forward;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0064
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0070
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent
struct UWwiseEmitterBlueprintLibrary_SeekOnEvent_Params
{
	struct FWwiseEmitter                               WwiseEmitter;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UWwiseEvent*                                 in_eventID;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	int                                                in_iPosition;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	bool                                               in_bSeekToNearestMarker;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	int                                                in_PlayingID;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 002C
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition
struct UWwiseEmitterBlueprintLibrary_GetPlaybackPosition_Params
{
	struct FWwiseEmitter                               WwiseEmitter;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	int                                                in_PlayingID;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	int                                                PlaybackPositionInMs;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function RareAudio.AudioEventToComponentMap.ClearMappings
struct AAudioEventToComponentMap_ClearMappings_Params
{
};

// Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent
struct AAudioEventToComponentMap_AddMappingWithSingleEmitterComponent_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UWwiseEvent*                                 StopEvent;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UWwiseEmitterComponent*                      WwiseEmitterComponent;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function RareAudio.AudioEventToComponentMap.AddMapping
struct AAudioEventToComponentMap_AddMapping_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UWwiseEvent*                                 StopEvent;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function RareAudio.AudioEventToComponentMapComponent.ClearMappings
struct UAudioEventToComponentMapComponent_ClearMappings_Params
{
};

// Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent
struct UAudioEventToComponentMapComponent_AddMappingWithSingleEmitterComponent_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UWwiseEvent*                                 StopEvent;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UWwiseEmitterComponent*                      WwiseEmitterComponent;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function RareAudio.AudioEventToComponentMapComponent.AddMapping
struct UAudioEventToComponentMapComponent_AddMapping_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UWwiseEvent*                                 StopEvent;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function RareAudio.AudioSpaceDataAsset.GetRtpcName
struct UAudioSpaceDataAsset_GetRtpcName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function RareAudio.AudioPortalComponent.SetParentShip
struct UAudioPortalComponent_SetParentShip_Params
{
	class AActor*                                      ParentShip;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function RareAudio.AudioPortalInterface.UnregisterPortal
struct UAudioPortalInterface_UnregisterPortal_Params
{
	class UAudioPortalComponent*                       AudioPortal;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function RareAudio.AudioPortalInterface.RegisterPortal
struct UAudioPortalInterface_RegisterPortal_Params
{
	class UAudioPortalComponent*                       AudioPortal;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	class AActor*                                      OwningActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
struct UAudioPortalInterface_GetAllRegisteredPortalsInSpecificSpace_Params
{
	class UAudioSpaceDataAsset*                        AudioSpace;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class AActor*                                      OwningActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;                                              // (CPF_ConstParm, CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0010
};

// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals
struct UAudioPortalInterface_GetAllRegisteredPortals_Params
{
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;                                              // (CPF_ConstParm, CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function RareAudio.AudioSpaceComponent.OnOverlapEnd
struct UAudioSpaceComponent_OnOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function RareAudio.AudioSpaceComponent.OnOverlapBegin
struct UAudioSpaceComponent_OnOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               FromSweep;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0018
};

// Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
struct UAudioSpaceTrackerComponent_GetCurrentSpace_Params
{
	class UAudioSpaceDataAsset*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
struct UStaticMeshAudioEmittersComponent_PopulateInstanceAssociations_Params
{
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
struct UWwiseEmitterComponentBlueprintLibrary_GetNamedEmitter_Params
{
	struct FWwiseEmitter                               OutEmitter;                                               // (CPF_Parm, CPF_OutParm) 0000
	struct FName                                       InNameOfEmitterToRetrieve;                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class AActor*                                      InActorToFindEmitterOn;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0028
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters
struct UWwiseEmitterComponentBlueprintLibrary_GetClosestNEmitters_Params
{
	TArray<struct FWwiseEmitter>                       OutEmitters;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0000
	struct FVector                                     InFromPosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
	int                                                InNumEmittersToFind;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	class AActor*                                      InActorToFindClosestEmitterOn;                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0028
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter
struct UWwiseEmitterComponentBlueprintLibrary_GetClosestEmitter_Params
{
	struct FWwiseEmitter                               OutEmitter;                                               // (CPF_Parm, CPF_OutParm) 0000
	struct FVector                                     InFromPosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0018
	class AActor*                                      InActorToFindClosestEmitterOn;                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
