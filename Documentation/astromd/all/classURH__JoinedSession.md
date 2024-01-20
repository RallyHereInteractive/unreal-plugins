---
title: URH_JoinedSession Class
---Inherits from [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView)

Joined Sessions are sessions the session owner is actively a member of.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_OnSessionMemberPresenceChangedDelegate|[OnSessionMemberPresenceChangedDelegate](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a7f746263df687c8a2deb32066ad90bc1)|Delegate fired when presence information for a member of session is updated (requires SetWatchingPlayers(true))|
|FRH_OnSessionMemberPresenceChangedDynamicDelegate|[BLUEPRINT_OnSessionMemberPresenceChangedDelegate](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a9b88d3864804e5f5e3e7c65423886afc)|Blueprint compatible delegate fired when presence information for a member of session is updated (requires SetWatchingPlayers(true))|
|bool|[bIsActive](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a65673742601d81963e56a0154bd52f31)|Tracks if the session is currently active session on the Game Instance Session Subsystem.|
|bool|[bWatchingPlayers](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1ad87171cfd86191b3bfe08d830aef91a2)|Tracks if the session is currently watching its members presences.|
|TWeakObjectPtr< AOnlineBeaconClient >|[LastBeacon](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a3f862797f415b5e8e6dcd42b3484555d)|For debug tool usage, to track the last beacon.|
|FString|[GetClientVersionForSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1abe0b5da3d9dc63e91429235c9fd808f0)()|Gets the version this client will report itself being for sessions.|
|ERHAPI_Input|[GetClientInputTypeForSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a2eb67e38fac174da516d5d7edf7c995e)()|Gets the default input type for sessions for this client.|
|bool|[IsJoined](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a093cdbe146bf429f72b518946be55544)()|Gets that the session owner is a part of this session.|
|void|[ImportAPISession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a317e3e9ac26886d16b3c6368b4f5a041)(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & newSessionData, const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & newTemplate)|Update a session from the owner, implies a template update.|
|void|[Expire](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1aceed4925a4cbad98122008e1865c8305)(const FRH_OnSessionExpiredDelegate & Delegate)|Called when the session was removed from our session list. Cleans up state then trigger callback on owner.|
|bool|[IsWatchingPlayers](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a0d147c01e65b66b10d366f8e8cbd663b)()|Gets if the players in the session are being watched for presence updates.|
|void|[SetWatchingPlayers](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a4cd00fffe489bee87dd613b4c7454eeb)(bool bWatch)|Sets the session to watch for presence updates for the players.|
|void|[SetActive](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1aae360214f982e3371139278dba21d59a)(bool bActive)|Sets the session to be active.|
|FORCEINLINE bool|[IsActive](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a24ba1f66bbc11c3077f3260e38f4d1a9)()|Gets if the session is currently active session on the Game Instance Session Subsystem.|
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *|[GetPlatformSyncer](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a53165384a90b7f96ff98234d347e9fbd)()|Gets the platform session synchronization object for this session.|
|FORCEINLINE bool|[IsSyncedWithPlatform](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a382663f05ceffcf6f52b24238de4caa9)()|Whether this session is synchronizing with a platform session.|
|void|[InvitePlayer](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a6a0b5b92f5c7c2a29998af28750e312a)(const FGuid & PlayerUuid, int32 Team, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Invites a player to the session.|
|void|[BLUEPRINT_InvitePlayer](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1afd1d672f739718139cea8b8e52eb0163)(UPARAM(ref) const FGuid & PlayerUuid, int32 Team, UPARAM(ref) const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of InvitePlayer.|
|void|[KickPlayer](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a9900bfcea8a4dd857035369f6d83ebf4)(const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Kicks a player from the session.|
|void|[BLUEPRINT_KickPlayer](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a386cc01eb704f92c604858fcac7a4d33)(UPARAM(ref) const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of KickPlayer.|
|void|[InviteOtherSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a55e8c82955dec4c8f81989bd8136bfdd)(const FString & InvitedSessionId, const [FRHAPI_SessionInviteRequest](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest) & SessionInviteRequest, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Invites a different session to this session.|
|void|[BLUEPRINT_InviteOtherSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a7e12d51414fda20496499fe02bd93903)(UPARAM(ref) const FString & InvitedSessionId, const [FRHAPI_SessionInviteRequest](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest) & SessionInviteRequest, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of InviteOtherSession.|
|void|[KickOtherSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1ac1859983ddf64bcb57f98901f860771f)(const FString & KickedSessionId, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Kicks all players in a target tsession from this session.|
|void|[BLUEPRINT_KickOtherSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a17c9c3b99efd36e2cca0e0107f51585e)(UPARAM(ref) const FString & KickedSessionId, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of KickOtherSession.|
|void|[SetLeader](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a8309789a41b590eca354ba7f4a13fbbb)(const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Sets a new leader for the session.|
|void|[BLUEPRINT_SetLeader](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a590d38638c156bfd1e91d3254ce2d790)(UPARAM(ref) const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of SetLeader.|
|void|[ChangePlayerTeam](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1aea0c996c92d78456c0e487d68adb0149)(const FGuid & PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Changes the team a given player is associated with in the session.|
|void|[BLUEPRINT_ChangePlayerTeam](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a461ab4dbbdba9eb7cbd6c2fc6dbc8cd9)(UPARAM(ref) const FGuid & PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of ChangePlayerTeam.|
|void|[UpdatePlayerCustomData](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1afaca05bece7331db98ab6939253e9e43)(const FGuid & PlayerUuid, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Changes the session player's custom data.|
|void|[BLUEPRINT_UpdatePlayerCustomData](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a767558a93065c0de4c323e483d50115d)(UPARAM(ref) const FGuid & PlayerUuid, UPARAM(ref) const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of UpdatePlayerCustomData.|
|void|[Leave](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1ae71947251791e097d6c54cac290d6370)(bool bFromOSSSession, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Leaves the session.|
|void|[BLUEPRINT_Leave](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a8becfb1b197b0d296c7b2f2bd2f167e8)(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of Leave.|
|void|[RequestInstance](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a59003a7a00d60e2c40f9cfd5d880e174)(const [FRHAPI_InstanceRequest](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest) & InstanceRequest, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Attempt to create a new instance for the session.|
|void|[BLUEPRINT_RequestInstance](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a82e6eb155c794d0b8d56a274a1b0f1ca)(const [FRHAPI_InstanceRequest](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest) & InstanceRequest, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of RequestInstance.|
|void|[EndInstance](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a9796186e002bc737570086fd8c0f306e)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Shutdown the existing instance for the session.|
|void|[BLUEPRINT_EndInstance](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a2a96a9c8410e20376e62d49221c230e0)(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of EndInstance.|
|void|[StartMatch](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1aabfc79e8e100a80e712c456bf0c73c75)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Starts the match of the instance on the session.|
|void|[BLUEPRINT_StartMatch](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a086616c9265c53101d251bc07d7a26f7)(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of StartMatch.|
|void|[EndMatch](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a77ded578b692e5cc1e38ba71c584d9a5)(const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Ends the match of the instance on the session.|
|void|[BLUEPRINT_EndMatch](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a80d6caaf4c442b2e944d58c2b83cfafa)(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of EndMatch.|
|void|[UpdateSessionInfo](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a663aad6c00042ad4d1d590a32f488f68)(const [FRHAPI_SessionUpdate](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate) & Update, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Updates the session info.|
|void|[BLUEPRINT_UpdateSessionInfo](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1aada1f8e3526ada391992b1b66cad6efe)(const [FRHAPI_SessionUpdate](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate) & Update, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible of UpdateSessionInfo.|
|[FRHAPI_SessionUpdate](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate)|[GetSessionUpdateInfoDefaults](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1ae35cae8bbc5eda25a907535f79af461e)()|Gets a struct with a copy of the session state, so that it can be modified and passed to UpdateSessionInfo.|
|void|[UpdateInstanceInfo](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a940fffbe0c2af9746036418287d7984e)(const [FRHAPI_InstanceInfoUpdate](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate) & Update, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Updates the sessions instance info.|
|void|[BLUEPRINT_UpdateInstanceInfo](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1acdb03af46a68b21e014f96089011ec22)(const [FRHAPI_InstanceInfoUpdate](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate) & Update, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of UpdateInstanceInfo.|
|[FRHAPI_InstanceInfoUpdate](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate)|[GetInstanceUpdateInfoDefaults](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a1a2f212edcbd7c5f5e99711ccca25db0)()|Gets a struct with a copy of the instance state, so that it can be modified and passed to UpdateInstanceInfo.|
|void|[UpdateBrowserInfo](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a70579d37430c3c4866e7d13c311cb34a)(bool bEnable, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Updates the sessions browser info.|
|void|[BLUEPRINT_UpdateBrowserInfo](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a945dce110fb6f629e60f0b6129ff946c)(bool bEnable, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of UpdateBrowserInfo.|
|void|[UpdateInstanceHealth](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a21b977a90174d2c0e38b34bccd8d731b)(ERHAPI_InstanceHealthStatus HealthStatus, const FRH_GenericSuccessWithErrorBlock & Delegate)|Update the instance health of the session.|
|void|[BLUEPRINT_UpdateInstanceHealth](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a7e4adc2bc7ac9a85bd2b142525060cdb)(ERHAPI_InstanceHealthStatus HealthStatus, const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)|Blueprint compatible version of UpdateInstanceHealth.|
|void|[AcknowledgeBackfill](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1aa117722db710be26d09a40111c7d98be)(bool bEnable, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Acknowledge backfill for the session, keeping it alive and processing updates.|
|void|[BLUEPRINT_AcknowledgeBackfill](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a563631e71579b38857c2cb80edb21852)(bool bEnable, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of AcknowledgeBackfill.|
|AOnlineBeaconClient *|[CreateBeacon](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a0b827415b68cee36628434766171e324)(class ULocalPlayer * Player, TSubclassOf< AOnlineBeaconClient > BeaconClass, const FEncryptionData & EncryptionData)|Utility function for beacon connections - not exposed to blueprint so that it can have encryption data.|
|AOnlineBeaconClient *|[BLUEPRINT_CreateBeacon](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a5eef79162d21be8f4a47ab5c6908d3c6)(class ULocalPlayer * Player, TSubclassOf< AOnlineBeaconClient > BeaconClass)|Blueprint compatible version of CreateBeacon.|
|bool|[IsBeaconSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1a27a45aa40e1c17ac9d2e5dac8864deea)()|Is this a beacon session.|
|AOnlineBeaconClient *|[GetLastBeacon](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession_1aa7b2fa84e8044e6e24777ea5589a57a1)()|For debug tool usage, to get the last beacon.|
## Public Attributes



### `OnSessionMemberPresenceChangedDelegate` <a id="classURH__JoinedSession_1a7f746263df687c8a2deb32066ad90bc1"></a>

`FRH_OnSessionMemberPresenceChangedDelegate URH_JoinedSession::OnSessionMemberPresenceChangedDelegate`

Delegate fired when presence information for a member of session is updated (requires SetWatchingPlayers(true))




### `BLUEPRINT_OnSessionMemberPresenceChangedDelegate` <a id="classURH__JoinedSession_1a9b88d3864804e5f5e3e7c65423886afc"></a>

`FRH_OnSessionMemberPresenceChangedDynamicDelegate URH_JoinedSession::BLUEPRINT_OnSessionMemberPresenceChangedDelegate`

Blueprint compatible delegate fired when presence information for a member of session is updated (requires SetWatchingPlayers(true))





## Protected Attributes



### `bIsActive` <a id="classURH__JoinedSession_1a65673742601d81963e56a0154bd52f31"></a>

`bool URH_JoinedSession::bIsActive`

Tracks if the session is currently active session on the Game Instance Session Subsystem.




### `bWatchingPlayers` <a id="classURH__JoinedSession_1ad87171cfd86191b3bfe08d830aef91a2"></a>

`bool URH_JoinedSession::bWatchingPlayers`

Tracks if the session is currently watching its members presences.




### `LastBeacon` <a id="classURH__JoinedSession_1a3f862797f415b5e8e6dcd42b3484555d"></a>

`TWeakObjectPtr<AOnlineBeaconClient> URH_JoinedSession::LastBeacon`

For debug tool usage, to track the last beacon.





## Public Static Functions



### `GetClientVersionForSession` <a id="classURH__JoinedSession_1abe0b5da3d9dc63e91429235c9fd808f0"></a>

FString GetClientVersionForSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the version this client will report itself being for sessions.




### `GetClientInputTypeForSession` <a id="classURH__JoinedSession_1a2eb67e38fac174da516d5d7edf7c995e"></a>

ERHAPI_Input GetClientInputTypeForSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the default input type for sessions for this client.





## Public Functions



### `IsJoined` <a id="classURH__JoinedSession_1a093cdbe146bf429f72b518946be55544"></a>

bool IsJoined()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets that the session owner is a part of this session.




### `ImportAPISession` <a id="classURH__JoinedSession_1a317e3e9ac26886d16b3c6368b4f5a041"></a>

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



### `Expire` <a id="classURH__JoinedSession_1aceed4925a4cbad98122008e1865c8305"></a>

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



### `IsWatchingPlayers` <a id="classURH__JoinedSession_1a0d147c01e65b66b10d366f8e8cbd663b"></a>

bool IsWatchingPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the players in the session are being watched for presence updates.




### `SetWatchingPlayers` <a id="classURH__JoinedSession_1a4cd00fffe489bee87dd613b4c7454eeb"></a>

void SetWatchingPlayers(bool bWatch)

#### Parameters

| Type | Name |
|------|------|
|bool|bWatch|

#### Description

Sets the session to watch for presence updates for the players.


#### Parameters

bWatch
: If the session should watch for presence updates. 



### `SetActive` <a id="classURH__JoinedSession_1aae360214f982e3371139278dba21d59a"></a>

void SetActive(bool bActive)

#### Parameters

| Type | Name |
|------|------|
|bool|bActive|

#### Description

Sets the session to be active.


#### Parameters

bActive
: If the session should be active. 



### `IsActive` <a id="classURH__JoinedSession_1a24ba1f66bbc11c3077f3260e38f4d1a9"></a>

FORCEINLINE bool IsActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the session is currently active session on the Game Instance Session Subsystem.




### `GetPlatformSyncer` <a id="classURH__JoinedSession_1a53165384a90b7f96ff98234d347e9fbd"></a>

[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * GetPlatformSyncer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the platform session synchronization object for this session.




### `IsSyncedWithPlatform` <a id="classURH__JoinedSession_1a382663f05ceffcf6f52b24238de4caa9"></a>

FORCEINLINE bool IsSyncedWithPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Whether this session is synchronizing with a platform session.




### `InvitePlayer` <a id="classURH__JoinedSession_1a6a0b5b92f5c7c2a29998af28750e312a"></a>

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
Team
: The target team that the player will be associated with in the session. 
CustomData
: The custom data for the invite 
Delegate
: Callback delegate for the session being updated by the invite. 



### `BLUEPRINT_InvitePlayer` <a id="classURH__JoinedSession_1afd1d672f739718139cea8b8e52eb0163"></a>

void BLUEPRINT_InvitePlayer(UPARAM(ref) const FGuid & PlayerUuid, int32 Team, UPARAM(ref) const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUuid|
|int32|Team|
|UPARAM(ref) const TMap< FString, FString > &|CustomData|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of InvitePlayer.


#### Parameters

PlayerUuid
: The unique player Id to invite to the session. 
Team
: The target team that the player will be associated with in the session. 
CustomData
: The custom data for the invite 
Delegate
: Callback delegate for the session being updated by the invite. 



### `KickPlayer` <a id="classURH__JoinedSession_1a9900bfcea8a4dd857035369f6d83ebf4"></a>

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



### `BLUEPRINT_KickPlayer` <a id="classURH__JoinedSession_1a386cc01eb704f92c604858fcac7a4d33"></a>

void BLUEPRINT_KickPlayer(UPARAM(ref) const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUuid|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of KickPlayer.


#### Parameters

PlayerUuid
: The unique player Id to kick from the session. 
Delegate
: Callback delegate for the session being updated by the kick. 



### `InviteOtherSession` <a id="classURH__JoinedSession_1a55e8c82955dec4c8f81989bd8136bfdd"></a>

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



### `BLUEPRINT_InviteOtherSession` <a id="classURH__JoinedSession_1a7e12d51414fda20496499fe02bd93903"></a>

void BLUEPRINT_InviteOtherSession(UPARAM(ref) const FString & InvitedSessionId, const [FRHAPI_SessionInviteRequest](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest) & SessionInviteRequest, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FString &|InvitedSessionId|
|const [FRHAPI_SessionInviteRequest](/unreal-plugins/all/structfrhapi__sessioninviterequest/#structFRHAPI__SessionInviteRequest) &|SessionInviteRequest|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of InviteOtherSession.


#### Parameters

InvitedSessionId
: The session id to send the invite to 
SessionInviteRequest
: Information about the invite being sent, including team information 
Delegate
: Callback delegate for the session being updated by the invite. 



### `KickOtherSession` <a id="classURH__JoinedSession_1ac1859983ddf64bcb57f98901f860771f"></a>

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



### `BLUEPRINT_KickOtherSession` <a id="classURH__JoinedSession_1a17c9c3b99efd36e2cca0e0107f51585e"></a>

void BLUEPRINT_KickOtherSession(UPARAM(ref) const FString & KickedSessionId, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FString &|KickedSessionId|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of KickOtherSession.


#### Parameters

KickedSessionId
: The session Id to kick from this session. 
Delegate
: Callback delegate for the session being updated by the kick. 



### `SetLeader` <a id="classURH__JoinedSession_1a8309789a41b590eca354ba7f4a13fbbb"></a>

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



### `BLUEPRINT_SetLeader` <a id="classURH__JoinedSession_1a590d38638c156bfd1e91d3254ce2d790"></a>

void BLUEPRINT_SetLeader(UPARAM(ref) const FGuid & PlayerUuid, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUuid|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of SetLeader.


#### Parameters

PlayerUuid
: The unique player Id to become the session leader. 
Delegate
: Callback delegate for the session being updated by the leader change. 



### `ChangePlayerTeam` <a id="classURH__JoinedSession_1aea0c996c92d78456c0e487d68adb0149"></a>

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



### `BLUEPRINT_ChangePlayerTeam` <a id="classURH__JoinedSession_1a461ab4dbbdba9eb7cbd6c2fc6dbc8cd9"></a>

void BLUEPRINT_ChangePlayerTeam(UPARAM(ref) const FGuid & PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUuid|
|int32|Team|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of ChangePlayerTeam.


#### Parameters

PlayerUuid
: The unique player Id to invite to the session. 
Team
: The target team that the player will be associated with in the session. 
Delegate
: Callback delegate for the session being updated by the team change. 



### `UpdatePlayerCustomData` <a id="classURH__JoinedSession_1afaca05bece7331db98ab6939253e9e43"></a>

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



### `BLUEPRINT_UpdatePlayerCustomData` <a id="classURH__JoinedSession_1a767558a93065c0de4c323e483d50115d"></a>

void BLUEPRINT_UpdatePlayerCustomData(UPARAM(ref) const FGuid & PlayerUuid, UPARAM(ref) const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUuid|
|UPARAM(ref) const TMap< FString, FString > &|CustomData|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of UpdatePlayerCustomData.


#### Parameters

PlayerUuid
: The unique player Id whose custom data will be updated 
CustomData
: The custom data map to set the player's to 
Delegate
: Callback delegate for the session being updated by the player update 



### `Leave` <a id="classURH__JoinedSession_1ae71947251791e097d6c54cac290d6370"></a>

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



### `BLUEPRINT_Leave` <a id="classURH__JoinedSession_1a8becfb1b197b0d296c7b2f2bd2f167e8"></a>

void BLUEPRINT_Leave(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of Leave.


#### Parameters

bFromOSSSession
: If true, then leave the OSS Session. Otherwise, just leave the session. 
Delegate
: Callback delegate for the session being updated by the leave. 



### `RequestInstance` <a id="classURH__JoinedSession_1a59003a7a00d60e2c40f9cfd5d880e174"></a>

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



### `BLUEPRINT_RequestInstance` <a id="classURH__JoinedSession_1a82e6eb155c794d0b8d56a274a1b0f1ca"></a>

void BLUEPRINT_RequestInstance(const [FRHAPI_InstanceRequest](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest) & InstanceRequest, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InstanceRequest](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest) &|InstanceRequest|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of RequestInstance.


#### Parameters

InstanceRequest
: Details for the instance being requested. 
Delegate
: Callback delegate for the session being updated with the instance creation, or failure. 



### `EndInstance` <a id="classURH__JoinedSession_1a9796186e002bc737570086fd8c0f306e"></a>

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



### `BLUEPRINT_EndInstance` <a id="classURH__JoinedSession_1a2a96a9c8410e20376e62d49221c230e0"></a>

void BLUEPRINT_EndInstance(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of EndInstance.


#### Parameters

Delegate
: Callback delegate for the session being updated with the instance ending. 



### `StartMatch` <a id="classURH__JoinedSession_1aabfc79e8e100a80e712c456bf0c73c75"></a>

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



### `BLUEPRINT_StartMatch` <a id="classURH__JoinedSession_1a086616c9265c53101d251bc07d7a26f7"></a>

void BLUEPRINT_StartMatch(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of StartMatch.


#### Parameters

Delegate
: Callback delegate for the session being updated with the match start. 



### `EndMatch` <a id="classURH__JoinedSession_1a77ded578b692e5cc1e38ba71c584d9a5"></a>

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



### `BLUEPRINT_EndMatch` <a id="classURH__JoinedSession_1a80d6caaf4c442b2e944d58c2b83cfafa"></a>

void BLUEPRINT_EndMatch(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of EndMatch.


#### Parameters

Delegate
: Callback delegate for the session being updated with the match end. 



### `UpdateSessionInfo` <a id="classURH__JoinedSession_1a663aad6c00042ad4d1d590a32f488f68"></a>

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



### `BLUEPRINT_UpdateSessionInfo` <a id="classURH__JoinedSession_1aada1f8e3526ada391992b1b66cad6efe"></a>

void BLUEPRINT_UpdateSessionInfo(const [FRHAPI_SessionUpdate](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate) & Update, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_SessionUpdate](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate) &|Update|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible of UpdateSessionInfo.


#### Parameters

Update
: The session info for the update. 
Delegate
: Callback delegate for the session being updated with new session data. 



### `GetSessionUpdateInfoDefaults` <a id="classURH__JoinedSession_1ae35cae8bbc5eda25a907535f79af461e"></a>

[FRHAPI_SessionUpdate](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate) GetSessionUpdateInfoDefaults()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets a struct with a copy of the session state, so that it can be modified and passed to UpdateSessionInfo.




### `UpdateInstanceInfo` <a id="classURH__JoinedSession_1a940fffbe0c2af9746036418287d7984e"></a>

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



### `BLUEPRINT_UpdateInstanceInfo` <a id="classURH__JoinedSession_1acdb03af46a68b21e014f96089011ec22"></a>

void BLUEPRINT_UpdateInstanceInfo(const [FRHAPI_InstanceInfoUpdate](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate) & Update, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InstanceInfoUpdate](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate) &|Update|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of UpdateInstanceInfo.


#### Parameters

Update
: The instance info for the update. 
Delegate
: Callback delegate for the session being updated with new instance data. 



### `GetInstanceUpdateInfoDefaults` <a id="classURH__JoinedSession_1a1a2f212edcbd7c5f5e99711ccca25db0"></a>

[FRHAPI_InstanceInfoUpdate](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate) GetInstanceUpdateInfoDefaults()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets a struct with a copy of the instance state, so that it can be modified and passed to UpdateInstanceInfo.




### `UpdateBrowserInfo` <a id="classURH__JoinedSession_1a70579d37430c3c4866e7d13c311cb34a"></a>

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



### `BLUEPRINT_UpdateBrowserInfo` <a id="classURH__JoinedSession_1a945dce110fb6f629e60f0b6129ff946c"></a>

void BLUEPRINT_UpdateBrowserInfo(bool bEnable, const TMap< FString, FString > & CustomData, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bEnable|
|const TMap< FString, FString > &|CustomData|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of UpdateBrowserInfo.


#### Parameters

bEnable
: If true, sets the browser info. Otherwise, clear it out. 
CustomData
: The new browser data for the update. 
Delegate
: Callback delegate for the session being updated with new browser data. 



### `UpdateInstanceHealth` <a id="classURH__JoinedSession_1a21b977a90174d2c0e38b34bccd8d731b"></a>

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



### `BLUEPRINT_UpdateInstanceHealth` <a id="classURH__JoinedSession_1a7e4adc2bc7ac9a85bd2b142525060cdb"></a>

void BLUEPRINT_UpdateInstanceHealth(ERHAPI_InstanceHealthStatus HealthStatus, const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InstanceHealthStatus|HealthStatus|
|const FRH_GenericSuccessWithErrorDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of UpdateInstanceHealth.


#### Parameters

HealthStatus
: The new health status of the instance 
Delegate
: Callback delegate for completion (note - local session is not modified on health update for efficiency reasons!) 



### `AcknowledgeBackfill` <a id="classURH__JoinedSession_1aa117722db710be26d09a40111c7d98be"></a>

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



### `BLUEPRINT_AcknowledgeBackfill` <a id="classURH__JoinedSession_1a563631e71579b38857c2cb80edb21852"></a>

void BLUEPRINT_AcknowledgeBackfill(bool bEnable, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bEnable|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of AcknowledgeBackfill.


#### Parameters

bEnable
: If true, sets the browser info. Otherwise, clear it out. 
Delegate
: Callback delegate for the session being updated with new browser data. 



### `CreateBeacon` <a id="classURH__JoinedSession_1a0b827415b68cee36628434766171e324"></a>

AOnlineBeaconClient * CreateBeacon(class ULocalPlayer * Player, TSubclassOf< AOnlineBeaconClient > BeaconClass, const FEncryptionData & EncryptionData)

#### Parameters

| Type | Name |
|------|------|
|class ULocalPlayer *|Player|
|TSubclassOf< AOnlineBeaconClient >|BeaconClass|
|const FEncryptionData &|EncryptionData|

#### Description

Utility function for beacon connections - not exposed to blueprint so that it can have encryption data.


#### Parameters

Player
: Player the beacon is being created for, used for login credential passing 
BeaconClass
: The type of beacon to create 
EncryptionData
: Encryption credentials, if required 

#### Returns
The created client, for which a connection attempt is being made 



### `BLUEPRINT_CreateBeacon` <a id="classURH__JoinedSession_1a5eef79162d21be8f4a47ab5c6908d3c6"></a>

AOnlineBeaconClient * BLUEPRINT_CreateBeacon(class ULocalPlayer * Player, TSubclassOf< AOnlineBeaconClient > BeaconClass)

#### Parameters

| Type | Name |
|------|------|
|class ULocalPlayer *|Player|
|TSubclassOf< AOnlineBeaconClient >|BeaconClass|

#### Description

Blueprint compatible version of CreateBeacon.


#### Parameters

Player
: Player the beacon is being created for, used for login credential passing 
BeaconClass
: The type of beacon to create 
EncryptionData
: Encryption credentials, if required 

#### Returns
The created client, for which a connection attempt is being made 



### `IsBeaconSession` <a id="classURH__JoinedSession_1a27a45aa40e1c17ac9d2e5dac8864deea"></a>

bool IsBeaconSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Is this a beacon session.




### `GetLastBeacon` <a id="classURH__JoinedSession_1aa7b2fa84e8044e6e24777ea5589a57a1"></a>

AOnlineBeaconClient * GetLastBeacon()

#### Parameters

| Type | Name |
|------|------|

#### Description

For debug tool usage, to get the last beacon.





