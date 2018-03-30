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

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x06D0 - 0x06D0)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.ControlPointMeshComponent")); }
		return ptr;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0030 (0x0058 - 0x0028)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UStaticMesh*                                 GrassMesh;                                                // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      RandomRotation;                                           // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      AlignToSurface;                                           // 0x0051(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGrassType")); }
		return ptr;
	}

};


// Class Landscape.LandscapeComponent
// 0x0160 (0x07B0 - 0x0650)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                             // 0x0650(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0654(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0658(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x065C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0660(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0668(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x0670(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceConstant*                   MaterialInstance;                                         // 0x0678(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x0680(0x0010) (CPF_ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0690(0x0010) (CPF_ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x06A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x06B0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x06C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x06C4(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x06D0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x06E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x06E8(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x0704(0x001C) (CPF_ExportObject, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0720(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0730(0x0010) MISSED OFFSET
	int                                                CollisionMipLevel;                                        // 0x0740(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0744(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x0748(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LODBias;                                                  // 0x074C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x0750(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x0760(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0770(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0778(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0779(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x0780(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             // 0x0788(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0790(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeComponent")); }
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x0468 - 0x0468)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoActor")); }
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x04B8 - 0x0468)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0468(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoActiveActor")); }
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x0650 - 0x0650)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoRenderComponent")); }
		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x0730 - 0x0650)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                      // 0x0650(0x0010) (CPF_ZeroConstructor)
	int                                                SectionBaseX;                                             // 0x0660(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0664(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x0668(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionScale;                                           // 0x066C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0670(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x0680(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0690(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x06AC(0x001C) (CPF_ExportObject, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x06C8(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x06D8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x06E8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeHeightfieldCollisionComponent")); }
		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0010 (0x0740 - 0x0730)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0730(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshCollisionComponent")); }
		return ptr;
	}

};


// Class Landscape.LandscapeInfo
// 0x01E8 (0x0210 - 0x0028)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0028(0x001C) (CPF_IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0060(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1A4];                                     // 0x006C(0x01A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeInfo")); }
		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0050 (0x0078 - 0x0028)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeInfoMap")); }
		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0018 (0x0040 - 0x0028)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Hardness;                                                 // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeLayerInfoObject")); }
		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0010 (0x0200 - 0x01F0)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bUnknown01F0_0101 : 1;                                    // 0x01F0(0x0001) (MANUAL_ADD_BIT 0101)
	unsigned char                                      bUnknown01F0_0202 : 1;                                    // 0x01F0(0x0001) (MANUAL_ADD_BIT 0202)
	unsigned char                                      bUnknown01F0_0404 : 1;                                    // 0x01F0(0x0001) (MANUAL_ADD_BIT 0404)
	unsigned char                                      bUnknown01F0_0808 : 1;                                    // 0x01F0(0x0001) (MANUAL_ADD_BIT 0808)
	unsigned char                                      bUnknown01F0_1010 : 1;                                    // 0x01F0(0x0001) (MANUAL_ADD_BIT 1010)
	unsigned char                                      bUnknown01F0_2020 : 1;                                    // 0x01F0(0x0001) (MANUAL_ADD_BIT 2020)
	unsigned char                                      bUnknown01F0_4040 : 1;                                    // 0x01F0(0x0001) (MANUAL_ADD_BIT 4040)
	unsigned char                                      bUnknown01F0_8080 : 1;                                    // 0x01F0(0x0001) (MANUAL_ADD_BIT 8080)
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x01F0(0x0001) ( BITFIELD: 0101)
	int                                                DataWeightmapIndex;                                       // 0x01F4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DataWeightmapSize;                                        // 0x01F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMaterialInstanceConstant")); }
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x0470 - 0x0468)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshProxyActor")); }
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (0x0700 - 0x06D0)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                            // 0x06D0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x06E0(0x0010) (CPF_ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x06F0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x06F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshProxyComponent")); }
		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x0378 (0x07E0 - 0x0468)
class ALandscapeProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x0470(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0478(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0488(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x0490(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x0494(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x0498(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x04A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x04A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x04B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x04B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x04C0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x04D0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x04E0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData03[0x70];                                      // 0x04F0(0x0070) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x0560(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0564(0x001C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0580(0x0001) (CPF_Edit BITFIELD: 0101)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0580(0x0001) (CPF_Edit BITFIELD: 0202)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x0580(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly BITFIELD: 0404)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x0580(0x0001) (CPF_Edit BITFIELD: 0808)
	unsigned char                                      bIsProxy : 1;                                             // 0x0580(0x0001) ( BITFIELD: 1010)
	unsigned char                                      bUseFarCascadeLPVBiasMultiplier : 1;                      // 0x0580(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly BITFIELD: 2020)
	float                                              LpvIntensityMultiplier;                                   // 0x0584(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LpvBiasMultiplier;                                        // 0x0588(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FarCascadeLPVBiasMultiplier;                              // 0x058C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x0590(0x0018) (CPF_Edit)
	int                                                CollisionMipLevel;                                        // 0x05A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x05AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBodyInstance                               BodyInstance;                                             // 0x05B0(0x0178) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                ComponentSizeQuads;                                       // 0x0728(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x072C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0730(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x0734(0x0001) (CPF_Edit BITFIELD: 0101)
	unsigned char                                      bReflected : 1;                                           // 0x0734(0x0001) (CPF_Edit, CPF_BlueprintVisible BITFIELD: 0202)
	TEnumAsByte<ENavDataGatheringMode>                 NavigationGeometryGatheringMode;                          // 0x0738(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x0739(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xA6];                                      // 0x073A(0x00A6) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeProxy")); }
		return ptr;
	}


	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};


// Class Landscape.Landscape
// 0x0000 (0x07E0 - 0x07E0)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.Landscape")); }
		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x0680 - 0x0650)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                            // 0x0650(0x0010) (CPF_ZeroConstructor)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x0660(0x0010) (CPF_ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x0670(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplinesComponent")); }
		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B0 - 0x0028)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0028(0x0018) (CPF_Edit, CPF_EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018) (CPF_ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplineSegment")); }
		return ptr;
	}

};


// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (0x0098 - 0x0028)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndFalloff;                                               // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0050(0x0010) (CPF_ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0070(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x0090(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplineControlPoint")); }
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeGrassOutput")); }
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerBlend")); }
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0088 - 0x0070)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0071(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MappingScale;                                             // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MappingPanU;                                              // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerCoords")); }
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x007C(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerSample")); }
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (0x0100 - 0x0070)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0070(0x0038) (CPF_ZeroConstructor)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x00A8(0x0038) (CPF_ZeroConstructor)
	struct FName                                       ParameterName;                                            // 0x00E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x00E8(0x0001) (CPF_Edit BITFIELD: 0101)
	struct FGuid                                       ExpressionGUID;                                           // 0x00EC(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerSwitch")); }
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0098 (0x0108 - 0x0070)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0070(0x0038) (CPF_ZeroConstructor)
	struct FExpressionInput                            Layer;                                                    // 0x00A8(0x0038) (CPF_ZeroConstructor)
	struct FName                                       ParameterName;                                            // 0x00E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x00E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x00EC(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerWeight")); }
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeVisibilityMask")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
