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

// Class Niagara.NiagaraActor
// 0x0008 (0x0470 - 0x0468)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x0468(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraActor")); }
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x0010 (0x0660 - 0x0650)
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	class UNiagaraEffect*                              Asset;                                                    // 0x0650(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0658(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraComponent")); }
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x01A0 (0x01C8 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	TArray<unsigned char>                              ByteCode;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FNiagaraScriptConstantData                  ConstantData;                                             // 0x0038(0x0180)
	TArray<struct FNiagaraVariableInfo>                Attributes;                                               // 0x01B8(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraScript")); }
		return ptr;
	}

};


// Class Niagara.NiagaraEmitterProperties
// 0x00D0 (0x00F8 - 0x0028)
class UNiagaraEmitterProperties : public UObject
{
public:
	struct FString                                     EmitterName;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bIsEnabled;                                               // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnRate;                                                // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterial*                                   Material;                                                 // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEmitterRenderModuleType>              RenderModuleType;                                         // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndTime;                                                  // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UNiagaraEffectRendererProperties*            RendererProperties;                                       // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumLoops;                                                 // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0068(0x0048) (CPF_Edit)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x00B0(0x0048) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraEmitterProperties")); }
		return ptr;
	}

};


// Class Niagara.NiagaraEffect
// 0x0020 (0x0048 - 0x0028)
class UNiagaraEffect : public UObject
{
public:
	TArray<struct FDeprecatedNiagaraEmitterProperties> EmitterPropsSerialized;                                   // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	TArray<class UNiagaraEmitterProperties*>           EmitterProps;                                             // 0x0038(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraEffect")); }
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraFunctionLibrary")); }
		return ptr;
	}


	class UNiagaraComponent* SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	class UNiagaraComponent* SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
	void SetUpdateScriptConstant(class UNiagaraComponent* Component, const struct FName& EmitterName, const struct FName& ConstantName, const struct FVector& Value);
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraScriptSourceBase")); }
		return ptr;
	}

};


// Class Niagara.NiagaraSequence
// 0x0008 (0x0030 - 0x0028)
class UNiagaraSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraSequence")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
