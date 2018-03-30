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

// ScriptStruct SimpleOverlaps.SimpleOverlapAggregateTickFunction
// 0x0028 (0x0070 - 0x0048)
struct FSimpleOverlapAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET
};

// ScriptStruct SimpleOverlaps.SimpleOverlapInfo
// 0x0010
struct FSimpleOverlapInfo
{
	class AActor*                                      OtherActor;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComponent;                                           // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct SimpleOverlaps.SimpleOverlapEnd
// 0x0010
struct FSimpleOverlapEnd
{
	struct FSimpleOverlapInfo                          OverlapInfo;                                              // 0x0000(0x0010)
};

// ScriptStruct SimpleOverlaps.SimpleOverlapBegin
// 0x0010
struct FSimpleOverlapBegin
{
	struct FSimpleOverlapInfo                          OverlapInfo;                                              // 0x0000(0x0010)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
