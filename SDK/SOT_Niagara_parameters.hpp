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

// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAttached
struct UNiagaraFunctionLibrary_SpawnEffectAttached_Params
{
	class UNiagaraEffect*                              EffectTemplate;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class USceneComponent*                             AttachToComponent;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0008
	struct FName                                       AttachPointName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0024
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
	bool                                               bAutoDestroy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0031
	class UNiagaraComponent*                           ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0038
};

// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation
struct UNiagaraFunctionLibrary_SpawnEffectAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UNiagaraEffect*                              EffectTemplate;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	bool                                               bAutoDestroy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	class UNiagaraComponent*                           ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0030
};

// Function Niagara.NiagaraFunctionLibrary.SetUpdateScriptConstant
struct UNiagaraFunctionLibrary_SetUpdateScriptConstant_Params
{
	class UNiagaraComponent*                           Component;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	struct FName                                       EmitterName;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FName                                       ConstantName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FVector                                     Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
