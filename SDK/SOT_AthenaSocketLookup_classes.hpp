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

// Class AthenaSocketLookup.SocketIdTestFunctions
// 0x0000 (0x0028 - 0x0028)
class USocketIdTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaSocketLookup.SocketIdTestFunctions")); }
		return ptr;
	}


	struct FSocketId MakeSocketIdWithInvalidName(const struct FString& InPath);
	struct FSocketId MakeSocketIdWithEmptyPath(const struct FName& InSocketName);
	struct FSocketId MakeSocketId(const struct FString& InPath, const struct FName& InSocketName);
};


// Class AthenaSocketLookup.SocketLookupCacheTestFunctions
// 0x0000 (0x0028 - 0x0028)
class USocketLookupCacheTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaSocketLookup.SocketLookupCacheTestFunctions")); }
		return ptr;
	}


	bool IsInCache(const struct FSocketId& InSocketId, struct FSocketLookupCache* InCache);
	bool AddToCache(const struct FSocketId& InSocketId, class USceneComponent* InSceneComponent, struct FSocketLookupCache* InCache);
};


// Class AthenaSocketLookup.SocketLookupFunctions
// 0x0000 (0x0028 - 0x0028)
class USocketLookupFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaSocketLookup.SocketLookupFunctions")); }
		return ptr;
	}


	bool TryGetSocketTransformWithCache(class AActor* InActor, const struct FSocketId& InSocketId, struct FSocketLookupCache* Cache, struct FTransform* OutTransform);
	bool TryGetSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, TEnumAsByte<ERelativeTransformSpace> Space, struct FTransform* OutTransform);
	bool TryGetRelativeSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, class USceneComponent* RelativeTo, struct FTransform* OutTransform);
	class USceneComponent* TryFindSocketOwner(class AActor* InActor, const struct FSocketId& InSocketId);
};


// Class AthenaSocketLookup.SocketLookupInterface
// 0x0000 (0x0028 - 0x0028)
class USocketLookupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaSocketLookup.SocketLookupInterface")); }
		return ptr;
	}


	bool FindSocket(const struct FSocketId& InSocketId, struct FTransform* OutTransform);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
