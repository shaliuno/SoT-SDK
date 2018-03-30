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

// Class Animation.AnimationDataStoreId
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataStoreId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.AnimationDataStoreId")); }
		return ptr;
	}

};


// Class Animation.AnimationData
// 0x0000 (0x0028 - 0x0028)
class UAnimationData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.AnimationData")); }
		return ptr;
	}

};


// Class Animation.AnimationDataContainingNoDuplicateStructs
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataContainingNoDuplicateStructs : public UAnimationData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.AnimationDataContainingNoDuplicateStructs")); }
		return ptr;
	}

};


// Class Animation.AnimationDataContainingThreeInstancesOfTheSameStruct
// 0x0008 (0x0030 - 0x0028)
class UAnimationDataContainingThreeInstancesOfTheSameStruct : public UAnimationData
{
public:
	struct FEmptyStructForAnimationDataDuplicateStructTest StructInstance1;                                          // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEmptyStructForAnimationDataDuplicateStructTest StructInstance2;                                          // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEmptyStructForAnimationDataDuplicateStructTest StructInstance3;                                          // 0x002A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.AnimationDataContainingThreeInstancesOfTheSameStruct")); }
		return ptr;
	}

};


// Class Animation.AnimationDataFunctionLib
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.AnimationDataFunctionLib")); }
		return ptr;
	}


	bool UnwrapAnimDataEntryStruct(const struct FAnimDataEntryStructWrapper& Wrapper, class UScriptStruct* DestinationStruct, struct FGenericStruct* Value);
	class UAnimationData* MakeAnimationData(class UClass* Class);
	struct FAnimDataEntryStructWrapper GetAnimDataEntryStructAsStructWrapper(class UAnimationData* AnimationDataObject, class UScriptStruct* TheClass);
	void CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(class UClass* InClass);
};


// Class Animation.AnimationDataStore
// 0x0010 (0x0038 - 0x0028)
class UAnimationDataStore : public UObject
{
public:
	TArray<struct FAnimationDataStoreEntry>            Data;                                                     // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.AnimationDataStore")); }
		return ptr;
	}

};


// Class Animation.AnimationDataStoreAsset
// 0x0010 (0x0038 - 0x0028)
class UAnimationDataStoreAsset : public UDataAsset
{
public:
	TArray<struct FAnimationDataStoreAssetEntry>       AssetRefs;                                                // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.AnimationDataStoreAsset")); }
		return ptr;
	}


	class UAnimationData* LookupAnimationData(class UClass* AnimDataId);
};


// Class Animation.AnimationDataTestIdOne
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataTestIdOne : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.AnimationDataTestIdOne")); }
		return ptr;
	}

};


// Class Animation.AnimationDataTestIdTwo
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataTestIdTwo : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.AnimationDataTestIdTwo")); }
		return ptr;
	}

};


// Class Animation.AnimationDataStoreInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataStoreInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.AnimationDataStoreInterface")); }
		return ptr;
	}


	class UAnimationData* GetAnimationDataForId(class UClass* AnimDataId);
};


// Class Animation.ClientSkeletalMeshComponent
// 0x0000 (0x0A70 - 0x0A70)
class UClientSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.ClientSkeletalMeshComponent")); }
		return ptr;
	}

};


// Class Animation.DockableInterface
// 0x0000 (0x0028 - 0x0028)
class UDockableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.DockableInterface")); }
		return ptr;
	}


	void HandleDestroy();
	struct FDockableInfo GetDockableInfo();
};


// Class Animation.DockerBlueprintFunctions
// 0x0000 (0x0028 - 0x0028)
class UDockerBlueprintFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.DockerBlueprintFunctions")); }
		return ptr;
	}


	void UpdateDock(float DeltaTime, struct FDocker* Docker);
	void StartDockingWithActor(class AActor* Owner, class AActor* Target, float DockDuration, struct FDocker* Docker);
	bool IsFullyDocked(struct FDocker* Docker);
	bool IsDocking(struct FDocker* Docker);
	struct FVector GetTargetLocalOffset(const struct FDocker& Docker);
	void EndDock(struct FDocker* Docker);
};


