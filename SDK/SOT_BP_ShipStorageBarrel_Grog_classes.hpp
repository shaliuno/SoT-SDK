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

// BlueprintGeneratedClass BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C
// 0x0008 (0x0550 - 0x0548)
class ABP_ShipStorageBarrel_Grog_C : public ATankardRefiller
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C")); }
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius);
	bool ShouldDrawTooltipInWorldSpace(class AActor** InInteractor, struct FVector* DesiredTooltipWorldPosition);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
