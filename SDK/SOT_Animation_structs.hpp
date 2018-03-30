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

// ScriptStruct Animation.EmptyStructForAnimationDataDuplicateStructTest
// 0x0001
struct FEmptyStructForAnimationDataDuplicateStructTest
{

};

// ScriptStruct Animation.AnimationDataStoreEntry
// 0x0010
struct FAnimationDataStoreEntry
{
	class UClass*                                      AnimDataId;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UAnimationData*                              AnimData;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Animation.AnimationDataStoreAssetEntry
// 0x0010
struct FAnimationDataStoreAssetEntry
{
	class UClass*                                      AnimDataId;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      AnimDataType;                                             // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Animation.AnimDataEntryStructWrapper
// 0x0010
struct FAnimDataEntryStructWrapper
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Animation.DockableInfo
// 0x0010
struct FDockableInfo
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             SceneComponent;                                           // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct Animation.Docker
// 0x0040
struct FDocker
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Animation.LimbIK
// 0x0060
struct FLimbIK
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Animation.ActorVelocityData
// 0x0018
struct FActorVelocityData
{
	struct FVector                                     ActorsVelocityVector;                                     // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ActorSpeed;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsCharacterMoving;                                        // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WantedMovementSpeed;                                      // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Animation.EventDockableObjectDestroyed
// 0x0001
struct FEventDockableObjectDestroyed
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
