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

// Class StudiosAutomation.TestablePlayerController
// 0x0000 (0x0740 - 0x0740)
class ATestablePlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class StudiosAutomation.TestablePlayerController")); }
		return ptr;
	}


	void YieldToServer();
	void PerformPostTestCleanup();
	void DisconnectClientFromTest();
};


// Class StudiosAutomation.TestLevelScriptActor
// 0x00C0 (0x0530 - 0x0470)
class ATestLevelScriptActor : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET
	TEnumAsByte<ETestCategory>                         Category;                                                 // 0x0478(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETestArea>                             Area;                                                     // 0x0479(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      VisualTest;                                               // 0x047A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      RunInEditor;                                              // 0x047B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      RunOnServer;                                              // 0x047C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      RequiresServices;                                         // 0x047D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTestLevelMetadataEntry>             AdditionalMetadata;                                       // 0x0480(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TEnumAsByte<EPerformanceCaptureType>               CaptureType;                                              // 0x0490(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TestTimeout;                                              // 0x0494(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TestPausedTimeout;                                        // 0x0498(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	TArray<struct FString>                             VerboseLogCategories;                                     // 0x04A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<int>                                        ClientsRunning;                                           // 0x04B0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<int>                                        ClientIds;                                                // 0x04C0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<struct FClientPawnDetails>                  ClientPawns;                                              // 0x04D0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<class AActor*>                              SpawnedActors;                                            // 0x04E0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	int                                                NextSpawnedActorIndex;                                    // 0x04F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x04F4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class StudiosAutomation.TestLevelScriptActor")); }
		return ptr;
	}


	void YieldToServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void YieldToOriginalServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void YieldToDynamicServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ServerIndex);
	void YieldToClient(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ClientId);
	void WaitForPossessionAcknowledgement(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void WaitForOtherServers(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfServers);
	void WaitForClients(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfClients);
	void TestTriggerServerMigration(TArray<class AActor*> ActorGroup, int TargetServerIndex);
	void SyncClientServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings);
	class AActor* SpawnActorForMPTesting(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SendServerMigrationTestValueInt32(int TestValue);
	void RegisterPawnsForMPTesting(class UObject* WorldContextObject);
	void RegisterActorForMPTestingRecursively(class AActor* TargetActor);
	void RegisterActorForMPTesting(class AActor* TargetActor);
	void PostTestCleanup();
	void OnServerMigrationTestValueInt32Received(int TestValue);
	void OnOutgoingServerMigrationStarted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players);
	void OnOutgoingServerMigrationCompleted(const struct FGuid& MigrationId);
	void OnOutgoingServerMigrationAborted(const struct FGuid& MigrationId);
	void OnIncomingServerMigrationStarted(const struct FGuid& MigrationId, int NumPlayers);
	void OnIncomingServerMigrationCompleted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players, TArray<class AActor*> Actors);
	void OnIncomingServerMigrationAborted(const struct FGuid& MigrationId);
	void OnClientServerMigrationStarted(const struct FGuid& MigrationId);
	void OnClientServerMigrationCompleted(const struct FGuid& MigrationId);
	void OnClientServerMigrationAborted(const struct FGuid& MigrationId);
	int GetServerIndex(class UObject* WorldContextObject);
	struct FString GetRemoteServerMigrationURL(int TargetServerIndex);
	int GetPlayerIndexFromClientId(int ClientId);
	int GetNumClientsForMultiplayerTest();
	int GetNumAutomationClients();
	class APawn* GetClientPawn(int ClientId, int SplitScreenIndex);
	int GetClientId(bool ErrorOnFailure);
	void DoServerPostTestCleanup();
	void ClearPawnInputBindings(class UObject* WorldContextObject);
	void AddServer(const struct FString& Name);
	void AddClient(int Port, const struct FString& Name);
};


// Class StudiosAutomation.ActorThatLogsErrorWhenTicked
// 0x0000 (0x0468 - 0x0468)
class AActorThatLogsErrorWhenTicked : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class StudiosAutomation.ActorThatLogsErrorWhenTicked")); }
		return ptr;
	}

};


