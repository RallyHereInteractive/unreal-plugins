---
title: URH_LocalPlayerPresenceSubsystem Class
---Inherits from [URH_LocalPlayerSubsystemPlugin](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin)

Subsystem to manage the local players presence.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_AutoPollerPtr|[Poller](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1ab76093aeb1b7ae4313b979bfb5981f04)|Poller for the local presence.|
|ERHAPI_OnlineStatus|[DesiredStatus](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1acf40e5a58f306238baf322baa860c101)|The Status that the local player is being changed to.|
|FString|[DesiredMessage](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1afbd63003cbfa2accf1475d7af1146bae)|The presence message that the local player is being changed to.|
|bool|[DesiredDoNotDisturb](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a02b64db5884e0d75087d69e11d7ae4a2)|The do not disturb setting that the local player is being changed to.|
|void|[Initialize](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1adff181e922e0327fa815a1c482058264)()|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a6c5c5b743483e94ddce8383032cccabe)()|Safely tears down the subsystem.|
|void|[UpdatePlayerPresenceSelf](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a83c721326ab8300a7bbd7c7e5137ca6c)(RallyHereAPI::FRequest_UpdatePlayerPresenceSelf & Request, const RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf & Delegate)|Calls the Presence API to update a players personal presence information.|
|void|[GetPlayerPresenceSelf](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1ab096cb0926b3e19efa5be81186292fce)(RallyHereAPI::FRequest_GetPlayerPresenceSelf & Request, const RallyHereAPI::FDelegate_GetPlayerPresenceSelf & Delegate)|Calls the Presence API to get your own player presence information.|
|void|[GetSettings](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1ad4ea4f754634f475f0dc22b2cff65ef0)(RallyHereAPI::FRequest_GetPresenceSettings & Request, const RallyHereAPI::FDelegate_GetPresenceSettings & Delegate)|Calls the Presence API to get the presence settings data.|
|void|[SetDesiredStatus](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1ab6e29c7025a2ba472476ed0ce806f746)(ERHAPI_OnlineStatus NewStatus)|Requests an update of your presence status to be set to the desired status.|
|ERHAPI_OnlineStatus|[GetDesiredStatus](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a9a1748ca16136289f3764459ee8cae4e)()|Gets the desired status that the player wants to be set to.|
|void|[SetDesiredMessage](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a4317fe9af04ece94f342908b2eb84d08)(FString NewMessage)|Requests an update of your presence message to be set to the desired message.|
|FString|[GetDesiredMessage](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1af295bb46e499c2c8aa1f208a30f722d5)()|Gets the desired message that the player wants to be set to.|
|void|[SetDesiredDoNotDisturb](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a7f8a9a266c0ab29d1da24f836a3a58ba)(bool NewDoNotDisturb)|Requests an update of your presence do not disturb setting to be set to the desired setting.|
|bool|[GetDesiredDoNotDisturb](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1aec49acc65c1627bcfb9b95eb29b1c2dc)()|Gets the desired do not disturb setting that the player wants to be set to.|
|void|[StartRefreshTimer](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a32af15e5eafaf94bdea501e1dc02d90b)()|Starts polling to refresh the player's presence status.|
|void|[StopRefreshTimer](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a95919d768be0b60ad1134052aff7ef2c)()|Stops polling to refresh the player's presence status.|
|void|[RefreshStatus](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a409192cc26f0fb395231023cf4449fa7)()|Forces an update of the players presence with a status change.|
|bool|[IsRefreshTimerActive](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1ac786e4bb032fc9711ec196868c6c6b30)(float & TimeRemaining)|Returns whether the refresh timer is active. param [in].|
|void|[OnUserChanged](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a39281ccf81d020bce677a4687ac61d16)()|Callback that occurs whenever the local player this subsystem is associated with changes.|
|void|[InitPropertiesWithDefaultValues](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a41e97dcb80554d54d25008f03d407e1f)()|Initializes the subsystem with defaults for its cached data.|
|void|[PollRefreshStatus](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem_1a12037a7eca5aa1bd88eb909748cf1a8e)(const FRH_PollCompleteFunc & Delegate)|Polls the status of the players presence.|
## Protected Attributes



