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

// Class Kraken.KrakenTentacle
// 0x0110 (0x0578 - 0x0468)
class AKrakenTentacle : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0468(0x0010) MISSED OFFSET
	class UHealthComponent*                            HealthComponent;                                          // 0x0478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UActorDamageableComponent*                   DamageableComponent;                                      // 0x0480(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UVenomComponent*                             VenomComponent;                                           // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              VenomChance;                                              // 0x0490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xE4];                                      // 0x0494(0x00E4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenTentacle")); }
		return ptr;
	}


	void OnDamageToTentacle(const struct FImpactDamageEvent& ImpactDamageEvent);
};


// Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllKrakenOccupiedLocations : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations")); }
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_AllocatedShip
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllocatedShip : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.EnvQueryContext_AllocatedShip")); }
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_AllShipsInWorld
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllShipsInWorld : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.EnvQueryContext_AllShipsInWorld")); }
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_PreviousLocation
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_PreviousLocation : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.EnvQueryContext_PreviousLocation")); }
		return ptr;
	}

};


// Class Kraken.EnvQueryGenerator_KrakenSpawnLocations
// 0x0000 (0x0048 - 0x0048)
class UEnvQueryGenerator_KrakenSpawnLocations : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.EnvQueryGenerator_KrakenSpawnLocations")); }
		return ptr;
	}

};


// Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations
// 0x0000 (0x0048 - 0x0048)
class UEnvQueryGenerator_KrakenTentacleSpawnLocations : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations")); }
		return ptr;
	}

};


// Class Kraken.Murk
// 0x0078 (0x04E0 - 0x0468)
class AMurk : public AActor
{
public:
	class UMurkWaterModifierZoneComponent*             WaterModifierZone;                                        // 0x0468(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             SceneRootComponent;                                       // 0x0470(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        InnerSheet;                                               // 0x0478(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        OuterSheet;                                               // 0x0480(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              UnderwaterSheetHeightScale;                               // 0x0488(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    InnerSheetMaterialInstance;                               // 0x0490(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    OuterSheetMaterialInstance;                               // 0x0498(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x04A0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.Murk")); }
		return ptr;
	}

};


// Class Kraken.KrakenShipWrappingTentacle
// 0x0168 (0x06E0 - 0x0578)
class AKrakenShipWrappingTentacle : public AKrakenTentacle
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0578(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        TentacleCollisions;                                       // 0x0580(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        TentacleMesh;                                             // 0x0588(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             InteractableBlockingRegions;                              // 0x0590(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             KnockbackRegions;                                         // 0x0598(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMesh*                                 LowDetailTentacleMesh;                                    // 0x05A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FStringAssetReference                       HighDetailTentacleMeshAsset;                              // 0x05A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleParams           Params;                                                   // 0x05B8(0x0094) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x064C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    TentacleDynamicMaterialInstance;                          // 0x0650(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UStaticMesh*                                 HighDetailTentacleMesh;                                   // 0x0658(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FKrakenShipWrappingTentacleAnimationState   CurrentServerAnimationState;                              // 0x0660(0x0010) (CPF_Net, CPF_Transient)
	struct FKrakenShipWrappingTentacleAnimationState   PendingServerAnimationState;                              // 0x0670(0x0010) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0680(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenShipWrappingTentacle")); }
		return ptr;
	}


	void OnRep_CurrentServerAnimationState();
};


// Class Kraken.KrakenTelemetryComponent
// 0x00D0 (0x01A0 - 0x00D0)
class UKrakenTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x00D0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenTelemetryComponent")); }
		return ptr;
	}

};


// Class Kraken.Kraken
// 0x04A8 (0x0910 - 0x0468)
class AKraken : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	float                                              RelevancyDistance;                                        // 0x0470(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0474(0x0014) MISSED OFFSET
	float                                              InnerRadius;                                              // 0x0488(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OuterRadius;                                              // 0x048C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EKrakenState>                          CurrentState;                                             // 0x0490(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x177];                                     // 0x0491(0x0177) MISSED OFFSET
	class AMurk*                                       MurkActor;                                                // 0x0608(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x88];                                      // 0x0610(0x0088) MISSED OFFSET
	class UKrakenAICharacterAudioComponent*            KrakenAudioComponent;                                     // 0x0698(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UKrakenTelemetryComponent*                   KrakenTelemetryComponent;                                 // 0x06A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FEncounterParams                            SightingEncounterParams;                                  // 0x06A8(0x000C) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FEncounterParams                            CloseEncounterParams;                                     // 0x06B4(0x000C) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x10];                                      // 0x06C0(0x0010) MISSED OFFSET
	struct FKrakenParams                               Params;                                                   // 0x06D0(0x0150) (CPF_Transient)
	int                                                NumTentaclesRemaining;                                    // 0x0820(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0xEC];                                      // 0x0824(0x00EC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.Kraken")); }
		return ptr;
	}


	void Multicast_OnTentacleTakenDamage();
	void AddActorToKnownTargets(class AActor* Target);
};


