---
title: URH_PlayerNotifications Class
---Inherits from UObject

Notification Subsystem used for polling notifications of updates.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_OnNotificationStreamedDynamicDelegate|[OnNotificationStreamedDynamic](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1aaf370914fbab7ae1e4d6d90cd1a7c17c)|Delegate to listen to for when a notification is streamed.|
|FRH_OnNotificationStreamedDelegate|[OnNotificationStreamed](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1ab1e1c5a76082f64b939d8a88a7d8590d)|Delegate to listen to for when a notification is streamed.|
|TMap< FString, FRH_OnNotificationStreamedDelegate >|[OnNotificationStreamedByAPI](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a1452a94aa41139929fd6d84b7beff989)|Specialty version available only to C++, as cannot bind a TMap to a delegate in a UPROPERTY.|
|[FRH_NotificationPollingTypes](/unreal-plugins/all/rh__playernotifications_8h/#group__Notifications_1gace387863cbcb11c5932fc70080b2d724)|[PollingType](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a40c95a52389181570358ef990ce84912)|The polling type to use, defaults to Long Poll.|
|TSharedPtr< class FRH_NotificationStreamingLongPollHelper >|[LongPollHelper](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a38ebff9ba57e162f812c688d60b48df0)|Helper for making long polling requests.|
|FGuid|[StreamingPlayerUuid](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a8eccac51c9d87601a7eaff31eda54c51)|Player Uuid for that the notifications are being polled for.|
|FString|[StreamingCursor](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a6d3c302b714c4138c2b7b8c3267d5797)|Cursor location of the last poll response.|
|bool|[bIsStreaming](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a7aa90e7cef2fb1cc6e41e4f70102d26d)|If ture, then polling is actively being done by the system.|
|TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) >|[StreamingHistory](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1afd9c29d10b04dbbb9dfc45db0badf2d5)|Cache of the polled notifications.|
|int32|[StreamingHistorySize](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1add7165e0ac8297b7fb22484981c01178)|The number of cached notifications to store before purging old ones.|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[PlayerInfo](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a68ca966f25d236f47a0daa44a264b853)|The player info associated with the notification polling.|
|void|[Initialize](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a81d80e9dc231e046e56406ea2f98f32b)()|Initialize the subsystem.|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[GetPlayerInfo](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a930863811488b9f22d9cc3ad6a31bf55)()|Gets the player info set on the subsystem.|
|FGuid|[GetRHPlayerUuid](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1af3db438fe9e033f223c7ae8fe49d7207)()|Gets the associated player infos Unique Player Id.|
|FAuthContextPtr|[GetAuthContext](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1aaaf349e01cb764899baeb5151686ff2b)()|Gets the Auth Context that has authority to operate on this players inventory.|
|void|[SetPlayerInfo](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a85c903acc8824dd815258b3422a2530a)([URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * InPlayerInfo)|Sets the Player Info owner of the subsystem.|
|void|[StartStreamingLatestNotifications](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a2711edfd257dfb4bcf6242a85bdc658b)(const FString & Cursor)|Starts streaming notifications from the server.|
|void|[StopStreamingLatestNotifications](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a0ddc5d4abc85edda59b9757cf08d7b73)(bool bClearCache)|Stops streaming notifications from the server.|
|bool|[IsStreaming](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a74837149464570caefd49854ebddafc1)()|Gets if notifications are currenly being streamed.|
|void|[SetStreamingHistorySize](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1aac53f07b03c118fc22333869867b80da)(int32 Size)|Sets the amount of notifications to cache.|
|int32|[GetStreamingHistorySize](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a7c497c6358c33023cac59d15f1d32078)()|Gets the max size of the history cache.|
|const TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > &|[GetStreamingHistory](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1aedab4bbc1a1e6c59e9a23d1819b55d63)()|Gets the notification history cache.|
|void|[ClearStreamingHistory](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a4d072865418e5292188c57bda8d3d4d4)()|Clears the notification history cache.|
|const FString &|[GetStreamingCursor](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1ab626106ca160ac09e3eebb8a02f04f24)()|Gets the current cursor for streaming notifications.|
|const FGuid &|[GetStreamingPlayerUuid](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1ac4ce080fb03019b67f7f1534d5ac6239)()|Gets the unique player id the notifications are being streamed for.|
|bool|[CreateNotification](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a847a88d9756e4dd4e8f14358816d3711)(const FGuid & PlayerUuid, const FString & Message, const FString & RhUrl, const TMap< FString, FString > & CustomData, const FRH_OnSingularNotificationIDDelegateBlock & Delegate)|Creates a notification, mostly used for debugging as notifications generally originate from the core.|
|bool|[BLUEPRINT_CreateNotification](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a3cc1b6c05ff93c67fb036d7628394593)(const FGuid & PlayerUuid, const FString & Message, const FString & RhUrl, const TMap< FString, FString > & CustomData, const FRH_OnSingularNotificationIDDynamicDelegate & Delegate)||
|void|[StartLongPoll](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1aaeb081c051fa87431207bc5b2f46481f)()|Starts a long poll for Notifications.|
|void|[OnNotificationsStreamed](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a66de68270859ef7889171e8c050b271b)(bool bSuccess, const FString & CursorAfter, float RequestDuration, const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) & Resp)|Handles the response to a Nofitication poll.|
|void|[OnNotificationCreated](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a16ad788389a4551cfbb53c0899c27cdb)(const RallyHereAPI::FResponse_PlayerCreateNotification & Resp, const FRH_OnSingularNotificationIDDelegateBlock Delegate)|Handles the response to a Nofitication Creation call.|
|void|[TrimStreamingHistory](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications_1a05dfd936492620353632b25f85c41055)()|Keeps the notification history size within the configured size for the cache.|
## Public Attributes



