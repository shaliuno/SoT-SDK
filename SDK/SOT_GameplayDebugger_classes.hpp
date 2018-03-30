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

// Class GameplayDebugger.GameplayDebuggingComponent
// 0x0220 (0x0870 - 0x0650)
class UGameplayDebuggingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0650(0x0008) MISSED OFFSET
	struct FString                                     DebugComponentClassName;                                  // 0x0658(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	int                                                ShowExtendedInformatiomCounter;                           // 0x0668(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x066C(0x0004) MISSED OFFSET
	TArray<int>                                        ReplicateViewDataCounters;                                // 0x0670(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     ControllerName;                                           // 0x0680(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     PawnName;                                                 // 0x0690(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     PawnClass;                                                // 0x06A0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     DebugIcon;                                                // 0x06B0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     MovementBaseInfo;                                         // 0x06C0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     MovementModeInfo;                                         // 0x06D0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     PathFollowingInfo;                                        // 0x06E0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     CurrentAITask;                                            // 0x06F0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     CurrentAIState;                                           // 0x0700(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     CurrentAIAssets;                                          // 0x0710(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     GameplayTasksState;                                       // 0x0720(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     NavDataInfo;                                              // 0x0730(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     AbilityInfo;                                              // 0x0740(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     MontageInfo;                                              // 0x0750(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     BrainComponentName;                                       // 0x0760(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     BrainComponentString;                                     // 0x0770(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<unsigned char>                              BlackboardRepData;                                        // 0x0780(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0790(0x0010) MISSED OFFSET
	TArray<struct FVector>                             PathPoints;                                               // 0x07A0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<unsigned char>                              PathCorridorData;                                         // 0x07B0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x07C0(0x0010) MISSED OFFSET
	TArray<unsigned char>                              NavmeshRepData;                                           // 0x07D0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<unsigned char>                              EQSRepData;                                               // 0x07E0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FVector                                     SensingComponentLocation;                                 // 0x07F0(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NextPathPointIndex;                                       // 0x07FC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsUsingPathFollowing : 1;                                // 0x0800(0x0001) (CPF_Net BITFIELD: 0101)
	unsigned char                                      bIsUsingCharacter : 1;                                    // 0x0800(0x0001) (CPF_Net BITFIELD: 0202)
	unsigned char                                      bIsUsingBehaviorTree : 1;                                 // 0x0800(0x0001) (CPF_Net BITFIELD: 0404)
	unsigned char                                      bIsUsingAbilities : 1;                                    // 0x0800(0x0001) (CPF_Net BITFIELD: 0808)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0801(0x0007) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0808(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x60];                                      // 0x0810(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayDebugger.GameplayDebuggingComponent")); }
		return ptr;
	}


	void ServerReplicateData(uint32_t InMessage, uint32_t DataView);
	void ServerDiscardNavmeshData();
	void ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation);
	void OnRep_UpdateNavmesh();
	void OnRep_UpdateEQS();
	void OnRep_UpdateBlackboard();
	void OnRep_PathCorridorData();
	void OnCycleDetailsView();
	void ClientEnableTargetSelection(bool bEnable);
};


