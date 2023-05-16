#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAuthContext.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"

#include "UsersAPI.h"

#include "RH_PurgeSubsystem.generated.h"

#define HOURS_TO_ACCOUNT_FOR_CLOCK_DRIFT 1

USTRUCT(BlueprintType)
struct FRH_ErrorInfo
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly, Category = "Error")
	int32 ResponseCode;
	UPROPERTY(BlueprintReadOnly, Category = "Error")
	FString ResponseContent;

	FRH_ErrorInfo() : 
		ResponseCode(0),
		ResponseContent(TEXT(""))
	{
	}

	void ImportErrorInfo(const RallyHereAPI::FResponse& Response)
	{
		if (Response.GetHttpResponse().IsValid())
		{
			const auto HttpResp = Response.GetHttpResponse();
			ResponseCode = HttpResp->GetResponseCode();
			ResponseContent = HttpResp->GetContentAsString();
		}
	}
};

USTRUCT(BlueprintType)
struct FRH_PurgeStatus
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly, Category = "Purge")
	FGuid PersonId;
	UPROPERTY(BlueprintReadOnly, Category = "Purge")
	FString PurgeStatus;
	UPROPERTY(BlueprintReadOnly, Category = "Purge")
	FDateTime PurgeOn;
	UPROPERTY(BlueprintReadOnly, Category = "Purge")
	FDateTime CreatedOn;
	UPROPERTY(BlueprintReadOnly, Category = "Purge")
	FDateTime LastModifiedOn;

	void ImportAPIStatus(const FRHAPI_PurgeResponse& Response)
    {
    	PersonId = Response.PersonId;
    	PurgeStatus = Response.Status;
    	PurgeOn = Response.PurgeOn;
    	CreatedOn = Response.CreatedOn;
    	LastModifiedOn = Response.LastModifiedOn;
    }
};

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnPurgeStatusUpdatedDynamicDelegate, bool, bSuccess, FRH_PurgeStatus, PurgeStatus, FRH_ErrorInfo, Error);
DECLARE_DELEGATE_ThreeParams(FRH_OnPurgeStatusUpdatedDelegate, bool, FRH_PurgeStatus, FRH_ErrorInfo);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnPurgeStatusUpdatedDelegateBlock, FRH_OnPurgeStatusUpdatedDelegate, FRH_OnPurgeStatusUpdatedDynamicDelegate, bool, FRH_PurgeStatus, FRH_ErrorInfo);


UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PurgeSubsystem : public URH_LocalPlayerSubsystemPlugin
{
    GENERATED_BODY()
public:
    virtual void Initialize() override;
    virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable, Category = "Purge", meta = (DisplayName = "Enqueue Me for Purge with Purge Time", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_EnqueueMeForPurgeWithPurgeTime(FDateTime PurgeTime, const FRH_OnPurgeStatusUpdatedDynamicDelegate& Delegate) { return EnqueueMeForPurge(PurgeTime, Delegate); };
	bool EnqueueMeForPurge(FDateTime PurgeTime, FRH_OnPurgeStatusUpdatedDelegateBlock Delegate = FRH_OnPurgeStatusUpdatedDelegate())  { return EnqueueMeForPurge(TOptional<FDateTime>(PurgeTime), Delegate); };

	UFUNCTION(BlueprintCallable, Category = "Purge", meta = (DisplayName = "Enqueue Me for Purge", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_EnqueueMeForPurge(const FRH_OnPurgeStatusUpdatedDynamicDelegate& Delegate) { return EnqueueMeForPurge(Delegate); };
	bool EnqueueMeForPurge(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate = FRH_OnPurgeStatusUpdatedDelegate()) { return EnqueueMeForPurge(TOptional<FDateTime>(), Delegate); };

	UFUNCTION(BlueprintCallable, Category = "Purge", meta = (DisplayName = "Purge Me Immediately", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_PurgeMeImmediately(const FRH_OnPurgeStatusUpdatedDynamicDelegate& Delegate) { return PurgeMeImmediately(Delegate); };
	bool PurgeMeImmediately(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate = FRH_OnPurgeStatusUpdatedDelegate()) { return EnqueueMeForPurge(FDateTime::UtcNow() - FTimespan::FromHours(HOURS_TO_ACCOUNT_FOR_CLOCK_DRIFT), Delegate); };
	
	UFUNCTION(BlueprintCallable, Category = "Purge", meta = (DisplayName = "Dequeue Me for Purge", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_DequeueMeForPurge(const FRH_OnPurgeStatusUpdatedDynamicDelegate& Delegate) { return DequeueMeForPurge(Delegate); };
	bool DequeueMeForPurge(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate = FRH_OnPurgeStatusUpdatedDelegate());
	
	UFUNCTION(BlueprintCallable, Category = "Purge", meta = (DisplayName = "Get My Purge Status", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_QueryMyPurgeStatus(const FRH_OnPurgeStatusUpdatedDynamicDelegate& Delegate) { return QueryMyPurgeStatus(Delegate); };
	bool QueryMyPurgeStatus(FRH_OnPurgeStatusUpdatedDelegateBlock Delegate = FRH_OnPurgeStatusUpdatedDelegate());

	UFUNCTION(BlueprintGetter, Category = "Purge")
	FRH_PurgeStatus GetMyPurgeStatus() const { return PurgeStatus; }; 

private:
    virtual void OnUserChanged() override;

	bool EnqueueMeForPurge(TOptional<FDateTime> PurgeTime, FRH_OnPurgeStatusUpdatedDelegateBlock Delegate);
	
    void OnPurgeMe(const RallyHereAPI::FResponse_QueueMeForPurge& Resp,
                          FRH_OnPurgeStatusUpdatedDelegateBlock Delegate);
    void OnDequeueMe(const RallyHereAPI::FResponse_DequeueMeForPurge& Resp,
                           FRH_OnPurgeStatusUpdatedDelegateBlock Delegate);
    void OnGetMyPurgeStatus(const RallyHereAPI::FResponse_GetQueuePurgeStatusForMe& Resp,
                           FRH_OnPurgeStatusUpdatedDelegateBlock Delegate);

	FRH_PurgeStatus PurgeStatus; 
};