### `OnNotificationStreamedDynamic` <a id="classURH__PlayerNotifications_1aaf370914fbab7ae1e4d6d90cd1a7c17c"></a>

`FRH_OnNotificationStreamedDynamicDelegate URH_PlayerNotifications::OnNotificationStreamedDynamic`

Delegate to listen to for when a notification is streamed.




### `OnNotificationStreamed` <a id="classURH__PlayerNotifications_1ab1e1c5a76082f64b939d8a88a7d8590d"></a>

`FRH_OnNotificationStreamedDelegate URH_PlayerNotifications::OnNotificationStreamed`

Delegate to listen to for when a notification is streamed.




### `OnNotificationStreamedByAPI` <a id="classURH__PlayerNotifications_1a1452a94aa41139929fd6d84b7beff989"></a>

`TMap<FString, FRH_OnNotificationStreamedDelegate> URH_PlayerNotifications::OnNotificationStreamedByAPI`

Specialty version available only to C++, as cannot bind a TMap to a delegate in a UPROPERTY.





## Protected Attributes



### `PollingType` <a id="classURH__PlayerNotifications_1a40c95a52389181570358ef990ce84912"></a>

`FRH_NotificationPollingTypes URH_PlayerNotifications::PollingType`

The polling type to use, defaults to Long Poll.




### `LongPollHelper` <a id="classURH__PlayerNotifications_1a38ebff9ba57e162f812c688d60b48df0"></a>

`TSharedPtr<class FRH_NotificationStreamingLongPollHelper> URH_PlayerNotifications::LongPollHelper`

Helper for making long polling requests.




### `StreamingPlayerUuid` <a id="classURH__PlayerNotifications_1a8eccac51c9d87601a7eaff31eda54c51"></a>

`FGuid URH_PlayerNotifications::StreamingPlayerUuid`

Player Uuid for that the notifications are being polled for.




### `StreamingCursor` <a id="classURH__PlayerNotifications_1a6d3c302b714c4138c2b7b8c3267d5797"></a>

