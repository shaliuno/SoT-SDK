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

// ScriptStruct ActionStateMachine.ActionStatePriorityRelationship
// 0x0010
struct FActionStatePriorityRelationship
{
	class UClass*                                      State;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EActionStatePriority>                  Priority;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.ActionStatePriorityList
// 0x0018
struct FActionStatePriorityList
{
	class UClass*                                      State;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FActionStatePriorityRelationship>    Entries;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ActionStateMachine.ActionStateConstructionInfo
// 0x0028
struct FActionStateConstructionInfo
{
	class UClass*                                      Id;                                                       // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UScriptStruct*                               Type;                                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.ActorActionStateConstructionInfo
// 0x0008 (0x0030 - 0x0028)
struct FActorActionStateConstructionInfo : public FActionStateConstructionInfo
{
	TWeakObjectPtr<class AActor>                       ActorOwner;                                               // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ActionStateMachine.ActionStateSerialisableData
// 0x0030
struct FActionStateSerialisableData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      Id;                                                       // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UScriptStruct*                               Type;                                                     // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.ActionStateChangeRequestId
// 0x0001
struct FActionStateChangeRequestId
{
	unsigned char                                      Raw;                                                      // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ActionStateMachine.SerialisedActionStateInfo
// 0x0030
struct FSerialisedActionStateInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.SerialisedConstructionInfoStore
// 0x00F0
struct FSerialisedConstructionInfoStore
{
	struct FSerialisedActionStateInfo                  SerialisedConstructionInfo[0x5];                          // 0x0000(0x0030)
};

// ScriptStruct ActionStateMachine.ResetStateMachineRpc
// 0x0100
struct FResetStateMachineRpc
{
	struct FActionStateChangeRequestId                 LatestEpochIds[0x5];                                      // 0x0000(0x0001)
	struct FActionStateChangeRequestId                 LatestRequestIds[0x5];                                    // 0x0005(0x0001)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FSerialisedConstructionInfoStore            PerTrackConstructionInfoStore;                            // 0x0010(0x00F0)
};

// ScriptStruct ActionStateMachine.TestActionStateSerialisableData
// 0x0008 (0x0038 - 0x0030)
struct FTestActionStateSerialisableData : public FActionStateSerialisableData
{
	int                                                IntProp;                                                  // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.ActionStatePriorityTable
// 0x00A0
struct FActionStatePriorityTable
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.InnerWithObjTestStruct
// 0x0008
struct FInnerWithObjTestStruct
{
	class UObject*                                     ObjPointer;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfoWithObjPointers
// 0x0020 (0x0048 - 0x0028)
struct FTestActionStateConstructionInfoWithObjPointers : public FActionStateConstructionInfo
{
	class UObject*                                     ObjPointer;                                               // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInnerWithObjTestStruct                     Inner;                                                    // 0x0030(0x0008)
	TArray<class UObject*>                             Array;                                                    // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct ActionStateMachine.InnerTestStruct
// 0x0018
struct FInnerTestStruct
{
	unsigned char                                      BoolProp;                                                 // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     StringProp;                                               // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfoWithInner
// 0x0020 (0x0048 - 0x0028)
struct FTestActionStateConstructionInfoWithInner : public FActionStateConstructionInfo
{
	float                                              FloatProp;                                                // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FInnerTestStruct                            InnerStruct;                                              // 0x0030(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfo
// 0x0008 (0x0030 - 0x0028)
struct FTestActionStateConstructionInfo : public FActionStateConstructionInfo
{
	int                                                IntProp;                                                  // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.NullActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FNullActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

};

// ScriptStruct ActionStateMachine.TestActorActionStateConstructionInfo
// 0x0008 (0x0038 - 0x0030)
struct FTestActorActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	int                                                IntProp;                                                  // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
