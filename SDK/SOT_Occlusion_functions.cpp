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

// Function Occlusion.OcclusionFunctionLibrary.IsActorOccludedFromActor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Observer                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Target                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 TargetPosition                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InteractionPointRadius         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          AdditionalIgnoredActors        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TEnumAsByte<EOcclusionTypes>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EOcclusionTypes> UOcclusionFunctionLibrary::IsActorOccludedFromActor(class UObject* WorldContextObject, class AActor* Observer, class AActor* Target, const struct FVector& TargetPosition, float InteractionPointRadius, TArray<class AActor*> AdditionalIgnoredActors)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Occlusion.OcclusionFunctionLibrary.IsActorOccludedFromActor"));}

	UOcclusionFunctionLibrary_IsActorOccludedFromActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Observer = Observer;
	params.Target = Target;
	params.TargetPosition = TargetPosition;
	params.InteractionPointRadius = InteractionPointRadius;
	params.AdditionalIgnoredActors = AdditionalIgnoredActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Occlusion.OcclusionInterface.IsActorOccludedFromActor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// class AActor*                  Observer                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Target                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 TargetPosition                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Tolerance                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ECollisionChannel> CollisionChannel               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          AdditionalIgnoredActors        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TEnumAsByte<EOcclusionTypes>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EOcclusionTypes> UOcclusionInterface::IsActorOccludedFromActor(class AActor* Observer, class AActor* Target, const struct FVector& TargetPosition, float Tolerance, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<class AActor*> AdditionalIgnoredActors)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Occlusion.OcclusionInterface.IsActorOccludedFromActor"));}

	UOcclusionInterface_IsActorOccludedFromActor_Params params;
	params.Observer = Observer;
	params.Target = Target;
	params.TargetPosition = TargetPosition;
	params.Tolerance = Tolerance;
	params.CollisionChannel = CollisionChannel;
	params.AdditionalIgnoredActors = AdditionalIgnoredActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
