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

// Function StudiosAutomation.TestablePlayerController.YieldToServer
struct ATestablePlayerController_YieldToServer_Params
{
};

// Function StudiosAutomation.TestablePlayerController.PerformPostTestCleanup
struct ATestablePlayerController_PerformPostTestCleanup_Params
{
};

// Function StudiosAutomation.TestablePlayerController.DisconnectClientFromTest
struct ATestablePlayerController_DisconnectClientFromTest_Params
{
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToServer
struct ATestLevelScriptActor_YieldToServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
struct ATestLevelScriptActor_YieldToOriginalServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
struct ATestLevelScriptActor_YieldToDynamicServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	int                                                ServerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToClient
struct ATestLevelScriptActor_YieldToClient_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	int                                                ClientId;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
struct ATestLevelScriptActor_WaitForPossessionAcknowledgement_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
struct ATestLevelScriptActor_WaitForOtherServers_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	int                                                NumberOfServers;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForClients
struct ATestLevelScriptActor_WaitForClients_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	int                                                NumberOfClients;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
struct ATestLevelScriptActor_TestTriggerServerMigration_Params
{
	TArray<class AActor*>                              ActorGroup;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	int                                                TargetServerIndex;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
struct ATestLevelScriptActor_SyncClientServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	int                                                NumClients;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	bool                                               RegisterPawnsForMPTesting;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	bool                                               ClearPawnInputBindings;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0025
};

// Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting
struct ATestLevelScriptActor_SpawnActorForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ActorClass;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FRotator                                    SpawnRotation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0028
};

// Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32
struct ATestLevelScriptActor_SendServerMigrationTestValueInt32_Params
{
	int                                                TestValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
struct ATestLevelScriptActor_RegisterPawnsForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
struct ATestLevelScriptActor_RegisterActorForMPTestingRecursively_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
struct ATestLevelScriptActor_RegisterActorForMPTesting_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup
struct ATestLevelScriptActor_PostTestCleanup_Params
{
};

// Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received
struct ATestLevelScriptActor_OnServerMigrationTestValueInt32Received_Params
{
	int                                                TestValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted
struct ATestLevelScriptActor_OnOutgoingServerMigrationStarted_Params
{
	struct FGuid                                       MigrationId;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class APlayerController*>                   Players;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
struct ATestLevelScriptActor_OnOutgoingServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
struct ATestLevelScriptActor_OnOutgoingServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
struct ATestLevelScriptActor_OnIncomingServerMigrationStarted_Params
{
	struct FGuid                                       MigrationId;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                NumPlayers;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
struct ATestLevelScriptActor_OnIncomingServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class APlayerController*>                   Players;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	TArray<class AActor*>                              Actors;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0020
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
struct ATestLevelScriptActor_OnIncomingServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
struct ATestLevelScriptActor_OnClientServerMigrationStarted_Params
{
	struct FGuid                                       MigrationId;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
struct ATestLevelScriptActor_OnClientServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
struct ATestLevelScriptActor_OnClientServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
struct ATestLevelScriptActor_GetServerIndex_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
struct ATestLevelScriptActor_GetRemoteServerMigrationURL_Params
{
	int                                                TargetServerIndex;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId
struct ATestLevelScriptActor_GetPlayerIndexFromClientId_Params
{
	int                                                ClientId;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest
struct ATestLevelScriptActor_GetNumClientsForMultiplayerTest_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients
struct ATestLevelScriptActor_GetNumAutomationClients_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.GetClientPawn
struct ATestLevelScriptActor_GetClientPawn_Params
{
	int                                                ClientId;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                SplitScreenIndex;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function StudiosAutomation.TestLevelScriptActor.GetClientId
struct ATestLevelScriptActor_GetClientId_Params
{
	bool                                               ErrorOnFailure;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup
struct ATestLevelScriptActor_DoServerPostTestCleanup_Params
{
};

// Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings
struct ATestLevelScriptActor_ClearPawnInputBindings_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.AddServer
struct ATestLevelScriptActor_AddServer_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function StudiosAutomation.TestLevelScriptActor.AddClient
struct ATestLevelScriptActor_AddClient_Params
{
	int                                                Port;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0008
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
struct UAutomationBlueprintFunctionLibrary_TestFinished_Params
{
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
struct UAutomationBlueprintFunctionLibrary_TestFailed_Params
{
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0000
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	class ACameraActor*                                Camera;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FString                                     NameOverride;                                             // (CPF_Parm, CPF_ZeroConstructor) 0028
	float                                              DelayBeforeScreenshotSeconds;                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0020
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
struct UAutomationBlueprintFunctionLibrary_StepStarted_Params
{
	struct FString                                     StepName;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished
struct UAutomationBlueprintFunctionLibrary_StepFinished_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal
struct UAutomationBlueprintFunctionLibrary_SetTestTimeoutAsFatal_Params
{
	bool                                               TimeoutIsFatal;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
struct UAutomationBlueprintFunctionLibrary_OpenLevelWithGameMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FName                                       LevelName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UClass*                                      GameMode;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               Absolute;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
struct UAutomationBlueprintFunctionLibrary_IsTravelFinished_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor
struct UAutomationBlueprintFunctionLibrary_IsEditor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured
struct UAutomationBlueprintFunctionLibrary_HasPerformanceDataBeenCaptured_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor
struct UAutomationBlueprintFunctionLibrary_GetTestLevelScriptActor_Params
{
	bool                                               ErrorOnFailure;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class ATestLevelScriptActor*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
struct UAutomationBlueprintFunctionLibrary_GetPlayerId_Params
{
	class APlayerState*                                State;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
struct UAutomationBlueprintFunctionLibrary_GetLevelUrl_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
struct UAutomationBlueprintFunctionLibrary_GetCurrentMapTestName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
struct UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params
{
	bool                                               DumpMemReport;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
struct UAutomationBlueprintFunctionLibrary_DumpFullMemReport_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
struct UAutomationBlueprintFunctionLibrary_DelayForFramesWithDesc_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	int                                                NumFrames;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FString                                     Description;                                              // (CPF_Parm, CPF_ZeroConstructor) 0028
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames
struct UAutomationBlueprintFunctionLibrary_DelayForFrames_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	int                                                NumFrames;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
struct UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params
{
	struct FString                                     FolderName;                                               // (CPF_Parm, CPF_ZeroConstructor) 0000
	bool                                               DumpMemReport;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               PreventGarbageCollection;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0011
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int
struct UAutomationBlueprintFunctionLibrary_AssertValue_Int_Params
{
	int                                                Actual;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EComparisonMethod>                     ShouldBe;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	int                                                Expected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0010
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float
struct UAutomationBlueprintFunctionLibrary_AssertValue_Float_Params
{
	float                                              Actual;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EComparisonMethod>                     ShouldBe;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Expected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0010
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime
struct UAutomationBlueprintFunctionLibrary_AssertValue_DateTime_Params
{
	struct FDateTime                                   Actual;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0000
	TEnumAsByte<EComparisonMethod>                     ShouldBe;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FDateTime                                   Expected;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0010
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0018
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue
struct UAutomationBlueprintFunctionLibrary_AssertTrue_Params
{
	bool                                               Condition;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0008
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Vector_Params
{
	struct FVector                                     Actual;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     NotExpected;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0018
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Transform_Params
{
	struct FTransform                                  Actual;                                                   // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData) 0000
	struct FTransform                                  NotExpected;                                              // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData) 0030
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0060
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0070
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_String_Params
{
	struct FString                                     Actual;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     NotExpected;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0010
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0020
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Rotator_Params
{
	struct FRotator                                    Actual;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRotator                                    NotExpected;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0018
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid
struct UAutomationBlueprintFunctionLibrary_AssertIsValid_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0008
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
struct UAutomationBlueprintFunctionLibrary_AssertIsNotValid_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0008
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse
struct UAutomationBlueprintFunctionLibrary_AssertFalse_Params
{
	bool                                               Condition;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0008
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
struct UAutomationBlueprintFunctionLibrary_AssertErrorOccurred_Params
{
	struct FString                                     ErrorMessage;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector2D_Params
{
	struct FVector2D                                   Actual;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector2D                                   Expected;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0010
	float                                              Tolerance;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector_Params
{
	struct FVector                                     Actual;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     Expected;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0018
	float                                              Tolerance;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Transform_Params
{
	struct FTransform                                  Actual;                                                   // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData) 0000
	struct FTransform                                  Expected;                                                 // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData) 0030
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0060
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0070
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String
struct UAutomationBlueprintFunctionLibrary_AssertEqual_String_Params
{
	struct FString                                     Actual;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     Expected;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0010
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0020
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Rotator_Params
{
	struct FRotator                                    Actual;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRotator                                    Expected;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0018
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Float_Params
{
	float                                              Actual;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Expected;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	struct FString                                     What;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0008
	float                                              Tolerance;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class UObject*                                     ContextObject;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError
struct UAutomationBlueprintFunctionLibrary_AddExpectedError_Params
{
	struct FString                                     ErrorMessage;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback
struct UAutomationLatentActionCallback_LatentCallback_Params
{
	int                                                Linkage;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
