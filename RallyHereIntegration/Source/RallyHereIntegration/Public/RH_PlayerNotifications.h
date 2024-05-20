// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAuthContext.h"
#include "PlayerNotificationAPI.h"
#include "Notification.h"
#include "Notifications.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"
#include "Engine/TimerHandle.h"

#include "UsersAPI.h"

#include "RH_PlayerNotifications.generated.h"

// Streaming Delegates
UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRH_OnNotificationStreamedDynamicDelegate, const FRHAPI_Notification&, Notification, const FString&, APIName, const TArray<FString>&, APIParams);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FRH_OnNotificationStreamedDelegate, const FRHAPI_Notification&, const FString&, const TArray<FString>&);

// Paging Delegates
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnNotificationsPagedDynamicDelegate, bool, bSuccess, const FRHAPI_Notifications&, Notifications, const FRH_ErrorInfo&, Resp);
DECLARE_DELEGATE_ThreeParams(FRH_OnNotificationsPagedDelegate, bool, const FRHAPI_Notifications&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnNotificationsPagedDelegateBlock, FRH_OnNotificationsPagedDelegate, FRH_OnNotificationsPagedDynamicDelegate, bool, const FRHAPI_Notifications&, const FRH_ErrorInfo&);

// Singular Notification Delegates
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnGetSingularNotificationDynamicDelegate, bool, bSuccess, const FRHAPI_Notification&, Notification, const FRH_ErrorInfo&, Resp);
DECLARE_DELEGATE_ThreeParams(FRH_OnGetSingularNotificationDelegate, bool, const FRHAPI_Notification&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetSingularNotificationDelegateBlock, FRH_OnGetSingularNotificationDelegate, FRH_OnGetSingularNotificationDynamicDelegate, bool, const FRHAPI_Notification&, const FRH_ErrorInfo&);

// Singular Notification ID Delegates
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnSingularNotificationIDDynamicDelegate, bool, bSuccess, const FString&, NotificationId, const FRH_ErrorInfo&, Resp);
DECLARE_DELEGATE_ThreeParams(FRH_OnSingularNotificationIDDelegate, bool, const FString&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnSingularNotificationIDDelegateBlock, FRH_OnSingularNotificationIDDelegate, FRH_OnSingularNotificationIDDynamicDelegate, bool, const FString&, const FRH_ErrorInfo&);


DECLARE_DELEGATE_FourParams(FRH_OnNotificationsStreamedHelperDelegate, bool bSuccess, const FString&, float, const FRHAPI_Notifications&);

/** @defgroup Notifications RallyHere Notifications
 *  @{
 */

/**
 * @brief Enum to define how to poll for notifications.
 */
UENUM(BlueprintType)
enum class FRH_NotificationPollingTypes : uint8
{
	/** Long Polling sends a web request to the server and the server responds when there is content to push. */
	LongPoll
};

/**
 * @brief Notification Subsystem used for polling notifications of updates.
 */
UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerNotifications : public UObject
{
	GENERATED_BODY()

public:
	/**
	* @brief Initialize the subsystem.
	*/
	virtual void Initialize();

	/**
	 * @brief Gets the player info set on the subsystem.
	 * @return The set player info.
	 */
	URH_PlayerInfo* GetPlayerInfo() const { return PlayerInfo; }

	/**
	 * @brief Gets the associated player infos Unique Player Id.
	 * @return The set player infos Unique Player Id.
	 */
	FGuid GetRHPlayerUuid() const;

	/**
	 * @brief Gets the Auth Context that has authority to operate on this players inventory.
	 * @return The local or instance Auth Context.
	 */
	FAuthContextPtr GetAuthContext() const;

	/**
	 * @brief Sets the Player Info owner of the subsystem.
	 */
	void SetPlayerInfo(URH_PlayerInfo* InPlayerInfo) { PlayerInfo = InPlayerInfo; }

	// Streaming functions

	/**
	 * @brief Starts streaming notifications from the server.
	 * @param [in] Cursor The cursor to start streaming from.
	 */
	UFUNCTION(BlueprintCallable, Category = "Notification|Streaming")
	void StartStreamingLatestNotifications(const FString& Cursor = TEXT(""));
	/**
	 * @brief Stops streaming notifications from the server.
	 * @param [in] bClearCache if true, clears the notification streaming history.
	 */
	UFUNCTION(BlueprintCallable, Category = "Notification|Streaming")
	void StopStreamingLatestNotifications(bool bClearCache = true);
	/**
	 * @brief Gets if notifications are currenly being streamed.
	 */
	UFUNCTION(BlueprintPure, Category = "Notification|Streaming")
	bool IsStreaming() const { return bIsStreaming; }
	/**
	 * @brief Sets the amount of notifications to cache.
	 * @param [in] Size The number of notifications to store in the streaming history.
	 */
	UFUNCTION(BlueprintSetter, Category = "Notification|Streaming")
	void SetStreamingHistorySize(int32 Size) { StreamingHistorySize = Size;  TrimStreamingHistory(); }
	/**
	 * @brief Gets the max size of the history cache.
	 */
	UFUNCTION(BlueprintGetter, Category = "Notification|Streaming")
	int32 GetStreamingHistorySize() const { return StreamingHistorySize; }
	/**
	 * @brief Gets the notification history cache.
	 */
	UFUNCTION(BlueprintGetter, Category = "Notification|Streaming")
	const TArray<FRHAPI_Notification>& GetStreamingHistory() const { return StreamingHistory; }
	/**
	 * @brief Clears the notification history cache.
	 */
	UFUNCTION(BlueprintCallable, Category = "Notification|Streaming")
	void ClearStreamingHistory() { StreamingHistory.Reset(); }
	/**
	 * @brief Gets the current cursor for streaming notifications.
	 */
	UFUNCTION(BlueprintGetter, Category = "Notification|Streaming")
	const FString& GetStreamingCursor() const { return StreamingCursor; }
	/**
	 * @brief Gets the unique player id the notifications are being streamed for.
	 */
	UFUNCTION(BlueprintGetter, Category = "Notification|Streaming")
	const FGuid& GetStreamingPlayerUuid() const { return StreamingPlayerUuid; }
	/**
	 * @brief Delegate to listen to for when a notification is streamed.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Notification|Streaming")
	FRH_OnNotificationStreamedDynamicDelegate OnNotificationStreamedDynamic;
	/**
	 * @brief Delegate to listen to for when a notification is streamed.
	 */
	FRH_OnNotificationStreamedDelegate OnNotificationStreamed;
	/**
	* @brief Specialty version available only to C++, as cannot bind a TMap to a delegate in a UPROPERTY
	*/
	TMap<FString, FRH_OnNotificationStreamedDelegate> OnNotificationStreamedByAPI;

	// Create Notification
	/**
	 * @brief Creates a notification, mostly used for debugging as notifications generally originate from the core.
	 * @param [in] PlayerUuid The player Id to create the notification for.
	 * @param [in] Message A text message on the notification.
	 * @param [in] RhUrl Path to get additional data about the notification.
	 * @param [in] CustomData Custom data added to the notification.
	 * @param [in] Delegate Callback when the notification is created or fails to create.
	 * @return True, if the notification was created.
	 */
	bool CreateNotification(const FGuid& PlayerUuid,
		const FString& Message,
		const FString& RhUrl,
		const TMap<FString, FString>& CustomData = TMap <FString, FString>(),
		const FRH_OnSingularNotificationIDDelegateBlock& Delegate = FRH_OnSingularNotificationIDDelegateBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Notification|Create", meta = (DisplayName = "Create a Notification -- Mostly for debugging", AutoCreateRefTerm="CustomData,Delegate"))
	bool BLUEPRINT_CreateNotification(const FGuid& PlayerUuid,
	                                  const FString& Message,
	                                  const FString& RhUrl,
	                                  const TMap<FString, FString>& CustomData,
	                                  const FRH_OnSingularNotificationIDDynamicDelegate& Delegate)
	{
		return CreateNotification(PlayerUuid, Message, RhUrl, CustomData, Delegate);
	}

protected:
	/**
	 * @brief Restarts the long poll loop (potentially with deferal) to long poll for notifications.
	 */
	virtual void RestartLongPollLoop(bool bPreviousPollSuccess = true);
	/**
	 * @brief Starts a long poll for Notifications.
	 */
	virtual void StartLongPoll();
	/**
	* @brief Handles the response to a Nofitication poll.
	* @param [in] bSuccess True if the poll was successful.
	* @param [in] CursorAfter The cursor position for future notification polling.
	* @param [in] RequestDuration The duration until the poll was responded to.
	* @param [in] Resp Response given for the poll.
	*/
	virtual void OnNotificationsStreamed(bool bSuccess, const FString& CursorAfter, float RequestDuration, const FRHAPI_Notifications& Resp);
	/**
	* @brief Handles the response to a Nofitication Creation call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnNotificationCreated(const RallyHereAPI::FResponse_PlayerCreateNotification& Resp, const FRH_OnSingularNotificationIDDelegateBlock Delegate);
	/**
	 * @brief Keeps the notification history size within the configured size for the cache.
	 */
	void TrimStreamingHistory()
	{
		if (StreamingHistory.Num() > StreamingHistorySize)
		{
			StreamingHistory.RemoveAt(0, StreamingHistory.Num() - StreamingHistorySize);
		}
	}
	/** @brief The polling type to use, defaults to Long Poll. */
	UPROPERTY(Config)
	FRH_NotificationPollingTypes PollingType;
	/** @brief Helper for making long polling requests. */
	TSharedPtr<class FRH_NotificationStreamingLongPollHelper> LongPollHelper;
	/** @brief Player Uuid for that the notifications are being polled for. */
	UPROPERTY(VisibleInstanceOnly, Category = "Notification|Streaming", BlueprintGetter = GetStreamingPlayerUuid, Transient)
	FGuid StreamingPlayerUuid;
	/** @brief Cursor location of the last poll response. */
	UPROPERTY(VisibleInstanceOnly, Category = "Notification|Streaming", BlueprintGetter = GetStreamingCursor, Transient)
	FString StreamingCursor;
	/** @brief If ture, then polling is actively being done by the system. */
	UPROPERTY(VisibleInstanceOnly, Category = "Notification|Streaming", BlueprintGetter = IsStreaming, Transient)
	bool bIsStreaming;
	/** @brief Cache of the polled notifications. */
	UPROPERTY(VisibleInstanceOnly, Category = "Notification|Streaming", BlueprintGetter = GetStreamingHistory, Transient)
	TArray<FRHAPI_Notification> StreamingHistory;
	/** @brief The number of cached notifications to store before purging old ones. */
	UPROPERTY(Config, VisibleInstanceOnly, Category = "Notification|Streaming", BlueprintGetter = GetStreamingHistorySize, BlueprintSetter = SetStreamingHistorySize, Transient)
	int32 StreamingHistorySize;
	/** @brief The player info associated with the notification polling. */
	UPROPERTY(Transient)
	URH_PlayerInfo* PlayerInfo;

	/** @brief The delay to use before the next poll starts. */
	UPROPERTY(Transient)
	float NextLongPollDelay;
	/** @brief The max delay to use before the next poll starts. */
	UPROPERTY(Config)
	float MaxLongPollDelay;
	/** @brief The timer handler for long poll deferrals. */
	UPROPERTY(Transient)
	FTimerHandle LongPollDeferralHandle;

};

/** @} */