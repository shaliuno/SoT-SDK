#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameService.GameServiceMapFunctions.UnregisterService
struct UGameServiceMapFunctions_UnregisterService_Params
{
	struct FGameServiceMap                             ServiceMap;                                               // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UObject*                                     Service;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
};

// Function GameService.GameServiceMapFunctions.RegisterService
struct UGameServiceMapFunctions_RegisterService_Params
{
	struct FGameServiceMap                             ServiceMap;                                               // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UObject*                                     Service;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0058
};

// Function GameService.GameServiceMapFunctions.GetService
struct UGameServiceMapFunctions_GetService_Params
{
	struct FGameServiceMap                             ServiceMap;                                               // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0058
};

// Function GameService.GameServiceMapFunctions.GetNumServices
struct UGameServiceMapFunctions_GetNumServices_Params
{
	struct FGameServiceMap                             ServiceMap;                                               // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0050
};

// Function GameService.GameServiceProviderInterface.UnregisterService
struct UGameServiceProviderInterface_UnregisterService_Params
{
	class UObject*                                     Service;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function GameService.GameServiceProviderInterface.RegisterService
struct UGameServiceProviderInterface_RegisterService_Params
{
	class UObject*                                     Service;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function GameService.GameServiceProviderInterface.GetService
struct UGameServiceProviderInterface_GetService_Params
{
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
