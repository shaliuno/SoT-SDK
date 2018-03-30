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

// Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay
struct UEndPlayHandler_OnEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid
struct ULinkEndpointIdUtilities_IsValid_Params
{
	struct FLinkEndpointId                             Id;                                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed
struct ULinkEndpointIdUtilities_IsPathed_Params
{
	struct FLinkEndpointId                             Id;                                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId
struct ULinkEndpointIdUtilities_CreateEndpointId_Params
{
	struct FString                                     String;                                                   // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FLinkEndpointId                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0010
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString
struct ULinkEndpointIdUtilities_Conv_LinkEndpointIdToString_Params
{
	struct FLinkEndpointId                             Id;                                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds
struct ULinkEndpointIdUtilities_CombineEndpointIds_Params
{
	struct FLinkEndpointId                             Root;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FLinkEndpointId                             path;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	struct FLinkEndpointId                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0010
};

// Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink
struct ULinkEndpointInterface_ReceiveLink_Params
{
	struct FLinkEndpointId                             Id;                                                       // (CPF_Parm) 0000
	class AActor*                                      Instance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink
struct ULinkEndpointInterface_LoseLink_Params
{
	struct FLinkEndpointId                             Id;                                                       // (CPF_Parm) 0000
};

// Function AthenaObjectLinkage.LinkerComponent.UnregisterLink
struct ULinkerComponent_UnregisterLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FLinkEndpointId                             TargetId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint
struct ULinkerComponent_UnregisterEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function AthenaObjectLinkage.LinkerComponent.SetParent
struct ULinkerComponent_SetParent_Params
{
	class AActor*                                      Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaObjectLinkage.LinkerComponent.RegisterLink
struct ULinkerComponent_RegisterLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FLinkEndpointId                             TargetId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	TEnumAsByte<EAddLinkResult>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint
struct ULinkerComponent_RegisterEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class AActor*                                      Source;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EAddEndpointResult>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild
struct ULinkerComponent_OnEndpointRemovedFromChild_Params
{
	class AActor*                                      Child;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLinkEndpointId                             Id;                                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild
struct ULinkerComponent_OnEndpointAddedToChild_Params
{
	class AActor*                                      Child;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLinkEndpointId                             Id;                                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
	class AActor*                                      Instance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint
struct ULinkerComponent_LookupEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks
struct ULinkerComponent_GetNumSetLinks_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks
struct ULinkerComponent_GetNumRegisteredLinks_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints
struct ULinkerComponent_GetNumRegisteredEndpoints_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks
struct ULinkerComponent_GetNumPendingLinks_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function AthenaObjectLinkage.LinkerInterface.SetParent
struct ULinkerInterface_SetParent_Params
{
	class AActor*                                      Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaObjectLinkage.LinkerInterface.RemoveLink
struct ULinkerInterface_RemoveLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                 // (CPF_Parm) 0000
	struct FLinkEndpointId                             TargetId;                                                 // (CPF_Parm) 0008
};

// Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint
struct ULinkerInterface_RemoveEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                       // (CPF_Parm) 0000
};

// Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild
struct ULinkerInterface_OnEndpointRemovedFromChild_Params
{
	class AActor*                                      Child;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLinkEndpointId                             Id;                                                       // (CPF_Parm) 0008
};

// Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild
struct ULinkerInterface_OnEndpointAddedToChild_Params
{
	class AActor*                                      Child;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FLinkEndpointId                             Id;                                                       // (CPF_Parm) 0008
	class AActor*                                      Instance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint
struct ULinkerInterface_LookupEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                       // (CPF_Parm) 0000
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function AthenaObjectLinkage.LinkerInterface.AddLink
struct ULinkerInterface_AddLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                 // (CPF_Parm) 0000
	struct FLinkEndpointId                             TargetId;                                                 // (CPF_Parm) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function AthenaObjectLinkage.LinkerInterface.AddEndpoint
struct ULinkerInterface_AddEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                       // (CPF_Parm) 0000
	class AActor*                                      Instance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
