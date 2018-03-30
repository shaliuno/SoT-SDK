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

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold
struct UHitchDiagnosisBlueprintFunctionLibrary_SetHitchThreshold_Params
{
	int                                                InThreshold;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame
struct UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchNameThisFrame_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs
struct UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchLengthThisFrameMs_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog
struct UHitchDiagnosisBlueprintFunctionLibrary_DumpThisFramesHitchesToLog_Params
{
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame
struct UHitchDiagnosisBlueprintFunctionLibrary_DidHitchOccurThisFrame_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function RareEngine.StallDetector.Deactivate
struct UStallDetector_Deactivate_Params
{
};

// Function RareEngine.StallDetector.CreateStallDetector
struct UStallDetector_CreateStallDetector_Params
{
	float                                              Delay;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               CreateActive;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	class UStallDetector*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function RareEngine.StallDetector.Activate
struct UStallDetector_Activate_Params
{
};

// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents
struct UStaticMeshActorBlueprintLibrary_FindAllStaticMeshComponents_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class UStaticMesh*>                         MeshFilter;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0008
	TArray<struct FStaticMeshComponentList>            OutComponentLists;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0018
	class ULevel*                                      RestrictToLevel;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors
struct UStaticMeshActorBlueprintLibrary_FindAllStaticMeshActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class UStaticMesh*>                         MeshFilter;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor) 0008
	TArray<struct FStaticMeshActorList>                OutActorLists;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0018
	class ULevel*                                      RestrictToLevel;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
