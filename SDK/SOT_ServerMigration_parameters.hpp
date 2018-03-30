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

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime
struct UNetworkTestingBlueprintFunctionLibrary_SetConnectionLastReceiveTime_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              OffsetFromDriverTime;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking
struct UNetworkTestingBlueprintFunctionLibrary_ResumePropertyTracking_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend
struct UNetworkTestingBlueprintFunctionLibrary_PausePropertyTrackingOnNextSend_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor
struct UNetworkTestingBlueprintFunctionLibrary_IsActorNetRelevantFor_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APlayerController*                           PlayerController;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount
struct UNetworkTestingBlueprintFunctionLibrary_GetReliableBufferBunchCount_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer
struct UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimerForPlayer_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer
struct UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimer_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress
struct UServerMigrationBlueprintFunctionLibrary_WaitWhileMigrationInProgress_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic
struct UServerMigrationBlueprintFunctionLibrary_WaitForPendingNetTraffic_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent
struct UServerMigrationBlueprintFunctionLibrary_WaitForMigrationCompletedEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel
struct UServerMigrationBlueprintFunctionLibrary_WaitForClientsToHaveActorChannel_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLatentActionInfo                           LatentInfo;                                               // (CPF_Parm) 0008
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorToBuffer_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<unsigned char>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorGroupToBuffer_Params
{
	TArray<class AActor*>                              ActorGroup;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<unsigned char>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0010
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorWithOffsetFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<unsigned char>                              Buffer;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
	struct FVector                                     Offset;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0018
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0028
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupWithOffsetFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<unsigned char>                              Buffer;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
	struct FVector                                     Offset;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0018
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0028
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<unsigned char>                              Buffer;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0018
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<unsigned char>                              Buffer;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings
struct UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestServerSettings_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FServerSettings                             Settings;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings
struct UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestClientSettings_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FClientSettings                             Settings;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings
struct UServerMigrationBlueprintFunctionLibrary_SetPacketSimulationSettings_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                PacketLag;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                PacketLagVariance;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	int                                                PacketLoss;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication
struct UServerMigrationBlueprintFunctionLibrary_ResumeReplication_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor
struct UServerMigrationBlueprintFunctionLibrary_RegisterPersistentDynamicActor_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     IdentificationName;                                       // (CPF_Parm, CPF_ZeroConstructor) 0008
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication
struct UServerMigrationBlueprintFunctionLibrary_PauseReplication_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               bDropUnreliableRPCsWhilePaused;                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer
struct UServerMigrationBlueprintFunctionLibrary_HasActorChannelFromServer_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor
struct UServerMigrationBlueprintFunctionLibrary_ClientsHaveDormantActor_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel
struct UServerMigrationBlueprintFunctionLibrary_ClientsHaveActorChannel_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
