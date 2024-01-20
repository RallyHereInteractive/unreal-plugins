---
title: URH_SessionView Class
---Inherits from UObject

Base class providing functionality for viewing session data and interacting with it from blueprint. Specifically does not have an "owner" meaning it cannot do "work" - it is read only. The subclasses have owners.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_OnSessionUpdatedMulticastDelegate|[OnSessionUpdatedDelegate](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a1e2288d1a6ad082498edbe4168d6b8a4)|Delegate fired whenever the session is updated.|
|FRH_OnSessionUpdatedMulticastDynamicDelegate|[BLUEPRINT_OnSessionUpdatedDelegate](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1ad4bcea359be2cf5f8083d27088c6db7a)|Blueprint compatible delegate fired whenever the session is updated.|
|FRH_OnSessionUpdatedMulticastDelegate|[OnSessionNotFoundDelegate](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a8426fe031d4f2711140ce31aa5eaf0a0)|Delegate fired whenever the session is not found.|
|FRH_OnSessionUpdatedMulticastDynamicDelegate|[BLUEPRINT_OnSessionNotFoundDelegate](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a6672874c5fffb498ed5f19cfa6805751)|Blueprint compatible delegate fired whenever the session is not found.|
|FRH_OnSessionMemberStateChangedDelegate|[OnSessionMemberStateChangedDelegate](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1aaab8a60729077d368e1cabf44c10167f)|Delegate fired whenever the session member list changes with details about the change.|
|FRH_OnSessionMemberStateChangedDynamicDelegate|[BLUEPRINT_OnSessionMemberStateChangedDelegate](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1aa2d2de09bbcdd4b464f7f144f5f90920)|Blueprint compatible delegate fired whenever the session member list changes with details about the change.|
|[FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper)|[SessionData](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a2323a589459ab11bb6ee7596d234d7df)|The Session Data with Etag.|
|[FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate)|[Template](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a4726a534a0d2c8f2de41f9ad5963d64f)|A reference copy of the Template (in case the template is deleted from the managed template list)|
|FRH_AutoPollerPtr|[Poller](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1aae3d3ebab134537e289fe4340777b47d)|Poller in charge of polling for the session.|
|TArray< [FRH_DeferredSessionPoll](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll) >|[DeferredPolls](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a6519f00b229dbd0cad4be5907e937b15)|Array of stored poll requests that have not yet been processed.|
|TArray< [FRH_DeferredSessionPoll](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll) >|[WaitingPolls](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1ae0ea80e3394fe77f996d00bc692169c6)|Array of stored poll requests that are waiting on the result of the current poll.|
|FORCEINLINE const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) &|[GetSessionWithETag](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a82784931fa5147876f93a3096d38417f)()|Gets the Session Data and its ETag.|
|const [FRHAPI_Session](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session) &|[GetSessionData](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1adc1e64df9d89153b96f912abaf54ed4f)()|Gets the Session Data.|
|const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) *|[GetInstanceData](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1aa41fa4e0e20493b0b89ca0976c72330e)()|Gets the Instance Data.|
|FORCEINLINE const [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) *|[GetSessionPlayer](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a3c11043ff5ae46b22f47442734758773)(const FGuid & PlayerUuid)|Gets a session player if they are part of the session.|
|FORCEINLINE bool|[GetSessionPlayer](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1abf7a2c182bbf41b82a158fc111598aad)(const FGuid & PlayerUuid, [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) & OutPlayer)|Gets a session player if they are part of the session.|
|FORCEINLINE const [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) *|[GetSessionLeader](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a4c24806b4e7e37ce2f3716330f82fed9)()|Gets the leader of the session if one exists.|
|FORCEINLINE bool|[GetSessionLeader](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a31765b2d8138d16349615492bfd46bee)([FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) & OutPlayer)|Gets the leader of the session if one exists.|
|FORCEINLINE int32|[GetSessionPlayerTeamId](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a0bfd9114186b65e9d6ab6b4c97552fa5)(const FGuid & PlayerUuid)|Gets the team id of a player if they are part of the session.|
|FORCEINLINE bool|[IsCreatedByMatchmaking](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a64970cbfe9adb2a065749a4e48b349df)()|Gets if the session was created through matchmaking.|
|FORCEINLINE int32|[GetSessionPlayerCount](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1aceaf6db4198c0defac9c87bbc32574fb)()|Gets the number of players in the session.|
|bool|[IsOffline](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a7b855a2b8ac702d05cf3efe3263519b2)()|Gets if the session is offline.|
|FORCEINLINE bool|[IsOnline](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a165bf0e2a2f4a73041daa0ebbaf082c2)()|Gets if the session is online.|
|bool|[IsJoined](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1ae77e9295b2e867940d1fe31abd88a347)()|Gets if the session is a one the local player has joined.|
|bool|[IsInQueue](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a5a36dda3d9b0c6049a26ce951f586d9d)()|Gets if the session is currently in matchmaking.|
|FORCEINLINE [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate)|[GetTemplate](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a293350d46d361b42df4e83c7a4f9bf9c)()|Gets the session template.|
|FORCEINLINE FString|[GetETag](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1abd96670c8e2f44b233af9322bd2a06fc)()|Gets the session ETag.|
|FORCEINLINE FString|[GetSessionId](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a6aedf3a6656fcde76b8e18d0f2b297fe)()|Gets the session Id.|
|FORCEINLINE FString|[GetSessionType](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a450529876e3c21928d4fbc9925d1bb68)()|Gets the session type.|
|TMap< FString, FString >|[GetCustomData](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a4cea1471adcb445c7f71cb5d1ef0f86c)()|Gets session custom data.|
|bool|[GetCustomDataValue](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a278a3291ea20e0ce736da8ea4db8e767)(const FString & Key, FString & OutValue)|Gets a session custom data value.|
|TMap< FString, FString >|[GetInstanceCustomData](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a5b3e04566785eea12417d84737177555)()|Gets intance custom data.|
|bool|[GetInstanceCustomDataValue](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a887bb0b311f4d9554e73419f9be81aad)(const FString & Key, FString & OutValue)|Gets an instance custom data value.|
|TMap< FString, FString >|[GetBrowserCustomData](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a4691063225ba4ad458aa12a14020c7d7)()|Gets session browser custom data.|
|bool|[GetPlatformSession](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1aa477ffc8b54fb7d355664615900a6603)(ERHAPI_Platform Platform, [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) & OutPlatformSession)||
|void|[ImportAPISession](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a92790b540906943bf8501049b45222b3)(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & newSessionData, const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & newTemplate)|Update a session from the owner, implies a template update.|
|void|[ImportTemplate](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1aa910b3892253ae47a3eedf5f91eae252)(const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & newTemplate)|Update the session template .|
|void|[Expire](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a81b861028c8b998005d3627752cce51f)(const FRH_OnSessionExpiredDelegate & Delegate)|Called when the session was removed from our session list. Cleans up state then trigger callback on owner.|
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) >|[GetSessionOwner](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1ab4c61212a9d10507d2aab3d645b4b985)()|Gets the session owner.|
|void|[StartPolling](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a488f1c164e31d30c17d98f13226c6079)()|Starts the polling of session updates.|
|void|[StopPolling](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1aa34ca34af04d8bcb3200d48395c242c2)()|Stops the polling for session updates.|
|void|[DeferPolling](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a09c8faf3934af2d317d955cbd5da5ed3)()|Defers the polling for session updates (in case an out-of-band update was received)|
|float|[GetPollTimeRemaining](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1aa57cc3f86e075380283f9a7a22d07a06)()|Gets the current time remaining in the poll cycle in seconds. Returns -1.f if poll is inactive or is executing.|
|void|[ForcePollForUpdate](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a3dcdea9537922b7c533929b05dc5c885)(bool bClearETag)|Forces a polling call even if the polling is waiting till next time to pulse.|
|void|[AddDeferredPoll](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a7e207452f3a5b71dcf74642d7d15aa9e)(const [FRH_DeferredSessionPoll](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll) & DeferredPoll)|Add a deferred poll to the list of polls to run in sequence.|
|void|[CheckDeferredPolls](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1aaf1a897f37236897e788f33d2c34304a)()|Check and potentially kick off a deferred poll.|
|void|[PollSingleSession](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a58adc0e014ed968714bd0bad3589c586)(const FString & SessionId, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Polls a specific session for an update. Can poll for sessions you are not a member of. Will properly create a relevant session object as needed via the Session Owner interface.|
|void|[PollAllSessions](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a349a28d11ea3b7461e3f8231a55248f9)(TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, bool bPollMembership, bool bPollAllSessions, const FRH_OnPollAllSessionsDelegate & Delegate)|Polls all sessions with an owner for an update.|
|void|[PollForUpdate](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView_1a4ccf0aaf6734e2e5638ab257c1451480)(const FRH_PollCompleteFunc & Delegate)|Triggers a poll for a session update, automatically called as part of the polling loop.|
## Public Attributes



### `OnSessionUpdatedDelegate` <a id="classURH__SessionView_1a1e2288d1a6ad082498edbe4168d6b8a4"></a>

`FRH_OnSessionUpdatedMulticastDelegate URH_SessionView::OnSessionUpdatedDelegate`

Delegate fired whenever the session is updated.




### `BLUEPRINT_OnSessionUpdatedDelegate` <a id="classURH__SessionView_1ad4bcea359be2cf5f8083d27088c6db7a"></a>

`FRH_OnSessionUpdatedMulticastDynamicDelegate URH_SessionView::BLUEPRINT_OnSessionUpdatedDelegate`

Blueprint compatible delegate fired whenever the session is updated.




### `OnSessionNotFoundDelegate` <a id="classURH__SessionView_1a8426fe031d4f2711140ce31aa5eaf0a0"></a>

`FRH_OnSessionUpdatedMulticastDelegate URH_SessionView::OnSessionNotFoundDelegate`

Delegate fired whenever the session is not found.




### `BLUEPRINT_OnSessionNotFoundDelegate` <a id="classURH__SessionView_1a6672874c5fffb498ed5f19cfa6805751"></a>

`FRH_OnSessionUpdatedMulticastDynamicDelegate URH_SessionView::BLUEPRINT_OnSessionNotFoundDelegate`

Blueprint compatible delegate fired whenever the session is not found.




### `OnSessionMemberStateChangedDelegate` <a id="classURH__SessionView_1aaab8a60729077d368e1cabf44c10167f"></a>

`FRH_OnSessionMemberStateChangedDelegate URH_SessionView::OnSessionMemberStateChangedDelegate`

Delegate fired whenever the session member list changes with details about the change.




### `BLUEPRINT_OnSessionMemberStateChangedDelegate` <a id="classURH__SessionView_1aa2d2de09bbcdd4b464f7f144f5f90920"></a>

`FRH_OnSessionMemberStateChangedDynamicDelegate URH_SessionView::BLUEPRINT_OnSessionMemberStateChangedDelegate`

Blueprint compatible delegate fired whenever the session member list changes with details about the change.





## Protected Attributes



### `SessionData` <a id="classURH__SessionView_1a2323a589459ab11bb6ee7596d234d7df"></a>

`FRH_APISessionWithETag URH_SessionView::SessionData`

The Session Data with Etag.




### `Template` <a id="classURH__SessionView_1a4726a534a0d2c8f2de41f9ad5963d64f"></a>

`FRHAPI_SessionTemplate URH_SessionView::Template`

A reference copy of the Template (in case the template is deleted from the managed template list)




### `Poller` <a id="classURH__SessionView_1aae3d3ebab134537e289fe4340777b47d"></a>

`FRH_AutoPollerPtr URH_SessionView::Poller`

Poller in charge of polling for the session.




### `DeferredPolls` <a id="classURH__SessionView_1a6519f00b229dbd0cad4be5907e937b15"></a>

`TArray<FRH_DeferredSessionPoll> URH_SessionView::DeferredPolls`

Array of stored poll requests that have not yet been processed.




### `WaitingPolls` <a id="classURH__SessionView_1ae0ea80e3394fe77f996d00bc692169c6"></a>

`TArray<FRH_DeferredSessionPoll> URH_SessionView::WaitingPolls`

Array of stored poll requests that are waiting on the result of the current poll.





## Public Functions



### `GetSessionWithETag` <a id="classURH__SessionView_1a82784931fa5147876f93a3096d38417f"></a>

FORCEINLINE const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & GetSessionWithETag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Session Data and its ETag.




### `GetSessionData` <a id="classURH__SessionView_1adc1e64df9d89153b96f912abaf54ed4f"></a>

const [FRHAPI_Session](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session) & GetSessionData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Session Data.




### `GetInstanceData` <a id="classURH__SessionView_1aa41fa4e0e20493b0b89ca0976c72330e"></a>

const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) * GetInstanceData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Instance Data.




