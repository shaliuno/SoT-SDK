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

// Class AthenaRigging.InstancedRopeComponent
// 0x00C0 (0x0710 - 0x0650)
class UInstancedRopeComponent : public UPrimitiveComponent
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x0650(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FInstancedRopeParams>                Ropes;                                                    // 0x0658(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	int                                                ShadowLOD;                                                // 0x0668(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x066C(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaRigging.InstancedRopeComponent")); }
		return ptr;
	}


	void SetUnderwater(bool Underwater);
	void SetRopes(TArray<struct FInstancedRopeParams> InRopes);
};


// Class AthenaRigging.MaterialExpressionRopeParameter
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionRopeParameter : public UMaterialExpression
{
public:
	TEnumAsByte<EInstancedRopeParameterType>           RopeParameterType;                                        // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaRigging.MaterialExpressionRopeParameter")); }
		return ptr;
	}

};


// Class AthenaRigging.RiggingSystem
// 0x0120 (0x0588 - 0x0468)
class ARiggingSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	class USceneComponent*                             Root;                                                     // 0x0470(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UInstancedRopeComponent*                     InstancedRopes;                                           // 0x0478(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FRiggingSystemLine>                  Lines;                                                    // 0x0480(0x0010) (CPF_ZeroConstructor)
	TArray<struct FInstancedRopeParams>                Ropes;                                                    // 0x0490(0x0010) (CPF_ZeroConstructor)
	struct FRiggingSystemPulleyData                    Pulleys;                                                  // 0x04A0(0x0060)
	TArray<struct FSocketId>                           Sockets;                                                  // 0x0500(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      InitialMainRopeLengths;                                   // 0x0510(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0520(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaRigging.RiggingSystem")); }
		return ptr;
	}

};


// Class AthenaRigging.RiggingSystemComponent
// 0x0040 (0x0320 - 0x02E0)
class URiggingSystemComponent : public USceneComponent
{
public:
	struct FRopeStyleParams                            RopeStyle;                                                // 0x02E0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FRiggingSystemLineParams>            Lines;                                                    // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class ARiggingSystem*                              Impl;                                                     // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaRigging.RiggingSystemComponent")); }
		return ptr;
	}


	void SetSocketLookupSource(class AActor* InSocketSource);
};


// Class AthenaRigging.RopeInterface
// 0x0000 (0x0028 - 0x0028)
class URopeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaRigging.RopeInterface")); }
		return ptr;
	}


	void SetRopeUVOffset(float InUVOffset);
	void SetRopeEndpoints(const struct FVector& InWorldSpaceStart, const struct FVector& InWorldSpaceEnd);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
