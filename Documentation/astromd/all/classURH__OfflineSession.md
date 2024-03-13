---
title: URH_OfflineSession Class
---Inherits from [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession)

Offline Sessions are sessions the session owner is actively a member of that are unsynchronized with the API. This is primarily intended as a utility class to allow for the session flow to be used globally, even when not running API based sessions (ex: tutorial / practice area before login).

## Summary
| Kind | View | Description |
|------|------|-------------|
|bool|[IsOffline](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1afb29afef2455da0af98c31af0ac31f92)()|Gets that the session is offline.|
|void|[InvitePlayer](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1af16376f4dc510808b79aa74cf2ea461d)(const FGuid & PlayerUuid, int32 Team, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Currently not supported for offline sessions.|
|void|[KickPlayer](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1a0b8bc9e0caafb5cb35a1e7c1caa4dfbe)(const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Currently not supported for offline sessions.|
|void|[InviteOtherSession](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1a52cf813a55cf049b932b5b3335d5c132)(const FString & InvitedSessionId, const [FRHAPI_SessionInviteRequest](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest) & SessionInviteRequest, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Currently not supported for offline sessions.|
|void|[KickOtherSession](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1aef48af399b765fcf42bddbbb49242d18)(const FString & KickedSessionId, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Currently not supported for offline sessions.|
|void|[SetLeader](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1a88d682913b0247652317fa4ed3213152)(const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Currently not supported for offline sessions.|
|void|[ChangePlayerTeam](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1a06bb9470b305e09a1eed9ffbc35153e8)(const FGuid & PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Changes the team a given player is associated with in the session.|
|void|[UpdatePlayerCustomData](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1aa58dc5637c9e083c6990f7832077a60d)(const FGuid & PlayerUuid, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Currently not supported for offline sessions.|
|void|[Leave](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1ac9879abe8ef573431669f5e4b2c99f14)(bool bFromOSSSession, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Leaves the session.|
|void|[RequestInstance](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1a15f9d178c350737ffd1c7315b174b9d3)(const [FRHAPI_InstanceRequest](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest) & InstanceRequest, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Attempt to create a new instance for the session.|
|void|[EndInstance](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1a42d2adfee51e818244e98e0d0888f410)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Shutdown the existing instance for the session.|
|void|[StartMatch](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1ab4a188cca6cdc1bc9171349041d757c8)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Starts the match of the instance on the session.|
|void|[EndMatch](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1a223aa688a4f71b889c4e18605e978ced)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Ends the match of the instance on the session.|
|void|[UpdateSessionInfo](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1a298d217d999690851348cb4041ff7599)(const [FRHAPI_SessionUpdate](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate) & Update, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Updates the session info.|
|void|[UpdateInstanceInfo](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1a8b36aeef35d1acbe6e6af22d9a55cf0f)(const [FRHAPI_InstanceInfoUpdate](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate) & Update, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Updates the sessions instance info.|
|void|[UpdateBrowserInfo](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1a1efa399f684ce083ce292c87717f22ad)(bool bEnable, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Updates the sessions browser info.|
|void|[UpdateInstanceHealth](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1afeab096fde1a8c507aa1bb90403b9d81)(ERHAPI_InstanceHealthStatus HealthStatus, const FRH_GenericSuccessWithErrorBlock & Delegate)|Update the instance health of the session.|
|void|[AcknowledgeBackfill](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1aa0472dab20c9193181b61a87f7175db2)(bool bEnable, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Acknowledge backfill for the session, keeping it alive and processing updates.|
|void|[ImportSessionUpdateToAllPlayers](/unreal-plugins/all/classurh__offlinesession/#classURH__OfflineSession_1a662a10e6f117bb137f9d0d65b75171a8)(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Update)||
## Public Functions



### `IsOffline` <a id="classURH__OfflineSession_1afb29afef2455da0af98c31af0ac31f92"></a>

bool IsOffline()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets that the session is offline.




### `InvitePlayer` <a id="classURH__OfflineSession_1af16376f4dc510808b79aa74cf2ea461d"></a>

void InvitePlayer(const FGuid & PlayerUuid, int32 Team, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|int32|Team|
|const TMap< FString, FString > &|CustomData|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Currently not supported for offline sessions.




### `KickPlayer` <a id="classURH__OfflineSession_1a0b8bc9e0caafb5cb35a1e7c1caa4dfbe"></a>

void KickPlayer(const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Currently not supported for offline sessions.




### `InviteOtherSession` <a id="classURH__OfflineSession_1a52cf813a55cf049b932b5b3335d5c132"></a>

void InviteOtherSession(const FString & InvitedSessionId, const [FRHAPI_SessionInviteRequest](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest) & SessionInviteRequest, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InvitedSessionId|
|const [FRHAPI_SessionInviteRequest](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest) &|SessionInviteRequest|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Currently not supported for offline sessions.




### `KickOtherSession` <a id="classURH__OfflineSession_1aef48af399b765fcf42bddbbb49242d18"></a>

void KickOtherSession(const FString & KickedSessionId, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|KickedSessionId|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Currently not supported for offline sessions.




### `SetLeader` <a id="classURH__OfflineSession_1a88d682913b0247652317fa4ed3213152"></a>

void SetLeader(const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Currently not supported for offline sessions.




### `ChangePlayerTeam` <a id="classURH__OfflineSession_1a06bb9470b305e09a1eed9ffbc35153e8"></a>

void ChangePlayerTeam(const FGuid & PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|int32|Team|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Changes the team a given player is associated with in the session.


#### Parameters

PlayerUuid
: The unique player Id to invite to the session. 
Team
: The target team that the player will be associated with in the session. 
Delegate
: Callback delegate for the session being updated by the team change. 



### `UpdatePlayerCustomData` <a id="classURH__OfflineSession_1aa58dc5637c9e083c6990f7832077a60d"></a>

void UpdatePlayerCustomData(const FGuid & PlayerUuid, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const TMap< FString, FString > &|CustomData|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Currently not supported for offline sessions.




### `Leave` <a id="classURH__OfflineSession_1ac9879abe8ef573431669f5e4b2c99f14"></a>

void Leave(bool bFromOSSSession, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bFromOSSSession|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Leaves the session.


#### Parameters

bFromOSSSession
: If true, then leave the OSS Session. Otherwise, just leave the session. 
Delegate
: Callback delegate for the session being updated by the leave. 



### `RequestInstance` <a id="classURH__OfflineSession_1a15f9d178c350737ffd1c7315b174b9d3"></a>

void RequestInstance(const [FRHAPI_InstanceRequest](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest) & InstanceRequest, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InstanceRequest](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest) &|InstanceRequest|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Attempt to create a new instance for the session.


#### Parameters

InstanceRequest
: Details for the instance being requested. 
Delegate
: Callback delegate for the session being updated with the instance creation, or failure. 



### `EndInstance` <a id="classURH__OfflineSession_1a42d2adfee51e818244e98e0d0888f410"></a>

void EndInstance(const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Shutdown the existing instance for the session.


#### Parameters

Delegate
: Callback delegate for the session being updated with the instance ending. 



### `StartMatch` <a id="classURH__OfflineSession_1ab4a188cca6cdc1bc9171349041d757c8"></a>

void StartMatch(const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Starts the match of the instance on the session.


#### Parameters

Delegate
: Callback delegate for the session being updated with the match start. 



### `EndMatch` <a id="classURH__OfflineSession_1a223aa688a4f71b889c4e18605e978ced"></a>

void EndMatch(const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Ends the match of the instance on the session.


#### Parameters

Delegate
: Callback delegate for the session being updated with the match end. 



### `UpdateSessionInfo` <a id="classURH__OfflineSession_1a298d217d999690851348cb4041ff7599"></a>

void UpdateSessionInfo(const [FRHAPI_SessionUpdate](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate) & Update, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_SessionUpdate](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate) &|Update|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Updates the session info.


#### Parameters

Update
: The session info for the update. 
Delegate
: Callback delegate for the session being updated with new session data. 



### `UpdateInstanceInfo` <a id="classURH__OfflineSession_1a8b36aeef35d1acbe6e6af22d9a55cf0f"></a>

void UpdateInstanceInfo(const [FRHAPI_InstanceInfoUpdate](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate) & Update, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InstanceInfoUpdate](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate) &|Update|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Updates the sessions instance info.


#### Parameters

Update
: The instance info for the update. 
Delegate
: Callback delegate for the session being updated with new instance data. 



### `UpdateBrowserInfo` <a id="classURH__OfflineSession_1a1efa399f684ce083ce292c87717f22ad"></a>

void UpdateBrowserInfo(bool bEnable, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bEnable|
|const TMap< FString, FString > &|CustomData|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Updates the sessions browser info.


#### Parameters

bEnable
: If true, sets the browser info. Otherwise, clear it out. 
CustomData
: The new browser data for the update. 
Delegate
: Callback delegate for the session being updated with new browser data. 



### `UpdateInstanceHealth` <a id="classURH__OfflineSession_1afeab096fde1a8c507aa1bb90403b9d81"></a>

void UpdateInstanceHealth(ERHAPI_InstanceHealthStatus HealthStatus, const FRH_GenericSuccessWithErrorBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InstanceHealthStatus|HealthStatus|
|const FRH_GenericSuccessWithErrorBlock &|Delegate|

#### Description

Update the instance health of the session.


#### Parameters

HealthStatus
: The new health status of the instance 
Delegate
: Callback delegate for completion (note - local session is not modified on health update for efficiency reasons!) 



### `AcknowledgeBackfill` <a id="classURH__OfflineSession_1aa0472dab20c9193181b61a87f7175db2"></a>

void AcknowledgeBackfill(bool bEnable, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bEnable|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Acknowledge backfill for the session, keeping it alive and processing updates.


#### Parameters

bEnable
: If true, keeps backfill enabled 
Delegate
: Callback delegate for the session being updated with backfill data 




## Protected Functions



### `ImportSessionUpdateToAllPlayers` <a id="classURH__OfflineSession_1a662a10e6f117bb137f9d0d65b75171a8"></a>

void ImportSessionUpdateToAllPlayers(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Update)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) &|Update|

#### Description







