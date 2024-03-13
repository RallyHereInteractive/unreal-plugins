---
title: URH_PurgeSubsystem Class
---Inherits from [URH_LocalPlayerSubsystemPlugin](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin)

Subsystem to manage purging a players account.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse)|[PurgeStatus](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1ac05f63f95cfb89fe33d8298047fced58)|Current Purge Status.|
|void|[Initialize](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a25cba13b4d4a0932f57b87c8aa1b7aca)()|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a3fb30c02b0d09f30507f7273d59cf349)()|Safely tears down the subsystem.|
|bool|[EnqueueMeForPurge](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a02e0aa94099eebfeeb1b597ff07738cc)(const FDateTime & PurgeTime, const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)|Requests a purge for the local player at a specific time.|
|bool|[BLUEPRINT_EnqueueMeForPurgeWithPurgeTime](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a4e9014c02e850570123fde3e2ddd9518)(FDateTime PurgeTime, const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)||
|bool|[EnqueueMeForPurge](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1addf20225a61f48ebdc5bbf8bc32d8263)(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)|Requests a purge for the local player, uses a configured default amount of time til purge from request.|
|bool|[BLUEPRINT_EnqueueMeForPurge](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a4ae7b5c639fe1dcd128557b1fd69b072)(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)||
|bool|[PurgeMeImmediately](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a0bb785444b4d09ce1cafeea8d59b4c1c)(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)|Requests a purge for the local player that will be resolved immediately.|
|bool|[BLUEPRINT_PurgeMeImmediately](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1aa5406090b8740e63e2a7fc7d80afc135)(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)||
|bool|[DequeueMeForPurge](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a4b2219391a24ee4dca3967817f39d86e)(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)|Requests to clear the purge request for the local play.|
|bool|[BLUEPRINT_DequeueMeForPurge](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1aedf8bff50126ffdcee03903974bd2c6b)(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)||
|bool|[QueryMyPurgeStatus](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a22d6f35bec5e9d367606523ed3bcb36d)(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)|Requests the status of a purge for the local player.|
|bool|[BLUEPRINT_QueryMyPurgeStatus](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1aeda5a4776e1ad2c9145aacf3f6b876ba)(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)||
|[FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse)|[GetMyPurgeStatus](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a6a62e3627282c0f74b215fa3e07afa40)()|Gets the local players Purge Status.|
|void|[OnUserChanged](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a4d78dff96da837bbe7ed8ea6f089546e)()|Callback that occurs whenever the local player this subsystem is associated with changes.|
|bool|[EnqueueMeForPurge](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a6ce3544e1ef73d4f54aaaf78c91c9bf1)(const TOptional< FDateTime > & PurgeTime, const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)|Creates the request to purge the local player.|
|void|[OnPurgeMe](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1ae082ed61d599f9b267b667f7793efb1c)(const RallyHereAPI::FResponse_QueueMeForPurge & Resp, const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)|Handles the response to a Purge Me call.|
|void|[OnDequeueMe](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a7dba320ada118b170cb0105973569a95)(const RallyHereAPI::FResponse_DequeueMeForPurge & Resp, const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)|Handles the response to a Dequeue Me For Purge call.|
|void|[OnGetMyPurgeStatus](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem_1a4c9d03ed71e864b0ecdf732a356518ff)(const RallyHereAPI::FResponse_GetQueuePurgeStatusForMe & Resp, const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)|Handles the response to a Get Purge Status call.|
## Protected Attributes



### `PurgeStatus` <a id="classURH__PurgeSubsystem_1ac05f63f95cfb89fe33d8298047fced58"></a>

`FRHAPI_PurgeResponse URH_PurgeSubsystem::PurgeStatus`

Current Purge Status.





## Public Functions



### `Initialize` <a id="classURH__PurgeSubsystem_1a25cba13b4d4a0932f57b87c8aa1b7aca"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__PurgeSubsystem_1a3fb30c02b0d09f30507f7273d59cf349"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `EnqueueMeForPurge` <a id="classURH__PurgeSubsystem_1a02e0aa94099eebfeeb1b597ff07738cc"></a>

