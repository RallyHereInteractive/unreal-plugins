---
title: URH_PlatformSessionSyncer Class
---Inherits from UObject

Synchronization object to sync state between a Rally Here Session and a Platform Session (such as a Steam session)

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_PlatformSessionSyncerCleanupDelegate|[OnCleanupComplete](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1acca86ac7134db510dd4dcb00658374dd)|Notification delegates for when cleanup of this object has completed.|
|FRH_PlatformSessionSyncerCleanupDynamicDelegate|[BLUEPRINT_OnCleanupComplete](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a3be5a8c4afc63c37631b32ab867af2ba)||
|FRH_PlatformSessionSyncerStateChangedDelegate|[OnStateChanged](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a1a1ded57262ed2320eeb66e852cb8e21)|Notification delegates for when cleanup of this object has completed.|
|FRH_PlatformSessionSyncerStateChangedDynamicDelegate|[BLUEPRINT_OnStateChanged](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a22f87dbe7cf96e477c6b91ff686d203a)||
|[ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642)|[CurrentSyncActionState](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a0a8fd13fe93d1aac1b94e7dc0e3715ea)|The current state of the syncer.|
|FRH_SessionOwnerPtr|[SessionOwner](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1abdc13532c721a2d0593b177ae19833e5)|Owner of the session.|
|FString|[RHSessionId](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a2782a9152c7bf68ed0bd908b95c4301f)|Rally Here session Id.|
|FName|[OSSSessionName](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ac4bc77d7e8275889c8050bf1a09f2e97)|Name of the session.|
|ERHAPI_Platform|[RHPlatform](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ae2dda53f9229c02025c41c2203792892)|Internal platoform for the session.|
|TOptional< FOnlineSessionSearchResult >|[CachedSessionInvite](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1afd327c8b4ac82aabcdd3063ca15432f2)|The cached platform session invite.|
|TWeakObjectPtr< [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) >|[CleanupRHSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a8fefa6f56080ef0462ae6b04178eb42b)|Backup pointer used during cleanup in case session has already been removed from owner when cleanup is triggered (ex: expiration has begun)|
|bool|[bDeferCleanup](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a1339e4f23791197848afeed8d7169651)|whether cleanup is deferred until the end of the current action|
|bool|[Initialize](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a672a8526678c8c22c968c2eb5d5f1334)(const FString & InSessionId, FRH_SessionOwnerPtr InOwner)|Initialize the sycnrhonization object with a RallyHere session id and a session owner - requires that the owner contain that session.|
|void|[Cleanup](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ac45a6144ac79b3024c9a5eb0c63ab981)(const FSimpleDelegate & CompletionDelegate)|Clean up the synchronization object, typically used when the RallyHere session is expired.|
|FORCEINLINE FString|[GetRHSessionId](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08)()|Get the RallyHere session id that this object is synchronizing to.|
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|[GetRHSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ad9f453ea3f81edb0b87d9f3ba6950c57)()|Helper function to get the RallyHere session objcet from the session owner (based on the result of GetRHSessionId())|
|bool|[GetPlatformSessionIdFromRHSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1aea73e377334a657438cc1fdc74839891)(FUniqueNetIdRepl & PlatformSessionId)|Helper function to get the Platform Session Id from the RallyHere session object (based on the result of GetRHSession())|
|FName|[GetPlatformSessionName](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ab8864e7affb0cb4cf22bd81869b60c72)()|Get the platform session name that this object is synchronizing to from the OnlineSubsystem (useful for OSS calls) Note that this is set before OSS session is valid. If you want to make sure the name is for a valid session, use GetPlatformSession()->SessionName instead (GetPlatformSession() may return nullptr)|
|FNamedOnlineSession *|[GetPlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ab67a1eed0ca3fe1c09672f3de8fcb44c)()|Get the platform session object that this object is synchronizing to from the OnlineSubsystem.|
|bool|[GetPlatformSessionIdFromPlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a6be06ee04e5ea7001ed014cc1fbbec65)(FUniqueNetIdRepl & PlatformSessionId)|Helper function to get the Platform Session Id from the platform session object (based on the result of GetPlatformSession())|
|TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) >|[GetSessionOwner](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a93019be39c8791d4b38444fb211bd358)()|Get the session owner interface that this object is using to look up session information.|
|bool|[IsLocalPlayerScout](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a4c35be7c6e9a7c44101d34615e34a89a)()|Get whether the local player is the "scout" - the player responsible for creation of the platform session if one does not exist.|
|[ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642)|[GetCurrentSyncActionState](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ab09f660e7e04da39fc24fb451935b677)()|Get the current sync action state of this object.|
|bool|[IsSynchronized](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a89ba08022b1c6406db0d5d763b544ac9)()|Whether this object is in the process of, or has completed, synchronization.|
|bool|[IsCleaningUp](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1aecc90ce5a81b6ff023f107fd353906d6)()|Whether this object is in the process of, or has completed, cleanup.|
|bool|[IsCleanupComplete](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1acbfb387b2d0cea91154faec908def601)()|Whether this object has completed, cleanup.|
|bool|[StartPlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a422d3660def6c54c7fa45e521149adc7)()|Marks the session as started (note - asynchronous)|
|bool|[EndPlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ac26c84cdcdfa44eac105d878a8f7fce7)()|Marks the session as ended (note - asynchronous)|
|void|[OnPlatformSessionCreated](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1adf45b673cebb3d4f667ca33a2d2a4abd)(bool bSuccess)|Notification helper to let the synchronization object know that a session has been created (from the session owner, as the synchronization object does not bind the callback directly)|
|void|[OnPlatformSessionJoined](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a6533c4f9e5b84ab7893ee0f002bee8fa)(EOnJoinSessionCompleteResult::Type Result)|Notification helper to let the synchronization object know that a session has been joined (from the session owner, as the synchronization object does not bind the callback directly)|
|void|[OnPlatformSessionStarted](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ada7c87ae46e8fe0c99a06de53284695a)(bool bSuccess)|Notification helper to let the synchronization object know that a session has been started (from the session owner, as the synchronization object does not bind the callback directly)|
|void|[OnPlatformSessionEnded](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a29afb3b5b1bda91905c85ed56004294f)(bool bSuccess)|Notification helper to let the synchronization object know that a session has been ended (from the session owner, as the synchronization object does not bind the callback directly)|
|void|[OnPlatformSessionDestroyed](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a600318f388b1d368077bd7c9090c8bc9)(bool bSuccess)|Notification helper to let the synchronization object know that a session has been destroyed (from the session owner, as the synchronization object does not bind the callback directly)|
|void|[OnRHSessionUpdated](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a6359fb4330ea231ed32cb6b66e5ff270)([URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * UpdatedSession)|Handler for whenever the associated session is updated.|
|void|[SetCachedPlatformSessionInvite](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ad88b73abe387bfd9433def9d3416f001)(const FOnlineSessionSearchResult & SessionInvite)||
|IOnlineSubsystem *|[GetOSS](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1aba1b0f5be0fbcafbc48c0ad0c7ec3baa)()|Get the online subsystem for the platform session.|
|bool|[ConvertPlatformSessionIdToJson](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a5f94e7f8b103d8597b320a225405b360)(const FUniqueNetIdRepl & PlatformId, FString & OutJson)|Static helper function to convert a platform id to a json string.|
|void|[JoinRHSessionByPlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a6168b710866e868dc3da13656639f0a5)(FRH_SessionOwnerPtr SessionOwner, const FOnlineSessionSearchResult & Session, const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & JoinDetails, const FRH_GenericSuccessWithErrorBlock & Delegate)|Static helper function to join a rally here session based off a platform session search result (received/accepted invites from the OSS typically come in the form of search results)|
|void|[JoinRHSessionByPlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1aac9e0ae5868c3ffd769ff2dba984e76a)(FRH_SessionOwnerPtr SessionOwner, const FOnlineSessionSearchResult & Session, const FRH_GenericSuccessWithErrorBlock & Delegate)||
|FORCEINLINE void|[JoinRHSessionByPlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a71e31371dd8f102244ba9492be1d64f8)(FRH_SessionOwnerPtr SessionOwner, const FOnlineSessionSearchResult & Session, FRH_GenericSuccessBlock Delegate)||
|void|[CheckState](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a83d87592ba8d798950d6f21be450ff8d)()|Check our current state against the session, and decide if we need to take any action.|
|void|[KickOffState](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a05410c9acd749de9855906064dec3f1d)([ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) NewState)|Change to a new state.|
|void|[SyncActionComplete](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1aac8fc53affd478438fc1fc8f0cc4e14e)(bool bSuccess, bool bDeferFrame)|Called when a Sync Action State is complete.|
|void|[UpdateRHSessionWithPlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a32ba9f36bebfb6f263b73da0c9520267)()|Take in information from the paired platform session into the RH Session.|
|void|[CreatePlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a4c610d83e5a229ffc45db3eed437f886)()|Create a platform session.|
|void|[JoinPlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ab9709b439531ace0d8e4b49501bd8991)()|Join the platform session.|
|void|[JoinFoundPlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1aa2d3557381e75ef893c848667ac53b09)(const FOnlineSessionSearchResult & SearchResult)|Used by Join Platform session once found to join it.|
|void|[OnScoutFailedToJoin](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a71c2f843e4f7fe8c3727240fd9051d9d)()|Handler for if scout fails to successfully join a specified session. Attempt to rectify by clearing out session (which should trigger a new session creation)|
|void|[LeavePlatformSession](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ad1a4c32ab4b51df8dd639a2c01d2d947)()|Leave the platform session.|
|void|[CleanupInternal](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a51bed2712c80a6f92f1c8c5c1e1904f1)()|Cleanup internal state of the session syncer.|
|bool|[SetSyncActionState](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1a1261e4cc0e9cf808324785ca5e7fdf9f)([ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) NewState)|Sets the new action state for the syncer.|
|FUniqueNetIdWrapper|[GetOSSUniqueId](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1aebf1a29ac22a2919aed0b76d15f4bd51)()|Get the unique net id of the session owner.|
|IOnlineSessionPtr|[GetOSSSessionInterface](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1addd7c5606ca5ca5d95d9d78cd89c7bd1)()|Get the online subsystem session interface for the platform session.|
## Public Attributes



### `OnCleanupComplete` <a id="classURH__PlatformSessionSyncer_1acca86ac7134db510dd4dcb00658374dd"></a>

`FRH_PlatformSessionSyncerCleanupDelegate URH_PlatformSessionSyncer::OnCleanupComplete`

Notification delegates for when cleanup of this object has completed.




### `BLUEPRINT_OnCleanupComplete` <a id="classURH__PlatformSessionSyncer_1a3be5a8c4afc63c37631b32ab867af2ba"></a>

`FRH_PlatformSessionSyncerCleanupDynamicDelegate URH_PlatformSessionSyncer::BLUEPRINT_OnCleanupComplete`






### `OnStateChanged` <a id="classURH__PlatformSessionSyncer_1a1a1ded57262ed2320eeb66e852cb8e21"></a>

`FRH_PlatformSessionSyncerStateChangedDelegate URH_PlatformSessionSyncer::OnStateChanged`

Notification delegates for when cleanup of this object has completed.




### `BLUEPRINT_OnStateChanged` <a id="classURH__PlatformSessionSyncer_1a22f87dbe7cf96e477c6b91ff686d203a"></a>

`FRH_PlatformSessionSyncerStateChangedDynamicDelegate URH_PlatformSessionSyncer::BLUEPRINT_OnStateChanged`







## Protected Attributes



### `CurrentSyncActionState` <a id="classURH__PlatformSessionSyncer_1a0a8fd13fe93d1aac1b94e7dc0e3715ea"></a>

`ESyncActionState URH_PlatformSessionSyncer::CurrentSyncActionState`

The current state of the syncer.




### `SessionOwner` <a id="classURH__PlatformSessionSyncer_1abdc13532c721a2d0593b177ae19833e5"></a>

`FRH_SessionOwnerPtr URH_PlatformSessionSyncer::SessionOwner`

Owner of the session.




### `RHSessionId` <a id="classURH__PlatformSessionSyncer_1a2782a9152c7bf68ed0bd908b95c4301f"></a>

`FString URH_PlatformSessionSyncer::RHSessionId`

Rally Here session Id.




### `OSSSessionName` <a id="classURH__PlatformSessionSyncer_1ac4bc77d7e8275889c8050bf1a09f2e97"></a>

`FName URH_PlatformSessionSyncer::OSSSessionName`

Name of the session.




### `RHPlatform` <a id="classURH__PlatformSessionSyncer_1ae2dda53f9229c02025c41c2203792892"></a>

`ERHAPI_Platform URH_PlatformSessionSyncer::RHPlatform`

Internal platoform for the session.




### `CachedSessionInvite` <a id="classURH__PlatformSessionSyncer_1afd327c8b4ac82aabcdd3063ca15432f2"></a>

`TOptional<FOnlineSessionSearchResult> URH_PlatformSessionSyncer::CachedSessionInvite`

The cached platform session invite.




### `CleanupRHSession` <a id="classURH__PlatformSessionSyncer_1a8fefa6f56080ef0462ae6b04178eb42b"></a>

`TWeakObjectPtr<URH_JoinedSession> URH_PlatformSessionSyncer::CleanupRHSession`

Backup pointer used during cleanup in case session has already been removed from owner when cleanup is triggered (ex: expiration has begun)




### `bDeferCleanup` <a id="classURH__PlatformSessionSyncer_1a1339e4f23791197848afeed8d7169651"></a>

`bool URH_PlatformSessionSyncer::bDeferCleanup`

whether cleanup is deferred until the end of the current action





## Public Functions



### `Initialize` <a id="classURH__PlatformSessionSyncer_1a672a8526678c8c22c968c2eb5d5f1334"></a>

bool Initialize(const FString & InSessionId, FRH_SessionOwnerPtr InOwner)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InSessionId|
|FRH_SessionOwnerPtr|InOwner|

#### Description

Initialize the sycnrhonization object with a RallyHere session id and a session owner - requires that the owner contain that session.


#### Parameters

InSessionId
: The Rally Here session id for which we are synchronizing state 
InOwner
: Session owner interface for use in looking up the session and other information 

#### Returns
Whether initialization was successful. If initialization was successful, 
[Cleanup()](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer_1ac45a6144ac79b3024c9a5eb0c63ab981)must be called to properly clean up state


### `Cleanup` <a id="classURH__PlatformSessionSyncer_1ac45a6144ac79b3024c9a5eb0c63ab981"></a>

void Cleanup(const FSimpleDelegate & CompletionDelegate)

#### Parameters

| Type | Name |
|------|------|
|const FSimpleDelegate &|CompletionDelegate|

#### Description

Clean up the synchronization object, typically used when the RallyHere session is expired.


#### Parameters

CompletionDelegate
: Delegate to call when cleanup is complete 



### `GetRHSessionId` <a id="classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08"></a>

FORCEINLINE FString GetRHSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the RallyHere session id that this object is synchronizing to.




### `GetRHSession` <a id="classURH__PlatformSessionSyncer_1ad9f453ea3f81edb0b87d9f3ba6950c57"></a>

[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * GetRHSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Helper function to get the RallyHere session objcet from the session owner (based on the result of GetRHSessionId())




### `GetPlatformSessionIdFromRHSession` <a id="classURH__PlatformSessionSyncer_1aea73e377334a657438cc1fdc74839891"></a>

bool GetPlatformSessionIdFromRHSession(FUniqueNetIdRepl & PlatformSessionId)

#### Parameters

| Type | Name |
|------|------|
|FUniqueNetIdRepl &|PlatformSessionId|

#### Description

Helper function to get the Platform Session Id from the RallyHere session object (based on the result of GetRHSession())


#### Parameters

PlatformSessionId
: The platform session id to fill in 

#### Returns
Whether the platform session id was successfully filled in 



### `GetPlatformSessionName` <a id="classURH__PlatformSessionSyncer_1ab8864e7affb0cb4cf22bd81869b60c72"></a>

FName GetPlatformSessionName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the platform session name that this object is synchronizing to from the OnlineSubsystem (useful for OSS calls) Note that this is set before OSS session is valid. If you want to make sure the name is for a valid session, use GetPlatformSession()->SessionName instead (GetPlatformSession() may return nullptr)




### `GetPlatformSession` <a id="classURH__PlatformSessionSyncer_1ab67a1eed0ca3fe1c09672f3de8fcb44c"></a>

FNamedOnlineSession * GetPlatformSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the platform session object that this object is synchronizing to from the OnlineSubsystem.




### `GetPlatformSessionIdFromPlatformSession` <a id="classURH__PlatformSessionSyncer_1a6be06ee04e5ea7001ed014cc1fbbec65"></a>

bool GetPlatformSessionIdFromPlatformSession(FUniqueNetIdRepl & PlatformSessionId)

#### Parameters

| Type | Name |
|------|------|
|FUniqueNetIdRepl &|PlatformSessionId|

#### Description

Helper function to get the Platform Session Id from the platform session object (based on the result of GetPlatformSession())


#### Parameters

PlatformSessionId
: The platform session id to fill in 

#### Returns
Whether the platform session id was successfully filled in 



### `GetSessionOwner` <a id="classURH__PlatformSessionSyncer_1a93019be39c8791d4b38444fb211bd358"></a>

TScriptInterface< [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface) > GetSessionOwner()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the session owner interface that this object is using to look up session information.




### `IsLocalPlayerScout` <a id="classURH__PlatformSessionSyncer_1a4c35be7c6e9a7c44101d34615e34a89a"></a>

bool IsLocalPlayerScout()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get whether the local player is the "scout" - the player responsible for creation of the platform session if one does not exist.




### `GetCurrentSyncActionState` <a id="classURH__PlatformSessionSyncer_1ab09f660e7e04da39fc24fb451935b677"></a>

[ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) GetCurrentSyncActionState()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the current sync action state of this object.




### `IsSynchronized` <a id="classURH__PlatformSessionSyncer_1a89ba08022b1c6406db0d5d763b544ac9"></a>

bool IsSynchronized()

#### Parameters

| Type | Name |
|------|------|

#### Description

Whether this object is in the process of, or has completed, synchronization.




### `IsCleaningUp` <a id="classURH__PlatformSessionSyncer_1aecc90ce5a81b6ff023f107fd353906d6"></a>

bool IsCleaningUp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Whether this object is in the process of, or has completed, cleanup.




### `IsCleanupComplete` <a id="classURH__PlatformSessionSyncer_1acbfb387b2d0cea91154faec908def601"></a>

bool IsCleanupComplete()

#### Parameters

| Type | Name |
|------|------|

#### Description

Whether this object has completed, cleanup.




### `StartPlatformSession` <a id="classURH__PlatformSessionSyncer_1a422d3660def6c54c7fa45e521149adc7"></a>

bool StartPlatformSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Marks the session as started (note - asynchronous)




### `EndPlatformSession` <a id="classURH__PlatformSessionSyncer_1ac26c84cdcdfa44eac105d878a8f7fce7"></a>

bool EndPlatformSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Marks the session as ended (note - asynchronous)




### `OnPlatformSessionCreated` <a id="classURH__PlatformSessionSyncer_1adf45b673cebb3d4f667ca33a2d2a4abd"></a>

void OnPlatformSessionCreated(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Notification helper to let the synchronization object know that a session has been created (from the session owner, as the synchronization object does not bind the callback directly)




### `OnPlatformSessionJoined` <a id="classURH__PlatformSessionSyncer_1a6533c4f9e5b84ab7893ee0f002bee8fa"></a>

void OnPlatformSessionJoined(EOnJoinSessionCompleteResult::Type Result)

#### Parameters

| Type | Name |
|------|------|
|EOnJoinSessionCompleteResult::Type|Result|

#### Description

Notification helper to let the synchronization object know that a session has been joined (from the session owner, as the synchronization object does not bind the callback directly)




### `OnPlatformSessionStarted` <a id="classURH__PlatformSessionSyncer_1ada7c87ae46e8fe0c99a06de53284695a"></a>

void OnPlatformSessionStarted(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Notification helper to let the synchronization object know that a session has been started (from the session owner, as the synchronization object does not bind the callback directly)




### `OnPlatformSessionEnded` <a id="classURH__PlatformSessionSyncer_1a29afb3b5b1bda91905c85ed56004294f"></a>

void OnPlatformSessionEnded(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Notification helper to let the synchronization object know that a session has been ended (from the session owner, as the synchronization object does not bind the callback directly)




### `OnPlatformSessionDestroyed` <a id="classURH__PlatformSessionSyncer_1a600318f388b1d368077bd7c9090c8bc9"></a>

void OnPlatformSessionDestroyed(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Notification helper to let the synchronization object know that a session has been destroyed (from the session owner, as the synchronization object does not bind the callback directly)




### `OnRHSessionUpdated` <a id="classURH__PlatformSessionSyncer_1a6359fb4330ea231ed32cb6b66e5ff270"></a>

void OnRHSessionUpdated([URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * UpdatedSession)

#### Parameters

| Type | Name |
|------|------|
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|UpdatedSession|

#### Description

Handler for whenever the associated session is updated.


#### Parameters

UpdatedSession
: The session that was updated. 



### `SetCachedPlatformSessionInvite` <a id="classURH__PlatformSessionSyncer_1ad88b73abe387bfd9433def9d3416f001"></a>

void SetCachedPlatformSessionInvite(const FOnlineSessionSearchResult & SessionInvite)

#### Parameters

| Type | Name |
|------|------|
|const FOnlineSessionSearchResult &|SessionInvite|

#### Description






### `GetOSS` <a id="classURH__PlatformSessionSyncer_1aba1b0f5be0fbcafbc48c0ad0c7ec3baa"></a>

IOnlineSubsystem * GetOSS()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the online subsystem for the platform session.





## Public Static Functions



### `ConvertPlatformSessionIdToJson` <a id="classURH__PlatformSessionSyncer_1a5f94e7f8b103d8597b320a225405b360"></a>

bool ConvertPlatformSessionIdToJson(const FUniqueNetIdRepl & PlatformId, FString & OutJson)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetIdRepl &|PlatformId|
|FString &|OutJson|

#### Description

Static helper function to convert a platform id to a json string.


#### Parameters

PlatformId
: The platform id to convert 
OutJson
: The json string to fill in 

#### Returns
Whether the json string was successfully filled in 



### `JoinRHSessionByPlatformSession` <a id="classURH__PlatformSessionSyncer_1a6168b710866e868dc3da13656639f0a5"></a>

void JoinRHSessionByPlatformSession(FRH_SessionOwnerPtr SessionOwner, const FOnlineSessionSearchResult & Session, const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & JoinDetails, const FRH_GenericSuccessWithErrorBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|FRH_SessionOwnerPtr|SessionOwner|
|const FOnlineSessionSearchResult &|Session|
|const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) &|JoinDetails|
|const FRH_GenericSuccessWithErrorBlock &|Delegate|

#### Description

Static helper function to join a rally here session based off a platform session search result (received/accepted invites from the OSS typically come in the form of search results)


#### Parameters

SessionOwner
: The session owner object to use when joining the session 
Session
: The Platform Session Search Result to join 
JoinDetails
: The join details to use when joining the session 
Delegate
: The delegate to fire when the join is complete 



### `JoinRHSessionByPlatformSession` <a id="classURH__PlatformSessionSyncer_1aac9e0ae5868c3ffd769ff2dba984e76a"></a>

void JoinRHSessionByPlatformSession(FRH_SessionOwnerPtr SessionOwner, const FOnlineSessionSearchResult & Session, const FRH_GenericSuccessWithErrorBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|FRH_SessionOwnerPtr|SessionOwner|
|const FOnlineSessionSearchResult &|Session|
|const FRH_GenericSuccessWithErrorBlock &|Delegate|

#### Description






### `JoinRHSessionByPlatformSession` <a id="classURH__PlatformSessionSyncer_1a71e31371dd8f102244ba9492be1d64f8"></a>

FORCEINLINE void JoinRHSessionByPlatformSession(FRH_SessionOwnerPtr SessionOwner, const FOnlineSessionSearchResult & Session, FRH_GenericSuccessBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|FRH_SessionOwnerPtr|SessionOwner|
|const FOnlineSessionSearchResult &|Session|
|FRH_GenericSuccessBlock|Delegate|

#### Description







## Protected Functions



### `CheckState` <a id="classURH__PlatformSessionSyncer_1a83d87592ba8d798950d6f21be450ff8d"></a>

void CheckState()

#### Parameters

| Type | Name |
|------|------|

#### Description

Check our current state against the session, and decide if we need to take any action.




### `KickOffState` <a id="classURH__PlatformSessionSyncer_1a05410c9acd749de9855906064dec3f1d"></a>

void KickOffState([ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) NewState)

#### Parameters

| Type | Name |
|------|------|
|[ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642)|NewState|

#### Description

Change to a new state.


#### Parameters

NewState
: Target new state. 



### `SyncActionComplete` <a id="classURH__PlatformSessionSyncer_1aac8fc53affd478438fc1fc8f0cc4e14e"></a>

void SyncActionComplete(bool bSuccess, bool bDeferFrame)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|
|bool|bDeferFrame|

#### Description

Called when a Sync Action State is complete.


#### Parameters

bSuccess
: Whether the action was successful. 
bDeferFrame
: Whether to defer the frame before checking the state again. 



### `UpdateRHSessionWithPlatformSession` <a id="classURH__PlatformSessionSyncer_1a32ba9f36bebfb6f263b73da0c9520267"></a>

void UpdateRHSessionWithPlatformSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Take in information from the paired platform session into the RH Session.




### `CreatePlatformSession` <a id="classURH__PlatformSessionSyncer_1a4c610d83e5a229ffc45db3eed437f886"></a>

void CreatePlatformSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Create a platform session.




### `JoinPlatformSession` <a id="classURH__PlatformSessionSyncer_1ab9709b439531ace0d8e4b49501bd8991"></a>

void JoinPlatformSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Join the platform session.




### `JoinFoundPlatformSession` <a id="classURH__PlatformSessionSyncer_1aa2d3557381e75ef893c848667ac53b09"></a>

void JoinFoundPlatformSession(const FOnlineSessionSearchResult & SearchResult)

#### Parameters

| Type | Name |
|------|------|
|const FOnlineSessionSearchResult &|SearchResult|

#### Description

Used by Join Platform session once found to join it.


#### Parameters

SearchResult
: The search result to join. 



### `OnScoutFailedToJoin` <a id="classURH__PlatformSessionSyncer_1a71c2f843e4f7fe8c3727240fd9051d9d"></a>

void OnScoutFailedToJoin()

#### Parameters

| Type | Name |
|------|------|

#### Description

Handler for if scout fails to successfully join a specified session. Attempt to rectify by clearing out session (which should trigger a new session creation)




### `LeavePlatformSession` <a id="classURH__PlatformSessionSyncer_1ad1a4c32ab4b51df8dd639a2c01d2d947"></a>

void LeavePlatformSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Leave the platform session.




### `CleanupInternal` <a id="classURH__PlatformSessionSyncer_1a51bed2712c80a6f92f1c8c5c1e1904f1"></a>

void CleanupInternal()

#### Parameters

| Type | Name |
|------|------|

#### Description

Cleanup internal state of the session syncer.




### `SetSyncActionState` <a id="classURH__PlatformSessionSyncer_1a1261e4cc0e9cf808324785ca5e7fdf9f"></a>

bool SetSyncActionState([ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642) NewState)

#### Parameters

| Type | Name |
|------|------|
|[ESyncActionState](/unreal-plugins/all/rh__platformsessionsyncer_8h/#group__Session_1gaa60e236caf03784c17c443c4a520d642)|NewState|

#### Description

Sets the new action state for the syncer.


#### Parameters

NewState
: New State to be in. 



### `GetOSSUniqueId` <a id="classURH__PlatformSessionSyncer_1aebf1a29ac22a2919aed0b76d15f4bd51"></a>

FUniqueNetIdWrapper GetOSSUniqueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the unique net id of the session owner.




### `GetOSSSessionInterface` <a id="classURH__PlatformSessionSyncer_1addd7c5606ca5ca5d95d9d78cd89c7bd1"></a>

IOnlineSessionPtr GetOSSSessionInterface()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the online subsystem session interface for the platform session.