// Class StudiosAutomation.AutomationBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAutomationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class StudiosAutomation.AutomationBlueprintFunctionLibrary")); }
		return ptr;
	}


	void TestFinished(class UObject* ContextObject);
	void TestFailed(const struct FString& Message, class UObject* ContextObject);
	void TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const struct FString& NameOverride, float DelayBeforeScreenshotSeconds);
	void TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& Name);
	void StepStarted(const struct FString& StepName);
	void StepFinished();
	void SetTestTimeoutAsFatal(bool TimeoutIsFatal);
	void OpenLevelWithGameMode(class UObject* WorldContextObject, const struct FName& LevelName, class UClass* GameMode, bool Absolute);
	bool IsTravelFinished(class UObject* WorldContextObject);
	bool IsEditor();
	bool HasPerformanceDataBeenCaptured();
	class ATestLevelScriptActor* GetTestLevelScriptActor(bool ErrorOnFailure);
	int GetPlayerId(class APlayerState* State);
	struct FString GetLevelUrl(class UObject* WorldContextObject);
	struct FString GetCurrentMapTestName();
	void EndPerformanceCapture(bool DumpMemReport);
	void DumpFullMemReport();
	void DelayForFramesWithDesc(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames, const struct FString& Description);
	void DelayForFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames);
	void BeginPerformanceCapture(const struct FString& FolderName, bool DumpMemReport, bool PreventGarbageCollection);
	void AssertValue_Int(int Actual, TEnumAsByte<EComparisonMethod> ShouldBe, int Expected, const struct FString& What, class UObject* ContextObject);
	void AssertValue_Float(float Actual, TEnumAsByte<EComparisonMethod> ShouldBe, float Expected, const struct FString& What, class UObject* ContextObject);
	void AssertValue_DateTime(const struct FDateTime& Actual, TEnumAsByte<EComparisonMethod> ShouldBe, const struct FDateTime& Expected, const struct FString& What, class UObject* ContextObject);
	void AssertTrue(bool Condition, const struct FString& Message, class UObject* ContextObject);
	void AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const struct FString& What, class UObject* ContextObject);
	void AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const struct FString& What, class UObject* ContextObject);
	void AssertNotEqual_String(const struct FString& Actual, const struct FString& NotExpected, const struct FString& What, class UObject* ContextObject);
	void AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const struct FString& What, class UObject* ContextObject);
	void AssertIsValid(class UObject* Object, const struct FString& Message, class UObject* ContextObject);
	void AssertIsNotValid(class UObject* Object, const struct FString& Message, class UObject* ContextObject);
	void AssertFalse(bool Condition, const struct FString& Message, class UObject* ContextObject);
	void AssertErrorOccurred(const struct FString& ErrorMessage);
	void AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject);
	void AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject);
	void AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const struct FString& What, class UObject* ContextObject);
	void AssertEqual_String(const struct FString& Actual, const struct FString& Expected, const struct FString& What, class UObject* ContextObject);
	void AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const struct FString& What, class UObject* ContextObject);
	void AssertEqual_Float(float Actual, float Expected, const struct FString& What, float Tolerance, class UObject* ContextObject);
	void AddExpectedError(const struct FString& ErrorMessage);
};


// Class StudiosAutomation.AutomationLatentActionCallback
// 0x0038 (0x0060 - 0x0028)
class UAutomationLatentActionCallback : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class StudiosAutomation.AutomationLatentActionCallback")); }
		return ptr;
	}


	void LatentCallback(int Linkage);
};


// Class StudiosAutomation.BPNamedObjectMock
// 0x0000 (0x0028 - 0x0028)
class UBPNamedObjectMock : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class StudiosAutomation.BPNamedObjectMock")); }
		return ptr;
	}

};


// Class StudiosAutomation.MapFixtureTestGameMode
// 0x0000 (0x0550 - 0x0550)
class AMapFixtureTestGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class StudiosAutomation.MapFixtureTestGameMode")); }
		return ptr;
	}

};


// Class StudiosAutomation.TestUObject
// 0x0000 (0x0028 - 0x0028)
class UTestUObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class StudiosAutomation.TestUObject")); }
		return ptr;
	}

};


// Class StudiosAutomation.OtherTestUObject
// 0x0000 (0x0028 - 0x0028)
class UOtherTestUObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class StudiosAutomation.OtherTestUObject")); }
		return ptr;
	}

};


// Class StudiosAutomation.RunUnitTestsCommandlet
// 0x0000 (0x0080 - 0x0080)
class URunUnitTestsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class StudiosAutomation.RunUnitTestsCommandlet")); }
		return ptr;
	}

};


// Class StudiosAutomation.TestAbstractActor
// 0x0000 (0x0468 - 0x0468)
class ATestAbstractActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class StudiosAutomation.TestAbstractActor")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