### `GetSessionPlayer` <a id="classURH__SessionView_1a3c11043ff5ae46b22f47442734758773"></a>

FORCEINLINE const [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) * GetSessionPlayer(const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|

#### Description

Gets a session player if they are part of the session.


#### Parameters

PlayerUuid
: The unique Id of the player to get. 

#### Returns
The player if they exist in the session, otherwise null. 



### `GetSessionPlayer` <a id="classURH__SessionView_1abf7a2c182bbf41b82a158fc111598aad"></a>

FORCEINLINE bool GetSessionPlayer(const FGuid & PlayerUuid, [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) & OutPlayer)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|[FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) &|OutPlayer|

#### Description

Gets a session player if they are part of the session.


#### Parameters

PlayerUuid
: The unique Id of the player to get. 
OutPlayer
: The player if they exist in the session. 

#### Returns
If true, the player was found. 



### `GetSessionLeader` <a id="classURH__SessionView_1a4c24806b4e7e37ce2f3716330f82fed9"></a>

FORCEINLINE const [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) * GetSessionLeader()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the leader of the session if one exists.




### `GetSessionLeader` <a id="classURH__SessionView_1a31765b2d8138d16349615492bfd46bee"></a>

FORCEINLINE bool GetSessionLeader([FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) & OutPlayer)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) &|OutPlayer|

