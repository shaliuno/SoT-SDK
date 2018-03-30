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

// Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint
struct UBP_Placement_Functions_C_GenerateRadialXYPositionsAroundPoint_Params
{
	struct FVector                                     Centre;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	int                                                Segments;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	TArray<struct FVector>                             Positions;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0020
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit
struct UBP_Placement_Functions_C_Get_First_Valid_Hit_Params
{
	TArray<struct FHitResult>                          Hits;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               Is_Valid_Hit;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FHitResult                                  Hit;                                                      // (CPF_Parm, CPF_OutParm) 001C
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast
struct UBP_Placement_Functions_C_Generate_Random_Rotated_Box_Raycast_Params
{
	struct FRandomStream                               Random;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	struct FVector                                     Centre;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     Extent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	struct FVector                                     Raycast_Start;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0038
	struct FVector                                     Raycast_End;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0044
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge
struct UBP_Placement_Functions_C_Detonate_Charge_Params
{
	class AActor*                                      Spawn;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     Position;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              Radius_Overlap;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	int                                                Seed;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	TArray<struct FLinearColor>                        Blast_Radii;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0020
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	TArray<struct FLinearColor>                        Blast_Radii_Out;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0038
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B
struct UBP_Placement_Functions_C_Does_A_Delete_B_Params
{
	struct FString                                     A_String;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     B_String;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0010
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	bool                                               Return;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type
struct UBP_Placement_Functions_C_Get_Actor_Placement_Asset_Type_Params
{
	class AActor*                                      Input_Actor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               Returning_Tag;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FString                                     Asset_Tag;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0018
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap
struct UBP_Placement_Functions_C_Check_Actor_Overlap_Params
{
	class AActor*                                      Input_Actor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               Delete_Actor;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TArray<class AActor*>                              Overlaps_to_Delete;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0018
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform
struct UBP_Placement_Functions_C_Get_Mesh_Instance_Transform_Params
{
	struct FPlacementGardenSeed                        Selected_Mesh;                                            // (CPF_Parm) 0000
	struct FRandomStream                               Random;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0040
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0048
	struct FVector                                     Normal;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0054
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	struct FTransform                                  Transform;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData) 0070
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities
struct UBP_Placement_Functions_C_Normalise_Mesh_Probabilities_Params
{
	TArray<struct FPlacementGardenSeed>                Charges;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<float>                                      Charge_Probabilities;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh
struct UBP_Placement_Functions_C_Set_Mesh_Params
{
	TArray<struct FPlacementGardenSeed>                Meshes;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<float>                                      Mesh_Probabilities;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	float                                              Generator_Radius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              Spawn_Clustering;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	float                                              Spawn_Radius_Multiplier;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	TArray<class UObject*>                             Physical_Materials;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0030
	TArray<struct FLinearColor>                        Mesh_Radii;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0040
	struct FRandomStream                               Random;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0050
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0058
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	bool                                               Spawn_Permission;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0068
	struct FTransform                                  Transform;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData) 0070
	float                                              Radius;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00A0
	int                                                Mesh_Index;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 00A4
	struct FPlacementGardenSeed                        Mesh;                                                     // (CPF_Parm, CPF_OutParm) 00A8
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge
struct UBP_Placement_Functions_C_Set_Charge_Params
{
	TArray<struct FPlacementBombCharge>                Charges;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<float>                                      Charge_Probabilities;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	float                                              Generator_Radius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	float                                              Spawn_Clustering;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	bool                                               Box_Distribution;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	TArray<class UObject*>                             Physical_Materials;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0030
	TArray<struct FLinearColor>                        Blast_Radii;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0040
	struct FRandomStream                               Random;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0050
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0058
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	bool                                               Spawn_Permission;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0068
	struct FVector                                     Position;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 006C
	float                                              Radius;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0078
	struct FPlacementBombCharge                        Charge;                                                   // (CPF_Parm, CPF_OutParm) 0080
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials
struct UBP_Placement_Functions_C_Check_Surface_Materials_Params
{
	TArray<class UObject*>                             Physical_Materials;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	class UObject*                                     Placement_Material;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               Placement_Permission;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope
struct UBP_Placement_Functions_C_Check_Slope_Params
{
	struct FVector                                     Normal;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector2D                                   Slope_Range;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               Placement_Permission;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height
struct UBP_Placement_Functions_C_Check_Height_Params
{
	struct FVector                                     Position;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector2D                                   Height_Range;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               Placement_Permission;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap
struct UBP_Placement_Functions_C_Check_Radius_Overlap_Params
{
	struct FVector                                     Position;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              Radius_Overlap;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TArray<struct FLinearColor>                        Blast_Radii;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0018
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	bool                                               Placement_Permission;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties
struct UBP_Placement_Functions_C_Set_Spawn_Properties_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Seed;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               Cast_Success;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast
struct UBP_Placement_Functions_C_Generate_Random_Box_Raycast_Params
{
	struct FRandomStream                               Random;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	struct FVector                                     Centre;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     Extent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	struct FVector                                     Raycast_Start;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	struct FVector                                     Raycast_End;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0034
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count
struct UBP_Placement_Functions_C_Get_Box_Sample_Count_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Seed_Density;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	int                                                Sample_Count;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast
struct UBP_Placement_Functions_C_Generate_Random_Radial_Raycast_Params
{
	struct FRandomStream                               Random;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     Centre;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              Spawn_Clustering;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              Spawn_Radius_Multiplier;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	struct FTransform                                  Actor_Transform;                                          // (CPF_Parm, CPF_IsPlainOldData) 0020
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
	struct FVector                                     Raycast_Start;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0058
	struct FVector                                     Raycast_End;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0064
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities
struct UBP_Placement_Functions_C_Calculate_Index_from_Probabilities_Params
{
	float                                              Random_Float;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<float>                                      Charge_Probabilities;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	int                                                Index;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count
struct UBP_Placement_Functions_C_Get_Radial_Sample_Count_Params
{
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Spawn_Sample_Density;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Sample_Count;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities
struct UBP_Placement_Functions_C_Normalise_Charge_Probabilities_Params
{
	TArray<struct FPlacementBombCharge>                Charges;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<float>                                      Charge_Probabilities;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
