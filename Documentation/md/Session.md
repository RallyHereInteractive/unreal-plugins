# Session <a id="group__Session"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
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

## class `URH_SessionBrowserCache` <a id="classURH__SessionBrowserCache"></a>

```
class URH_SessionBrowserCache
  : public URH_SandboxedSubsystemPlugin
  : public IRH_SessionOwnerInterface
```

Simple container class to hold session view data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`URH_SessionBrowserCache`](#classURH__SessionBrowserCache_1a62c14a0d2d7a4319ffdb92ad829e6ba0)`()` | Default constructor.
`public void `[`Search`](#classURH__SessionBrowserCache_1a7c3c586c5d3de3fb1511be825c8840c9)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & params,const FRH_OnSessionSearchCompleteDelegateBlock & Delegate)` | Makes a call to search for session browsers.
`public inline void `[`BLUEPRINT_Search`](#classURH__SessionBrowserCache_1aef57a504c6238f35f6040a3c8b0f2b13)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & params,FRH_OnSessionSearchCompleteDynamicDelegate Delegate)` | 
`public inline void `[`ClearCache`](#classURH__SessionBrowserCache_1ab6fc51bbfa94876b68dc96846fe3c920)`(bool bClearTemplates)` | Clears the cached sessions, and optionally the cached templates.
`public virtual FAuthContextPtr `[`GetSessionAuthContext`](#classURH__SessionBrowserCache_1a097ea9b50702c214574c512697427337)`() const` | Gets the auth context to use for API calls for the session owner.
`public virtual void `[`ImportAPISession`](#classURH__SessionBrowserCache_1ad7879d7762f0c548483d4b0f04558b97)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` | Adds a session into the session cache.
`public virtual void `[`ImportAPITemplate`](#classURH__SessionBrowserCache_1a59bae44be9047e2b2e107c27644eb6b0)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` | Adds a new session template type to the templates.
`public inline virtual void `[`ReconcileAPISessions`](#classURH__SessionBrowserCache_1aec55593cc0c5248cb9a2eacab2c5e484)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` | Updates the list of sessions to only those that are active.
`public inline virtual void `[`ReconcileAPITemplates`](#classURH__SessionBrowserCache_1a599273fe6e4ea36ab930c56f077eff91)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` | Updates the list of session templates to those that are active.
`public virtual class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__SessionBrowserCache_1ac59f177acf3996badf4dd9907c0e66e8)`() const` | Gets the PlayerInfo Subsystem.
`public inline virtual IOnlineSubsystem * `[`GetOSS`](#classURH__SessionBrowserCache_1a83aee966f46fa0846e717d03fd9d9963)`() const` | Gets the Online Subsystem to use for OSS calls.
`public inline virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__SessionBrowserCache_1a65fc8b708ead7613eccfff0845f4c131)`() const` | Gets the Online Subsystem Unique Id to use for OSS calls.
`public inline virtual TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classURH__SessionBrowserCache_1aa76b9eb09fb687bff5252effe7da2b0e)`() const` | Gets the etag to use for a "Get all Templates" type query.
`public inline virtual TOptional< FString > `[`GetETagForAllSessionsPoll`](#classURH__SessionBrowserCache_1af673c57a58cd96f48687778033b0c9e4)`() const` | Gets the etag to use for a "Get all Sessions" type query.
`public inline virtual TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classURH__SessionBrowserCache_1aa05dd036c2dacc629cbf2d55b90efcdf)`() const` | Used to get all sessions, primarily for get all sessions polling where etag matches.
`public inline virtual `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classURH__SessionBrowserCache_1aa64b3bc0c50822dfc08403fa30416907)`(const FString & SessionId) const` | Gets a session by its id.
`public virtual bool `[`GetTemplate`](#classURH__SessionBrowserCache_1aa529f70a678eb8569e794a9366d8e4fd)`(const FString & Type,`[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` | Gets a session template by type.
`public inline virtual `[`URH_PlatformSessionSyncer`](undefined.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classURH__SessionBrowserCache_1a7315ff647e9507c03a8e4b4b22657fed)`(const FString & SessionId) const` | Gets the platform synchronization object using the rally here session id.
`public inline virtual `[`URH_PlatformSessionSyncer`](undefined.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classURH__SessionBrowserCache_1a363341b102359f9b6d90bfd1f3f73b3b)`(const FUniqueNetIdRepl & PlatformSessionId) const` | Gets the platform synchronization object using the platform session id.

#### Members

#### `public  `[`URH_SessionBrowserCache`](#classURH__SessionBrowserCache_1a62c14a0d2d7a4319ffdb92ad829e6ba0)`()` <a id="classURH__SessionBrowserCache_1a62c14a0d2d7a4319ffdb92ad829e6ba0"></a>

Default constructor.

<br>
#### `public void `[`Search`](#classURH__SessionBrowserCache_1a7c3c586c5d3de3fb1511be825c8840c9)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & params,const FRH_OnSessionSearchCompleteDelegateBlock & Delegate)` <a id="classURH__SessionBrowserCache_1a7c3c586c5d3de3fb1511be825c8840c9"></a>

Makes a call to search for session browsers.

#### Parameters
* `params` The search paramaters to use. 

* `Delegate` Callback delegate for when the search is completed.

<br>
#### `public inline void `[`BLUEPRINT_Search`](#classURH__SessionBrowserCache_1aef57a504c6238f35f6040a3c8b0f2b13)`(const `[`FRH_SessionBrowserSearchParams`](Session.md#structFRH__SessionBrowserSearchParams)` & params,FRH_OnSessionSearchCompleteDynamicDelegate Delegate)` <a id="classURH__SessionBrowserCache_1aef57a504c6238f35f6040a3c8b0f2b13"></a>

<br>
#### `public inline void `[`ClearCache`](#classURH__SessionBrowserCache_1ab6fc51bbfa94876b68dc96846fe3c920)`(bool bClearTemplates)` <a id="classURH__SessionBrowserCache_1ab6fc51bbfa94876b68dc96846fe3c920"></a>

Clears the cached sessions, and optionally the cached templates.

#### Parameters
* `bClearTemplates` If true, clear the templates as well.

<br>
#### `public virtual FAuthContextPtr `[`GetSessionAuthContext`](#classURH__SessionBrowserCache_1a097ea9b50702c214574c512697427337)`() const` <a id="classURH__SessionBrowserCache_1a097ea9b50702c214574c512697427337"></a>

Gets the auth context to use for API calls for the session owner.

<br>
#### `public virtual void `[`ImportAPISession`](#classURH__SessionBrowserCache_1ad7879d7762f0c548483d4b0f04558b97)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` <a id="classURH__SessionBrowserCache_1ad7879d7762f0c548483d4b0f04558b97"></a>

Adds a session into the session cache.

#### Parameters
* `Session` The session to add.

<br>
#### `public virtual void `[`ImportAPITemplate`](#classURH__SessionBrowserCache_1a59bae44be9047e2b2e107c27644eb6b0)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` <a id="classURH__SessionBrowserCache_1a59bae44be9047e2b2e107c27644eb6b0"></a>

Adds a new session template type to the templates.

#### Parameters
* `Template` The template ot add.

<br>
#### `public inline virtual void `[`ReconcileAPISessions`](#classURH__SessionBrowserCache_1aec55593cc0c5248cb9a2eacab2c5e484)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` <a id="classURH__SessionBrowserCache_1aec55593cc0c5248cb9a2eacab2c5e484"></a>

Updates the list of sessions to only those that are active.

#### Parameters
* `SessionIds` The list of sessions that we are reconciling against. 

* `ETag` The ETag to use for the update.

<br>
#### `public inline virtual void `[`ReconcileAPITemplates`](#classURH__SessionBrowserCache_1a599273fe6e4ea36ab930c56f077eff91)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` <a id="classURH__SessionBrowserCache_1a599273fe6e4ea36ab930c56f077eff91"></a>

Updates the list of session templates to those that are active.

#### Parameters
* `InTemplates` The list of templates that we are reconciling against. 

* `ETag` The ETag to use for the update.

<br>
#### `public virtual class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__SessionBrowserCache_1ac59f177acf3996badf4dd9907c0e66e8)`() const` <a id="classURH__SessionBrowserCache_1ac59f177acf3996badf4dd9907c0e66e8"></a>

Gets the PlayerInfo Subsystem.

<br>
#### `public inline virtual IOnlineSubsystem * `[`GetOSS`](#classURH__SessionBrowserCache_1a83aee966f46fa0846e717d03fd9d9963)`() const` <a id="classURH__SessionBrowserCache_1a83aee966f46fa0846e717d03fd9d9963"></a>

Gets the Online Subsystem to use for OSS calls.

<br>
#### `public inline virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__SessionBrowserCache_1a65fc8b708ead7613eccfff0845f4c131)`() const` <a id="classURH__SessionBrowserCache_1a65fc8b708ead7613eccfff0845f4c131"></a>

Gets the Online Subsystem Unique Id to use for OSS calls.

<br>
#### `public inline virtual TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classURH__SessionBrowserCache_1aa76b9eb09fb687bff5252effe7da2b0e)`() const` <a id="classURH__SessionBrowserCache_1aa76b9eb09fb687bff5252effe7da2b0e"></a>

Gets the etag to use for a "Get all Templates" type query.

<br>
#### `public inline virtual TOptional< FString > `[`GetETagForAllSessionsPoll`](#classURH__SessionBrowserCache_1af673c57a58cd96f48687778033b0c9e4)`() const` <a id="classURH__SessionBrowserCache_1af673c57a58cd96f48687778033b0c9e4"></a>

Gets the etag to use for a "Get all Sessions" type query.

<br>
#### `public inline virtual TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classURH__SessionBrowserCache_1aa05dd036c2dacc629cbf2d55b90efcdf)`() const` <a id="classURH__SessionBrowserCache_1aa05dd036c2dacc629cbf2d55b90efcdf"></a>

Used to get all sessions, primarily for get all sessions polling where etag matches.

<br>
#### `public inline virtual `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classURH__SessionBrowserCache_1aa64b3bc0c50822dfc08403fa30416907)`(const FString & SessionId) const` <a id="classURH__SessionBrowserCache_1aa64b3bc0c50822dfc08403fa30416907"></a>

Gets a session by its id.

#### Parameters
* `SessionId` The Session Id to get. 

#### Returns
The Session with the given Id.

<br>
#### `public virtual bool `[`GetTemplate`](#classURH__SessionBrowserCache_1aa529f70a678eb8569e794a9366d8e4fd)`(const FString & Type,`[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` <a id="classURH__SessionBrowserCache_1aa529f70a678eb8569e794a9366d8e4fd"></a>

Gets a session template by type.

#### Parameters
* `Type` the Type of template to get. 

* `Template` The session template being retrieved. 

#### Returns
If true, the template was found.

<br>
#### `public inline virtual `[`URH_PlatformSessionSyncer`](undefined.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classURH__SessionBrowserCache_1a7315ff647e9507c03a8e4b4b22657fed)`(const FString & SessionId) const` <a id="classURH__SessionBrowserCache_1a7315ff647e9507c03a8e4b4b22657fed"></a>

Gets the platform synchronization object using the rally here session id.

<br>
#### `public inline virtual `[`URH_PlatformSessionSyncer`](undefined.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classURH__SessionBrowserCache_1a363341b102359f9b6d90bfd1f3f73b3b)`(const FUniqueNetIdRepl & PlatformSessionId) const` <a id="classURH__SessionBrowserCache_1a363341b102359f9b6d90bfd1f3f73b3b"></a>

Gets the platform synchronization object using the platform session id.

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
`public inline FORCEINLINE int32 `[`GetSessionPlayerTeamId`](#classURH__SessionView_1a0bfd9114186b65e9d6ab6b4c97552fa5)`(const FGuid & PlayerUuid) const` | Gets the team id of a player if they are part of the session.
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
`public bool `[`GetPlatformSession`](#classURH__SessionView_1aa477ffc8b54fb7d355664615900a6603)`(ERHAPI_Platform Platform,`[`FRHAPI_PlatformSession`](models/RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` & OutPlatformSession) const` | Get the platform session data for a specific platform id 
`public virtual void `[`ImportAPISession`](#classURH__SessionView_1a92790b540906943bf8501049b45222b3)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & newSessionData,const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` | Update a session from the owner, implies a template update.
`public virtual void `[`ImportTemplate`](#classURH__SessionView_1aa910b3892253ae47a3eedf5f91eae252)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` | Update the session template .
`public virtual void `[`Expire`](#classURH__SessionView_1a81b861028c8b998005d3627752cce51f)`(const FRH_OnSessionExpiredDelegate & Delegate)` | Called when the session was removed from our session list. Cleans up state then trigger callback on owner.
`public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`GetSessionOwner`](#classURH__SessionView_1ab4c61212a9d10507d2aab3d645b4b985)`() const` | Gets the session owner.
`public void `[`StartPolling`](#classURH__SessionView_1a488f1c164e31d30c17d98f13226c6079)`()` | Starts the polling of session updates.
`public void `[`StopPolling`](#classURH__SessionView_1aa34ca34af04d8bcb3200d48395c242c2)`()` | Stops the polling for session updates.
`public void `[`DeferPolling`](#classURH__SessionView_1a09c8faf3934af2d317d955cbd5da5ed3)`()` | Defers the polling for session updates (in case an out-of-band update was received)
`public float `[`GetPollTimeRemaining`](#classURH__SessionView_1aa57cc3f86e075380283f9a7a22d07a06)`()` | Gets the current time remaining in the poll cycle in seconds. Returns -1.f if poll is inactive or is executing.
`public void `[`ForcePollForUpdate`](#classURH__SessionView_1a3dcdea9537922b7c533929b05dc5c885)`(bool bClearETag)` | Forces a polling call even if the polling is waiting till next time to pulse.
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
#### `public inline FORCEINLINE int32 `[`GetSessionPlayerTeamId`](#classURH__SessionView_1a0bfd9114186b65e9d6ab6b4c97552fa5)`(const FGuid & PlayerUuid) const` <a id="classURH__SessionView_1a0bfd9114186b65e9d6ab6b4c97552fa5"></a>

Gets the team id of a player if they are part of the session.

#### Parameters
* `PlayerUuid` The unique Id of the player to get. 

#### Returns
The player's team id if they exist in the session, otherwise INDEX_NONE.

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
#### `public bool `[`GetPlatformSession`](#classURH__SessionView_1aa477ffc8b54fb7d355664615900a6603)`(ERHAPI_Platform Platform,`[`FRHAPI_PlatformSession`](models/RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` & OutPlatformSession) const` <a id="classURH__SessionView_1aa477ffc8b54fb7d355664615900a6603"></a>

Get the platform session data for a specific platform id 
#### Parameters
* `Platform` The platform id to get the session data for 

* `OutPlatformSession` The platform session data for the specified platform id 

#### Returns
If true, the platform session data was found

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
#### `public virtual void `[`Expire`](#classURH__SessionView_1a81b861028c8b998005d3627752cce51f)`(const FRH_OnSessionExpiredDelegate & Delegate)` <a id="classURH__SessionView_1a81b861028c8b998005d3627752cce51f"></a>

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
#### `public void `[`ForcePollForUpdate`](#classURH__SessionView_1a3dcdea9537922b7c533929b05dc5c885)`(bool bClearETag)` <a id="classURH__SessionView_1a3dcdea9537922b7c533929b05dc5c885"></a>

Forces a polling call even if the polling is waiting till next time to pulse.

#### Parameters
* `bClearETag` If true, the ETag will be cleared before the poll.

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
`public virtual void `[`Join`](#classURH__InvitedSession_1a533ddfa3135881b4b4ed6b7f57cb809e)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Accepts to join the session.
`public inline void `[`BLUEPRINT_Join`](#classURH__InvitedSession_1ae695534cc3653e4cf7374b54a030133b)`(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` | Blueprint compatible version of Join.
`public virtual void `[`Leave`](#classURH__InvitedSession_1ac9e1131d672b7e6f7dd4a476d54e80aa)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Declines to join the session.
`public inline void `[`BLUEPRINT_Leave`](#classURH__InvitedSession_1a5710f9c6987179ca0489029cb3bced79)`(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` | Blueprint compatible version of Leave.

#### Members

#### `public inline virtual bool `[`IsOffline`](#classURH__InvitedSession_1af877279192bb132ceb1128b5fc5f6f2b)`() const` <a id="classURH__InvitedSession_1af877279192bb132ceb1128b5fc5f6f2b"></a>

Gets that an invited session is not an offline session.

<br>
#### `public virtual void `[`Join`](#classURH__InvitedSession_1a533ddfa3135881b4b4ed6b7f57cb809e)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__InvitedSession_1a533ddfa3135881b4b4ed6b7f57cb809e"></a>

Accepts to join the session.

#### Parameters
* `Delegate` The callback delegate for the session being updated by the join.

<br>
#### `public inline void `[`BLUEPRINT_Join`](#classURH__InvitedSession_1ae695534cc3653e4cf7374b54a030133b)`(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` <a id="classURH__InvitedSession_1ae695534cc3653e4cf7374b54a030133b"></a>

Blueprint compatible version of Join.

#### Parameters
* `Delegate` The callback delegate for the session being updated by the join.

<br>
#### `public virtual void `[`Leave`](#classURH__InvitedSession_1ac9e1131d672b7e6f7dd4a476d54e80aa)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__InvitedSession_1ac9e1131d672b7e6f7dd4a476d54e80aa"></a>

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
`public virtual void `[`InvitePlayer`](#classURH__OfflineSession_1af16376f4dc510808b79aa74cf2ea461d)`(const FGuid & PlayerUuid,int32 Team,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`KickPlayer`](#classURH__OfflineSession_1a0b8bc9e0caafb5cb35a1e7c1caa4dfbe)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`InviteOtherSession`](#classURH__OfflineSession_1a52cf813a55cf049b932b5b3335d5c132)`(const FString & InvitedSessionId,const `[`FRHAPI_SessionInviteRequest`](models/RHAPI_SessionInviteRequest.md#structFRHAPI__SessionInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`KickOtherSession`](#classURH__OfflineSession_1aef48af399b765fcf42bddbbb49242d18)`(const FString & KickedSessionId,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`SetLeader`](#classURH__OfflineSession_1a88d682913b0247652317fa4ed3213152)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`ChangePlayerTeam`](#classURH__OfflineSession_1a06bb9470b305e09a1eed9ffbc35153e8)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Changes the team a given player is associated with in the session.
`public virtual void `[`UpdatePlayerCustomData`](#classURH__OfflineSession_1aa58dc5637c9e083c6990f7832077a60d)`(const FGuid & PlayerUuid,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Currently not supported for offline sessions.
`public virtual void `[`Leave`](#classURH__OfflineSession_1ac9879abe8ef573431669f5e4b2c99f14)`(bool bFromOSSSession,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Leaves the session.
`public virtual void `[`RequestInstance`](#classURH__OfflineSession_1a15f9d178c350737ffd1c7315b174b9d3)`(const `[`FRHAPI_InstanceRequest`](models/RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Attempt to create a new instance for the session.
`public virtual void `[`EndInstance`](#classURH__OfflineSession_1a42d2adfee51e818244e98e0d0888f410)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Shutdown the existing instance for the session.
`public virtual void `[`StartMatch`](#classURH__OfflineSession_1ab4a188cca6cdc1bc9171349041d757c8)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Starts the match of the instance on the session.
`public virtual void `[`EndMatch`](#classURH__OfflineSession_1a223aa688a4f71b889c4e18605e978ced)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Ends the match of the instance on the session.
`public virtual void `[`UpdateSessionInfo`](#classURH__OfflineSession_1a298d217d999690851348cb4041ff7599)`(const `[`FRHAPI_SessionUpdate`](models/RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the session info.
`public virtual void `[`UpdateInstanceInfo`](#classURH__OfflineSession_1a8b36aeef35d1acbe6e6af22d9a55cf0f)`(const `[`FRHAPI_InstanceInfoUpdate`](models/RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the sessions instance info.
`public virtual void `[`UpdateBrowserInfo`](#classURH__OfflineSession_1a1efa399f684ce083ce292c87717f22ad)`(bool bEnable,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the sessions browser info.
`public virtual void `[`UpdateInstanceHealth`](#classURH__OfflineSession_1afeab096fde1a8c507aa1bb90403b9d81)`(ERHAPI_InstanceHealthStatus HealthStatus,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Update the instance health of the session.
`public virtual void `[`AcknowledgeBackfill`](#classURH__OfflineSession_1aa0472dab20c9193181b61a87f7175db2)`(bool bEnable,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Acknowledge backfill for the session, keeping it alive and processing updates.
`protected void `[`ImportSessionUpdateToAllPlayers`](#classURH__OfflineSession_1a662a10e6f117bb137f9d0d65b75171a8)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Update)` | 

#### Members

#### `public inline virtual bool `[`IsOffline`](#classURH__OfflineSession_1afb29afef2455da0af98c31af0ac31f92)`() const` <a id="classURH__OfflineSession_1afb29afef2455da0af98c31af0ac31f92"></a>

Gets that the session is offline.

<br>
#### `public virtual void `[`InvitePlayer`](#classURH__OfflineSession_1af16376f4dc510808b79aa74cf2ea461d)`(const FGuid & PlayerUuid,int32 Team,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1af16376f4dc510808b79aa74cf2ea461d"></a>

Currently not supported for offline sessions.

<br>
#### `public virtual void `[`KickPlayer`](#classURH__OfflineSession_1a0b8bc9e0caafb5cb35a1e7c1caa4dfbe)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a0b8bc9e0caafb5cb35a1e7c1caa4dfbe"></a>

Currently not supported for offline sessions.

<br>
#### `public virtual void `[`InviteOtherSession`](#classURH__OfflineSession_1a52cf813a55cf049b932b5b3335d5c132)`(const FString & InvitedSessionId,const `[`FRHAPI_SessionInviteRequest`](models/RHAPI_SessionInviteRequest.md#structFRHAPI__SessionInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a52cf813a55cf049b932b5b3335d5c132"></a>

Currently not supported for offline sessions.

<br>
#### `public virtual void `[`KickOtherSession`](#classURH__OfflineSession_1aef48af399b765fcf42bddbbb49242d18)`(const FString & KickedSessionId,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1aef48af399b765fcf42bddbbb49242d18"></a>

Currently not supported for offline sessions.

<br>
#### `public virtual void `[`SetLeader`](#classURH__OfflineSession_1a88d682913b0247652317fa4ed3213152)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a88d682913b0247652317fa4ed3213152"></a>

Currently not supported for offline sessions.

<br>
#### `public virtual void `[`ChangePlayerTeam`](#classURH__OfflineSession_1a06bb9470b305e09a1eed9ffbc35153e8)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a06bb9470b305e09a1eed9ffbc35153e8"></a>

Changes the team a given player is associated with in the session.

#### Parameters
* `PlayerUuid` The unique player Id to invite to the session. 

* `Team` The target team that the player will be associated with in the session. 

* `Delegate` Callback delegate for the session being updated by the team change.

<br>
#### `public virtual void `[`UpdatePlayerCustomData`](#classURH__OfflineSession_1aa58dc5637c9e083c6990f7832077a60d)`(const FGuid & PlayerUuid,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1aa58dc5637c9e083c6990f7832077a60d"></a>

Currently not supported for offline sessions.

<br>
#### `public virtual void `[`Leave`](#classURH__OfflineSession_1ac9879abe8ef573431669f5e4b2c99f14)`(bool bFromOSSSession,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1ac9879abe8ef573431669f5e4b2c99f14"></a>

Leaves the session.

#### Parameters
* `bFromOSSSession` If true, then leave the OSS Session. Otherwise, just leave the session. 

* `Delegate` Callback delegate for the session being updated by the leave.

<br>
#### `public virtual void `[`RequestInstance`](#classURH__OfflineSession_1a15f9d178c350737ffd1c7315b174b9d3)`(const `[`FRHAPI_InstanceRequest`](models/RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a15f9d178c350737ffd1c7315b174b9d3"></a>

Attempt to create a new instance for the session.

#### Parameters
* `InstanceRequest` Details for the instance being requested. 

* `Delegate` Callback delegate for the session being updated with the instance creation, or failure.

<br>
#### `public virtual void `[`EndInstance`](#classURH__OfflineSession_1a42d2adfee51e818244e98e0d0888f410)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a42d2adfee51e818244e98e0d0888f410"></a>

Shutdown the existing instance for the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the instance ending.

<br>
#### `public virtual void `[`StartMatch`](#classURH__OfflineSession_1ab4a188cca6cdc1bc9171349041d757c8)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1ab4a188cca6cdc1bc9171349041d757c8"></a>

Starts the match of the instance on the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the match start.

<br>
#### `public virtual void `[`EndMatch`](#classURH__OfflineSession_1a223aa688a4f71b889c4e18605e978ced)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a223aa688a4f71b889c4e18605e978ced"></a>

Ends the match of the instance on the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the match end.

<br>
#### `public virtual void `[`UpdateSessionInfo`](#classURH__OfflineSession_1a298d217d999690851348cb4041ff7599)`(const `[`FRHAPI_SessionUpdate`](models/RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a298d217d999690851348cb4041ff7599"></a>

Updates the session info.

#### Parameters
* `Update` The session info for the update. 

* `Delegate` Callback delegate for the session being updated with new session data.

<br>
#### `public virtual void `[`UpdateInstanceInfo`](#classURH__OfflineSession_1a8b36aeef35d1acbe6e6af22d9a55cf0f)`(const `[`FRHAPI_InstanceInfoUpdate`](models/RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a8b36aeef35d1acbe6e6af22d9a55cf0f"></a>

Updates the sessions instance info.

#### Parameters
* `Update` The instance info for the update. 

* `Delegate` Callback delegate for the session being updated with new instance data.

<br>
#### `public virtual void `[`UpdateBrowserInfo`](#classURH__OfflineSession_1a1efa399f684ce083ce292c87717f22ad)`(bool bEnable,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1a1efa399f684ce083ce292c87717f22ad"></a>

Updates the sessions browser info.

#### Parameters
* `bEnable` If true, sets the browser info. Otherwise, clear it out. 

* `CustomData` The new browser data for the update. 

* `Delegate` Callback delegate for the session being updated with new browser data.

<br>
#### `public virtual void `[`UpdateInstanceHealth`](#classURH__OfflineSession_1afeab096fde1a8c507aa1bb90403b9d81)`(ERHAPI_InstanceHealthStatus HealthStatus,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__OfflineSession_1afeab096fde1a8c507aa1bb90403b9d81"></a>

Update the instance health of the session.

#### Parameters
* `HealthStatus` The new health status of the instance 

* `Delegate` Callback delegate for completion (note - local session is not modified on health update for efficiency reasons!)

<br>
#### `public virtual void `[`AcknowledgeBackfill`](#classURH__OfflineSession_1aa0472dab20c9193181b61a87f7175db2)`(bool bEnable,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OfflineSession_1aa0472dab20c9193181b61a87f7175db2"></a>

Acknowledge backfill for the session, keeping it alive and processing updates.

#### Parameters
* `bEnable` If true, keeps backfill enabled 

* `Delegate` Callback delegate for the session being updated with backfill data

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
`public const TArray< FString > & `[`MatchmakingTags`](#classURH__OnlineSession_1a3d02eff30ffd63efd45ba406a77a095c) | 
`public const TArray< FString > const FRH_OnSessionUpdatedDynamicDelegate & `[`Delegate`](#classURH__OnlineSession_1a2bc77310ae4517d14bae417fe4e3f020) | 
`public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`SessionOwner`](#classURH__OnlineSession_1a3549895abb13d13b6693cc058065eace) | 
`public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > const FRH_OnSessionUpdatedDynamicDelegate & `[`Delegate`](#classURH__OnlineSession_1af4c227b3f3313aae40b08c87f06c1360) | 
`public inline virtual bool `[`IsOffline`](#classURH__OnlineSession_1af734641e6fe04130aadcfb7a6ed1d58a)`() const` | Gets that an online session is not an offline session.
`public virtual void `[`ImportAPISession`](#classURH__OnlineSession_1a4fe7233a68b23d1ca4985d3b0e103ef5)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & newSessionData,const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` | Update a session from the owner, implies a template update.
`public virtual void `[`Expire`](#classURH__OnlineSession_1a829df0d3fa147c93bc5bf43df526e050)`(const FRH_OnSessionExpiredDelegate & Delegate)` | Called when the session was removed from our session list. Cleans up state then trigger callback on owner.
`public virtual void `[`JoinQueue`](#classURH__OnlineSession_1a28750e69db30613d54f4a6c9bfcc94a6)`(const `[`FRHAPI_QueueJoinRequest`](models/RHAPI_QueueJoinRequest.md#structFRHAPI__QueueJoinRequest)` & Request,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Joins a specific queue with the session to be matchmade with others.
`public inline virtual void `[`JoinQueue`](#classURH__OnlineSession_1ac6471f91d2ee705b4849186e621e60c3)`(const FString & QueueId,const TArray< FString > & MatchmakingTags,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Simplified version of queue join, joins a specific queue with the session to be matchmade with others.
`public  `[`UFUNCTION`](#classURH__OnlineSession_1a4e4d322afa4582235311cf5c2c0ba763)`(BlueprintCallable,Category,meta) const` | Blueprint copmatible version of JoinQueue.
`public inline void `[`BLUEPRINT_JoinQueueEx`](#classURH__OnlineSession_1a077e94f81edf865ddc55168c9ce2a353)`(const `[`FRHAPI_QueueJoinRequest`](models/RHAPI_QueueJoinRequest.md#structFRHAPI__QueueJoinRequest)` & Request,const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` | Blueprint copmatible version of JoinQueue.
`public virtual void `[`LeaveQueue`](#classURH__OnlineSession_1a580de5cf705209f24551008caf72151c)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Leaves the currently active matchmaking queue.
`public inline void `[`BLUEPRINT_LeaveQueue`](#classURH__OnlineSession_1a3c807b01d9d8b0f4f7be9b492dc3e991)`(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` | Blueprint compatible version of LeaveQueue.
`public  `[`UFUNCTION`](#classURH__OnlineSession_1ae6998ea8e5f2265f71c2b7d201ebb738)`(BlueprintCallable,Category,meta) const` | Blueprint compatible version of JoinById.
`public virtual void `[`InvitePlayer`](#classURH__OnlineSession_1a8bf3c389551cbdf8ecf5112c8af151cf)`(const FGuid & PlayerUuid,int32 Team,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Invites a player to the session.
`public virtual void `[`KickPlayer`](#classURH__OnlineSession_1a4f8560ffb8ac393738907307ed2225bd)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Kicks a player from the session.
`public virtual void `[`InviteOtherSession`](#classURH__OnlineSession_1af7389a57edef2dfb81103c950d10c5d8)`(const FString & InvitedSessionId,const `[`FRHAPI_SessionInviteRequest`](models/RHAPI_SessionInviteRequest.md#structFRHAPI__SessionInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Invites a different session to this session.
`public virtual void `[`KickOtherSession`](#classURH__OnlineSession_1aaea0484871603acf63a76317dd1ffe9e)`(const FString & KickedSessionId,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Kicks all players in a target tsession from this session.
`public virtual void `[`SetLeader`](#classURH__OnlineSession_1ade15c14b576cf4c5ba384bc61fe25879)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Sets a new leader for the session.
`public virtual void `[`ChangePlayerTeam`](#classURH__OnlineSession_1ab35d9139e68b21dd3ee9ed779fb37f16)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Changes the team a given player is associated with in the session.
`public virtual void `[`UpdatePlayerCustomData`](#classURH__OnlineSession_1a8f35a3597ef47c2570e9489e62ac6d23)`(const FGuid & PlayerUuid,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Changes the session player's custom data.
`public virtual void `[`Leave`](#classURH__OnlineSession_1abb7f5b8c9eaadd30166337a5dccebbbe)`(bool bFromOSSSession,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Leaves the session.
`public virtual void `[`RequestInstance`](#classURH__OnlineSession_1aae906a67108cba268d73786229e8aa94)`(const `[`FRHAPI_InstanceRequest`](models/RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Attempt to create a new instance for the session.
`public virtual void `[`EndInstance`](#classURH__OnlineSession_1a38a05f415495a019c3f02fcae76317ec)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Shutdown the existing instance for the session.
`public virtual void `[`StartMatch`](#classURH__OnlineSession_1a0f028da11d7b9881afa4400ee58bc5e1)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Starts the match of the instance on the session.
`public virtual void `[`EndMatch`](#classURH__OnlineSession_1a4cc20fcaa5c722e3aa23272b344ac563)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Ends the match of the instance on the session.
`public virtual void `[`UpdateSessionInfo`](#classURH__OnlineSession_1a21428e63a1268ef552d3186cd7df9d50)`(const `[`FRHAPI_SessionUpdate`](models/RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the session info.
`public virtual void `[`UpdateInstanceInfo`](#classURH__OnlineSession_1abdfc1e53b834da4afdfdce29de9b318b)`(const `[`FRHAPI_InstanceInfoUpdate`](models/RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the sessions instance info.
`public virtual void `[`UpdateBrowserInfo`](#classURH__OnlineSession_1a35197db28a89b5325ef4384dca5d76c8)`(bool bEnable,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Updates the sessions browser info.
`public virtual void `[`UpdateInstanceHealth`](#classURH__OnlineSession_1ac49edd6dd0b2987fc8b0dcb6f563f585)`(ERHAPI_InstanceHealthStatus HealthStatus,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Update the instance health of the session.
`public virtual void `[`AcknowledgeBackfill`](#classURH__OnlineSession_1aa087b6190e032b3d3c22c110498cd33a)`(bool bEnable,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` | Acknowledge backfill for the session, keeping it alive and processing updates.

#### Members

#### `public const TArray< FString > & `[`MatchmakingTags`](#classURH__OnlineSession_1a3d02eff30ffd63efd45ba406a77a095c) <a id="classURH__OnlineSession_1a3d02eff30ffd63efd45ba406a77a095c"></a>

<br>
#### `public const TArray< FString > const FRH_OnSessionUpdatedDynamicDelegate & `[`Delegate`](#classURH__OnlineSession_1a2bc77310ae4517d14bae417fe4e3f020) <a id="classURH__OnlineSession_1a2bc77310ae4517d14bae417fe4e3f020"></a>

<br>
#### `public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > `[`SessionOwner`](#classURH__OnlineSession_1a3549895abb13d13b6693cc058065eace) <a id="classURH__OnlineSession_1a3549895abb13d13b6693cc058065eace"></a>

<br>
#### `public TScriptInterface< `[`IRH_SessionOwnerInterface`](Session.md#classIRH__SessionOwnerInterface)` > const FRH_OnSessionUpdatedDynamicDelegate & `[`Delegate`](#classURH__OnlineSession_1af4c227b3f3313aae40b08c87f06c1360) <a id="classURH__OnlineSession_1af4c227b3f3313aae40b08c87f06c1360"></a>

<br>
#### `public inline virtual bool `[`IsOffline`](#classURH__OnlineSession_1af734641e6fe04130aadcfb7a6ed1d58a)`() const` <a id="classURH__OnlineSession_1af734641e6fe04130aadcfb7a6ed1d58a"></a>

Gets that an online session is not an offline session.

<br>
#### `public virtual void `[`ImportAPISession`](#classURH__OnlineSession_1a4fe7233a68b23d1ca4985d3b0e103ef5)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & newSessionData,const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & newTemplate)` <a id="classURH__OnlineSession_1a4fe7233a68b23d1ca4985d3b0e103ef5"></a>

Update a session from the owner, implies a template update.

#### Parameters
* `newSessionData` The new session data. 

* `newTemplate` The new session template.

<br>
#### `public virtual void `[`Expire`](#classURH__OnlineSession_1a829df0d3fa147c93bc5bf43df526e050)`(const FRH_OnSessionExpiredDelegate & Delegate)` <a id="classURH__OnlineSession_1a829df0d3fa147c93bc5bf43df526e050"></a>

Called when the session was removed from our session list. Cleans up state then trigger callback on owner.

#### Parameters
* `Delegate` The delegate to call when the session is removed.

<br>
#### `public virtual void `[`JoinQueue`](#classURH__OnlineSession_1a28750e69db30613d54f4a6c9bfcc94a6)`(const `[`FRHAPI_QueueJoinRequest`](models/RHAPI_QueueJoinRequest.md#structFRHAPI__QueueJoinRequest)` & Request,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a28750e69db30613d54f4a6c9bfcc94a6"></a>

Joins a specific queue with the session to be matchmade with others.

#### Parameters
* `Request` The request for joining the queue. 

* `Delegate` Callback delegate on the session being updated from joining matchmaking.

<br>
#### `public inline virtual void `[`JoinQueue`](#classURH__OnlineSession_1ac6471f91d2ee705b4849186e621e60c3)`(const FString & QueueId,const TArray< FString > & MatchmakingTags,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1ac6471f91d2ee705b4849186e621e60c3"></a>

Simplified version of queue join, joins a specific queue with the session to be matchmade with others.

#### Parameters
* `QueueId` The Id of the queue being joined. 

* `MatchmakingTags` Specific data to be passed in as extra params for matchmaking. 

* `Delegate` Callback delegate on the session being updated from joining matchmaking.

<br>
#### `public  `[`UFUNCTION`](#classURH__OnlineSession_1a4e4d322afa4582235311cf5c2c0ba763)`(BlueprintCallable,Category,meta) const` <a id="classURH__OnlineSession_1a4e4d322afa4582235311cf5c2c0ba763"></a>

Blueprint copmatible version of JoinQueue.

#### Parameters
* `QueueId` The Id of the queue being joined. 

* `MatchmakingTags` Specific data to be passed in as extra params for matchmaking. 

* `Delegate` Callback delegate on the session being updated from joining matchmaking.

<br>
#### `public inline void `[`BLUEPRINT_JoinQueueEx`](#classURH__OnlineSession_1a077e94f81edf865ddc55168c9ce2a353)`(const `[`FRHAPI_QueueJoinRequest`](models/RHAPI_QueueJoinRequest.md#structFRHAPI__QueueJoinRequest)` & Request,const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` <a id="classURH__OnlineSession_1a077e94f81edf865ddc55168c9ce2a353"></a>

Blueprint copmatible version of JoinQueue.

#### Parameters
* `Request` The request for joining the queue. 

* `Delegate` Callback delegate on the session being updated from joining matchmaking.

<br>
#### `public virtual void `[`LeaveQueue`](#classURH__OnlineSession_1a580de5cf705209f24551008caf72151c)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a580de5cf705209f24551008caf72151c"></a>

Leaves the currently active matchmaking queue.

#### Parameters
* `Delegate` Callback delegate on the session being updated from leaving matchmaking.

<br>
#### `public inline void `[`BLUEPRINT_LeaveQueue`](#classURH__OnlineSession_1a3c807b01d9d8b0f4f7be9b492dc3e991)`(const FRH_OnSessionUpdatedDynamicDelegate & Delegate)` <a id="classURH__OnlineSession_1a3c807b01d9d8b0f4f7be9b492dc3e991"></a>

Blueprint compatible version of LeaveQueue.

#### Parameters
* `Delegate` Callback delegate on the session being updated from leaving matchmaking.

<br>
#### `public  `[`UFUNCTION`](#classURH__OnlineSession_1ae6998ea8e5f2265f71c2b7d201ebb738)`(BlueprintCallable,Category,meta) const` <a id="classURH__OnlineSession_1ae6998ea8e5f2265f71c2b7d201ebb738"></a>

Blueprint compatible version of JoinById.

#### Parameters
* `SessionId` Id of the session to join. 

* `SessionOwner` Owner of the session to join. 

* `Delegate` Callback deledate with an update of the session being joined.

<br>
#### `public virtual void `[`InvitePlayer`](#classURH__OnlineSession_1a8bf3c389551cbdf8ecf5112c8af151cf)`(const FGuid & PlayerUuid,int32 Team,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a8bf3c389551cbdf8ecf5112c8af151cf"></a>

Invites a player to the session.

#### Parameters
* `PlayerUuid` The unique player Id to invite to the session. 

* `CustomData` The custom data for the invite 

* `Team` The target team that the player will be associated with in the session. 

* `Delegate` Callback delegate for the session being updated by the invite.

<br>
#### `public virtual void `[`KickPlayer`](#classURH__OnlineSession_1a4f8560ffb8ac393738907307ed2225bd)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a4f8560ffb8ac393738907307ed2225bd"></a>

Kicks a player from the session.

#### Parameters
* `PlayerUuid` The unique player Id to kick from the session. 

* `Delegate` Callback delegate for the session being updated by the kick.

<br>
#### `public virtual void `[`InviteOtherSession`](#classURH__OnlineSession_1af7389a57edef2dfb81103c950d10c5d8)`(const FString & InvitedSessionId,const `[`FRHAPI_SessionInviteRequest`](models/RHAPI_SessionInviteRequest.md#structFRHAPI__SessionInviteRequest)` & SessionInviteRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1af7389a57edef2dfb81103c950d10c5d8"></a>

Invites a different session to this session.

#### Parameters
* `InvitedSessionId` The session id to send the invite to 

* `SessionInviteRequest` Information about the invite being sent, including team information 

* `Delegate` Callback delegate for the session being updated by the invite.

<br>
#### `public virtual void `[`KickOtherSession`](#classURH__OnlineSession_1aaea0484871603acf63a76317dd1ffe9e)`(const FString & KickedSessionId,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1aaea0484871603acf63a76317dd1ffe9e"></a>

Kicks all players in a target tsession from this session.

#### Parameters
* `KickedSessionId` The session Id to kick from this session. 

* `Delegate` Callback delegate for the session being updated by the kick.

<br>
#### `public virtual void `[`SetLeader`](#classURH__OnlineSession_1ade15c14b576cf4c5ba384bc61fe25879)`(const FGuid & PlayerUuid,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1ade15c14b576cf4c5ba384bc61fe25879"></a>

Sets a new leader for the session.

#### Parameters
* `PlayerUuid` The unique player Id to become the session leader. 

* `Delegate` Callback delegate for the session being updated by the leader change.

<br>
#### `public virtual void `[`ChangePlayerTeam`](#classURH__OnlineSession_1ab35d9139e68b21dd3ee9ed779fb37f16)`(const FGuid & PlayerUuid,int32 Team,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1ab35d9139e68b21dd3ee9ed779fb37f16"></a>

Changes the team a given player is associated with in the session.

#### Parameters
* `PlayerUuid` The unique player Id to invite to the session. 

* `Team` The target team that the player will be associated with in the session. 

* `Delegate` Callback delegate for the session being updated by the team change.

<br>
#### `public virtual void `[`UpdatePlayerCustomData`](#classURH__OnlineSession_1a8f35a3597ef47c2570e9489e62ac6d23)`(const FGuid & PlayerUuid,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a8f35a3597ef47c2570e9489e62ac6d23"></a>

Changes the session player's custom data.

#### Parameters
* `PlayerUuid` The unique player Id whose custom data will be updated 

* `CustomData` The custom data map to set the player's to 

* `Delegate` Callback delegate for the session being updated by the player update

<br>
#### `public virtual void `[`Leave`](#classURH__OnlineSession_1abb7f5b8c9eaadd30166337a5dccebbbe)`(bool bFromOSSSession,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1abb7f5b8c9eaadd30166337a5dccebbbe"></a>

Leaves the session.

#### Parameters
* `bFromOSSSession` If true, then leave the OSS Session. Otherwise, just leave the session. 

* `Delegate` Callback delegate for the session being updated by the leave.

<br>
#### `public virtual void `[`RequestInstance`](#classURH__OnlineSession_1aae906a67108cba268d73786229e8aa94)`(const `[`FRHAPI_InstanceRequest`](models/RHAPI_InstanceRequest.md#structFRHAPI__InstanceRequest)` & InstanceRequest,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1aae906a67108cba268d73786229e8aa94"></a>

Attempt to create a new instance for the session.

#### Parameters
* `InstanceRequest` Details for the instance being requested. 

* `Delegate` Callback delegate for the session being updated with the instance creation, or failure.

<br>
#### `public virtual void `[`EndInstance`](#classURH__OnlineSession_1a38a05f415495a019c3f02fcae76317ec)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a38a05f415495a019c3f02fcae76317ec"></a>

Shutdown the existing instance for the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the instance ending.

<br>
#### `public virtual void `[`StartMatch`](#classURH__OnlineSession_1a0f028da11d7b9881afa4400ee58bc5e1)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a0f028da11d7b9881afa4400ee58bc5e1"></a>

Starts the match of the instance on the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the match start.

<br>
#### `public virtual void `[`EndMatch`](#classURH__OnlineSession_1a4cc20fcaa5c722e3aa23272b344ac563)`(const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a4cc20fcaa5c722e3aa23272b344ac563"></a>

Ends the match of the instance on the session.

#### Parameters
* `Delegate` Callback delegate for the session being updated with the match end.

<br>
#### `public virtual void `[`UpdateSessionInfo`](#classURH__OnlineSession_1a21428e63a1268ef552d3186cd7df9d50)`(const `[`FRHAPI_SessionUpdate`](models/RHAPI_SessionUpdate.md#structFRHAPI__SessionUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a21428e63a1268ef552d3186cd7df9d50"></a>

Updates the session info.

#### Parameters
* `Update` The session info for the update. 

* `Delegate` Callback delegate for the session being updated with new session data.

<br>
#### `public virtual void `[`UpdateInstanceInfo`](#classURH__OnlineSession_1abdfc1e53b834da4afdfdce29de9b318b)`(const `[`FRHAPI_InstanceInfoUpdate`](models/RHAPI_InstanceInfoUpdate.md#structFRHAPI__InstanceInfoUpdate)` & Update,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1abdfc1e53b834da4afdfdce29de9b318b"></a>

Updates the sessions instance info.

#### Parameters
* `Update` The instance info for the update. 

* `Delegate` Callback delegate for the session being updated with new instance data.

<br>
#### `public virtual void `[`UpdateBrowserInfo`](#classURH__OnlineSession_1a35197db28a89b5325ef4384dca5d76c8)`(bool bEnable,const TMap< FString, FString > & CustomData,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1a35197db28a89b5325ef4384dca5d76c8"></a>

Updates the sessions browser info.

#### Parameters
* `bEnable` If true, sets the browser info. Otherwise, clear it out. 

* `CustomData` The new browser data for the update. 

* `Delegate` Callback delegate for the session being updated with new browser data.

<br>
#### `public virtual void `[`UpdateInstanceHealth`](#classURH__OnlineSession_1ac49edd6dd0b2987fc8b0dcb6f563f585)`(ERHAPI_InstanceHealthStatus HealthStatus,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__OnlineSession_1ac49edd6dd0b2987fc8b0dcb6f563f585"></a>

Update the instance health of the session.

#### Parameters
* `HealthStatus` The new health status of the instance 

* `Delegate` Callback delegate for completion (note - local session is not modified on health update for efficiency reasons!)

<br>
#### `public virtual void `[`AcknowledgeBackfill`](#classURH__OnlineSession_1aa087b6190e032b3d3c22c110498cd33a)`(bool bEnable,const FRH_OnSessionUpdatedDelegateBlock & Delegate)` <a id="classURH__OnlineSession_1aa087b6190e032b3d3c22c110498cd33a"></a>

Acknowledge backfill for the session, keeping it alive and processing updates.

#### Parameters
* `bEnable` If true, keeps backfill enabled 

* `Delegate` Callback delegate for the session being updated with backfill data

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
`public void `[`ReconcileAPISessions`](#classIRH__SessionOwnerInterface_1ae7d9a16efdbe4ab846e44371b6700b53)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` | Updates the list of sessions to only those that are active.
`public void `[`ReconcileAPITemplates`](#classIRH__SessionOwnerInterface_1a8c884f478578ba55b83e6d3fb977e1c5)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` | Updates the list of session templates to those that are active.
`public class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classIRH__SessionOwnerInterface_1abcf3e2921d15c88817b0a82b936b0f35)`() const` | Gets the PlayerInfo Subsystem.
`public IOnlineSubsystem * `[`GetOSS`](#classIRH__SessionOwnerInterface_1a3ede591e11069d01484302cbdc7acf25)`() const` | Gets the Online Subsystem to use for OSS calls.
`public FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classIRH__SessionOwnerInterface_1ae7d146121a241b23c58cbf22cbb0debf)`() const` | Gets the Online Subsystem Unique Id to use for OSS calls.
`public inline virtual FGuid `[`GetPlayerUuid`](#classIRH__SessionOwnerInterface_1a50d1f47c5c9b99780330b36e6aa496b8)`() const` | Gets the Player UUID to use for player related calls (can be invalid)
`public inline TOptional< FString > `[`GetETagForSession`](#classIRH__SessionOwnerInterface_1a1af5c13f953285114e7e0ba2c7133c1d)`(const FString & SessionId) const` | Gets the Etag for a given Session.
`public TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classIRH__SessionOwnerInterface_1aebf9f97e3204d81b31c92e3a5e6ba63d)`() const` | Gets the etag to use for a "Get all Templates" type query.
`public TOptional< FString > `[`GetETagForAllSessionsPoll`](#classIRH__SessionOwnerInterface_1a745015623671711254ef390ee9cb7802)`() const` | Gets the etag to use for a "Get all Sessions" type query.
`public TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classIRH__SessionOwnerInterface_1a66e998565bf74dbfc85ea6247341b7a4)`() const` | Used to get all sessions, primarily for get all sessions polling where etag matches.
`public `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classIRH__SessionOwnerInterface_1a094dc2179856a012677d16d9f6684c82)`(const FString & SessionId) const` | Gets a session by its id.
`public bool `[`GetTemplate`](#classIRH__SessionOwnerInterface_1ae474fab73509d0a00372966f39ce216b)`(const FString & Type,`[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` | Gets a session template by type.
`public `[`URH_PlatformSessionSyncer`](undefined.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classIRH__SessionOwnerInterface_1ade9ca2876030b163a060e8f417889985)`(const FString & SessionId) const` | Gets the platform synchronization object using the rally here session id.
`public `[`URH_PlatformSessionSyncer`](undefined.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classIRH__SessionOwnerInterface_1a47d9ac6d2c0326ddc79c563932a6754c)`(const FUniqueNetIdRepl & SessionId) const` | Gets the platform synchronization object using the platform session id.

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
#### `public void `[`ReconcileAPISessions`](#classIRH__SessionOwnerInterface_1ae7d9a16efdbe4ab846e44371b6700b53)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` <a id="classIRH__SessionOwnerInterface_1ae7d9a16efdbe4ab846e44371b6700b53"></a>

Updates the list of sessions to only those that are active.

#### Parameters
* `SessionIds` The list of sessions that we are reconciling against. 

* `ETag` The ETag to use for the update.

<br>
#### `public void `[`ReconcileAPITemplates`](#classIRH__SessionOwnerInterface_1a8c884f478578ba55b83e6d3fb977e1c5)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` <a id="classIRH__SessionOwnerInterface_1a8c884f478578ba55b83e6d3fb977e1c5"></a>

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
#### `public inline virtual FGuid `[`GetPlayerUuid`](#classIRH__SessionOwnerInterface_1a50d1f47c5c9b99780330b36e6aa496b8)`() const` <a id="classIRH__SessionOwnerInterface_1a50d1f47c5c9b99780330b36e6aa496b8"></a>

Gets the Player UUID to use for player related calls (can be invalid)

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
#### `public `[`URH_PlatformSessionSyncer`](undefined.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classIRH__SessionOwnerInterface_1ade9ca2876030b163a060e8f417889985)`(const FString & SessionId) const` <a id="classIRH__SessionOwnerInterface_1ade9ca2876030b163a060e8f417889985"></a>

Gets the platform synchronization object using the rally here session id.

<br>
#### `public `[`URH_PlatformSessionSyncer`](undefined.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classIRH__SessionOwnerInterface_1a47d9ac6d2c0326ddc79c563932a6754c)`(const FUniqueNetIdRepl & SessionId) const` <a id="classIRH__SessionOwnerInterface_1a47d9ac6d2c0326ddc79c563932a6754c"></a>

Gets the platform synchronization object using the platform session id.

<br>
## struct `FRH_SessionBrowserSearchParams` <a id="structFRH__SessionBrowserSearchParams"></a>

Struct containing the search paramaters for Session Browsers.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionType`](#structFRH__SessionBrowserSearchParams_1a25ef289d60be155f1caeaddd19c5cc0a) | The Type of Session to search for.
`public TArray< FString > `[`SessionIds`](#structFRH__SessionBrowserSearchParams_1a323e62b2ff94b8be30c0fb7b92914568) | If specified, skip search lookup and instead query these specific session ids.
`public int32 `[`Cursor`](#structFRH__SessionBrowserSearchParams_1a987cdfb2a54b641a8724c578d4900bfc) | The indicator of what page to request of results.
`public int32 `[`PageSize`](#structFRH__SessionBrowserSearchParams_1a8de9c480f8dedf19d415e564fe201e96) | The size of each page of results.
`public bool `[`bCacheSessionDetails`](#structFRH__SessionBrowserSearchParams_1ac0749ac4e9ddb43e11b231fe31b08758) | Whether to query and cache the session data from the search result.
`public inline  `[`FRH_SessionBrowserSearchParams`](#structFRH__SessionBrowserSearchParams_1ac8b5657a750ea3b355f344334f9048c0)`()` | Default constructor.
`public inline FString `[`GetDescription`](#structFRH__SessionBrowserSearchParams_1af1c20cb69cc90ba84f385b67489bae24)`() const` | Returns display of search params for toolings/logging.

#### Members

#### `public FString `[`SessionType`](#structFRH__SessionBrowserSearchParams_1a25ef289d60be155f1caeaddd19c5cc0a) <a id="structFRH__SessionBrowserSearchParams_1a25ef289d60be155f1caeaddd19c5cc0a"></a>

The Type of Session to search for.

<br>
#### `public TArray< FString > `[`SessionIds`](#structFRH__SessionBrowserSearchParams_1a323e62b2ff94b8be30c0fb7b92914568) <a id="structFRH__SessionBrowserSearchParams_1a323e62b2ff94b8be30c0fb7b92914568"></a>

If specified, skip search lookup and instead query these specific session ids.

<br>
#### `public int32 `[`Cursor`](#structFRH__SessionBrowserSearchParams_1a987cdfb2a54b641a8724c578d4900bfc) <a id="structFRH__SessionBrowserSearchParams_1a987cdfb2a54b641a8724c578d4900bfc"></a>

The indicator of what page to request of results.

<br>
#### `public int32 `[`PageSize`](#structFRH__SessionBrowserSearchParams_1a8de9c480f8dedf19d415e564fe201e96) <a id="structFRH__SessionBrowserSearchParams_1a8de9c480f8dedf19d415e564fe201e96"></a>

The size of each page of results.

<br>
#### `public bool `[`bCacheSessionDetails`](#structFRH__SessionBrowserSearchParams_1ac0749ac4e9ddb43e11b231fe31b08758) <a id="structFRH__SessionBrowserSearchParams_1ac0749ac4e9ddb43e11b231fe31b08758"></a>

Whether to query and cache the session data from the search result.

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