bool EnqueueMeForPurge(const FDateTime & PurgeTime, const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|PurgeTime|
|const FRH_OnPurgeStatusUpdatedDelegateBlock &|Delegate|

#### Description

Requests a purge for the local player at a specific time.


#### Parameters

PurgeTime
: The exact time to complete the purge. 
Delegate
: Callback with the current status of the purge request. 



### `BLUEPRINT_EnqueueMeForPurgeWithPurgeTime` <a id="classURH__PurgeSubsystem_1a4e9014c02e850570123fde3e2ddd9518"></a>

bool BLUEPRINT_EnqueueMeForPurgeWithPurgeTime(FDateTime PurgeTime, const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|PurgeTime|
|const FRH_OnPurgeStatusUpdatedDynamicDelegate &|Delegate|

#### Description






### `EnqueueMeForPurge` <a id="classURH__PurgeSubsystem_1addf20225a61f48ebdc5bbf8bc32d8263"></a>

bool EnqueueMeForPurge(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnPurgeStatusUpdatedDelegateBlock &|Delegate|

#### Description

Requests a purge for the local player, uses a configured default amount of time til purge from request.


#### Parameters

Delegate
: Callback with the current status of the purge request. 



### `BLUEPRINT_EnqueueMeForPurge` <a id="classURH__PurgeSubsystem_1a4ae7b5c639fe1dcd128557b1fd69b072"></a>

bool BLUEPRINT_EnqueueMeForPurge(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnPurgeStatusUpdatedDynamicDelegate &|Delegate|

#### Description






### `PurgeMeImmediately` <a id="classURH__PurgeSubsystem_1a0bb785444b4d09ce1cafeea8d59b4c1c"></a>

bool PurgeMeImmediately(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnPurgeStatusUpdatedDelegateBlock &|Delegate|

#### Description

Requests a purge for the local player that will be resolved immediately.


#### Parameters

Delegate
: Callback with the current status of the purge request. 



### `BLUEPRINT_PurgeMeImmediately` <a id="classURH__PurgeSubsystem_1aa5406090b8740e63e2a7fc7d80afc135"></a>

bool BLUEPRINT_PurgeMeImmediately(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnPurgeStatusUpdatedDynamicDelegate &|Delegate|

#### Description






### `DequeueMeForPurge` <a id="classURH__PurgeSubsystem_1a4b2219391a24ee4dca3967817f39d86e"></a>

bool DequeueMeForPurge(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnPurgeStatusUpdatedDelegateBlock &|Delegate|

#### Description

Requests to clear the purge request for the local play.


#### Parameters

Delegate
: Callback with the current status of the purge request. 



### `BLUEPRINT_DequeueMeForPurge` <a id="classURH__PurgeSubsystem_1aedf8bff50126ffdcee03903974bd2c6b"></a>

bool BLUEPRINT_DequeueMeForPurge(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnPurgeStatusUpdatedDynamicDelegate &|Delegate|

#### Description






### `QueryMyPurgeStatus` <a id="classURH__PurgeSubsystem_1a22d6f35bec5e9d367606523ed3bcb36d"></a>

bool QueryMyPurgeStatus(const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnPurgeStatusUpdatedDelegateBlock &|Delegate|

#### Description

Requests the status of a purge for the local player.


#### Parameters

Delegate
: Callback with the current status of the purge request. 



### `BLUEPRINT_QueryMyPurgeStatus` <a id="classURH__PurgeSubsystem_1aeda5a4776e1ad2c9145aacf3f6b876ba"></a>

bool BLUEPRINT_QueryMyPurgeStatus(const FRH_OnPurgeStatusUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnPurgeStatusUpdatedDynamicDelegate &|Delegate|

#### Description






### `GetMyPurgeStatus` <a id="classURH__PurgeSubsystem_1a6a62e3627282c0f74b215fa3e07afa40"></a>

[FRHAPI_PurgeResponse](/unreal-plugins/all/structfrhapi__purgeresponse/#structFRHAPI__PurgeResponse) GetMyPurgeStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the local players Purge Status.





## Protected Functions



### `OnUserChanged` <a id="classURH__PurgeSubsystem_1a4d78dff96da837bbe7ed8ea6f089546e"></a>

void OnUserChanged()

#### Parameters

| Type | Name |
|------|------|

#### Description

Callback that occurs whenever the local player this subsystem is associated with changes.




### `EnqueueMeForPurge` <a id="classURH__PurgeSubsystem_1a6ce3544e1ef73d4f54aaaf78c91c9bf1"></a>

bool EnqueueMeForPurge(const TOptional< FDateTime > & PurgeTime, const FRH_OnPurgeStatusUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TOptional< FDateTime > &|PurgeTime|
|const FRH_OnPurgeStatusUpdatedDelegateBlock &|Delegate|

#### Description

Creates the request to purge the local player.


#### Parameters

PurgeTime
: The time for the player to be purged 
Delegate
: Delegate callback for the request. 



### `OnPurgeMe` <a id="classURH__PurgeSubsystem_1ae082ed61d599f9b267b667f7793efb1c"></a>

void OnPurgeMe(const RallyHereAPI::FResponse_QueueMeForPurge & Resp, const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_QueueMeForPurge &|Resp|
|const FRH_OnPurgeStatusUpdatedDelegateBlock|Delegate|

#### Description

Handles the response to a Purge Me call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnDequeueMe` <a id="classURH__PurgeSubsystem_1a7dba320ada118b170cb0105973569a95"></a>

void OnDequeueMe(const RallyHereAPI::FResponse_DequeueMeForPurge & Resp, const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_DequeueMeForPurge &|Resp|
|const FRH_OnPurgeStatusUpdatedDelegateBlock|Delegate|

#### Description

Handles the response to a Dequeue Me For Purge call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnGetMyPurgeStatus` <a id="classURH__PurgeSubsystem_1a4c9d03ed71e864b0ecdf732a356518ff"></a>

void OnGetMyPurgeStatus(const RallyHereAPI::FResponse_GetQueuePurgeStatusForMe & Resp, const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_GetQueuePurgeStatusForMe &|Resp|
|const FRH_OnPurgeStatusUpdatedDelegateBlock|Delegate|

#### Description

Handles the response to a Get Purge Status call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 