### `Poller` <a id="classURH__LocalPlayerPresenceSubsystem_1ab76093aeb1b7ae4313b979bfb5981f04"></a>

`FRH_AutoPollerPtr URH_LocalPlayerPresenceSubsystem::Poller`

Poller for the local presence.




### `DesiredStatus` <a id="classURH__LocalPlayerPresenceSubsystem_1acf40e5a58f306238baf322baa860c101"></a>

`ERHAPI_OnlineStatus URH_LocalPlayerPresenceSubsystem::DesiredStatus`

The Status that the local player is being changed to.




### `DesiredMessage` <a id="classURH__LocalPlayerPresenceSubsystem_1afbd63003cbfa2accf1475d7af1146bae"></a>

`FString URH_LocalPlayerPresenceSubsystem::DesiredMessage`

The presence message that the local player is being changed to.




### `DesiredDoNotDisturb` <a id="classURH__LocalPlayerPresenceSubsystem_1a02b64db5884e0d75087d69e11d7ae4a2"></a>

`bool URH_LocalPlayerPresenceSubsystem::DesiredDoNotDisturb`

The do not disturb setting that the local player is being changed to.





## Public Functions



### `Initialize` <a id="classURH__LocalPlayerPresenceSubsystem_1adff181e922e0327fa815a1c482058264"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__LocalPlayerPresenceSubsystem_1a6c5c5b743483e94ddce8383032cccabe"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `UpdatePlayerPresenceSelf` <a id="classURH__LocalPlayerPresenceSubsystem_1a83c721326ab8300a7bbd7c7e5137ca6c"></a>

void UpdatePlayerPresenceSelf(RallyHereAPI::FRequest_UpdatePlayerPresenceSelf & Request, const RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf & Delegate)

#### Parameters

| Type | Name |
|------|------|
|RallyHereAPI::FRequest_UpdatePlayerPresenceSelf &|Request|
|const RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf &|Delegate|

#### Description

Calls the Presence API to update a players personal presence information.


#### Parameters

Request
: Request object containing the information to update. 
Delegate
: Callback delegate for if the request was successful or not. 



### `GetPlayerPresenceSelf` <a id="classURH__LocalPlayerPresenceSubsystem_1ab096cb0926b3e19efa5be81186292fce"></a>

void GetPlayerPresenceSelf(RallyHereAPI::FRequest_GetPlayerPresenceSelf & Request, const RallyHereAPI::FDelegate_GetPlayerPresenceSelf & Delegate)

#### Parameters

| Type | Name |
|------|------|
|RallyHereAPI::FRequest_GetPlayerPresenceSelf &|Request|
|const RallyHereAPI::FDelegate_GetPlayerPresenceSelf &|Delegate|

#### Description

Calls the Presence API to get your own player presence information.


#### Parameters

Request
: Request object containing needed data for the call. 
Delegate
: Callback delegate with the player presence information. 



### `GetSettings` <a id="classURH__LocalPlayerPresenceSubsystem_1ad4ea4f754634f475f0dc22b2cff65ef0"></a>

void GetSettings(RallyHereAPI::FRequest_GetPresenceSettings & Request, const RallyHereAPI::FDelegate_GetPresenceSettings & Delegate)

#### Parameters

| Type | Name |
|------|------|
|RallyHereAPI::FRequest_GetPresenceSettings &|Request|
|const RallyHereAPI::FDelegate_GetPresenceSettings &|Delegate|

#### Description

Calls the Presence API to get the presence settings data.


#### Parameters

Request
: Request object containing needed data for the call. 
Delegate
: Callback delegate with the presence settings data. 



### `SetDesiredStatus` <a id="classURH__LocalPlayerPresenceSubsystem_1ab6e29c7025a2ba472476ed0ce806f746"></a>

