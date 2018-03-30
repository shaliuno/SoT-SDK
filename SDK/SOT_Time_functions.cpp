// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Time.TimeInterface.GetTime
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FDateTime               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FDateTime UTimeInterface::GetTime()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.GetTime"));}

	UTimeInterface_GetTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Time.TimeInterface.GetSmoothRealWorldTime
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FDateTime               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FDateTime UTimeInterface::GetSmoothRealWorldTime()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.GetSmoothRealWorldTime"));}

	UTimeInterface_GetSmoothRealWorldTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Time.TimeInterface.GetPreciseRealWorldTime
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FDateTime               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FDateTime UTimeInterface::GetPreciseRealWorldTime()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.GetPreciseRealWorldTime"));}

	UTimeInterface_GetPreciseRealWorldTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Time.DebugTimeInterface.SetTimeSlowdownScalar
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          RequestedSlowdownScalar        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UDebugTimeInterface::SetTimeSlowdownScalar(float RequestedSlowdownScalar)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.SetTimeSlowdownScalar"));}

	UDebugTimeInterface_SetTimeSlowdownScalar_Params params;
	params.RequestedSlowdownScalar = RequestedSlowdownScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Time.DebugTimeInterface.SetTimeScalar
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            RequestedTimeScalar            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDebugTimeInterface::SetTimeScalar(int RequestedTimeScalar)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.SetTimeScalar"));}

	UDebugTimeInterface_SetTimeScalar_Params params;
	params.RequestedTimeScalar = RequestedTimeScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Time.DebugTimeInterface.SetTimeCatchupScalar
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          RequestedCatchupScalar         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UDebugTimeInterface::SetTimeCatchupScalar(float RequestedCatchupScalar)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.SetTimeCatchupScalar"));}

	UDebugTimeInterface_SetTimeCatchupScalar_Params params;
	params.RequestedCatchupScalar = RequestedCatchupScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Time.DebugTimeInterface.SetGameWorldTime
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FDateTime               RequestedTime                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UDebugTimeInterface::SetGameWorldTime(const struct FDateTime& RequestedTime)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.SetGameWorldTime"));}

	UDebugTimeInterface_SetGameWorldTime_Params params;
	params.RequestedTime = RequestedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Time.DebugTimeInterface.GetTimeSlowdownScalar
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDebugTimeInterface::GetTimeSlowdownScalar()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.GetTimeSlowdownScalar"));}

	UDebugTimeInterface_GetTimeSlowdownScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Time.DebugTimeInterface.GetTimeScalar
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UDebugTimeInterface::GetTimeScalar()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.GetTimeScalar"));}

	UDebugTimeInterface_GetTimeScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Time.DebugTimeInterface.GetTimeCatchupScalar
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDebugTimeInterface::GetTimeCatchupScalar()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.GetTimeCatchupScalar"));}

	UDebugTimeInterface_GetTimeCatchupScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Time.DebugTimeInterface.EnableQueryServiceTime
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           Enable                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDebugTimeInterface::EnableQueryServiceTime(bool Enable)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.EnableQueryServiceTime"));}

	UDebugTimeInterface_EnableQueryServiceTime_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
// (FUNC_Protected)
// Parameters:
// struct FDateTime               InDateTime                     (CPF_Parm, CPF_ZeroConstructor)
// struct FReplicatedDateTime     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FReplicatedDateTime UTimeBlueprintLibrary::MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime"));}

	UTimeBlueprintLibrary_MakeReplicatedDateTimeFromDateTime_Params params;
	params.InDateTime = InDateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
// (FUNC_Protected)
// Parameters:
// struct FReplicatedDateTime     InDateTime                     (CPF_Parm)
// struct FDateTime               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FDateTime UTimeBlueprintLibrary::MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime"));}

	UTimeBlueprintLibrary_MakeDateTimeFromReplicatedDateTime_Params params;
	params.InDateTime = InDateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// int                            Year                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Month                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Day                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Hour                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Minute                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Second                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Millisecond                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDateTime               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FDateTime UTimeBlueprintLibrary::MakeDateTimeFromRaw(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw"));}

	UTimeBlueprintLibrary_MakeDateTimeFromRaw_Params params;
	params.Year = Year;
	params.Month = Month;
	params.Day = Day;
	params.Hour = Hour;
	params.Minute = Minute;
	params.Second = Second;
	params.Millisecond = Millisecond;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FDateTime               FirstDateTime                  (CPF_Parm, CPF_ZeroConstructor)
// struct FDateTime               SecondDateTime                 (CPF_Parm, CPF_ZeroConstructor)
// struct FTimespan               Tolerance                      (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTimeBlueprintLibrary::DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance"));}

	UTimeBlueprintLibrary_DateTimesWithinTolerance_Params params;
	params.FirstDateTime = FirstDateTime;
	params.SecondDateTime = SecondDateTime;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Time.TimeService.OnRep_ReplicatedServerTime
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ATimeService::OnRep_ReplicatedServerTime()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeService.OnRep_ReplicatedServerTime"));}

	ATimeService_OnRep_ReplicatedServerTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Time.TimeService.MulticastOnServiceTimeChangedRPC
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int64_t                        ServiceTimeInTicks             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATimeService::MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeService.MulticastOnServiceTimeChangedRPC"));}

	ATimeService_MulticastOnServiceTimeChangedRPC_Params params;
	params.ServiceTimeInTicks = ServiceTimeInTicks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            Scalar                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int64_t                        Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADebugTimeService::MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC"));}

	ADebugTimeService_MulticastOnTimeScalarOffsetRPC_Params params;
	params.Scalar = Scalar;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Time.DebugTimeService.MulticastOnSynchronizeTimeSpeedupRateRPC
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Rate                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADebugTimeService::MulticastOnSynchronizeTimeSpeedupRateRPC(float Rate)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeService.MulticastOnSynchronizeTimeSpeedupRateRPC"));}

	ADebugTimeService_MulticastOnSynchronizeTimeSpeedupRateRPC_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Time.DebugTimeService.MulticastOnSynchronizeTimeSlowdownRateRPC
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Rate                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADebugTimeService::MulticastOnSynchronizeTimeSlowdownRateRPC(float Rate)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeService.MulticastOnSynchronizeTimeSlowdownRateRPC"));}

	ADebugTimeService_MulticastOnSynchronizeTimeSlowdownRateRPC_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
