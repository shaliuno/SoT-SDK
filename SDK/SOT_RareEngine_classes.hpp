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

// Class RareEngine.RareGameEngine
// 0x0050 (0x0AA8 - 0x0A58)
class URareGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0A58(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareEngine.RareGameEngine")); }
		return ptr;
	}

};


// Class RareEngine.AudioHardwareDeviceService
// 0x01E8 (0x0210 - 0x0028)
class UAudioHardwareDeviceService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0028(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareEngine.AudioHardwareDeviceService")); }
		return ptr;
	}

};


// Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHitchDiagnosisBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary")); }
		return ptr;
	}


	void SetHitchThreshold(int InThreshold);
	struct FString GetMaxHitchNameThisFrame();
	int GetMaxHitchLengthThisFrameMs();
	void DumpThisFramesHitchesToLog();
	bool DidHitchOccurThisFrame();
};


// Class RareEngine.MemoryUsageVisualiserSettings
// 0x0010 (0x0038 - 0x0028)
class UMemoryUsageVisualiserSettings : public UObject
{
public:
	TArray<struct FMemoryVisualiserCategory>           VisualiserCategories;                                     // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareEngine.MemoryUsageVisualiserSettings")); }
		return ptr;
	}

};


// Class RareEngine.RareHUD
// 0x0000 (0x0560 - 0x0560)
class ARareHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareEngine.RareHUD")); }
		return ptr;
	}

};


// Class RareEngine.StallDetector
// 0x0028 (0x0050 - 0x0028)
class UStallDetector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    Callback;                                                 // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareEngine.StallDetector")); }
		return ptr;
	}


	void Deactivate();
	class UStallDetector* CreateStallDetector(float Delay, bool CreateActive);
	void Activate();
};


// Class RareEngine.StaticMeshActorBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UStaticMeshActorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class RareEngine.StaticMeshActorBlueprintLibrary")); }
		return ptr;
	}


	void FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshComponentList>* OutComponentLists);
	void FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshActorList>* OutActorLists);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
