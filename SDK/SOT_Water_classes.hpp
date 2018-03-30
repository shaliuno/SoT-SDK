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

// Class Water.AthenaFFTWater
// 0x0020 (0x04D0 - 0x04B0)
class AAthenaFFTWater : public AFFTWater
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.AthenaFFTWater")); }
		return ptr;
	}

};


// Class Water.WaterEmissionVolumeInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterEmissionVolumeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.WaterEmissionVolumeInterface")); }
		return ptr;
	}

};


// Class Water.AthenaWaterEmissionVolume
// 0x0008 (0x0478 - 0x0470)
class AAthenaWaterEmissionVolume : public AWaterEmissionVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.AthenaWaterEmissionVolume")); }
		return ptr;
	}

};


// Class Water.FFTWaterInterface
// 0x0000 (0x0028 - 0x0028)
class UFFTWaterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.FFTWaterInterface")); }
		return ptr;
	}


	void SetComponent(class UFFTWaterComponent* InFFTWaterComponent);
	void SetActor(class AAthenaFFTWater* InFFTWaterActor);
	class UFFTWaterComponent* GetComponent();
	class AAthenaFFTWater* GetActor();
};


// Class Water.WaterProperties
// 0x0010 (0x0038 - 0x0028)
class UWaterProperties : public UObject
{
public:
	TArray<struct FWaterInformation>                   WaterInfo;                                                // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.WaterProperties")); }
		return ptr;
	}

};


// Class Water.WaterInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.WaterInterface")); }
		return ptr;
	}


	bool IsReadyToBeQueried();
	TEnumAsByte<EWaterQueryResult> GetWaterInformationWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, float ChoppynessScalar, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal);
	TEnumAsByte<EWaterQueryResult> GetWaterInformationBatched(TArray<struct FVector2D> SamplePositions, class AActor* Actor, TArray<float>* Heights, TArray<struct FVector2D>* ApproxVelocities, TArray<struct FVector>* Normals);
	TEnumAsByte<EWaterQueryResult> GetWaterInformation(const struct FVector& SamplePosition, class AActor* Actor, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal);
	TEnumAsByte<EWaterQueryResult> GetWaterHeightWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float ChoppynessScalar, float* Height);
	TEnumAsByte<EWaterQueryResult> GetWaterHeightsBatched(TArray<struct FVector2D> SamplePositions, class AActor* Actor, TArray<float>* Heights);
	TEnumAsByte<EWaterQueryResult> GetWaterHeight(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height);
	bool GetIsActorUsingNonDefaultWaterPlane(class AActor* Actor);
	struct FWaterSimPlane GetActorWaterPlane(class AActor* Actor);
	struct FWaterInformation GetActorWaterInformation(class AActor* Actor);
};


// Class Water.FFTWaterService
// 0x0060 (0x04C8 - 0x0468)
class AFFTWaterService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0468(0x0010) MISSED OFFSET
	TWeakObjectPtr<class AAthenaFFTWater>              FFTWaterActor;                                            // 0x0478(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFFTWaterComponent>           FFTWaterComponent;                                        // 0x0480(0x0008) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0488(0x0038) MISSED OFFSET
	double                                             ReplicatedServerCreationTime;                             // 0x04C0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.FFTWaterService")); }
		return ptr;
	}


	void OnRep_FFTWaterComponent();
	void OnRep_FFTWaterActor();
};


// Class Water.FFTWaterPerformanceCountService
// 0x0008 (0x04D0 - 0x04C8)
class AFFTWaterPerformanceCountService : public AFFTWaterService
{
public:
	struct FFFTWaterPerformanceCountData               PerformanceCountData;                                     // 0x04C8(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.FFTWaterPerformanceCountService")); }
		return ptr;
	}


	struct FFFTWaterPerformanceCountData EndScopePerformanceCount();
	void BeginScopePerformanceCount();
};


// Class Water.FFTWaterServiceFixedWaterHeight
// 0x0008 (0x04D0 - 0x04C8)
class AFFTWaterServiceFixedWaterHeight : public AFFTWaterService
{
public:
	float                                              RequiredWaterHeight;                                      // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.FFTWaterServiceFixedWaterHeight")); }
		return ptr;
	}

};


// Class Water.FlatWaterPlaneComponent
// 0x0010 (0x0670 - 0x0660)
class UFlatWaterPlaneComponent : public UBaseWaterComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0660(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.FlatWaterPlaneComponent")); }
		return ptr;
	}


	void OnActorLeaveWaterPlane(class AActor* Actor);
	void OnActorEnterWaterPlane(class AActor* Actor);
	struct FVector2D ConvertToWaterSpace(const struct FVector& WorldSpacePosition);
};


