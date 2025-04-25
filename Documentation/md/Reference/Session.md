---
title: Session
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_PlatformSessionSyncer`](#classURH__PlatformSessionSyncer) | Synchronization object to sync state between a Rally Here Session and a Platform Session (such as a Steam session)
`class `[`URH_SessionBrowserCache`](#classURH__SessionBrowserCache) | Simple container class to hold session view data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players.
`class `[`URH_SessionView`](#classURH__SessionView) | Base class providing functionality for viewing session data and interacting with it from blueprint. Specifically does not have an "owner" meaning it cannot do "work" - it is read only. The subclasses have owners.
`class `[`URH_InvitedSession`](#classURH__InvitedSession) | Invited Sessions are sessions that the player has been invited to.
`class `[`URH_OfflineSession`](#classURH__OfflineSession) | Offline Sessions are sessions the session owner is actively a member of that are unsynchronized with the API. This is primarily intended as a utility class to allow for the session flow to be used globally, even when not running API based sessions (ex: tutorial / practice area before login).
`class `[`URH_OnlineSession`](#classURH__OnlineSession) | Online Sessions are sessions that are synchronized from the API (and since it is a joined session, the Session Owner is a member)
`class `[`URH_SessionOwnerInterface`](#classURH__SessionOwnerInterface) | Session Owner Interface class.
`class `[`IRH_SessionOwnerInterface`](#classIRH__SessionOwnerInterface) | Session Owner Interface.
`struct `[`FRH_SessionBrowserSearchParams`](#structFRH__SessionBrowserSearchParams) | Struct containing the search paramaters for Session Browsers.
`struct `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState) | Utility struct to wrapper a player state for a player state update change.
`struct `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper) | Utility struct to wrapper the tuple of a data typeand etag.
`struct `[`FRH_DeferredSessionPoll`](#structFRH__DeferredSessionPoll) | Poll for deferred sessions.

## class `URH_PlatformSessionSyncer` <a id="classURH__PlatformSessionSyncer"></a>

```
class URH_PlatformSessionSyncer
  : public UObject
