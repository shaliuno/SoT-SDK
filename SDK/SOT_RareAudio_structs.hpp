#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RareAudio.WwiseEmitter
// 0x0018
struct FWwiseEmitter
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct RareAudio.WwiseNativeEmitterPoolDensityParams
// 0x0028
struct FWwiseNativeEmitterPoolDensityParams
{
	unsigned char                                      PlayPoolDensityAudio;                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 PoolDensityAudioPlayEvent;                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWwiseEvent*                                 PoolDensityAudioStopEvent;                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DensityRtpcName;                                          // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FullDensityAmount;                                        // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DensityDistance;                                          // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct RareAudio.EventToComponentMapping
// 0x0020
struct FEventToComponentMapping
{
	class UWwiseEvent*                                 PlayEvent;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct RareAudio.StaticMeshWwiseEmitterData
// 0x0038
struct FStaticMeshWwiseEmitterData
{
	class UWwiseObjectPoolWrapper*                     Pool;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LocalOriginOffset;                                        // 0x0008(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<class UWwiseEvent*>                         StartEvents;                                              // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UWwiseEvent*>                         StopEvents;                                               // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct RareAudio.StaticMeshAudioAssociation
// 0x0020
struct FStaticMeshAudioAssociation
{
	TArray<struct FStaticMeshWwiseEmitterData>         PlaybackDataArray;                                        // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UStaticMesh*>                         Meshes;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct RareAudio.StaticMeshComponentAudioAssociation
// 0x0060
struct FStaticMeshComponentAudioAssociation
{
	struct FStaticMeshWwiseEmitterData                 PlaybackData;                                             // 0x0000(0x0038) (CPF_Edit)
	struct FVector                                     EmitterPositionRelativeToComponentOrigin;                 // 0x0038(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0044(0x001C) MISSED OFFSET
};

// ScriptStruct RareAudio.WwiseEmitterCreationParams
// 0x0028
struct FWwiseEmitterCreationParams
{
	class UWwiseEvent*                                 Event;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RTPCName;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RTPCValue;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SwitchGroup;                                              // 0x0014(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SwitchValue;                                              // 0x001C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
