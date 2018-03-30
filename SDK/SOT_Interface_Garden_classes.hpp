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

// BlueprintGeneratedClass Interface_Garden.Interface_Garden_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_Garden_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Interface_Garden.Interface_Garden_C")); }
		return ptr;
	}


	void Set_Garden_Parameters(float Radius, int Int, bool* Instances_Created);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
