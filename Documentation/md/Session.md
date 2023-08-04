# Session <a id="group__Session"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_PlatformSessionSyncerCleanupDelegate `[`OnCleanupComplete`](#classURH__PlatformSessionSyncer_1acca86ac7134db510dd4dcb00658374dd) | Notification delegates for when cleanup of this object has completed.
`public FRH_PlatformSessionSyncerCleanupDynamicDelegate `[`BLUEPRINT_OnCleanupComplete`](#classURH__PlatformSessionSyncer_1a3be5a8c4afc63c37631b32ab867af2ba) | 
`public bool `[`Initialize`](#classURH__PlatformSessionSyncer_1a672a8526678c8c22c968c2eb5d5f1334)`(const FString & InSessionId,FRH_SessionOwnerPtr InOwner)` | Initialize the sycnrhonization object with a RallyHere session id and a session owner - requires that the owner contain that session.
`public void `[`Cleanup`](#classURH__PlatformSessionSyncer_1a244f7e6772600a350181547298ff7308)`(FSimpleDelegate CompletionDelegate)` | Clean up the synchronization object, typically used when the RallyHere session is expired.
`public inline FORCEINLINE FString `[`GetRHSessionId`](#classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08)`() const` | Get the RallyHere session id that this object is synchronizing to.
`public `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetRHSession`](#classURH__PlatformSessionSyncer_1abbbb6806febc6f9096820a7cef2328e2)`() const` | Helper function to get the RallyHere session objcet from the session owner (based on the result of [GetRHSessionId()](Session.md#classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08))
`public bool `[`GetPlatformSessionIdFromRHSession`](#classURH__PlatformSessionSyncer_1a43614d0e4ce01e0b184aa25f30290544)`(FUniqueNetIdRepl & PlatformSessionId) const` | Helper function to get the Platform Session Id from the RallyHere session object (based on the result of [GetRHSession()](Session.md#classURH__PlatformSessionSyncer_1abbbb6806febc6f9096820a7cef2328e2))
`public FNamedOnlineSession * `[`GetPlatformSession`](#classURH__PlatformSessionSyncer_1ab67a1eed0ca3fe1c09672f3de8fcb44c)`() const` | Get the platform session object that this object is synchronizing to from the OnlineSubsystem.
`public bool `[`GetPlatformSessionIdFromPlatformSession`](#classURH__PlatformSessionSyncer_1a6be06ee04e5ea7001ed014cc1fbbec65)`(FUniqueNetIdRepl & PlatformSessionId) const` | Helper function to get the Platform Session Id from the platform session object (based on the result of [GetPlatformSession()](Session.md#classURH__PlatformSessionSyncer_1ab67a1eed0ca3fe1c09672f3de8fcb44c))
`public inline TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`GetSessionOwner`](#classURH__PlatformSessionSyncer_1a93019be39c8791d4b38444fb211bd358)`() const` | Get the session owner interface that this object is using to look up session information.
`public bool `[`IsLocalPlayerScout`](#classURH__PlatformSessionSyncer_1a762dcd01299ad8ff18492cb77866f2e3)`() const` | Get whether the local player is the "scout" - the player responsible for creation of the platform session if one does not exist.
`public inline bool `[`IsCleaningUp`](#classURH__PlatformSessionSyncer_1a56fab737635bb1cb79148b48367c0c67)`() const` | Whether this object is in the process of, or has completed, cleanup.
`public bool `[`StartPlatformSession`](#classURH__PlatformSessionSyncer_1a124cb07781977a4bdcbb0e02151ed8ff)`()` | Marks the session as started (note - asynchronous)
`public bool `[`EndPlatformSession`](#classURH__PlatformSessionSyncer_1aa5839bbbc6243e4351a8cfa082c1f5a7)`()` | Marks the session as ended (note - asynchronous)
`public void `[`OnPlatformSessionCreated`](#classURH__PlatformSessionSyncer_1a27b57b55c768d340784fa44fc2ef1bfd)`(bool bSuccess)` | Notification helper to let the synchronization object know that a session has been created (from the session owner, as the synchronization object does not bind the callback directly)
`public void `[`OnPlatformSessionJoined`](#classURH__PlatformSessionSyncer_1aa2d3a6eb494d85aa059580f39c23a48f)`(EOnJoinSessionCompleteResult::Type Result)` | Notification helper to let the synchronization object know that a session has been joined (from the session owner, as the synchronization object does not bind the callback directly)
`public void `[`OnPlatformSessionStarted`](#classURH__PlatformSessionSyncer_1abd85032c4a9c68852f20cef487df1eca)`(bool bSuccess)` | Notification helper to let the synchronization object know that a session has been started (from the session owner, as the synchronization object does not bind the callback directly)
`public void `[`OnPlatformSessionEnded`](#classURH__PlatformSessionSyncer_1a54870f9e337e72d2dffaf64d138ee53a)`(bool bSuccess)` | Notification helper to let the synchronization object know that a session has been ended (from the session owner, as the synchronization object does not bind the callback directly)
`public void `[`OnPlatformSessionDestroyed`](#classURH__PlatformSessionSyncer_1a7ac6006922d5d82af25b2a79edd00dd4)`(bool bSuccess)` | Notification helper to let the synchronization object know that a session has been destroyed (from the session owner, as the synchronization object does not bind the callback directly)
`protected `[`ESyncActionState`](Session.md#classURH__PlatformSessionSyncer_1a816ad7c372b612eeee431e84824ebfe3)` `[`CurrentSyncActionState`](#classURH__PlatformSessionSyncer_1a0a8fd13fe93d1aac1b94e7dc0e3715ea) | The current state of the syncer.
`protected FRH_SessionOwnerPtr `[`SessionOwner`](#classURH__PlatformSessionSyncer_1abdc13532c721a2d0593b177ae19833e5) | Owner of the session.
`protected FString `[`RHSessionId`](#classURH__PlatformSessionSyncer_1a2782a9152c7bf68ed0bd908b95c4301f) | Rally Here session Id.
`protected FName `[`OSSSessionName`](#classURH__PlatformSessionSyncer_1ac4bc77d7e8275889c8050bf1a09f2e97) | Name of the session.
`protected ERHAPI_Platform `[`RHPlatform`](#classURH__PlatformSessionSyncer_1ae2dda53f9229c02025c41c2203792892) | Internal platoform for the session.
`protected void `[`OnRHSessionUpdated`](#classURH__PlatformSessionSyncer_1a6359fb4330ea231ed32cb6b66e5ff270)`(`[`URH_SessionView`](Session.md#classURH__SessionView)` * UpdatedSession)` | Handler for whenever the associated session is updated.
`protected void `[`CheckState`](#classURH__PlatformSessionSyncer_1a23d3f73c7f9620cc04ad9457400a46d1)`()` | Check our current state against the session, and decide if we need to take any action.
`protected void `[`KickOffState`](#classURH__PlatformSessionSyncer_1a7ef1b9e41501848a79253d0a62fe8119)`(`[`ESyncActionState`](Session.md#classURH__PlatformSessionSyncer_1a816ad7c372b612eeee431e84824ebfe3)` NewState)` | Change to a new state.
`protected void `[`SyncActionComplete`](#classURH__PlatformSessionSyncer_1a2d6a7ac31e0470a8ec4bcdf637fa204d)`(bool bSuccess,bool bDeferFrame)` | Called when a Sync Action State is complete.
`protected void `[`UpdateRHSessionWithPlatformSession`](#classURH__PlatformSessionSyncer_1af1460c25debaae4ef6958ada55140843)`()` | Take in information from the paired platform session into the RH Session.
`protected void `[`CreatePlatformSession`](#classURH__PlatformSessionSyncer_1aacf5f48f7753b2c6c66ad52576cbfbe3)`()` | Create a platform session.
`protected void `[`JoinPlatformSession`](#classURH__PlatformSessionSyncer_1aeac06615a567b2e73b5a79fc7ce8a6c0)`()` | Join the platform session.
`protected void `[`JoinFoundPlatformSession`](#classURH__PlatformSessionSyncer_1a7b27580005c373e833f4ef6a0d2d0c0e)`(const FOnlineSessionSearchResult & SearchResult)` | Used by Join Platform session once found to join it.
`protected void `[`LeavePlatformSession`](#classURH__PlatformSessionSyncer_1acbc88c14786ecb679597e29f6e22bda1)`()` | Leave the platform session.
`protected void `[`CleanupInternal`](#classURH__PlatformSessionSyncer_1ab563c8c76edbbe9057cc2c161f271e73)`()` | Cleanup internal state of the session syncer.
`protected bool `[`SetSyncActionState`](#classURH__PlatformSessionSyncer_1a9685c5095ebbaaa49b439861f3082359)`(`[`ESyncActionState`](Session.md#classURH__PlatformSessionSyncer_1a816ad7c372b612eeee431e84824ebfe3)` NewState)` | Sets the new action state for the syncer.
`protected FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__PlatformSessionSyncer_1ada23b9a95b86f976e421bf6ba732d384)`() const` | Get the unique net id of the session owner.
`protected IOnlineSubsystem * `[`GetOSS`](#classURH__PlatformSessionSyncer_1a8ba6d2d73795cff4c03cd40d6d505f15)`() const` | Get the online subsystem for the platform session.
`protected IOnlineSessionPtr `[`GetOSSSessionInterface`](#classURH__PlatformSessionSyncer_1a65c98263b904836a4842d18c5db84450)`() const` | Get the online subsystem session interface for the platform session.

#### Members

#### `public FRH_PlatformSessionSyncerCleanupDelegate `[`OnCleanupComplete`](#classURH__PlatformSessionSyncer_1acca86ac7134db510dd4dcb00658374dd) <a id="classURH__PlatformSessionSyncer_1acca86ac7134db510dd4dcb00658374dd"></a>

Notification delegates for when cleanup of this object has completed.

<br>
#### `public FRH_PlatformSessionSyncerCleanupDynamicDelegate `[`BLUEPRINT_OnCleanupComplete`](#classURH__PlatformSessionSyncer_1a3be5a8c4afc63c37631b32ab867af2ba) <a id="classURH__PlatformSessionSyncer_1a3be5a8c4afc63c37631b32ab867af2ba"></a>

<br>
#### `public bool `[`Initialize`](#classURH__PlatformSessionSyncer_1a672a8526678c8c22c968c2eb5d5f1334)`(const FString & InSessionId,FRH_SessionOwnerPtr InOwner)` <a id="classURH__PlatformSessionSyncer_1a672a8526678c8c22c968c2eb5d5f1334"></a>

Initialize the sycnrhonization object with a RallyHere session id and a session owner - requires that the owner contain that session.

#### Parameters
* `InSessionId` The Rally Here session id for which we are synchronizing state 

* `InOwner` Session owner interface for use in looking up the session and other information 

#### Returns
Whether initialization was successful. If initialization was successful, [Cleanup()](Session.md#classURH__PlatformSessionSyncer_1a244f7e6772600a350181547298ff7308) must be called to properly clean up state

<br>
#### `public void `[`Cleanup`](#classURH__PlatformSessionSyncer_1a244f7e6772600a350181547298ff7308)`(FSimpleDelegate CompletionDelegate)` <a id="classURH__PlatformSessionSyncer_1a244f7e6772600a350181547298ff7308"></a>

Clean up the synchronization object, typically used when the RallyHere session is expired.

#### Parameters
* `CompletionDelegate` Delegate to call when cleanup is complete

<br>
#### `public inline FORCEINLINE FString `[`GetRHSessionId`](#classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08)`() const` <a id="classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08"></a>

Get the RallyHere session id that this object is synchronizing to.

<br>
#### `public `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetRHSession`](#classURH__PlatformSessionSyncer_1abbbb6806febc6f9096820a7cef2328e2)`() const` <a id="classURH__PlatformSessionSyncer_1abbbb6806febc6f9096820a7cef2328e2"></a>

Helper function to get the RallyHere session objcet from the session owner (based on the result of [GetRHSessionId()](Session.md#classURH__PlatformSessionSyncer_1aa02905d5d2f2951c693d6ff1ac9a9e08))

<br>
#### `public bool `[`GetPlatformSessionIdFromRHSession`](#classURH__PlatformSessionSyncer_1a43614d0e4ce01e0b184aa25f30290544)`(FUniqueNetIdRepl & PlatformSessionId) const` <a id="classURH__PlatformSessionSyncer_1a43614d0e4ce01e0b184aa25f30290544"></a>

Helper function to get the Platform Session Id from the RallyHere session object (based on the result of [GetRHSession()](Session.md#classURH__PlatformSessionSyncer_1abbbb6806febc6f9096820a7cef2328e2))

#### Parameters
* `PlatformSessionId` The platform session id to fill in 

#### Returns
Whether the platform session id was successfully filled in

<br>
#### `public FNamedOnlineSession * `[`GetPlatformSession`](#classURH__PlatformSessionSyncer_1ab67a1eed0ca3fe1c09672f3de8fcb44c)`() const` <a id="classURH__PlatformSessionSyncer_1ab67a1eed0ca3fe1c09672f3de8fcb44c"></a>

Get the platform session object that this object is synchronizing to from the OnlineSubsystem.

<br>
#### `public bool `[`GetPlatformSessionIdFromPlatformSession`](#classURH__PlatformSessionSyncer_1a6be06ee04e5ea7001ed014cc1fbbec65)`(FUniqueNetIdRepl & PlatformSessionId) const` <a id="classURH__PlatformSessionSyncer_1a6be06ee04e5ea7001ed014cc1fbbec65"></a>

Helper function to get the Platform Session Id from the platform session object (based on the result of [GetPlatformSession()](Session.md#classURH__PlatformSessionSyncer_1ab67a1eed0ca3fe1c09672f3de8fcb44c))

#### Parameters
* `PlatformSessionId` The platform session id to fill in 

#### Returns
Whether the platform session id was successfully filled in

<br>
#### `public inline TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`GetSessionOwner`](#classURH__PlatformSessionSyncer_1a93019be39c8791d4b38444fb211bd358)`() const` <a id="classURH__PlatformSessionSyncer_1a93019be39c8791d4b38444fb211bd358"></a>

Get the session owner interface that this object is using to look up session information.

<br>
#### `public bool `[`IsLocalPlayerScout`](#classURH__PlatformSessionSyncer_1a762dcd01299ad8ff18492cb77866f2e3)`() const` <a id="classURH__PlatformSessionSyncer_1a762dcd01299ad8ff18492cb77866f2e3"></a>

Get whether the local player is the "scout" - the player responsible for creation of the platform session if one does not exist.

<br>
#### `public inline bool `[`IsCleaningUp`](#classURH__PlatformSessionSyncer_1a56fab737635bb1cb79148b48367c0c67)`() const` <a id="classURH__PlatformSessionSyncer_1a56fab737635bb1cb79148b48367c0c67"></a>

Whether this object is in the process of, or has completed, cleanup.

<br>
#### `public bool `[`StartPlatformSession`](#classURH__PlatformSessionSyncer_1a124cb07781977a4bdcbb0e02151ed8ff)`()` <a id="classURH__PlatformSessionSyncer_1a124cb07781977a4bdcbb0e02151ed8ff"></a>

Marks the session as started (note - asynchronous)

<br>
#### `public bool `[`EndPlatformSession`](#classURH__PlatformSessionSyncer_1aa5839bbbc6243e4351a8cfa082c1f5a7)`()` <a id="classURH__PlatformSessionSyncer_1aa5839bbbc6243e4351a8cfa082c1f5a7"></a>

Marks the session as ended (note - asynchronous)

<br>
#### `public void `[`OnPlatformSessionCreated`](#classURH__PlatformSessionSyncer_1a27b57b55c768d340784fa44fc2ef1bfd)`(bool bSuccess)` <a id="classURH__PlatformSessionSyncer_1a27b57b55c768d340784fa44fc2ef1bfd"></a>

Notification helper to let the synchronization object know that a session has been created (from the session owner, as the synchronization object does not bind the callback directly)

<br>
#### `public void `[`OnPlatformSessionJoined`](#classURH__PlatformSessionSyncer_1aa2d3a6eb494d85aa059580f39c23a48f)`(EOnJoinSessionCompleteResult::Type Result)` <a id="classURH__PlatformSessionSyncer_1aa2d3a6eb494d85aa059580f39c23a48f"></a>

Notification helper to let the synchronization object know that a session has been joined (from the session owner, as the synchronization object does not bind the callback directly)

<br>
#### `public void `[`OnPlatformSessionStarted`](#classURH__PlatformSessionSyncer_1abd85032c4a9c68852f20cef487df1eca)`(bool bSuccess)` <a id="classURH__PlatformSessionSyncer_1abd85032c4a9c68852f20cef487df1eca"></a>

Notification helper to let the synchronization object know that a session has been started (from the session owner, as the synchronization object does not bind the callback directly)

<br>
#### `public void `[`OnPlatformSessionEnded`](#classURH__PlatformSessionSyncer_1a54870f9e337e72d2dffaf64d138ee53a)`(bool bSuccess)` <a id="classURH__PlatformSessionSyncer_1a54870f9e337e72d2dffaf64d138ee53a"></a>

Notification helper to let the synchronization object know that a session has been ended (from the session owner, as the synchronization object does not bind the callback directly)

<br>
#### `public void `[`OnPlatformSessionDestroyed`](#classURH__PlatformSessionSyncer_1a7ac6006922d5d82af25b2a79edd00dd4)`(bool bSuccess)` <a id="classURH__PlatformSessionSyncer_1a7ac6006922d5d82af25b2a79edd00dd4"></a>

Notification helper to let the synchronization object know that a session has been destroyed (from the session owner, as the synchronization object does not bind the callback directly)

<br>
#### `protected `[`ESyncActionState`](Session.md#classURH__PlatformSessionSyncer_1a816ad7c372b612eeee431e84824ebfe3)` `[`CurrentSyncActionState`](#classURH__PlatformSessionSyncer_1a0a8fd13fe93d1aac1b94e7dc0e3715ea) <a id="classURH__PlatformSessionSyncer_1a0a8fd13fe93d1aac1b94e7dc0e3715ea"></a>

The current state of the syncer.

<br>
#### `protected FRH_SessionOwnerPtr `[`SessionOwner`](#classURH__PlatformSessionSyncer_1abdc13532c721a2d0593b177ae19833e5) <a id="classURH__PlatformSessionSyncer_1abdc13532c721a2d0593b177ae19833e5"></a>

Owner of the session.

<br>
#### `protected FString `[`RHSessionId`](#classURH__PlatformSessionSyncer_1a2782a9152c7bf68ed0bd908b95c4301f) <a id="classURH__PlatformSessionSyncer_1a2782a9152c7bf68ed0bd908b95c4301f"></a>

Rally Here session Id.

<br>
#### `protected FName `[`OSSSessionName`](#classURH__PlatformSessionSyncer_1ac4bc77d7e8275889c8050bf1a09f2e97) <a id="classURH__PlatformSessionSyncer_1ac4bc77d7e8275889c8050bf1a09f2e97"></a>

Name of the session.

<br>
#### `protected ERHAPI_Platform `[`RHPlatform`](#classURH__PlatformSessionSyncer_1ae2dda53f9229c02025c41c2203792892) <a id="classURH__PlatformSessionSyncer_1ae2dda53f9229c02025c41c2203792892"></a>

Internal platoform for the session.

<br>
#### `protected void `[`OnRHSessionUpdated`](#classURH__PlatformSessionSyncer_1a6359fb4330ea231ed32cb6b66e5ff270)`(`[`URH_SessionView`](Session.md#classURH__SessionView)` * UpdatedSession)` <a id="classURH__PlatformSessionSyncer_1a6359fb4330ea231ed32cb6b66e5ff270"></a>

Handler for whenever the associated session is updated.

#### Parameters
* `UpdatedSession` The session that was updated.

<br>
#### `protected void `[`CheckState`](#classURH__PlatformSessionSyncer_1a23d3f73c7f9620cc04ad9457400a46d1)`()` <a id="classURH__PlatformSessionSyncer_1a23d3f73c7f9620cc04ad9457400a46d1"></a>

Check our current state against the session, and decide if we need to take any action.

<br>
#### `protected void `[`KickOffState`](#classURH__PlatformSessionSyncer_1a7ef1b9e41501848a79253d0a62fe8119)`(`[`ESyncActionState`](Session.md#classURH__PlatformSessionSyncer_1a816ad7c372b612eeee431e84824ebfe3)` NewState)` <a id="classURH__PlatformSessionSyncer_1a7ef1b9e41501848a79253d0a62fe8119"></a>

Change to a new state.

#### Parameters
* `NewState` Target new state.

<br>
#### `protected void `[`SyncActionComplete`](#classURH__PlatformSessionSyncer_1a2d6a7ac31e0470a8ec4bcdf637fa204d)`(bool bSuccess,bool bDeferFrame)` <a id="classURH__PlatformSessionSyncer_1a2d6a7ac31e0470a8ec4bcdf637fa204d"></a>

Called when a Sync Action State is complete.

#### Parameters
* `bSuccess` Whether the action was successful. 

* `bDeferFrame` Whether to defer the frame before checking the state again.

<br>
#### `protected void `[`UpdateRHSessionWithPlatformSession`](#classURH__PlatformSessionSyncer_1af1460c25debaae4ef6958ada55140843)`()` <a id="classURH__PlatformSessionSyncer_1af1460c25debaae4ef6958ada55140843"></a>

Take in information from the paired platform session into the RH Session.

<br>
#### `protected void `[`CreatePlatformSession`](#classURH__PlatformSessionSyncer_1aacf5f48f7753b2c6c66ad52576cbfbe3)`()` <a id="classURH__PlatformSessionSyncer_1aacf5f48f7753b2c6c66ad52576cbfbe3"></a>

Create a platform session.

<br>
#### `protected void `[`JoinPlatformSession`](#classURH__PlatformSessionSyncer_1aeac06615a567b2e73b5a79fc7ce8a6c0)`()` <a id="classURH__PlatformSessionSyncer_1aeac06615a567b2e73b5a79fc7ce8a6c0"></a>

Join the platform session.

<br>
#### `protected void `[`JoinFoundPlatformSession`](#classURH__PlatformSessionSyncer_1a7b27580005c373e833f4ef6a0d2d0c0e)`(const FOnlineSessionSearchResult & SearchResult)` <a id="classURH__PlatformSessionSyncer_1a7b27580005c373e833f4ef6a0d2d0c0e"></a>

Used by Join Platform session once found to join it.

#### Parameters
* `SearchResult` The search result to join.

<br>
#### `protected void `[`LeavePlatformSession`](#classURH__PlatformSessionSyncer_1acbc88c14786ecb679597e29f6e22bda1)`()` <a id="classURH__PlatformSessionSyncer_1acbc88c14786ecb679597e29f6e22bda1"></a>

Leave the platform session.

<br>
#### `protected void `[`CleanupInternal`](#classURH__PlatformSessionSyncer_1ab563c8c76edbbe9057cc2c161f271e73)`()` <a id="classURH__PlatformSessionSyncer_1ab563c8c76edbbe9057cc2c161f271e73"></a>

Cleanup internal state of the session syncer.

<br>
#### `protected bool `[`SetSyncActionState`](#classURH__PlatformSessionSyncer_1a9685c5095ebbaaa49b439861f3082359)`(`[`ESyncActionState`](Session.md#classURH__PlatformSessionSyncer_1a816ad7c372b612eeee431e84824ebfe3)` NewState)` <a id="classURH__PlatformSessionSyncer_1a9685c5095ebbaaa49b439861f3082359"></a>

Sets the new action state for the syncer.

#### Parameters
* `NewState` New State to be in.

<br>
#### `protected FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__PlatformSessionSyncer_1ada23b9a95b86f976e421bf6ba732d384)`() const` <a id="classURH__PlatformSessionSyncer_1ada23b9a95b86f976e421bf6ba732d384"></a>

Get the unique net id of the session owner.

<br>
#### `protected IOnlineSubsystem * `[`GetOSS`](#classURH__PlatformSessionSyncer_1a8ba6d2d73795cff4c03cd40d6d505f15)`() const` <a id="classURH__PlatformSessionSyncer_1a8ba6d2d73795cff4c03cd40d6d505f15"></a>

Get the online subsystem for the platform session.

<br>
#### `protected IOnlineSessionPtr `[`GetOSSSessionInterface`](#classURH__PlatformSessionSyncer_1a65c98263b904836a4842d18c5db84450)`() const` <a id="classURH__PlatformSessionSyncer_1a65c98263b904836a4842d18c5db84450"></a>

Get the online subsystem session interface for the platform session.

<br>
## class `URH_SessionBrowserCache` <a id="classURH__SessionBrowserCache"></a>

```
class URH_SessionBrowserCache
  : public URH_GameInstanceSubsystemPlugin
```

Simple container class to hold session view data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`URH_SessionBrowserCache`](#classURH__SessionBrowserCache_1a62c14a0d2d7a4319ffdb92ad829e6ba0)`()` | Default constructor.
`public void `[`Search`](#classURH__SessionBrowserCache_1a54a2b334691c06563c123ad6721cdd55)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & params,FRH_OnSessionSearchCompleteDelegateBlock Delegate)` | Makes a call to search for session browsers.
`public inline void `[`BLUEPRINT_Search`](#classURH__SessionBrowserCache_1aef57a504c6238f35f6040a3c8b0f2b13)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & params,FRH_OnSessionSearchCompleteDynamicDelegate Delegate)` | 
`public inline `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classURH__SessionBrowserCache_1a9c9a5e70058fcefa9fc618ec4cda567e)`(const FString & SessionId) const` | Gets a cached session by Session Id.
`public inline TOptional< FString > `[`GetETagForSession`](#classURH__SessionBrowserCache_1a1d6f5d3f5caeaf12377646bb7b475cab)`(const FString & SessionId) const` | Gets the ETag for a session by Session Id.
`public bool `[`GetTemplate`](#classURH__SessionBrowserCache_1a99bb22543c8e651c7c63dc9483ebe98b)`(const FString & Type,`[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` | Gets the session template for a given session type.
`public void `[`ImportAPISession`](#classURH__SessionBrowserCache_1aeda1c65bacddfdf8dbbaa39edfbc1156)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` | Adds a session into the session cache.
`public void `[`ImportAPITemplate`](#classURH__SessionBrowserCache_1a71db13fbfa18f91a3f313cca01a9eddd)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` | Adds a new session template type to the templates.
`public inline void `[`ClearCache`](#classURH__SessionBrowserCache_1ab6fc51bbfa94876b68dc96846fe3c920)`(bool bClearTemplates)` | Clears the cached sessions, and optionally the cached templates.

#### Members

#### `public  `[`URH_SessionBrowserCache`](#classURH__SessionBrowserCache_1a62c14a0d2d7a4319ffdb92ad829e6ba0)`()` <a id="classURH__SessionBrowserCache_1a62c14a0d2d7a4319ffdb92ad829e6ba0"></a>

Default constructor.

<br>
#### `public void `[`Search`](#classURH__SessionBrowserCache_1a54a2b334691c06563c123ad6721cdd55)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & params,FRH_OnSessionSearchCompleteDelegateBlock Delegate)` <a id="classURH__SessionBrowserCache_1a54a2b334691c06563c123ad6721cdd55"></a>

Makes a call to search for session browsers.

#### Parameters
* `params` The search paramaters to use. 

* `Delegate` Callback delegate for when the search is completed.

<br>
#### `public inline void `[`BLUEPRINT_Search`](#classURH__SessionBrowserCache_1aef57a504c6238f35f6040a3c8b0f2b13)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & params,FRH_OnSessionSearchCompleteDynamicDelegate Delegate)` <a id="classURH__SessionBrowserCache_1aef57a504c6238f35f6040a3c8b0f2b13"></a>

<br>
#### `public inline `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classURH__SessionBrowserCache_1a9c9a5e70058fcefa9fc618ec4cda567e)`(const FString & SessionId) const` <a id="classURH__SessionBrowserCache_1a9c9a5e70058fcefa9fc618ec4cda567e"></a>

Gets a cached session by Session Id.

#### Parameters
* `SessionId` The Session Id of the requested session.

<br>
#### `public inline TOptional< FString > `[`GetETagForSession`](#classURH__SessionBrowserCache_1a1d6f5d3f5caeaf12377646bb7b475cab)`(const FString & SessionId) const` <a id="classURH__SessionBrowserCache_1a1d6f5d3f5caeaf12377646bb7b475cab"></a>

Gets the ETag for a session by Session Id.

#### Parameters
* `SessionId` The Session Id of the requested session.

<br>
#### `public bool `[`GetTemplate`](#classURH__SessionBrowserCache_1a99bb22543c8e651c7c63dc9483ebe98b)`(const FString & Type,`[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` <a id="classURH__SessionBrowserCache_1a99bb22543c8e651c7c63dc9483ebe98b"></a>

Gets the session template for a given session type.

#### Parameters
* `Type` The session type to get the template for. 

* `Template` The session template for the given type. 

#### Returns
True if the template was found, false otherwise.

<br>
#### `public void `[`ImportAPISession`](#classURH__SessionBrowserCache_1aeda1c65bacddfdf8dbbaa39edfbc1156)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` <a id="classURH__SessionBrowserCache_1aeda1c65bacddfdf8dbbaa39edfbc1156"></a>

Adds a session into the session cache.

#### Parameters
* `Session` The session to add.

<br>
#### `public void `[`ImportAPITemplate`](#classURH__SessionBrowserCache_1a71db13fbfa18f91a3f313cca01a9eddd)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` <a id="classURH__SessionBrowserCache_1a71db13fbfa18f91a3f313cca01a9eddd"></a>

Adds a new session template type to the templates.

#### Parameters
* `Template` The template ot add.

<br>
#### `public inline void `[`ClearCache`](#classURH__SessionBrowserCache_1ab6fc51bbfa94876b68dc96846fe3c920)`(bool bClearTemplates)` <a id="classURH__SessionBrowserCache_1ab6fc51bbfa94876b68dc96846fe3c920"></a>

Clears the cached sessions, and optionally the cached templates.

#### Parameters
* `bClearTemplates` If true, clear the templates as well.

<br>
## class `URH_SessionView` <a id="classURH__SessionView"></a>

```
class URH_SessionView
  : public UObject
```

Base class providing functionality for viewing session data and interacting with it from blueprint. Specifically does not have an "owner" meaning it cannot do "work" - it is read only. The subclasses have owners.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionUpdatedDelegate`](#classURH__SessionView_1a1e2288d1a6ad082498edbe4168d6b8a4) | Delegate fired whenever the session is updated.
`public FRH_OnSessionUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnSessionUpdatedDelegate`](#classURH__SessionView_1ad4bcea359be2cf5f8083d27088c6db7a) | Blueprint compatible delegate fired whenever the session is updated.
`public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionNotFoundDelegate`](#classURH__SessionView_1a8426fe031d4f2711140ce31aa5eaf0a0) | Delegate fired whenever the session is not found.
`public FRH_OnSessionUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnSessionNotFoundDelegate`](#classURH__SessionView_1a6672874c5fffb498ed5f19cfa6805751) | Blueprint compatible delegate fired whenever the session is not found.
`public FRH_OnSessionMemberStateChangedDelegate `[`OnSessionMemberStateChangedDelegate`](#classURH__SessionView_1aaab8a60729077d368e1cabf44c10167f) | Delegate fired whenever the session member list changes with details about the change.
`public FRH_OnSessionMemberStateChangedDynamicDelegate `[`BLUEPRINT_OnSessionMemberStateChangedDelegate`](#classURH__SessionView_1aa2d2de09bbcdd4b464f7f144f5f90920) | Blueprint compatible delegate fired whenever the session member list changes with details about the change.
`public inline FORCEINLINE const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & `[`GetSessionWithETag`](#classURH__SessionView_1a82784931fa5147876f93a3096d38417f)`() const` | Gets the Session Data and its ETag.
`public inline const `[`FRHAPI_Session`](models/RHAPI_Session.md#structFRHAPI__Session)` & `[`GetSessionData`](#classURH__SessionView_1adc1e64df9d89153b96f912abaf54ed4f)`() const` | Gets the Session Data.
`public inline const `[`FRHAPI_InstanceInfo`](models/RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceData`](#classURH__SessionView_1aa41fa4e0e20493b0b89ca0976c72330e)`() const` | Gets the Instance Data.
`public inline FORCEINLINE const `[`FRHAPI_SessionPlayer`](models/RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` * `[`GetSessionPlayer`](#classURH__SessionView_1a3c11043ff5ae46b22f47442734758773)`(const FGuid & PlayerUuid) const` | Gets a session player if they are part of the session.
`public inline FORCEINLINE bool `[`GetSessionPlayer`](#classURH__SessionView_1abf7a2c182bbf41b82a158fc111598aad)`(const FGuid & PlayerUuid,`[`FRHAPI_SessionPlayer`](models/RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` & OutPlayer) const` | Gets a session player if they are part of the session.
`public inline FORCEINLINE const `[`FRHAPI_SessionPlayer`](models/RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` * `[`GetSessionLeader`](#classURH__SessionView_1a4c24806b4e7e37ce2f3716330f82fed9)`() const` | Gets the leader of the session if one exists.
`public inline FORCEINLINE bool `[`GetSessionLeader`](#classURH__SessionView_1a31765b2d8138d16349615492bfd46bee)`(`[`FRHAPI_SessionPlayer`](models/RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` & OutPlayer) const` | Gets the leader of the session if one exists.
`public inline FORCEINLINE bool `[`IsCreatedByMatchmaking`](#classURH__SessionView_1a64970cbfe9adb2a065749a4e48b349df)`() const` | Gets if the session was created through matchmaking.
`public inline FORCEINLINE int32 `[`GetSessionPlayerCount`](#classURH__SessionView_1aceaf6db4198c0defac9c87bbc32574fb)`() const` | Gets the number of players in the session.
`public inline virtual bool `[`IsOffline`](#classURH__SessionView_1a7b855a2b8ac702d05cf3efe3263519b2)`() const` | Gets if the session is offline.
`public inline FORCEINLINE bool `[`IsOnline`](#classURH__SessionView_1a165bf0e2a2f4a73041daa0ebbaf082c2)`() const` | Gets if the session is online.
`public inline virtual bool `[`IsJoined`](#classURH__SessionView_1ae77e9295b2e867940d1fe31abd88a347)`() const` | Gets if the session is a one the local player has joined.
`public inline bool `[`IsInQueue`](#classURH__SessionView_1a5a36dda3d9b0c6049a26ce951f586d9d)`() const` | Gets if the session is currently in matchmaking.
`public inline FORCEINLINE `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` `[`GetTemplate`](#classURH__SessionView_1a293350d46d361b42df4e83c7a4f9bf9c)`() const` | Gets the session template.
`public inline FORCEINLINE FString `[`GetETag`](#classURH__SessionView_1abd96670c8e2f44b233af9322bd2a06fc)`() const` | Gets the session ETag.
`public inline FORCEINLINE FString `[`GetSessionId`](#classURH__SessionView_1a6aedf3a6656fcde76b8e18d0f2b297fe)`() const` | Gets the session Id.
`public inline FORCEINLINE FString `[`GetSessionType`](#classURH__SessionView_1a450529876e3c21928d4fbc9925d1bb68)`() const` | Gets the session type.
`public TMap< FString, FString > `[`GetCustomData`](#classURH__SessionView_1a4cea1471adcb445c7f71cb5d1ef0f86c)`() const` | Gets session custom data.
`public bool `[`GetCustomDataValue`](#classURH__SessionView_1a278a3291ea20e0ce736da8ea4db8e767)`(const FString & Key,FString & OutValue) const` | Gets a session custom data value.
`public TMap< FString, FString > `[`GetInstanceCustomData`](#classURH__SessionView_1a5b3e04566785eea12417d84737177555)`() const` | Gets intance custom data.
`public bool `[`GetInstanceCustomDataValue`](#classURH__SessionView_1a887bb0b311f4d9554e73419f9be81aad)`(const FString & Key,FString & OutValue) const` | Gets an instance custom data value.
`public TMap< FString, FString > `[`GetBrowserCustomData`](#classURH__SessionView_1a4691063225ba4ad458aa12a14020c7d7)`() const` | Gets session browser custom data.
`public virtual void `[`ImportAPISession`](#classURH__SessionView_1a92790b540906943bf8501049b45222b3)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & newSessionData,const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` | Update a session from the owner, implies a template update.
`public virtual void `[`ImportTemplate`](#classURH__SessionView_1aa910b3892253ae47a3eedf5f91eae252)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` | Update the session template .
`public virtual void `[`Expire`](#classURH__SessionView_1aa511762658f42d23bee666ec1919b9a9)`(FRH_OnSessionExpiredDelegate Delegate)` | Called when the session was removed from our session list. Cleans up state then trigger callback on owner.
`public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`GetSessionOwner`](#classURH__SessionView_1ab4c61212a9d10507d2aab3d645b4b985)`() const` | Gets the session owner.
`public void `[`StartPolling`](#classURH__SessionView_1a488f1c164e31d30c17d98f13226c6079)`()` | Starts the polling of session updates.
`public void `[`StopPolling`](#classURH__SessionView_1aa34ca34af04d8bcb3200d48395c242c2)`()` | Stops the polling for session updates.
`public void `[`DeferPolling`](#classURH__SessionView_1a09c8faf3934af2d317d955cbd5da5ed3)`()` | Defers the polling for session updates (in case an out-of-band update was received)
`public float `[`GetPollTimeRemaining`](#classURH__SessionView_1aa57cc3f86e075380283f9a7a22d07a06)`()` | Gets the current time remaining in the poll cycle in seconds. Returns -1.f if poll is inactive or is executing.
`public void `[`ForcePollForUpdate`](#classURH__SessionView_1adcf17d2f0cc4e85d973485db472775af)`()` | Forces a polling call even if the polling is waiting till next time to pulse.
`public void `[`AddDeferredPoll`](#classURH__SessionView_1a7e207452f3a5b71dcf74642d7d15aa9e)`(const `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` & DeferredPoll)` | Add a deferred poll to the list of polls to run in sequence.
`public void `[`CheckDeferredPolls`](#classURH__SessionView_1aaf1a897f37236897e788f33d2c34304a)`()` | Check and potentially kick off a deferred poll.
`protected `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` `[`SessionData`](#classURH__SessionView_1a2323a589459ab11bb6ee7596d234d7df) | The Session Data with Etag.
`protected `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` `[`Template`](#classURH__SessionView_1a4726a534a0d2c8f2de41f9ad5963d64f) | A reference copy of the Template (in case the template is deleted from the managed template list)
`protected FRH_AutoPollerPtr `[`Poller`](#classURH__SessionView_1aae3d3ebab134537e289fe4340777b47d) | Poller in charge of polling for the session.
`protected TArray< `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` > `[`DeferredPolls`](#classURH__SessionView_1a6519f00b229dbd0cad4be5907e937b15) | Array of stored poll requests that have not yet been processed.
`protected TArray< `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` > `[`WaitingPolls`](#classURH__SessionView_1ae0ea80e3394fe77f996d00bc692169c6) | Array of stored poll requests that are waiting on the result of the current poll.
`protected void `[`PollForUpdate`](#classURH__SessionView_1a4ccf0aaf6734e2e5638ab257c1451480)`(const FRH_PollCompleteFunc & Delegate)` | Triggers a poll for a session update, automatically called as part of the polling loop.

#### Members

#### `public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionUpdatedDelegate`](#classURH__SessionView_1a1e2288d1a6ad082498edbe4168d6b8a4) <a id="classURH__SessionView_1a1e2288d1a6ad082498edbe4168d6b8a4"></a>

Delegate fired whenever the session is updated.

<br>
#### `public FRH_OnSessionUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnSessionUpdatedDelegate`](#classURH__SessionView_1ad4bcea359be2cf5f8083d27088c6db7a) <a id="classURH__SessionView_1ad4bcea359be2cf5f8083d27088c6db7a"></a>

Blueprint compatible delegate fired whenever the session is updated.

<br>
#### `public FRH_OnSessionUpdatedMulticastDelegate `[`OnSessionNotFoundDelegate`](#classURH__SessionView_1a8426fe031d4f2711140ce31aa5eaf0a0) <a id="classURH__SessionView_1a8426fe031d4f2711140ce31aa5eaf0a0"></a>

Delegate fired whenever the session is not found.

<br>
#### `public FRH_OnSessionUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnSessionNotFoundDelegate`](#classURH__SessionView_1a6672874c5fffb498ed5f19cfa6805751) <a id="classURH__SessionView_1a6672874c5fffb498ed5f19cfa6805751"></a>

Blueprint compatible delegate fired whenever the session is not found.

<br>
#### `public FRH_OnSessionMemberStateChangedDelegate `[`OnSessionMemberStateChangedDelegate`](#classURH__SessionView_1aaab8a60729077d368e1cabf44c10167f) <a id="classURH__SessionView_1aaab8a60729077d368e1cabf44c10167f"></a>

Delegate fired whenever the session member list changes with details about the change.

<br>
#### `public FRH_OnSessionMemberStateChangedDynamicDelegate `[`BLUEPRINT_OnSessionMemberStateChangedDelegate`](#classURH__SessionView_1aa2d2de09bbcdd4b464f7f144f5f90920) <a id="classURH__SessionView_1aa2d2de09bbcdd4b464f7f144f5f90920"></a>

Blueprint compatible delegate fired whenever the session member list changes with details about the change.

<br>
#### `public inline FORCEINLINE const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & `[`GetSessionWithETag`](#classURH__SessionView_1a82784931fa5147876f93a3096d38417f)`() const` <a id="classURH__SessionView_1a82784931fa5147876f93a3096d38417f"></a>

Gets the Session Data and its ETag.

<br>
#### `public inline const `[`FRHAPI_Session`](models/RHAPI_Session.md#structFRHAPI__Session)` & `[`GetSessionData`](#classURH__SessionView_1adc1e64df9d89153b96f912abaf54ed4f)`() const` <a id="classURH__SessionView_1adc1e64df9d89153b96f912abaf54ed4f"></a>

Gets the Session Data.

<br>
#### `public inline const `[`FRHAPI_InstanceInfo`](models/RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceData`](#classURH__SessionView_1aa41fa4e0e20493b0b89ca0976c72330e)`() const` <a id="classURH__SessionView_1aa41fa4e0e20493b0b89ca0976c72330e"></a>

Gets the Instance Data.

<br>
#### `public inline FORCEINLINE const `[`FRHAPI_SessionPlayer`](models/RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` * `[`GetSessionPlayer`](#classURH__SessionView_1a3c11043ff5ae46b22f47442734758773)`(const FGuid & PlayerUuid) const` <a id="classURH__SessionView_1a3c11043ff5ae46b22f47442734758773"></a>

Gets a session player if they are part of the session.

#### Parameters
* `PlayerUuid` The unique Id of the player to get. 

#### Returns
The player if they exist in the session, otherwise null.

<br>
#### `public inline FORCEINLINE bool `[`GetSessionPlayer`](#classURH__SessionView_1abf7a2c182bbf41b82a158fc111598aad)`(const FGuid & PlayerUuid,`[`FRHAPI_SessionPlayer`](models/RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` & OutPlayer) const` <a id="classURH__SessionView_1abf7a2c182bbf41b82a158fc111598aad"></a>

Gets a session player if they are part of the session.

#### Parameters
* `PlayerUuid` The unique Id of the player to get. 

* `OutPlayer` The player if they exist in the session. 

#### Returns
If true, the player was found.

<br>
#### `public inline FORCEINLINE const `[`FRHAPI_SessionPlayer`](models/RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` * `[`GetSessionLeader`](#classURH__SessionView_1a4c24806b4e7e37ce2f3716330f82fed9)`() const` <a id="classURH__SessionView_1a4c24806b4e7e37ce2f3716330f82fed9"></a>

Gets the leader of the session if one exists.

<br>
#### `public inline FORCEINLINE bool `[`GetSessionLeader`](#classURH__SessionView_1a31765b2d8138d16349615492bfd46bee)`(`[`FRHAPI_SessionPlayer`](models/RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` & OutPlayer) const` <a id="classURH__SessionView_1a31765b2d8138d16349615492bfd46bee"></a>

Gets the leader of the session if one exists.

#### Parameters
* `OutPlayer` The leader if they exist in the session. 

#### Returns
If true, the leader was found.

<br>
#### `public inline FORCEINLINE bool `[`IsCreatedByMatchmaking`](#classURH__SessionView_1a64970cbfe9adb2a065749a4e48b349df)`() const` <a id="classURH__SessionView_1a64970cbfe9adb2a065749a4e48b349df"></a>

Gets if the session was created through matchmaking.

<br>
#### `public inline FORCEINLINE int32 `[`GetSessionPlayerCount`](#classURH__SessionView_1aceaf6db4198c0defac9c87bbc32574fb)`() const` <a id="classURH__SessionView_1aceaf6db4198c0defac9c87bbc32574fb"></a>

Gets the number of players in the session.

<br>
#### `public inline virtual bool `[`IsOffline`](#classURH__SessionView_1a7b855a2b8ac702d05cf3efe3263519b2)`() const` <a id="classURH__SessionView_1a7b855a2b8ac702d05cf3efe3263519b2"></a>

Gets if the session is offline.

<br>
#### `public inline FORCEINLINE bool `[`IsOnline`](#classURH__SessionView_1a165bf0e2a2f4a73041daa0ebbaf082c2)`() const` <a id="classURH__SessionView_1a165bf0e2a2f4a73041daa0ebbaf082c2"></a>

Gets if the session is online.

<br>
#### `public inline virtual bool `[`IsJoined`](#classURH__SessionView_1ae77e9295b2e867940d1fe31abd88a347)`() const` <a id="classURH__SessionView_1ae77e9295b2e867940d1fe31abd88a347"></a>

Gets if the session is a one the local player has joined.

<br>
#### `public inline bool `[`IsInQueue`](#classURH__SessionView_1a5a36dda3d9b0c6049a26ce951f586d9d)`() const` <a id="classURH__SessionView_1a5a36dda3d9b0c6049a26ce951f586d9d"></a>

Gets if the session is currently in matchmaking.

<br>
#### `public inline FORCEINLINE `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` `[`GetTemplate`](#classURH__SessionView_1a293350d46d361b42df4e83c7a4f9bf9c)`() const` <a id="classURH__SessionView_1a293350d46d361b42df4e83c7a4f9bf9c"></a>

Gets the session template.

<br>
#### `public inline FORCEINLINE FString `[`GetETag`](#classURH__SessionView_1abd96670c8e2f44b233af9322bd2a06fc)`() const` <a id="classURH__SessionView_1abd96670c8e2f44b233af9322bd2a06fc"></a>

Gets the session ETag.

<br>
#### `public inline FORCEINLINE FString `[`GetSessionId`](#classURH__SessionView_1a6aedf3a6656fcde76b8e18d0f2b297fe)`() const` <a id="classURH__SessionView_1a6aedf3a6656fcde76b8e18d0f2b297fe"></a>

Gets the session Id.

<br>
#### `public inline FORCEINLINE FString `[`GetSessionType`](#classURH__SessionView_1a450529876e3c21928d4fbc9925d1bb68)`() const` <a id="classURH__SessionView_1a450529876e3c21928d4fbc9925d1bb68"></a>

Gets the session type.

<br>
#### `public TMap< FString, FString > `[`GetCustomData`](#classURH__SessionView_1a4cea1471adcb445c7f71cb5d1ef0f86c)`() const` <a id="classURH__SessionView_1a4cea1471adcb445c7f71cb5d1ef0f86c"></a>

Gets session custom data.

<br>
#### `public bool `[`GetCustomDataValue`](#classURH__SessionView_1a278a3291ea20e0ce736da8ea4db8e767)`(const FString & Key,FString & OutValue) const` <a id="classURH__SessionView_1a278a3291ea20e0ce736da8ea4db8e767"></a>

Gets a session custom data value.

#### Parameters
* `Key` The custom data being requested. 

* `Value` The value of the custom data. 

#### Returns
If true, the custom data was found.

<br>
#### `public TMap< FString, FString > `[`GetInstanceCustomData`](#classURH__SessionView_1a5b3e04566785eea12417d84737177555)`() const` <a id="classURH__SessionView_1a5b3e04566785eea12417d84737177555"></a>

Gets intance custom data.

<br>
#### `public bool `[`GetInstanceCustomDataValue`](#classURH__SessionView_1a887bb0b311f4d9554e73419f9be81aad)`(const FString & Key,FString & OutValue) const` <a id="classURH__SessionView_1a887bb0b311f4d9554e73419f9be81aad"></a>

Gets an instance custom data value.

#### Parameters
* `Key` The custom data being requested. 

* `Value` The value of the custom data. 

#### Returns
If true, the custom data was found.

<br>
#### `public TMap< FString, FString > `[`GetBrowserCustomData`](#classURH__SessionView_1a4691063225ba4ad458aa12a14020c7d7)`() const` <a id="classURH__SessionView_1a4691063225ba4ad458aa12a14020c7d7"></a>

Gets session browser custom data.

<br>
#### `public virtual void `[`ImportAPISession`](#classURH__SessionView_1a92790b540906943bf8501049b45222b3)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & newSessionData,const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` <a id="classURH__SessionView_1a92790b540906943bf8501049b45222b3"></a>

Update a session from the owner, implies a template update.

#### Parameters
* `newSessionData` The new session data. 

* `newTemplate` The new session template.

<br>
#### `public virtual void `[`ImportTemplate`](#classURH__SessionView_1aa910b3892253ae47a3eedf5f91eae252)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` <a id="classURH__SessionView_1aa910b3892253ae47a3eedf5f91eae252"></a>

Update the session template .

#### Parameters
* `newTemplate` The new session template.

<br>
#### `public virtual void `[`Expire`](#classURH__SessionView_1aa511762658f42d23bee666ec1919b9a9)`(FRH_OnSessionExpiredDelegate Delegate)` <a id="classURH__SessionView_1aa511762658f42d23bee666ec1919b9a9"></a>

Called when the session was removed from our session list. Cleans up state then trigger callback on owner.

#### Parameters
* `Delegate` The delegate to call when the session is removed.

<br>
#### `public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`GetSessionOwner`](#classURH__SessionView_1ab4c61212a9d10507d2aab3d645b4b985)`() const` <a id="classURH__SessionView_1ab4c61212a9d10507d2aab3d645b4b985"></a>

Gets the session owner.

<br>
#### `public void `[`StartPolling`](#classURH__SessionView_1a488f1c164e31d30c17d98f13226c6079)`()` <a id="classURH__SessionView_1a488f1c164e31d30c17d98f13226c6079"></a>

Starts the polling of session updates.

<br>
#### `public void `[`StopPolling`](#classURH__SessionView_1aa34ca34af04d8bcb3200d48395c242c2)`()` <a id="classURH__SessionView_1aa34ca34af04d8bcb3200d48395c242c2"></a>

Stops the polling for session updates.

<br>
#### `public void `[`DeferPolling`](#classURH__SessionView_1a09c8faf3934af2d317d955cbd5da5ed3)`()` <a id="classURH__SessionView_1a09c8faf3934af2d317d955cbd5da5ed3"></a>

Defers the polling for session updates (in case an out-of-band update was received)

<br>
#### `public float `[`GetPollTimeRemaining`](#classURH__SessionView_1aa57cc3f86e075380283f9a7a22d07a06)`()` <a id="classURH__SessionView_1aa57cc3f86e075380283f9a7a22d07a06"></a>

Gets the current time remaining in the poll cycle in seconds. Returns -1.f if poll is inactive or is executing.

<br>
#### `public void `[`ForcePollForUpdate`](#classURH__SessionView_1adcf17d2f0cc4e85d973485db472775af)`()` <a id="classURH__SessionView_1adcf17d2f0cc4e85d973485db472775af"></a>

Forces a polling call even if the polling is waiting till next time to pulse.

<br>
#### `public void `[`AddDeferredPoll`](#classURH__SessionView_1a7e207452f3a5b71dcf74642d7d15aa9e)`(const `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` & DeferredPoll)` <a id="classURH__SessionView_1a7e207452f3a5b71dcf74642d7d15aa9e"></a>

Add a deferred poll to the list of polls to run in sequence.

<br>
#### `public void `[`CheckDeferredPolls`](#classURH__SessionView_1aaf1a897f37236897e788f33d2c34304a)`()` <a id="classURH__SessionView_1aaf1a897f37236897e788f33d2c34304a"></a>

Check and potentially kick off a deferred poll.

<br>
#### `protected `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` `[`SessionData`](#classURH__SessionView_1a2323a589459ab11bb6ee7596d234d7df) <a id="classURH__SessionView_1a2323a589459ab11bb6ee7596d234d7df"></a>

The Session Data with Etag.

<br>
#### `protected `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` `[`Template`](#classURH__SessionView_1a4726a534a0d2c8f2de41f9ad5963d64f) <a id="classURH__SessionView_1a4726a534a0d2c8f2de41f9ad5963d64f"></a>

A reference copy of the Template (in case the template is deleted from the managed template list)

<br>
#### `protected FRH_AutoPollerPtr `[`Poller`](#classURH__SessionView_1aae3d3ebab134537e289fe4340777b47d) <a id="classURH__SessionView_1aae3d3ebab134537e289fe4340777b47d"></a>

Poller in charge of polling for the session.

<br>
#### `protected TArray< `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` > `[`DeferredPolls`](#classURH__SessionView_1a6519f00b229dbd0cad4be5907e937b15) <a id="classURH__SessionView_1a6519f00b229dbd0cad4be5907e937b15"></a>

Array of stored poll requests that have not yet been processed.

<br>
#### `protected TArray< `[`FRH_DeferredSessionPoll`](Session.md#structFRH__DeferredSessionPoll)` > `[`WaitingPolls`](#classURH__SessionView_1ae0ea80e3394fe77f996d00bc692169c6) <a id="classURH__SessionView_1ae0ea80e3394fe77f996d00bc692169c6"></a>

Array of stored poll requests that are waiting on the result of the current poll.

<br>
#### `protected void `[`PollForUpdate`](#classURH__SessionView_1a4ccf0aaf6734e2e5638ab257c1451480)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__SessionView_1a4ccf0aaf6734e2e5638ab257c1451480"></a>

Triggers a poll for a session update, automatically called as part of the polling loop.

#### Parameters
* `Delegate` Callback delegate for when the poll completes.

<br>
## class `URH_InvitedSession` <a id="classURH__InvitedSession"></a>

```
class URH_InvitedSession
  : public URH_SessionView
```

Invited Sessions are sessions that the player has been invited to.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline virtual bool `[`IsOffline`](#classURH__InvitedSession_1af877279192bb132ceb1128b5fc5f6f2b)`() const` | Gets that an invited session is not an offline session.
`public virtual void `[`Join`](#classURH__InvitedSession_1ab00dd6a1606f212c8d304556075a65a3)`(const FRH_OnSessionUpdatedDelegateBlock Delegate)` | Accepts to join the session.
`public inline void `[`BLUEPRINT_Join`](#classURH__InvitedSession_1ae695534cc3653e4cf7374b54a030133b)`(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` | Blueprint compatible version of Join.
`public virtual void `[`Leave`](#classURH__InvitedSession_1a42a10ef935f7bb4ef3a0c3ce10bed1e7)`(const FRH_OnSessionUpdatedDelegateBlock Delegate)` | Declines to join the session.
`public inline void `[`BLUEPRINT_Leave`](#classURH__InvitedSession_1a5710f9c6987179ca0489029cb3bced79)`(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` | Blueprint compatible version of Leave.

#### Members

#### `public inline virtual bool `[`IsOffline`](#classURH__InvitedSession_1af877279192bb132ceb1128b5fc5f6f2b)`() const` <a id="classURH__InvitedSession_1af877279192bb132ceb1128b5fc5f6f2b"></a>

Gets that an invited session is not an offline session.

<br>
#### `public virtual void `[`Join`](#classURH__InvitedSession_1ab00dd6a1606f212c8d304556075a65a3)`(const FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__InvitedSession_1ab00dd6a1606f212c8d304556075a65a3"></a>

Accepts to join the session.

#### Parameters
* `Delegate` The callback delegate for the session being updated by the join.

<br>
#### `public inline void `[`BLUEPRINT_Join`](#classURH__InvitedSession_1ae695534cc3653e4cf7374b54a030133b)`(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` <a id="classURH__InvitedSession_1ae695534cc3653e4cf7374b54a030133b"></a>

Blueprint compatible version of Join.

#### Parameters
* `Delegate` The callback delegate for the session being updated by the join.

<br>
#### `public virtual void `[`Leave`](#classURH__InvitedSession_1a42a10ef935f7bb4ef3a0c3ce10bed1e7)`(const FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__InvitedSession_1a42a10ef935f7bb4ef3a0c3ce10bed1e7"></a>

Declines to join the session.

#### Parameters
* `Delegate` The callback delegate for the session being updated by the leave.

<br>
#### `public inline void `[`BLUEPRINT_Leave`](#classURH__InvitedSession_1a5710f9c6987179ca0489029cb3bced79)`(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` <a id="classURH__InvitedSession_1a5710f9c6987179ca0489029cb3bced79"></a>

Blueprint compatible version of Leave.

#### Parameters
* `Delegate` The callback delegate for the session being updated by the leave.

<br>
## class `URH_OfflineSession` <a id="classURH__OfflineSession"></a>

```
class URH_OfflineSession
  : public URH_JoinedSession
```

Offline Sessions are sessions the session owner is actively a member of that are unsynchronized with the API. This is primarily intended as a utility class to allow for the session flow to be used globally, even when not running API based sessions (ex: tutorial / practice area before login).

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline virtual bool `[`IsOffline`](#classURH__OfflineSession_1afb29afef2455da0af98c31af0ac31f92)`() const` | Gets that the session is offline.
`public virtual void `[`InvitePlayer`](#classURH__OfflineSession_1a208a5f6dcc88605003dab2e16276a40d)`(const FGuid & PlayerUuid,int32 Team,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`KickPlayer`](#classURH__OfflineSession_1a96a88b3e908240be05d657a711f6a857)`(const FGuid & PlayerUuid,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`SetLeader`](#classURH__OfflineSession_1a593fcf24e7ecea3b94386c83b85d3fde)`(const FGuid & PlayerUuid,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`ChangePlayerTeam`](#classURH__OfflineSession_1afa21c920d6c30158f0c41f9f52d10737)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock Delegate)` | Changes the team a given player is associated with in the session.
`public virtual void `[`Leave`](#classURH__OfflineSession_1a0abaa8b64c4c5db8fa4a0e76694fd6d2)`(bool bFromOSSSession,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Leaves the session.
`public virtual void `[`RequestInstance`](#classURH__OfflineSession_1a12e217b3335ebd60bcd70bf81fa560d6)`(const `[`FRHAPI_InstanceRequest`](models/RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Attempt to create a new instance for the session.
`public virtual void `[`EndInstance`](#classURH__OfflineSession_1a14682216e32e4dfaf985cf9f3bd7ffed)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` | Shutdown the existing instance for the session.
`public virtual void `[`StartMatch`](#classURH__OfflineSession_1ac7eb0bce432271f51516247922435a8f)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` | Starts the match of the instance on the session.
`public virtual void `[`EndMatch`](#classURH__OfflineSession_1a8c19b403e81023881507ffca764affc8)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` | Ends the match of the instance on the session.
`public virtual void `[`UpdateSessionInfo`](#classURH__OfflineSession_1a41533f6a457e3d99543ccfd108b4dd13)`(const `[`FRHAPI_SessionUpdate`](models/RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Updates the session info.
`public virtual void `[`UpdateInstanceInfo`](#classURH__OfflineSession_1a000045bc3af5c9d19dbab258baacf1cf)`(const `[`FRHAPI_InstanceInfoUpdate`](models/RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Updates the sessions instance info.
`public virtual void `[`UpdateBrowserInfo`](#classURH__OfflineSession_1a8df6b6aad4a5fd34740749efc8f7aa34)`(bool bEnable,const TMap< FString, FString > & CustomData,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Updates the sessions browser info.
`protected void `[`ImportSessionUpdateToAllPlayers`](#classURH__OfflineSession_1a662a10e6f117bb137f9d0d65b75171a8)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Update)` | 

#### Members

#### `public inline virtual bool `[`IsOffline`](#classURH__OfflineSession_1afb29afef2455da0af98c31af0ac31f92)`() const` <a id="classURH__OfflineSession_1afb29afef2455da0af98c31af0ac31f92"></a>

Gets that the session is offline.

<br>
#### `public virtual void `[`InvitePlayer`](#classURH__OfflineSession_1a208a5f6dcc88605003dab2e16276a40d)`(const FGuid & PlayerUuid,int32 Team,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1a208a5f6dcc88605003dab2e16276a40d"></a>

Currently not supported for offline sessions.

<br>
#### `public virtual void `[`KickPlayer`](#classURH__OfflineSession_1a96a88b3e908240be05d657a711f6a857)`(const FGuid & PlayerUuid,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1a96a88b3e908240be05d657a711f6a857"></a>

Currently not supported for offline sessions.

<br>
#### `public virtual void `[`SetLeader`](#classURH__OfflineSession_1a593fcf24e7ecea3b94386c83b85d3fde)`(const FGuid & PlayerUuid,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1a593fcf24e7ecea3b94386c83b85d3fde"></a>

Currently not supported for offline sessions.

<br>
#### `public virtual void `[`ChangePlayerTeam`](#classURH__OfflineSession_1afa21c920d6c30158f0c41f9f52d10737)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1afa21c920d6c30158f0c41f9f52d10737"></a>

Changes the team a given player is associated with in the session.

#### Parameters
* `PlayerUuid` The unique player Id to invite to the session. 

* `Team` The target team that the player will be associated with in the session. 

* `Delegate` Callback delegate for the session being updated by the team change.

<br>
#### `public virtual void `[`Leave`](#classURH__OfflineSession_1a0abaa8b64c4c5db8fa4a0e76694fd6d2)`(bool bFromOSSSession,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1a0abaa8b64c4c5db8fa4a0e76694fd6d2"></a>

Leaves the session.

#### Parameters
* `bFromOSSSession` If true, then leave the OSS Session. Otherwise, just leave the session. 

* `Delegate` Callback delegate for the session being updated by the leave.

<br>
#### `public virtual void `[`RequestInstance`](#classURH__OfflineSession_1a12e217b3335ebd60bcd70bf81fa560d6)`(const `[`FRHAPI_InstanceRequest`](models/RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1a12e217b3335ebd60bcd70bf81fa560d6"></a>

Attempt to create a new instance for the session.

#### Parameters
* `InstanceRequest` Details for the instance being requested. 

* `Delegate` Callback delegate for the session being updated with the instance creation, or failure.

<br>
#### `public virtual void `[`EndInstance`](#classURH__OfflineSession_1a14682216e32e4dfaf985cf9f3bd7ffed)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1a14682216e32e4dfaf985cf9f3bd7ffed"></a>

Shutdown the existing instance for the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the instance ending.

<br>
#### `public virtual void `[`StartMatch`](#classURH__OfflineSession_1ac7eb0bce432271f51516247922435a8f)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1ac7eb0bce432271f51516247922435a8f"></a>

Starts the match of the instance on the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the match start.

<br>
#### `public virtual void `[`EndMatch`](#classURH__OfflineSession_1a8c19b403e81023881507ffca764affc8)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1a8c19b403e81023881507ffca764affc8"></a>

Ends the match of the instance on the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the match end.

<br>
#### `public virtual void `[`UpdateSessionInfo`](#classURH__OfflineSession_1a41533f6a457e3d99543ccfd108b4dd13)`(const `[`FRHAPI_SessionUpdate`](models/RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1a41533f6a457e3d99543ccfd108b4dd13"></a>

Updates the session info.

#### Parameters
* `Update` The session info for the update. 

* `Delegate` Callback delegate for the session being updated with new session data.

<br>
#### `public virtual void `[`UpdateInstanceInfo`](#classURH__OfflineSession_1a000045bc3af5c9d19dbab258baacf1cf)`(const `[`FRHAPI_InstanceInfoUpdate`](models/RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1a000045bc3af5c9d19dbab258baacf1cf"></a>

Updates the sessions instance info.

#### Parameters
* `Update` The instance info for the update. 

* `Delegate` Callback delegate for the session being updated with new instance data.

<br>
#### `public virtual void `[`UpdateBrowserInfo`](#classURH__OfflineSession_1a8df6b6aad4a5fd34740749efc8f7aa34)`(bool bEnable,const TMap< FString, FString > & CustomData,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OfflineSession_1a8df6b6aad4a5fd34740749efc8f7aa34"></a>

Updates the sessions browser info.

#### Parameters
* `bEnable` If true, sets the browser info. Otherwise, clear it out. 

* `CustomData` The new browser data for the update. 

* `Delegate` Callback delegate for the session being updated with new browser data.

<br>
#### `protected void `[`ImportSessionUpdateToAllPlayers`](#classURH__OfflineSession_1a662a10e6f117bb137f9d0d65b75171a8)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Update)` <a id="classURH__OfflineSession_1a662a10e6f117bb137f9d0d65b75171a8"></a>

<br>
## class `URH_OnlineSession` <a id="classURH__OnlineSession"></a>

```
class URH_OnlineSession
  : public URH_JoinedSession
```

Online Sessions are sessions that are synchronized from the API (and since it is a joined session, the Session Owner is a member)

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline virtual bool `[`IsOffline`](#classURH__OnlineSession_1af734641e6fe04130aadcfb7a6ed1d58a)`() const` | Gets that an online session is not an offline session.
`public virtual void `[`ImportAPISession`](#classURH__OnlineSession_1a4fe7233a68b23d1ca4985d3b0e103ef5)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & newSessionData,const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` | Update a session from the owner, implies a template update.
`public virtual void `[`Expire`](#classURH__OnlineSession_1abd9d440d9079d657622f572afe3ae9de)`(FRH_OnSessionExpiredDelegate Delegate)` | Called when the session was removed from our session list. Cleans up state then trigger callback on owner.
`public virtual void `[`JoinQueue`](#classURH__OnlineSession_1a29b7ca98ebc2bb66382f335c8da97e37)`(const FString & QueueId,const TArray< FString > MatchmakingTags,const FRH_OnSessionUpdatedDelegateBlock Delegate)` | Joins a specific queue with the session to be matchmade with others.
`public inline void `[`BLUEPRINT_JoinQueue`](#classURH__OnlineSession_1a18be3435bba8d4fdc3635087efd381b4)`(const FString & QueueId,const TArray< FString > & MatchmakingTags,const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` | Blueprint copmatible version of JoinQueue.
`public virtual void `[`LeaveQueue`](#classURH__OnlineSession_1a0a754169c7844f9ba6ab79032de1c503)`(const FRH_OnSessionUpdatedDelegateBlock Delegate)` | Leaves the currently active matchmaking queue.
`public inline void `[`BLUEPRINT_LeaveQueue`](#classURH__OnlineSession_1a3c807b01d9d8b0f4f7be9b492dc3e991)`(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` | Blueprint compatible version of LeaveQueue.
`public virtual void `[`InvitePlayer`](#classURH__OnlineSession_1ad70ea12303fcd653ebe61b924226cfc4)`(const FGuid & PlayerUuid,int32 Team,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Invites a player to the session.
`public virtual void `[`KickPlayer`](#classURH__OnlineSession_1a49280c5f4adb5a7042efe2f2baae02e7)`(const FGuid & PlayerUuid,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Kicks a player from the session.
`public virtual void `[`SetLeader`](#classURH__OnlineSession_1a6390169011f034c47a71e05afe9c01b2)`(const FGuid & PlayerUuid,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Sets a new leader for the session.
`public virtual void `[`ChangePlayerTeam`](#classURH__OnlineSession_1ae7f710b8ed44602fb6ee2bb835fb98ee)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock Delegate)` | Changes the team a given player is associated with in the session.
`public virtual void `[`Leave`](#classURH__OnlineSession_1a40be583c2bd361b8486c3a31da5071a7)`(bool bFromOSSSession,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Leaves the session.
`public virtual void `[`RequestInstance`](#classURH__OnlineSession_1a766abe6bfc854d504d3b45ec4d82d7be)`(const `[`FRHAPI_InstanceRequest`](models/RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Attempt to create a new instance for the session.
`public virtual void `[`EndInstance`](#classURH__OnlineSession_1ab82b0a5ac97ba6683a74d4cb42e6cead)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` | Shutdown the existing instance for the session.
`public virtual void `[`StartMatch`](#classURH__OnlineSession_1a95792a356bf5fc7b369aa1c25ff147d7)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` | Starts the match of the instance on the session.
`public virtual void `[`EndMatch`](#classURH__OnlineSession_1a2abf49834f147504b63e2d04e0c66725)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` | Ends the match of the instance on the session.
`public virtual void `[`UpdateSessionInfo`](#classURH__OnlineSession_1a6e0597334be4539298c82b56bc5bca1c)`(const `[`FRHAPI_SessionUpdate`](models/RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Updates the session info.
`public virtual void `[`UpdateInstanceInfo`](#classURH__OnlineSession_1a1fcf696fbe3ba03dcb6a7d97aac42e6e)`(const `[`FRHAPI_InstanceInfoUpdate`](models/RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Updates the sessions instance info.
`public virtual void `[`UpdateBrowserInfo`](#classURH__OnlineSession_1a178a6f88cd562156e9a11cb5ef025025)`(bool bEnable,const TMap< FString, FString > & CustomData,FRH_OnSessionUpdatedDelegateBlock Delegate)` | Updates the sessions browser info.

#### Members

#### `public inline virtual bool `[`IsOffline`](#classURH__OnlineSession_1af734641e6fe04130aadcfb7a6ed1d58a)`() const` <a id="classURH__OnlineSession_1af734641e6fe04130aadcfb7a6ed1d58a"></a>

Gets that an online session is not an offline session.

<br>
#### `public virtual void `[`ImportAPISession`](#classURH__OnlineSession_1a4fe7233a68b23d1ca4985d3b0e103ef5)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & newSessionData,const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` <a id="classURH__OnlineSession_1a4fe7233a68b23d1ca4985d3b0e103ef5"></a>

Update a session from the owner, implies a template update.

#### Parameters
* `newSessionData` The new session data. 

* `newTemplate` The new session template.

<br>
#### `public virtual void `[`Expire`](#classURH__OnlineSession_1abd9d440d9079d657622f572afe3ae9de)`(FRH_OnSessionExpiredDelegate Delegate)` <a id="classURH__OnlineSession_1abd9d440d9079d657622f572afe3ae9de"></a>

Called when the session was removed from our session list. Cleans up state then trigger callback on owner.

#### Parameters
* `Delegate` The delegate to call when the session is removed.

<br>
#### `public virtual void `[`JoinQueue`](#classURH__OnlineSession_1a29b7ca98ebc2bb66382f335c8da97e37)`(const FString & QueueId,const TArray< FString > MatchmakingTags,const FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1a29b7ca98ebc2bb66382f335c8da97e37"></a>

Joins a specific queue with the session to be matchmade with others.

#### Parameters
* `QueueId` The Id of the queue being joined. 

* `MatchmakingTags` Specific data to be passed in as extra params for matchmaking. 

* `Delegate` Callback delegate on the session being updated from joining matchmaking.

<br>
#### `public inline void `[`BLUEPRINT_JoinQueue`](#classURH__OnlineSession_1a18be3435bba8d4fdc3635087efd381b4)`(const FString & QueueId,const TArray< FString > & MatchmakingTags,const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` <a id="classURH__OnlineSession_1a18be3435bba8d4fdc3635087efd381b4"></a>

Blueprint copmatible version of JoinQueue.

#### Parameters
* `QueueId` The Id of the queue being joined. 

* `MatchmakingTags` Specific data to be passed in as extra params for matchmaking. 

* `Delegate` Callback delegate on the session being updated from joining matchmaking.

<br>
#### `public virtual void `[`LeaveQueue`](#classURH__OnlineSession_1a0a754169c7844f9ba6ab79032de1c503)`(const FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1a0a754169c7844f9ba6ab79032de1c503"></a>

Leaves the currently active matchmaking queue.

#### Parameters
* `Delegate` Callback delegate on the session being updated from leaving matchmaking.

<br>
#### `public inline void `[`BLUEPRINT_LeaveQueue`](#classURH__OnlineSession_1a3c807b01d9d8b0f4f7be9b492dc3e991)`(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` <a id="classURH__OnlineSession_1a3c807b01d9d8b0f4f7be9b492dc3e991"></a>

Blueprint compatible version of LeaveQueue.

#### Parameters
* `Delegate` Callback delegate on the session being updated from leaving matchmaking.

<br>
#### `public virtual void `[`InvitePlayer`](#classURH__OnlineSession_1ad70ea12303fcd653ebe61b924226cfc4)`(const FGuid & PlayerUuid,int32 Team,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1ad70ea12303fcd653ebe61b924226cfc4"></a>

Invites a player to the session.

#### Parameters
* `PlayerUuid` The unique player Id to invite to the session. 

* `Team` The target team that the player will be associated with in the session. 

* `Delegate` Callback delegate for the session being updated by the invite.

<br>
#### `public virtual void `[`KickPlayer`](#classURH__OnlineSession_1a49280c5f4adb5a7042efe2f2baae02e7)`(const FGuid & PlayerUuid,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1a49280c5f4adb5a7042efe2f2baae02e7"></a>

Kicks a player from the session.

#### Parameters
* `PlayerUuid` The unique player Id to kick from the session. 

* `Delegate` Callback delegate for the session being updated by the kick.

<br>
#### `public virtual void `[`SetLeader`](#classURH__OnlineSession_1a6390169011f034c47a71e05afe9c01b2)`(const FGuid & PlayerUuid,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1a6390169011f034c47a71e05afe9c01b2"></a>

Sets a new leader for the session.

#### Parameters
* `PlayerUuid` The unique player Id to become the session leader. 

* `Delegate` Callback delegate for the session being updated by the leader change.

<br>
#### `public virtual void `[`ChangePlayerTeam`](#classURH__OnlineSession_1ae7f710b8ed44602fb6ee2bb835fb98ee)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1ae7f710b8ed44602fb6ee2bb835fb98ee"></a>

Changes the team a given player is associated with in the session.

#### Parameters
* `PlayerUuid` The unique player Id to invite to the session. 

* `Team` The target team that the player will be associated with in the session. 

* `Delegate` Callback delegate for the session being updated by the team change.

<br>
#### `public virtual void `[`Leave`](#classURH__OnlineSession_1a40be583c2bd361b8486c3a31da5071a7)`(bool bFromOSSSession,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1a40be583c2bd361b8486c3a31da5071a7"></a>

Leaves the session.

#### Parameters
* `bFromOSSSession` If true, then leave the OSS Session. Otherwise, just leave the session. 

* `Delegate` Callback delegate for the session being updated by the leave.

<br>
#### `public virtual void `[`RequestInstance`](#classURH__OnlineSession_1a766abe6bfc854d504d3b45ec4d82d7be)`(const `[`FRHAPI_InstanceRequest`](models/RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1a766abe6bfc854d504d3b45ec4d82d7be"></a>

Attempt to create a new instance for the session.

#### Parameters
* `InstanceRequest` Details for the instance being requested. 

* `Delegate` Callback delegate for the session being updated with the instance creation, or failure.

<br>
#### `public virtual void `[`EndInstance`](#classURH__OnlineSession_1ab82b0a5ac97ba6683a74d4cb42e6cead)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1ab82b0a5ac97ba6683a74d4cb42e6cead"></a>

Shutdown the existing instance for the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the instance ending.

<br>
#### `public virtual void `[`StartMatch`](#classURH__OnlineSession_1a95792a356bf5fc7b369aa1c25ff147d7)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1a95792a356bf5fc7b369aa1c25ff147d7"></a>

Starts the match of the instance on the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the match start.

<br>
#### `public virtual void `[`EndMatch`](#classURH__OnlineSession_1a2abf49834f147504b63e2d04e0c66725)`(FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1a2abf49834f147504b63e2d04e0c66725"></a>

Ends the match of the instance on the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the match end.

<br>
#### `public virtual void `[`UpdateSessionInfo`](#classURH__OnlineSession_1a6e0597334be4539298c82b56bc5bca1c)`(const `[`FRHAPI_SessionUpdate`](models/RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1a6e0597334be4539298c82b56bc5bca1c"></a>

Updates the session info.

#### Parameters
* `Update` The session info for the update. 

* `Delegate` Callback delegate for the session being updated with new session data.

<br>
#### `public virtual void `[`UpdateInstanceInfo`](#classURH__OnlineSession_1a1fcf696fbe3ba03dcb6a7d97aac42e6e)`(const `[`FRHAPI_InstanceInfoUpdate`](models/RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1a1fcf696fbe3ba03dcb6a7d97aac42e6e"></a>

Updates the sessions instance info.

#### Parameters
* `Update` The instance info for the update. 

* `Delegate` Callback delegate for the session being updated with new instance data.

<br>
#### `public virtual void `[`UpdateBrowserInfo`](#classURH__OnlineSession_1a178a6f88cd562156e9a11cb5ef025025)`(bool bEnable,const TMap< FString, FString > & CustomData,FRH_OnSessionUpdatedDelegateBlock Delegate)` <a id="classURH__OnlineSession_1a178a6f88cd562156e9a11cb5ef025025"></a>

Updates the sessions browser info.

#### Parameters
* `bEnable` If true, sets the browser info. Otherwise, clear it out. 

* `CustomData` The new browser data for the update. 

* `Delegate` Callback delegate for the session being updated with new browser data.

<br>
## class `URH_SessionOwnerInterface` <a id="classURH__SessionOwnerInterface"></a>

```
class URH_SessionOwnerInterface
  : public UInterface
```

Session Owner Interface class.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

#### Members

## class `IRH_SessionOwnerInterface` <a id="classIRH__SessionOwnerInterface"></a>

Session Owner Interface.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FAuthContextPtr `[`GetSessionAuthContext`](#classIRH__SessionOwnerInterface_1aa1ed294ad1925cb314ae59c3b9ae7a69)`() const` | Gets the auth context to use for API calls for the session owner.
`public void `[`ImportAPISession`](#classIRH__SessionOwnerInterface_1a47357a19f44fe9006ade44cd3e6961ce)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` | Imports a session object from the API into the owner (ex: from polling).
`public void `[`ImportAPITemplate`](#classIRH__SessionOwnerInterface_1ac81c6da37366c6151656aa2113eeed92)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` | Imports the template into the owner's template list (ex: from polling).
`public void `[`ReconcileAPISessions`](#classIRH__SessionOwnerInterface_1a992fa72f901dfaab13d6f59b629b02ca)`(const TArray< FString > & SessionIds,const TOptional< FString > ETag)` | Updates the list of sessions to only those that are active.
`public void `[`ReconcileAPITemplates`](#classIRH__SessionOwnerInterface_1a89fd4468019e5a1d8bf9a2f520064bbb)`(const TArray< FString > & InTemplates,const TOptional< FString > ETag)` | Updates the list of session templates to those that are active.
`public class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classIRH__SessionOwnerInterface_1abcf3e2921d15c88817b0a82b936b0f35)`() const` | Gets the PlayerInfo Subsystem.
`public IOnlineSubsystem * `[`GetOSS`](#classIRH__SessionOwnerInterface_1a3ede591e11069d01484302cbdc7acf25)`() const` | Gets the Online Subsystem to use for OSS calls.
`public FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classIRH__SessionOwnerInterface_1ae7d146121a241b23c58cbf22cbb0debf)`() const` | Gets the Online Subsystem Unique Id to use for OSS calls.
`public inline TOptional< FString > `[`GetETagForSession`](#classIRH__SessionOwnerInterface_1a1af5c13f953285114e7e0ba2c7133c1d)`(const FString & SessionId) const` | Gets the Etag for a given Session.
`public TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classIRH__SessionOwnerInterface_1aebf9f97e3204d81b31c92e3a5e6ba63d)`() const` | Gets the etag to use for a "Get all Templates" type query.
`public TOptional< FString > `[`GetETagForAllSessionsPoll`](#classIRH__SessionOwnerInterface_1a745015623671711254ef390ee9cb7802)`() const` | Gets the etag to use for a "Get all Sessions" type query.
`public TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classIRH__SessionOwnerInterface_1a66e998565bf74dbfc85ea6247341b7a4)`() const` | Used to get all sessions, primarily for get all sessions polling where etag matches.
`public `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classIRH__SessionOwnerInterface_1a094dc2179856a012677d16d9f6684c82)`(const FString & SessionId) const` | Gets a session by its id.
`public bool `[`GetTemplate`](#classIRH__SessionOwnerInterface_1ae474fab73509d0a00372966f39ce216b)`(const FString & Type,`[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` | Gets a session template by type.
`public `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classIRH__SessionOwnerInterface_1ade9ca2876030b163a060e8f417889985)`(const FString & SessionId) const` | Gets the platform synchronization object using the rally here session id.
`public `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classIRH__SessionOwnerInterface_1a47d9ac6d2c0326ddc79c563932a6754c)`(const FUniqueNetIdRepl & SessionId) const` | Gets the platform synchronization object using the platform session id.

#### Members

#### `public FAuthContextPtr `[`GetSessionAuthContext`](#classIRH__SessionOwnerInterface_1aa1ed294ad1925cb314ae59c3b9ae7a69)`() const` <a id="classIRH__SessionOwnerInterface_1aa1ed294ad1925cb314ae59c3b9ae7a69"></a>

Gets the auth context to use for API calls for the session owner.

<br>
#### `public void `[`ImportAPISession`](#classIRH__SessionOwnerInterface_1a47357a19f44fe9006ade44cd3e6961ce)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` <a id="classIRH__SessionOwnerInterface_1a47357a19f44fe9006ade44cd3e6961ce"></a>

Imports a session object from the API into the owner (ex: from polling).

#### Parameters
* `Session` The Session to import.

<br>
#### `public void `[`ImportAPITemplate`](#classIRH__SessionOwnerInterface_1ac81c6da37366c6151656aa2113eeed92)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` <a id="classIRH__SessionOwnerInterface_1ac81c6da37366c6151656aa2113eeed92"></a>

Imports the template into the owner's template list (ex: from polling).

#### Parameters
* `TemplateWrapper` The Template to import.

<br>
#### `public void `[`ReconcileAPISessions`](#classIRH__SessionOwnerInterface_1a992fa72f901dfaab13d6f59b629b02ca)`(const TArray< FString > & SessionIds,const TOptional< FString > ETag)` <a id="classIRH__SessionOwnerInterface_1a992fa72f901dfaab13d6f59b629b02ca"></a>

Updates the list of sessions to only those that are active.

#### Parameters
* `SessionIds` The list of sessions that we are reconciling against. 

* `ETag` The ETag to use for the update.

<br>
#### `public void `[`ReconcileAPITemplates`](#classIRH__SessionOwnerInterface_1a89fd4468019e5a1d8bf9a2f520064bbb)`(const TArray< FString > & InTemplates,const TOptional< FString > ETag)` <a id="classIRH__SessionOwnerInterface_1a89fd4468019e5a1d8bf9a2f520064bbb"></a>

Updates the list of session templates to those that are active.

#### Parameters
* `InTemplates` The list of templates that we are reconciling against. 

* `ETag` The ETag to use for the update.

<br>
#### `public class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classIRH__SessionOwnerInterface_1abcf3e2921d15c88817b0a82b936b0f35)`() const` <a id="classIRH__SessionOwnerInterface_1abcf3e2921d15c88817b0a82b936b0f35"></a>

Gets the PlayerInfo Subsystem.

<br>
#### `public IOnlineSubsystem * `[`GetOSS`](#classIRH__SessionOwnerInterface_1a3ede591e11069d01484302cbdc7acf25)`() const` <a id="classIRH__SessionOwnerInterface_1a3ede591e11069d01484302cbdc7acf25"></a>

Gets the Online Subsystem to use for OSS calls.

<br>
#### `public FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classIRH__SessionOwnerInterface_1ae7d146121a241b23c58cbf22cbb0debf)`() const` <a id="classIRH__SessionOwnerInterface_1ae7d146121a241b23c58cbf22cbb0debf"></a>

Gets the Online Subsystem Unique Id to use for OSS calls.

<br>
#### `public inline TOptional< FString > `[`GetETagForSession`](#classIRH__SessionOwnerInterface_1a1af5c13f953285114e7e0ba2c7133c1d)`(const FString & SessionId) const` <a id="classIRH__SessionOwnerInterface_1a1af5c13f953285114e7e0ba2c7133c1d"></a>

Gets the Etag for a given Session.

#### Parameters
* `SessionId` The Session Id to get the ETag for. 

#### Returns
The ETag for the session.

<br>
#### `public TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classIRH__SessionOwnerInterface_1aebf9f97e3204d81b31c92e3a5e6ba63d)`() const` <a id="classIRH__SessionOwnerInterface_1aebf9f97e3204d81b31c92e3a5e6ba63d"></a>

Gets the etag to use for a "Get all Templates" type query.

<br>
#### `public TOptional< FString > `[`GetETagForAllSessionsPoll`](#classIRH__SessionOwnerInterface_1a745015623671711254ef390ee9cb7802)`() const` <a id="classIRH__SessionOwnerInterface_1a745015623671711254ef390ee9cb7802"></a>

Gets the etag to use for a "Get all Sessions" type query.

<br>
#### `public TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classIRH__SessionOwnerInterface_1a66e998565bf74dbfc85ea6247341b7a4)`() const` <a id="classIRH__SessionOwnerInterface_1a66e998565bf74dbfc85ea6247341b7a4"></a>

Used to get all sessions, primarily for get all sessions polling where etag matches.

<br>
#### `public `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classIRH__SessionOwnerInterface_1a094dc2179856a012677d16d9f6684c82)`(const FString & SessionId) const` <a id="classIRH__SessionOwnerInterface_1a094dc2179856a012677d16d9f6684c82"></a>

Gets a session by its id.

#### Parameters
* `SessionId` The Session Id to get. 

#### Returns
The Session with the given Id.

<br>
#### `public bool `[`GetTemplate`](#classIRH__SessionOwnerInterface_1ae474fab73509d0a00372966f39ce216b)`(const FString & Type,`[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` <a id="classIRH__SessionOwnerInterface_1ae474fab73509d0a00372966f39ce216b"></a>

Gets a session template by type.

#### Parameters
* `Type` the Type of template to get. 

* `Template` The session template being retrieved. 

#### Returns
If true, the template was found.

<br>
#### `public `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classIRH__SessionOwnerInterface_1ade9ca2876030b163a060e8f417889985)`(const FString & SessionId) const` <a id="classIRH__SessionOwnerInterface_1ade9ca2876030b163a060e8f417889985"></a>

Gets the platform synchronization object using the rally here session id.

<br>
#### `public `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classIRH__SessionOwnerInterface_1a47d9ac6d2c0326ddc79c563932a6754c)`(const FUniqueNetIdRepl & SessionId) const` <a id="classIRH__SessionOwnerInterface_1a47d9ac6d2c0326ddc79c563932a6754c"></a>

Gets the platform synchronization object using the platform session id.

<br>
## struct `FRH_SessionBrowserSearchParams` <a id="structFRH__SessionBrowserSearchParams"></a>

Struct containing the search paramaters for Session Browsers.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionType`](#structFRH__SessionBrowserSearchParams_1a25ef289d60be155f1caeaddd19c5cc0a) | The Type of Session to search for.
`public int32 `[`Cursor`](#structFRH__SessionBrowserSearchParams_1a987cdfb2a54b641a8724c578d4900bfc) | The indicator of what page to request of results.
`public int32 `[`PageSize`](#structFRH__SessionBrowserSearchParams_1a8de9c480f8dedf19d415e564fe201e96) | The size of each page of results.
`public inline  `[`FRH_SessionBrowserSearchParams`](#structFRH__SessionBrowserSearchParams_1ac8b5657a750ea3b355f344334f9048c0)`()` | Default constructor.
`public inline FString `[`GetDescription`](#structFRH__SessionBrowserSearchParams_1af1c20cb69cc90ba84f385b67489bae24)`() const` | Returns display of search params for toolings/logging.

#### Members

#### `public FString `[`SessionType`](#structFRH__SessionBrowserSearchParams_1a25ef289d60be155f1caeaddd19c5cc0a) <a id="structFRH__SessionBrowserSearchParams_1a25ef289d60be155f1caeaddd19c5cc0a"></a>

The Type of Session to search for.

<br>
#### `public int32 `[`Cursor`](#structFRH__SessionBrowserSearchParams_1a987cdfb2a54b641a8724c578d4900bfc) <a id="structFRH__SessionBrowserSearchParams_1a987cdfb2a54b641a8724c578d4900bfc"></a>

The indicator of what page to request of results.

<br>
#### `public int32 `[`PageSize`](#structFRH__SessionBrowserSearchParams_1a8de9c480f8dedf19d415e564fe201e96) <a id="structFRH__SessionBrowserSearchParams_1a8de9c480f8dedf19d415e564fe201e96"></a>

The size of each page of results.

<br>
#### `public inline  `[`FRH_SessionBrowserSearchParams`](#structFRH__SessionBrowserSearchParams_1ac8b5657a750ea3b355f344334f9048c0)`()` <a id="structFRH__SessionBrowserSearchParams_1ac8b5657a750ea3b355f344334f9048c0"></a>

Default constructor.

<br>
#### `public inline FString `[`GetDescription`](#structFRH__SessionBrowserSearchParams_1af1c20cb69cc90ba84f385b67489bae24)`() const` <a id="structFRH__SessionBrowserSearchParams_1af1c20cb69cc90ba84f385b67489bae24"></a>

Returns display of search params for toolings/logging.

<br>
## struct `FRH_SessionMemberStatusState` <a id="structFRH__SessionMemberStatusState"></a>

Utility struct to wrapper a player state for a player state update change.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRH__SessionMemberStatusState_1a76d37d922b396d305d81cb664474f6fe) | Player Uuid for this state.
`public bool `[`bIsValid`](#structFRH__SessionMemberStatusState_1aebc9381743eb320abfa3cc00b4013c79) | Whether the state is valid (a state is not valid if a player is not associated with the session)
`public ERHAPI_SessionPlayerStatus `[`Status`](#structFRH__SessionMemberStatusState_1a68299be55e4a6990bc104962858a5520) | Status of the player at the time of recording the state.
`public int32 `[`TeamId`](#structFRH__SessionMemberStatusState_1a97294b0f0dda906b3730bc83851b0f17) | Team of the player at the time of recording the state.
`public inline  `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState_1a1202bc97c79d5343b0fcdc562c7c5ab3)`()` | Default Constructor.
`public inline FORCEINLINE bool `[`operator==`](#structFRH__SessionMemberStatusState_1ae90f45dc88b07c0f189043b55d5aedd6)`(const `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState)` & Comparator) const` | Equivalence check used to determine if a notification should be dispatched.
`public inline FORCEINLINE bool `[`operator!=`](#structFRH__SessionMemberStatusState_1ad1dc9f123f6021dfe08d8edb2b37bd56)`(const `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState)` & Comparator) const` | Inequivalence check used to determine if a notification should be dispatched.

#### Members

#### `public FGuid `[`PlayerUuid`](#structFRH__SessionMemberStatusState_1a76d37d922b396d305d81cb664474f6fe) <a id="structFRH__SessionMemberStatusState_1a76d37d922b396d305d81cb664474f6fe"></a>

Player Uuid for this state.

<br>
#### `public bool `[`bIsValid`](#structFRH__SessionMemberStatusState_1aebc9381743eb320abfa3cc00b4013c79) <a id="structFRH__SessionMemberStatusState_1aebc9381743eb320abfa3cc00b4013c79"></a>

Whether the state is valid (a state is not valid if a player is not associated with the session)

<br>
#### `public ERHAPI_SessionPlayerStatus `[`Status`](#structFRH__SessionMemberStatusState_1a68299be55e4a6990bc104962858a5520) <a id="structFRH__SessionMemberStatusState_1a68299be55e4a6990bc104962858a5520"></a>

Status of the player at the time of recording the state.

<br>
#### `public int32 `[`TeamId`](#structFRH__SessionMemberStatusState_1a97294b0f0dda906b3730bc83851b0f17) <a id="structFRH__SessionMemberStatusState_1a97294b0f0dda906b3730bc83851b0f17"></a>

Team of the player at the time of recording the state.

<br>
#### `public inline  `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState_1a1202bc97c79d5343b0fcdc562c7c5ab3)`()` <a id="structFRH__SessionMemberStatusState_1a1202bc97c79d5343b0fcdc562c7c5ab3"></a>

Default Constructor.

<br>
#### `public inline FORCEINLINE bool `[`operator==`](#structFRH__SessionMemberStatusState_1ae90f45dc88b07c0f189043b55d5aedd6)`(const `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState)` & Comparator) const` <a id="structFRH__SessionMemberStatusState_1ae90f45dc88b07c0f189043b55d5aedd6"></a>

Equivalence check used to determine if a notification should be dispatched.

<br>
#### `public inline FORCEINLINE bool `[`operator!=`](#structFRH__SessionMemberStatusState_1ad1dc9f123f6021dfe08d8edb2b37bd56)`(const `[`FRH_SessionMemberStatusState`](#structFRH__SessionMemberStatusState)` & Comparator) const` <a id="structFRH__SessionMemberStatusState_1ad1dc9f123f6021dfe08d8edb2b37bd56"></a>

Inequivalence check used to determine if a notification should be dispatched.

<br>
## struct `TRH_DataWithETagWrapper` <a id="structTRH__DataWithETagWrapper"></a>

Utility struct to wrapper the tuple of a data typeand etag.

#### Summary

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

#### Members

#### `public T `[`Data`](#structTRH__DataWithETagWrapper_1a2960467e896ec054570d055fdaa49ca6) <a id="structTRH__DataWithETagWrapper_1a2960467e896ec054570d055fdaa49ca6"></a>

The wrapped Data.

<br>
#### `public TOptional< FString > `[`ETag`](#structTRH__DataWithETagWrapper_1a1ddb3e8c57e0c49da601cea440987522) <a id="structTRH__DataWithETagWrapper_1a1ddb3e8c57e0c49da601cea440987522"></a>

The Datas ETag.

<br>
#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a5071c87ca10290a49539caf502f9301c)`()` <a id="structTRH__DataWithETagWrapper_1a5071c87ca10290a49539caf502f9301c"></a>

Default Constructor.

<br>
#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a56dcc8d95327b8f997aab3333a80db31)`(const T & InData)` <a id="structTRH__DataWithETagWrapper_1a56dcc8d95327b8f997aab3333a80db31"></a>

Various constructors for ease of use.

<br>
#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a0a496e654507008eae1e66bd281b6bd9)`(T && InData)` <a id="structTRH__DataWithETagWrapper_1a0a496e654507008eae1e66bd281b6bd9"></a>

Various constructors for ease of use.

<br>
#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a1e094404d0d2660d00d0cdd766e3dbc7)`(T & InData,const FString & InETag)` <a id="structTRH__DataWithETagWrapper_1a1e094404d0d2660d00d0cdd766e3dbc7"></a>

Various constructors for ease of use.

<br>
#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1adc0a8ee56c5cbfdb04e5183f9151e92d)`(T && InData,FString && InETag)` <a id="structTRH__DataWithETagWrapper_1adc0a8ee56c5cbfdb04e5183f9151e92d"></a>

Various constructors for ease of use.

<br>
#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1ae98dfaed26e4adcff0f40c9130c8d654)`(const T & InData,const TOptional< FString > & InETag)` <a id="structTRH__DataWithETagWrapper_1ae98dfaed26e4adcff0f40c9130c8d654"></a>

Various constructors for ease of use.

<br>
#### `public inline  `[`TRH_DataWithETagWrapper`](#structTRH__DataWithETagWrapper_1a66563f74c8068348407e8a1635e5a3f0)`(T && InData,TOptional< FString > && InETag)` <a id="structTRH__DataWithETagWrapper_1a66563f74c8068348407e8a1635e5a3f0"></a>

Various constructors for ease of use.

<br>
## struct `FRH_DeferredSessionPoll` <a id="structFRH__DeferredSessionPoll"></a>

Poll for deferred sessions.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public Type `[`PollType`](#structFRH__DeferredSessionPoll_1a1b6e4728b244a5a51a57a24f9b7980f7) | 
`public FRH_PollCompleteFunc `[`Delegate`](#structFRH__DeferredSessionPoll_1a27e856ce05ca57fb9cf98762fd5ee931) | 
`public TOptional< FString > `[`ETag`](#structFRH__DeferredSessionPoll_1a1cf5a6766199ca4c859b30dff02f99e9) | 
`public inline  `[`FRH_DeferredSessionPoll`](#structFRH__DeferredSessionPoll_1af7f09aea5ebde9c12e52431272c8470b)`(Type InPollType,const FRH_PollCompleteFunc & InDelegate,const TOptional< FString > & InETag)` | 
`enum `[`Type`](#structFRH__DeferredSessionPoll_1aea2383ee336ab25c2f43466ea767a4b1) | 

#### Members

#### `public Type `[`PollType`](#structFRH__DeferredSessionPoll_1a1b6e4728b244a5a51a57a24f9b7980f7) <a id="structFRH__DeferredSessionPoll_1a1b6e4728b244a5a51a57a24f9b7980f7"></a>

<br>
#### `public FRH_PollCompleteFunc `[`Delegate`](#structFRH__DeferredSessionPoll_1a27e856ce05ca57fb9cf98762fd5ee931) <a id="structFRH__DeferredSessionPoll_1a27e856ce05ca57fb9cf98762fd5ee931"></a>

<br>
#### `public TOptional< FString > `[`ETag`](#structFRH__DeferredSessionPoll_1a1cf5a6766199ca4c859b30dff02f99e9) <a id="structFRH__DeferredSessionPoll_1a1cf5a6766199ca4c859b30dff02f99e9"></a>

<br>
#### `public inline  `[`FRH_DeferredSessionPoll`](#structFRH__DeferredSessionPoll_1af7f09aea5ebde9c12e52431272c8470b)`(Type InPollType,const FRH_PollCompleteFunc & InDelegate,const TOptional< FString > & InETag)` <a id="structFRH__DeferredSessionPoll_1af7f09aea5ebde9c12e52431272c8470b"></a>

<br>
#### `enum `[`Type`](#structFRH__DeferredSessionPoll_1aea2383ee336ab25c2f43466ea767a4b1) <a id="structFRH__DeferredSessionPoll_1aea2383ee336ab25c2f43466ea767a4b1"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
Forced            | 
Modification            | 
Notification            | 

<br>
