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

// Class ServerEnvironment.DefaultServerEnvironmentSettings
// 0x0010 (0x0038 - 0x0028)
class UDefaultServerEnvironmentSettings : public UObject
{
public:
	struct FString                                     EnvironmentId;                                            // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class ServerEnvironment.DefaultServerEnvironmentSettings")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
