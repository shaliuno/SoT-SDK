#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaSocketLookup.SocketPathNode
// 0x0008
struct FSocketPathNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaSocketLookup.SocketPath
// 0x0018
struct FSocketPath
{
	TArray<struct FSocketPathNode>                     Nodes;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaSocketLookup.SocketId
// 0x0020
struct FSocketId
{
	struct FSocketPath                                 path;                                                     // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       Name;                                                     // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaSocketLookup.SocketLookupCache
// 0x0050
struct FSocketLookupCache
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
