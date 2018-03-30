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

// Class ActionStateMachine.ActionStateId
// 0x0000 (0x0028 - 0x0028)
class UActionStateId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.ActionStateId")); }
		return ptr;
	}

};


// Class ActionStateMachine.ActionStateCreatorDefinition
// 0x0000 (0x0468 - 0x0468)
class AActionStateCreatorDefinition : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.ActionStateCreatorDefinition")); }
		return ptr;
	}

};


// Class ActionStateMachine.TestActionStateCreatorDefinition
// 0x0010 (0x0478 - 0x0468)
class ATestActionStateCreatorDefinition : public AActionStateCreatorDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0468(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.TestActionStateCreatorDefinition")); }
		return ptr;
	}

};


// Class ActionStateMachine.CustomClientValidityActionState2Id
// 0x0000 (0x0028 - 0x0028)
class UCustomClientValidityActionState2Id : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.CustomClientValidityActionState2Id")); }
		return ptr;
	}

};


// Class ActionStateMachine.CustomClientValidityActionStateId
// 0x0000 (0x0028 - 0x0028)
class UCustomClientValidityActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.CustomClientValidityActionStateId")); }
		return ptr;
	}

};


// Class ActionStateMachine.NullActionStateId
// 0x0000 (0x0028 - 0x0028)
class UNullActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.NullActionStateId")); }
		return ptr;
	}

};


// Class ActionStateMachine.TestActionStateId
// 0x0000 (0x0028 - 0x0028)
class UTestActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.TestActionStateId")); }
		return ptr;
	}

};


// Class ActionStateMachine.TestActionStateId2
// 0x0000 (0x0028 - 0x0028)
class UTestActionStateId2 : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.TestActionStateId2")); }
		return ptr;
	}

};


// Class ActionStateMachine.ActionStateMachineComponent
// 0x05D8 (0x06A8 - 0x00D0)
class UActionStateMachineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00D0(0x0048) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActionChangedOnTrack;                                   // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x580];                                     // 0x0128(0x0580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.ActionStateMachineComponent")); }
		return ptr;
	}


	void Server_RequestAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, TEnumAsByte<EActionPredictionType> ClientPredicted);
	void PostNetInit();
	void OnNetOwnershipChanged();
	void Multicast_UpdateEpoch(TEnumAsByte<EActionStateMachineTrackId> InTrackId, const struct FActionStateChangeRequestId& InEpochId);
	void Multicast_PushSerialisableData(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo);
	void Multicast_PushActionFromRequest(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
	void Multicast_PushAction(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
	void End();
	void Client_ResetStateMachine(const struct FResetStateMachineRpc& Rpc);
	void Client_CorrectAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
};


// Class ActionStateMachine.TestActionStateMachineComponent
// 0x0018 (0x06C0 - 0x06A8)
class UTestActionStateMachineComponent : public UActionStateMachineComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x06A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.TestActionStateMachineComponent")); }
		return ptr;
	}

};


// Class ActionStateMachine.CustomClientValidityCheckCallback
// 0x0008 (0x0030 - 0x0028)
class UCustomClientValidityCheckCallback : public UObject
{
public:
	unsigned char                                      ShouldPassClientValidation;                               // 0x0028(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.CustomClientValidityCheckCallback")); }
		return ptr;
	}

};


// Class ActionStateMachine.ActionStateMachineComponentTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UActionStateMachineComponentTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.ActionStateMachineComponentTestFunctions")); }
		return ptr;
	}


	bool SetTestStateValidatorThatAlwaysPassesExceptForId(class UActionStateMachineComponent* InComponent, class UClass* StateId);
	bool SetTestStateValidatorThatAlwaysPasses(class UActionStateMachineComponent* InComponent);
	bool SetTestStateValidatorThatAlwaysFails(class UActionStateMachineComponent* InComponent);
	bool SetTestStateFactoryChangeToNullOnUpdate(class UActionStateMachineComponent* InComponent);
	bool SetTestStateFactory(class UActionStateMachineComponent* InComponent);
	bool SetCustomClientValidationTestStateFactory(class UActionStateMachineComponent* InComponent, class UCustomClientValidityCheckCallback* InCallback);
	bool RequestUnpredictedTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* ClientStateId, class UClass* ServerStateId);
	bool RequestTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId);
	bool RequestNullActionStateOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId);
	void PushTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId, int DataValue);
	bool IsActionStateTypeActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId);
	class UClass* GetTypeOfActionStateActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId);
	bool GetTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, struct FTestActionStateSerialisableData* Data);
	class UCustomClientValidityCheckCallback* CreateCustomClientValidityCheckCallback();
};


// Class ActionStateMachine.ActionStateMachineInterface
// 0x0000 (0x0028 - 0x0028)
class UActionStateMachineInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.ActionStateMachineInterface")); }
		return ptr;
	}

};


// Class ActionStateMachine.ActionStatePriorityTableData
// 0x0020 (0x0048 - 0x0028)
class UActionStatePriorityTableData : public UDataAsset
{
public:
	TArray<struct FActionStatePriorityRelationship>    StateDefaultValue;                                        // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FActionStatePriorityList>            PriorityTableEntry;                                       // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.ActionStatePriorityTableData")); }
		return ptr;
	}

};


// Class ActionStateMachine.ActionStatePriorityTableUtility
// 0x0000 (0x0028 - 0x0028)
class UActionStatePriorityTableUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.ActionStatePriorityTableUtility")); }
		return ptr;
	}


	TEnumAsByte<EActionStatePriority> GetPriority(class UClass* InStateA, class UClass* InStateB, struct FActionStatePriorityTable* PriorityTable);
	struct FActionStatePriorityTable CreatePriorityTable(class UActionStatePriorityTableData* Data);
};


// Class ActionStateMachine.MockActionStateMachineComponent
// 0x0028 (0x00F8 - 0x00D0)
class UMockActionStateMachineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET
	TArray<class UClass*>                              ActiveActionStateIds;                                     // 0x00E8(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.MockActionStateMachineComponent")); }
		return ptr;
	}

};


// Class ActionStateMachine.RemoteValidationFailActionStateActor
// 0x0008 (0x0470 - 0x0468)
class ARemoteValidationFailActionStateActor : public AActor
{
public:
	class UActionStateMachineComponent*                ActionStateMachineComponent;                              // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.RemoteValidationFailActionStateActor")); }
		return ptr;
	}

};


// Class ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions
// 0x0000 (0x0028 - 0x0028)
class USerialisedActionStateConstructionInfoTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions")); }
		return ptr;
	}


	bool IsValid(const struct FSerialisedActionStateInfo& TestStruct);
	bool HasTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct);
	bool HasTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct);
	struct FTestActionStateConstructionInfoWithInner GetTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct);
	struct FTestActionStateConstructionInfo GetTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct);
	struct FSerialisedActionStateInfo CreateTestSerialisableData(class UClass* Id, int IntProp);
	struct FSerialisedActionStateInfo CreateTestConstructionInfoWithInner(class UClass* Id, float FloatProp, bool BoolProp, const struct FString& StringProp);
	struct FSerialisedActionStateInfo CreateTestConstructionInfo(class UClass* Id, int IntProp);
};


// Class ActionStateMachine.TestObjectWithActionStateMachine
// 0x0018 (0x0480 - 0x0468)
class ATestObjectWithActionStateMachine : public AActor
{
public:
	class UTestActionStateMachineComponent*            ActionStateMachineComponent;                              // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ActionStateMachine.TestObjectWithActionStateMachine")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
