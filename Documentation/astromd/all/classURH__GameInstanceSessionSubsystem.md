---
title: URH_GameInstanceSessionSubsystem Class
---Inherits from [URH_GameInstanceSubsystemPlugin](/unreal-plugins/all/classurh__gameinstancesubsystemplugin/#classURH__GameInstanceSubsystemPlugin)

Subsystem for handling sessions within a game instance.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_OnBeaconCreatedDelegate|[OnBeaconCreated](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1abf524b7f51eb3c9b3671543ef3d9b2e7)|Multicast delegate fired when a beacon is created so that host objects can be registered.|
|FRH_OnBeaconCreatedDynamicDelegate|[BLUEPRINT_OnBeaconCreated](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a31f3792f396c5fb09ede462eb9f1fdd7)|Multicast delegate fired when a beacon is created so that host objects can be registered.|
|FRH_OnActiveSessionChangedDelegate|[OnActiveSessionChanged](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1ab0bea9f3a8496dbaafadf36e55a89453)|Multicast delegate fired when the active session is changed.|
|FRH_OnActiveSessionChangedDynamicDelegate|[BLUEPRINT_OnActiveSessionChanged](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a9da14e60771b65717f244a3c578df9c7)|Multicast delegate fired when the active session is changed.|
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|[DesiredSession](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a99ecdc3b0198eb5121abcafc3d709d6e)|Session we want to sync to.|
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|[ActiveSession](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a89d9ca9d834e6b2951d188ddeb8397e2)|Session we are synced to.|
|TOptional< FString >|[FallbackSecurityToken](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a6ac0e4430bf9c1028742f2e7bf47dfce)|A fallback security token to be used while the security token set is in flight.|
|bool|[bHasBeenMarkedFubar](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a4de8dea03d048a10d79f0b0ee103a5f4)|If set, the session instance is failed and unrecoverable.|
|bool|[bIsBackfillTerminated](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1abec1ac88c4da2672b4375b2d73d95c09)||
|FRH_AutoPollerPtr|[InstanceHealthPoller](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a18aa79dfb9fa057762108590a4df2250)|Poller for the host's health check.|
|FRH_AutoPollerPtr|[BackfillPoller](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1ab792de51e69f50fce33471345a7ac559)|Poller for the host's health check.|
|void|[Initialize](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a29fa0211bfa66dfb572e0c39d3f0da4f)()|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1ade667dd7b71a4179340964072bc5e7df)()|Safely tears down the subsystem.|
|void|[SyncToSession](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a2d378ff7420a5becf259cd541cb3808a)([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * SessionInfo, const FRH_GameInstanceSessionSyncBlock & Delegate)|Requests the the instance to transition to a new session.|
|void|[BLUEPRINT_SyncToSession](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a6c0d45b13336efa8a57311965c1a14b2)([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * SessionInfo, const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)|Blueprint compatible wrapper for SyncToSession.|
|const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) *|[GetInstance](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a624ab57e94286f288fea96923e407419)()|Gets the Session Data for the active session.|
|bool|[IsLocallyHostedInstance](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a4023cfa01e9aa8f2e1ef5c057d68a503)(const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) & Instance)|Checks it the session data is for a locally hosted instance.|
|bool|[IsLocallyHostedSession](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a14ce242d4756503baa32fd3fbe11fde2)(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session)|Checks it the session is locally hosted.|
|bool|[IsPlayerLocal](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1af5cb5a462041a874229dcedd93fb4b88)(const [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) & Player)|Checks if a given player in a session is local to the client.|
|FORCEINLINE [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|[GetDesiredSession](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a034556de97f977aff6bbc16531be7977)()|Gets the session that the instance is swapping to.|
|FORCEINLINE [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|[GetActiveSession](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a5057004ee3391e223199399c1e734d9c)()|Gets the session that is currently active.|
|FORCEINLINE const TOptional< FString > &|[GetFallbackSessionSecurityToken](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a3fc414bf4060c39ef1cac73d4831fbfb)()|Gets the fallback security token.|
|FORCEINLINE bool|[IsMarkedFubar](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1aa4609ee57c7e26d4475e090ea3ba3c26)()|Gets if the instance has been marked failed.|
|FORCEINLINE bool|[IsBackfillTerminated](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1ac18871e25f49b2018207688ce41f4f75)()|Gets if the instance has been marked failed.|
|bool|[IsReadyToJoinInstance](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a591d26ba5df91c4e16193e6e45897e0b)(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, bool bLog)|Checks if the session has all the players and is good to change maps.|
|bool|[StartJoinInstanceFlow](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a983058f85ec89f149f75387cc164fce4)(const FRH_GameInstanceSessionSyncBlock & Delegate)|Starts the process of transitioning the instance to a new session.|
|bool|[BLUEPRINT_StartJoinInstanceFlow](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a6eff06df13c7edabd0e1e0dd68d96455)(const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)|Blueprint compatible wrapper for StartJoinInstanceFlow.|
|void|[StartLeaveInstanceFlow](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a238216f3800a9fa90e32cee1cca965b7)(bool bAlreadyDisconnected, bool bCheckDesired, const FRH_GameInstanceSessionSyncBlock & Delegate)|Starts the process of leaving a previous the instance session.|
|void|[BLUEPRINT_StartLeaveInstanceFlow](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1ada3e5a005c97d92667d0c090ca9ec2b9)(bool bAlreadyDisconnected, bool bCheckDesired, const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)|Blueprint compatible wrapper for StartLeaveInstanceFlow.|
|void|[MarkInstanceFubar](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1ab6f2bbac803cdf796557afc165958f3d)(const FString & Reason, const FRH_GenericSuccessWithErrorBlock & Delegate)|Set an instance to a failed state marking it unrecoverable.|
|FORCEINLINE void|[MarkInstanceFubar](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1ae52d628770befb76ab24067c5ff77a28)(const FString & Reason, const FRH_GenericSuccessBlock & Delegate)||
|void|[BLUEPRINT_MarkInstanceFubar](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a4a5e8c8737b8e3a2f95ec1985a940ad0)(const FString & Reason, const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)|Blueprint compatible wrapper for MarkInstanceFubar.|
|bool|[GenerateJoinURL](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a3f52422472c8ecfd2ba93a6d95fd1ff9)(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, FURL & lastURL, FURL & outURL)|Attempt to generate a join URL from a session.|
|bool|[GenerateHostURL](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a1ef34eafcffb6de9efbdfdba3debabd8)(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, FURL & lastURL, FURL & outURL)|Attempt to generate a host URL from a session.|
|bool|[GetShouldKeepInstanceHealthAlive](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a8942eb5eb270d93023c77dff8d04ba2a)()|Gets whether backfill should be kept alive.|
|ERHAPI_InstanceHealthStatus|[GetInstanceHealthStatusToReport](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a791b155c96149c6264c6dd4757a3e751)()|Gets the health status of the instance to report to the API.|
|bool|[GetShouldKeepBackfillAlive](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a44bf6755cb4867f55ddcccf05a7a860a)()|Gets whether backfill should be kept alive.|
|void|[TerminateBackfill](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1abfe7ecd29838bd3485cc6433230a9573)()|Shuts down backfill handling for the current session, cannot be reversed.|
|void|[SetActiveSession](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a0cb07970ac000b8e724b72159b632f45)([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session)|Sets the current active session.|
|void|[OnMapLoadComplete](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a23b8145e9cbad2799ae0abc0521c25d3)(UWorld * pWorld)|Called when the map completes loading.|
|void|[OnNetworkFailure](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1aa96121d0002be3ca533f6505d69f8e0c)(UWorld * World, UNetDriver * NetDriver, ENetworkFailure::Type FailureType, const FString & ErrorString)|Called when there was a network failure trying to connect to the instance.|
|void|[OnTravelFailure](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1ac689a6c95a0feb0901487621a262417d)(UWorld * pWorld, ETravelFailure::Type FailureType, const FString & ErrorString)|Called when there is a travel failure to the instance map.|
|class ARH_OnlineBeaconHost *|[CreateBeaconHost](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1ad480537673a18c2353ce9e422d280bee)(class UWorld * pWorld, uint32 ListenPort, bool bShutdownWorldNetDriver)|Creates a beacon host for the instance.|
|void|[PollInstanceHealth](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1aa83f9f3fcff828e6b53910c98e55ab95)(const FRH_PollCompleteFunc & Delegate)|Called when instance health should be updated.|
|void|[PollBackfill](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1ac281b925199729bdb3919a49db185362)(const FRH_PollCompleteFunc & Delegate)|Called when backfill should be updated.|
|void|[EmitJoinInstanceStartedEvent](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a8c251f3fb54bb09f56c2964ad40b61db)(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session)||
|void|[EmitJoinInstanceCompletedEvent](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1abbde067b96e7e0121ccc7c261e9b6f1d)(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, bool bSuccess, const FString & ErrorReason)||
|void|[EmitLeaveInstanceEvent](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem_1a386264ec297a998caefaea9cdae39a90)(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, const FString & Reason)||
## Public Attributes



### `OnBeaconCreated` <a id="classURH__GameInstanceSessionSubsystem_1abf524b7f51eb3c9b3671543ef3d9b2e7"></a>

`FRH_OnBeaconCreatedDelegate URH_GameInstanceSessionSubsystem::OnBeaconCreated`

Multicast delegate fired when a beacon is created so that host objects can be registered.




### `BLUEPRINT_OnBeaconCreated` <a id="classURH__GameInstanceSessionSubsystem_1a31f3792f396c5fb09ede462eb9f1fdd7"></a>

`FRH_OnBeaconCreatedDynamicDelegate URH_GameInstanceSessionSubsystem::BLUEPRINT_OnBeaconCreated`

Multicast delegate fired when a beacon is created so that host objects can be registered.




### `OnActiveSessionChanged` <a id="classURH__GameInstanceSessionSubsystem_1ab0bea9f3a8496dbaafadf36e55a89453"></a>

`FRH_OnActiveSessionChangedDelegate URH_GameInstanceSessionSubsystem::OnActiveSessionChanged`

Multicast delegate fired when the active session is changed.




### `BLUEPRINT_OnActiveSessionChanged` <a id="classURH__GameInstanceSessionSubsystem_1a9da14e60771b65717f244a3c578df9c7"></a>

`FRH_OnActiveSessionChangedDynamicDelegate URH_GameInstanceSessionSubsystem::BLUEPRINT_OnActiveSessionChanged`

Multicast delegate fired when the active session is changed.





## Protected Attributes



### `DesiredSession` <a id="classURH__GameInstanceSessionSubsystem_1a99ecdc3b0198eb5121abcafc3d709d6e"></a>

`URH_JoinedSession* URH_GameInstanceSessionSubsystem::DesiredSession`

Session we want to sync to.




### `ActiveSession` <a id="classURH__GameInstanceSessionSubsystem_1a89d9ca9d834e6b2951d188ddeb8397e2"></a>

`URH_JoinedSession* URH_GameInstanceSessionSubsystem::ActiveSession`

Session we are synced to.




### `FallbackSecurityToken` <a id="classURH__GameInstanceSessionSubsystem_1a6ac0e4430bf9c1028742f2e7bf47dfce"></a>

`TOptional<FString> URH_GameInstanceSessionSubsystem::FallbackSecurityToken`

A fallback security token to be used while the security token set is in flight.




### `bHasBeenMarkedFubar` <a id="classURH__GameInstanceSessionSubsystem_1a4de8dea03d048a10d79f0b0ee103a5f4"></a>

`bool URH_GameInstanceSessionSubsystem::bHasBeenMarkedFubar`

If set, the session instance is failed and unrecoverable.




### `bIsBackfillTerminated` <a id="classURH__GameInstanceSessionSubsystem_1abec1ac88c4da2672b4375b2d73d95c09"></a>

`bool URH_GameInstanceSessionSubsystem::bIsBackfillTerminated`






### `InstanceHealthPoller` <a id="classURH__GameInstanceSessionSubsystem_1a18aa79dfb9fa057762108590a4df2250"></a>

`FRH_AutoPollerPtr URH_GameInstanceSessionSubsystem::InstanceHealthPoller`

Poller for the host's health check.




### `BackfillPoller` <a id="classURH__GameInstanceSessionSubsystem_1ab792de51e69f50fce33471345a7ac559"></a>

`FRH_AutoPollerPtr URH_GameInstanceSessionSubsystem::BackfillPoller`

Poller for the host's health check.





## Public Functions



### `Initialize` <a id="classURH__GameInstanceSessionSubsystem_1a29fa0211bfa66dfb572e0c39d3f0da4f"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__GameInstanceSessionSubsystem_1ade667dd7b71a4179340964072bc5e7df"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `SyncToSession` <a id="classURH__GameInstanceSessionSubsystem_1a2d378ff7420a5becf259cd541cb3808a"></a>

void SyncToSession([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * SessionInfo, const FRH_GameInstanceSessionSyncBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|SessionInfo|
|const FRH_GameInstanceSessionSyncBlock &|Delegate|

#### Description

Requests the the instance to transition to a new session.


#### Parameters

SessionInfo
: The session being transitioned to. 
Delegate
: Callback delegate for when the session is now active, or failed to transition. 



### `BLUEPRINT_SyncToSession` <a id="classURH__GameInstanceSessionSubsystem_1a6c0d45b13336efa8a57311965c1a14b2"></a>

void BLUEPRINT_SyncToSession([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * SessionInfo, const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|SessionInfo|
|const FRH_GameInstanceSessionSyncDynamicDelegate &|Delegate|

#### Description

Blueprint compatible wrapper for SyncToSession.




### `GetInstance` <a id="classURH__GameInstanceSessionSubsystem_1a624ab57e94286f288fea96923e407419"></a>

const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) * GetInstance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Session Data for the active session.




### `IsLocallyHostedInstance` <a id="classURH__GameInstanceSessionSubsystem_1a4023cfa01e9aa8f2e1ef5c057d68a503"></a>

bool IsLocallyHostedInstance(const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) & Instance)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) &|Instance|

#### Description

Checks it the session data is for a locally hosted instance.


#### Parameters

Instance
: The instance being checked. 

#### Returns
If true, the instance is hosted locally. 



### `IsLocallyHostedSession` <a id="classURH__GameInstanceSessionSubsystem_1a14ce242d4756503baa32fd3fbe11fde2"></a>

bool IsLocallyHostedSession(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session)

#### Parameters

| Type | Name |
|------|------|
|const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|Session|

#### Description

Checks it the session is locally hosted.


#### Parameters

Session
: The session being checked. 

#### Returns
If true, the session is hosted locally. 



### `IsPlayerLocal` <a id="classURH__GameInstanceSessionSubsystem_1af5cb5a462041a874229dcedd93fb4b88"></a>

bool IsPlayerLocal(const [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) & Player)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) &|Player|

#### Description

Checks if a given player in a session is local to the client.


#### Parameters

Player
: The player being checked. 

#### Returns
If true, the player is local to the client. 



### `GetDesiredSession` <a id="classURH__GameInstanceSessionSubsystem_1a034556de97f977aff6bbc16531be7977"></a>

FORCEINLINE [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * GetDesiredSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the session that the instance is swapping to.




### `GetActiveSession` <a id="classURH__GameInstanceSessionSubsystem_1a5057004ee3391e223199399c1e734d9c"></a>

FORCEINLINE [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * GetActiveSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the session that is currently active.




### `GetFallbackSessionSecurityToken` <a id="classURH__GameInstanceSessionSubsystem_1a3fc414bf4060c39ef1cac73d4831fbfb"></a>

FORCEINLINE const TOptional< FString > & GetFallbackSessionSecurityToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the fallback security token.




### `IsMarkedFubar` <a id="classURH__GameInstanceSessionSubsystem_1aa4609ee57c7e26d4475e090ea3ba3c26"></a>

FORCEINLINE bool IsMarkedFubar()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the instance has been marked failed.




### `IsBackfillTerminated` <a id="classURH__GameInstanceSessionSubsystem_1ac18871e25f49b2018207688ce41f4f75"></a>

FORCEINLINE bool IsBackfillTerminated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the instance has been marked failed.




### `IsReadyToJoinInstance` <a id="classURH__GameInstanceSessionSubsystem_1a591d26ba5df91c4e16193e6e45897e0b"></a>

bool IsReadyToJoinInstance(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, bool bLog)

#### Parameters

| Type | Name |
|------|------|
|const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|Session|
|bool|bLog|

#### Description

Checks if the session has all the players and is good to change maps.


#### Parameters

Session
: The session being checked. 

#### Returns
If true, the session is ready for a map transition. 



### `StartJoinInstanceFlow` <a id="classURH__GameInstanceSessionSubsystem_1a983058f85ec89f149f75387cc164fce4"></a>

bool StartJoinInstanceFlow(const FRH_GameInstanceSessionSyncBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GameInstanceSessionSyncBlock &|Delegate|

#### Description

Starts the process of transitioning the instance to a new session.


#### Parameters

Delegate
: Callback delegate for when the session is now active, or failed to transition. 



### `BLUEPRINT_StartJoinInstanceFlow` <a id="classURH__GameInstanceSessionSubsystem_1a6eff06df13c7edabd0e1e0dd68d96455"></a>

bool BLUEPRINT_StartJoinInstanceFlow(const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GameInstanceSessionSyncDynamicDelegate &|Delegate|

#### Description

Blueprint compatible wrapper for StartJoinInstanceFlow.




### `StartLeaveInstanceFlow` <a id="classURH__GameInstanceSessionSubsystem_1a238216f3800a9fa90e32cee1cca965b7"></a>

void StartLeaveInstanceFlow(bool bAlreadyDisconnected, bool bCheckDesired, const FRH_GameInstanceSessionSyncBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bAlreadyDisconnected|
|bool|bCheckDesired|
|const FRH_GameInstanceSessionSyncBlock &|Delegate|

#### Description

Starts the process of leaving a previous the instance session.


#### Parameters

bAlreadyDisconnected
: If true, the instance is already disconnected from the previous session. 
bCheckDesired
: If true, and the instance has a desired session, start joining that session. 
Delegate
: Callback delegate for when the instance is left. 



### `BLUEPRINT_StartLeaveInstanceFlow` <a id="classURH__GameInstanceSessionSubsystem_1ada3e5a005c97d92667d0c090ca9ec2b9"></a>

void BLUEPRINT_StartLeaveInstanceFlow(bool bAlreadyDisconnected, bool bCheckDesired, const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bAlreadyDisconnected|
|bool|bCheckDesired|
|const FRH_GameInstanceSessionSyncDynamicDelegate &|Delegate|

#### Description

Blueprint compatible wrapper for StartLeaveInstanceFlow.




### `MarkInstanceFubar` <a id="classURH__GameInstanceSessionSubsystem_1ab6f2bbac803cdf796557afc165958f3d"></a>

void MarkInstanceFubar(const FString & Reason, const FRH_GenericSuccessWithErrorBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Reason|
|const FRH_GenericSuccessWithErrorBlock &|Delegate|

#### Description

Set an instance to a failed state marking it unrecoverable.


#### Parameters

Reason
: The reason the instance was marked failed. 
Delegate
: Callback delegate for if the instance was marked failed. 



### `MarkInstanceFubar` <a id="classURH__GameInstanceSessionSubsystem_1ae52d628770befb76ab24067c5ff77a28"></a>

FORCEINLINE void MarkInstanceFubar(const FString & Reason, const FRH_GenericSuccessBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Reason|
|const FRH_GenericSuccessBlock &|Delegate|

#### Description






### `BLUEPRINT_MarkInstanceFubar` <a id="classURH__GameInstanceSessionSubsystem_1a4a5e8c8737b8e3a2f95ec1985a940ad0"></a>

void BLUEPRINT_MarkInstanceFubar(const FString & Reason, const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Reason|
|const FRH_GenericSuccessWithErrorDynamicDelegate &|Delegate|

#### Description

Blueprint compatible wrapper for MarkInstanceFubar.




### `GenerateJoinURL` <a id="classURH__GameInstanceSessionSubsystem_1a3f52422472c8ecfd2ba93a6d95fd1ff9"></a>

bool GenerateJoinURL(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, FURL & lastURL, FURL & outURL)

#### Parameters

| Type | Name |
|------|------|
|const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|Session|
|FURL &|lastURL|
|FURL &|outURL|

#### Description

Attempt to generate a join URL from a session.


#### Parameters

Session
: The session to be joined. 
lastURL
: The last URL used to connect to a session. 
outURL
: The URL to join the session. 

#### Returns
If true, a join URL was generated. 



### `GenerateHostURL` <a id="classURH__GameInstanceSessionSubsystem_1a1ef34eafcffb6de9efbdfdba3debabd8"></a>

bool GenerateHostURL(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, FURL & lastURL, FURL & outURL)

#### Parameters

| Type | Name |
|------|------|
|const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|Session|
|FURL &|lastURL|
|FURL &|outURL|

#### Description

Attempt to generate a host URL from a session.


#### Parameters

Session
: The session a host url is being requested for. 
lastURL
: The last URL used to connect to a session. 
outURL
: The Host URL fot the session. 

#### Returns
If true, a host URL was generated. 



### `GetShouldKeepInstanceHealthAlive` <a id="classURH__GameInstanceSessionSubsystem_1a8942eb5eb270d93023c77dff8d04ba2a"></a>

bool GetShouldKeepInstanceHealthAlive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets whether backfill should be kept alive.




### `GetInstanceHealthStatusToReport` <a id="classURH__GameInstanceSessionSubsystem_1a791b155c96149c6264c6dd4757a3e751"></a>

ERHAPI_InstanceHealthStatus GetInstanceHealthStatusToReport()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the health status of the instance to report to the API.




### `GetShouldKeepBackfillAlive` <a id="classURH__GameInstanceSessionSubsystem_1a44bf6755cb4867f55ddcccf05a7a860a"></a>

bool GetShouldKeepBackfillAlive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets whether backfill should be kept alive.




### `TerminateBackfill` <a id="classURH__GameInstanceSessionSubsystem_1abfe7ecd29838bd3485cc6433230a9573"></a>

void TerminateBackfill()

#### Parameters

| Type | Name |
|------|------|

#### Description

Shuts down backfill handling for the current session, cannot be reversed.





## Protected Functions



### `SetActiveSession` <a id="classURH__GameInstanceSessionSubsystem_1a0cb07970ac000b8e724b72159b632f45"></a>

void SetActiveSession([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session)

#### Parameters

| Type | Name |
|------|------|
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|Session|

#### Description

Sets the current active session.


#### Parameters

Session
: to set as active session 



### `OnMapLoadComplete` <a id="classURH__GameInstanceSessionSubsystem_1a23b8145e9cbad2799ae0abc0521c25d3"></a>

void OnMapLoadComplete(UWorld * pWorld)

#### Parameters

| Type | Name |
|------|------|
|UWorld *|pWorld|

#### Description

Called when the map completes loading.


#### Parameters

pWorld
: The world that was being traveled to. 



### `OnNetworkFailure` <a id="classURH__GameInstanceSessionSubsystem_1aa96121d0002be3ca533f6505d69f8e0c"></a>

void OnNetworkFailure(UWorld * World, UNetDriver * NetDriver, ENetworkFailure::Type FailureType, const FString & ErrorString)

#### Parameters

| Type | Name |
|------|------|
|UWorld *|World|
|UNetDriver *|NetDriver|
|ENetworkFailure::Type|FailureType|
|const FString &|ErrorString|

#### Description

Called when there was a network failure trying to connect to the instance.


#### Parameters

World
: The world that was being connected to. 
NetDriver
: The net driver that was being used to connect. 
FailureType
: The type of failure that occurred. 
ErrorString
: The error string associated with the failure. 



### `OnTravelFailure` <a id="classURH__GameInstanceSessionSubsystem_1ac689a6c95a0feb0901487621a262417d"></a>

void OnTravelFailure(UWorld * pWorld, ETravelFailure::Type FailureType, const FString & ErrorString)

#### Parameters

| Type | Name |
|------|------|
|UWorld *|pWorld|
|ETravelFailure::Type|FailureType|
|const FString &|ErrorString|

#### Description

Called when there is a travel failure to the instance map.


#### Parameters

pWorld
: The world that was being traveled to. 
FailureType
: The type of failure that occurred. 
ErrorString
: The error string associated with the failure. 



### `CreateBeaconHost` <a id="classURH__GameInstanceSessionSubsystem_1ad480537673a18c2353ce9e422d280bee"></a>

class ARH_OnlineBeaconHost * CreateBeaconHost(class UWorld * pWorld, uint32 ListenPort, bool bShutdownWorldNetDriver)

#### Parameters

| Type | Name |
|------|------|
|class UWorld *|pWorld|
|uint32|ListenPort|
|bool|bShutdownWorldNetDriver|

#### Description

Creates a beacon host for the instance.


#### Parameters

pWorld
: The world the beacon is for. 
ListenPort
: The port the beacon listens to. 
bShutdownWorldNetDriver
: If set, then the beacon shuts down the worlds Net Driver when created. 



### `PollInstanceHealth` <a id="classURH__GameInstanceSessionSubsystem_1aa83f9f3fcff828e6b53910c98e55ab95"></a>

void PollInstanceHealth(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Called when instance health should be updated.


#### Parameters

Delegate
: Callback delegate for when the health is updated. 



### `PollBackfill` <a id="classURH__GameInstanceSessionSubsystem_1ac281b925199729bdb3919a49db185362"></a>

void PollBackfill(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Called when backfill should be updated.


#### Parameters

Delegate
: Callback delegate for when the health is updated. 



### `EmitJoinInstanceStartedEvent` <a id="classURH__GameInstanceSessionSubsystem_1a8c251f3fb54bb09f56c2964ad40b61db"></a>

void EmitJoinInstanceStartedEvent(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session)

#### Parameters

| Type | Name |
|------|------|
|const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|Session|

#### Description






### `EmitJoinInstanceCompletedEvent` <a id="classURH__GameInstanceSessionSubsystem_1abbde067b96e7e0121ccc7c261e9b6f1d"></a>

void EmitJoinInstanceCompletedEvent(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, bool bSuccess, const FString & ErrorReason)

#### Parameters

| Type | Name |
|------|------|
|const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|Session|
|bool|bSuccess|
|const FString &|ErrorReason|

#### Description






### `EmitLeaveInstanceEvent` <a id="classURH__GameInstanceSessionSubsystem_1a386264ec297a998caefaea9cdae39a90"></a>

void EmitLeaveInstanceEvent(const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, const FString & Reason)

#### Parameters

| Type | Name |
|------|------|
|const [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|Session|
|const FString &|Reason|

#### Description