`FString URH_PlayerNotifications::StreamingCursor`

Cursor location of the last poll response.




### `bIsStreaming` <a id="classURH__PlayerNotifications_1a7aa90e7cef2fb1cc6e41e4f70102d26d"></a>

`bool URH_PlayerNotifications::bIsStreaming`

If ture, then polling is actively being done by the system.




### `StreamingHistory` <a id="classURH__PlayerNotifications_1afd9c29d10b04dbbb9dfc45db0badf2d5"></a>

`TArray<FRHAPI_Notification> URH_PlayerNotifications::StreamingHistory`

Cache of the polled notifications.




### `StreamingHistorySize` <a id="classURH__PlayerNotifications_1add7165e0ac8297b7fb22484981c01178"></a>

`int32 URH_PlayerNotifications::StreamingHistorySize`

The number of cached notifications to store before purging old ones.




### `PlayerInfo` <a id="classURH__PlayerNotifications_1a68ca966f25d236f47a0daa44a264b853"></a>

`URH_PlayerInfo* URH_PlayerNotifications::PlayerInfo`

The player info associated with the notification polling.





## Public Functions



### `Initialize` <a id="classURH__PlayerNotifications_1a81d80e9dc231e046e56406ea2f98f32b"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `GetPlayerInfo` <a id="classURH__PlayerNotifications_1a930863811488b9f22d9cc3ad6a31bf55"></a>

