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

// Class ServerMigration.MigrationControlChannel
// 0x0040 (0x00A8 - 0x0068)
class UMigrationControlChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.MigrationControlChannel")); }
		return ptr;
	}

};


// Class ServerMigration.NetworkTestingBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNetworkTestingBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.NetworkTestingBlueprintFunctionLibrary")); }
		return ptr;
	}


	void SetConnectionLastReceiveTime(class APlayerController* PlayerController, float OffsetFromDriverTime);
	void ResumePropertyTracking(class AActor* TargetActor);
	void PausePropertyTrackingOnNextSend(class AActor* TargetActor);
	bool IsActorNetRelevantFor(class AActor* TargetActor, class APlayerController* PlayerController);
	int GetReliableBufferBunchCount(class AActor* TargetActor);
	void ClearRecentRelevanceTimerForPlayer(class AActor* TargetActor, class APlayerController* PlayerController);
	void ClearRecentRelevanceTimer(class AActor* TargetActor);
};


// Class ServerMigration.ServerMigrationBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UServerMigrationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationBlueprintFunctionLibrary")); }
		return ptr;
	}


	void WaitWhileMigrationInProgress(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void WaitForPendingNetTraffic(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor);
	void WaitForMigrationCompletedEvent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void WaitForClientsToHaveActorChannel(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor);
	TArray<unsigned char> TestSerialiseActorToBuffer(class AActor* TargetActor);
	TArray<unsigned char> TestSerialiseActorGroupToBuffer(TArray<class AActor*> ActorGroup);
	class AActor* TestDeserialiseActorWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset);
	TArray<class AActor*> TestDeserialiseActorGroupWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset);
	TArray<class AActor*> TestDeserialiseActorGroupFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer);
	class AActor* TestDeserialiseActorFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer);
	void SetServerMigrationTestServerSettings(class UObject* WorldContextObject, const struct FServerSettings& Settings);
	void SetServerMigrationTestClientSettings(class UObject* WorldContextObject, const struct FClientSettings& Settings);
	void SetPacketSimulationSettings(class UObject* WorldContextObject, int PacketLag, int PacketLagVariance, int PacketLoss);
	void ResumeReplication(class AActor* TargetActor);
	void RegisterPersistentDynamicActor(class AActor* TargetActor, const struct FString& IdentificationName);
	void PauseReplication(class AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused);
	bool HasActorChannelFromServer(class AActor* TargetActor);
	bool ClientsHaveDormantActor(class AActor* TargetActor);
	bool ClientsHaveActorChannel(class AActor* TargetActor);
};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorRef
// 0x0008 (0x0030 - 0x0028)
class UServerMigrationSerialisationDetailsTestsActorRef : public UObject
{
public:
	class AActor*                                      ActorReferenceWithMigrationMarkup;                        // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorRef")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay
// 0x0008 (0x0470 - 0x0468)
class AServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay : public AActor
{
public:
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // 0x0468(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithChild
// 0x0008 (0x0470 - 0x0468)
class AServerMigrationSerialisationDetailsTestsActorWithChild : public AActor
{
public:
	class UChildActorComponent*                        ChildActorComponent;                                      // 0x0468(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithChild")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr
// 0x0018 (0x0480 - 0x0468)
class AServerMigrationSerialisationDetailsTestsActorWithNetActorPtr : public AActor
{
public:
	struct FNetActorPtr                                ActorPtr;                                                 // 0x0468(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x047C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId
// 0x0010 (0x0478 - 0x0468)
class AServerMigrationSerialisationDetailsTestsActorWithUniqueNetId : public AActor
{
public:
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0468(0x0010)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponent
// 0x0008 (0x00D8 - 0x00D0)
class UServerMigrationSerialisationDetailsTestsMigratableComponent : public UActorComponent
{
public:
	float                                              FloatWithMigrationMarkup;                                 // 0x00D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                IntWithNoMarkup;                                          // 0x00D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponent")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponentActor
// 0x0008 (0x0470 - 0x0468)
class AServerMigrationSerialisationDetailsTestsMigratableComponentActor : public AActor
{
public:
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                             // 0x0468(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponentActor")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor
// 0x0008 (0x0470 - 0x0468)
class AServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor : public AActor
{
public:
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                             // 0x0468(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor
// 0x0008 (0x0470 - 0x0468)
class AServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor
// 0x0008 (0x0470 - 0x0468)
class AServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor : public AActor
{
public:
	class UChildActorComponent*                        Component;                                                // 0x0468(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor
// 0x0008 (0x0470 - 0x0468)
class AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor : public AActor
{
public:
	struct FServerMigrationCustomMigrationSerialisationStruct TestStruct;                                               // 0x0468(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor
// 0x0008 (0x0470 - 0x0468)
class AServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor : public AActor
{
public:
	class AActor*                                      DependentActor;                                           // 0x0468(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationReferenceActor
// 0x0010 (0x0478 - 0x0468)
class AServerMigrationSerialisationDetailsTestsMigrationReferenceActor : public AActor
{
public:
	class AActor*                                      ActorReferenceWithMigrationMarkup;                        // 0x0468(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationReferenceActor")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsPropertyMarkup
// 0x0020 (0x0048 - 0x0028)
class UServerMigrationSerialisationDetailsTestsPropertyMarkup : public UObject
{
public:
	int                                                Int32NoMarkup;                                            // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BoolWithMigrationMarkup;                                  // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     StringWithSaveGameMarkup;                                 // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_SaveGame)
	float                                              FloatWithMigrationAndReplicationMarkup;                   // 0x0040(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsPropertyMarkup")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsTArrayProperty
// 0x0010 (0x0038 - 0x0028)
class UServerMigrationSerialisationDetailsTestsTArrayProperty : public UObject
{
public:
	TArray<int>                                        IntegerArrayWithMigrationMarkup;                          // 0x0028(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsTArrayProperty")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSerialisationDetailsTestsUStructProperty
// 0x0010 (0x0038 - 0x0028)
class UServerMigrationSerialisationDetailsTestsUStructProperty : public UObject
{
public:
	struct FServerMigrationSerialisationDetailsTestsUStruct SubStructWithMigrationMarkup;                             // 0x0028(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSerialisationDetailsTestsUStructProperty")); }
		return ptr;
	}

};


// Class ServerMigration.ServerMigrationSettings
// 0x0048 (0x0070 - 0x0028)
class UServerMigrationSettings : public UObject
{
public:
	int                                                MaxSimultaneousMigrations;                                // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     TransportImplementation;                                  // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	int                                                ServerDefaultListenPort;                                  // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                ServerListenPortRangeSize;                                // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                AutomationServerDefaultListenPort;                        // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     InstanceImplementation;                                   // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              MigrationConnectionTimeoutSeconds;                        // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              WaitForClientActorRemappingTimeoutLength;                 // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              WaitForTransferOwnershipAcknowledgementTimeoutLength;     // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DeserialisationTimeSliceLength;                           // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerMigration.ServerMigrationSettings")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