```

Synchronization object to sync state between a Rally Here Session and a Platform Session (such as a Steam session)

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_PlatformSessionSyncerCleanupDelegate `[`OnCleanupComplete`](#classURH__PlatformSessionSyncer_1acca86ac7134db510dd4dcb00658374dd) | Notification delegates for when cleanup of this object has completed.
`public FRH_PlatformSessionSyncerStateChangedDelegate `[`OnStateChanged`](#classURH__PlatformSessionSyncer_1a1a1ded57262ed2320eeb66e852cb8e21) | Notification delegates for when cleanup of this object has completed.
`public bool `[`Initialize`](#classURH__PlatformSessionSyncer_1a672a8526678c8c22c968c2eb5d5f1334)`(const FString & InSessionId,FRH_SessionOwnerPtr InOwner)` | Initialize the sycnrhonization object with a RallyHere session id and a session owner - requires that the owner contain that session.
`public void `[`Cleanup`](#classURH__PlatformSessionSyncer_1ac45a6144ac79b3024c9a5eb0c63ab981)`(const FSimpleDelegate & CompletionDelegate)` | Clean up the synchronization object, typically used when the RallyHere session is expired.
`public inline FORCEINLINE FString `[`GetRHSessionId`](#classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08)`() const` | Get the RallyHere session id that this object is synchronizing to.
`public virtual `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetRHSession`](#classURH__PlatformSessionSyncer_1a94b0f0dd0b818a207d900af37a28ef2c)`() const` | Helper function to get the RallyHere session objcet from the session owner (based on the result of [GetRHSessionId()](Session.md#classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08))
`public virtual bool `[`GetPlatformSessionIdFromRHSession`](#classURH__PlatformSessionSyncer_1aea73e377334a657438cc1fdc74839891)`(FUniqueNetIdRepl & PlatformSessionId) const` | Helper function to get the Platform Session Id from the RallyHere session object (based on the result of [GetRHSession()](Session.md#classURH__PlatformSessionSyncer_1a94b0f0dd0b818a207d900af37a28ef2c))
`public inline FName `[`GetPlatformSessionName`](#classURH__PlatformSessionSyncer_1ab8864e7affb0cb4cf22bd81869b60c72)`() const` | Get the platform session name that this object is synchronizing to from the OnlineSubsystem (useful for OSS calls) Note that this is set before OSS session is valid. If you want to make sure the name is for a valid session, use [GetPlatformSession()](Session.md#classURH__PlatformSessionSyncer_1a54d4a19ab3e523c87dde1fae978dba70)->SessionName instead ([GetPlatformSession()](Session.md#classURH__PlatformSessionSyncer_1a54d4a19ab3e523c87dde1fae978dba70) may return nullptr)
`public FNamedOnlineSession * `[`GetPlatformSession`](#classURH__PlatformSessionSyncer_1a54d4a19ab3e523c87dde1fae978dba70)`() const` | Get the platform session object that this object is synchronizing to from the OnlineSubsystem.
`public bool `[`GetPlatformSessionIdFromPlatformSession`](#classURH__PlatformSessionSyncer_1a6be06ee04e5ea7001ed014cc1fbbec65)`(FUniqueNetIdRepl & PlatformSessionId) const` | Helper function to get the Platform Session Id from the platform session object (based on the result of [GetPlatformSession()](Session.md#classURH__PlatformSessionSyncer_1a54d4a19ab3e523c87dde1fae978dba70))
`public inline TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`GetSessionOwner`](#classURH__PlatformSessionSyncer_1a6a86e9f5d7b3ac23e360fa5c05c7f792)`() const` | Get the session owner interface that this object is using to look up session information.
`public virtual bool `[`IsLocalPlayerScout`](#classURH__PlatformSessionSyncer_1a4c35be7c6e9a7c44101d34615e34a89a)`() const` | Get whether the local player is the "scout" - the player responsible for creation of the platform session if one does not exist.
`public inline virtual `[`ESyncActionState`](undefined.md#group__Session_1gaa60e236caf03784c17c443c4a520d642)` `[`GetCurrentSyncActionState`](#classURH__PlatformSessionSyncer_1ab09f660e7e04da39fc24fb451935b677)`() const` | Get the current sync action state of this object.
`public inline virtual bool `[`IsSynchronized`](#classURH__PlatformSessionSyncer_1a89ba08022b1c6406db0d5d763b544ac9)`() const` | Whether this object is in the process of, or has completed, synchronization.
`public inline virtual bool `[`IsCleaningUp`](#classURH__PlatformSessionSyncer_1aecc90ce5a81b6ff023f107fd353906d6)`() const` | Whether this object is in the process of, or has completed, cleanup.
`public inline virtual bool `[`IsCleanupComplete`](#classURH__PlatformSessionSyncer_1acbfb387b2d0cea91154faec908def601)`() const` | Whether this object has completed, cleanup.
`public virtual bool `[`StartPlatformSession`](#classURH__PlatformSessionSyncer_1a422d3660def6c54c7fa45e521149adc7)`()` | Marks the session as started (note - asynchronous)
`public virtual bool `[`EndPlatformSession`](#classURH__PlatformSessionSyncer_1ac26c84cdcdfa44eac105d878a8f7fce7)`()` | Marks the session as ended (note - asynchronous)
`public virtual void `[`OnPlatformSessionCreated`](#classURH__PlatformSessionSyncer_1adf45b673cebb3d4f667ca33a2d2a4abd)`(bool bSuccess)` | Notification helper to let the synchronization object know that a session has been created (from the session owner, as the synchronization object does not bind the callback directly)
`public virtual void `[`OnPlatformSessionJoined`](#classURH__PlatformSessionSyncer_1a6533c4f9e5b84ab7893ee0f002bee8fa)`(EOnJoinSessionCompleteResult::Type Result)` | Notification helper to let the synchronization object know that a session has been joined (from the session owner, as the synchronization object does not bind the callback directly)
`public virtual void `[`OnPlatformSessionStarted`](#classURH__PlatformSessionSyncer_1ada7c87ae46e8fe0c99a06de53284695a)`(bool bSuccess)` | Notification helper to let the synchronization object know that a session has been started (from the session owner, as the synchronization object does not bind the callback directly)
`public virtual void `[`OnPlatformSessionEnded`](#classURH__PlatformSessionSyncer_1a29afb3b5b1bda91905c85ed56004294f)`(bool bSuccess)` | Notification helper to let the synchronization object know that a session has been ended (from the session owner, as the synchronization object does not bind the callback directly)
`public virtual void `[`OnPlatformSessionDestroyed`](#classURH__PlatformSessionSyncer_1a600318f388b1d368077bd7c9090c8bc9)`(bool bSuccess)` | Notification helper to let the synchronization object know that a session has been destroyed (from the session owner, as the synchronization object does not bind the callback directly)
`public void `[`OnRHSessionUpdated`](#classURH__PlatformSessionSyncer_1a6359fb4330ea231ed32cb6b66e5ff270)`(`[`URH_SessionView`](Session.md#classURH__SessionView)` * UpdatedSession)` | Handler for whenever the associated session is updated.
`public void `[`SetCachedPlatformSessionInvite`](#classURH__PlatformSessionSyncer_1ad88b73abe387bfd9433def9d3416f001)`(const FOnlineSessionSearchResult & SessionInvite)` | 
`public virtual IOnlineSubsystem * `[`GetOSS`](#classURH__PlatformSessionSyncer_1aace6fbedb9937e2ab8f2326b35b7398a)`() const` | Get the online subsystem for the platform session.
`protected `[`ESyncActionState`](undefined.md#group__Session_1gaa60e236caf03784c17c443c4a520d642)` `[`CurrentSyncActionState`](#classURH__PlatformSessionSyncer_1a0a8fd13fe93d1aac1b94e7dc0e3715ea) | The current state of the syncer.
`protected FRH_SessionOwnerPtr `[`SessionOwner`](#classURH__PlatformSessionSyncer_1abdc13532c721a2d0593b177ae19833e5) | Owner of the session.
`protected FString `[`RHSessionId`](#classURH__PlatformSessionSyncer_1a2782a9152c7bf68ed0bd908b95c4301f) | Rally Here session Id.
`protected FName `[`OSSSessionName`](#classURH__PlatformSessionSyncer_1ac4bc77d7e8275889c8050bf1a09f2e97) | Name of the session.
`protected ERHAPI_Platform `[`RHPlatform`](#classURH__PlatformSessionSyncer_1ae2dda53f9229c02025c41c2203792892) | Internal platoform for the session.
`protected TOptional< FOnlineSessionSearchResult > `[`CachedSessionInvite`](#classURH__PlatformSessionSyncer_1afd327c8b4ac82aabcdd3063ca15432f2) | The cached platform session invite.
`protected TWeakObjectPtr< `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` > `[`CleanupRHSession`](#classURH__PlatformSessionSyncer_1a8fefa6f56080ef0462ae6b04178eb42b) | Backup pointer used during cleanup in case session has already been removed from owner when cleanup is triggered (ex: expiration has begun)
`protected bool `[`bDeferCleanup`](#classURH__PlatformSessionSyncer_1a1339e4f23791197848afeed8d7169651) | whether cleanup is deferred until the end of the current action
`protected virtual void `[`CheckState`](#classURH__PlatformSessionSyncer_1a83d87592ba8d798950d6f21be450ff8d)`()` | Check our current state against the session, and decide if we need to take any action.
`protected virtual void `[`KickOffState`](#classURH__PlatformSessionSyncer_1a05410c9acd749de9855906064dec3f1d)`(`[`ESyncActionState`](undefined.md#group__Session_1gaa60e236caf03784c17c443c4a520d642)` NewState)` | Change to a new state.
`protected virtual void `[`SyncActionComplete`](#classURH__PlatformSessionSyncer_1aac8fc53affd478438fc1fc8f0cc4e14e)`(bool bSuccess,bool bDeferFrame)` | Called when a Sync Action State is complete.
`protected virtual void `[`UpdateRHSessionWithPlatformSession`](#classURH__PlatformSessionSyncer_1a32ba9f36bebfb6f263b73da0c9520267)`()` | Take in information from the paired platform session into the RH Session.
`protected virtual void `[`CreatePlatformSession`](#classURH__PlatformSessionSyncer_1a4c610d83e5a229ffc45db3eed437f886)`()` | Create a platform session.
`protected virtual void `[`JoinPlatformSession`](#classURH__PlatformSessionSyncer_1ab9709b439531ace0d8e4b49501bd8991)`()` | Join the platform session.
`protected virtual void `[`JoinFoundPlatformSession`](#classURH__PlatformSessionSyncer_1aa2d3557381e75ef893c848667ac53b09)`(const FOnlineSessionSearchResult & SearchResult)` | Used by Join Platform session once found to join it.
`protected virtual void `[`OnScoutFailedToJoin`](#classURH__PlatformSessionSyncer_1a71c2f843e4f7fe8c3727240fd9051d9d)`()` | Handler for if scout fails to successfully join a specified session. Attempt to rectify by clearing out session (which should trigger a new session creation)
`protected virtual void `[`LeavePlatformSession`](#classURH__PlatformSessionSyncer_1ad1a4c32ab4b51df8dd639a2c01d2d947)`()` | Leave the platform session.
`protected virtual void `[`CleanupInternal`](#classURH__PlatformSessionSyncer_1a51bed2712c80a6f92f1c8c5c1e1904f1)`()` | Cleanup internal state of the session syncer.
`protected virtual bool `[`SetSyncActionState`](#classURH__PlatformSessionSyncer_1a1261e4cc0e9cf808324785ca5e7fdf9f)`(`[`ESyncActionState`](undefined.md#group__Session_1gaa60e236caf03784c17c443c4a520d642)` NewState)` | Sets the new action state for the syncer.
`protected virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__PlatformSessionSyncer_1aebf1a29ac22a2919aed0b76d15f4bd51)`() const` | Get the unique net id of the session owner.
`protected virtual IOnlineSessionPtr `[`GetOSSSessionInterface`](#classURH__PlatformSessionSyncer_1addd7c5606ca5ca5d95d9d78cd89c7bd1)`() const` | Get the online subsystem session interface for the platform session.

### Members

#### `public FRH_PlatformSessionSyncerCleanupDelegate `[`OnCleanupComplete`](#classURH__PlatformSessionSyncer_1acca86ac7134db510dd4dcb00658374dd) <a id="classURH__PlatformSessionSyncer_1acca86ac7134db510dd4dcb00658374dd"></a>

Notification delegates for when cleanup of this object has completed.

#### `public FRH_PlatformSessionSyncerStateChangedDelegate `[`OnStateChanged`](#classURH__PlatformSessionSyncer_1a1a1ded57262ed2320eeb66e852cb8e21) <a id="classURH__PlatformSessionSyncer_1a1a1ded57262ed2320eeb66e852cb8e21"></a>

Notification delegates for when cleanup of this object has completed.

#### `public bool `[`Initialize`](#classURH__PlatformSessionSyncer_1a672a8526678c8c22c968c2eb5d5f1334)`(const FString & InSessionId,FRH_SessionOwnerPtr InOwner)` <a id="classURH__PlatformSessionSyncer_1a672a8526678c8c22c968c2eb5d5f1334"></a>

Initialize the sycnrhonization object with a RallyHere session id and a session owner - requires that the owner contain that session.

#### Parameters
* `InSessionId` The Rally Here session id for which we are synchronizing state 

* `InOwner` Session owner interface for use in looking up the session and other information 

#### Returns
Whether initialization was successful. If initialization was successful, Cleanup() must be called to properly clean up state

#### `public void `[`Cleanup`](#classURH__PlatformSessionSyncer_1ac45a6144ac79b3024c9a5eb0c63ab981)`(const FSimpleDelegate & CompletionDelegate)` <a id="classURH__PlatformSessionSyncer_1ac45a6144ac79b3024c9a5eb0c63ab981"></a>

Clean up the synchronization object, typically used when the RallyHere session is expired.

#### Parameters
* `CompletionDelegate` Delegate to call when cleanup is complete

#### `public inline FORCEINLINE FString `[`GetRHSessionId`](#classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08)`() const` <a id="classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08"></a>

Get the RallyHere session id that this object is synchronizing to.

#### `public virtual `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetRHSession`](#classURH__PlatformSessionSyncer_1a94b0f0dd0b818a207d900af37a28ef2c)`() const` <a id="classURH__PlatformSessionSyncer_1a94b0f0dd0b818a207d900af37a28ef2c"></a>

Helper function to get the RallyHere session objcet from the session owner (based on the result of [GetRHSessionId()](Session.md#classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08))

#### `public virtual bool `[`GetPlatformSessionIdFromRHSession`](#classURH__PlatformSessionSyncer_1aea73e377334a657438cc1fdc74839891)`(FUniqueNetIdRepl & PlatformSessionId) const` <a id="classURH__PlatformSessionSyncer_1aea73e377334a657438cc1fdc74839891"></a>

Helper function to get the Platform Session Id from the RallyHere session object (based on the result of [GetRHSession()](Session.md#classURH__PlatformSessionSyncer_1a94b0f0dd0b818a207d900af37a28ef2c))

#### Parameters
* `PlatformSessionId` The platform session id to fill in 

#### Returns
Whether the platform session id was successfully filled in

#### `public inline FName `[`GetPlatformSessionName`](#classURH__PlatformSessionSyncer_1ab8864e7affb0cb4cf22bd81869b60c72)`() const` <a id="classURH__PlatformSessionSyncer_1ab8864e7affb0cb4cf22bd81869b60c72"></a>

Get the platform session name that this object is synchronizing to from the OnlineSubsystem (useful for OSS calls) Note that this is set before OSS session is valid. If you want to make sure the name is for a valid session, use [GetPlatformSession()](Session.md#classURH__PlatformSessionSyncer_1a54d4a19ab3e523c87dde1fae978dba70)->SessionName instead ([GetPlatformSession()](Session.md#classURH__PlatformSessionSyncer_1a54d4a19ab3e523c87dde1fae978dba70) may return nullptr)

#### `public FNamedOnlineSession * `[`GetPlatformSession`](#classURH__PlatformSessionSyncer_1a54d4a19ab3e523c87dde1fae978dba70)`() const` <a id="classURH__PlatformSessionSyncer_1a54d4a19ab3e523c87dde1fae978dba70"></a>

Get the platform session object that this object is synchronizing to from the OnlineSubsystem.

#### `public bool `[`GetPlatformSessionIdFromPlatformSession`](#classURH__PlatformSessionSyncer_1a6be06ee04e5ea7001ed014cc1fbbec65)`(FUniqueNetIdRepl & PlatformSessionId) const` <a id="classURH__PlatformSessionSyncer_1a6be06ee04e5ea7001ed014cc1fbbec65"></a>

Helper function to get the Platform Session Id from the platform session object (based on the result of [GetPlatformSession()](Session.md#classURH__PlatformSessionSyncer_1a54d4a19ab3e523c87dde1fae978dba70))

#### Parameters
* `PlatformSessionId` The platform session id to fill in 

#### Returns
Whether the platform session id was successfully filled in

#### `public inline TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`GetSessionOwner`](#classURH__PlatformSessionSyncer_1a6a86e9f5d7b3ac23e360fa5c05c7f792)`() const` <a id="classURH__PlatformSessionSyncer_1a6a86e9f5d7b3ac23e360fa5c05c7f792"></a>

Get the session owner interface that this object is using to look up session information.

#### `public virtual bool `[`IsLocalPlayerScout`](#classURH__PlatformSessionSyncer_1a4c35be7c6e9a7c44101d34615e34a89a)`() const` <a id="classURH__PlatformSessionSyncer_1a4c35be7c6e9a7c44101d34615e34a89a"></a>

Get whether the local player is the "scout" - the player responsible for creation of the platform session if one does not exist.

#### `public inline virtual `[`ESyncActionState`](undefined.md#group__Session_1gaa60e236caf03784c17c443c4a520d642)` `[`GetCurrentSyncActionState`](#classURH__PlatformSessionSyncer_1ab09f660e7e04da39fc24fb451935b677)`() const` <a id="classURH__PlatformSessionSyncer_1ab09f660e7e04da39fc24fb451935b677"></a>

Get the current sync action state of this object.

#### `public inline virtual bool `[`IsSynchronized`](#classURH__PlatformSessionSyncer_1a89ba08022b1c6406db0d5d763b544ac9)`() const` <a id="classURH__PlatformSessionSyncer_1a89ba08022b1c6406db0d5d763b544ac9"></a>

Whether this object is in the process of, or has completed, synchronization.

#### `public inline virtual bool `[`IsCleaningUp`](#classURH__PlatformSessionSyncer_1aecc90ce5a81b6ff023f107fd353906d6)`() const` <a id="classURH__PlatformSessionSyncer_1aecc90ce5a81b6ff023f107fd353906d6"></a>

Whether this object is in the process of, or has completed, cleanup.

#### `public inline virtual bool `[`IsCleanupComplete`](#classURH__PlatformSessionSyncer_1acbfb387b2d0cea91154faec908def601)`() const` <a id="classURH__PlatformSessionSyncer_1acbfb387b2d0cea91154faec908def601"></a>

Whether this object has completed, cleanup.

#### `public virtual bool `[`StartPlatformSession`](#classURH__PlatformSessionSyncer_1a422d3660def6c54c7fa45e521149adc7)`()` <a id="classURH__PlatformSessionSyncer_1a422d3660def6c54c7fa45e521149adc7"></a>

Marks the session as started (note - asynchronous)

#### `public virtual bool `[`EndPlatformSession`](#classURH__PlatformSessionSyncer_1ac26c84cdcdfa44eac105d878a8f7fce7)`()` <a id="classURH__PlatformSessionSyncer_1ac26c84cdcdfa44eac105d878a8f7fce7"></a>

Marks the session as ended (note - asynchronous)

#### `public virtual void `[`OnPlatformSessionCreated`](#classURH__PlatformSessionSyncer_1adf45b673cebb3d4f667ca33a2d2a4abd)`(bool bSuccess)` <a id="classURH__PlatformSessionSyncer_1adf45b673cebb3d4f667ca33a2d2a4abd"></a>

Notification helper to let the synchronization object know that a session has been created (from the session owner, as the synchronization object does not bind the callback directly)

#### `public virtual void `[`OnPlatformSessionJoined`](#classURH__PlatformSessionSyncer_1a6533c4f9e5b84ab7893ee0f002bee8fa)`(EOnJoinSessionCompleteResult::Type Result)` <a id="classURH__PlatformSessionSyncer_1a6533c4f9e5b84ab7893ee0f002bee8fa"></a>

Notification helper to let the synchronization object know that a session has been joined (from the session owner, as the synchronization object does not bind the callback directly)

#### `public virtual void `[`OnPlatformSessionStarted`](#classURH__PlatformSessionSyncer_1ada7c87ae46e8fe0c99a06de53284695a)`(bool bSuccess)` <a id="classURH__PlatformSessionSyncer_1ada7c87ae46e8fe0c99a06de53284695a"></a>

Notification helper to let the synchronization object know that a session has been started (from the session owner, as the synchronization object does not bind the callback directly)

#### `public virtual void `[`OnPlatformSessionEnded`](#classURH__PlatformSessionSyncer_1a29afb3b5b1bda91905c85ed56004294f)`(bool bSuccess)` <a id="classURH__PlatformSessionSyncer_1a29afb3b5b1bda91905c85ed56004294f"></a>

Notification helper to let the synchronization object know that a session has been ended (from the session owner, as the synchronization object does not bind the callback directly)

#### `public virtual void `[`OnPlatformSessionDestroyed`](#classURH__PlatformSessionSyncer_1a600318f388b1d368077bd7c9090c8bc9)`(bool bSuccess)` <a id="classURH__PlatformSessionSyncer_1a600318f388b1d368077bd7c9090c8bc9"></a>

Notification helper to let the synchronization object know that a session has been destroyed (from the session owner, as the synchronization object does not bind the callback directly)

#### `public void `[`OnRHSessionUpdated`](#classURH__PlatformSessionSyncer_1a6359fb4330ea231ed32cb6b66e5ff270)`(`[`URH_SessionView`](Session.md#classURH__SessionView)` * UpdatedSession)` <a id="classURH__PlatformSessionSyncer_1a6359fb4330ea231ed32cb6b66e5ff270"></a>

Handler for whenever the associated session is updated.

#### Parameters
* `UpdatedSession` The session that was updated.

#### `public void `[`SetCachedPlatformSessionInvite`](#classURH__PlatformSessionSyncer_1ad88b73abe387bfd9433def9d3416f001)`(const FOnlineSessionSearchResult & SessionInvite)` <a id="classURH__PlatformSessionSyncer_1ad88b73abe387bfd9433def9d3416f001"></a>

#### `public virtual IOnlineSubsystem * `[`GetOSS`](#classURH__PlatformSessionSyncer_1aace6fbedb9937e2ab8f2326b35b7398a)`() const` <a id="classURH__PlatformSessionSyncer_1aace6fbedb9937e2ab8f2326b35b7398a"></a>

Get the online subsystem for the platform session.

#### `protected `[`ESyncActionState`](undefined.md#group__Session_1gaa60e236caf03784c17c443c4a520d642)` `[`CurrentSyncActionState`](#classURH__PlatformSessionSyncer_1a0a8fd13fe93d1aac1b94e7dc0e3715ea) <a id="classURH__PlatformSessionSyncer_1a0a8fd13fe93d1aac1b94e7dc0e3715ea"></a>

The current state of the syncer.

#### `protected FRH_SessionOwnerPtr `[`SessionOwner`](#classURH__PlatformSessionSyncer_1abdc13532c721a2d0593b177ae19833e5) <a id="classURH__PlatformSessionSyncer_1abdc13532c721a2d0593b177ae19833e5"></a>

Owner of the session.

#### `protected FString `[`RHSessionId`](#classURH__PlatformSessionSyncer_1a2782a9152c7bf68ed0bd908b95c4301f) <a id="classURH__PlatformSessionSyncer_1a2782a9152c7bf68ed0bd908b95c4301f"></a>

Rally Here session Id.

#### `protected FName `[`OSSSessionName`](#classURH__PlatformSessionSyncer_1ac4bc77d7e8275889c8050bf1a09f2e97) <a id="classURH__PlatformSessionSyncer_1ac4bc77d7e8275889c8050bf1a09f2e97"></a>

Name of the session.

#### `protected ERHAPI_Platform `[`RHPlatform`](#classURH__PlatformSessionSyncer_1ae2dda53f9229c02025c41c2203792892) <a id="classURH__PlatformSessionSyncer_1ae2dda53f9229c02025c41c2203792892"></a>

Internal platoform for the session.

#### `protected TOptional< FOnlineSessionSearchResult > `[`CachedSessionInvite`](#classURH__PlatformSessionSyncer_1afd327c8b4ac82aabcdd3063ca15432f2) <a id="classURH__PlatformSessionSyncer_1afd327c8b4ac82aabcdd3063ca15432f2"></a>

The cached platform session invite.

#### `protected TWeakObjectPtr< `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` > `[`CleanupRHSession`](#classURH__PlatformSessionSyncer_1a8fefa6f56080ef0462ae6b04178eb42b) <a id="classURH__PlatformSessionSyncer_1a8fefa6f56080ef0462ae6b04178eb42b"></a>

Backup pointer used during cleanup in case session has already been removed from owner when cleanup is triggered (ex: expiration has begun)

#### `protected bool `[`bDeferCleanup`](#classURH__PlatformSessionSyncer_1a1339e4f23791197848afeed8d7169651) <a id="classURH__PlatformSessionSyncer_1a1339e4f23791197848afeed8d7169651"></a>

whether cleanup is deferred until the end of the current action

#### `protected virtual void `[`CheckState`](#classURH__PlatformSessionSyncer_1a83d87592ba8d798950d6f21be450ff8d)`()` <a id="classURH__PlatformSessionSyncer_1a83d87592ba8d798950d6f21be450ff8d"></a>

Check our current state against the session, and decide if we need to take any action.

#### `protected virtual void `[`KickOffState`](#classURH__PlatformSessionSyncer_1a05410c9acd749de9855906064dec3f1d)`(`[`ESyncActionState`](undefined.md#group__Session_1gaa60e236caf03784c17c443c4a520d642)` NewState)` <a id="classURH__PlatformSessionSyncer_1a05410c9acd749de9855906064dec3f1d"></a>

Change to a new state.

#### Parameters
* `NewState` Target new state.

#### `protected virtual void `[`SyncActionComplete`](#classURH__PlatformSessionSyncer_1aac8fc53affd478438fc1fc8f0cc4e14e)`(bool bSuccess,bool bDeferFrame)` <a id="classURH__PlatformSessionSyncer_1aac8fc53affd478438fc1fc8f0cc4e14e"></a>

Called when a Sync Action State is complete.

#### Parameters
* `bSuccess` Whether the action was successful. 

* `bDeferFrame` Whether to defer the frame before checking the state again.

#### `protected virtual void `[`UpdateRHSessionWithPlatformSession`](#classURH__PlatformSessionSyncer_1a32ba9f36bebfb6f263b73da0c9520267)`()` <a id="classURH__PlatformSessionSyncer_1a32ba9f36bebfb6f263b73da0c9520267"></a>

Take in information from the paired platform session into the RH Session.

#### `protected virtual void `[`CreatePlatformSession`](#classURH__PlatformSessionSyncer_1a4c610d83e5a229ffc45db3eed437f886)`()` <a id="classURH__PlatformSessionSyncer_1a4c610d83e5a229ffc45db3eed437f886"></a>

Create a platform session.

#### `protected virtual void `[`JoinPlatformSession`](#classURH__PlatformSessionSyncer_1ab9709b439531ace0d8e4b49501bd8991)`()` <a id="classURH__PlatformSessionSyncer_1ab9709b439531ace0d8e4b49501bd8991"></a>

Join the platform session.

#### `protected virtual void `[`JoinFoundPlatformSession`](#classURH__PlatformSessionSyncer_1aa2d3557381e75ef893c848667ac53b09)`(const FOnlineSessionSearchResult & SearchResult)` <a id="classURH__PlatformSessionSyncer_1aa2d3557381e75ef893c848667ac53b09"></a>

Used by Join Platform session once found to join it.

#### Parameters
* `SearchResult` The search result to join.

#### `protected virtual void `[`OnScoutFailedToJoin`](#classURH__PlatformSessionSyncer_1a71c2f843e4f7fe8c3727240fd9051d9d)`()` <a id="classURH__PlatformSessionSyncer_1a71c2f843e4f7fe8c3727240fd9051d9d"></a>

Handler for if scout fails to successfully join a specified session. Attempt to rectify by clearing out session (which should trigger a new session creation)

#### `protected virtual void `[`LeavePlatformSession`](#classURH__PlatformSessionSyncer_1ad1a4c32ab4b51df8dd639a2c01d2d947)`()` <a id="classURH__PlatformSessionSyncer_1ad1a4c32ab4b51df8dd639a2c01d2d947"></a>

Leave the platform session.

#### `protected virtual void `[`CleanupInternal`](#classURH__PlatformSessionSyncer_1a51bed2712c80a6f92f1c8c5c1e1904f1)`()` <a id="classURH__PlatformSessionSyncer_1a51bed2712c80a6f92f1c8c5c1e1904f1"></a>

Cleanup internal state of the session syncer.

#### `protected virtual bool `[`SetSyncActionState`](#classURH__PlatformSessionSyncer_1a1261e4cc0e9cf808324785ca5e7fdf9f)`(`[`ESyncActionState`](undefined.md#group__Session_1gaa60e236caf03784c17c443c4a520d642)` NewState)` <a id="classURH__PlatformSessionSyncer_1a1261e4cc0e9cf808324785ca5e7fdf9f"></a>

Sets the new action state for the syncer.

#### Parameters
* `NewState` New State to be in.

#### `protected virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__PlatformSessionSyncer_1aebf1a29ac22a2919aed0b76d15f4bd51)`() const` <a id="classURH__PlatformSessionSyncer_1aebf1a29ac22a2919aed0b76d15f4bd51"></a>

Get the unique net id of the session owner.

#### `protected virtual IOnlineSessionPtr `[`GetOSSSessionInterface`](#classURH__PlatformSessionSyncer_1addd7c5606ca5ca5d95d9d78cd89c7bd1)`() const` <a id="classURH__PlatformSessionSyncer_1addd7c5606ca5ca5d95d9d78cd89c7bd1"></a>

Get the online subsystem session interface for the platform session.

## class `URH_SessionBrowserCache` <a id="classURH__SessionBrowserCache"></a>

```
class URH_SessionBrowserCache
  : public URH_SandboxedSubsystemPlugin
  : public IRH_SessionOwnerInterface
```

Simple container class to hold session view data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`URH_SessionBrowserCache`](#classURH__SessionBrowserCache_1a62c14a0d2d7a4319ffdb92ad829e6ba0)`()` | Default constructor.
`public void `[`Search`](#classURH__SessionBrowserCache_1a7c3c586c5d3de3fb1511be825c8840c9)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & params,const FRH_OnSessionSearchCompleteDelegateBlock & Delegate)` | Makes a call to search for session browsers.
`public inline void `[`ClearCache`](#classURH__SessionBrowserCache_1ab6fc51bbfa94876b68dc96846fe3c920)`(bool bClearTemplates)` | Clears the cached sessions, and optionally the cached templates.
`public virtual FAuthContextPtr `[`GetSessionAuthContext`](#classURH__SessionBrowserCache_1a097ea9b50702c214574c512697427337)`() const` | Gets the auth context to use for API calls for the session owner.
`public virtual void `[`ImportAPISession`](#classURH__SessionBrowserCache_1ad7879d7762f0c548483d4b0f04558b97)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` | Adds a session into the session cache.
`public virtual void `[`ImportAPITemplate`](#classURH__SessionBrowserCache_1a59bae44be9047e2b2e107c27644eb6b0)`(const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` | Adds a new session template type to the templates.
`public inline virtual void `[`ReconcileAPISessions`](#classURH__SessionBrowserCache_1aec55593cc0c5248cb9a2eacab2c5e484)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` | Updates the list of sessions to only those that are active.
`public inline virtual void `[`ReconcileAPITemplates`](#classURH__SessionBrowserCache_1a599273fe6e4ea36ab930c56f077eff91)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` | Updates the list of session templates to those that are active.
`public virtual class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__SessionBrowserCache_1a06f4a7000da1bbc42027d6b8c970c437)`() const` | Gets the PlayerInfo Subsystem.
`public inline virtual IOnlineSubsystem * `[`GetOSS`](#classURH__SessionBrowserCache_1a4782beb9aacf0fd60d542dad46fcd693)`() const` | Gets the Online Subsystem to use for OSS calls.
`public inline virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__SessionBrowserCache_1a65fc8b708ead7613eccfff0845f4c131)`() const` | Gets the Online Subsystem Unique Id to use for OSS calls.
`public inline virtual FPlatformUserId `[`GetOSSPlatformUserId`](#classURH__SessionBrowserCache_1a207b2edbcb716481408845eae51f31a8)`() const` | Gets the Online Subsystem PlatformUserId to use for OSS calls (equivalent to controller index)
`public inline virtual TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classURH__SessionBrowserCache_1ad6d358234276c10d59e23baa4870ad2d)`() const` | Gets the etag to use for a "Get all Templates" type query.
`public inline virtual TOptional< FString > `[`GetETagForAllSessionsPoll`](#classURH__SessionBrowserCache_1abbc4078ddbc554e7837a79e09239e190)`() const` | Gets the etag to use for a "Get all Sessions" type query.
`public inline virtual TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classURH__SessionBrowserCache_1aadea8561a3f5852b4223a107602f77af)`() const` | Used to get all sessions, primarily for get all sessions polling where etag matches.
`public inline virtual `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classURH__SessionBrowserCache_1a36690247736f2e99456221caaf1f93f5)`(const FString & SessionId) const` | Gets a session by its id.
`public virtual void `[`RemoveSessionById`](#classURH__SessionBrowserCache_1ac417818631c93603c294d653811d3948)`(const FString & SessionId)` | Removes a cached session for the local player, this does NOT try to leave it.
`public virtual bool `[`GetTemplate`](#classURH__SessionBrowserCache_1aa529f70a678eb8569e794a9366d8e4fd)`(const FString & Type,`[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` | Gets a session template by type.
`public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classURH__SessionBrowserCache_1a229bdd8db5c7346c84fbcd0a7f22ddc8)`(const FString & SessionId) const` | Gets the platform synchronization object using the rally here session id.
`public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classURH__SessionBrowserCache_1abb9cfbe89e4c818c74cebac2647a6d8f)`(const FUniqueNetIdRepl & PlatformSessionId) const` | Gets the platform synchronization object using the platform session id.

### Members

#### `public  `[`URH_SessionBrowserCache`](#classURH__SessionBrowserCache_1a62c14a0d2d7a4319ffdb92ad829e6ba0)`()` <a id="classURH__SessionBrowserCache_1a62c14a0d2d7a4319ffdb92ad829e6ba0"></a>

Default constructor.

#### `public void `[`Search`](#classURH__SessionBrowserCache_1a7c3c586c5d3de3fb1511be825c8840c9)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & params,const FRH_OnSessionSearchCompleteDelegateBlock & Delegate)` <a id="classURH__SessionBrowserCache_1a7c3c586c5d3de3fb1511be825c8840c9"></a>

Makes a call to search for session browsers.

#### Parameters
* `params` The search paramaters to use. 

* `Delegate` Callback delegate for when the search is completed.

#### `public inline void `[`ClearCache`](#classURH__SessionBrowserCache_1ab6fc51bbfa94876b68dc96846fe3c920)`(bool bClearTemplates)` <a id="classURH__SessionBrowserCache_1ab6fc51bbfa94876b68dc96846fe3c920"></a>

Clears the cached sessions, and optionally the cached templates.

#### Parameters
* `bClearTemplates` If true, clear the templates as well.

#### `public virtual FAuthContextPtr `[`GetSessionAuthContext`](#classURH__SessionBrowserCache_1a097ea9b50702c214574c512697427337)`() const` <a id="classURH__SessionBrowserCache_1a097ea9b50702c214574c512697427337"></a>

Gets the auth context to use for API calls for the session owner.

#### `public virtual void `[`ImportAPISession`](#classURH__SessionBrowserCache_1ad7879d7762f0c548483d4b0f04558b97)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` <a id="classURH__SessionBrowserCache_1ad7879d7762f0c548483d4b0f04558b97"></a>

Adds a session into the session cache.

#### Parameters
* `Session` The session to add.

#### `public virtual void `[`ImportAPITemplate`](#classURH__SessionBrowserCache_1a59bae44be9047e2b2e107c27644eb6b0)`(const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` <a id="classURH__SessionBrowserCache_1a59bae44be9047e2b2e107c27644eb6b0"></a>

Adds a new session template type to the templates.

#### Parameters
* `Template` The template ot add.

#### `public inline virtual void `[`ReconcileAPISessions`](#classURH__SessionBrowserCache_1aec55593cc0c5248cb9a2eacab2c5e484)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` <a id="classURH__SessionBrowserCache_1aec55593cc0c5248cb9a2eacab2c5e484"></a>

Updates the list of sessions to only those that are active.

#### Parameters
* `SessionIds` The list of sessions that we are reconciling against. 

* `ETag` The ETag to use for the update.

#### `public inline virtual void `[`ReconcileAPITemplates`](#classURH__SessionBrowserCache_1a599273fe6e4ea36ab930c56f077eff91)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` <a id="classURH__SessionBrowserCache_1a599273fe6e4ea36ab930c56f077eff91"></a>

Updates the list of session templates to those that are active.

#### Parameters
* `InTemplates` The list of templates that we are reconciling against. 

* `ETag` The ETag to use for the update.

#### `public virtual class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__SessionBrowserCache_1a06f4a7000da1bbc42027d6b8c970c437)`() const` <a id="classURH__SessionBrowserCache_1a06f4a7000da1bbc42027d6b8c970c437"></a>

Gets the PlayerInfo Subsystem.

#### `public inline virtual IOnlineSubsystem * `[`GetOSS`](#classURH__SessionBrowserCache_1a4782beb9aacf0fd60d542dad46fcd693)`() const` <a id="classURH__SessionBrowserCache_1a4782beb9aacf0fd60d542dad46fcd693"></a>

Gets the Online Subsystem to use for OSS calls.

#### `public inline virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__SessionBrowserCache_1a65fc8b708ead7613eccfff0845f4c131)`() const` <a id="classURH__SessionBrowserCache_1a65fc8b708ead7613eccfff0845f4c131"></a>

Gets the Online Subsystem Unique Id to use for OSS calls.

#### `public inline virtual FPlatformUserId `[`GetOSSPlatformUserId`](#classURH__SessionBrowserCache_1a207b2edbcb716481408845eae51f31a8)`() const` <a id="classURH__SessionBrowserCache_1a207b2edbcb716481408845eae51f31a8"></a>

Gets the Online Subsystem PlatformUserId to use for OSS calls (equivalent to controller index)

#### `public inline virtual TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classURH__SessionBrowserCache_1ad6d358234276c10d59e23baa4870ad2d)`() const` <a id="classURH__SessionBrowserCache_1ad6d358234276c10d59e23baa4870ad2d"></a>

Gets the etag to use for a "Get all Templates" type query.

#### `public inline virtual TOptional< FString > `[`GetETagForAllSessionsPoll`](#classURH__SessionBrowserCache_1abbc4078ddbc554e7837a79e09239e190)`() const` <a id="classURH__SessionBrowserCache_1abbc4078ddbc554e7837a79e09239e190"></a>

Gets the etag to use for a "Get all Sessions" type query.

#### `public inline virtual TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classURH__SessionBrowserCache_1aadea8561a3f5852b4223a107602f77af)`() const` <a id="classURH__SessionBrowserCache_1aadea8561a3f5852b4223a107602f77af"></a>

Used to get all sessions, primarily for get all sessions polling where etag matches.

#### `public inline virtual `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classURH__SessionBrowserCache_1a36690247736f2e99456221caaf1f93f5)`(const FString & SessionId) const` <a id="classURH__SessionBrowserCache_1a36690247736f2e99456221caaf1f93f5"></a>

Gets a session by its id.

#### Parameters
* `SessionId` The Session Id to get. 

#### Returns
The Session with the given Id.

#### `public virtual void `[`RemoveSessionById`](#classURH__SessionBrowserCache_1ac417818631c93603c294d653811d3948)`(const FString & SessionId)` <a id="classURH__SessionBrowserCache_1ac417818631c93603c294d653811d3948"></a>

Removes a cached session for the local player, this does NOT try to leave it.

#### Parameters
* `SessionId` The Session Id to remove.

#### `public virtual bool `[`GetTemplate`](#classURH__SessionBrowserCache_1aa529f70a678eb8569e794a9366d8e4fd)`(const FString & Type,`[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` <a id="classURH__SessionBrowserCache_1aa529f70a678eb8569e794a9366d8e4fd"></a>

Gets a session template by type.

#### Parameters
* `Type` the Type of template to get. 

* `Template` The session template being retrieved. 

#### Returns
If true, the template was found.

#### `public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classURH__SessionBrowserCache_1a229bdd8db5c7346c84fbcd0a7f22ddc8)`(const FString & SessionId) const` <a id="classURH__SessionBrowserCache_1a229bdd8db5c7346c84fbcd0a7f22ddc8"></a>

Gets the platform synchronization object using the rally here session id.

#### `public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classURH__SessionBrowserCache_1abb9cfbe89e4c818c74cebac2647a6d8f)`(const FUniqueNetIdRepl & PlatformSessionId) const` <a id="classURH__SessionBrowserCache_1abb9cfbe89e4c818c74cebac2647a6d8f"></a>

Gets the platform synchronization object using the platform session id.

## class `URH_SessionView` <a id="classURH__SessionView"></a>

```
class URH_SessionView
  : public UObject
```

Base class providing functionality for viewing session data and interacting with it from blueprint. Specifically does not have an "owner" meaning it cannot do "work" - it is read only. The subclasses have owners.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionUpdatedDelegate`](#classURH__SessionView_1a1e2288d1a6ad082498edbe4168d6b8a4) | Delegate fired whenever the session is updated.
`public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionNotFoundDelegate`](#classURH__SessionView_1a8426fe031d4f2711140ce31aa5eaf0a0) | Delegate fired whenever the session is not found.
`public FRH_OnSessionMemberStateChangedDelegate `[`OnSessionMemberStateChangedDelegate`](#classURH__SessionView_1aaab8a60729077d368e1cabf44c10167f) | Delegate fired whenever the session member list changes with details about the change.
`public inline FORCEINLINE const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & `[`GetSessionWithETag`](#classURH__SessionView_1ad08943f93d68c193c60050fb9cf67484)`() const` | Gets the Session Data and its ETag.
`public inline const `[`FRHAPI_Session`](RHAPI_Session.md#structFRHAPI__Session)` & `[`GetSessionData`](#classURH__SessionView_1acd1f548a46835f75cc488bce8c1b871f)`() const` | Gets the Session Data.
`public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceData`](#classURH__SessionView_1a350668899ab37603d08c5f725413584d)`() const` | Gets the Instance Data.
`public inline FORCEINLINE const `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` * `[`GetSessionPlayer`](#classURH__SessionView_1ac546d5e6ed81bed2fd4febca2f017b18)`(const FGuid & PlayerUuid) const` | Gets a session player if they are part of the session.
`public inline FORCEINLINE bool `[`GetSessionPlayer`](#classURH__SessionView_1abf7a2c182bbf41b82a158fc111598aad)`(const FGuid & PlayerUuid,`[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` & OutPlayer) const` | Gets a session player if they are part of the session.
`public inline FORCEINLINE const `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` * `[`GetSessionLeader`](#classURH__SessionView_1ae5a65611380499424f451bb9657e7a91)`() const` | Gets the leader of the session if one exists.
`public inline FORCEINLINE bool `[`GetSessionLeader`](#classURH__SessionView_1a31765b2d8138d16349615492bfd46bee)`(`[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` & OutPlayer) const` | Gets the leader of the session if one exists.
`public inline FORCEINLINE int32 `[`GetSessionPlayerTeamId`](#classURH__SessionView_1a0bfd9114186b65e9d6ab6b4c97552fa5)`(const FGuid & PlayerUuid) const` | Gets the team id of a player if they are part of the session.
`public inline FORCEINLINE bool `[`IsCreatedByMatchmaking`](#classURH__SessionView_1a64970cbfe9adb2a065749a4e48b349df)`() const` | Gets if the session was created through matchmaking.
`public inline FORCEINLINE int32 `[`GetSessionPlayerCount`](#classURH__SessionView_1aceaf6db4198c0defac9c87bbc32574fb)`() const` | Gets the number of players in the session.
`public inline virtual bool `[`IsOffline`](#classURH__SessionView_1a7b855a2b8ac702d05cf3efe3263519b2)`() const` | Gets if the session is offline.
`public inline FORCEINLINE bool `[`IsOnline`](#classURH__SessionView_1a165bf0e2a2f4a73041daa0ebbaf082c2)`() const` | Gets if the session is online.
`public inline virtual bool `[`IsJoined`](#classURH__SessionView_1ae77e9295b2e867940d1fe31abd88a347)`() const` | Gets if the session is a one the local player has joined.
`public inline bool `[`IsInQueue`](#classURH__SessionView_1a5a36dda3d9b0c6049a26ce951f586d9d)`() const` | Gets if the session is currently in matchmaking.
`public inline FORCEINLINE `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` `[`GetTemplate`](#classURH__SessionView_1a293350d46d361b42df4e83c7a4f9bf9c)`() const` | Gets the session template.
`public inline FORCEINLINE FString `[`GetETag`](#classURH__SessionView_1abd96670c8e2f44b233af9322bd2a06fc)`() const` | Gets the session ETag.
`public inline FORCEINLINE FString `[`GetSessionId`](#classURH__SessionView_1a6aedf3a6656fcde76b8e18d0f2b297fe)`() const` | Gets the session Id.
`public inline FORCEINLINE FString `[`GetSessionType`](#classURH__SessionView_1a450529876e3c21928d4fbc9925d1bb68)`() const` | Gets the session type.
`public TMap< FString, FString > `[`GetCustomData`](#classURH__SessionView_1ae2b0056717b56a13ab94acdac387dce2)`() const` | Gets session custom data.
`public bool `[`GetCustomDataValue`](#classURH__SessionView_1a278a3291ea20e0ce736da8ea4db8e767)`(const FString & Key,FString & OutValue) const` | Gets a session custom data value.
`public TMap< FString, FString > `[`GetInstanceCustomData`](#classURH__SessionView_1ac5b924eec5400d5a92c9b067b357c601)`() const` | Gets intance custom data.
`public bool `[`GetInstanceCustomDataValue`](#classURH__SessionView_1a887bb0b311f4d9554e73419f9be81aad)`(const FString & Key,FString & OutValue) const` | Gets an instance custom data value.
`public TMap< FString, FString > `[`GetBrowserCustomData`](#classURH__SessionView_1a79bba88b1cd09baf9eadc1732a7105f8)`() const` | Gets session browser custom data.
`public bool `[`GetPlatformSession`](#classURH__SessionView_1aa477ffc8b54fb7d355664615900a6603)`(ERHAPI_Platform Platform,`[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` & OutPlatformSession) const` | Get the platform session data for a specific platform id 
`public virtual void `[`ImportAPISession`](#classURH__SessionView_1a92790b540906943bf8501049b45222b3)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & newSessionData,const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` | Update a session from the owner, implies a template update.
`public virtual void `[`ImportTemplate`](#classURH__SessionView_1aa910b3892253ae47a3eedf5f91eae252)`(const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` | Update the session template .
`public virtual void `[`Expire`](#classURH__SessionView_1a81b861028c8b998005d3627752cce51f)`(const FRH_OnSessionExpiredDelegate & Delegate)` | Called when the session was removed from our session list. Cleans up state then trigger callback on owner.
`public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`GetSessionOwner`](#classURH__SessionView_1ae61023347a0b252a612966c2f813c4f0)`() const` | Gets the session owner.
`public void `[`StartPolling`](#classURH__SessionView_1a488f1c164e31d30c17d98f13226c6079)`()` | Starts the polling of session updates.
`public void `[`StopPolling`](#classURH__SessionView_1aa34ca34af04d8bcb3200d48395c242c2)`()` | Stops the polling for session updates.
`public void `[`DeferPolling`](#classURH__SessionView_1a09c8faf3934af2d317d955cbd5da5ed3)`()` | Defers the polling for session updates (in case an out-of-band update was received)
`public float `[`GetPollTimeRemaining`](#classURH__SessionView_1aa57cc3f86e075380283f9a7a22d07a06)`()` | Gets the current time remaining in the poll cycle in seconds. Returns -1.f if poll is inactive or is executing.
`public void `[`ForcePollForUpdate`](#classURH__SessionView_1ac5bdf41c0341c101e6be0d581a5d758d)`(bool bClearETag,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Forces a polling call even if the polling is waiting till next time to pulse.
`public inline void `[`BLUEPRINT_ForcePollForUpdate`](#classURH__SessionView_1a41cfdf1e6b4153b30a1751c4a93790b5)`(bool bClearETag,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | Blueprint compatible version of ForcePollForUpdate.
`public void `[`AddDeferredPoll`](#classURH__SessionView_1a7e207452f3a5b71dcf74642d7d15aa9e)`(const `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` & DeferredPoll)` | Add a deferred poll to the list of polls to run in sequence.
`public void `[`CheckDeferredPolls`](#classURH__SessionView_1aaf1a897f37236897e788f33d2c34304a)`()` | Check and potentially kick off a deferred poll.
`protected `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` `[`SessionData`](#classURH__SessionView_1a2323a589459ab11bb6ee7596d234d7df) | The Session Data with Etag.
`protected `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` `[`Template`](#classURH__SessionView_1a4726a534a0d2c8f2de41f9ad5963d64f) | A reference copy of the Template (in case the template is deleted from the managed template list)
`protected FRH_AutoPollerPtr `[`Poller`](#classURH__SessionView_1aae3d3ebab134537e289fe4340777b47d) | Poller in charge of polling for the session.
`protected TArray< `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` > `[`DeferredPolls`](#classURH__SessionView_1a6519f00b229dbd0cad4be5907e937b15) | Array of stored poll requests that have not yet been processed.
`protected TArray< `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` > `[`WaitingPolls`](#classURH__SessionView_1ae0ea80e3394fe77f996d00bc692169c6) | Array of stored poll requests that are waiting on the result of the current poll.
`protected void `[`PollForUpdate`](#classURH__SessionView_1a4ccf0aaf6734e2e5638ab257c1451480)`(const FRH_PollCompleteFunc & Delegate)` | Triggers a poll for a session update, automatically called as part of the polling loop.

### Members

#### `public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionUpdatedDelegate`](#classURH__SessionView_1a1e2288d1a6ad082498edbe4168d6b8a4) <a id="classURH__SessionView_1a1e2288d1a6ad082498edbe4168d6b8a4"></a>

Delegate fired whenever the session is updated.

#### `public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionNotFoundDelegate`](#classURH__SessionView_1a8426fe031d4f2711140ce31aa5eaf0a0) <a id="classURH__SessionView_1a8426fe031d4f2711140ce31aa5eaf0a0"></a>

Delegate fired whenever the session is not found.

#### `public FRH_OnSessionMemberStateChangedDelegate `[`OnSessionMemberStateChangedDelegate`](#classURH__SessionView_1aaab8a60729077d368e1cabf44c10167f) <a id="classURH__SessionView_1aaab8a60729077d368e1cabf44c10167f"></a>

Delegate fired whenever the session member list changes with details about the change.

#### `public inline FORCEINLINE const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & `[`GetSessionWithETag`](#classURH__SessionView_1ad08943f93d68c193c60050fb9cf67484)`() const` <a id="classURH__SessionView_1ad08943f93d68c193c60050fb9cf67484"></a>

Gets the Session Data and its ETag.

#### `public inline const `[`FRHAPI_Session`](RHAPI_Session.md#structFRHAPI__Session)` & `[`GetSessionData`](#classURH__SessionView_1acd1f548a46835f75cc488bce8c1b871f)`() const` <a id="classURH__SessionView_1acd1f548a46835f75cc488bce8c1b871f"></a>

Gets the Session Data.

#### `public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceData`](#classURH__SessionView_1a350668899ab37603d08c5f725413584d)`() const` <a id="classURH__SessionView_1a350668899ab37603d08c5f725413584d"></a>

Gets the Instance Data.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` * `[`GetSessionPlayer`](#classURH__SessionView_1ac546d5e6ed81bed2fd4febca2f017b18)`(const FGuid & PlayerUuid) const` <a id="classURH__SessionView_1ac546d5e6ed81bed2fd4febca2f017b18"></a>

Gets a session player if they are part of the session.

#### Parameters
* `PlayerUuid` The unique Id of the player to get. 

#### Returns
The player if they exist in the session, otherwise null.

#### `public inline FORCEINLINE bool `[`GetSessionPlayer`](#classURH__SessionView_1abf7a2c182bbf41b82a158fc111598aad)`(const FGuid & PlayerUuid,`[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` & OutPlayer) const` <a id="classURH__SessionView_1abf7a2c182bbf41b82a158fc111598aad"></a>

Gets a session player if they are part of the session.

#### Parameters
* `PlayerUuid` The unique Id of the player to get. 

* `OutPlayer` The player if they exist in the session. 

#### Returns
If true, the player was found.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` * `[`GetSessionLeader`](#classURH__SessionView_1ae5a65611380499424f451bb9657e7a91)`() const` <a id="classURH__SessionView_1ae5a65611380499424f451bb9657e7a91"></a>

Gets the leader of the session if one exists.

#### `public inline FORCEINLINE bool `[`GetSessionLeader`](#classURH__SessionView_1a31765b2d8138d16349615492bfd46bee)`(`[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` & OutPlayer) const` <a id="classURH__SessionView_1a31765b2d8138d16349615492bfd46bee"></a>

Gets the leader of the session if one exists.

#### Parameters
* `OutPlayer` The leader if they exist in the session. 

#### Returns
If true, the leader was found.

#### `public inline FORCEINLINE int32 `[`GetSessionPlayerTeamId`](#classURH__SessionView_1a0bfd9114186b65e9d6ab6b4c97552fa5)`(const FGuid & PlayerUuid) const` <a id="classURH__SessionView_1a0bfd9114186b65e9d6ab6b4c97552fa5"></a>

Gets the team id of a player if they are part of the session.

#### Parameters
* `PlayerUuid` The unique Id of the player to get. 

#### Returns
The player's team id if they exist in the session, otherwise INDEX_NONE.

#### `public inline FORCEINLINE bool `[`IsCreatedByMatchmaking`](#classURH__SessionView_1a64970cbfe9adb2a065749a4e48b349df)`() const` <a id="classURH__SessionView_1a64970cbfe9adb2a065749a4e48b349df"></a>

Gets if the session was created through matchmaking.

#### `public inline FORCEINLINE int32 `[`GetSessionPlayerCount`](#classURH__SessionView_1aceaf6db4198c0defac9c87bbc32574fb)`() const` <a id="classURH__SessionView_1aceaf6db4198c0defac9c87bbc32574fb"></a>

Gets the number of players in the session.

#### `public inline virtual bool `[`IsOffline`](#classURH__SessionView_1a7b855a2b8ac702d05cf3efe3263519b2)`() const` <a id="classURH__SessionView_1a7b855a2b8ac702d05cf3efe3263519b2"></a>

Gets if the session is offline.

#### `public inline FORCEINLINE bool `[`IsOnline`](#classURH__SessionView_1a165bf0e2a2f4a73041daa0ebbaf082c2)`() const` <a id="classURH__SessionView_1a165bf0e2a2f4a73041daa0ebbaf082c2"></a>

Gets if the session is online.

#### `public inline virtual bool `[`IsJoined`](#classURH__SessionView_1ae77e9295b2e867940d1fe31abd88a347)`() const` <a id="classURH__SessionView_1ae77e9295b2e867940d1fe31abd88a347"></a>

Gets if the session is a one the local player has joined.

#### `public inline bool `[`IsInQueue`](#classURH__SessionView_1a5a36dda3d9b0c6049a26ce951f586d9d)`() const` <a id="classURH__SessionView_1a5a36dda3d9b0c6049a26ce951f586d9d"></a>

Gets if the session is currently in matchmaking.

#### `public inline FORCEINLINE `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` `[`GetTemplate`](#classURH__SessionView_1a293350d46d361b42df4e83c7a4f9bf9c)`() const` <a id="classURH__SessionView_1a293350d46d361b42df4e83c7a4f9bf9c"></a>

Gets the session template.

#### `public inline FORCEINLINE FString `[`GetETag`](#classURH__SessionView_1abd96670c8e2f44b233af9322bd2a06fc)`() const` <a id="classURH__SessionView_1abd96670c8e2f44b233af9322bd2a06fc"></a>

Gets the session ETag.

#### `public inline FORCEINLINE FString `[`GetSessionId`](#classURH__SessionView_1a6aedf3a6656fcde76b8e18d0f2b297fe)`() const` <a id="classURH__SessionView_1a6aedf3a6656fcde76b8e18d0f2b297fe"></a>

Gets the session Id.

#### `public inline FORCEINLINE FString `[`GetSessionType`](#classURH__SessionView_1a450529876e3c21928d4fbc9925d1bb68)`() const` <a id="classURH__SessionView_1a450529876e3c21928d4fbc9925d1bb68"></a>

Gets the session type.

#### `public TMap< FString, FString > `[`GetCustomData`](#classURH__SessionView_1ae2b0056717b56a13ab94acdac387dce2)`() const` <a id="classURH__SessionView_1ae2b0056717b56a13ab94acdac387dce2"></a>

Gets session custom data.

#### `public bool `[`GetCustomDataValue`](#classURH__SessionView_1a278a3291ea20e0ce736da8ea4db8e767)`(const FString & Key,FString & OutValue) const` <a id="classURH__SessionView_1a278a3291ea20e0ce736da8ea4db8e767"></a>

Gets a session custom data value.

#### Parameters
* `Key` The custom data being requested. 

* `Value` The value of the custom data. 

#### Returns
If true, the custom data was found.

#### `public TMap< FString, FString > `[`GetInstanceCustomData`](#classURH__SessionView_1ac5b924eec5400d5a92c9b067b357c601)`() const` <a id="classURH__SessionView_1ac5b924eec5400d5a92c9b067b357c601"></a>

Gets intance custom data.

#### `public bool `[`GetInstanceCustomDataValue`](#classURH__SessionView_1a887bb0b311f4d9554e73419f9be81aad)`(const FString & Key,FString & OutValue) const` <a id="classURH__SessionView_1a887bb0b311f4d9554e73419f9be81aad"></a>

Gets an instance custom data value.

#### Parameters
* `Key` The custom data being requested. 

* `Value` The value of the custom data. 

#### Returns
If true, the custom data was found.

#### `public TMap< FString, FString > `[`GetBrowserCustomData`](#classURH__SessionView_1a79bba88b1cd09baf9eadc1732a7105f8)`() const` <a id="classURH__SessionView_1a79bba88b1cd09baf9eadc1732a7105f8"></a>

Gets session browser custom data.

#### `public bool `[`GetPlatformSession`](#classURH__SessionView_1aa477ffc8b54fb7d355664615900a6603)`(ERHAPI_Platform Platform,`[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` & OutPlatformSession) const` <a id="classURH__SessionView_1aa477ffc8b54fb7d355664615900a6603"></a>

Get the platform session data for a specific platform id 
#### Parameters
* `Platform` The platform id to get the session data for 

* `OutPlatformSession` The platform session data for the specified platform id 

#### Returns
If true, the platform session data was found

#### `public virtual void `[`ImportAPISession`](#classURH__SessionView_1a92790b540906943bf8501049b45222b3)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & newSessionData,const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` <a id="classURH__SessionView_1a92790b540906943bf8501049b45222b3"></a>

Update a session from the owner, implies a template update.

#### Parameters
* `newSessionData` The new session data. 

* `newTemplate` The new session template.

#### `public virtual void `[`ImportTemplate`](#classURH__SessionView_1aa910b3892253ae47a3eedf5f91eae252)`(const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` <a id="classURH__SessionView_1aa910b3892253ae47a3eedf5f91eae252"></a>

Update the session template .

#### Parameters
* `newTemplate` The new session template.

#### `public virtual void `[`Expire`](#classURH__SessionView_1a81b861028c8b998005d3627752cce51f)`(const FRH_OnSessionExpiredDelegate & Delegate)` <a id="classURH__SessionView_1a81b861028c8b998005d3627752cce51f"></a>

Called when the session was removed from our session list. Cleans up state then trigger callback on owner.

#### Parameters
* `Delegate` The delegate to call when the session is removed.

#### `public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`GetSessionOwner`](#classURH__SessionView_1ae61023347a0b252a612966c2f813c4f0)`() const` <a id="classURH__SessionView_1ae61023347a0b252a612966c2f813c4f0"></a>

Gets the session owner.

#### `public void `[`StartPolling`](#classURH__SessionView_1a488f1c164e31d30c17d98f13226c6079)`()` <a id="classURH__SessionView_1a488f1c164e31d30c17d98f13226c6079"></a>

Starts the polling of session updates.

#### `public void `[`StopPolling`](#classURH__SessionView_1aa34ca34af04d8bcb3200d48395c242c2)`()` <a id="classURH__SessionView_1aa34ca34af04d8bcb3200d48395c242c2"></a>

Stops the polling for session updates.

#### `public void `[`DeferPolling`](#classURH__SessionView_1a09c8faf3934af2d317d955cbd5da5ed3)`()` <a id="classURH__SessionView_1a09c8faf3934af2d317d955cbd5da5ed3"></a>

Defers the polling for session updates (in case an out-of-band update was received)

#### `public float `[`GetPollTimeRemaining`](#classURH__SessionView_1aa57cc3f86e075380283f9a7a22d07a06)`()` <a id="classURH__SessionView_1aa57cc3f86e075380283f9a7a22d07a06"></a>

Gets the current time remaining in the poll cycle in seconds. Returns -1.f if poll is inactive or is executing.

#### `public void `[`ForcePollForUpdate`](#classURH__SessionView_1ac5bdf41c0341c101e6be0d581a5d758d)`(bool bClearETag,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__SessionView_1ac5bdf41c0341c101e6be0d581a5d758d"></a>

Forces a polling call even if the polling is waiting till next time to pulse.

#### Parameters
* `bClearETag` If true, the ETag will be cleared before the poll. 

* `Delegate` Callback delegate for when the poll completes.

#### `public inline void `[`BLUEPRINT_ForcePollForUpdate`](#classURH__SessionView_1a41cfdf1e6b4153b30a1751c4a93790b5)`(bool bClearETag,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__SessionView_1a41cfdf1e6b4153b30a1751c4a93790b5"></a>

Blueprint compatible version of ForcePollForUpdate.

#### Parameters
* `bClearETag` If true, the ETag will be cleared before the poll. 

* `Delegate` Callback delegate for when the poll completes.

#### `public void `[`AddDeferredPoll`](#classURH__SessionView_1a7e207452f3a5b71dcf74642d7d15aa9e)`(const `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` & DeferredPoll)` <a id="classURH__SessionView_1a7e207452f3a5b71dcf74642d7d15aa9e"></a>

Add a deferred poll to the list of polls to run in sequence.

#### `public void `[`CheckDeferredPolls`](#classURH__SessionView_1aaf1a897f37236897e788f33d2c34304a)`()` <a id="classURH__SessionView_1aaf1a897f37236897e788f33d2c34304a"></a>

Check and potentially kick off a deferred poll.

#### `protected `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` `[`SessionData`](#classURH__SessionView_1a2323a589459ab11bb6ee7596d234d7df) <a id="classURH__SessionView_1a2323a589459ab11bb6ee7596d234d7df"></a>

The Session Data with Etag.

#### `protected `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` `[`Template`](#classURH__SessionView_1a4726a534a0d2c8f2de41f9ad5963d64f) <a id="classURH__SessionView_1a4726a534a0d2c8f2de41f9ad5963d64f"></a>

A reference copy of the Template (in case the template is deleted from the managed template list)

#### `protected FRH_AutoPollerPtr `[`Poller`](#classURH__SessionView_1aae3d3ebab134537e289fe4340777b47d) <a id="classURH__SessionView_1aae3d3ebab134537e289fe4340777b47d"></a>

Poller in charge of polling for the session.

#### `protected TArray< `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` > `[`DeferredPolls`](#classURH__SessionView_1a6519f00b229dbd0cad4be5907e937b15) <a id="classURH__SessionView_1a6519f00b229dbd0cad4be5907e937b15"></a>

Array of stored poll requests that have not yet been processed.

#### `protected TArray< `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` > `[`WaitingPolls`](#classURH__SessionView_1ae0ea80e3394fe77f996d00bc692169c6) <a id="classURH__SessionView_1ae0ea80e3394fe77f996d00bc692169c6"></a>

Array of stored poll requests that are waiting on the result of the current poll.

#### `protected void `[`PollForUpdate`](#classURH__SessionView_1a4ccf0aaf6734e2e5638ab257c1451480)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__SessionView_1a4ccf0aaf6734e2e5638ab257c1451480"></a>

Triggers a poll for a session update, automatically called as part of the polling loop.

#### Parameters
* `Delegate` Callback delegate for when the poll completes.

## class `URH_InvitedSession` <a id="classURH__InvitedSession"></a>

```
class URH_InvitedSession
  : public URH_SessionView
```

Invited Sessions are sessions that the player has been invited to.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline virtual bool `[`IsOffline`](#classURH__InvitedSession_1af877279192bb132ceb1128b5fc5f6f2b)`() const` | Gets that an invited session is not an offline session.
`public virtual void `[`Join`](#classURH__InvitedSession_1a533ddfa3135881b4b4ed6b7f57cb809e)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Accepts to join the session.
`public virtual void `[`Leave`](#classURH__InvitedSession_1a685d6efd8ef21e58ca01142f09e028e1)`(const FString & LeaveReason,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Declines to join the session.
`public virtual void `[`QueryInviterBlockedOnPlatformAsync`](#classURH__InvitedSession_1a3caca59784784c406ee3df3a800492e6)`(const FRH_OnSessionPlayerIsBlockedDelegateBlock & Delegate)` | Determines if the Inviter of this session is blocked by the player on their current platform.

### Members

#### `public inline virtual bool `[`IsOffline`](#classURH__InvitedSession_1af877279192bb132ceb1128b5fc5f6f2b)`() const` <a id="classURH__InvitedSession_1af877279192bb132ceb1128b5fc5f6f2b"></a>

Gets that an invited session is not an offline session.

#### `public virtual void `[`Join`](#classURH__InvitedSession_1a533ddfa3135881b4b4ed6b7f57cb809e)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__InvitedSession_1a533ddfa3135881b4b4ed6b7f57cb809e"></a>

Accepts to join the session.

#### Parameters
* `Delegate` The callback delegate for the session being updated by the join.

#### `public virtual void `[`Leave`](#classURH__InvitedSession_1a685d6efd8ef21e58ca01142f09e028e1)`(const FString & LeaveReason,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__InvitedSession_1a685d6efd8ef21e58ca01142f09e028e1"></a>

Declines to join the session.

#### Parameters
* `Delegate` The callback delegate for the session being updated by the leave.

#### `public virtual void `[`QueryInviterBlockedOnPlatformAsync`](#classURH__InvitedSession_1a3caca59784784c406ee3df3a800492e6)`(const FRH_OnSessionPlayerIsBlockedDelegateBlock & Delegate)` <a id="classURH__InvitedSession_1a3caca59784784c406ee3df3a800492e6"></a>

Determines if the Inviter of this session is blocked by the player on their current platform.

#### Parameters
* `Delegate` The callback delegate for the results of querying if the inviter is blocked on the current platform

## class `URH_OfflineSession` <a id="classURH__OfflineSession"></a>

```
class URH_OfflineSession
  : public URH_JoinedSession
```

Offline Sessions are sessions the session owner is actively a member of that are unsynchronized with the API. This is primarily intended as a utility class to allow for the session flow to be used globally, even when not running API based sessions (ex: tutorial / practice area before login).

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline virtual bool `[`IsOffline`](#classURH__OfflineSession_1afb29afef2455da0af98c31af0ac31f92)`() const` | Gets that the session is offline.
`public virtual void `[`InvitePlayer`](#classURH__OfflineSession_1af16376f4dc510808b79aa74cf2ea461d)`(const FGuid & PlayerUuid,int32 Team,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`KickPlayer`](#classURH__OfflineSession_1a0b8bc9e0caafb5cb35a1e7c1caa4dfbe)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`InviteOtherSession`](#classURH__OfflineSession_1a18222ea515b0ad2e08e2b262259f1ae2)`(const FString & InvitedSessionId,const `[`FRHAPI_PlayerInviteRequest`](RHAPI_PlayerInviteRequest.md#structFRHAPI__PlayerInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`JoinOtherSession`](#classURH__OfflineSession_1ac300bb01ecbe1cf134eeed716f47abdb)`(const FString & TargetSessionId,const `[`FRHAPI_PlayerInviteRequest`](RHAPI_PlayerInviteRequest.md#structFRHAPI__PlayerInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`KickOtherSession`](#classURH__OfflineSession_1aef48af399b765fcf42bddbbb49242d18)`(const FString & KickedSessionId,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`SetLeader`](#classURH__OfflineSession_1a88d682913b0247652317fa4ed3213152)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`ChangePlayerTeam`](#classURH__OfflineSession_1a06bb9470b305e09a1eed9ffbc35153e8)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Changes the team a given player is associated with in the session.
`public virtual void `[`GivePlayerPermission`](#classURH__OfflineSession_1af5790d39381821e9efa53ffbdd926f26)`(const FGuid & PlayerUuid,const ERHAPI_IntraSessionPermissions & Permission,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Grants a player a specific session permission.
`public virtual void `[`RemovePlayerPermission`](#classURH__OfflineSession_1a61b2cd0bc8a71e505ad4c336cce13c06)`(const FGuid & PlayerUuid,const ERHAPI_IntraSessionPermissions & Permission,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Revokes a specific session permission from a player.
`public virtual void `[`SwapPlayerTeams`](#classURH__OfflineSession_1a3c543c48fdc9fe0d82912ef2635bdae4)`(const FGuid & PlayerUuidA,const FGuid & PlayerUuidB,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Swaps the teams of a specified pair of players.
`public virtual void `[`UpdatePlayerCustomData`](#classURH__OfflineSession_1aa58dc5637c9e083c6990f7832077a60d)`(const FGuid & PlayerUuid,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`Leave`](#classURH__OfflineSession_1aa782883d490c19fd1f50dd3349d71dd7)`(bool bFromOSSSession,const FString & LeaveReason,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Leaves the session.
`public virtual void `[`RequestInstance`](#classURH__OfflineSession_1a15f9d178c350737ffd1c7315b174b9d3)`(const `[`FRHAPI_InstanceRequest`](RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Attempt to create a new instance for the session.
`public virtual void `[`EndInstance`](#classURH__OfflineSession_1a42d2adfee51e818244e98e0d0888f410)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Shutdown the existing instance for the session.
`public virtual void `[`GenerateVoipLoginToken`](#classURH__OfflineSession_1ac27726a868507a3200bf8724f57270df)`(const FRH_OnSessionGetVoipTokenDelegateBlock & Delegate)` | Generate a VOIP login token.
`public virtual void `[`GenerateVoipActionToken`](#classURH__OfflineSession_1ae1fb00699b03e13df973851ab5a293d0)`(ERHAPI_VivoxSessionActionSingle VivoxAction,ERHAPI_VoipSessionType VoipSessionType,const FRH_OnSessionGetVoipTokenDelegateBlock & Delegate)` | Generate a VOIP action token.
`public virtual void `[`UpdateSessionInfo`](#classURH__OfflineSession_1a298d217d999690851348cb4041ff7599)`(const `[`FRHAPI_SessionUpdate`](RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the session info.
`public virtual void `[`UpdateInstanceInfo`](#classURH__OfflineSession_1a8b36aeef35d1acbe6e6af22d9a55cf0f)`(const `[`FRHAPI_InstanceInfoUpdate`](RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the sessions instance info.
`public virtual void `[`UpdateBrowserInfo`](#classURH__OfflineSession_1a1efa399f684ce083ce292c87717f22ad)`(bool bEnable,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the sessions browser info.
`public virtual void `[`UpdateInstanceHealth`](#classURH__OfflineSession_1afeab096fde1a8c507aa1bb90403b9d81)`(ERHAPI_InstanceHealthStatus HealthStatus,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Update the instance health of the session.
`public virtual void `[`AcknowledgeBackfill`](#classURH__OfflineSession_1aa0472dab20c9193181b61a87f7175db2)`(bool bEnable,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Acknowledge backfill for the session, keeping it alive and processing updates.
`public virtual void `[`DeleteBackfill`](#classURH__OfflineSession_1ad422457d7e902b94d431a41d20246235)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Delete active backfill request for the session.
`public virtual void `[`EmitAuditEvent`](#classURH__OfflineSession_1afeb6450ec8e2bf8912f50f7066c23c80)`(const `[`FRHAPI_CreateAuditRequest`](RHAPI_CreateAuditRequest.md#structFRHAPI__CreateAuditRequest)` & AuditEvent,const FRH_GenericSuccessWithErrorBlock & Delegate) const` | Emit an event to the session audit log.
`protected void `[`ImportSessionUpdateToAllPlayers`](#classURH__OfflineSession_1a662a10e6f117bb137f9d0d65b75171a8)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Update)` | 

### Members

#### `public inline virtual bool `[`IsOffline`](#classURH__OfflineSession_1afb29afef2455da0af98c31af0ac31f92)`() const` <a id="classURH__OfflineSession_1afb29afef2455da0af98c31af0ac31f92"></a>

Gets that the session is offline.

#### `public virtual void `[`InvitePlayer`](#classURH__OfflineSession_1af16376f4dc510808b79aa74cf2ea461d)`(const FGuid & PlayerUuid,int32 Team,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1af16376f4dc510808b79aa74cf2ea461d"></a>

Currently not supported for offline sessions.

#### `public virtual void `[`KickPlayer`](#classURH__OfflineSession_1a0b8bc9e0caafb5cb35a1e7c1caa4dfbe)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a0b8bc9e0caafb5cb35a1e7c1caa4dfbe"></a>

Currently not supported for offline sessions.

#### `public virtual void `[`InviteOtherSession`](#classURH__OfflineSession_1a18222ea515b0ad2e08e2b262259f1ae2)`(const FString & InvitedSessionId,const `[`FRHAPI_PlayerInviteRequest`](RHAPI_PlayerInviteRequest.md#structFRHAPI__PlayerInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a18222ea515b0ad2e08e2b262259f1ae2"></a>

Currently not supported for offline sessions.

#### `public virtual void `[`JoinOtherSession`](#classURH__OfflineSession_1ac300bb01ecbe1cf134eeed716f47abdb)`(const FString & TargetSessionId,const `[`FRHAPI_PlayerInviteRequest`](RHAPI_PlayerInviteRequest.md#structFRHAPI__PlayerInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1ac300bb01ecbe1cf134eeed716f47abdb"></a>

Currently not supported for offline sessions.

#### `public virtual void `[`KickOtherSession`](#classURH__OfflineSession_1aef48af399b765fcf42bddbbb49242d18)`(const FString & KickedSessionId,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1aef48af399b765fcf42bddbbb49242d18"></a>

Currently not supported for offline sessions.

#### `public virtual void `[`SetLeader`](#classURH__OfflineSession_1a88d682913b0247652317fa4ed3213152)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a88d682913b0247652317fa4ed3213152"></a>

Currently not supported for offline sessions.

#### `public virtual void `[`ChangePlayerTeam`](#classURH__OfflineSession_1a06bb9470b305e09a1eed9ffbc35153e8)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a06bb9470b305e09a1eed9ffbc35153e8"></a>

Changes the team a given player is associated with in the session.

#### Parameters
* `PlayerUuid` The unique player Id to invite to the session. 

* `Team` The target team that the player will be associated with in the session. 

* `Delegate` Callback delegate for the session being updated by the team change.

#### `public virtual void `[`GivePlayerPermission`](#classURH__OfflineSession_1af5790d39381821e9efa53ffbdd926f26)`(const FGuid & PlayerUuid,const ERHAPI_IntraSessionPermissions & Permission,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1af5790d39381821e9efa53ffbdd926f26"></a>

Grants a player a specific session permission.

#### Parameters
* `PlayerUuid` The unique player id who will receive the permission 

* `Permission` The permission this player will receive 

* `Delegate` Callback delegate for the update

#### `public virtual void `[`RemovePlayerPermission`](#classURH__OfflineSession_1a61b2cd0bc8a71e505ad4c336cce13c06)`(const FGuid & PlayerUuid,const ERHAPI_IntraSessionPermissions & Permission,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a61b2cd0bc8a71e505ad4c336cce13c06"></a>

Revokes a specific session permission from a player.

#### Parameters
* `PlayerUuid` The unique player id who will lose the permission 

* `Permission` The permission this player will lose 

* `Delegate` Callback delegate for the update

#### `public virtual void `[`SwapPlayerTeams`](#classURH__OfflineSession_1a3c543c48fdc9fe0d82912ef2635bdae4)`(const FGuid & PlayerUuidA,const FGuid & PlayerUuidB,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a3c543c48fdc9fe0d82912ef2635bdae4"></a>

Swaps the teams of a specified pair of players.

#### Parameters
* `PlayerUuidA` The first unique player id to swap 

* `PlayerUuidB` The second unique player id to swap 

* `Delegate` Callback delegate for the session being updated by the team change.

#### `public virtual void `[`UpdatePlayerCustomData`](#classURH__OfflineSession_1aa58dc5637c9e083c6990f7832077a60d)`(const FGuid & PlayerUuid,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1aa58dc5637c9e083c6990f7832077a60d"></a>

Currently not supported for offline sessions.

#### `public virtual void `[`Leave`](#classURH__OfflineSession_1aa782883d490c19fd1f50dd3349d71dd7)`(bool bFromOSSSession,const FString & LeaveReason,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1aa782883d490c19fd1f50dd3349d71dd7"></a>

Leaves the session.

#### Parameters
* `bFromOSSSession` If true, then leave the OSS Session. Otherwise, just leave the session. 

* `Delegate` Callback delegate for the session being updated by the leave.

#### `public virtual void `[`RequestInstance`](#classURH__OfflineSession_1a15f9d178c350737ffd1c7315b174b9d3)`(const `[`FRHAPI_InstanceRequest`](RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a15f9d178c350737ffd1c7315b174b9d3"></a>

Attempt to create a new instance for the session.

#### Parameters
* `InstanceRequest` Details for the instance being requested. 

* `Delegate` Callback delegate for the session being updated with the instance creation, or failure.

#### `public virtual void `[`EndInstance`](#classURH__OfflineSession_1a42d2adfee51e818244e98e0d0888f410)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a42d2adfee51e818244e98e0d0888f410"></a>

Shutdown the existing instance for the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the instance ending.

#### `public virtual void `[`GenerateVoipLoginToken`](#classURH__OfflineSession_1ac27726a868507a3200bf8724f57270df)`(const FRH_OnSessionGetVoipTokenDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1ac27726a868507a3200bf8724f57270df"></a>

Generate a VOIP login token.

#### Parameters
* `Delegate` Callback delegate with the new voip token

#### `public virtual void `[`GenerateVoipActionToken`](#classURH__OfflineSession_1ae1fb00699b03e13df973851ab5a293d0)`(ERHAPI_VivoxSessionActionSingle VivoxAction,ERHAPI_VoipSessionType VoipSessionType,const FRH_OnSessionGetVoipTokenDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1ae1fb00699b03e13df973851ab5a293d0"></a>

Generate a VOIP action token.

#### Parameters
* `VivoxAction` The action to generate a token for 

* `VoipSessionType` The type of voip session to generate a token for 

* `Delegate` Callback delegate with the new voip token

#### `public virtual void `[`UpdateSessionInfo`](#classURH__OfflineSession_1a298d217d999690851348cb4041ff7599)`(const `[`FRHAPI_SessionUpdate`](RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a298d217d999690851348cb4041ff7599"></a>

Updates the session info.

#### Parameters
* `Update` The session info for the update. 

* `Delegate` Callback delegate for the session being updated with new session data.

#### `public virtual void `[`UpdateInstanceInfo`](#classURH__OfflineSession_1a8b36aeef35d1acbe6e6af22d9a55cf0f)`(const `[`FRHAPI_InstanceInfoUpdate`](RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a8b36aeef35d1acbe6e6af22d9a55cf0f"></a>

Updates the sessions instance info.

#### Parameters
* `Update` The instance info for the update. 

* `Delegate` Callback delegate for the session being updated with new instance data.

#### `public virtual void `[`UpdateBrowserInfo`](#classURH__OfflineSession_1a1efa399f684ce083ce292c87717f22ad)`(bool bEnable,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a1efa399f684ce083ce292c87717f22ad"></a>

Updates the sessions browser info.

#### Parameters
* `bEnable` If true, sets the browser info. Otherwise, clear it out. 

* `CustomData` The new browser data for the update. 

* `Delegate` Callback delegate for the session being updated with new browser data.

#### `public virtual void `[`UpdateInstanceHealth`](#classURH__OfflineSession_1afeab096fde1a8c507aa1bb90403b9d81)`(ERHAPI_InstanceHealthStatus HealthStatus,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__OfflineSession_1afeab096fde1a8c507aa1bb90403b9d81"></a>

Update the instance health of the session.

#### Parameters
* `HealthStatus` The new health status of the instance 

* `Delegate` Callback delegate for completion (note - local session is not modified on health update for efficiency reasons!)

#### `public virtual void `[`AcknowledgeBackfill`](#classURH__OfflineSession_1aa0472dab20c9193181b61a87f7175db2)`(bool bEnable,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1aa0472dab20c9193181b61a87f7175db2"></a>

Acknowledge backfill for the session, keeping it alive and processing updates.

#### Parameters
* `bEnable` If true, keeps backfill enabled 

* `Delegate` Callback delegate for the session being updated with backfill data

#### `public virtual void `[`DeleteBackfill`](#classURH__OfflineSession_1ad422457d7e902b94d431a41d20246235)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1ad422457d7e902b94d431a41d20246235"></a>

Delete active backfill request for the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with backfill data

#### `public virtual void `[`EmitAuditEvent`](#classURH__OfflineSession_1afeb6450ec8e2bf8912f50f7066c23c80)`(const `[`FRHAPI_CreateAuditRequest`](RHAPI_CreateAuditRequest.md#structFRHAPI__CreateAuditRequest)` & AuditEvent,const FRH_GenericSuccessWithErrorBlock & Delegate) const` <a id="classURH__OfflineSession_1afeb6450ec8e2bf8912f50f7066c23c80"></a>

Emit an event to the session audit log.

#### Parameters
* `AuditEvent` The event to send 

* `Delegate` Callback delegate for the completion of the audit event

#### `protected void `[`ImportSessionUpdateToAllPlayers`](#classURH__OfflineSession_1a662a10e6f117bb137f9d0d65b75171a8)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Update)` <a id="classURH__OfflineSession_1a662a10e6f117bb137f9d0d65b75171a8"></a>

## class `URH_OnlineSession` <a id="classURH__OnlineSession"></a>

```
class URH_OnlineSession
  : public URH_JoinedSession
```

Online Sessions are sessions that are synchronized from the API (and since it is a joined session, the Session Owner is a member)

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public const TArray< FString > & `[`MatchmakingTags`](#classURH__OnlineSession_1a3d02eff30ffd63efd45ba406a77a095c) | 
`public const TArray< FString > const FRH_OnSessionUpdatedDynamicDelegate & `[`Delegate`](#classURH__OnlineSession_1a2bc77310ae4517d14bae417fe4e3f020) | 
`public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`SessionOwner`](#classURH__OnlineSession_1a3549895abb13d13b6693cc058065eace) | 
`public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > const FRH_OnSessionUpdatedDynamicDelegate & `[`Delegate`](#classURH__OnlineSession_1af4c227b3f3313aae40b08c87f06c1360) | 
`public inline virtual bool `[`IsOffline`](#classURH__OnlineSession_1af734641e6fe04130aadcfb7a6ed1d58a)`() const` | Gets that an online session is not an offline session.
`public virtual void `[`ImportAPISession`](#classURH__OnlineSession_1a4fe7233a68b23d1ca4985d3b0e103ef5)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & newSessionData,const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` | Update a session from the owner, implies a template update.
`public virtual void `[`Expire`](#classURH__OnlineSession_1a829df0d3fa147c93bc5bf43df526e050)`(const FRH_OnSessionExpiredDelegate & Delegate)` | Called when the session was removed from our session list. Cleans up state then trigger callback on owner.
`public virtual void `[`JoinQueue`](#classURH__OnlineSession_1a28750e69db30613d54f4a6c9bfcc94a6)`(const `[`FRHAPI_QueueJoinRequest`](RHAPI_QueueJoinRequest.md#structFRHAPI__QueueJoinRequest)` & Request,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Joins a specific queue with the session to be matchmade with others.
`public inline virtual void `[`JoinQueue`](#classURH__OnlineSession_1ac6471f91d2ee705b4849186e621e60c3)`(const FString & QueueId,const TArray< FString > & MatchmakingTags,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Simplified version of queue join, joins a specific queue with the session to be matchmade with others.
`public  `[`UFUNCTION`](#classURH__OnlineSession_1a4e4d322afa4582235311cf5c2c0ba763)`(BlueprintCallable,Category,meta) const` | Blueprint compatible version of JoinQueue.
`public inline void `[`BLUEPRINT_JoinQueueEx`](#classURH__OnlineSession_1a077e94f81edf865ddc55168c9ce2a353)`(const `[`FRHAPI_QueueJoinRequest`](RHAPI_QueueJoinRequest.md#structFRHAPI__QueueJoinRequest)` & Request,const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` | Blueprint compatible version of JoinQueue.
`public virtual void `[`LeaveQueue`](#classURH__OnlineSession_1a580de5cf705209f24551008caf72151c)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Leaves the currently active matchmaking queue.
`public virtual void `[`GivePlayerPermission`](#classURH__OnlineSession_1a7615e5a17ed9456e4ef9996968bf5d55)`(const FGuid & PlayerUuid,const ERHAPI_IntraSessionPermissions & Permission,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Grants a player a specific session permission.
`public virtual void `[`RemovePlayerPermission`](#classURH__OnlineSession_1ab020cc205c6fa00ea95dcb19884cf0e4)`(const FGuid & PlayerUuid,const ERHAPI_IntraSessionPermissions & Permission,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Revokes a player a specific session permission.
`public virtual void `[`InvitePlayer`](#classURH__OnlineSession_1a8bf3c389551cbdf8ecf5112c8af151cf)`(const FGuid & PlayerUuid,int32 Team,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Invites a player to the session.
`public virtual void `[`KickPlayer`](#classURH__OnlineSession_1a4f8560ffb8ac393738907307ed2225bd)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Kicks a player from the session.
`public virtual void `[`InviteOtherSession`](#classURH__OnlineSession_1a2a71476133c92c2f641766e7a1eeed36)`(const FString & InvitedSessionId,const `[`FRHAPI_PlayerInviteRequest`](RHAPI_PlayerInviteRequest.md#structFRHAPI__PlayerInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Invites a different session to this session.
`public virtual void `[`JoinOtherSession`](#classURH__OnlineSession_1a8a686709d5991532e0965fe576c4d118)`(const FString & TargetSessionId,const `[`FRHAPI_PlayerInviteRequest`](RHAPI_PlayerInviteRequest.md#structFRHAPI__PlayerInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | This entire session is invited to/joins another session.
`public virtual void `[`KickOtherSession`](#classURH__OnlineSession_1aaea0484871603acf63a76317dd1ffe9e)`(const FString & KickedSessionId,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Kicks all players in a target tsession from this session.
`public virtual void `[`SetLeader`](#classURH__OnlineSession_1ade15c14b576cf4c5ba384bc61fe25879)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Sets a new leader for the session.
`public virtual void `[`ChangePlayerTeam`](#classURH__OnlineSession_1ab35d9139e68b21dd3ee9ed779fb37f16)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Changes the team a given player is associated with in the session.
`public virtual void `[`SwapPlayerTeams`](#classURH__OnlineSession_1a84fe6960f643869d2e96966c8f7386c3)`(const FGuid & PlayerUuidA,const FGuid & PlayerUuidB,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Swaps the teams of a specified pair of players.
`public virtual void `[`UpdatePlayerCustomData`](#classURH__OnlineSession_1a8f35a3597ef47c2570e9489e62ac6d23)`(const FGuid & PlayerUuid,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Changes the session player's custom data.
`public virtual void `[`Leave`](#classURH__OnlineSession_1a58592bde912fd2c21de8906f5b88dcce)`(bool bFromOSSSession,const FString & LeaveReason,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Leaves the session.
`public virtual void `[`RequestInstance`](#classURH__OnlineSession_1aae906a67108cba268d73786229e8aa94)`(const `[`FRHAPI_InstanceRequest`](RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Attempt to create a new instance for the session.
`public virtual void `[`EndInstance`](#classURH__OnlineSession_1a38a05f415495a019c3f02fcae76317ec)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Shutdown the existing instance for the session.
`public virtual void `[`GenerateVoipLoginToken`](#classURH__OnlineSession_1aada1d23777b026c76b7e7b5bb2669b95)`(const FRH_OnSessionGetVoipTokenDelegateBlock & Delegate)` | Generate a VOIP login token.
`public virtual void `[`GenerateVoipActionToken`](#classURH__OnlineSession_1ab8b5a3517f9670f980c0dc60ad80e709)`(ERHAPI_VivoxSessionActionSingle VivoxAction,ERHAPI_VoipSessionType VoipSessionType,const FRH_OnSessionGetVoipTokenDelegateBlock & Delegate)` | Generate a VOIP action token.
`public virtual void `[`UpdateSessionInfo`](#classURH__OnlineSession_1a21428e63a1268ef552d3186cd7df9d50)`(const `[`FRHAPI_SessionUpdate`](RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the session info.
`public virtual void `[`UpdateInstanceInfo`](#classURH__OnlineSession_1abdfc1e53b834da4afdfdce29de9b318b)`(const `[`FRHAPI_InstanceInfoUpdate`](RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the sessions instance info.
`public virtual void `[`UpdateBrowserInfo`](#classURH__OnlineSession_1a35197db28a89b5325ef4384dca5d76c8)`(bool bEnable,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the sessions browser info.
`public virtual void `[`UpdateInstanceHealth`](#classURH__OnlineSession_1ac49edd6dd0b2987fc8b0dcb6f563f585)`(ERHAPI_InstanceHealthStatus HealthStatus,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Update the instance health of the session.
`public virtual void `[`AcknowledgeBackfill`](#classURH__OnlineSession_1aa087b6190e032b3d3c22c110498cd33a)`(bool bEnable,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Acknowledge backfill for the session, keeping it alive and processing updates.
`public virtual void `[`DeleteBackfill`](#classURH__OnlineSession_1a0e98bf0b3e205c2102364daccb7bb610)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Delete active backfill request for the session.
`public virtual void `[`EmitAuditEvent`](#classURH__OnlineSession_1a7bdff0e988bdaa1fb3e4be2d2c8b3513)`(const `[`FRHAPI_CreateAuditRequest`](RHAPI_CreateAuditRequest.md#structFRHAPI__CreateAuditRequest)` & AuditEvent,const FRH_GenericSuccessWithErrorBlock & Delegate) const` | Emit an event to the session audit log.

### Members

#### `public const TArray< FString > & `[`MatchmakingTags`](#classURH__OnlineSession_1a3d02eff30ffd63efd45ba406a77a095c) <a id="classURH__OnlineSession_1a3d02eff30ffd63efd45ba406a77a095c"></a>

#### `public const TArray< FString > const FRH_OnSessionUpdatedDynamicDelegate & `[`Delegate`](#classURH__OnlineSession_1a2bc77310ae4517d14bae417fe4e3f020) <a id="classURH__OnlineSession_1a2bc77310ae4517d14bae417fe4e3f020"></a>

#### `public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`SessionOwner`](#classURH__OnlineSession_1a3549895abb13d13b6693cc058065eace) <a id="classURH__OnlineSession_1a3549895abb13d13b6693cc058065eace"></a>

#### `public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > const FRH_OnSessionUpdatedDynamicDelegate & `[`Delegate`](#classURH__OnlineSession_1af4c227b3f3313aae40b08c87f06c1360) <a id="classURH__OnlineSession_1af4c227b3f3313aae40b08c87f06c1360"></a>

#### `public inline virtual bool `[`IsOffline`](#classURH__OnlineSession_1af734641e6fe04130aadcfb7a6ed1d58a)`() const` <a id="classURH__OnlineSession_1af734641e6fe04130aadcfb7a6ed1d58a"></a>

Gets that an online session is not an offline session.

#### `public virtual void `[`ImportAPISession`](#classURH__OnlineSession_1a4fe7233a68b23d1ca4985d3b0e103ef5)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & newSessionData,const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` <a id="classURH__OnlineSession_1a4fe7233a68b23d1ca4985d3b0e103ef5"></a>

Update a session from the owner, implies a template update.

#### Parameters
* `newSessionData` The new session data. 

* `newTemplate` The new session template.

#### `public virtual void `[`Expire`](#classURH__OnlineSession_1a829df0d3fa147c93bc5bf43df526e050)`(const FRH_OnSessionExpiredDelegate & Delegate)` <a id="classURH__OnlineSession_1a829df0d3fa147c93bc5bf43df526e050"></a>

Called when the session was removed from our session list. Cleans up state then trigger callback on owner.

#### Parameters
* `Delegate` The delegate to call when the session is removed.

#### `public virtual void `[`JoinQueue`](#classURH__OnlineSession_1a28750e69db30613d54f4a6c9bfcc94a6)`(const `[`FRHAPI_QueueJoinRequest`](RHAPI_QueueJoinRequest.md#structFRHAPI__QueueJoinRequest)` & Request,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a28750e69db30613d54f4a6c9bfcc94a6"></a>

Joins a specific queue with the session to be matchmade with others.

#### Parameters
* `Request` The request for joining the queue. 

* `Delegate` Callback delegate on the session being updated from joining matchmaking.

#### `public inline virtual void `[`JoinQueue`](#classURH__OnlineSession_1ac6471f91d2ee705b4849186e621e60c3)`(const FString & QueueId,const TArray< FString > & MatchmakingTags,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1ac6471f91d2ee705b4849186e621e60c3"></a>

Simplified version of queue join, joins a specific queue with the session to be matchmade with others.

#### Parameters
* `QueueId` The Id of the queue being joined. 

* `MatchmakingTags` Specific data to be passed in as extra params for matchmaking. 

* `Delegate` Callback delegate on the session being updated from joining matchmaking.

#### `public  `[`UFUNCTION`](#classURH__OnlineSession_1a4e4d322afa4582235311cf5c2c0ba763)`(BlueprintCallable,Category,meta) const` <a id="classURH__OnlineSession_1a4e4d322afa4582235311cf5c2c0ba763"></a>

Blueprint compatible version of JoinQueue.

#### Parameters
* `QueueId` The Id of the queue being joined. 

* `MatchmakingTags` Specific data to be passed in as extra params for matchmaking. 

* `Delegate` Callback delegate on the session being updated from joining matchmaking.

#### `public inline void `[`BLUEPRINT_JoinQueueEx`](#classURH__OnlineSession_1a077e94f81edf865ddc55168c9ce2a353)`(const `[`FRHAPI_QueueJoinRequest`](RHAPI_QueueJoinRequest.md#structFRHAPI__QueueJoinRequest)` & Request,const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` <a id="classURH__OnlineSession_1a077e94f81edf865ddc55168c9ce2a353"></a>

Blueprint compatible version of JoinQueue.

#### Parameters
* `Request` The request for joining the queue. 

* `Delegate` Callback delegate on the session being updated from joining matchmaking.

#### `public virtual void `[`LeaveQueue`](#classURH__OnlineSession_1a580de5cf705209f24551008caf72151c)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a580de5cf705209f24551008caf72151c"></a>

Leaves the currently active matchmaking queue.

#### Parameters
* `Delegate` Callback delegate on the session being updated from leaving matchmaking.

#### `public virtual void `[`GivePlayerPermission`](#classURH__OnlineSession_1a7615e5a17ed9456e4ef9996968bf5d55)`(const FGuid & PlayerUuid,const ERHAPI_IntraSessionPermissions & Permission,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a7615e5a17ed9456e4ef9996968bf5d55"></a>

Grants a player a specific session permission.

#### Parameters
* `PlayerUuid` The unique player id who will receive the permission 

* `Permission` The permission this player will receive 

* `Delegate` Callback delegate for the update

#### `public virtual void `[`RemovePlayerPermission`](#classURH__OnlineSession_1ab020cc205c6fa00ea95dcb19884cf0e4)`(const FGuid & PlayerUuid,const ERHAPI_IntraSessionPermissions & Permission,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1ab020cc205c6fa00ea95dcb19884cf0e4"></a>

Revokes a player a specific session permission.

#### Parameters
* `PlayerUuid` The unique player id who will lose the permission 

* `Permission` The permission this player will lose 

* `Delegate` Callback delegate for the update

#### `public virtual void `[`InvitePlayer`](#classURH__OnlineSession_1a8bf3c389551cbdf8ecf5112c8af151cf)`(const FGuid & PlayerUuid,int32 Team,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a8bf3c389551cbdf8ecf5112c8af151cf"></a>

Invites a player to the session.

#### Parameters
* `PlayerUuid` The unique player Id to invite to the session. 

* `CustomData` The custom data for the invite 

* `Team` The target team that the player will be associated with in the session. 

* `Delegate` Callback delegate for the session being updated by the invite.

#### `public virtual void `[`KickPlayer`](#classURH__OnlineSession_1a4f8560ffb8ac393738907307ed2225bd)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a4f8560ffb8ac393738907307ed2225bd"></a>

Kicks a player from the session.

#### Parameters
* `PlayerUuid` The unique player Id to kick from the session. 

* `Delegate` Callback delegate for the session being updated by the kick.

#### `public virtual void `[`InviteOtherSession`](#classURH__OnlineSession_1a2a71476133c92c2f641766e7a1eeed36)`(const FString & InvitedSessionId,const `[`FRHAPI_PlayerInviteRequest`](RHAPI_PlayerInviteRequest.md#structFRHAPI__PlayerInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a2a71476133c92c2f641766e7a1eeed36"></a>

Invites a different session to this session.

#### Parameters
* `InvitedSessionId` The session id to send the invite to 

* `SessionInviteRequest` Information about the invite being sent, including team information 

* `Delegate` Callback delegate for the session being updated by the invite.

#### `public virtual void `[`JoinOtherSession`](#classURH__OnlineSession_1a8a686709d5991532e0965fe576c4d118)`(const FString & TargetSessionId,const `[`FRHAPI_PlayerInviteRequest`](RHAPI_PlayerInviteRequest.md#structFRHAPI__PlayerInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a8a686709d5991532e0965fe576c4d118"></a>

This entire session is invited to/joins another session.

#### Parameters
* `TargetSessionId` The session id that you are attempting to join 

* `SessionInviteRequest` Information about the invite being sent, including team information 

* `Delegate` Callback delegate for the session being updated by the invite.

#### `public virtual void `[`KickOtherSession`](#classURH__OnlineSession_1aaea0484871603acf63a76317dd1ffe9e)`(const FString & KickedSessionId,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1aaea0484871603acf63a76317dd1ffe9e"></a>

Kicks all players in a target tsession from this session.

#### Parameters
* `KickedSessionId` The session Id to kick from this session. 

* `Delegate` Callback delegate for the session being updated by the kick.

#### `public virtual void `[`SetLeader`](#classURH__OnlineSession_1ade15c14b576cf4c5ba384bc61fe25879)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1ade15c14b576cf4c5ba384bc61fe25879"></a>

Sets a new leader for the session.

#### Parameters
* `PlayerUuid` The unique player Id to become the session leader. 

* `Delegate` Callback delegate for the session being updated by the leader change.

#### `public virtual void `[`ChangePlayerTeam`](#classURH__OnlineSession_1ab35d9139e68b21dd3ee9ed779fb37f16)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1ab35d9139e68b21dd3ee9ed779fb37f16"></a>

Changes the team a given player is associated with in the session.

#### Parameters
* `PlayerUuid` The unique player Id to invite to the session. 

* `Team` The target team that the player will be associated with in the session. 

* `Delegate` Callback delegate for the session being updated by the team change.

#### `public virtual void `[`SwapPlayerTeams`](#classURH__OnlineSession_1a84fe6960f643869d2e96966c8f7386c3)`(const FGuid & PlayerUuidA,const FGuid & PlayerUuidB,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a84fe6960f643869d2e96966c8f7386c3"></a>

Swaps the teams of a specified pair of players.

#### Parameters
* `PlayerUuidA` The first unique player id to swap 

* `PlayerUuidB` The second unique player id to swap 

* `Delegate` Callback delegate for the session being updated by the team change.

#### `public virtual void `[`UpdatePlayerCustomData`](#classURH__OnlineSession_1a8f35a3597ef47c2570e9489e62ac6d23)`(const FGuid & PlayerUuid,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a8f35a3597ef47c2570e9489e62ac6d23"></a>

Changes the session player's custom data.

#### Parameters
* `PlayerUuid` The unique player Id whose custom data will be updated 

* `CustomData` The custom data map to set the player's to 

* `Delegate` Callback delegate for the session being updated by the player update

#### `public virtual void `[`Leave`](#classURH__OnlineSession_1a58592bde912fd2c21de8906f5b88dcce)`(bool bFromOSSSession,const FString & LeaveReason,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a58592bde912fd2c21de8906f5b88dcce"></a>

Leaves the session.

#### Parameters
* `bFromOSSSession` If true, then leave the OSS Session. Otherwise, just leave the session. 

* `Delegate` Callback delegate for the session being updated by the leave.

#### `public virtual void `[`RequestInstance`](#classURH__OnlineSession_1aae906a67108cba268d73786229e8aa94)`(const `[`FRHAPI_InstanceRequest`](RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1aae906a67108cba268d73786229e8aa94"></a>

Attempt to create a new instance for the session.

#### Parameters
* `InstanceRequest` Details for the instance being requested. 

* `Delegate` Callback delegate for the session being updated with the instance creation, or failure.

#### `public virtual void `[`EndInstance`](#classURH__OnlineSession_1a38a05f415495a019c3f02fcae76317ec)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a38a05f415495a019c3f02fcae76317ec"></a>

Shutdown the existing instance for the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the instance ending.

#### `public virtual void `[`GenerateVoipLoginToken`](#classURH__OnlineSession_1aada1d23777b026c76b7e7b5bb2669b95)`(const FRH_OnSessionGetVoipTokenDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1aada1d23777b026c76b7e7b5bb2669b95"></a>

Generate a VOIP login token.

#### Parameters
* `Delegate` Callback delegate with the new voip token

#### `public virtual void `[`GenerateVoipActionToken`](#classURH__OnlineSession_1ab8b5a3517f9670f980c0dc60ad80e709)`(ERHAPI_VivoxSessionActionSingle VivoxAction,ERHAPI_VoipSessionType VoipSessionType,const FRH_OnSessionGetVoipTokenDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1ab8b5a3517f9670f980c0dc60ad80e709"></a>

Generate a VOIP action token.

#### Parameters
* `VivoxAction` The action to generate a token for 

* `VoipSessionType` The type of voip session to generate a token for 

* `Delegate` Callback delegate with the new voip token

#### `public virtual void `[`UpdateSessionInfo`](#classURH__OnlineSession_1a21428e63a1268ef552d3186cd7df9d50)`(const `[`FRHAPI_SessionUpdate`](RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a21428e63a1268ef552d3186cd7df9d50"></a>

Updates the session info.

#### Parameters
* `Update` The session info for the update. 

* `Delegate` Callback delegate for the session being updated with new session data.

#### `public virtual void `[`UpdateInstanceInfo`](#classURH__OnlineSession_1abdfc1e53b834da4afdfdce29de9b318b)`(const `[`FRHAPI_InstanceInfoUpdate`](RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1abdfc1e53b834da4afdfdce29de9b318b"></a>

Updates the sessions instance info.

#### Parameters
* `Update` The instance info for the update. 

* `Delegate` Callback delegate for the session being updated with new instance data.

#### `public virtual void `[`UpdateBrowserInfo`](#classURH__OnlineSession_1a35197db28a89b5325ef4384dca5d76c8)`(bool bEnable,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a35197db28a89b5325ef4384dca5d76c8"></a>

Updates the sessions browser info.

#### Parameters
* `bEnable` If true, sets the browser info. Otherwise, clear it out. 

* `CustomData` The new browser data for the update. 

* `Delegate` Callback delegate for the session being updated with new browser data.

#### `public virtual void `[`UpdateInstanceHealth`](#classURH__OnlineSession_1ac49edd6dd0b2987fc8b0dcb6f563f585)`(ERHAPI_InstanceHealthStatus HealthStatus,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__OnlineSession_1ac49edd6dd0b2987fc8b0dcb6f563f585"></a>

Update the instance health of the session.

#### Parameters
* `HealthStatus` The new health status of the instance 

* `Delegate` Callback delegate for completion (note - local session is not modified on health update for efficiency reasons!)

#### `public virtual void `[`AcknowledgeBackfill`](#classURH__OnlineSession_1aa087b6190e032b3d3c22c110498cd33a)`(bool bEnable,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1aa087b6190e032b3d3c22c110498cd33a"></a>

Acknowledge backfill for the session, keeping it alive and processing updates.

#### Parameters
* `bEnable` If true, keeps backfill enabled 

* `Delegate` Callback delegate for the session being updated with backfill data

#### `public virtual void `[`DeleteBackfill`](#classURH__OnlineSession_1a0e98bf0b3e205c2102364daccb7bb610)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a0e98bf0b3e205c2102364daccb7bb610"></a>

Delete active backfill request for the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with backfill data

#### `public virtual void `[`EmitAuditEvent`](#classURH__OnlineSession_1a7bdff0e988bdaa1fb3e4be2d2c8b3513)`(const `[`FRHAPI_CreateAuditRequest`](RHAPI_CreateAuditRequest.md#structFRHAPI__CreateAuditRequest)` & AuditEvent,const FRH_GenericSuccessWithErrorBlock & Delegate) const` <a id="classURH__OnlineSession_1a7bdff0e988bdaa1fb3e4be2d2c8b3513"></a>

Emit an event to the session audit log.

#### Parameters
* `AuditEvent` The event to send 

* `Delegate` Callback delegate for the completion of the audit event

## class `URH_SessionOwnerInterface` <a id="classURH__SessionOwnerInterface"></a>

```
class URH_SessionOwnerInterface
  : public UInterface
```

Session Owner Interface class.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

### Members

## class `IRH_SessionOwnerInterface` <a id="classIRH__SessionOwnerInterface"></a>

Session Owner Interface.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FAuthContextPtr `[`GetSessionAuthContext`](#classIRH__SessionOwnerInterface_1aa1ed294ad1925cb314ae59c3b9ae7a69)`() const` | Gets the auth context to use for API calls for the session owner.
`public void `[`ImportAPISession`](#classIRH__SessionOwnerInterface_1a47357a19f44fe9006ade44cd3e6961ce)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` | Imports a session object from the API into the owner (ex: from polling).
`public void `[`ImportAPITemplate`](#classIRH__SessionOwnerInterface_1ac81c6da37366c6151656aa2113eeed92)`(const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` | Imports the template into the owner's template list (ex: from polling).
`public void `[`ReconcileAPISessions`](#classIRH__SessionOwnerInterface_1ae7d9a16efdbe4ab846e44371b6700b53)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` | Updates the list of sessions to only those that are active.
`public void `[`ReconcileAPITemplates`](#classIRH__SessionOwnerInterface_1a8c884f478578ba55b83e6d3fb977e1c5)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` | Updates the list of session templates to those that are active.
`public class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classIRH__SessionOwnerInterface_1afcbfbc9e6587ce0e9399e90310d9887c)`() const` | Gets the PlayerInfo Subsystem.
`public IOnlineSubsystem * `[`GetOSS`](#classIRH__SessionOwnerInterface_1a35677a0a000e0ae22d7b8137bbc381e1)`() const` | Gets the Online Subsystem to use for OSS calls.
`public FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classIRH__SessionOwnerInterface_1ae7d146121a241b23c58cbf22cbb0debf)`() const` | Gets the Online Subsystem Unique Id to use for OSS calls.
`public FPlatformUserId `[`GetOSSPlatformUserId`](#classIRH__SessionOwnerInterface_1a3248b77fb0ec5a40669b72eb693b0822)`() const` | Gets the Online Subsystem PlatformUserId to use for OSS calls (equivalent to controller index)
`public inline virtual FGuid `[`GetPlayerUuid`](#classIRH__SessionOwnerInterface_1a50d1f47c5c9b99780330b36e6aa496b8)`() const` | Gets the Player UUID to use for player related calls (can be invalid)
`public inline TOptional< FString > `[`GetETagForSession`](#classIRH__SessionOwnerInterface_1a13dd2296717487339a1685c1ab2596b8)`(const FString & SessionId) const` | Gets the Etag for a given Session.
`public TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classIRH__SessionOwnerInterface_1aacc34272adde5af55bc11b06c8f2abab)`() const` | Gets the etag to use for a "Get all Templates" type query.
`public TOptional< FString > `[`GetETagForAllSessionsPoll`](#classIRH__SessionOwnerInterface_1a4cbac2d86e76e3be1051caed5908977a)`() const` | Gets the etag to use for a "Get all Sessions" type query.
`public TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classIRH__SessionOwnerInterface_1a3804b02f16c09b630fa8f01860f20193)`() const` | Used to get all sessions, primarily for get all sessions polling where etag matches.
`public `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classIRH__SessionOwnerInterface_1a9880cac5cad5406d4a59bc65b86c3204)`(const FString & SessionId) const` | Gets a session by its id.
`public void `[`RemoveSessionById`](#classIRH__SessionOwnerInterface_1acf42909a8b08c53d48ce3cca614348a5)`(const FString & SessionId)` | Removes a cached session for the local player, this does NOT try to leave it.
`public bool `[`GetTemplate`](#classIRH__SessionOwnerInterface_1ae474fab73509d0a00372966f39ce216b)`(const FString & Type,`[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` | Gets a session template by type.
`public `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classIRH__SessionOwnerInterface_1a60ba8c5f6d7159746220f418c0de7d61)`(const FString & SessionId) const` | Gets the platform synchronization object using the rally here session id.
`public `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classIRH__SessionOwnerInterface_1a0905f5553c7d0c7b1306a6cf4d0db8e6)`(const FUniqueNetIdRepl & SessionId) const` | Gets the platform synchronization object using the platform session id.
`public inline virtual TOptional< FString > `[`GetBoundAllocationId`](#classIRH__SessionOwnerInterface_1a01b233fdfb9d4087f274b9b0ed8e066e)`() const` | Gets the allocation id this session owner is bound to, if any. Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view.
`public inline virtual TOptional< FString > `[`GetBoundSessionId`](#classIRH__SessionOwnerInterface_1a0987fc0da97ddd1301319d380abdd29b)`() const` | Gets the session id this session owner is bound to, if any. Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view.
`public inline virtual TOptional< FString > `[`GetBoundInstanceId`](#classIRH__SessionOwnerInterface_1abfc63a5ea77ccf64294653d4f0bea4a9)`() const` | Gets the instance id this session owner is bound to, if any. Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view.

### Members

#### `public FAuthContextPtr `[`GetSessionAuthContext`](#classIRH__SessionOwnerInterface_1aa1ed294ad1925cb314ae59c3b9ae7a69)`() const` <a id="classIRH__SessionOwnerInterface_1aa1ed294ad1925cb314ae59c3b9ae7a69"></a>

Gets the auth context to use for API calls for the session owner.

#### `public void `[`ImportAPISession`](#classIRH__SessionOwnerInterface_1a47357a19f44fe9006ade44cd3e6961ce)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` <a id="classIRH__SessionOwnerInterface_1a47357a19f44fe9006ade44cd3e6961ce"></a>

Imports a session object from the API into the owner (ex: from polling).

#### Parameters
* `Session` The Session to import.

#### `public void `[`ImportAPITemplate`](#classIRH__SessionOwnerInterface_1ac81c6da37366c6151656aa2113eeed92)`(const `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` <a id="classIRH__SessionOwnerInterface_1ac81c6da37366c6151656aa2113eeed92"></a>

Imports the template into the owner's template list (ex: from polling).

#### Parameters
* `TemplateWrapper` The Template to import.

#### `public void `[`ReconcileAPISessions`](#classIRH__SessionOwnerInterface_1ae7d9a16efdbe4ab846e44371b6700b53)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` <a id="classIRH__SessionOwnerInterface_1ae7d9a16efdbe4ab846e44371b6700b53"></a>

Updates the list of sessions to only those that are active.

#### Parameters
* `SessionIds` The list of sessions that we are reconciling against. 

* `ETag` The ETag to use for the update.

#### `public void `[`ReconcileAPITemplates`](#classIRH__SessionOwnerInterface_1a8c884f478578ba55b83e6d3fb977e1c5)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` <a id="classIRH__SessionOwnerInterface_1a8c884f478578ba55b83e6d3fb977e1c5"></a>

Updates the list of session templates to those that are active.

#### Parameters
* `InTemplates` The list of templates that we are reconciling against. 

* `ETag` The ETag to use for the update.

#### `public class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classIRH__SessionOwnerInterface_1afcbfbc9e6587ce0e9399e90310d9887c)`() const` <a id="classIRH__SessionOwnerInterface_1afcbfbc9e6587ce0e9399e90310d9887c"></a>

Gets the PlayerInfo Subsystem.

#### `public IOnlineSubsystem * `[`GetOSS`](#classIRH__SessionOwnerInterface_1a35677a0a000e0ae22d7b8137bbc381e1)`() const` <a id="classIRH__SessionOwnerInterface_1a35677a0a000e0ae22d7b8137bbc381e1"></a>

Gets the Online Subsystem to use for OSS calls.

#### `public FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classIRH__SessionOwnerInterface_1ae7d146121a241b23c58cbf22cbb0debf)`() const` <a id="classIRH__SessionOwnerInterface_1ae7d146121a241b23c58cbf22cbb0debf"></a>

Gets the Online Subsystem Unique Id to use for OSS calls.

#### `public FPlatformUserId `[`GetOSSPlatformUserId`](#classIRH__SessionOwnerInterface_1a3248b77fb0ec5a40669b72eb693b0822)`() const` <a id="classIRH__SessionOwnerInterface_1a3248b77fb0ec5a40669b72eb693b0822"></a>

Gets the Online Subsystem PlatformUserId to use for OSS calls (equivalent to controller index)

#### `public inline virtual FGuid `[`GetPlayerUuid`](#classIRH__SessionOwnerInterface_1a50d1f47c5c9b99780330b36e6aa496b8)`() const` <a id="classIRH__SessionOwnerInterface_1a50d1f47c5c9b99780330b36e6aa496b8"></a>

Gets the Player UUID to use for player related calls (can be invalid)

#### `public inline TOptional< FString > `[`GetETagForSession`](#classIRH__SessionOwnerInterface_1a13dd2296717487339a1685c1ab2596b8)`(const FString & SessionId) const` <a id="classIRH__SessionOwnerInterface_1a13dd2296717487339a1685c1ab2596b8"></a>

Gets the Etag for a given Session.

#### Parameters
* `SessionId` The Session Id to get the ETag for. 

#### Returns
The ETag for the session.

#### `public TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classIRH__SessionOwnerInterface_1aacc34272adde5af55bc11b06c8f2abab)`() const` <a id="classIRH__SessionOwnerInterface_1aacc34272adde5af55bc11b06c8f2abab"></a>

Gets the etag to use for a "Get all Templates" type query.

#### `public TOptional< FString > `[`GetETagForAllSessionsPoll`](#classIRH__SessionOwnerInterface_1a4cbac2d86e76e3be1051caed5908977a)`() const` <a id="classIRH__SessionOwnerInterface_1a4cbac2d86e76e3be1051caed5908977a"></a>

Gets the etag to use for a "Get all Sessions" type query.

#### `public TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classIRH__SessionOwnerInterface_1a3804b02f16c09b630fa8f01860f20193)`() const` <a id="classIRH__SessionOwnerInterface_1a3804b02f16c09b630fa8f01860f20193"></a>

Used to get all sessions, primarily for get all sessions polling where etag matches.

#### `public `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classIRH__SessionOwnerInterface_1a9880cac5cad5406d4a59bc65b86c3204)`(const FString & SessionId) const` <a id="classIRH__SessionOwnerInterface_1a9880cac5cad5406d4a59bc65b86c3204"></a>

Gets a session by its id.

#### Parameters
* `SessionId` The Session Id to get. 

#### Returns
The Session with the given Id.

#### `public void `[`RemoveSessionById`](#classIRH__SessionOwnerInterface_1acf42909a8b08c53d48ce3cca614348a5)`(const FString & SessionId)` <a id="classIRH__SessionOwnerInterface_1acf42909a8b08c53d48ce3cca614348a5"></a>

Removes a cached session for the local player, this does NOT try to leave it.

#### Parameters
* `SessionId` The Session Id to remove.

#### `public bool `[`GetTemplate`](#classIRH__SessionOwnerInterface_1ae474fab73509d0a00372966f39ce216b)`(const FString & Type,`[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` <a id="classIRH__SessionOwnerInterface_1ae474fab73509d0a00372966f39ce216b"></a>

Gets a session template by type.

#### Parameters
* `Type` the Type of template to get. 

* `Template` The session template being retrieved. 

#### Returns
If true, the template was found.

#### `public `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classIRH__SessionOwnerInterface_1a60ba8c5f6d7159746220f418c0de7d61)`(const FString & SessionId) const` <a id="classIRH__SessionOwnerInterface_1a60ba8c5f6d7159746220f418c0de7d61"></a>

Gets the platform synchronization object using the rally here session id.

#### `public `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classIRH__SessionOwnerInterface_1a0905f5553c7d0c7b1306a6cf4d0db8e6)`(const FUniqueNetIdRepl & SessionId) const` <a id="classIRH__SessionOwnerInterface_1a0905f5553c7d0c7b1306a6cf4d0db8e6"></a>

Gets the platform synchronization object using the platform session id.

#### `public inline virtual TOptional< FString > `[`GetBoundAllocationId`](#classIRH__SessionOwnerInterface_1a01b233fdfb9d4087f274b9b0ed8e066e)`() const` <a id="classIRH__SessionOwnerInterface_1a01b233fdfb9d4087f274b9b0ed8e066e"></a>

Gets the allocation id this session owner is bound to, if any. Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view.

#### `public inline virtual TOptional< FString > `[`GetBoundSessionId`](#classIRH__SessionOwnerInterface_1a0987fc0da97ddd1301319d380abdd29b)`() const` <a id="classIRH__SessionOwnerInterface_1a0987fc0da97ddd1301319d380abdd29b"></a>

Gets the session id this session owner is bound to, if any. Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view.

#### `public inline virtual TOptional< FString > `[`GetBoundInstanceId`](#classIRH__SessionOwnerInterface_1abfc63a5ea77ccf64294653d4f0bea4a9)`() const` <a id="classIRH__SessionOwnerInterface_1abfc63a5ea77ccf64294653d4f0bea4a9"></a>

Gets the instance id this session owner is bound to, if any. Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view.

## struct `FRH_SessionBrowserSearchParams` <a id="structFRH__SessionBrowserSearchParams"></a>

Struct containing the search paramaters for Session Browsers.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionType`](#structFRH__SessionBrowserSearchParams_1a25ef289d60be155f1caeaddd19c5cc0a) | The Type of Session to search for.
`public FString `[`RegionId`](#structFRH__SessionBrowserSearchParams_1ae4ca9ef983382c2eb381ed4f0ad521c8) | The Region ID of Session to search for.
`public TArray< FString > `[`SessionIds`](#structFRH__SessionBrowserSearchParams_1a323e62b2ff94b8be30c0fb7b92914568) | If specified, skip search lookup and instead query these specific session ids.
`public int32 `[`Cursor`](#structFRH__SessionBrowserSearchParams_1a987cdfb2a54b641a8724c578d4900bfc) | The indicator of what page to request of results.
`public int32 `[`PageSize`](#structFRH__SessionBrowserSearchParams_1a8de9c480f8dedf19d415e564fe201e96) | The size of each page of results.
`public bool `[`bCacheSessionDetails`](#structFRH__SessionBrowserSearchParams_1ac0749ac4e9ddb43e11b231fe31b08758) | Whether to query and cache the session data from the search result.
`public inline  `[`FRH_SessionBrowserSearchParams`](#structFRH__SessionBrowserSearchParams_1ac8b5657a750ea3b355f344334f9048c0)`()` | Default constructor.
`public inline FString `[`GetDescription`](#structFRH__SessionBrowserSearchParams_1af1c20cb69cc90ba84f385b67489bae24)`() const` | Returns display of search params for toolings/logging.

### Members

#### `public FString `[`SessionType`](#structFRH__SessionBrowserSearchParams_1a25ef289d60be155f1caeaddd19c5cc0a) <a id="structFRH__SessionBrowserSearchParams_1a25ef289d60be155f1caeaddd19c5cc0a"></a>

The Type of Session to search for.

#### `public FString `[`RegionId`](#structFRH__SessionBrowserSearchParams_1ae4ca9ef983382c2eb381ed4f0ad521c8) <a id="structFRH__SessionBrowserSearchParams_1ae4ca9ef983382c2eb381ed4f0ad521c8"></a>

The Region ID of Session to search for.

#### `public TArray< FString > `[`SessionIds`](#structFRH__SessionBrowserSearchParams_1a323e62b2ff94b8be30c0fb7b92914568) <a id="structFRH__SessionBrowserSearchParams_1a323e62b2ff94b8be30c0fb7b92914568"></a>

If specified, skip search lookup and instead query these specific session ids.

#### `public int32 `[`Cursor`](#structFRH__SessionBrowserSearchParams_1a987cdfb2a54b641a8724c578d4900bfc) <a id="structFRH__SessionBrowserSearchParams_1a987cdfb2a54b641a8724c578d4900bfc"></a>

The indicator of what page to request of results.

#### `public int32 `[`PageSize`](#structFRH__SessionBrowserSearchParams_1a8de9c480f8dedf19d415e564fe201e96) <a id="structFRH__SessionBrowserSearchParams_1a8de9c480f8dedf19d415e564fe201e96"></a>

The size of each page of results.

#### `public bool `[`bCacheSessionDetails`](#structFRH__SessionBrowserSearchParams_1ac0749ac4e9ddb43e11b231fe31b08758) <a id="structFRH__SessionBrowserSearchParams_1ac0749ac4e9ddb43e11b231fe31b08758"></a>

Whether to query and cache the session data from the search result.

#### `public inline  `[`FRH_SessionBrowserSearchParams`](#structFRH__SessionBrowserSearchParams_1ac8b5657a750ea3b355f344334f9048c0)`()` <a id="structFRH__SessionBrowserSearchParams_1ac8b5657a750ea3b355f344334f9048c0"></a>

Default constructor.

#### `public inline FString `[`GetDescription`](#structFRH__SessionBrowserSearchParams_1af1c20cb69cc90ba84f385b67489bae24)`() const` <a id="structFRH__SessionBrowserSearchParams_1af1c20cb69cc90ba84f385b67489bae24"></a>

Returns display of search params for toolings/logging.

## struct `FRH_SessionMemberStatusState` <a id="structFRH__SessionMemberStatusState"></a>

Utility struct to wrapper a player state for a player state update change.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRH__SessionMemberStatusState_1a76d37d922b396d305d81cb664474f6fe) | Player Uuid for this state.
`public bool `[`bIsValid`](#structFRH__SessionMemberStatusState_1aebc9381743eb320abfa3cc00b4013c79) | Whether the state is valid (a state is not valid if a player is not associated with the session)
`public ERHAPI_SessionPlayerStatus `[`Status`](#structFRH__SessionMemberStatusState_1a68299be55e4a6990bc104962858a5520) | Status of the player at the time of recording the state.
`public int32 `[`TeamId`](#structFRH__SessionMemberStatusState_1a97294b0f0dda906b3730bc83851b0f17) | Team of the player at the time of recording the state.
`public inline  `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState_1a1202bc97c79d5343b0fcdc562c7c5ab3)`()` | Default Constructor.
`public inline FORCEINLINE bool `[`operator==`](#structFRH__SessionMemberStatusState_1ae90f45dc88b07c0f189043b55d5aedd6)`(const `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState)` & Comparator) const` | Equivalence check used to determine if a notification should be dispatched.
`public inline FORCEINLINE bool `[`operator!=`](#structFRH__SessionMemberStatusState_1ad1dc9f123f6021dfe08d8edb2b37bd56)`(const `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState)` & Comparator) const` | Inequivalence check used to determine if a notification should be dispatched.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRH__SessionMemberStatusState_1a76d37d922b396d305d81cb664474f6fe) <a id="structFRH__SessionMemberStatusState_1a76d37d922b396d305d81cb664474f6fe"></a>

Player Uuid for this state.

#### `public bool `[`bIsValid`](#structFRH__SessionMemberStatusState_1aebc9381743eb320abfa3cc00b4013c79) <a id="structFRH__SessionMemberStatusState_1aebc9381743eb320abfa3cc00b4013c79"></a>

Whether the state is valid (a state is not valid if a player is not associated with the session)

#### `public ERHAPI_SessionPlayerStatus `[`Status`](#structFRH__SessionMemberStatusState_1a68299be55e4a6990bc104962858a5520) <a id="structFRH__SessionMemberStatusState_1a68299be55e4a6990bc104962858a5520"></a>

Status of the player at the time of recording the state.

#### `public int32 `[`TeamId`](#structFRH__SessionMemberStatusState_1a97294b0f0dda906b3730bc83851b0f17) <a id="structFRH__SessionMemberStatusState_1a97294b0f0dda906b3730bc83851b0f17"></a>

Team of the player at the time of recording the state.

#### `public inline  `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState_1a1202bc97c79d5343b0fcdc562c7c5ab3)`()` <a id="structFRH__SessionMemberStatusState_1a1202bc97c79d5343b0fcdc562c7c5ab3"></a>

Default Constructor.

#### `public inline FORCEINLINE bool `[`operator==`](#structFRH__SessionMemberStatusState_1ae90f45dc88b07c0f189043b55d5aedd6)`(const `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState)` & Comparator) const` <a id="structFRH__SessionMemberStatusState_1ae90f45dc88b07c0f189043b55d5aedd6"></a>

Equivalence check used to determine if a notification should be dispatched.

#### `public inline FORCEINLINE bool `[`operator!=`](#structFRH__SessionMemberStatusState_1ad1dc9f123f6021dfe08d8edb2b37bd56)`(const `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState)` & Comparator) const` <a id="structFRH__SessionMemberStatusState_1ad1dc9f123f6021dfe08d8edb2b37bd56"></a>

Inequivalence check used to determine if a notification should be dispatched.

## struct `TRH_DataWithETagWrapper` <a id="structTRH__DataWithETagWrapper"></a>

Utility struct to wrapper the tuple of a data typeand etag.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public T `[`Data`](#structTRH__DataWithETagWrapper_1a2960467e896ec054570d055fdaa49ca6) | The wrapped Data.
`public TOptional< FString > `[`ETag`](#structTRH__DataWithETagWrapper_1a1ddb3e8c57e0c49da601cea440987522) | The Datas ETag.
`public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a5071c87ca10290a49539caf502f9301c)`()` | Default Constructor.
`public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a56dcc8d95327b8f997aab3333a80db31)`(const T & InData)` | Various constructors for ease of use.
`public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a0a496e654507008eae1e66bd281b6bd9)`(T && InData)` | Various constructors for ease of use.
`public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a1e094404d0d2660d00d0cdd766e3dbc7)`(T & InData,const FString & InETag)` | Various constructors for ease of use.
`public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1adc0a8ee56c5cbfdb04e5183f9151e92d)`(T && InData,FString && InETag)` | Various constructors for ease of use.
`public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1ae98dfaed26e4adcff0f40c9130c8d654)`(const T & InData,const TOptional< FString > & InETag)` | Various constructors for ease of use.
`public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a66563f74c8068348407e8a1635e5a3f0)`(T && InData,TOptional< FString > && InETag)` | Various constructors for ease of use.

### Members

#### `public T `[`Data`](#structTRH__DataWithETagWrapper_1a2960467e896ec054570d055fdaa49ca6) <a id="structTRH__DataWithETagWrapper_1a2960467e896ec054570d055fdaa49ca6"></a>

The wrapped Data.

#### `public TOptional< FString > `[`ETag`](#structTRH__DataWithETagWrapper_1a1ddb3e8c57e0c49da601cea440987522) <a id="structTRH__DataWithETagWrapper_1a1ddb3e8c57e0c49da601cea440987522"></a>

The Datas ETag.

#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a5071c87ca10290a49539caf502f9301c)`()` <a id="structTRH__DataWithETagWrapper_1a5071c87ca10290a49539caf502f9301c"></a>

Default Constructor.

#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a56dcc8d95327b8f997aab3333a80db31)`(const T & InData)` <a id="structTRH__DataWithETagWrapper_1a56dcc8d95327b8f997aab3333a80db31"></a>

Various constructors for ease of use.

#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a0a496e654507008eae1e66bd281b6bd9)`(T && InData)` <a id="structTRH__DataWithETagWrapper_1a0a496e654507008eae1e66bd281b6bd9"></a>

Various constructors for ease of use.

#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a1e094404d0d2660d00d0cdd766e3dbc7)`(T & InData,const FString & InETag)` <a id="structTRH__DataWithETagWrapper_1a1e094404d0d2660d00d0cdd766e3dbc7"></a>

Various constructors for ease of use.

#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1adc0a8ee56c5cbfdb04e5183f9151e92d)`(T && InData,FString && InETag)` <a id="structTRH__DataWithETagWrapper_1adc0a8ee56c5cbfdb04e5183f9151e92d"></a>

Various constructors for ease of use.

#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1ae98dfaed26e4adcff0f40c9130c8d654)`(const T & InData,const TOptional< FString > & InETag)` <a id="structTRH__DataWithETagWrapper_1ae98dfaed26e4adcff0f40c9130c8d654"></a>

Various constructors for ease of use.

#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a66563f74c8068348407e8a1635e5a3f0)`(T && InData,TOptional< FString > && InETag)` <a id="structTRH__DataWithETagWrapper_1a66563f74c8068348407e8a1635e5a3f0"></a>

Various constructors for ease of use.

## struct `FRH_DeferredSessionPoll` <a id="structFRH__DeferredSessionPoll"></a>

Poll for deferred sessions.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public Type `[`PollType`](#structFRH__DeferredSessionPoll_1a1b6e4728b244a5a51a57a24f9b7980f7) | 
`public TOptional< FString > `[`ETag`](#structFRH__DeferredSessionPoll_1a1cf5a6766199ca4c859b30dff02f99e9) | 
`public inline  `[`FRH_DeferredSessionPoll`](#structFRH__DeferredSessionPoll_1af7f09aea5ebde9c12e52431272c8470b)`(Type InPollType,const FRH_PollCompleteFunc & InDelegate,const TOptional< FString > & InETag)` | 
`public inline  `[`FRH_DeferredSessionPoll`](#structFRH__DeferredSessionPoll_1a14045ccc6de4f9a6b2b1092bcfe315ba)`(Type InPollType,const FRH_GenericSuccessWithErrorBlock & InDelegate,const TOptional< FString > & InETag)` | 
`public inline bool `[`IsDelegateBound`](#structFRH__DeferredSessionPoll_1aa0f535c90428704ed1e261d1a8b28dfe)`() const` | 
`public inline void `[`TriggerDelegates`](#structFRH__DeferredSessionPoll_1a2fed559c7d4800f9108a3d3b74cadcd7)`(bool bSuccess,bool bRepeatTimer,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` & ErrorInfo) const` | 
`enum `[`Type`](#structFRH__DeferredSessionPoll_1aea2383ee336ab25c2f43466ea767a4b1) | 

### Members

#### `public Type `[`PollType`](#structFRH__DeferredSessionPoll_1a1b6e4728b244a5a51a57a24f9b7980f7) <a id="structFRH__DeferredSessionPoll_1a1b6e4728b244a5a51a57a24f9b7980f7"></a>

#### `public TOptional< FString > `[`ETag`](#structFRH__DeferredSessionPoll_1a1cf5a6766199ca4c859b30dff02f99e9) <a id="structFRH__DeferredSessionPoll_1a1cf5a6766199ca4c859b30dff02f99e9"></a>

#### `public inline  `[`FRH_DeferredSessionPoll`](#structFRH__DeferredSessionPoll_1af7f09aea5ebde9c12e52431272c8470b)`(Type InPollType,const FRH_PollCompleteFunc & InDelegate,const TOptional< FString > & InETag)` <a id="structFRH__DeferredSessionPoll_1af7f09aea5ebde9c12e52431272c8470b"></a>

#### `public inline  `[`FRH_DeferredSessionPoll`](#structFRH__DeferredSessionPoll_1a14045ccc6de4f9a6b2b1092bcfe315ba)`(Type InPollType,const FRH_GenericSuccessWithErrorBlock & InDelegate,const TOptional< FString > & InETag)` <a id="structFRH__DeferredSessionPoll_1a14045ccc6de4f9a6b2b1092bcfe315ba"></a>

#### `public inline bool `[`IsDelegateBound`](#structFRH__DeferredSessionPoll_1aa0f535c90428704ed1e261d1a8b28dfe)`() const` <a id="structFRH__DeferredSessionPoll_1aa0f535c90428704ed1e261d1a8b28dfe"></a>

#### `public inline void `[`TriggerDelegates`](#structFRH__DeferredSessionPoll_1a2fed559c7d4800f9108a3d3b74cadcd7)`(bool bSuccess,bool bRepeatTimer,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` & ErrorInfo) const` <a id="structFRH__DeferredSessionPoll_1a2fed559c7d4800f9108a3d3b74cadcd7"></a>

#### `enum `[`Type`](#structFRH__DeferredSessionPoll_1aea2383ee336ab25c2f43466ea767a4b1) <a id="structFRH__DeferredSessionPoll_1aea2383ee336ab25c2f43466ea767a4b1"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
Forced            | 
Modification            | 
Notification            | 

