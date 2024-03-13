---
title: URH_OnlineSession Class
---Inherits from [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession)

Online Sessions are sessions that are synchronized from the API (and since it is a joined session, the Session Owner is a member)

## Summary
| Kind | View | Description |
|------|------|-------------|
|const TArray< FString > &|[MatchmakingTags](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a3d02eff30ffd63efd45ba406a77a095c)||
|const TArray< FString > const FRH_OnSessionUpdatedDynamicDelegate &|[Delegate](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a2bc77310ae4517d14bae417fe4e3f020)||
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) >|[SessionOwner](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a3549895abb13d13b6693cc058065eace)||
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > const FRH_OnSessionUpdatedDynamicDelegate &|[Delegate](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1af4c227b3f3313aae40b08c87f06c1360)||
|bool|[IsOffline](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1af734641e6fe04130aadcfb7a6ed1d58a)()|Gets that an online session is not an offline session.|
|void|[ImportAPISession](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a4fe7233a68b23d1ca4985d3b0e103ef5)(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & newSessionData, const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & newTemplate)|Update a session from the owner, implies a template update.|
|void|[Expire](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a829df0d3fa147c93bc5bf43df526e050)(const FRH_OnSessionExpiredDelegate & Delegate)|Called when the session was removed from our session list. Cleans up state then trigger callback on owner.|
|void|[JoinQueue](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a28750e69db30613d54f4a6c9bfcc94a6)(const [FRHAPI_QueueJoinRequest](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest) & Request, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Joins a specific queue with the session to be matchmade with others.|
|void|[JoinQueue](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1ac6471f91d2ee705b4849186e621e60c3)(const FString & QueueId, const TArray< FString > & MatchmakingTags, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Simplified version of queue join, joins a specific queue with the session to be matchmade with others.|
||[UFUNCTION](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a4e4d322afa4582235311cf5c2c0ba763)(BlueprintCallable , Category , meta )|Blueprint copmatible version of JoinQueue.|
|void|[BLUEPRINT_JoinQueueEx](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a077e94f81edf865ddc55168c9ce2a353)(const [FRHAPI_QueueJoinRequest](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest) & Request, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint copmatible version of JoinQueue.|
|void|[LeaveQueue](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a580de5cf705209f24551008caf72151c)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Leaves the currently active matchmaking queue.|
|void|[BLUEPRINT_LeaveQueue](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a3c807b01d9d8b0f4f7be9b492dc3e991)(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of LeaveQueue.|
||[UFUNCTION](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1ae6998ea8e5f2265f71c2b7d201ebb738)(BlueprintCallable , Category , meta )|Blueprint compatible version of JoinById.|
|void|[InvitePlayer](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a8bf3c389551cbdf8ecf5112c8af151cf)(const FGuid & PlayerUuid, int32 Team, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Invites a player to the session.|
|void|[KickPlayer](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a4f8560ffb8ac393738907307ed2225bd)(const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Kicks a player from the session.|
|void|[InviteOtherSession](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1af7389a57edef2dfb81103c950d10c5d8)(const FString & InvitedSessionId, const [FRHAPI_SessionInviteRequest](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest) & SessionInviteRequest, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Invites a different session to this session.|
|void|[KickOtherSession](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1aaea0484871603acf63a76317dd1ffe9e)(const FString & KickedSessionId, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Kicks all players in a target tsession from this session.|
|void|[SetLeader](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1ade15c14b576cf4c5ba384bc61fe25879)(const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Sets a new leader for the session.|
|void|[ChangePlayerTeam](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1ab35d9139e68b21dd3ee9ed779fb37f16)(const FGuid & PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Changes the team a given player is associated with in the session.|
|void|[UpdatePlayerCustomData](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a8f35a3597ef47c2570e9489e62ac6d23)(const FGuid & PlayerUuid, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Changes the session player's custom data.|
|void|[Leave](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1abb7f5b8c9eaadd30166337a5dccebbbe)(bool bFromOSSSession, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Leaves the session.|
|void|[RequestInstance](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1aae906a67108cba268d73786229e8aa94)(const [FRHAPI_InstanceRequest](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest) & InstanceRequest, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Attempt to create a new instance for the session.|
|void|[EndInstance](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a38a05f415495a019c3f02fcae76317ec)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Shutdown the existing instance for the session.|
|void|[StartMatch](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a0f028da11d7b9881afa4400ee58bc5e1)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Starts the match of the instance on the session.|
|void|[EndMatch](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a4cc20fcaa5c722e3aa23272b344ac563)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Ends the match of the instance on the session.|
|void|[UpdateSessionInfo](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a21428e63a1268ef552d3186cd7df9d50)(const [FRHAPI_SessionUpdate](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate) & Update, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Updates the session info.|
|void|[UpdateInstanceInfo](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1abdfc1e53b834da4afdfdce29de9b318b)(const [FRHAPI_InstanceInfoUpdate](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate) & Update, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Updates the sessions instance info.|
|void|[UpdateBrowserInfo](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a35197db28a89b5325ef4384dca5d76c8)(bool bEnable, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Updates the sessions browser info.|
|void|[UpdateInstanceHealth](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1ac49edd6dd0b2987fc8b0dcb6f563f585)(ERHAPI_InstanceHealthStatus HealthStatus, const FRH_GenericSuccessWithErrorBlock & Delegate)|Update the instance health of the session.|
|void|[AcknowledgeBackfill](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1aa087b6190e032b3d3c22c110498cd33a)(bool bEnable, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Acknowledge backfill for the session, keeping it alive and processing updates.|
|void|[CreateOrJoinByType](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a1f0241c4ed8d2adf93d65658cc93cb08)(const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) & CreateParams, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Will create a session in most cases, though sessions configured as a hub in their template may perform a join instead.|
|void|[BLUEPRINT_CreateOrJoinByType](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1abf5957ecc6c8c676c02e539e4d8937b5)(const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) & CreateParams, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of CreateOrJoinByType.|
|[FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest)|[GetJoinDetailDefaults](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1ae1c1165198cead8cce3e374a2b24e870)(TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner)|Gets a set of default join details for a session owner.|
|void|[JoinById](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a0ea34da0f40870874b29e9f75e15c173)(const FString & SessionId, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Attempts to join a session by id. Requires that the player have permission to join the session to succeed.|
|void|[JoinByIdEx](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a44ee48cdffc656d6ed76db109f4806f1)(const FString & SessionId, const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & JoinDetails, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Attempts to join a session by id. Requires that the player have permission to join the session to succeed.|
|void|[BLUEPRINT_JoinByIdEx](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession_1a8caf8cdd381aa17cb621c887c2cf1ab3)(const FString & SessionId, const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & JoinDetails, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of JoinByIdEx.|
## Public Attributes



### `MatchmakingTags` <a id="classURH__OnlineSession_1a3d02eff30ffd63efd45ba406a77a095c"></a>

`const TArray<FString>& URH_OnlineSession::MatchmakingTags`






### `Delegate` <a id="classURH__OnlineSession_1a2bc77310ae4517d14bae417fe4e3f020"></a>

`const TArray<FString> const FRH_OnSessionUpdatedDynamicDelegate& URH_OnlineSession::Delegate`






### `SessionOwner` <a id="classURH__OnlineSession_1a3549895abb13d13b6693cc058065eace"></a>

`TScriptInterface<IRH_SessionOwnerInterface> URH_OnlineSession::SessionOwner`






### `Delegate` <a id="classURH__OnlineSession_1af4c227b3f3313aae40b08c87f06c1360"></a>

`TScriptInterface<IRH_SessionOwnerInterface> const FRH_OnSessionUpdatedDynamicDelegate& URH_OnlineSession::Delegate`







## Public Functions



### `IsOffline` <a id="classURH__OnlineSession_1af734641e6fe04130aadcfb7a6ed1d58a"></a>

bool IsOffline()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets that an online session is not an offline session.




### `ImportAPISession` <a id="classURH__OnlineSession_1a4fe7233a68b23d1ca4985d3b0e103ef5"></a>

void ImportAPISession(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & newSessionData, const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & newTemplate)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) &|newSessionData|
|const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) &|newTemplate|

#### Description

Update a session from the owner, implies a template update.


#### Parameters

newSessionData
: The new session data. 
newTemplate
: The new session template. 



### `Expire` <a id="classURH__OnlineSession_1a829df0d3fa147c93bc5bf43df526e050"></a>

void Expire(const FRH_OnSessionExpiredDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionExpiredDelegate &|Delegate|

#### Description

Called when the session was removed from our session list. Cleans up state then trigger callback on owner.


#### Parameters

Delegate
: The delegate to call when the session is removed. 



### `JoinQueue` <a id="classURH__OnlineSession_1a28750e69db30613d54f4a6c9bfcc94a6"></a>

void JoinQueue(const [FRHAPI_QueueJoinRequest](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest) & Request, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_QueueJoinRequest](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest) &|Request|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Joins a specific queue with the session to be matchmade with others.


#### Parameters

Request
: The request for joining the queue. 
Delegate
: Callback delegate on the session being updated from joining matchmaking. 



### `JoinQueue` <a id="classURH__OnlineSession_1ac6471f91d2ee705b4849186e621e60c3"></a>

void JoinQueue(const FString & QueueId, const TArray< FString > & MatchmakingTags, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|QueueId|
|const TArray< FString > &|MatchmakingTags|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Simplified version of queue join, joins a specific queue with the session to be matchmade with others.


#### Parameters

QueueId
: The Id of the queue being joined. 
MatchmakingTags
: Specific data to be passed in as extra params for matchmaking. 
Delegate
: Callback delegate on the session being updated from joining matchmaking. 



### `UFUNCTION` <a id="classURH__OnlineSession_1a4e4d322afa4582235311cf5c2c0ba763"></a>

 UFUNCTION(BlueprintCallable , Category , meta )

#### Parameters

| Type | Name |
|------|------|
|BlueprintCallable||
|Category||
|meta||

#### Description

Blueprint copmatible version of JoinQueue.


#### Parameters

QueueId
: The Id of the queue being joined. 
MatchmakingTags
: Specific data to be passed in as extra params for matchmaking. 
Delegate
: Callback delegate on the session being updated from joining matchmaking. 



### `BLUEPRINT_JoinQueueEx` <a id="classURH__OnlineSession_1a077e94f81edf865ddc55168c9ce2a353"></a>

void BLUEPRINT_JoinQueueEx(const [FRHAPI_QueueJoinRequest](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest) & Request, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_QueueJoinRequest](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest) &|Request|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint copmatible version of JoinQueue.


#### Parameters

Request
: The request for joining the queue. 
Delegate
: Callback delegate on the session being updated from joining matchmaking. 



### `LeaveQueue` <a id="classURH__OnlineSession_1a580de5cf705209f24551008caf72151c"></a>

void LeaveQueue(const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Leaves the currently active matchmaking queue.


#### Parameters

Delegate
: Callback delegate on the session being updated from leaving matchmaking. 



### `BLUEPRINT_LeaveQueue` <a id="classURH__OnlineSession_1a3c807b01d9d8b0f4f7be9b492dc3e991"></a>

void BLUEPRINT_LeaveQueue(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of LeaveQueue.


#### Parameters

Delegate
: Callback delegate on the session being updated from leaving matchmaking. 



### `UFUNCTION` <a id="classURH__OnlineSession_1ae6998ea8e5f2265f71c2b7d201ebb738"></a>

 UFUNCTION(BlueprintCallable , Category , meta )

#### Parameters

| Type | Name |
|------|------|
|BlueprintCallable||
|Category||
|meta||

#### Description

Blueprint compatible version of JoinById.


#### Parameters

SessionId
: Id of the session to join. 
SessionOwner
: Owner of the session to join. 
Delegate
: Callback deledate with an update of the session being joined. 



### `InvitePlayer` <a id="classURH__OnlineSession_1a8bf3c389551cbdf8ecf5112c8af151cf"></a>

void InvitePlayer(const FGuid & PlayerUuid, int32 Team, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|int32|Team|
|const TMap< FString, FString > &|CustomData|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Invites a player to the session.


#### Parameters

PlayerUuid
: The unique player Id to invite to the session. 
CustomData
: The custom data for the invite 
Team
: The target team that the player will be associated with in the session. 
Delegate
: Callback delegate for the session being updated by the invite. 



### `KickPlayer` <a id="classURH__OnlineSession_1a4f8560ffb8ac393738907307ed2225bd"></a>

void KickPlayer(const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Kicks a player from the session.


#### Parameters

PlayerUuid
: The unique player Id to kick from the session. 
Delegate
: Callback delegate for the session being updated by the kick. 



### `InviteOtherSession` <a id="classURH__OnlineSession_1af7389a57edef2dfb81103c950d10c5d8"></a>

void InviteOtherSession(const FString & InvitedSessionId, const [FRHAPI_SessionInviteRequest](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest) & SessionInviteRequest, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InvitedSessionId|
|const [FRHAPI_SessionInviteRequest](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest) &|SessionInviteRequest|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Invites a different session to this session.


#### Parameters

InvitedSessionId
: The session id to send the invite to 
SessionInviteRequest
: Information about the invite being sent, including team information 
Delegate
: Callback delegate for the session being updated by the invite. 



### `KickOtherSession` <a id="classURH__OnlineSession_1aaea0484871603acf63a76317dd1ffe9e"></a>

void KickOtherSession(const FString & KickedSessionId, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|KickedSessionId|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Kicks all players in a target tsession from this session.


#### Parameters

KickedSessionId
: The session Id to kick from this session. 
Delegate
: Callback delegate for the session being updated by the kick. 



### `SetLeader` <a id="classURH__OnlineSession_1ade15c14b576cf4c5ba384bc61fe25879"></a>

void SetLeader(const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Sets a new leader for the session.


#### Parameters

PlayerUuid
: The unique player Id to become the session leader. 
Delegate
: Callback delegate for the session being updated by the leader change. 



### `ChangePlayerTeam` <a id="classURH__OnlineSession_1ab35d9139e68b21dd3ee9ed779fb37f16"></a>

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



### `UpdatePlayerCustomData` <a id="classURH__OnlineSession_1a8f35a3597ef47c2570e9489e62ac6d23"></a>

void UpdatePlayerCustomData(const FGuid & PlayerUuid, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const TMap< FString, FString > &|CustomData|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Changes the session player's custom data.


#### Parameters

PlayerUuid
: The unique player Id whose custom data will be updated 
CustomData
: The custom data map to set the player's to 
Delegate
: Callback delegate for the session being updated by the player update 



### `Leave` <a id="classURH__OnlineSession_1abb7f5b8c9eaadd30166337a5dccebbbe"></a>

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



### `RequestInstance` <a id="classURH__OnlineSession_1aae906a67108cba268d73786229e8aa94"></a>

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



### `EndInstance` <a id="classURH__OnlineSession_1a38a05f415495a019c3f02fcae76317ec"></a>

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



### `StartMatch` <a id="classURH__OnlineSession_1a0f028da11d7b9881afa4400ee58bc5e1"></a>

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



### `EndMatch` <a id="classURH__OnlineSession_1a4cc20fcaa5c722e3aa23272b344ac563"></a>

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



### `UpdateSessionInfo` <a id="classURH__OnlineSession_1a21428e63a1268ef552d3186cd7df9d50"></a>

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



### `UpdateInstanceInfo` <a id="classURH__OnlineSession_1abdfc1e53b834da4afdfdce29de9b318b"></a>

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



### `UpdateBrowserInfo` <a id="classURH__OnlineSession_1a35197db28a89b5325ef4384dca5d76c8"></a>

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



### `UpdateInstanceHealth` <a id="classURH__OnlineSession_1ac49edd6dd0b2987fc8b0dcb6f563f585"></a>

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



### `AcknowledgeBackfill` <a id="classURH__OnlineSession_1aa087b6190e032b3d3c22c110498cd33a"></a>

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




## Public Static Functions



### `CreateOrJoinByType` <a id="classURH__OnlineSession_1a1f0241c4ed8d2adf93d65658cc93cb08"></a>

void CreateOrJoinByType(const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) & CreateParams, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) &|CreateParams|
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) >|SessionOwner|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Will create a session in most cases, though sessions configured as a hub in their template may perform a join instead.


#### Parameters

CreateParams
: The parameters for the session creation or joining. 
SessionOwner
: The owner of the session. 
Delegate
: Callback delegate on the session being updated from create/join. 



### `BLUEPRINT_CreateOrJoinByType` <a id="classURH__OnlineSession_1abf5957ecc6c8c676c02e539e4d8937b5"></a>

void BLUEPRINT_CreateOrJoinByType(const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) & CreateParams, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) &|CreateParams|
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) >|SessionOwner|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of CreateOrJoinByType.


#### Parameters

CreateParams
: The parameters for the session creation or joining. 
SessionOwner
: The owner of the session. 
Delegate
: Callback delegate on the session being updated from create/join. 



### `GetJoinDetailDefaults` <a id="classURH__OnlineSession_1ae1c1165198cead8cce3e374a2b24e870"></a>

[FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) GetJoinDetailDefaults(TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner)

#### Parameters

| Type | Name |
|------|------|
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) >|SessionOwner|

#### Description

Gets a set of default join details for a session owner.


#### Parameters

SessionOwner
: Owner of the session to join. 

#### Returns
default join details for a session owner. 



### `JoinById` <a id="classURH__OnlineSession_1a0ea34da0f40870874b29e9f75e15c173"></a>

void JoinById(const FString & SessionId, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) >|SessionOwner|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Attempts to join a session by id. Requires that the player have permission to join the session to succeed.


#### Parameters

SessionId
: Id of the session to join. 
SessionOwner
: Owner of the session to join. 
Delegate
: Callback deledate with an update of the session being joined. 



### `JoinByIdEx` <a id="classURH__OnlineSession_1a44ee48cdffc656d6ed76db109f4806f1"></a>

void JoinByIdEx(const FString & SessionId, const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & JoinDetails, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|
|const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) &|JoinDetails|
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) >|SessionOwner|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Attempts to join a session by id. Requires that the player have permission to join the session to succeed.


#### Parameters

SessionId
: Id of the session to join. 
JoinDetails
: Details for the player joining the session. 
SessionOwner
: Owner of the session to join. 
Delegate
: Callback deledate with an update of the session being joined. 



### `BLUEPRINT_JoinByIdEx` <a id="classURH__OnlineSession_1a8caf8cdd381aa17cb621c887c2cf1ab3"></a>

void BLUEPRINT_JoinByIdEx(const FString & SessionId, const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & JoinDetails, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|
|const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) &|JoinDetails|
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) >|SessionOwner|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of JoinByIdEx.


#### Parameters

SessionId
: Id of the session to join. 
JoinDetails
: Details for the player joining the session. 
SessionOwner
: Owner of the session to join. 
Delegate
: Callback deledate with an update of the session being joined. 