// Class Water.MockWaterInterface
// 0x0010 (0x0038 - 0x0028)
class UMockWaterInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.MockWaterInterface")); }
		return ptr;
	}

};


// Class Water.WaterSubmersionTests
// 0x0000 (0x0038 - 0x0038)
class UWaterSubmersionTests : public UMockWaterInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.WaterSubmersionTests")); }
		return ptr;
	}

};


// Class Water.NoSwimWaterId
// 0x0000 (0x0028 - 0x0028)
class UNoSwimWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.NoSwimWaterId")); }
		return ptr;
	}

};


// Class Water.SeaWaterId
// 0x0000 (0x0028 - 0x0028)
class USeaWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.SeaWaterId")); }
		return ptr;
	}

};


// Class Water.ShipWaterId
// 0x0000 (0x0028 - 0x0028)
class UShipWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.ShipWaterId")); }
		return ptr;
	}

};


// Class Water.UndergroundSeaWaterId
// 0x0000 (0x0028 - 0x0028)
class UUndergroundSeaWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.UndergroundSeaWaterId")); }
		return ptr;
	}

};


// Class Water.WaterBuoyancyFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWaterBuoyancyFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.WaterBuoyancyFunctionLibrary")); }
		return ptr;
	}


	float TickBuoyancy(class AActor* InOwner, float InDeltaTime, float InChoppinessScalar, float FakeZOffsetGeneratorScalar, struct FWaterBuoyancy* InWaterBuoyancy);
	void SetBuoyancySamplesZOffsetSymmetricalAroundXAxis(float ZOffset, struct FWaterBuoyancy* InWaterBuoyancy);
	void SetBuoyancyProbeCurveBlendDebugOverride(float UnaryBlendOverride, struct FWaterBuoyancy* InWaterBuoyancy);
	void SetBuoyancyProbeCurveBlend(float Blend, TEnumAsByte<EBuoyancyBlend> BlendType, struct FWaterBuoyancy* InWaterBuoyancy);
};


// Class Water.WaterBuoyancySampleMovementFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWaterBuoyancySampleMovementFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.WaterBuoyancySampleMovementFunctionLibrary")); }
		return ptr;
	}


	void TickLocalSampleMovement(class AActor* InActor, float DeltaTime, bool bRigidBodyTouchingLand, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement);
	void StartMovingVolumeSamplesLocallyByRandomConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement);
	void StartMovingVolumeSamplesLocallyByConfigurationIndex(class AActor* InActor, int ConfigurationIndex, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement);
	void StartMovingVolumeSamplesLocally(class AActor* InActor, class UCurveVector* InCenterOfMassOffsetCurve, float BuoyancyScalarAtNewPosition, class UCurveFloat* BuoyancyScalarCurve, float MoveTime, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, TArray<struct FBuoyancySampleMovementConfigurationEntry>* NewSampleData);
};


// Class Water.WaterEmissionVolumeService
// 0x0018 (0x0040 - 0x0028)
class UWaterEmissionVolumeService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.WaterEmissionVolumeService")); }
		return ptr;
	}

};


// Class Water.WaterInteractionComponent
// 0x0020 (0x06A0 - 0x0680)
class UWaterInteractionComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0680(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.WaterInteractionComponent")); }
		return ptr;
	}


	void LeaveWaterPlane(class UBaseWaterComponent* WaterComponent);
	void LeaveWaterExclusionZone();
	bool IsInWaterExcludedZone();
	class UBaseWaterComponent* GetWaterPlaneComponent();
	unsigned char GetNumberOfWaterPlanes();
	void EnterWaterPlane(class UBaseWaterComponent* WaterComponent);
	void EnterWaterExclusionZone();
};


// Class Water.WaterInteractionComponentProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterInteractionComponentProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.WaterInteractionComponentProviderInterface")); }
		return ptr;
	}


	class UWaterInteractionComponent* GetWaterInteractionComponent();
};


// Class Water.WaterPlaneExclusionComponent
// 0x0000 (0x00D0 - 0x00D0)
class UWaterPlaneExclusionComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.WaterPlaneExclusionComponent")); }
		return ptr;
	}


	void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
};


// Class Water.WaterSplashProbeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWaterSplashProbeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Water.WaterSplashProbeFunctionLibrary")); }
		return ptr;
	}


	void TickProbes(class AActor* InOwner, float InDeltaTime, TArray<struct FWaterSplashProbe>* InSplashProbes);
	void TickProbe(class AActor* InOwner, float InDeltaTime, struct FWaterSplashProbe* InSplashProbe);
	void SetSamplingTime(float SamplingTime, TArray<struct FWaterSplashProbe>* InSplashProbes);
	struct FVector GetRelativeWaterHeightChangeSpd(int ProbeIndex, TArray<struct FWaterSplashProbe>* InSplashProbes);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
