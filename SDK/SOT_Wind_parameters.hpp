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

// Function Wind.WindInterface.UnregisterWindZone
struct UWindInterface_UnregisterWindZone_Params
{
	TScriptInterface<class UWindZoneInterface>         InWindZone;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Wind.WindInterface.TriggerChange
struct UWindInterface_TriggerChange_Params
{
	bool                                               ChangeInstantly;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Wind.WindInterface.SetParams
struct UWindInterface_SetParams_Params
{
	struct FWindServiceParams                          Params;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Wind.WindInterface.SetGlobalWindVector
struct UWindInterface_SetGlobalWindVector_Params
{
	struct FVector                                     InWindVector;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Wind.WindInterface.SetGlobalWindMagnitude
struct UWindInterface_SetGlobalWindMagnitude_Params
{
	float                                              InWindMagnitude;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Wind.WindInterface.SetGlobalWindDirection
struct UWindInterface_SetGlobalWindDirection_Params
{
	struct FVector                                     InWindDirection;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Wind.WindInterface.SetGlobalWindAngle
struct UWindInterface_SetGlobalWindAngle_Params
{
	float                                              InAngle;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Wind.WindInterface.RegisterWindZone
struct UWindInterface_RegisterWindZone_Params
{
	TScriptInterface<class UWindZoneInterface>         InWindZone;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Wind.WindInterface.GetWindZoneAtLocation
struct UWindInterface_GetWindZoneAtLocation_Params
{
	struct FVector                                     SamplePosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	TScriptInterface<class UWindZoneInterface>         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function Wind.WindInterface.GetWindVector
struct UWindInterface_GetWindVector_Params
{
	struct FVector                                     SamplePosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Wind.WindInterface.GetWindMagnitude
struct UWindInterface_GetWindMagnitude_Params
{
	struct FVector                                     SamplePosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Wind.WindInterface.GetWindDirection
struct UWindInterface_GetWindDirection_Params
{
	struct FVector                                     SamplePosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Wind.WindInterface.GetWindAngle
struct UWindInterface_GetWindAngle_Params
{
	struct FVector                                     SamplePosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 000C
};

// Function Wind.WindInterface.GetTurbulence
struct UWindInterface_GetTurbulence_Params
{
	struct FVector                                     SamplePosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FWindZoneTurbulence                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 000C
};

// Function Wind.WindInterface.GetMaxWindMagnitude
struct UWindInterface_GetMaxWindMagnitude_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Wind.WindZoneInterface.GetWindZoneParams
struct UWindZoneInterface_GetWindZoneParams_Params
{
	struct FWindZoneParams                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Wind.WindZoneInterface.GetWindZoneLocation
struct UWindZoneInterface_GetWindZoneLocation_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Wind.WindZoneInterface.GetTurbulence
struct UWindZoneInterface_GetTurbulence_Params
{
	struct FVector                                     Location;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FWindZoneTurbulence                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 000C
};

// Function Wind.WindFunctions.SetDefaultWindBlowingNorth
struct UWindFunctions_SetDefaultWindBlowingNorth_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Wind.WindFunctions.GetWindAtLocation
struct UWindFunctions_GetWindAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     WorldPosition;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function Wind.WindService.OnRep_WindMagnitude
struct AWindService_OnRep_WindMagnitude_Params
{
};

// Function Wind.WindService.OnRep_WindAngle
struct AWindService_OnRep_WindAngle_Params
{
};

// Function Wind.WindService.GetWindParams
struct AWindService_GetWindParams_Params
{
	struct FWindServiceParams                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual
struct UWindServiceParamsFunctionLibrary_AreWindServiceParamsEqual_Params
{
	struct FWindServiceParams                          Params1;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	struct FWindServiceParams                          Params2;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0024
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0048
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