void SetDesiredStatus(ERHAPI_OnlineStatus NewStatus)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_OnlineStatus|NewStatus|

#### Description

Requests an update of your presence status to be set to the desired status.


#### Parameters

NewStatus
: The new status to set. 



### `GetDesiredStatus` <a id="classURH__LocalPlayerPresenceSubsystem_1a9a1748ca16136289f3764459ee8cae4e"></a>

ERHAPI_OnlineStatus GetDesiredStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the desired status that the player wants to be set to.




### `SetDesiredMessage` <a id="classURH__LocalPlayerPresenceSubsystem_1a4317fe9af04ece94f342908b2eb84d08"></a>

void SetDesiredMessage(FString NewMessage)

#### Parameters

| Type | Name |
|------|------|
|FString|NewMessage|

#### Description

Requests an update of your presence message to be set to the desired message.


#### Parameters

NewMessage
: The new message to set. 



### `GetDesiredMessage` <a id="classURH__LocalPlayerPresenceSubsystem_1af295bb46e499c2c8aa1f208a30f722d5"></a>

FString GetDesiredMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the desired message that the player wants to be set to.




### `SetDesiredDoNotDisturb` <a id="classURH__LocalPlayerPresenceSubsystem_1a7f8a9a266c0ab29d1da24f836a3a58ba"></a>

void SetDesiredDoNotDisturb(bool NewDoNotDisturb)

#### Parameters

| Type | Name |
|------|------|
|bool|NewDoNotDisturb|

#### Description

Requests an update of your presence do not disturb setting to be set to the desired setting.


#### Parameters

NewDoNotDisturb
: The new do not disturb setting desired. 



### `GetDesiredDoNotDisturb` <a id="classURH__LocalPlayerPresenceSubsystem_1aec49acc65c1627bcfb9b95eb29b1c2dc"></a>

bool GetDesiredDoNotDisturb()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the desired do not disturb setting that the player wants to be set to.




### `StartRefreshTimer` <a id="classURH__LocalPlayerPresenceSubsystem_1a32af15e5eafaf94bdea501e1dc02d90b"></a>

void StartRefreshTimer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Starts polling to refresh the player's presence status.




### `StopRefreshTimer` <a id="classURH__LocalPlayerPresenceSubsystem_1a95919d768be0b60ad1134052aff7ef2c"></a>

void StopRefreshTimer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Stops polling to refresh the player's presence status.




### `RefreshStatus` <a id="classURH__LocalPlayerPresenceSubsystem_1a409192cc26f0fb395231023cf4449fa7"></a>

void RefreshStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Forces an update of the players presence with a status change.




### `IsRefreshTimerActive` <a id="classURH__LocalPlayerPresenceSubsystem_1ac786e4bb032fc9711ec196868c6c6b30"></a>

bool IsRefreshTimerActive(float & TimeRemaining)

#### Parameters

| Type | Name |
|------|------|
|float &|TimeRemaining|

#### Description

Returns whether the refresh timer is active. param [in].





## Protected Functions



### `OnUserChanged` <a id="classURH__LocalPlayerPresenceSubsystem_1a39281ccf81d020bce677a4687ac61d16"></a>

void OnUserChanged()

#### Parameters

| Type | Name |
|------|------|

#### Description

Callback that occurs whenever the local player this subsystem is associated with changes.




### `InitPropertiesWithDefaultValues` <a id="classURH__LocalPlayerPresenceSubsystem_1a41e97dcb80554d54d25008f03d407e1f"></a>

void InitPropertiesWithDefaultValues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initializes the subsystem with defaults for its cached data.




### `PollRefreshStatus` <a id="classURH__LocalPlayerPresenceSubsystem_1a12037a7eca5aa1bd88eb909748cf1a8e"></a>

void PollRefreshStatus(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Polls the status of the players presence.


#### Parameters

Delegate
: Callback delegate when the poll completes. 




