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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0020 (0x0860 - 0x0840)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0840(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                               // 0x0848(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0858(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.FoliageInstancedStaticMeshComponent")); }
		return ptr;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000 (0x0028 - 0x0028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.FoliageStatistics")); }
		return ptr;
	}


	int FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	int FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
};


// Class Foliage.FoliageType
// 0x0330 (0x0358 - 0x0028)
class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                               // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Density;                                                  // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DensityAdjustmentFactor;                                  // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFoliageScaling>                       Scaling;                                                  // 0x0044(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              ScaleX;                                                   // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              ScaleY;                                                   // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask;                                          // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VertexColorMaskThreshold;                                 // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      VertexColorMaskInvert : 1;                                // 0x0068(0x0001) (CPF_Edit BITFIELD: 0101)
	struct FFloatInterval                              ZOffset;                                                  // 0x006C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AlignToNormal : 1;                                        // 0x0074(0x0001) (CPF_Edit BITFIELD: 0101)
	float                                              AlignMaxAngle;                                            // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      RandomYaw : 1;                                            // 0x007C(0x0001) (CPF_Edit BITFIELD: 0101)
	float                                              RandomPitchAngle;                                         // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              GroundSlopeAngle;                                         // 0x0084(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              Height;                                                   // 0x008C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<struct FName>                               LandscapeLayers;                                          // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FName                                       LandscapeLayer;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      CollisionWithWorld : 1;                                   // 0x00B0(0x0001) (CPF_Edit BITFIELD: 0101)
	struct FVector                                     CollisionScale;                                           // 0x00B4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumLayerWeight;                                       // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoxSphereBounds                            MeshBounds;                                               // 0x00C4(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LowBoundOriginRadius;                                     // 0x00E0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x00EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInt32Interval                              CullDistance;                                             // 0x00F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableStaticLighting : 1;                                // 0x00F8(0x0001) (CPF_Deprecated BITFIELD: 0101)
	unsigned char                                      CastShadow : 1;                                           // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly BITFIELD: 0202)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly BITFIELD: 0404)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly BITFIELD: 0808)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly BITFIELD: 1010)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly BITFIELD: 2020)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly BITFIELD: 4040)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly BITFIELD: 8080)
	unsigned char                                      bOverrideLightMapRes : 1;                                 // 0x00F9(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly BITFIELD: 0101)
	int                                                OverriddenLightMapRes;                                    // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x0100(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly BITFIELD: 0101)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0108(0x0178) (CPF_Edit)
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  // 0x0280(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	uint64_t                                           HiddenEditorViews;                                        // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      IsSelected : 1;                                           // 0x0290(0x0001) ( BITFIELD: 0101)
	float                                              CollisionRadius;                                          // 0x0294(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShadeRadius;                                              // 0x0298(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSteps;                                                 // 0x029C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialSeedDensity;                                       // 0x02A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AverageSpreadDistance;                                    // 0x02A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpreadVariance;                                           // 0x02A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SeedsPerStep;                                             // 0x02AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x02B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxInitialSeedOffset;                                     // 0x02B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanGrowInShade;                                          // 0x02B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSpawnsInShade;                                           // 0x02B9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxInitialAge;                                            // 0x02BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAge;                                                   // 0x02C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x02C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              ProceduralScale;                                          // 0x02C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRuntimeFloatCurve                          ScaleCurve;                                               // 0x02D0(0x0080) (CPF_Edit)
	int                                                ChangeCount;                                              // 0x0350(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ReapplyDensity : 1;                                       // 0x0354(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 0101)
	unsigned char                                      ReapplyRadius : 1;                                        // 0x0354(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 0202)
	unsigned char                                      ReapplyAlignToNormal : 1;                                 // 0x0354(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 0404)
	unsigned char                                      ReapplyRandomYaw : 1;                                     // 0x0354(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 0808)
	unsigned char                                      ReapplyScaling : 1;                                       // 0x0354(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 1010)
	unsigned char                                      ReapplyScaleX : 1;                                        // 0x0354(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 2020)
	unsigned char                                      ReapplyScaleY : 1;                                        // 0x0354(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 4040)
	unsigned char                                      ReapplyScaleZ : 1;                                        // 0x0354(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 8080)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                              // 0x0355(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 0101)
	unsigned char                                      ReapplyGroundSlope : 1;                                   // 0x0355(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 0202)
	unsigned char                                      ReapplyHeight : 1;                                        // 0x0355(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 0404)
	unsigned char                                      ReapplyLandscapeLayers : 1;                               // 0x0355(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 0808)
	unsigned char                                      ReapplyZOffset : 1;                                       // 0x0355(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 1010)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                            // 0x0355(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 2020)
	unsigned char                                      ReapplyVertexColorMask : 1;                               // 0x0355(0x0001) (CPF_Edit, CPF_DisableEditOnInstance BITFIELD: 4040)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.FoliageType")); }
		return ptr;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (0x0378 - 0x0358)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                                 Mesh;                                                     // 0x0358(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0360(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      ComponentClass;                                           // 0x0370(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.FoliageType_InstancedStaticMesh")); }
		return ptr;
	}

};


// Class Foliage.InstancedFoliageActor
// 0x0050 (0x04B8 - 0x0468)
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0468(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.InstancedFoliageActor")); }
		return ptr;
	}

};


// Class Foliage.InteractiveFoliageActor
// 0x0060 (0x04D8 - 0x0478)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0478(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector                                     TouchingActorEntryPosition;                               // 0x0480(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     FoliageVelocity;                                          // 0x048C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     FoliageForce;                                             // 0x0498(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     FoliagePosition;                                          // 0x04A4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              FoliageDamageImpulseScale;                                // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageTouchImpulseScale;                                 // 0x04B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageStiffness;                                         // 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageStiffnessQuadratic;                                // 0x04BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageDamping;                                           // 0x04C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDamageImpulse;                                         // 0x04C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxTouchImpulse;                                          // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxForce;                                                 // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mass;                                                     // 0x04D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.InteractiveFoliageActor")); }
		return ptr;
	}


	void CapsuleTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class Foliage.InteractiveFoliageComponent
// 0x0010 (0x06E0 - 0x06D0)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.InteractiveFoliageComponent")); }
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (0x04A8 - 0x04A0)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                  // 0x04A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.ProceduralFoliageBlockingVolume")); }
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageComponent
// 0x0028 (0x00F8 - 0x00D0)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileOverlap;                                              // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	class AVolume*                                     SpawningVolume;                                           // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ProceduralGuid;                                           // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.ProceduralFoliageComponent")); }
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x0040 (0x0068 - 0x0028)
class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                RandomSeed;                                               // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileSize;                                                 // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumUniqueTiles;                                           // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                             // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bNeedsSimulation;                                         // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0049(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.ProceduralFoliageSpawner")); }
		return ptr;
	}


	void Simulate(int NumSteps);
};


// Class Foliage.ProceduralFoliageTile
// 0x0128 (0x0150 - 0x0028)
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                           // 0x00D0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x00E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.ProceduralFoliageTile")); }
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x04A8 - 0x04A0)
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                      // 0x04A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Foliage.ProceduralFoliageVolume")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