[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * GetPlayerInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player info set on the subsystem.



#### Returns
The set player info. 



### `GetRHPlayerUuid` <a id="classURH__PlayerNotifications_1af3db438fe9e033f223c7ae8fe49d7207"></a>

FGuid GetRHPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the associated player infos Unique Player Id.



#### Returns
The set player infos Unique Player Id. 



### `GetAuthContext` <a id="classURH__PlayerNotifications_1aaaf349e01cb764899baeb5151686ff2b"></a>

FAuthContextPtr GetAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Auth Context that has authority to operate on this players inventory.



#### Returns
The local or instance Auth Context. 



### `SetPlayerInfo` <a id="classURH__PlayerNotifications_1a85c903acc8824dd815258b3422a2530a"></a>

void SetPlayerInfo([URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * InPlayerInfo)

#### Parameters

| Type | Name |
|------|------|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|InPlayerInfo|

#### Description

Sets the Player Info owner of the subsystem.




### `StartStreamingLatestNotifications` <a id="classURH__PlayerNotifications_1a2711edfd257dfb4bcf6242a85bdc658b"></a>

void StartStreamingLatestNotifications(const FString & Cursor)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Cursor|

#### Description

Starts streaming notifications from the server.


#### Parameters

Cursor
: The cursor to start streaming from. 



### `StopStreamingLatestNotifications` <a id="classURH__PlayerNotifications_1a0ddc5d4abc85edda59b9757cf08d7b73"></a>

void StopStreamingLatestNotifications(bool bClearCache)

#### Parameters

| Type | Name |
|------|------|
|bool|bClearCache|

#### Description

Stops streaming notifications from the server.


#### Parameters

bClearCache
: if true, clears the notification streaming history. 



### `IsStreaming` <a id="classURH__PlayerNotifications_1a74837149464570caefd49854ebddafc1"></a>

bool IsStreaming()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if notifications are currenly being streamed.




### `SetStreamingHistorySize` <a id="classURH__PlayerNotifications_1aac53f07b03c118fc22333869867b80da"></a>

void SetStreamingHistorySize(int32 Size)

#### Parameters

| Type | Name |
|------|------|
|int32|Size|

#### Description

Sets the amount of notifications to cache.


#### Parameters

Size
: The number of notifications to store in the streaming history. 



### `GetStreamingHistorySize` <a id="classURH__PlayerNotifications_1a7c497c6358c33023cac59d15f1d32078"></a>

int32 GetStreamingHistorySize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the max size of the history cache.




### `GetStreamingHistory` <a id="classURH__PlayerNotifications_1aedab4bbc1a1e6c59e9a23d1819b55d63"></a>

const TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > & GetStreamingHistory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the notification history cache.




### `ClearStreamingHistory` <a id="classURH__PlayerNotifications_1a4d072865418e5292188c57bda8d3d4d4"></a>

void ClearStreamingHistory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the notification history cache.




### `GetStreamingCursor` <a id="classURH__PlayerNotifications_1ab626106ca160ac09e3eebb8a02f04f24"></a>

const FString & GetStreamingCursor()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the current cursor for streaming notifications.




### `GetStreamingPlayerUuid` <a id="classURH__PlayerNotifications_1ac4ce080fb03019b67f7f1534d5ac6239"></a>

const FGuid & GetStreamingPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the unique player id the notifications are being streamed for.




### `CreateNotification` <a id="classURH__PlayerNotifications_1a847a88d9756e4dd4e8f14358816d3711"></a>

bool CreateNotification(const FGuid & PlayerUuid, const FString & Message, const FString & RhUrl, const TMap< FString, FString > & CustomData, const FRH_OnSingularNotificationIDDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FString &|Message|
|const FString &|RhUrl|
|const TMap< FString, FString > &|CustomData|
|const FRH_OnSingularNotificationIDDelegateBlock &|Delegate|

#### Description

Creates a notification, mostly used for debugging as notifications generally originate from the core.


#### Parameters

PlayerUuid
: The player Id to create the notification for. 
Message
: A text message on the notification. 
RhUrl
: Path to get additional data about the notification. 
CustomData
: Custom data added to the notification. 
Delegate
: Callback when the notification is created or fails to create. 

#### Returns
True, if the notification was created. 



### `BLUEPRINT_CreateNotification` <a id="classURH__PlayerNotifications_1a3cc1b6c05ff93c67fb036d7628394593"></a>

bool BLUEPRINT_CreateNotification(const FGuid & PlayerUuid, const FString & Message, const FString & RhUrl, const TMap< FString, FString > & CustomData, const FRH_OnSingularNotificationIDDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FString &|Message|
|const FString &|RhUrl|
|const TMap< FString, FString > &|CustomData|
|const FRH_OnSingularNotificationIDDynamicDelegate &|Delegate|

#### Description







## Protected Functions



### `StartLongPoll` <a id="classURH__PlayerNotifications_1aaeb081c051fa87431207bc5b2f46481f"></a>

void StartLongPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Starts a long poll for Notifications.




### `OnNotificationsStreamed` <a id="classURH__PlayerNotifications_1a66de68270859ef7889171e8c050b271b"></a>

void OnNotificationsStreamed(bool bSuccess, const FString & CursorAfter, float RequestDuration, const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) & Resp)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|
|const FString &|CursorAfter|
|float|RequestDuration|
|const [FRHAPI_Notifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications) &|Resp|

#### Description

Handles the response to a Nofitication poll.


#### Parameters

bSuccess
: True if the poll was successful. 
CursorAfter
: The cursor position for future notification polling. 
RequestDuration
: The duration until the poll was responded to. 
Resp
: Response given for the poll. 



### `OnNotificationCreated` <a id="classURH__PlayerNotifications_1a16ad788389a4551cfbb53c0899c27cdb"></a>

void OnNotificationCreated(const RallyHereAPI::FResponse_PlayerCreateNotification & Resp, const FRH_OnSingularNotificationIDDelegateBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_PlayerCreateNotification &|Resp|
|const FRH_OnSingularNotificationIDDelegateBlock|Delegate|

#### Description

Handles the response to a Nofitication Creation call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `TrimStreamingHistory` <a id="classURH__PlayerNotifications_1a05dfd936492620353632b25f85c41055"></a>

void TrimStreamingHistory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Keeps the notification history size within the configured size for the cache.