#### Description

Gets the leader of the session if one exists.


#### Parameters

OutPlayer
: The leader if they exist in the session. 

#### Returns
If true, the leader was found. 



### `GetSessionPlayerTeamId` <a id="classURH__SessionView_1a0bfd9114186b65e9d6ab6b4c97552fa5"></a>

FORCEINLINE int32 GetSessionPlayerTeamId(const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|

#### Description

Gets the team id of a player if they are part of the session.


#### Parameters

PlayerUuid
: The unique Id of the player to get. 

#### Returns
The player's team id if they exist in the session, otherwise INDEX_NONE. 



### `IsCreatedByMatchmaking` <a id="classURH__SessionView_1a64970cbfe9adb2a065749a4e48b349df"></a>

FORCEINLINE bool IsCreatedByMatchmaking()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the session was created through matchmaking.




### `GetSessionPlayerCount` <a id="classURH__SessionView_1aceaf6db4198c0defac9c87bbc32574fb"></a>

FORCEINLINE int32 GetSessionPlayerCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the number of players in the session.




### `IsOffline` <a id="classURH__SessionView_1a7b855a2b8ac702d05cf3efe3263519b2"></a>

bool IsOffline()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the session is offline.




### `IsOnline` <a id="classURH__SessionView_1a165bf0e2a2f4a73041daa0ebbaf082c2"></a>

FORCEINLINE bool IsOnline()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the session is online.




### `IsJoined` <a id="classURH__SessionView_1ae77e9295b2e867940d1fe31abd88a347"></a>

bool IsJoined()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the session is a one the local player has joined.




### `IsInQueue` <a id="classURH__SessionView_1a5a36dda3d9b0c6049a26ce951f586d9d"></a>

bool IsInQueue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the session is currently in matchmaking.




### `GetTemplate` <a id="classURH__SessionView_1a293350d46d361b42df4e83c7a4f9bf9c"></a>

FORCEINLINE [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) GetTemplate()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the session template.




### `GetETag` <a id="classURH__SessionView_1abd96670c8e2f44b233af9322bd2a06fc"></a>

FORCEINLINE FString GetETag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the session ETag.




### `GetSessionId` <a id="classURH__SessionView_1a6aedf3a6656fcde76b8e18d0f2b297fe"></a>

FORCEINLINE FString GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the session Id.




### `GetSessionType` <a id="classURH__SessionView_1a450529876e3c21928d4fbc9925d1bb68"></a>

FORCEINLINE FString GetSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the session type.




### `GetCustomData` <a id="classURH__SessionView_1a4cea1471adcb445c7f71cb5d1ef0f86c"></a>

TMap< FString, FString > GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets session custom data.




### `GetCustomDataValue` <a id="classURH__SessionView_1a278a3291ea20e0ce736da8ea4db8e767"></a>

bool GetCustomDataValue(const FString & Key, FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Key|
|FString &|OutValue|

#### Description

Gets a session custom data value.


#### Parameters

Key
: The custom data being requested. 
Value
: The value of the custom data. 

#### Returns
If true, the custom data was found. 



### `GetInstanceCustomData` <a id="classURH__SessionView_1a5b3e04566785eea12417d84737177555"></a>

TMap< FString, FString > GetInstanceCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets intance custom data.




### `GetInstanceCustomDataValue` <a id="classURH__SessionView_1a887bb0b311f4d9554e73419f9be81aad"></a>

bool GetInstanceCustomDataValue(const FString & Key, FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Key|
|FString &|OutValue|

#### Description

Gets an instance custom data value.


#### Parameters

Key
: The custom data being requested. 
Value
: The value of the custom data. 

#### Returns
If true, the custom data was found. 



### `GetBrowserCustomData` <a id="classURH__SessionView_1a4691063225ba4ad458aa12a14020c7d7"></a>

TMap< FString, FString > GetBrowserCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets session browser custom data.




### `GetPlatformSession` <a id="classURH__SessionView_1aa477ffc8b54fb7d355664615900a6603"></a>

bool GetPlatformSession(ERHAPI_Platform Platform, [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) & OutPlatformSession)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|Platform|
|[FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) &|OutPlatformSession|

#### Description



Get the platform session data for a specific platform id 
#### Parameters

Platform
: The platform id to get the session data for 
OutPlatformSession
: The platform session data for the specified platform id 

#### Returns
If true, the platform session data was found 



### `ImportAPISession` <a id="classURH__SessionView_1a92790b540906943bf8501049b45222b3"></a>

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



### `ImportTemplate` <a id="classURH__SessionView_1aa910b3892253ae47a3eedf5f91eae252"></a>

void ImportTemplate(const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & newTemplate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) &|newTemplate|

#### Description

Update the session template .


#### Parameters

newTemplate
: The new session template. 



### `Expire` <a id="classURH__SessionView_1a81b861028c8b998005d3627752cce51f"></a>

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



### `GetSessionOwner` <a id="classURH__SessionView_1ab4c61212a9d10507d2aab3d645b4b985"></a>

TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > GetSessionOwner()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the session owner.




### `StartPolling` <a id="classURH__SessionView_1a488f1c164e31d30c17d98f13226c6079"></a>

void StartPolling()

#### Parameters

| Type | Name |
|------|------|

#### Description

Starts the polling of session updates.




### `StopPolling` <a id="classURH__SessionView_1aa34ca34af04d8bcb3200d48395c242c2"></a>

void StopPolling()

#### Parameters

| Type | Name |
|------|------|

#### Description

Stops the polling for session updates.




### `DeferPolling` <a id="classURH__SessionView_1a09c8faf3934af2d317d955cbd5da5ed3"></a>

void DeferPolling()

#### Parameters

| Type | Name |
|------|------|

#### Description

Defers the polling for session updates (in case an out-of-band update was received)




### `GetPollTimeRemaining` <a id="classURH__SessionView_1aa57cc3f86e075380283f9a7a22d07a06"></a>

float GetPollTimeRemaining()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the current time remaining in the poll cycle in seconds. Returns -1.f if poll is inactive or is executing.




### `ForcePollForUpdate` <a id="classURH__SessionView_1a3dcdea9537922b7c533929b05dc5c885"></a>

void ForcePollForUpdate(bool bClearETag)

#### Parameters

| Type | Name |
|------|------|
|bool|bClearETag|

#### Description

Forces a polling call even if the polling is waiting till next time to pulse.


#### Parameters

bClearETag
: If true, the ETag will be cleared before the poll. 



### `AddDeferredPoll` <a id="classURH__SessionView_1a7e207452f3a5b71dcf74642d7d15aa9e"></a>

void AddDeferredPoll(const [FRH_DeferredSessionPoll](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll) & DeferredPoll)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_DeferredSessionPoll](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll) &|DeferredPoll|

#### Description

Add a deferred poll to the list of polls to run in sequence.




### `CheckDeferredPolls` <a id="classURH__SessionView_1aaf1a897f37236897e788f33d2c34304a"></a>

void CheckDeferredPolls()

#### Parameters

| Type | Name |
|------|------|

#### Description

Check and potentially kick off a deferred poll.





## Public Static Functions



### `PollSingleSession` <a id="classURH__SessionView_1a58adc0e014ed968714bd0bad3589c586"></a>

void PollSingleSession(const FString & SessionId, TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) >|SessionOwner|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Polls a specific session for an update. Can poll for sessions you are not a member of. Will properly create a relevant session object as needed via the Session Owner interface.


#### Parameters

SessionId
: Id of the session to poll. 
SessionOwner
: Owner of the session being polled. 
Delegate
: Callback delegate that the polled session has been updated. 



### `PollAllSessions` <a id="classURH__SessionView_1a349a28d11ea3b7461e3f8231a55248f9"></a>

void PollAllSessions(TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > SessionOwner, bool bPollMembership, bool bPollAllSessions, const FRH_OnPollAllSessionsDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) >|SessionOwner|
|bool|bPollMembership|
|bool|bPollAllSessions|
|const FRH_OnPollAllSessionsDelegate &|Delegate|

#### Description

Polls all sessions with an owner for an update.


#### Parameters

SessionOwner
: Owner of the session being polled. 
Delegate
: Callback delegate that the polled session has been updated. 




## Protected Functions



### `PollForUpdate` <a id="classURH__SessionView_1a4ccf0aaf6734e2e5638ab257c1451480"></a>

void PollForUpdate(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Triggers a poll for a session update, automatically called as part of the polling loop.


#### Parameters

Delegate
: Callback delegate for when the poll completes. 




