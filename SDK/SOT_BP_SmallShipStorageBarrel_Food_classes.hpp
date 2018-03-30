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

// BlueprintGeneratedClass BP_SmallShipStorageBarrel_Food.BP_SmallShipStorageBarrel_Food_C
// 0x0008 (0x05F8 - 0x05F0)
class ABP_SmallShipStorageBarrel_Food_C : public AShipStorageContainer
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_SmallShipStorageBarrel_Food.BP_SmallShipStorageBarrel_Food_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