// Class Animation.DockerInterface
// 0x0000 (0x0028 - 0x0028)
class UDockerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.DockerInterface")); }
		return ptr;
	}

};


// Class Animation.IndexedPlayableMontagesInterface
// 0x0000 (0x0028 - 0x0028)
class UIndexedPlayableMontagesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.IndexedPlayableMontagesInterface")); }
		return ptr;
	}

};


// Class Animation.LimbIKFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULimbIKFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.LimbIKFunctionLibrary")); }
		return ptr;
	}


	void SetTranslationStrength(float InRotationStrength, struct FLimbIK* LimbIK);
	void SetTransform(const struct FTransform& InTransform, struct FLimbIK* LimbIK);
	void SetRotationStrength(float InRotationStrength, struct FLimbIK* LimbIK);
	void SetParentBone(const struct FName& Bone, struct FLimbIK* LimbIK);
	void SetIKSpace(TEnumAsByte<ELimbIKSpace> IKSpace, struct FLimbIK* LimbIK);
	void SetEnabled(bool Enabled, TEnumAsByte<ELimbIKSpace> IKSpace, const struct FName& ParentBone, struct FLimbIK* LimbIK);
	void SetBlendOutSpeed(float BlendOutSpeed, struct FLimbIK* LimbIK);
	void SetBlendInSpeed(float BlendInSpeed, struct FLimbIK* LimbIK);
	void SetAnimationOverride(bool AnimationOverride, struct FLimbIK* LimbIK);
	void SetAlphaTarget(float AlphaTarget, struct FLimbIK* LimbIK);
	bool IsEnabled(struct FLimbIK* LimbIK);
	float GetTranslationStrength(struct FLimbIK* LimbIK);
	struct FTransform GetTransform(struct FLimbIK* LimbIK);
	float GetRotationStrength(struct FLimbIK* LimbIK);
	struct FName GetParentBone(struct FLimbIK* LimbIK);
	TEnumAsByte<ELimbIKSpace> GetIKSpace(struct FLimbIK* LimbIK);
	float GetCurrentAlpha(struct FLimbIK* LimbIK);
	bool GetAnimationOverride(struct FLimbIK* LimbIK);
	float GetAlphaTarget(struct FLimbIK* LimbIK);
	float ConvertBoolToAlpha(bool InBool);
};


// Class Animation.LocomotionFunctionLib
// 0x0000 (0x0028 - 0x0028)
class ULocomotionFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.LocomotionFunctionLib")); }
		return ptr;
	}


	float UpdateControllerSpineRotation(const struct FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin);
	struct FActorVelocityData UpdateCharacterSpeed(const struct FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming);
	float UpdateCalculateRateAndCurrentYaw(const struct FRotator& CharacterRotation, float LargeRate, float DeltaSeconds, float* CurrentCharacterYaw);
};


// Class Animation.RemoteAnimPlayableInterface
// 0x0000 (0x0028 - 0x0028)
class URemoteAnimPlayableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.RemoteAnimPlayableInterface")); }
		return ptr;
	}

};


// Class Animation.TurningFunctionLib
// 0x0000 (0x0028 - 0x0028)
class UTurningFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.TurningFunctionLib")); }
		return ptr;
	}


	bool TurningUpdate(float DeltaSeconds, bool CharacterMoving, float TurnRate, float CounterMax, bool* DeadZone, float* DelayedCounter, bool* TurningLeft);
};


// Class Animation.WaitForAnimationStateEntryProxy
// 0x0020 (0x0048 - 0x0028)
class UWaitForAnimationStateEntryProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnReachedState;                                           // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.WaitForAnimationStateEntryProxy")); }
		return ptr;
	}


	void OnEnteredState(const struct FName& path);
	void OnAnimationUpdated();
	class UWaitForAnimationStateEntryProxy* CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath);
};


// Class Animation.WaitForAnimationStateExitProxy
// 0x0020 (0x0048 - 0x0028)
class UWaitForAnimationStateExitProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnStateExit;                                              // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Animation.WaitForAnimationStateExitProxy")); }
		return ptr;
	}


	void OnExitState(const struct FName& path);
	void OnAnimationUpdated();
	class UWaitForAnimationStateExitProxy* CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
