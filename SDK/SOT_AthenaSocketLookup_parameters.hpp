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

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName
struct USocketIdTestFunctions_MakeSocketIdWithInvalidName_Params
{
	struct FString                                     InPath;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FSocketId                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0010
};

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath
struct USocketIdTestFunctions_MakeSocketIdWithEmptyPath_Params
{
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FSocketId                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId
struct USocketIdTestFunctions_MakeSocketId_Params
{
	struct FString                                     InPath;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FSocketId                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0018
};

// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache
struct USocketLookupCacheTestFunctions_IsInCache_Params
{
	struct FSocketLookupCache                          InCache;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FSocketId                                   InSocketId;                                               // (CPF_ConstParm, CPF_Parm) 0050
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0070
};

// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache
struct USocketLookupCacheTestFunctions_AddToCache_Params
{
	struct FSocketLookupCache                          InCache;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FSocketId                                   InSocketId;                                               // (CPF_ConstParm, CPF_Parm) 0050
	class USceneComponent*                             InSceneComponent;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0070
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0078
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache
struct USocketLookupFunctions_TryGetSocketTransformWithCache_Params
{
	struct FSocketLookupCache                          Cache;                                                    // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class AActor*                                      InActor;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
	struct FSocketId                                   InSocketId;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0058
	struct FTransform                                  OutTransform;                                             // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData) 0080
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 00B0
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform
struct USocketLookupFunctions_TryGetSocketTransform_Params
{
	class AActor*                                      InActor;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FSocketId                                   InSocketId;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FTransform                                  OutTransform;                                             // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData) 0030
	TEnumAsByte<ERelativeTransformSpace>               Space;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0061
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform
struct USocketLookupFunctions_TryGetRelativeSocketTransform_Params
{
	class AActor*                                      InActor;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FSocketId                                   InSocketId;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	class USceneComponent*                             RelativeTo;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0028
	struct FTransform                                  OutTransform;                                             // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData) 0030
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0060
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner
struct USocketLookupFunctions_TryFindSocketOwner_Params
{
	class AActor*                                      InActor;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FSocketId                                   InSocketId;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	class USceneComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData) 0028
};

// Function AthenaSocketLookup.SocketLookupInterface.FindSocket
struct USocketLookupInterface_FindSocket_Params
{
	struct FSocketId                                   InSocketId;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FTransform                                  OutTransform;                                             // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData) 0020
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0050
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
