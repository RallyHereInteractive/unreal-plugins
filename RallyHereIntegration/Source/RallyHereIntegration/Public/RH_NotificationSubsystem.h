#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPI/Public/PlayerNotificationAPI.h"
#include "RallyHereAPI/Public/Notification.h"
#include "RallyHereAPI/Public/Notifications.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"

#include "UsersAPI.h"

#include "RH_NotificationSubsystem.generated.h"

USTRUCT(BlueprintType)
struct FRH_RespErrorInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Error")
	int32 ResponseCode{};
	UPROPERTY(BlueprintReadOnly, Category = "Error")
	FString ResponseContent{};

	FRH_RespErrorInfo() = default;

	FRH_RespErrorInfo(const RallyHereAPI::FResponse* Response)
	{
		if (Response)
		{
			if (Response->GetHttpResponse().IsValid())
			{
				const auto HttpResp = Response->GetHttpResponse();
				ResponseCode = HttpResp->GetResponseCode();
				ResponseContent = HttpResp->GetContentAsString();
			}
		}
	}

	FRH_RespErrorInfo(const RallyHereAPI::FResponse& Response) : FRH_RespErrorInfo(&Response)
	{
	}

	virtual ~FRH_RespErrorInfo() = default;
};

UENUM(BlueprintType)
enum class FRH_NotificationPollingTypes : uint8
{
	LongPoll,
	WebSocket,
	HotPoll
};


// Streaming Delegates
UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRH_OnNotificationStreamedDynamicDelegate, const FRHAPI_Notification&, Notification, const FString&, APIName, const TArray<FString>&, APIParams);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FRH_OnNotificationStreamedDelegate, const FRHAPI_Notification&, const FString&, const TArray<FString>&);

// Paging Delegates
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnNotificationsPagedDynamicDelegate, bool, bSuccess, const FRHAPI_Notifications&, Notifications, const FRH_RespErrorInfo&, Resp);
DECLARE_DELEGATE_ThreeParams(FRH_OnNotificationsPagedDelegate, bool, const FRHAPI_Notifications&, const FRH_RespErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnNotificationsPagedDelegateBlock, FRH_OnNotificationsPagedDelegate, FRH_OnNotificationsPagedDynamicDelegate, bool, const FRHAPI_Notifications&, const FRH_RespErrorInfo&);

// Singular Notification Delegates
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnGetSingularNotificationDynamicDelegate, bool, bSuccess, const FRHAPI_Notification&, Notification, const FRH_RespErrorInfo&, Resp);
DECLARE_DELEGATE_ThreeParams(FRH_OnGetSingularNotificationDelegate, bool, const FRHAPI_Notification&, const FRH_RespErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetSingularNotificationDelegateBlock, FRH_OnGetSingularNotificationDelegate, FRH_OnGetSingularNotificationDynamicDelegate, bool, const FRHAPI_Notification&, const FRH_RespErrorInfo&);

// Singular Notification ID Delegates
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnSingularNotificationIDDynamicDelegate, bool, bSuccess, const FString&, NotificationId, const FRH_RespErrorInfo&, Resp);
DECLARE_DELEGATE_ThreeParams(FRH_OnSingularNotificationIDDelegate, bool, const FString&, const FRH_RespErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnSingularNotificationIDDelegateBlock, FRH_OnSingularNotificationIDDelegate, FRH_OnSingularNotificationIDDynamicDelegate, bool, const FString&, const FRH_RespErrorInfo&);


DECLARE_DELEGATE_FourParams(FRH_OnNotificationsStreamedHelperDelegate, bool bSuccess, const FString&, float, const FRHAPI_Notifications&);


UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_NotificationSubsystem : public URH_LocalPlayerSubsystemPlugin
{
	GENERATED_BODY()

public:
	virtual void Initialize() override;
	virtual void Deinitialize() override;
	virtual void OnUserChanged() override;

	// Streaming functions

	UFUNCTION(BlueprintCallable, Category = "Notification|Streaming")
	void StartStreamingLatestNotifications(const FGuid& PlayerUuid, const FString& Cursor = TEXT(""));

	UFUNCTION(BlueprintCallable, Category = "Notification|Streaming")
	void StopStreamingLatestNotifications();

	UFUNCTION(BlueprintPure, Category = "Notification|Streaming")
	bool IsStreaming() const { return bIsStreaming; }

	UFUNCTION(BlueprintSetter, Category = "Notification|Streaming")
	void SetStreamingHistorySize(int32 Size) { StreamingHistorySize = Size;  TrimStreamingHistory(); }

	UFUNCTION(BlueprintGetter, Category = "Notification|Streaming")
	int32 GetStreamingHistorySize() const { return StreamingHistorySize; }

	UFUNCTION(BlueprintGetter, Category = "Notification|Streaming")
	const TArray<FRHAPI_Notification>& GetStreamingHistory() const { return StreamingHistory; }

	UFUNCTION(BlueprintCallable, Category = "Notification|Streaming")
	void ClearStreamingHistory() { StreamingHistory.Reset(); }

	UFUNCTION(BlueprintGetter, Category = "Notification|Streaming")
	const FString& GetStreamingCursor() const { return StreamingCursor; }

	UFUNCTION(BlueprintGetter, Category = "Notification|Streaming")
	const FGuid& GetStreamingPlayerUuid() const { return StreamingPlayerUuid; }

	UPROPERTY(BlueprintReadWrite, Category = "Notification|Streaming")
	FRH_OnNotificationStreamedDynamicDelegate OnNotificationStreamedDynamic;
	FRH_OnNotificationStreamedDelegate OnNotificationStreamed;

	// specialty version available only to C++, as cannot bind a TMap to a delegate in a UPROPERTY
	TMap<FString, FRH_OnNotificationStreamedDelegate> OnNotificationStreamedByAPI;

	// Create Notification

	UFUNCTION(BlueprintCallable, Category = "Notification|Create", meta = (DisplayName = "Create a Notification -- Mostly for debugging", AutoCreateRefTerm="CustomData,Delegate"))
	bool BLUEPRINT_CreateNotification(const FGuid& PlayerUuid,
	                                  const FString& Message,
	                                  const FString& RhUrl,
	                                  const TMap<FString, FString>& CustomData,
	                                  const FRH_OnSingularNotificationIDDynamicDelegate& Delegate)
	{
		return CreateNotification(PlayerUuid, Message, RhUrl, CustomData, Delegate);
	}

	bool CreateNotification(const FGuid& PlayerUuid,
	                        const FString& Message,
	                        const FString& RhUrl,
	                        const TMap<FString, FString>& CustomData = TMap <FString, FString>(),
	                        const FRH_OnSingularNotificationIDDelegateBlock& Delegate = FRH_OnSingularNotificationIDDelegateBlock());

private:
	void StartLongPoll();

	void OnNotificationsStreamed(bool bSuccess, const FString& CursorAfter, float RequestDuration, const FRHAPI_Notifications& Resp);
	void OnNotificationCreated(const RallyHereAPI::FResponse_PlayerCreateNotification& Resp, const FRH_OnSingularNotificationIDDelegateBlock Delegate);

	void TrimStreamingHistory()
	{
		if (StreamingHistory.Num() > StreamingHistorySize)
		{
			StreamingHistory.RemoveAt(0, StreamingHistory.Num() - StreamingHistorySize);
		}
	}


	UPROPERTY(Config)
	FRH_NotificationPollingTypes PollingType;

	TSharedPtr<class FRH_NotificationStreamingLongPollHelper> LongPollHelper;

	UPROPERTY(VisibleInstanceOnly, Category = "Notification|Streaming", BlueprintGetter = GetStreamingPlayerUuid, Transient)
	FGuid StreamingPlayerUuid;

	UPROPERTY(VisibleInstanceOnly, Category = "Notification|Streaming", BlueprintGetter = GetStreamingCursor, Transient)
	FString StreamingCursor;

	UPROPERTY(VisibleInstanceOnly, Category = "Notification|Streaming", BlueprintGetter = IsStreaming, Transient)
	bool bIsStreaming;

	UPROPERTY(VisibleInstanceOnly, Category = "Notification|Streaming", BlueprintGetter = GetStreamingHistory, Transient)
	TArray<FRHAPI_Notification> StreamingHistory;

	UPROPERTY(Config, VisibleInstanceOnly, Category = "Notification|Streaming", BlueprintGetter = GetStreamingHistorySize, BlueprintSetter = SetStreamingHistorySize, Transient)
	int32 StreamingHistorySize;
};