// Class GameplayDebugger.GameplayDebuggingHUDComponent
// 0x00F0 (0x0558 - 0x0468)
class AGameplayDebuggingHUDComponent : public AActor
{
public:
	float                                              MenuStartX;                                               // 0x0468(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MenuStartY;                                               // 0x046C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DebugInfoStartX;                                          // 0x0470(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DebugInfoStartY;                                          // 0x0474(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class UCanvas*                                     Canvas;                                                   // 0x0478(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class APlayerController*                           PlayerOwner;                                              // 0x0480(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0488(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayDebugger.GameplayDebuggingHUDComponent")); }
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggerSettings
// 0x00B0 (0x00D8 - 0x0028)
class UGameplayDebuggerSettings : public UObject
{
public:
	struct FGDTCustomViewNames                         CustomViewNames;                                          // 0x0028(0x0050) (CPF_Edit, CPF_Config)
	unsigned char                                      OverHead;                                                 // 0x0078(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      Basic;                                                    // 0x0079(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      BehaviorTree;                                             // 0x007A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      EQS;                                                      // 0x007B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      EnableEQSOnHUD;                                           // 0x007C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                ActiveEQSIndex;                                           // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      Perception;                                               // 0x0084(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      GameView1;                                                // 0x0085(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      GameView2;                                                // 0x0086(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      GameView3;                                                // 0x0087(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      GameView4;                                                // 0x0088(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      GameView5;                                                // 0x0089(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4E];                                      // 0x008A(0x004E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayDebugger.GameplayDebuggerSettings")); }
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggingControllerComponent
// 0x0228 (0x02F8 - 0x00D0)
class UGameplayDebuggingControllerComponent : public UActorComponent
{
public:
	class AGameplayDebuggingHUDComponent*              OnDebugAIHUD;                                             // 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AActor*                                      DebugAITargetActor;                                       // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UInputComponent*                             AIDebugViewInputComponent;                                // 0x00E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UInputComponent*                             DebugCameraInputComponent;                                // 0x00E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F0(0x0028) MISSED OFFSET
	struct FInputChord                                 ActivationKey;                                            // 0x0118(0x0020) (CPF_Config)
	struct FInputChord                                 CategoryZeroBind;                                         // 0x0138(0x0020) (CPF_Config)
	struct FInputChord                                 CategoryOneBind;                                          // 0x0158(0x0020) (CPF_Config)
	struct FInputChord                                 CategoryTwoBind;                                          // 0x0178(0x0020) (CPF_Config)
	struct FInputChord                                 CategoryThreeBind;                                        // 0x0198(0x0020) (CPF_Config)
	struct FInputChord                                 CategoryFourBind;                                         // 0x01B8(0x0020) (CPF_Config)
	struct FInputChord                                 CategoryFiveBind;                                         // 0x01D8(0x0020) (CPF_Config)
	struct FInputChord                                 CategorySixBind;                                          // 0x01F8(0x0020) (CPF_Config)
	struct FInputChord                                 CategorySevenBind;                                        // 0x0218(0x0020) (CPF_Config)
	struct FInputChord                                 CategoryEightBind;                                        // 0x0238(0x0020) (CPF_Config)
	struct FInputChord                                 CategoryNineBind;                                         // 0x0258(0x0020) (CPF_Config)
	struct FInputChord                                 CycleDetailsViewBind;                                     // 0x0278(0x0020) (CPF_Config)
	struct FInputChord                                 DebugCameraBind;                                          // 0x0298(0x0020) (CPF_Config)
	struct FInputChord                                 OnScreenDebugMessagesBind;                                // 0x02B8(0x0020) (CPF_Config)
	struct FInputChord                                 GameHUDBind;                                              // 0x02D8(0x0020) (CPF_Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayDebugger.GameplayDebuggingControllerComponent")); }
		return ptr;
	}

};


// Class GameplayDebugger.GaneplayDebuggerProxyHUD
// 0x0030 (0x0590 - 0x0560)
class AGaneplayDebuggerProxyHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0560(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayDebugger.GaneplayDebuggerProxyHUD")); }
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggingReplicator
// 0x00F8 (0x0560 - 0x0468)
class AGameplayDebuggingReplicator : public AActor
{
public:
	struct FString                                     DebugComponentClassName;                                  // 0x0468(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FString                                     DebugComponentHUDClassName;                               // 0x0478(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FString                                     DebugComponentControllerClassName;                        // 0x0488(0x0010) (CPF_ZeroConstructor, CPF_Config)
	int                                                MaxEQSQueries;                                            // 0x0498(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	class UGameplayDebuggingComponent*                 DebugComponent;                                           // 0x04A0(0x0008) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class APlayerController*                           LocalPlayerOwner;                                         // 0x04A8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AActor*                                      LastSelectedActorToDebug;                                 // 0x04B0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsGlobalInWorld;                                         // 0x04B8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bAutoActivate;                                            // 0x04B9(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      OverHead;                                                 // 0x04BA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      Basic;                                                    // 0x04BB(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      BehaviorTree;                                             // 0x04BC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      EQS;                                                      // 0x04BD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      EnableEQSOnHUD;                                           // 0x04BE(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                ActiveEQSIndex;                                           // 0x04C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      Perception;                                               // 0x04C4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      GameView1;                                                // 0x04C5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      GameView2;                                                // 0x04C6(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      GameView3;                                                // 0x04C7(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      GameView4;                                                // 0x04C8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      GameView5;                                                // 0x04C9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04CA(0x0006) MISSED OFFSET
	class UTexture2D*                                  DefaultTexture_Red;                                       // 0x04D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  DefaultTexture_Green;                                     // 0x04D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x04E0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayDebugger.GameplayDebuggingReplicator")); }
		return ptr;
	}


	void ServerSetActorToDebug(class AActor* InActor);
	void ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
	void OnRep_AutoActivate();
	void ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
	void ClientEnableTargetSelection(bool bEnable, class APlayerController* Context);
	void ClientAutoActivate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
