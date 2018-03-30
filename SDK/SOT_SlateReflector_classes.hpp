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

// Class SlateReflector.WidgetReflectorNodeBase
// 0x0058 (0x0080 - 0x0028)
class UWidgetReflectorNodeBase : public UObject
{
public:
	struct FGeometry                                   Geometry;                                                 // 0x0028(0x0034) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<class UWidgetReflectorNodeBase*>            ChildNodes;                                               // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FLinearColor                                Tint;                                                     // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class SlateReflector.WidgetReflectorNodeBase")); }
		return ptr;
	}

};


// Class SlateReflector.LiveWidgetReflectorNode
// 0x0010 (0x0090 - 0x0080)
class ULiveWidgetReflectorNode : public UWidgetReflectorNodeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class SlateReflector.LiveWidgetReflectorNode")); }
		return ptr;
	}

};


// Class SlateReflector.SnapshotWidgetReflectorNode
// 0x00E0 (0x0160 - 0x0080)
class USnapshotWidgetReflectorNode : public UWidgetReflectorNodeBase
{
public:
	struct FText                                       CachedWidgetType;                                         // 0x0080(0x0028)
	struct FText                                       CachedWidgetVisibilityText;                               // 0x00A8(0x0028)
	struct FText                                       CachedWidgetReadableLocation;                             // 0x00D0(0x0028)
	struct FString                                     CachedWidgetFile;                                         // 0x00F8(0x0010) (CPF_ZeroConstructor)
	int                                                CachedWidgetLineNumber;                                   // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CachedWidgetAssetName;                                    // 0x010C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   CachedWidgetDesiredSize;                                  // 0x0114(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FSlateColor                                 CachedWidgetForegroundColor;                              // 0x0120(0x0028)
	struct FString                                     CachedWidgetAddress;                                      // 0x0148(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      CachedWidgetEnabled;                                      // 0x0158(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0159(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class SlateReflector.SnapshotWidgetReflectorNode")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
