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

// Function Time.TimeInterface.GetTime
struct UTimeInterface_GetTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Time.TimeInterface.GetSmoothRealWorldTime
struct UTimeInterface_GetSmoothRealWorldTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Time.TimeInterface.GetPreciseRealWorldTime
struct UTimeInterface_GetPreciseRealWorldTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function Time.DebugTimeInterface.SetTimeSlowdownScalar
struct UDebugTimeInterface_SetTimeSlowdownScalar_Params
{
	float                                              RequestedSlowdownScalar;                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Time.DebugTimeInterface.SetTimeScalar
struct UDebugTimeInterface_SetTimeScalar_Params
{
	int                                                RequestedTimeScalar;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Time.DebugTimeInterface.SetTimeCatchupScalar
struct UDebugTimeInterface_SetTimeCatchupScalar_Params
{
	float                                              RequestedCatchupScalar;                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function Time.DebugTimeInterface.SetGameWorldTime
struct UDebugTimeInterface_SetGameWorldTime_Params
{
	struct FDateTime                                   RequestedTime;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function Time.DebugTimeInterface.GetTimeSlowdownScalar
struct UDebugTimeInterface_GetTimeSlowdownScalar_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Time.DebugTimeInterface.GetTimeScalar
struct UDebugTimeInterface_GetTimeScalar_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Time.DebugTimeInterface.GetTimeCatchupScalar
struct UDebugTimeInterface_GetTimeCatchupScalar_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Time.DebugTimeInterface.EnableQueryServiceTime
struct UDebugTimeInterface_EnableQueryServiceTime_Params
{
	bool                                               Enable;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
struct UTimeBlueprintLibrary_MakeReplicatedDateTimeFromDateTime_Params
{
	struct FDateTime                                   InDateTime;                                               // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FReplicatedDateTime                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
struct UTimeBlueprintLibrary_MakeDateTimeFromReplicatedDateTime_Params
{
	struct FReplicatedDateTime                         InDateTime;                                               // (CPF_Parm) 0000
	struct FDateTime                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw
struct UTimeBlueprintLibrary_MakeDateTimeFromRaw_Params
{
	int                                                Year;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Month;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	int                                                Day;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                Hour;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	int                                                Minute;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	int                                                Second;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	int                                                Millisecond;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	struct FDateTime                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0020
};

// Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance
struct UTimeBlueprintLibrary_DateTimesWithinTolerance_Params
{
	struct FDateTime                                   FirstDateTime;                                            // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FDateTime                                   SecondDateTime;                                           // (CPF_Parm, CPF_ZeroConstructor) 0008
	struct FTimespan                                   Tolerance;                                                // (CPF_Parm, CPF_ZeroConstructor) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function Time.TimeService.OnRep_ReplicatedServerTime
struct ATimeService_OnRep_ReplicatedServerTime_Params
{
};

// Function Time.TimeService.MulticastOnServiceTimeChangedRPC
struct ATimeService_MulticastOnServiceTimeChangedRPC_Params
{
	int64_t                                            ServiceTimeInTicks;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC
struct ADebugTimeService_MulticastOnTimeScalarOffsetRPC_Params
{
	int                                                Scalar;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int64_t                                            Offset;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function Time.DebugTimeService.MulticastOnSynchronizeTimeSpeedupRateRPC
struct ADebugTimeService_MulticastOnSynchronizeTimeSpeedupRateRPC_Params
{
	float                                              Rate;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Time.DebugTimeService.MulticastOnSynchronizeTimeSlowdownRateRPC
struct ADebugTimeService_MulticastOnSynchronizeTimeSlowdownRateRPC_Params
{
	float                                              Rate;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