// Class Kraken.KrakenAnimatedTentacleAnimationDataAsset
// 0x0030 (0x0058 - 0x0028)
class UKrakenAnimatedTentacleAnimationDataAsset : public UDataAsset
{
public:
	class UKrakenAnimatedTentacleAnimationSpecDataAsset* AnimationSpec;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrameTimeDelta;                                           // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimationLength;                                          // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumFrames;                                                // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowLookAround;                                          // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      RequiresWaterHeightQuery;                                 // 0x003D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimationPlayRateScale;                                   // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FKrakenAnimatedTentacleAnimationBoneTrack> Bones;                                                    // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenAnimatedTentacleAnimationDataAsset")); }
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset
// 0x0010 (0x0038 - 0x0028)
class UKrakenAnimatedTentacleAnimationMappingDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenAnimatedTentacleMappedAnimation> Animations;                                               // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset")); }
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset
// 0x0010 (0x0038 - 0x0028)
class UKrakenAnimatedTentacleAnimationSpecDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenAnimatedTentacleAnimationSpecBone> Bones;                                                    // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset")); }
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset
// 0x0030 (0x0058 - 0x0028)
class UKrakenAnimatedTentacleStateAnimationsDataAsset : public UDataAsset
{
public:
	TAssetPtr<class UKrakenAnimatedTentacleAnimationMappingDataAsset> MappingAssetReference;                                    // 0x0028(0x0020) (CPF_Edit)
	TArray<struct FKrakenAnimatedTentacleStateAnimationMapping> States;                                                   // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset")); }
		return ptr;
	}

};


// Class Kraken.KrakenIdleBehaviourParamsDataAsset
// 0x0088 (0x00B0 - 0x0028)
class UKrakenIdleBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenIdleBehaviourParams                  Params;                                                   // 0x0028(0x0088) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenIdleBehaviourParamsDataAsset")); }
		return ptr;
	}

};


// Class Kraken.KrakenParamsDataAsset
// 0x0150 (0x0178 - 0x0028)
class UKrakenParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenParams                               Params;                                                   // 0x0028(0x0150) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenParamsDataAsset")); }
		return ptr;
	}

};


// Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset
// 0x00A0 (0x00C8 - 0x0028)
class UKrakenPlayerGrabbingBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenPlayerGrabbingBehaviourParams        Params;                                                   // 0x0028(0x00A0) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset")); }
		return ptr;
	}

};


// Class Kraken.KrakenServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UKrakenServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenServiceInterface")); }
		return ptr;
	}

};


// Class Kraken.KrakenService
// 0x0208 (0x0670 - 0x0468)
class AKrakenService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	class UKrakenServiceParamsDataAsset*               KrakenServiceParams;                                      // 0x0470(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x170];                                     // 0x0478(0x0170) MISSED OFFSET
	class AKraken*                                     Kraken;                                                   // 0x05E8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x05F0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenService")); }
		return ptr;
	}


	void RequestKrakenWithLocation(const struct FVector& SpawnLocation, class AActor* SpawnedForActor);
	bool IsKrakenActive();
	void DismissKraken();
	bool CanSpawnKraken();
};


// Class Kraken.KrakenServiceParamsDataAsset
// 0x0090 (0x00B8 - 0x0028)
class UKrakenServiceParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenServiceParams                        Params;                                                   // 0x0028(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenServiceParamsDataAsset")); }
		return ptr;
	}

};


// Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset
// 0x0398 (0x03C0 - 0x0028)
class UKrakenShipWrappingBehaviourParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FKrakenShipWrappingBehaviourParams          Params;                                                   // 0x0030(0x0390) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset")); }
		return ptr;
	}

};


// Class Kraken.KrakenShipWrappingKnockbackRegionComponent
// 0x0080 (0x0360 - 0x02E0)
class UKrakenShipWrappingKnockbackRegionComponent : public USceneComponent
{
public:
	class UBoxComponent*                               KnockbackRegion;                                          // 0x02E0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector                                     KnockbackDirection;                                       // 0x02E8(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnockbackTime;                                            // 0x02F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FKnockBackInfo                              KnockbackParams;                                          // 0x02F8(0x0034) (CPF_Edit)
	unsigned char                                      UnknownData00[0x34];                                      // 0x032C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Kraken.KrakenShipWrappingKnockbackRegionComponent")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
