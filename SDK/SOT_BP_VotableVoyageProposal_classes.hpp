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

// BlueprintGeneratedClass BP_VotableVoyageProposal.BP_VotableVoyageProposal_C
// 0x0070 (0x05F0 - 0x0580)
class ABP_VotableVoyageProposal_C : public AVotableObjectView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        Token_1;                                                  // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Token_4;                                                  // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Token_3;                                                  // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Token_2;                                                  // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UStaticMeshComponent*>                Tokens;                                                   // 0x05A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UStaticMesh*                                 Token_Asset;                                              // 0x05B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                VoteCount;                                                // 0x05C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	struct FWwiseEmitter                               Sound_Emitter;                                            // 0x05C8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              Show_Token_Animation_Time;                                // 0x05E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Token_Material;                                           // 0x05E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_VotableVoyageProposal.BP_VotableVoyageProposal_C")); }
		return ptr;
	}


	void PlayShowTokenAnimation(class UPrimitiveComponent* Token);
	void Is_Session_Locked(bool* IsLocked);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnVoteAdded(TScriptInterface<class UVoterInterface>* Voter);
	void OnVoteRemoved(TScriptInterface<class UVoterInterface>* Voter);
	void ExecuteUbergraph_BP_VotableVoyageProposal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
