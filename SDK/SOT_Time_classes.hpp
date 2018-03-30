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

// Class Time.TimeInterface
// 0x0000 (0x0028 - 0x0028)
class UTimeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Time.TimeInterface")); }
		return ptr;
	}


	struct FDateTime GetTime();
	struct FDateTime GetSmoothRealWorldTime();
	struct FDateTime GetPreciseRealWorldTime();
};


// Class Time.DebugTimeInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugTimeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Time.DebugTimeInterface")); }
		return ptr;
	}


	void SetTimeSlowdownScalar(float RequestedSlowdownScalar);
	void SetTimeScalar(int RequestedTimeScalar);
	void SetTimeCatchupScalar(float RequestedCatchupScalar);
	void SetGameWorldTime(const struct FDateTime& RequestedTime);
	float GetTimeSlowdownScalar();
	int GetTimeScalar();
	float GetTimeCatchupScalar();
	void EnableQueryServiceTime(bool Enable);
};


// Class Time.TimeBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Time.TimeBlueprintLibrary")); }
		return ptr;
	}


	struct FReplicatedDateTime MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime);
	struct FDateTime MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime);
	struct FDateTime MakeDateTimeFromRaw(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond);
	bool DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance);
};


// Class Time.TimeService
// 0x0080 (0x04E8 - 0x0468)
class ATimeService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0468(0x0028) MISSED OFFSET
	struct FTimespan                                   GameWorldTimeOffset;                                      // 0x0490(0x0008) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance)
	struct FReplicatedDateTime                         ReplicatedServerTime;                                     // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net)
	uint32_t                                           TimeScalar;                                               // 0x04A0(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SynchronizeTimeSpeedupRate;                               // 0x04A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SynchronizeTimeSlowdownRate;                              // 0x04A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	double                                             ServiceTimeQueryRapidFrequencyOffsetMax;                  // 0x04B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ServiceTimeQueryRapidFrequencyInSeconds;                  // 0x04B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ServiceTimeQueryFrequencyInSeconds;                       // 0x04BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ClientTimeUpdateFrequencyInSeconds;                       // 0x04C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x04C4(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Time.TimeService")); }
		return ptr;
	}


	void OnRep_ReplicatedServerTime();
	void MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks);
};


// Class Time.DebugTimeService
// 0x0008 (0x04F0 - 0x04E8)
class ADebugTimeService : public ATimeService
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Time.DebugTimeService")); }
		return ptr;
	}


	void MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset);
	void MulticastOnSynchronizeTimeSpeedupRateRPC(float Rate);
	void MulticastOnSynchronizeTimeSlowdownRateRPC(float Rate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
