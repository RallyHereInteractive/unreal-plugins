# group `Notifications` <a id="group__Notifications"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`FRH_NotificationPollingTypes`](#group__Notifications_1gace387863cbcb11c5932fc70080b2d724)            | Enum to define how to poll for notifications.
`class `[`URH_PlayerNotifications`](#classURH__PlayerNotifications) | Notification Subsystem used for polling notifications of updates.

## Members

#### `enum `[`FRH_NotificationPollingTypes`](#group__Notifications_1gace387863cbcb11c5932fc70080b2d724) <a id="group__Notifications_1gace387863cbcb11c5932fc70080b2d724"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
LongPoll            | Long Polling sends a web request to the server and the server responds when there is content to push.

Enum to define how to poll for notifications.

## class `URH_PlayerNotifications` <a id="classURH__PlayerNotifications"></a>

```
class URH_PlayerNotifications
  : public UObject
```

Notification Subsystem used for polling notifications of updates.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_OnNotificationStreamedDynamicDelegate `[`OnNotificationStreamedDynamic`](#classURH__PlayerNotifications_1aaf370914fbab7ae1e4d6d90cd1a7c17c) | Delegate to listen to for when a notification is streamed.
`public FRH_OnNotificationStreamedDelegate `[`OnNotificationStreamed`](#classURH__PlayerNotifications_1ab1e1c5a76082f64b939d8a88a7d8590d) | Delegate to listen to for when a notification is streamed.
`public TMap< FString, FRH_OnNotificationStreamedDelegate > `[`OnNotificationStreamedByAPI`](#classURH__PlayerNotifications_1a1452a94aa41139929fd6d84b7beff989) | Specialty version available only to C++, as cannot bind a TMap to a delegate in a UPROPERTY.
`public virtual void `[`Initialize`](#classURH__PlayerNotifications_1a81d80e9dc231e046e56406ea2f98f32b)`()` | Initialize the subsystem.
`public inline `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerNotifications_1a930863811488b9f22d9cc3ad6a31bf55)`() const` | Gets the player info set on the subsystem.
`public FGuid `[`GetRHPlayerUuid`](#classURH__PlayerNotifications_1af3db438fe9e033f223c7ae8fe49d7207)`() const` | Gets the associated player infos Unique Player Id.
`public FAuthContextPtr `[`GetAuthContext`](#classURH__PlayerNotifications_1aaaf349e01cb764899baeb5151686ff2b)`() const` | Gets the Auth Context that has authority to operate on this players inventory.
`public inline void `[`SetPlayerInfo`](#classURH__PlayerNotifications_1a85c903acc8824dd815258b3422a2530a)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * InPlayerInfo)` | Sets the Player Info owner of the subsystem.
`public void `[`StartStreamingLatestNotifications`](#classURH__PlayerNotifications_1a2711edfd257dfb4bcf6242a85bdc658b)`(const FString & Cursor)` | Starts streaming notifications from the server.
`public void `[`StopStreamingLatestNotifications`](#classURH__PlayerNotifications_1a0ddc5d4abc85edda59b9757cf08d7b73)`(bool bClearCache)` | Stops streaming notifications from the server.
`public inline bool `[`IsStreaming`](#classURH__PlayerNotifications_1a74837149464570caefd49854ebddafc1)`() const` | Gets if notifications are currenly being streamed.
`public inline void `[`SetStreamingHistorySize`](#classURH__PlayerNotifications_1aac53f07b03c118fc22333869867b80da)`(int32 Size)` | Sets the amount of notifications to cache.
`public inline int32 `[`GetStreamingHistorySize`](#classURH__PlayerNotifications_1a7c497c6358c33023cac59d15f1d32078)`() const` | Gets the max size of the history cache.
`public inline const TArray< `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetStreamingHistory`](#classURH__PlayerNotifications_1aedab4bbc1a1e6c59e9a23d1819b55d63)`() const` | Gets the notification history cache.
`public inline void `[`ClearStreamingHistory`](#classURH__PlayerNotifications_1a4d072865418e5292188c57bda8d3d4d4)`()` | Clears the notification history cache.
`public inline const FString & `[`GetStreamingCursor`](#classURH__PlayerNotifications_1ab626106ca160ac09e3eebb8a02f04f24)`() const` | Gets the current cursor for streaming notifications.
`public inline const FGuid & `[`GetStreamingPlayerUuid`](#classURH__PlayerNotifications_1ac4ce080fb03019b67f7f1534d5ac6239)`() const` | Gets the unique player id the notifications are being streamed for.
`public bool `[`CreateNotification`](#classURH__PlayerNotifications_1a847a88d9756e4dd4e8f14358816d3711)`(const FGuid & PlayerUuid,const FString & Message,const FString & RhUrl,const TMap< FString, FString > & CustomData,const FRH_OnSingularNotificationIDDelegateBlock & Delegate)` | Creates a notification, mostly used for debugging as notifications generally originate from the core.
`protected `[`FRH_NotificationPollingTypes`](undefined.md#group__Notifications_1gace387863cbcb11c5932fc70080b2d724)` `[`PollingType`](#classURH__PlayerNotifications_1a40c95a52389181570358ef990ce84912) | The polling type to use, defaults to Long Poll.
`protected TSharedPtr< class FRH_NotificationStreamingLongPollHelper > `[`LongPollHelper`](#classURH__PlayerNotifications_1a38ebff9ba57e162f812c688d60b48df0) | Helper for making long polling requests.
`protected FGuid `[`StreamingPlayerUuid`](#classURH__PlayerNotifications_1a8eccac51c9d87601a7eaff31eda54c51) | Player Uuid for that the notifications are being polled for.
`protected FString `[`StreamingCursor`](#classURH__PlayerNotifications_1a6d3c302b714c4138c2b7b8c3267d5797) | Cursor location of the last poll response.
`protected bool `[`bIsStreaming`](#classURH__PlayerNotifications_1a7aa90e7cef2fb1cc6e41e4f70102d26d) | If ture, then polling is actively being done by the system.
`protected TArray< `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` > `[`StreamingHistory`](#classURH__PlayerNotifications_1afd9c29d10b04dbbb9dfc45db0badf2d5) | Cache of the polled notifications.
`protected int32 `[`StreamingHistorySize`](#classURH__PlayerNotifications_1add7165e0ac8297b7fb22484981c01178) | The number of cached notifications to store before purging old ones.
`protected `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`PlayerInfo`](#classURH__PlayerNotifications_1a68ca966f25d236f47a0daa44a264b853) | The player info associated with the notification polling.
`protected float `[`NextLongPollDelay`](#classURH__PlayerNotifications_1a288e884fe0398426946010fbc2bd5891) | The delay to use before the next poll starts.
`protected float `[`MaxLongPollDelay`](#classURH__PlayerNotifications_1a3510b51a6bca1330b594754604933e4f) | The max delay to use before the next poll starts.
`protected FTimerHandle `[`LongPollDeferralHandle`](#classURH__PlayerNotifications_1ab2b566201fe898b46c537e02b8766427) | The timer handler for long poll deferrals.
`protected virtual void `[`RestartLongPollLoop`](#classURH__PlayerNotifications_1ab86249ecd1802147308a737a7d16780a)`(bool bPreviousPollSuccess)` | Restarts the long poll loop (potentially with deferal) to long poll for notifications.
`protected virtual void `[`StartLongPoll`](#classURH__PlayerNotifications_1a53a11f6613bff01aa95cfe82b02855f9)`()` | Starts a long poll for Notifications.
`protected virtual void `[`OnNotificationsStreamed`](#classURH__PlayerNotifications_1a66de68270859ef7889171e8c050b271b)`(bool bSuccess,const FString & CursorAfter,float RequestDuration,const `[`FRHAPI_Notifications`](models/RHAPI_Notifications.md#structFRHAPI__Notifications)` & Resp)` | Handles the response to a Nofitication poll.
`protected virtual void `[`OnNotificationCreated`](#classURH__PlayerNotifications_1a16ad788389a4551cfbb53c0899c27cdb)`(const RallyHereAPI::FResponse_PlayerCreateNotification & Resp,const FRH_OnSingularNotificationIDDelegateBlock Delegate)` | Handles the response to a Nofitication Creation call.
`protected inline void `[`TrimStreamingHistory`](#classURH__PlayerNotifications_1a05dfd936492620353632b25f85c41055)`()` | Keeps the notification history size within the configured size for the cache.

### Members

#### `public FRH_OnNotificationStreamedDynamicDelegate `[`OnNotificationStreamedDynamic`](#classURH__PlayerNotifications_1aaf370914fbab7ae1e4d6d90cd1a7c17c) <a id="classURH__PlayerNotifications_1aaf370914fbab7ae1e4d6d90cd1a7c17c"></a>

Delegate to listen to for when a notification is streamed.

#### `public FRH_OnNotificationStreamedDelegate `[`OnNotificationStreamed`](#classURH__PlayerNotifications_1ab1e1c5a76082f64b939d8a88a7d8590d) <a id="classURH__PlayerNotifications_1ab1e1c5a76082f64b939d8a88a7d8590d"></a>

Delegate to listen to for when a notification is streamed.

#### `public TMap< FString, FRH_OnNotificationStreamedDelegate > `[`OnNotificationStreamedByAPI`](#classURH__PlayerNotifications_1a1452a94aa41139929fd6d84b7beff989) <a id="classURH__PlayerNotifications_1a1452a94aa41139929fd6d84b7beff989"></a>

Specialty version available only to C++, as cannot bind a TMap to a delegate in a UPROPERTY.

#### `public virtual void `[`Initialize`](#classURH__PlayerNotifications_1a81d80e9dc231e046e56406ea2f98f32b)`()` <a id="classURH__PlayerNotifications_1a81d80e9dc231e046e56406ea2f98f32b"></a>

Initialize the subsystem.

#### `public inline `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerNotifications_1a930863811488b9f22d9cc3ad6a31bf55)`() const` <a id="classURH__PlayerNotifications_1a930863811488b9f22d9cc3ad6a31bf55"></a>

Gets the player info set on the subsystem.

#### Returns
The set player info.

#### `public FGuid `[`GetRHPlayerUuid`](#classURH__PlayerNotifications_1af3db438fe9e033f223c7ae8fe49d7207)`() const` <a id="classURH__PlayerNotifications_1af3db438fe9e033f223c7ae8fe49d7207"></a>

Gets the associated player infos Unique Player Id.

#### Returns
The set player infos Unique Player Id.

#### `public FAuthContextPtr `[`GetAuthContext`](#classURH__PlayerNotifications_1aaaf349e01cb764899baeb5151686ff2b)`() const` <a id="classURH__PlayerNotifications_1aaaf349e01cb764899baeb5151686ff2b"></a>

Gets the Auth Context that has authority to operate on this players inventory.

#### Returns
The local or instance Auth Context.

#### `public inline void `[`SetPlayerInfo`](#classURH__PlayerNotifications_1a85c903acc8824dd815258b3422a2530a)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * InPlayerInfo)` <a id="classURH__PlayerNotifications_1a85c903acc8824dd815258b3422a2530a"></a>

Sets the Player Info owner of the subsystem.

#### `public void `[`StartStreamingLatestNotifications`](#classURH__PlayerNotifications_1a2711edfd257dfb4bcf6242a85bdc658b)`(const FString & Cursor)` <a id="classURH__PlayerNotifications_1a2711edfd257dfb4bcf6242a85bdc658b"></a>

Starts streaming notifications from the server.

#### Parameters
* `Cursor` The cursor to start streaming from.

#### `public void `[`StopStreamingLatestNotifications`](#classURH__PlayerNotifications_1a0ddc5d4abc85edda59b9757cf08d7b73)`(bool bClearCache)` <a id="classURH__PlayerNotifications_1a0ddc5d4abc85edda59b9757cf08d7b73"></a>

Stops streaming notifications from the server.

#### Parameters
* `bClearCache` if true, clears the notification streaming history.

#### `public inline bool `[`IsStreaming`](#classURH__PlayerNotifications_1a74837149464570caefd49854ebddafc1)`() const` <a id="classURH__PlayerNotifications_1a74837149464570caefd49854ebddafc1"></a>

Gets if notifications are currenly being streamed.

#### `public inline void `[`SetStreamingHistorySize`](#classURH__PlayerNotifications_1aac53f07b03c118fc22333869867b80da)`(int32 Size)` <a id="classURH__PlayerNotifications_1aac53f07b03c118fc22333869867b80da"></a>

Sets the amount of notifications to cache.

#### Parameters
* `Size` The number of notifications to store in the streaming history.

#### `public inline int32 `[`GetStreamingHistorySize`](#classURH__PlayerNotifications_1a7c497c6358c33023cac59d15f1d32078)`() const` <a id="classURH__PlayerNotifications_1a7c497c6358c33023cac59d15f1d32078"></a>

Gets the max size of the history cache.

#### `public inline const TArray< `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetStreamingHistory`](#classURH__PlayerNotifications_1aedab4bbc1a1e6c59e9a23d1819b55d63)`() const` <a id="classURH__PlayerNotifications_1aedab4bbc1a1e6c59e9a23d1819b55d63"></a>

Gets the notification history cache.

#### `public inline void `[`ClearStreamingHistory`](#classURH__PlayerNotifications_1a4d072865418e5292188c57bda8d3d4d4)`()` <a id="classURH__PlayerNotifications_1a4d072865418e5292188c57bda8d3d4d4"></a>

Clears the notification history cache.

#### `public inline const FString & `[`GetStreamingCursor`](#classURH__PlayerNotifications_1ab626106ca160ac09e3eebb8a02f04f24)`() const` <a id="classURH__PlayerNotifications_1ab626106ca160ac09e3eebb8a02f04f24"></a>

Gets the current cursor for streaming notifications.

#### `public inline const FGuid & `[`GetStreamingPlayerUuid`](#classURH__PlayerNotifications_1ac4ce080fb03019b67f7f1534d5ac6239)`() const` <a id="classURH__PlayerNotifications_1ac4ce080fb03019b67f7f1534d5ac6239"></a>

Gets the unique player id the notifications are being streamed for.

#### `public bool `[`CreateNotification`](#classURH__PlayerNotifications_1a847a88d9756e4dd4e8f14358816d3711)`(const FGuid & PlayerUuid,const FString & Message,const FString & RhUrl,const TMap< FString, FString > & CustomData,const FRH_OnSingularNotificationIDDelegateBlock & Delegate)` <a id="classURH__PlayerNotifications_1a847a88d9756e4dd4e8f14358816d3711"></a>

Creates a notification, mostly used for debugging as notifications generally originate from the core.

#### Parameters
* `PlayerUuid` The player Id to create the notification for. 

* `Message` A text message on the notification. 

* `RhUrl` Path to get additional data about the notification. 

* `CustomData` Custom data added to the notification. 

* `Delegate` Callback when the notification is created or fails to create. 

#### Returns
True, if the notification was created.

#### `protected `[`FRH_NotificationPollingTypes`](undefined.md#group__Notifications_1gace387863cbcb11c5932fc70080b2d724)` `[`PollingType`](#classURH__PlayerNotifications_1a40c95a52389181570358ef990ce84912) <a id="classURH__PlayerNotifications_1a40c95a52389181570358ef990ce84912"></a>

The polling type to use, defaults to Long Poll.

#### `protected TSharedPtr< class FRH_NotificationStreamingLongPollHelper > `[`LongPollHelper`](#classURH__PlayerNotifications_1a38ebff9ba57e162f812c688d60b48df0) <a id="classURH__PlayerNotifications_1a38ebff9ba57e162f812c688d60b48df0"></a>

Helper for making long polling requests.

#### `protected FGuid `[`StreamingPlayerUuid`](#classURH__PlayerNotifications_1a8eccac51c9d87601a7eaff31eda54c51) <a id="classURH__PlayerNotifications_1a8eccac51c9d87601a7eaff31eda54c51"></a>

Player Uuid for that the notifications are being polled for.

#### `protected FString `[`StreamingCursor`](#classURH__PlayerNotifications_1a6d3c302b714c4138c2b7b8c3267d5797) <a id="classURH__PlayerNotifications_1a6d3c302b714c4138c2b7b8c3267d5797"></a>

Cursor location of the last poll response.

#### `protected bool `[`bIsStreaming`](#classURH__PlayerNotifications_1a7aa90e7cef2fb1cc6e41e4f70102d26d) <a id="classURH__PlayerNotifications_1a7aa90e7cef2fb1cc6e41e4f70102d26d"></a>

If ture, then polling is actively being done by the system.

#### `protected TArray< `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` > `[`StreamingHistory`](#classURH__PlayerNotifications_1afd9c29d10b04dbbb9dfc45db0badf2d5) <a id="classURH__PlayerNotifications_1afd9c29d10b04dbbb9dfc45db0badf2d5"></a>

Cache of the polled notifications.

#### `protected int32 `[`StreamingHistorySize`](#classURH__PlayerNotifications_1add7165e0ac8297b7fb22484981c01178) <a id="classURH__PlayerNotifications_1add7165e0ac8297b7fb22484981c01178"></a>

The number of cached notifications to store before purging old ones.

#### `protected `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`PlayerInfo`](#classURH__PlayerNotifications_1a68ca966f25d236f47a0daa44a264b853) <a id="classURH__PlayerNotifications_1a68ca966f25d236f47a0daa44a264b853"></a>

The player info associated with the notification polling.

#### `protected float `[`NextLongPollDelay`](#classURH__PlayerNotifications_1a288e884fe0398426946010fbc2bd5891) <a id="classURH__PlayerNotifications_1a288e884fe0398426946010fbc2bd5891"></a>

The delay to use before the next poll starts.

#### `protected float `[`MaxLongPollDelay`](#classURH__PlayerNotifications_1a3510b51a6bca1330b594754604933e4f) <a id="classURH__PlayerNotifications_1a3510b51a6bca1330b594754604933e4f"></a>

The max delay to use before the next poll starts.

#### `protected FTimerHandle `[`LongPollDeferralHandle`](#classURH__PlayerNotifications_1ab2b566201fe898b46c537e02b8766427) <a id="classURH__PlayerNotifications_1ab2b566201fe898b46c537e02b8766427"></a>

The timer handler for long poll deferrals.

#### `protected virtual void `[`RestartLongPollLoop`](#classURH__PlayerNotifications_1ab86249ecd1802147308a737a7d16780a)`(bool bPreviousPollSuccess)` <a id="classURH__PlayerNotifications_1ab86249ecd1802147308a737a7d16780a"></a>

Restarts the long poll loop (potentially with deferal) to long poll for notifications.

#### `protected virtual void `[`StartLongPoll`](#classURH__PlayerNotifications_1a53a11f6613bff01aa95cfe82b02855f9)`()` <a id="classURH__PlayerNotifications_1a53a11f6613bff01aa95cfe82b02855f9"></a>

Starts a long poll for Notifications.

#### `protected virtual void `[`OnNotificationsStreamed`](#classURH__PlayerNotifications_1a66de68270859ef7889171e8c050b271b)`(bool bSuccess,const FString & CursorAfter,float RequestDuration,const `[`FRHAPI_Notifications`](models/RHAPI_Notifications.md#structFRHAPI__Notifications)` & Resp)` <a id="classURH__PlayerNotifications_1a66de68270859ef7889171e8c050b271b"></a>

Handles the response to a Nofitication poll.

#### Parameters
* `bSuccess` True if the poll was successful. 

* `CursorAfter` The cursor position for future notification polling. 

* `RequestDuration` The duration until the poll was responded to. 

* `Resp` Response given for the poll.

#### `protected virtual void `[`OnNotificationCreated`](#classURH__PlayerNotifications_1a16ad788389a4551cfbb53c0899c27cdb)`(const RallyHereAPI::FResponse_PlayerCreateNotification & Resp,const FRH_OnSingularNotificationIDDelegateBlock Delegate)` <a id="classURH__PlayerNotifications_1a16ad788389a4551cfbb53c0899c27cdb"></a>

Handles the response to a Nofitication Creation call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected inline void `[`TrimStreamingHistory`](#classURH__PlayerNotifications_1a05dfd936492620353632b25f85c41055)`()` <a id="classURH__PlayerNotifications_1a05dfd936492620353632b25f85c41055"></a>

Keeps the notification history size within the configured size for the cache.

