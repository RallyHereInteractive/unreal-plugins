# GameInstance <a id="group__GameInstance"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`ERH_ServerBootstrapMode`](#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)            | An enum for the handled bootstrapping modes.
`enum `[`ERH_ServerBootstrapFlowStep`](#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)            | An enum for the steps in the bootstrapping flow.
`class `[`URH_BootstrappingSettings`](#classURH__BootstrappingSettings) | An settings object that contains the settings for the bootstrapping flow.
`class `[`URH_GameInstanceServerBootstrapper`](#classURH__GameInstanceServerBootstrapper) | Server Bootstrapper for the Game Instance.
`class `[`URH_GameInstanceClientBootstrapper`](#classURH__GameInstanceClientBootstrapper) | Client Boostrapper for the Game Instance.
`class `[`URH_GameInstanceSessionSubsystem`](#classURH__GameInstanceSessionSubsystem) | Subsystem for handling sessions within a game instance.
`class `[`URH_GameInstanceSubsystem`](#classURH__GameInstanceSubsystem) | Subsystem for the Game Instance.
`struct `[`FRH_BootstrappingResult`](#structFRH__BootstrappingResult) | An result object that contains the accumulated results for the bootstrapping flow.

## Members

#### `enum `[`ERH_ServerBootstrapMode`](#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196) <a id="group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
GameHostProvider            | We are in an unknown mode which cannot be handled internally to this subsystem, instead rely on the GameHostProvider to handle the mode
Disabled            | Bootstrapping is disabled entirely
LoginOnly            | Bootstrapping is restricted to login only
AutoCreate            | Special type of GameHostProvider mode, which has a fallback provider if needed and will allocate itself a session

An enum for the handled bootstrapping modes.

#### `enum `[`ERH_ServerBootstrapFlowStep`](#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36) <a id="group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
Unstarted            | Bootstrapping has not been started
Failed            | Bootstrapping has failed
LoggingIn            | Bootstrapping is logging into the RallyHere API
Recycling            | Bootstrapping is doing an internal recycle of the server state (note: initial boot uses this state to initialize as well)
Registration            | Bootstrapping is registering the server with the provider
WaitingForSession            | Bootstrapping has received an allocation and is attempting to lookup the corresponding session
SyncingToSession            | Bootstrapping has retrieved the session, validated it, and is attempting to synchronize the GameInstanceSessionSubsystem to that session
Complete            | Bootstrapping has completed (though may be recycled in the future)

An enum for the steps in the bootstrapping flow.

## class `URH_BootstrappingSettings` <a id="classURH__BootstrappingSettings"></a>

```
class URH_BootstrappingSettings
  : public UObject
```

An settings object that contains the settings for the bootstrapping flow.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`PollIntervalFinalizer`](#classURH__BootstrappingSettings_1a903a527a78d195bda791d3649c56b17d) | The poll interval for the finalizer that looks up the session based on the allocation info from the provider.
`public int32 `[`PollLogIntervalFinalizer`](#classURH__BootstrappingSettings_1a739ce5d0bae6aa7db95297627d32ae5e) | How often to log progress on the finalizer poll (number of polls between logs)
`public int32 `[`MaxPollCountFinalizer`](#classURH__BootstrappingSettings_1ae8418e097feff2568ddc0e4ad6ac76d1) | Maximum number of polls on the finalizer before it is determined to be a failure.
`public  `[`URH_BootstrappingSettings`](#classURH__BootstrappingSettings_1a1b522130db5c6b74641876e3b2e95391)`(const FObjectInitializer & ObjectInitializer)` | Default constructor.

#### Members

#### `public float `[`PollIntervalFinalizer`](#classURH__BootstrappingSettings_1a903a527a78d195bda791d3649c56b17d) <a id="classURH__BootstrappingSettings_1a903a527a78d195bda791d3649c56b17d"></a>

The poll interval for the finalizer that looks up the session based on the allocation info from the provider.

<br>
#### `public int32 `[`PollLogIntervalFinalizer`](#classURH__BootstrappingSettings_1a739ce5d0bae6aa7db95297627d32ae5e) <a id="classURH__BootstrappingSettings_1a739ce5d0bae6aa7db95297627d32ae5e"></a>

How often to log progress on the finalizer poll (number of polls between logs)

<br>
#### `public int32 `[`MaxPollCountFinalizer`](#classURH__BootstrappingSettings_1ae8418e097feff2568ddc0e4ad6ac76d1) <a id="classURH__BootstrappingSettings_1ae8418e097feff2568ddc0e4ad6ac76d1"></a>

Maximum number of polls on the finalizer before it is determined to be a failure.

<br>
#### `public  `[`URH_BootstrappingSettings`](#classURH__BootstrappingSettings_1a1b522130db5c6b74641876e3b2e95391)`(const FObjectInitializer & ObjectInitializer)` <a id="classURH__BootstrappingSettings_1a1b522130db5c6b74641876e3b2e95391"></a>

Default constructor.

<br>
## class `URH_GameInstanceServerBootstrapper` <a id="classURH__GameInstanceServerBootstrapper"></a>

```
class URH_GameInstanceServerBootstrapper
  : public URH_GameInstanceSubsystemPlugin
  : public IRH_SessionOwnerInterface
  : public FTickableGameObject
```

Server Bootstrapper for the Game Instance.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`URH_GameInstanceServerBootstrapper`](#classURH__GameInstanceServerBootstrapper_1a3da69fd930b5f05a1c46fac0b93d8cdb)`()` | 
`public virtual void `[`Initialize`](#classURH__GameInstanceServerBootstrapper_1a432619f05655325816a804827d2628da)`()` | Initialize the bootstrapper.
`public virtual void `[`Deinitialize`](#classURH__GameInstanceServerBootstrapper_1a59eb0bc34504af7e31816b52a7bf8098)`()` | Deinitialize the bootstrapper.
`public inline FORCEINLINE `[`ERH_ServerBootstrapFlowStep`](undefined.md#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)` `[`GetBootstrapStep`](#classURH__GameInstanceServerBootstrapper_1acf176fcc96de694c32f32ad27ccf57f8)`() const` | Get the current bootstrapping step.
`public inline FORCEINLINE `[`ERH_ServerBootstrapMode`](undefined.md#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)` `[`GetBootstrapMode`](#classURH__GameInstanceServerBootstrapper_1a5633b7f16aac374fb3de4419fbb5d3e1)`() const` | Get the current bootstrapping mode.
`public bool `[`DetermineJoinParameters`](#classURH__GameInstanceServerBootstrapper_1a05c84f3ca59681b62a9c23675d3aad3c)`(FString & PublicConnStr,FString & PrivateConnStr)` | Determines the join parameters to be used for a session that was bootstrapped.
`public virtual void `[`OnGameHostProviderStats`](#classURH__GameInstanceServerBootstrapper_1aac676ff53c8aedc49683c6e81f44b719)`(FRH_GameHostProviderStats & Stats)` | bound callback triggered to provide stats to the game host provider
`public virtual void `[`Tick`](#classURH__GameInstanceServerBootstrapper_1a73c5b13ad645414ddfa9dbab9c09aff0)`(float DeltaTime)` | Tick function.
`public virtual bool `[`IsTickable`](#classURH__GameInstanceServerBootstrapper_1a806c9027d05eece8eed4ebb5ea3838de)`() const` | Whether or not to tick this object.
`public virtual TStatId `[`GetStatId`](#classURH__GameInstanceServerBootstrapper_1ace60b33a55d1acdc8c07c42fc6f495e3)`() const` | What stat id to use to report for the tick.
`public inline virtual FAuthContextPtr `[`GetAuthContext`](#classURH__GameInstanceServerBootstrapper_1a55b7b631d0d985ed2b86cfa8ccfb3690)`() const` | Provides the auth context this bootstrapper owns.
`public inline virtual `[`URH_OnlineSession`](Session.md#classURH__OnlineSession)` * `[`GetSession`](#classURH__GameInstanceServerBootstrapper_1a2ee4a4f52cbb85e077b2ffb2459f2c3e)`() const` | Get the current bootstrapping mode.
`public inline virtual FAuthContextPtr `[`GetSessionAuthContext`](#classURH__GameInstanceServerBootstrapper_1a3c8ddb006bbc3dea378d179e51be5b62)`() const` | Gets the auth context to use for API calls for the session owner.
`public virtual void `[`ImportAPISession`](#classURH__GameInstanceServerBootstrapper_1a374284e48119f0092acb4a0da5634215)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` | Imports a session object from the API into the owner (ex: from polling).
`public virtual void `[`ImportAPITemplate`](#classURH__GameInstanceServerBootstrapper_1a9cfc35913bd38f0fd8f090428c6971d4)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` | Imports the template into the owner's template list (ex: from polling).
`public virtual void `[`ReconcileAPISessions`](#classURH__GameInstanceServerBootstrapper_1a30545d8b52b8fdfe6ebbff321514e929)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` | Updates the list of sessions to only those that are active.
`public virtual void `[`ReconcileAPITemplates`](#classURH__GameInstanceServerBootstrapper_1a3f046c14798943a59bcb268c75e02e6c)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` | Updates the list of session templates to those that are active.
`public virtual class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__GameInstanceServerBootstrapper_1ac1a7eee0c5d62a932aba1d57520fba59)`() const` | Gets the PlayerInfo Subsystem.
`public virtual IOnlineSubsystem * `[`GetOSS`](#classURH__GameInstanceServerBootstrapper_1afdc3030fd174d1a570231dcad8429265)`() const` | Gets the Online Subsystem to use for OSS calls.
`public virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__GameInstanceServerBootstrapper_1a935444ab045d0e8647ace5f59b803a72)`() const` | Gets the Online Subsystem Unique Id to use for OSS calls.
`public inline virtual TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classURH__GameInstanceServerBootstrapper_1ac1eaa7cf3cda91a7a1f412dfe5246fa8)`() const` | Gets the etag to use for a "Get all Templates" type query.
`public inline virtual TOptional< FString > `[`GetETagForAllSessionsPoll`](#classURH__GameInstanceServerBootstrapper_1ae10409319fa6d2264e124e65a8c9bf8e)`() const` | Gets the etag to use for a "Get all Sessions" type query.
`public inline virtual TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classURH__GameInstanceServerBootstrapper_1ac2f94216aa37e0981cbb72db9e8a9f10)`() const` | Used to get all sessions, primarily for get all sessions polling where etag matches.
`public virtual `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classURH__GameInstanceServerBootstrapper_1abe0dcf495d31dfbd8876d63feab05ad5)`(const FString & SessionId) const` | Gets a session by its id.
`public virtual bool `[`GetTemplate`](#classURH__GameInstanceServerBootstrapper_1a62d69a1d7e7021f03557dff715e6179d)`(const FString & Type,`[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` | Gets a session template by type.
`public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classURH__GameInstanceServerBootstrapper_1aec9f89849a3865282935f12646e98255)`(const FString & SessionId) const` | Gets the platform synchronization object using the rally here session id.
`public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classURH__GameInstanceServerBootstrapper_1a2c2d7c9b2b38fca62aba5ba8e642797b)`(const FUniqueNetIdRepl & PlatformSessionId) const` | Gets the platform synchronization object using the platform session id.
`protected `[`ERH_ServerBootstrapMode`](undefined.md#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)` `[`BootstrapMode`](#classURH__GameInstanceServerBootstrapper_1a437398cd4da11b39dbba5624ac0d4503) | Bootstrap Mode being used
`protected `[`ERH_ServerBootstrapFlowStep`](undefined.md#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)` `[`BootstrapStep`](#classURH__GameInstanceServerBootstrapper_1a0c41579ef8e737384ac8e1c82efb8d11) | Current Bootstrap Step
`protected int32 `[`CurrentRecycleCount`](#classURH__GameInstanceServerBootstrapper_1a95d71262cc53a06cf14abb0e1c5ebd76) | The current recycle count (note that the initial boot is considered the first recycle, so this is effectively 1-based)
`protected FDelegateHandle `[`OnOSSLoginCompleteDelegateHandle`](#classURH__GameInstanceServerBootstrapper_1ab1b28fef06ce98a58eaea9c81f7a6615) | Delegate handle for the OSS login call
`protected FAuthContextPtr `[`AuthContext`](#classURH__GameInstanceServerBootstrapper_1a31e36a649064c176a0727626265f6ff8) | The auth context for this bootstrapper
`protected TUniquePtr< IRH_GameHostProviderInterface > `[`GameHostProvider`](#classURH__GameInstanceServerBootstrapper_1a1b04f9631853c09086b8f616bf2e14a5) | The game host provider for this bootstrapper
`protected `[`FRH_BootstrappingResult`](GameInstance.md#structFRH__BootstrappingResult)` `[`BootstrappingResult`](#classURH__GameInstanceServerBootstrapper_1a0874c2b9b1ad9a8e9e61e26ac7777d04) | The current bootstrapping result
`protected TMap< FString, `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`Templates`](#classURH__GameInstanceServerBootstrapper_1a9cd2bf3717733651fd52d461e8f11f16) | Session templates to use to iniailize the session
`protected TOptional< FString > `[`AllTemplatesETag`](#classURH__GameInstanceServerBootstrapper_1a98d6b5f7f29f0a05d3cfe1064de8e230) | ETag for the template list
`protected `[`URH_OnlineSession`](Session.md#classURH__OnlineSession)` * `[`RHSession`](#classURH__GameInstanceServerBootstrapper_1ad302c0226ce41e487468265ce7ce3808) | The current session we are using
`protected FString `[`DefaultAutoCreateSessionType`](#classURH__GameInstanceServerBootstrapper_1ade098c2efc90a5136ef64520677b72d2) | The default type of session to create when using AutoCreate bootstrapping mode
`protected `[`ERH_ServerBootstrapMode`](undefined.md#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)` `[`DefaultBootstrapMode`](#classURH__GameInstanceServerBootstrapper_1a925b503fbad705f2664c2d36e21fe9cb) | The default type of bootstrapping mode (only supports Disabled and LoginOnly, as other session types require commandline injection)
`protected int32 `[`MaxRecycleCount`](#classURH__GameInstanceServerBootstrapper_1a9c0012cfc1a7b0441d76f276d34e654a) | The maximum number of times to recycle this bootstrapper (if less than one, implies 1), checked during cleanup
`protected bool `[`bMultiSessionServerMode`](#classURH__GameInstanceServerBootstrapper_1afacb0c65022bf850926bc30885a92028) | Disables some checks that will cause the process to spin down, for use in cases where multiple game instances are running within a single process
`protected bool `[`bReplaceSIGTERMHandler`](#classURH__GameInstanceServerBootstrapper_1a369bde041817982419998ecec1081e4e) | Whether to intercept SIGTERM and prevent passing it to engine handler(which will exit immediately)
`protected virtual void `[`ApplicationTerminationNotify`](#classURH__GameInstanceServerBootstrapper_1a258259f6d6d1540397da45d80e653be1)`()` | Callback binding for the default engine SIGTERM / CTRL - C(Windows) handlers - these are indicating an IMMEDIATE shutdown - will defer to game thread if needed.
`protected virtual void `[`HandleAppTerminatedGameThread`](#classURH__GameInstanceServerBootstrapper_1a1ec1c5bb9f2a33ab6046cf66d8b4b152)`()` | Callback binding for the default engine SIGTERM / CTRL - C(Windows) handlers - these are indicating an IMMEDIATE shutdown - runs in the game thread.
`protected virtual void `[`BestEffortLeaveSession`](#classURH__GameInstanceServerBootstrapper_1a14524147b04e9d0a6c2e2f4e7e1de9bf)`()` | Fallback routine that does its best to leave the session we have loaded.
`protected virtual void `[`UpdateBootstrapStep`](#classURH__GameInstanceServerBootstrapper_1ad3057c819da82f1bd348bbfc8eeb1850)`(`[`ERH_ServerBootstrapFlowStep`](undefined.md#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)` NewStep)` | Updates the current bootstrapping step, and handles step change logic.
`protected virtual void `[`OnBootstrappingFailed`](#classURH__GameInstanceServerBootstrapper_1a1875bbf2ad7df512f7f1c977a6dfe161)`()` | Bootstrapping Flow [Failed] - trigger bootstrapping failure and handles failure logic.
`protected virtual void `[`OnBootstrappingComplete`](#classURH__GameInstanceServerBootstrapper_1a2882f79445b73579a19dbb92e8b859df)`()` | Bootstrapping Flow [Complete] - trigger bootstrapping complete and handles completion logic. Note that recycling may start a new bootstrapping flow.
`protected virtual void `[`BeginServerLogin`](#classURH__GameInstanceServerBootstrapper_1a924d64924d1e13251752ae00763ea765)`()` | Bootstrapping Flow [LoggingIn] - begin the login process to the RallyHere API.
`protected virtual void `[`BeginOSSLogin`](#classURH__GameInstanceServerBootstrapper_1a596197bb7c3249d78c7f25cb7a45dee3)`()` | Bootstrapping Flow [LoggingIn] - begin platform OSS login to generate login credentials.
`protected virtual void `[`BeginNullLogin`](#classURH__GameInstanceServerBootstrapper_1abe2daf2fda783a6322a4baafc3f4ce0e)`()` | Bootstrapping Flow [LoggingIn] - begin platform OSS login to generate login credentials.
`protected virtual void `[`OnOSSLoginComplete`](#classURH__GameInstanceServerBootstrapper_1afa72878c5edec64e1228cb302676a2a0)`(int32 ControllerId,bool bSuccessful,const FUniqueNetId & UniqueId,const FString & ErrorMessage)` | Bootstrapping Flow [LoggingIn] - completion callback for platform OSS login with credentials to use.
`protected virtual void `[`RetrieveOSSAuthTokenComplete`](#classURH__GameInstanceServerBootstrapper_1a86498208233cbf6c51ef72ff0043410a)`(int32 LocalUserNum,bool bWasSuccessful,const FExternalAuthToken & AuthTokenWrapper)` | Start the login to Rally Here.
`protected virtual void `[`OnServerLoginComplete`](#classURH__GameInstanceServerBootstrapper_1aa3753ed4ef198142046a76016193062e)`(bool bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` & ErrorInfo)` | Bootstrapping Flow [Login] - completion callback for RallyHere API login.
`protected virtual void `[`Recycle`](#classURH__GameInstanceServerBootstrapper_1a4899aaa6b044107233cb45e8695c3029)`()` | Bootstrapping Flow [Recycle] - start a new recycle loop.
`protected virtual void `[`BeginRegistration`](#classURH__GameInstanceServerBootstrapper_1aa99989cd2184a498b1de613e4eeee199)`()` | Bootstrapping Flow [Registration][Allocation][AutoCreate] - start the process of registering with the game host provider.
`protected virtual void `[`BeginConnecting`](#classURH__GameInstanceServerBootstrapper_1ade01521ed7529ea5d6675439de5eec36)`()` | Bootstrapping Flow [Registration][Allocation][AutoCreate] - begin connecting to the provider.
`protected virtual void `[`OnConnectComplete`](#classURH__GameInstanceServerBootstrapper_1aea5e88f66215aaf38150c730b957a3de)`(bool bSuccess)` | Bootstrapping Flow [Registration][Allocation][AutoCreate] - completion callback for connecting to the provider.
`protected virtual void `[`BeginRegister`](#classURH__GameInstanceServerBootstrapper_1a39fcb4bf8f58a9de010aa99ec23a7b4d)`()` | Bootstrapping Flow [Registration][Allocation] - register with provider and wait for an allocation.
`protected virtual void `[`OnRegisterComplete`](#classURH__GameInstanceServerBootstrapper_1ac7200145aca8c04b0fc8d036d32fc0ea)`(bool bSucess)` | Bootstrapping Flow [Registration][Allocation] - completion callback for registering with the provider.
`protected virtual void `[`OnAllocationComplete`](#classURH__GameInstanceServerBootstrapper_1a175d8c93883c53869093cc3ec7c431fd)`(ERH_AllocationStatus Status,const FRH_GameHostAllocationInfo & AllocationInfo)` | Bootstrapping Flow [Registration][Allocation] - completion callback for allocation being ready.
`protected virtual void `[`BeginReservation`](#classURH__GameInstanceServerBootstrapper_1aec6f4c87f39a37cbdcd605d6449fcd13)`()` | Bootstrapping Flow [Registration][AutoCreate] - begin a reservation so that the provider can know about this server.
`protected virtual void `[`OnReservationComplete`](#classURH__GameInstanceServerBootstrapper_1a490388b65fb63bd0536a4cc264455e53)`(bool bSuccess)` | Bootstrapping Flow [Registration][AutoCreate] - completion callback for reservation creation.
`protected virtual void `[`BeginSelfAllocate`](#classURH__GameInstanceServerBootstrapper_1a2754313adb76f07d1a0d57d7ff94353b)`()` | Bootstrapping Flow [Registration][AutoCreate] - inform the provider that this server is self-allocated.
`protected virtual void `[`OnSelfAllocateComplete`](#classURH__GameInstanceServerBootstrapper_1a141d3bcd49aa8079af7852e5a09f9985)`(bool bSuccess)` | Bootstrapping Flow [Registration][AutoCreate] - completion callback for self allocation.
`protected virtual void `[`OnRegistrationFinalizerComplete`](#classURH__GameInstanceServerBootstrapper_1af5393fb9a958e0dd9d2a9d90e82cde47)`(bool bSuccess,const `[`FRH_BootstrappingResult`](GameInstance.md#structFRH__BootstrappingResult)` & Result)` | Bootstrapping Flow [WaitingForSession] - callback for when registration process has completed and produced a bootstrapping result. Checks the result and then checks for an instance. Either creates and instance, or forwards on to [OnSessionInstanceCreationCompleted()](GameInstance.md#classURH__GameInstanceServerBootstrapper_1a664cad446221aca95b830ddab2eadd3f)
`protected virtual void `[`OnSessionInstanceCreationCompleted`](#classURH__GameInstanceServerBootstrapper_1a664cad446221aca95b830ddab2eadd3f)`(bool bSuccess,`[`URH_SessionView`](Session.md#classURH__SessionView)` * CreatedRHSession,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` & ErrorInfo)` | Bootstrapping Flow [WaitingForSession] - callback for when registration process has completed and produced a bootstrapping result.
`protected virtual void `[`SyncToSession`](#classURH__GameInstanceServerBootstrapper_1a916ef7edd3eae169e87ac544ea2088c6)`()` | Bootstrapping Flow [SyncingToSession] - begin the process of synchronizing the session state into RH_GameInstanceSessionSubsystem.
`protected virtual void `[`OnSyncToSessionComplete`](#classURH__GameInstanceServerBootstrapper_1a70667eca088ae8b5873b4f02281c7a94)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,bool bSuccess,const FString & Error)` | Bootstrapping Flow [SyncingToSession] - completiong callback for session sync.
`protected virtual void `[`OnSessionUpdated`](#classURH__GameInstanceServerBootstrapper_1a91273ca69e8e885b6b96f4fb594d3318)`(`[`URH_SessionView`](Session.md#classURH__SessionView)` * Session)` | Notification callback that the session we have synced to was updated.
`protected virtual void `[`OnSessionNotFound`](#classURH__GameInstanceServerBootstrapper_1a98ef077ce4a34510a6ee988549acd753)`(`[`URH_SessionView`](Session.md#classURH__SessionView)` * Session)` | Notification callback that the session we have synced to was not found.
`protected virtual void `[`CleanupAfterInstanceRemoval`](#classURH__GameInstanceServerBootstrapper_1a9aab21c5a300e982d5216e04acdbf6f4)`()` | Utility function to clean up state after an instance removal and attempt to recycle.
`protected virtual void `[`OnCleanupSessionSyncComplete`](#classURH__GameInstanceServerBootstrapper_1a38bf567f475e12b06eb5a16883165bb6)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,bool bSuccess,const FString & Error)` | Completion callback for session and instance cleanup.
`protected virtual bool `[`ShouldRecycleAfterCleanup`](#classURH__GameInstanceServerBootstrapper_1a3841facd4998b2ceb4e4f48354c2f665)`() const` | Gets whether we should recycle the state after cleanup.

#### Members

#### `public  `[`URH_GameInstanceServerBootstrapper`](#classURH__GameInstanceServerBootstrapper_1a3da69fd930b5f05a1c46fac0b93d8cdb)`()` <a id="classURH__GameInstanceServerBootstrapper_1a3da69fd930b5f05a1c46fac0b93d8cdb"></a>

<br>
#### `public virtual void `[`Initialize`](#classURH__GameInstanceServerBootstrapper_1a432619f05655325816a804827d2628da)`()` <a id="classURH__GameInstanceServerBootstrapper_1a432619f05655325816a804827d2628da"></a>

Initialize the bootstrapper.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__GameInstanceServerBootstrapper_1a59eb0bc34504af7e31816b52a7bf8098)`()` <a id="classURH__GameInstanceServerBootstrapper_1a59eb0bc34504af7e31816b52a7bf8098"></a>

Deinitialize the bootstrapper.

<br>
#### `public inline FORCEINLINE `[`ERH_ServerBootstrapFlowStep`](undefined.md#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)` `[`GetBootstrapStep`](#classURH__GameInstanceServerBootstrapper_1acf176fcc96de694c32f32ad27ccf57f8)`() const` <a id="classURH__GameInstanceServerBootstrapper_1acf176fcc96de694c32f32ad27ccf57f8"></a>

Get the current bootstrapping step.

<br>
#### `public inline FORCEINLINE `[`ERH_ServerBootstrapMode`](undefined.md#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)` `[`GetBootstrapMode`](#classURH__GameInstanceServerBootstrapper_1a5633b7f16aac374fb3de4419fbb5d3e1)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a5633b7f16aac374fb3de4419fbb5d3e1"></a>

Get the current bootstrapping mode.

<br>
#### `public bool `[`DetermineJoinParameters`](#classURH__GameInstanceServerBootstrapper_1a05c84f3ca59681b62a9c23675d3aad3c)`(FString & PublicConnStr,FString & PrivateConnStr)` <a id="classURH__GameInstanceServerBootstrapper_1a05c84f3ca59681b62a9c23675d3aad3c"></a>

Determines the join parameters to be used for a session that was bootstrapped.

#### Parameters
* `PublicConnStr` The public connection string to use 

* `PrivateConnStr` The private connection string to use 

#### Returns
Whether or not the join parameters were successfully determined from the allocation info

<br>
#### `public virtual void `[`OnGameHostProviderStats`](#classURH__GameInstanceServerBootstrapper_1aac676ff53c8aedc49683c6e81f44b719)`(FRH_GameHostProviderStats & Stats)` <a id="classURH__GameInstanceServerBootstrapper_1aac676ff53c8aedc49683c6e81f44b719"></a>

bound callback triggered to provide stats to the game host provider

<br>
#### `public virtual void `[`Tick`](#classURH__GameInstanceServerBootstrapper_1a73c5b13ad645414ddfa9dbab9c09aff0)`(float DeltaTime)` <a id="classURH__GameInstanceServerBootstrapper_1a73c5b13ad645414ddfa9dbab9c09aff0"></a>

Tick function.

#### Parameters
* `DeltaTime` The time since the last tick

<br>
#### `public virtual bool `[`IsTickable`](#classURH__GameInstanceServerBootstrapper_1a806c9027d05eece8eed4ebb5ea3838de)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a806c9027d05eece8eed4ebb5ea3838de"></a>

Whether or not to tick this object.

<br>
#### `public virtual TStatId `[`GetStatId`](#classURH__GameInstanceServerBootstrapper_1ace60b33a55d1acdc8c07c42fc6f495e3)`() const` <a id="classURH__GameInstanceServerBootstrapper_1ace60b33a55d1acdc8c07c42fc6f495e3"></a>

What stat id to use to report for the tick.

<br>
#### `public inline virtual FAuthContextPtr `[`GetAuthContext`](#classURH__GameInstanceServerBootstrapper_1a55b7b631d0d985ed2b86cfa8ccfb3690)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a55b7b631d0d985ed2b86cfa8ccfb3690"></a>

Provides the auth context this bootstrapper owns.

<br>
#### `public inline virtual `[`URH_OnlineSession`](Session.md#classURH__OnlineSession)` * `[`GetSession`](#classURH__GameInstanceServerBootstrapper_1a2ee4a4f52cbb85e077b2ffb2459f2c3e)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a2ee4a4f52cbb85e077b2ffb2459f2c3e"></a>

Get the current bootstrapping mode.

<br>
#### `public inline virtual FAuthContextPtr `[`GetSessionAuthContext`](#classURH__GameInstanceServerBootstrapper_1a3c8ddb006bbc3dea378d179e51be5b62)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a3c8ddb006bbc3dea378d179e51be5b62"></a>

Gets the auth context to use for API calls for the session owner.

<br>
#### `public virtual void `[`ImportAPISession`](#classURH__GameInstanceServerBootstrapper_1a374284e48119f0092acb4a0da5634215)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` <a id="classURH__GameInstanceServerBootstrapper_1a374284e48119f0092acb4a0da5634215"></a>

Imports a session object from the API into the owner (ex: from polling).

#### Parameters
* `Session` The Session to import.

<br>
#### `public virtual void `[`ImportAPITemplate`](#classURH__GameInstanceServerBootstrapper_1a9cfc35913bd38f0fd8f090428c6971d4)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` <a id="classURH__GameInstanceServerBootstrapper_1a9cfc35913bd38f0fd8f090428c6971d4"></a>

Imports the template into the owner's template list (ex: from polling).

#### Parameters
* `TemplateWrapper` The Template to import.

<br>
#### `public virtual void `[`ReconcileAPISessions`](#classURH__GameInstanceServerBootstrapper_1a30545d8b52b8fdfe6ebbff321514e929)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` <a id="classURH__GameInstanceServerBootstrapper_1a30545d8b52b8fdfe6ebbff321514e929"></a>

Updates the list of sessions to only those that are active.

#### Parameters
* `SessionIds` The list of sessions that we are reconciling against. 

* `ETag` The ETag to use for the update.

<br>
#### `public virtual void `[`ReconcileAPITemplates`](#classURH__GameInstanceServerBootstrapper_1a3f046c14798943a59bcb268c75e02e6c)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` <a id="classURH__GameInstanceServerBootstrapper_1a3f046c14798943a59bcb268c75e02e6c"></a>

Updates the list of session templates to those that are active.

#### Parameters
* `InTemplates` The list of templates that we are reconciling against. 

* `ETag` The ETag to use for the update.

<br>
#### `public virtual class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__GameInstanceServerBootstrapper_1ac1a7eee0c5d62a932aba1d57520fba59)`() const` <a id="classURH__GameInstanceServerBootstrapper_1ac1a7eee0c5d62a932aba1d57520fba59"></a>

Gets the PlayerInfo Subsystem.

<br>
#### `public virtual IOnlineSubsystem * `[`GetOSS`](#classURH__GameInstanceServerBootstrapper_1afdc3030fd174d1a570231dcad8429265)`() const` <a id="classURH__GameInstanceServerBootstrapper_1afdc3030fd174d1a570231dcad8429265"></a>

Gets the Online Subsystem to use for OSS calls.

<br>
#### `public virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__GameInstanceServerBootstrapper_1a935444ab045d0e8647ace5f59b803a72)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a935444ab045d0e8647ace5f59b803a72"></a>

Gets the Online Subsystem Unique Id to use for OSS calls.

<br>
#### `public inline virtual TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classURH__GameInstanceServerBootstrapper_1ac1eaa7cf3cda91a7a1f412dfe5246fa8)`() const` <a id="classURH__GameInstanceServerBootstrapper_1ac1eaa7cf3cda91a7a1f412dfe5246fa8"></a>

Gets the etag to use for a "Get all Templates" type query.

<br>
#### `public inline virtual TOptional< FString > `[`GetETagForAllSessionsPoll`](#classURH__GameInstanceServerBootstrapper_1ae10409319fa6d2264e124e65a8c9bf8e)`() const` <a id="classURH__GameInstanceServerBootstrapper_1ae10409319fa6d2264e124e65a8c9bf8e"></a>

Gets the etag to use for a "Get all Sessions" type query.

<br>
#### `public inline virtual TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classURH__GameInstanceServerBootstrapper_1ac2f94216aa37e0981cbb72db9e8a9f10)`() const` <a id="classURH__GameInstanceServerBootstrapper_1ac2f94216aa37e0981cbb72db9e8a9f10"></a>

Used to get all sessions, primarily for get all sessions polling where etag matches.

<br>
#### `public virtual `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classURH__GameInstanceServerBootstrapper_1abe0dcf495d31dfbd8876d63feab05ad5)`(const FString & SessionId) const` <a id="classURH__GameInstanceServerBootstrapper_1abe0dcf495d31dfbd8876d63feab05ad5"></a>

Gets a session by its id.

#### Parameters
* `SessionId` The Session Id to get. 

#### Returns
The Session with the given Id.

<br>
#### `public virtual bool `[`GetTemplate`](#classURH__GameInstanceServerBootstrapper_1a62d69a1d7e7021f03557dff715e6179d)`(const FString & Type,`[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` <a id="classURH__GameInstanceServerBootstrapper_1a62d69a1d7e7021f03557dff715e6179d"></a>

Gets a session template by type.

#### Parameters
* `Type` the Type of template to get. 

* `Template` The session template being retrieved. 

#### Returns
If true, the template was found.

<br>
#### `public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classURH__GameInstanceServerBootstrapper_1aec9f89849a3865282935f12646e98255)`(const FString & SessionId) const` <a id="classURH__GameInstanceServerBootstrapper_1aec9f89849a3865282935f12646e98255"></a>

Gets the platform synchronization object using the rally here session id.

<br>
#### `public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classURH__GameInstanceServerBootstrapper_1a2c2d7c9b2b38fca62aba5ba8e642797b)`(const FUniqueNetIdRepl & PlatformSessionId) const` <a id="classURH__GameInstanceServerBootstrapper_1a2c2d7c9b2b38fca62aba5ba8e642797b"></a>

Gets the platform synchronization object using the platform session id.

<br>
#### `protected `[`ERH_ServerBootstrapMode`](undefined.md#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)` `[`BootstrapMode`](#classURH__GameInstanceServerBootstrapper_1a437398cd4da11b39dbba5624ac0d4503) <a id="classURH__GameInstanceServerBootstrapper_1a437398cd4da11b39dbba5624ac0d4503"></a>

Bootstrap Mode being used

<br>
#### `protected `[`ERH_ServerBootstrapFlowStep`](undefined.md#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)` `[`BootstrapStep`](#classURH__GameInstanceServerBootstrapper_1a0c41579ef8e737384ac8e1c82efb8d11) <a id="classURH__GameInstanceServerBootstrapper_1a0c41579ef8e737384ac8e1c82efb8d11"></a>

Current Bootstrap Step

<br>
#### `protected int32 `[`CurrentRecycleCount`](#classURH__GameInstanceServerBootstrapper_1a95d71262cc53a06cf14abb0e1c5ebd76) <a id="classURH__GameInstanceServerBootstrapper_1a95d71262cc53a06cf14abb0e1c5ebd76"></a>

The current recycle count (note that the initial boot is considered the first recycle, so this is effectively 1-based)

<br>
#### `protected FDelegateHandle `[`OnOSSLoginCompleteDelegateHandle`](#classURH__GameInstanceServerBootstrapper_1ab1b28fef06ce98a58eaea9c81f7a6615) <a id="classURH__GameInstanceServerBootstrapper_1ab1b28fef06ce98a58eaea9c81f7a6615"></a>

Delegate handle for the OSS login call

<br>
#### `protected FAuthContextPtr `[`AuthContext`](#classURH__GameInstanceServerBootstrapper_1a31e36a649064c176a0727626265f6ff8) <a id="classURH__GameInstanceServerBootstrapper_1a31e36a649064c176a0727626265f6ff8"></a>

The auth context for this bootstrapper

<br>
#### `protected TUniquePtr< IRH_GameHostProviderInterface > `[`GameHostProvider`](#classURH__GameInstanceServerBootstrapper_1a1b04f9631853c09086b8f616bf2e14a5) <a id="classURH__GameInstanceServerBootstrapper_1a1b04f9631853c09086b8f616bf2e14a5"></a>

The game host provider for this bootstrapper

<br>
#### `protected `[`FRH_BootstrappingResult`](GameInstance.md#structFRH__BootstrappingResult)` `[`BootstrappingResult`](#classURH__GameInstanceServerBootstrapper_1a0874c2b9b1ad9a8e9e61e26ac7777d04) <a id="classURH__GameInstanceServerBootstrapper_1a0874c2b9b1ad9a8e9e61e26ac7777d04"></a>

The current bootstrapping result

<br>
#### `protected TMap< FString, `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`Templates`](#classURH__GameInstanceServerBootstrapper_1a9cd2bf3717733651fd52d461e8f11f16) <a id="classURH__GameInstanceServerBootstrapper_1a9cd2bf3717733651fd52d461e8f11f16"></a>

Session templates to use to iniailize the session

<br>
#### `protected TOptional< FString > `[`AllTemplatesETag`](#classURH__GameInstanceServerBootstrapper_1a98d6b5f7f29f0a05d3cfe1064de8e230) <a id="classURH__GameInstanceServerBootstrapper_1a98d6b5f7f29f0a05d3cfe1064de8e230"></a>

ETag for the template list

<br>
#### `protected `[`URH_OnlineSession`](Session.md#classURH__OnlineSession)` * `[`RHSession`](#classURH__GameInstanceServerBootstrapper_1ad302c0226ce41e487468265ce7ce3808) <a id="classURH__GameInstanceServerBootstrapper_1ad302c0226ce41e487468265ce7ce3808"></a>

The current session we are using

<br>
#### `protected FString `[`DefaultAutoCreateSessionType`](#classURH__GameInstanceServerBootstrapper_1ade098c2efc90a5136ef64520677b72d2) <a id="classURH__GameInstanceServerBootstrapper_1ade098c2efc90a5136ef64520677b72d2"></a>

The default type of session to create when using AutoCreate bootstrapping mode

<br>
#### `protected `[`ERH_ServerBootstrapMode`](undefined.md#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)` `[`DefaultBootstrapMode`](#classURH__GameInstanceServerBootstrapper_1a925b503fbad705f2664c2d36e21fe9cb) <a id="classURH__GameInstanceServerBootstrapper_1a925b503fbad705f2664c2d36e21fe9cb"></a>

The default type of bootstrapping mode (only supports Disabled and LoginOnly, as other session types require commandline injection)

<br>
#### `protected int32 `[`MaxRecycleCount`](#classURH__GameInstanceServerBootstrapper_1a9c0012cfc1a7b0441d76f276d34e654a) <a id="classURH__GameInstanceServerBootstrapper_1a9c0012cfc1a7b0441d76f276d34e654a"></a>

The maximum number of times to recycle this bootstrapper (if less than one, implies 1), checked during cleanup

<br>
#### `protected bool `[`bMultiSessionServerMode`](#classURH__GameInstanceServerBootstrapper_1afacb0c65022bf850926bc30885a92028) <a id="classURH__GameInstanceServerBootstrapper_1afacb0c65022bf850926bc30885a92028"></a>

Disables some checks that will cause the process to spin down, for use in cases where multiple game instances are running within a single process

<br>
#### `protected bool `[`bReplaceSIGTERMHandler`](#classURH__GameInstanceServerBootstrapper_1a369bde041817982419998ecec1081e4e) <a id="classURH__GameInstanceServerBootstrapper_1a369bde041817982419998ecec1081e4e"></a>

Whether to intercept SIGTERM and prevent passing it to engine handler(which will exit immediately)

<br>
#### `protected virtual void `[`ApplicationTerminationNotify`](#classURH__GameInstanceServerBootstrapper_1a258259f6d6d1540397da45d80e653be1)`()` <a id="classURH__GameInstanceServerBootstrapper_1a258259f6d6d1540397da45d80e653be1"></a>

Callback binding for the default engine SIGTERM / CTRL - C(Windows) handlers - these are indicating an IMMEDIATE shutdown - will defer to game thread if needed.

<br>
#### `protected virtual void `[`HandleAppTerminatedGameThread`](#classURH__GameInstanceServerBootstrapper_1a1ec1c5bb9f2a33ab6046cf66d8b4b152)`()` <a id="classURH__GameInstanceServerBootstrapper_1a1ec1c5bb9f2a33ab6046cf66d8b4b152"></a>

Callback binding for the default engine SIGTERM / CTRL - C(Windows) handlers - these are indicating an IMMEDIATE shutdown - runs in the game thread.

<br>
#### `protected virtual void `[`BestEffortLeaveSession`](#classURH__GameInstanceServerBootstrapper_1a14524147b04e9d0a6c2e2f4e7e1de9bf)`()` <a id="classURH__GameInstanceServerBootstrapper_1a14524147b04e9d0a6c2e2f4e7e1de9bf"></a>

Fallback routine that does its best to leave the session we have loaded.

<br>
#### `protected virtual void `[`UpdateBootstrapStep`](#classURH__GameInstanceServerBootstrapper_1ad3057c819da82f1bd348bbfc8eeb1850)`(`[`ERH_ServerBootstrapFlowStep`](undefined.md#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)` NewStep)` <a id="classURH__GameInstanceServerBootstrapper_1ad3057c819da82f1bd348bbfc8eeb1850"></a>

Updates the current bootstrapping step, and handles step change logic.

#### Parameters
* `NewStep` The new step to transition to

<br>
#### `protected virtual void `[`OnBootstrappingFailed`](#classURH__GameInstanceServerBootstrapper_1a1875bbf2ad7df512f7f1c977a6dfe161)`()` <a id="classURH__GameInstanceServerBootstrapper_1a1875bbf2ad7df512f7f1c977a6dfe161"></a>

Bootstrapping Flow [Failed] - trigger bootstrapping failure and handles failure logic.

<br>
#### `protected virtual void `[`OnBootstrappingComplete`](#classURH__GameInstanceServerBootstrapper_1a2882f79445b73579a19dbb92e8b859df)`()` <a id="classURH__GameInstanceServerBootstrapper_1a2882f79445b73579a19dbb92e8b859df"></a>

Bootstrapping Flow [Complete] - trigger bootstrapping complete and handles completion logic. Note that recycling may start a new bootstrapping flow.

<br>
#### `protected virtual void `[`BeginServerLogin`](#classURH__GameInstanceServerBootstrapper_1a924d64924d1e13251752ae00763ea765)`()` <a id="classURH__GameInstanceServerBootstrapper_1a924d64924d1e13251752ae00763ea765"></a>

Bootstrapping Flow [LoggingIn] - begin the login process to the RallyHere API.

<br>
#### `protected virtual void `[`BeginOSSLogin`](#classURH__GameInstanceServerBootstrapper_1a596197bb7c3249d78c7f25cb7a45dee3)`()` <a id="classURH__GameInstanceServerBootstrapper_1a596197bb7c3249d78c7f25cb7a45dee3"></a>

Bootstrapping Flow [LoggingIn] - begin platform OSS login to generate login credentials.

<br>
#### `protected virtual void `[`BeginNullLogin`](#classURH__GameInstanceServerBootstrapper_1abe2daf2fda783a6322a4baafc3f4ce0e)`()` <a id="classURH__GameInstanceServerBootstrapper_1abe2daf2fda783a6322a4baafc3f4ce0e"></a>

Bootstrapping Flow [LoggingIn] - begin platform OSS login to generate login credentials.

<br>
#### `protected virtual void `[`OnOSSLoginComplete`](#classURH__GameInstanceServerBootstrapper_1afa72878c5edec64e1228cb302676a2a0)`(int32 ControllerId,bool bSuccessful,const FUniqueNetId & UniqueId,const FString & ErrorMessage)` <a id="classURH__GameInstanceServerBootstrapper_1afa72878c5edec64e1228cb302676a2a0"></a>

Bootstrapping Flow [LoggingIn] - completion callback for platform OSS login with credentials to use.

#### Parameters
* `ControllerId` The controller id that was used to login 

* `bSuccessful` Whether or not the login was successful 

* `UniqueId` The unique id of the user that logged in 

* `ErrorMessage` The error message if the login failed

<br>
#### `protected virtual void `[`RetrieveOSSAuthTokenComplete`](#classURH__GameInstanceServerBootstrapper_1a86498208233cbf6c51ef72ff0043410a)`(int32 LocalUserNum,bool bWasSuccessful,const FExternalAuthToken & AuthTokenWrapper)` <a id="classURH__GameInstanceServerBootstrapper_1a86498208233cbf6c51ef72ff0043410a"></a>

Start the login to Rally Here.

#### Parameters
* `LocalUserNum` Local user number of the player logging in. 

* `bWasSuccessful` Was the retrieval successful. 

* `AuthTokenWrapper` The auth token wrapper.

<br>
#### `protected virtual void `[`OnServerLoginComplete`](#classURH__GameInstanceServerBootstrapper_1aa3753ed4ef198142046a76016193062e)`(bool bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` & ErrorInfo)` <a id="classURH__GameInstanceServerBootstrapper_1aa3753ed4ef198142046a76016193062e"></a>

Bootstrapping Flow [Login] - completion callback for RallyHere API login.

#### Parameters
* `bSuccess` Whether or not the login was successful

<br>
#### `protected virtual void `[`Recycle`](#classURH__GameInstanceServerBootstrapper_1a4899aaa6b044107233cb45e8695c3029)`()` <a id="classURH__GameInstanceServerBootstrapper_1a4899aaa6b044107233cb45e8695c3029"></a>

Bootstrapping Flow [Recycle] - start a new recycle loop.

<br>
#### `protected virtual void `[`BeginRegistration`](#classURH__GameInstanceServerBootstrapper_1aa99989cd2184a498b1de613e4eeee199)`()` <a id="classURH__GameInstanceServerBootstrapper_1aa99989cd2184a498b1de613e4eeee199"></a>

Bootstrapping Flow [Registration][Allocation][AutoCreate] - start the process of registering with the game host provider.

<br>
#### `protected virtual void `[`BeginConnecting`](#classURH__GameInstanceServerBootstrapper_1ade01521ed7529ea5d6675439de5eec36)`()` <a id="classURH__GameInstanceServerBootstrapper_1ade01521ed7529ea5d6675439de5eec36"></a>

Bootstrapping Flow [Registration][Allocation][AutoCreate] - begin connecting to the provider.

<br>
#### `protected virtual void `[`OnConnectComplete`](#classURH__GameInstanceServerBootstrapper_1aea5e88f66215aaf38150c730b957a3de)`(bool bSuccess)` <a id="classURH__GameInstanceServerBootstrapper_1aea5e88f66215aaf38150c730b957a3de"></a>

Bootstrapping Flow [Registration][Allocation][AutoCreate] - completion callback for connecting to the provider.

#### Parameters
* `bSuccess` Whether or not the connection was successful

<br>
#### `protected virtual void `[`BeginRegister`](#classURH__GameInstanceServerBootstrapper_1a39fcb4bf8f58a9de010aa99ec23a7b4d)`()` <a id="classURH__GameInstanceServerBootstrapper_1a39fcb4bf8f58a9de010aa99ec23a7b4d"></a>

Bootstrapping Flow [Registration][Allocation] - register with provider and wait for an allocation.

<br>
#### `protected virtual void `[`OnRegisterComplete`](#classURH__GameInstanceServerBootstrapper_1ac7200145aca8c04b0fc8d036d32fc0ea)`(bool bSucess)` <a id="classURH__GameInstanceServerBootstrapper_1ac7200145aca8c04b0fc8d036d32fc0ea"></a>

Bootstrapping Flow [Registration][Allocation] - completion callback for registering with the provider.

#### Parameters
* `bSuccess` Whether or not the connection was successful

<br>
#### `protected virtual void `[`OnAllocationComplete`](#classURH__GameInstanceServerBootstrapper_1a175d8c93883c53869093cc3ec7c431fd)`(ERH_AllocationStatus Status,const FRH_GameHostAllocationInfo & AllocationInfo)` <a id="classURH__GameInstanceServerBootstrapper_1a175d8c93883c53869093cc3ec7c431fd"></a>

Bootstrapping Flow [Registration][Allocation] - completion callback for allocation being ready.

#### Parameters
* `Status` Whether or not the allocation was successful or had an error 

* `AllocationInfo` The allocation info that was produced

<br>
#### `protected virtual void `[`BeginReservation`](#classURH__GameInstanceServerBootstrapper_1aec6f4c87f39a37cbdcd605d6449fcd13)`()` <a id="classURH__GameInstanceServerBootstrapper_1aec6f4c87f39a37cbdcd605d6449fcd13"></a>

Bootstrapping Flow [Registration][AutoCreate] - begin a reservation so that the provider can know about this server.

<br>
#### `protected virtual void `[`OnReservationComplete`](#classURH__GameInstanceServerBootstrapper_1a490388b65fb63bd0536a4cc264455e53)`(bool bSuccess)` <a id="classURH__GameInstanceServerBootstrapper_1a490388b65fb63bd0536a4cc264455e53"></a>

Bootstrapping Flow [Registration][AutoCreate] - completion callback for reservation creation.

#### Parameters
* `bSuccess` Whether or not the reservation was successful

<br>
#### `protected virtual void `[`BeginSelfAllocate`](#classURH__GameInstanceServerBootstrapper_1a2754313adb76f07d1a0d57d7ff94353b)`()` <a id="classURH__GameInstanceServerBootstrapper_1a2754313adb76f07d1a0d57d7ff94353b"></a>

Bootstrapping Flow [Registration][AutoCreate] - inform the provider that this server is self-allocated.

<br>
#### `protected virtual void `[`OnSelfAllocateComplete`](#classURH__GameInstanceServerBootstrapper_1a141d3bcd49aa8079af7852e5a09f9985)`(bool bSuccess)` <a id="classURH__GameInstanceServerBootstrapper_1a141d3bcd49aa8079af7852e5a09f9985"></a>

Bootstrapping Flow [Registration][AutoCreate] - completion callback for self allocation.

#### Parameters
* `bSuccess` Whether or not the self allocation was successful

<br>
#### `protected virtual void `[`OnRegistrationFinalizerComplete`](#classURH__GameInstanceServerBootstrapper_1af5393fb9a958e0dd9d2a9d90e82cde47)`(bool bSuccess,const `[`FRH_BootstrappingResult`](GameInstance.md#structFRH__BootstrappingResult)` & Result)` <a id="classURH__GameInstanceServerBootstrapper_1af5393fb9a958e0dd9d2a9d90e82cde47"></a>

Bootstrapping Flow [WaitingForSession] - callback for when registration process has completed and produced a bootstrapping result. Checks the result and then checks for an instance. Either creates and instance, or forwards on to [OnSessionInstanceCreationCompleted()](GameInstance.md#classURH__GameInstanceServerBootstrapper_1a664cad446221aca95b830ddab2eadd3f)

#### Parameters
* `bSuccess` Whether or not the registration was successful 

* `Result` The bootstrapping result that was produced

<br>
#### `protected virtual void `[`OnSessionInstanceCreationCompleted`](#classURH__GameInstanceServerBootstrapper_1a664cad446221aca95b830ddab2eadd3f)`(bool bSuccess,`[`URH_SessionView`](Session.md#classURH__SessionView)` * CreatedRHSession,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` & ErrorInfo)` <a id="classURH__GameInstanceServerBootstrapper_1a664cad446221aca95b830ddab2eadd3f"></a>

Bootstrapping Flow [WaitingForSession] - callback for when registration process has completed and produced a bootstrapping result.

#### Parameters
* `bSuccess` Whether or not the instance was successfully created 

* `CreatedRHSession` The session that was created with an instance 

* `ErrorInfo` Error information about the instance creation

<br>
#### `protected virtual void `[`SyncToSession`](#classURH__GameInstanceServerBootstrapper_1a916ef7edd3eae169e87ac544ea2088c6)`()` <a id="classURH__GameInstanceServerBootstrapper_1a916ef7edd3eae169e87ac544ea2088c6"></a>

Bootstrapping Flow [SyncingToSession] - begin the process of synchronizing the session state into RH_GameInstanceSessionSubsystem.

<br>
#### `protected virtual void `[`OnSyncToSessionComplete`](#classURH__GameInstanceServerBootstrapper_1a70667eca088ae8b5873b4f02281c7a94)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,bool bSuccess,const FString & Error)` <a id="classURH__GameInstanceServerBootstrapper_1a70667eca088ae8b5873b4f02281c7a94"></a>

Bootstrapping Flow [SyncingToSession] - completiong callback for session sync.

#### Parameters
* `bSuccess` Whether or not the session sync was successful

<br>
#### `protected virtual void `[`OnSessionUpdated`](#classURH__GameInstanceServerBootstrapper_1a91273ca69e8e885b6b96f4fb594d3318)`(`[`URH_SessionView`](Session.md#classURH__SessionView)` * Session)` <a id="classURH__GameInstanceServerBootstrapper_1a91273ca69e8e885b6b96f4fb594d3318"></a>

Notification callback that the session we have synced to was updated.

#### Parameters
* `Session` The updated session

<br>
#### `protected virtual void `[`OnSessionNotFound`](#classURH__GameInstanceServerBootstrapper_1a98ef077ce4a34510a6ee988549acd753)`(`[`URH_SessionView`](Session.md#classURH__SessionView)` * Session)` <a id="classURH__GameInstanceServerBootstrapper_1a98ef077ce4a34510a6ee988549acd753"></a>

Notification callback that the session we have synced to was not found.

#### Parameters
* `Session` The session that was not found

<br>
#### `protected virtual void `[`CleanupAfterInstanceRemoval`](#classURH__GameInstanceServerBootstrapper_1a9aab21c5a300e982d5216e04acdbf6f4)`()` <a id="classURH__GameInstanceServerBootstrapper_1a9aab21c5a300e982d5216e04acdbf6f4"></a>

Utility function to clean up state after an instance removal and attempt to recycle.

<br>
#### `protected virtual void `[`OnCleanupSessionSyncComplete`](#classURH__GameInstanceServerBootstrapper_1a38bf567f475e12b06eb5a16883165bb6)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,bool bSuccess,const FString & Error)` <a id="classURH__GameInstanceServerBootstrapper_1a38bf567f475e12b06eb5a16883165bb6"></a>

Completion callback for session and instance cleanup.

<br>
#### `protected virtual bool `[`ShouldRecycleAfterCleanup`](#classURH__GameInstanceServerBootstrapper_1a3841facd4998b2ceb4e4f48354c2f665)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a3841facd4998b2ceb4e4f48354c2f665"></a>

Gets whether we should recycle the state after cleanup.

<br>
## class `URH_GameInstanceClientBootstrapper` <a id="classURH__GameInstanceClientBootstrapper"></a>

```
class URH_GameInstanceClientBootstrapper
  : public URH_GameInstanceSubsystemPlugin
```

Client Boostrapper for the Game Instance.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__GameInstanceClientBootstrapper_1a8f9da19fce337aff49def7e901911d1d)`()` | Initialize the bootstrapper.
`public virtual void `[`Deinitialize`](#classURH__GameInstanceClientBootstrapper_1ad42dfc555261d18e0e76eb25bc78726e)`()` | Deinitialize the bootstrapper.
`public virtual void `[`CreateOfflineSession`](#classURH__GameInstanceClientBootstrapper_1ab258f384bc8485234a07af9c65f1489c)`()` | Utility function to create an offline session

#### Members

#### `public virtual void `[`Initialize`](#classURH__GameInstanceClientBootstrapper_1a8f9da19fce337aff49def7e901911d1d)`()` <a id="classURH__GameInstanceClientBootstrapper_1a8f9da19fce337aff49def7e901911d1d"></a>

Initialize the bootstrapper.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__GameInstanceClientBootstrapper_1ad42dfc555261d18e0e76eb25bc78726e)`()` <a id="classURH__GameInstanceClientBootstrapper_1ad42dfc555261d18e0e76eb25bc78726e"></a>

Deinitialize the bootstrapper.

<br>
#### `public virtual void `[`CreateOfflineSession`](#classURH__GameInstanceClientBootstrapper_1ab258f384bc8485234a07af9c65f1489c)`()` <a id="classURH__GameInstanceClientBootstrapper_1ab258f384bc8485234a07af9c65f1489c"></a>

Utility function to create an offline session

<br>
## class `URH_GameInstanceSessionSubsystem` <a id="classURH__GameInstanceSessionSubsystem"></a>

```
class URH_GameInstanceSessionSubsystem
  : public URH_GameInstanceSubsystemPlugin
```

Subsystem for handling sessions within a game instance.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_OnBeaconCreatedDelegate `[`OnBeaconCreated`](#classURH__GameInstanceSessionSubsystem_1abf524b7f51eb3c9b3671543ef3d9b2e7) | Multicast delegate fired when a beacon is created so that host objects can be registered.
`public FRH_OnBeaconCreatedDynamicDelegate `[`BLUEPRINT_OnBeaconCreated`](#classURH__GameInstanceSessionSubsystem_1a31f3792f396c5fb09ede462eb9f1fdd7) | Multicast delegate fired when a beacon is created so that host objects can be registered.
`public FRH_OnActiveSessionChangedDelegate `[`OnActiveSessionChanged`](#classURH__GameInstanceSessionSubsystem_1ab0bea9f3a8496dbaafadf36e55a89453) | Multicast delegate fired when the active session is changed.
`public FRH_OnActiveSessionChangedDynamicDelegate `[`BLUEPRINT_OnActiveSessionChanged`](#classURH__GameInstanceSessionSubsystem_1a9da14e60771b65717f244a3c578df9c7) | Multicast delegate fired when the active session is changed.
`public virtual void `[`Initialize`](#classURH__GameInstanceSessionSubsystem_1a29fa0211bfa66dfb572e0c39d3f0da4f)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__GameInstanceSessionSubsystem_1ade667dd7b71a4179340964072bc5e7df)`()` | Safely tears down the subsystem.
`public virtual void `[`SyncToSession`](#classURH__GameInstanceSessionSubsystem_1a2d378ff7420a5becf259cd541cb3808a)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * SessionInfo,const FRH_GameInstanceSessionSyncBlock & Delegate)` | Requests the the instance to transition to a new session.
`public inline void `[`BLUEPRINT_SyncToSession`](#classURH__GameInstanceSessionSubsystem_1a6c0d45b13336efa8a57311965c1a14b2)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * SessionInfo,const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)` | Blueprint compatible wrapper for SyncToSession.
`public virtual const `[`FRHAPI_InstanceInfo`](models/RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstance`](#classURH__GameInstanceSessionSubsystem_1a624ab57e94286f288fea96923e407419)`() const` | Gets the Session Data for the active session.
`public virtual bool `[`IsLocallyHostedInstance`](#classURH__GameInstanceSessionSubsystem_1a4023cfa01e9aa8f2e1ef5c057d68a503)`(const `[`FRHAPI_InstanceInfo`](models/RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & Instance) const` | Checks it the session data is for a locally hosted instance.
`public inline virtual bool `[`IsLocallyHostedSession`](#classURH__GameInstanceSessionSubsystem_1a14ce242d4756503baa32fd3fbe11fde2)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session) const` | Checks it the session is locally hosted.
`public virtual bool `[`IsPlayerLocal`](#classURH__GameInstanceSessionSubsystem_1af5cb5a462041a874229dcedd93fb4b88)`(const `[`FRHAPI_SessionPlayer`](models/RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` & Player) const` | Checks if a given player in a session is local to the client.
`public inline FORCEINLINE `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetDesiredSession`](#classURH__GameInstanceSessionSubsystem_1a034556de97f977aff6bbc16531be7977)`() const` | Gets the session that the instance is swapping to.
`public inline FORCEINLINE `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetActiveSession`](#classURH__GameInstanceSessionSubsystem_1a5057004ee3391e223199399c1e734d9c)`() const` | Gets the session that is currently active.
`public inline FORCEINLINE const TOptional< FString > & `[`GetFallbackSessionSecurityToken`](#classURH__GameInstanceSessionSubsystem_1a3fc414bf4060c39ef1cac73d4831fbfb)`() const` | Gets the fallback security token.
`public inline FORCEINLINE bool `[`IsMarkedFubar`](#classURH__GameInstanceSessionSubsystem_1aa4609ee57c7e26d4475e090ea3ba3c26)`() const` | Gets if the instance has been marked failed.
`public inline FORCEINLINE bool `[`IsBackfillTerminated`](#classURH__GameInstanceSessionSubsystem_1ac18871e25f49b2018207688ce41f4f75)`() const` | Gets if the instance has been marked failed.
`public virtual bool `[`IsReadyToJoinInstance`](#classURH__GameInstanceSessionSubsystem_1a591d26ba5df91c4e16193e6e45897e0b)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,bool bLog) const` | Checks if the session has all the players and is good to change maps.
`public virtual bool `[`StartJoinInstanceFlow`](#classURH__GameInstanceSessionSubsystem_1a983058f85ec89f149f75387cc164fce4)`(const FRH_GameInstanceSessionSyncBlock & Delegate)` | Starts the process of transitioning the instance to a new session.
`public inline bool `[`BLUEPRINT_StartJoinInstanceFlow`](#classURH__GameInstanceSessionSubsystem_1a6eff06df13c7edabd0e1e0dd68d96455)`(const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)` | Blueprint compatible wrapper for StartJoinInstanceFlow.
`public virtual void `[`StartLeaveInstanceFlow`](#classURH__GameInstanceSessionSubsystem_1a238216f3800a9fa90e32cee1cca965b7)`(bool bAlreadyDisconnected,bool bCheckDesired,const FRH_GameInstanceSessionSyncBlock & Delegate)` | Starts the process of leaving a previous the instance session.
`public inline void `[`BLUEPRINT_StartLeaveInstanceFlow`](#classURH__GameInstanceSessionSubsystem_1ada3e5a005c97d92667d0c090ca9ec2b9)`(bool bAlreadyDisconnected,bool bCheckDesired,const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)` | Blueprint compatible wrapper for StartLeaveInstanceFlow.
`public virtual void `[`MarkInstanceFubar`](#classURH__GameInstanceSessionSubsystem_1ab6f2bbac803cdf796557afc165958f3d)`(const FString & Reason,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Set an instance to a failed state marking it unrecoverable.
`public inline FORCEINLINE void `[`MarkInstanceFubar`](#classURH__GameInstanceSessionSubsystem_1ae52d628770befb76ab24067c5ff77a28)`(const FString & Reason,const FRH_GenericSuccessBlock & Delegate)` | 
`public inline void `[`BLUEPRINT_MarkInstanceFubar`](#classURH__GameInstanceSessionSubsystem_1a4a5e8c8737b8e3a2f95ec1985a940ad0)`(const FString & Reason,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | Blueprint compatible wrapper for MarkInstanceFubar.
`public virtual bool `[`GenerateJoinURL`](#classURH__GameInstanceSessionSubsystem_1a3f52422472c8ecfd2ba93a6d95fd1ff9)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,FURL & lastURL,FURL & outURL) const` | Attempt to generate a join URL from a session.
`public virtual bool `[`GenerateHostURL`](#classURH__GameInstanceSessionSubsystem_1a1ef34eafcffb6de9efbdfdba3debabd8)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,FURL & lastURL,FURL & outURL) const` | Attempt to generate a host URL from a session.
`public bool `[`GetShouldKeepInstanceHealthAlive`](#classURH__GameInstanceSessionSubsystem_1a8942eb5eb270d93023c77dff8d04ba2a)`() const` | Gets whether backfill should be kept alive.
`public ERHAPI_InstanceHealthStatus `[`GetInstanceHealthStatusToReport`](#classURH__GameInstanceSessionSubsystem_1a791b155c96149c6264c6dd4757a3e751)`() const` | Gets the health status of the instance to report to the API.
`public bool `[`GetShouldKeepBackfillAlive`](#classURH__GameInstanceSessionSubsystem_1a44bf6755cb4867f55ddcccf05a7a860a)`() const` | Gets whether backfill should be kept alive.
`public inline virtual void `[`TerminateBackfill`](#classURH__GameInstanceSessionSubsystem_1abfe7ecd29838bd3485cc6433230a9573)`()` | Shuts down backfill handling for the current session, cannot be reversed.
`protected `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`DesiredSession`](#classURH__GameInstanceSessionSubsystem_1a99ecdc3b0198eb5121abcafc3d709d6e) | Session we want to sync to.
`protected `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`ActiveSession`](#classURH__GameInstanceSessionSubsystem_1a89d9ca9d834e6b2951d188ddeb8397e2) | Session we are synced to.
`protected TOptional< FString > `[`FallbackSecurityToken`](#classURH__GameInstanceSessionSubsystem_1a6ac0e4430bf9c1028742f2e7bf47dfce) | A fallback security token to be used while the security token set is in flight.
`protected bool `[`bHasBeenMarkedFubar`](#classURH__GameInstanceSessionSubsystem_1a4de8dea03d048a10d79f0b0ee103a5f4) | If set, the session instance is failed and unrecoverable.
`protected bool `[`bIsBackfillTerminated`](#classURH__GameInstanceSessionSubsystem_1abec1ac88c4da2672b4375b2d73d95c09) | 
`protected FRH_AutoPollerPtr `[`InstanceHealthPoller`](#classURH__GameInstanceSessionSubsystem_1a18aa79dfb9fa057762108590a4df2250) | Poller for the host's health check.
`protected FRH_AutoPollerPtr `[`BackfillPoller`](#classURH__GameInstanceSessionSubsystem_1ab792de51e69f50fce33471345a7ac559) | Poller for the host's health check.
`protected virtual void `[`SetActiveSession`](#classURH__GameInstanceSessionSubsystem_1a0cb07970ac000b8e724b72159b632f45)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session)` | Sets the current active session.
`protected virtual void `[`OnMapLoadComplete`](#classURH__GameInstanceSessionSubsystem_1a23b8145e9cbad2799ae0abc0521c25d3)`(UWorld * pWorld)` | Called when the map completes loading.
`protected virtual void `[`OnNetworkFailure`](#classURH__GameInstanceSessionSubsystem_1aa96121d0002be3ca533f6505d69f8e0c)`(UWorld * World,UNetDriver * NetDriver,ENetworkFailure::Type FailureType,const FString & ErrorString)` | Called when there was a network failure trying to connect to the instance.
`protected virtual void `[`OnTravelFailure`](#classURH__GameInstanceSessionSubsystem_1ac689a6c95a0feb0901487621a262417d)`(UWorld * pWorld,ETravelFailure::Type FailureType,const FString & ErrorString)` | Called when there is a travel failure to the instance map.
`protected virtual class ARH_OnlineBeaconHost * `[`CreateBeaconHost`](#classURH__GameInstanceSessionSubsystem_1ad480537673a18c2353ce9e422d280bee)`(class UWorld * pWorld,uint32 ListenPort,bool bShutdownWorldNetDriver)` | Creates a beacon host for the instance.
`protected virtual void `[`PollInstanceHealth`](#classURH__GameInstanceSessionSubsystem_1aa83f9f3fcff828e6b53910c98e55ab95)`(const FRH_PollCompleteFunc & Delegate)` | Called when instance health should be updated.
`protected virtual void `[`PollBackfill`](#classURH__GameInstanceSessionSubsystem_1ac281b925199729bdb3919a49db185362)`(const FRH_PollCompleteFunc & Delegate)` | Called when backfill should be updated.
`protected void `[`EmitJoinInstanceStartedEvent`](#classURH__GameInstanceSessionSubsystem_1a8c251f3fb54bb09f56c2964ad40b61db)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session) const` | 
`protected void `[`EmitJoinInstanceCompletedEvent`](#classURH__GameInstanceSessionSubsystem_1abbde067b96e7e0121ccc7c261e9b6f1d)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,bool bSuccess,const FString & ErrorReason) const` | 
`protected void `[`EmitLeaveInstanceEvent`](#classURH__GameInstanceSessionSubsystem_1a386264ec297a998caefaea9cdae39a90)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,const FString & Reason) const` | 

#### Members

#### `public FRH_OnBeaconCreatedDelegate `[`OnBeaconCreated`](#classURH__GameInstanceSessionSubsystem_1abf524b7f51eb3c9b3671543ef3d9b2e7) <a id="classURH__GameInstanceSessionSubsystem_1abf524b7f51eb3c9b3671543ef3d9b2e7"></a>

Multicast delegate fired when a beacon is created so that host objects can be registered.

<br>
#### `public FRH_OnBeaconCreatedDynamicDelegate `[`BLUEPRINT_OnBeaconCreated`](#classURH__GameInstanceSessionSubsystem_1a31f3792f396c5fb09ede462eb9f1fdd7) <a id="classURH__GameInstanceSessionSubsystem_1a31f3792f396c5fb09ede462eb9f1fdd7"></a>

Multicast delegate fired when a beacon is created so that host objects can be registered.

<br>
#### `public FRH_OnActiveSessionChangedDelegate `[`OnActiveSessionChanged`](#classURH__GameInstanceSessionSubsystem_1ab0bea9f3a8496dbaafadf36e55a89453) <a id="classURH__GameInstanceSessionSubsystem_1ab0bea9f3a8496dbaafadf36e55a89453"></a>

Multicast delegate fired when the active session is changed.

<br>
#### `public FRH_OnActiveSessionChangedDynamicDelegate `[`BLUEPRINT_OnActiveSessionChanged`](#classURH__GameInstanceSessionSubsystem_1a9da14e60771b65717f244a3c578df9c7) <a id="classURH__GameInstanceSessionSubsystem_1a9da14e60771b65717f244a3c578df9c7"></a>

Multicast delegate fired when the active session is changed.

<br>
#### `public virtual void `[`Initialize`](#classURH__GameInstanceSessionSubsystem_1a29fa0211bfa66dfb572e0c39d3f0da4f)`()` <a id="classURH__GameInstanceSessionSubsystem_1a29fa0211bfa66dfb572e0c39d3f0da4f"></a>

Initialize the subsystem.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__GameInstanceSessionSubsystem_1ade667dd7b71a4179340964072bc5e7df)`()` <a id="classURH__GameInstanceSessionSubsystem_1ade667dd7b71a4179340964072bc5e7df"></a>

Safely tears down the subsystem.

<br>
#### `public virtual void `[`SyncToSession`](#classURH__GameInstanceSessionSubsystem_1a2d378ff7420a5becf259cd541cb3808a)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * SessionInfo,const FRH_GameInstanceSessionSyncBlock & Delegate)` <a id="classURH__GameInstanceSessionSubsystem_1a2d378ff7420a5becf259cd541cb3808a"></a>

Requests the the instance to transition to a new session.

#### Parameters
* `SessionInfo` The session being transitioned to. 

* `Delegate` Callback delegate for when the session is now active, or failed to transition.

<br>
#### `public inline void `[`BLUEPRINT_SyncToSession`](#classURH__GameInstanceSessionSubsystem_1a6c0d45b13336efa8a57311965c1a14b2)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * SessionInfo,const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)` <a id="classURH__GameInstanceSessionSubsystem_1a6c0d45b13336efa8a57311965c1a14b2"></a>

Blueprint compatible wrapper for SyncToSession.

<br>
#### `public virtual const `[`FRHAPI_InstanceInfo`](models/RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstance`](#classURH__GameInstanceSessionSubsystem_1a624ab57e94286f288fea96923e407419)`() const` <a id="classURH__GameInstanceSessionSubsystem_1a624ab57e94286f288fea96923e407419"></a>

Gets the Session Data for the active session.

<br>
#### `public virtual bool `[`IsLocallyHostedInstance`](#classURH__GameInstanceSessionSubsystem_1a4023cfa01e9aa8f2e1ef5c057d68a503)`(const `[`FRHAPI_InstanceInfo`](models/RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & Instance) const` <a id="classURH__GameInstanceSessionSubsystem_1a4023cfa01e9aa8f2e1ef5c057d68a503"></a>

Checks it the session data is for a locally hosted instance.

#### Parameters
* `Instance` The instance being checked. 

#### Returns
If true, the instance is hosted locally.

<br>
#### `public inline virtual bool `[`IsLocallyHostedSession`](#classURH__GameInstanceSessionSubsystem_1a14ce242d4756503baa32fd3fbe11fde2)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session) const` <a id="classURH__GameInstanceSessionSubsystem_1a14ce242d4756503baa32fd3fbe11fde2"></a>

Checks it the session is locally hosted.

#### Parameters
* `Session` The session being checked. 

#### Returns
If true, the session is hosted locally.

<br>
#### `public virtual bool `[`IsPlayerLocal`](#classURH__GameInstanceSessionSubsystem_1af5cb5a462041a874229dcedd93fb4b88)`(const `[`FRHAPI_SessionPlayer`](models/RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` & Player) const` <a id="classURH__GameInstanceSessionSubsystem_1af5cb5a462041a874229dcedd93fb4b88"></a>

Checks if a given player in a session is local to the client.

#### Parameters
* `Player` The player being checked. 

#### Returns
If true, the player is local to the client.

<br>
#### `public inline FORCEINLINE `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetDesiredSession`](#classURH__GameInstanceSessionSubsystem_1a034556de97f977aff6bbc16531be7977)`() const` <a id="classURH__GameInstanceSessionSubsystem_1a034556de97f977aff6bbc16531be7977"></a>

Gets the session that the instance is swapping to.

<br>
#### `public inline FORCEINLINE `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`GetActiveSession`](#classURH__GameInstanceSessionSubsystem_1a5057004ee3391e223199399c1e734d9c)`() const` <a id="classURH__GameInstanceSessionSubsystem_1a5057004ee3391e223199399c1e734d9c"></a>

Gets the session that is currently active.

<br>
#### `public inline FORCEINLINE const TOptional< FString > & `[`GetFallbackSessionSecurityToken`](#classURH__GameInstanceSessionSubsystem_1a3fc414bf4060c39ef1cac73d4831fbfb)`() const` <a id="classURH__GameInstanceSessionSubsystem_1a3fc414bf4060c39ef1cac73d4831fbfb"></a>

Gets the fallback security token.

<br>
#### `public inline FORCEINLINE bool `[`IsMarkedFubar`](#classURH__GameInstanceSessionSubsystem_1aa4609ee57c7e26d4475e090ea3ba3c26)`() const` <a id="classURH__GameInstanceSessionSubsystem_1aa4609ee57c7e26d4475e090ea3ba3c26"></a>

Gets if the instance has been marked failed.

<br>
#### `public inline FORCEINLINE bool `[`IsBackfillTerminated`](#classURH__GameInstanceSessionSubsystem_1ac18871e25f49b2018207688ce41f4f75)`() const` <a id="classURH__GameInstanceSessionSubsystem_1ac18871e25f49b2018207688ce41f4f75"></a>

Gets if the instance has been marked failed.

<br>
#### `public virtual bool `[`IsReadyToJoinInstance`](#classURH__GameInstanceSessionSubsystem_1a591d26ba5df91c4e16193e6e45897e0b)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,bool bLog) const` <a id="classURH__GameInstanceSessionSubsystem_1a591d26ba5df91c4e16193e6e45897e0b"></a>

Checks if the session has all the players and is good to change maps.

#### Parameters
* `Session` The session being checked. 

#### Returns
If true, the session is ready for a map transition.

<br>
#### `public virtual bool `[`StartJoinInstanceFlow`](#classURH__GameInstanceSessionSubsystem_1a983058f85ec89f149f75387cc164fce4)`(const FRH_GameInstanceSessionSyncBlock & Delegate)` <a id="classURH__GameInstanceSessionSubsystem_1a983058f85ec89f149f75387cc164fce4"></a>

Starts the process of transitioning the instance to a new session.

#### Parameters
* `Delegate` Callback delegate for when the session is now active, or failed to transition.

<br>
#### `public inline bool `[`BLUEPRINT_StartJoinInstanceFlow`](#classURH__GameInstanceSessionSubsystem_1a6eff06df13c7edabd0e1e0dd68d96455)`(const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)` <a id="classURH__GameInstanceSessionSubsystem_1a6eff06df13c7edabd0e1e0dd68d96455"></a>

Blueprint compatible wrapper for StartJoinInstanceFlow.

<br>
#### `public virtual void `[`StartLeaveInstanceFlow`](#classURH__GameInstanceSessionSubsystem_1a238216f3800a9fa90e32cee1cca965b7)`(bool bAlreadyDisconnected,bool bCheckDesired,const FRH_GameInstanceSessionSyncBlock & Delegate)` <a id="classURH__GameInstanceSessionSubsystem_1a238216f3800a9fa90e32cee1cca965b7"></a>

Starts the process of leaving a previous the instance session.

#### Parameters
* `bAlreadyDisconnected` If true, the instance is already disconnected from the previous session. 

* `bCheckDesired` If true, and the instance has a desired session, start joining that session. 

* `Delegate` Callback delegate for when the instance is left.

<br>
#### `public inline void `[`BLUEPRINT_StartLeaveInstanceFlow`](#classURH__GameInstanceSessionSubsystem_1ada3e5a005c97d92667d0c090ca9ec2b9)`(bool bAlreadyDisconnected,bool bCheckDesired,const FRH_GameInstanceSessionSyncDynamicDelegate & Delegate)` <a id="classURH__GameInstanceSessionSubsystem_1ada3e5a005c97d92667d0c090ca9ec2b9"></a>

Blueprint compatible wrapper for StartLeaveInstanceFlow.

<br>
#### `public virtual void `[`MarkInstanceFubar`](#classURH__GameInstanceSessionSubsystem_1ab6f2bbac803cdf796557afc165958f3d)`(const FString & Reason,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__GameInstanceSessionSubsystem_1ab6f2bbac803cdf796557afc165958f3d"></a>

Set an instance to a failed state marking it unrecoverable.

#### Parameters
* `Reason` The reason the instance was marked failed. 

* `Delegate` Callback delegate for if the instance was marked failed.

<br>
#### `public inline FORCEINLINE void `[`MarkInstanceFubar`](#classURH__GameInstanceSessionSubsystem_1ae52d628770befb76ab24067c5ff77a28)`(const FString & Reason,const FRH_GenericSuccessBlock & Delegate)` <a id="classURH__GameInstanceSessionSubsystem_1ae52d628770befb76ab24067c5ff77a28"></a>

<br>
#### `public inline void `[`BLUEPRINT_MarkInstanceFubar`](#classURH__GameInstanceSessionSubsystem_1a4a5e8c8737b8e3a2f95ec1985a940ad0)`(const FString & Reason,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__GameInstanceSessionSubsystem_1a4a5e8c8737b8e3a2f95ec1985a940ad0"></a>

Blueprint compatible wrapper for MarkInstanceFubar.

<br>
#### `public virtual bool `[`GenerateJoinURL`](#classURH__GameInstanceSessionSubsystem_1a3f52422472c8ecfd2ba93a6d95fd1ff9)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,FURL & lastURL,FURL & outURL) const` <a id="classURH__GameInstanceSessionSubsystem_1a3f52422472c8ecfd2ba93a6d95fd1ff9"></a>

Attempt to generate a join URL from a session.

#### Parameters
* `Session` The session to be joined. 

* `lastURL` The last URL used to connect to a session. 

* `outURL` The URL to join the session. 

#### Returns
If true, a join URL was generated.

<br>
#### `public virtual bool `[`GenerateHostURL`](#classURH__GameInstanceSessionSubsystem_1a1ef34eafcffb6de9efbdfdba3debabd8)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,FURL & lastURL,FURL & outURL) const` <a id="classURH__GameInstanceSessionSubsystem_1a1ef34eafcffb6de9efbdfdba3debabd8"></a>

Attempt to generate a host URL from a session.

#### Parameters
* `Session` The session a host url is being requested for. 

* `lastURL` The last URL used to connect to a session. 

* `outURL` The Host URL fot the session. 

#### Returns
If true, a host URL was generated.

<br>
#### `public bool `[`GetShouldKeepInstanceHealthAlive`](#classURH__GameInstanceSessionSubsystem_1a8942eb5eb270d93023c77dff8d04ba2a)`() const` <a id="classURH__GameInstanceSessionSubsystem_1a8942eb5eb270d93023c77dff8d04ba2a"></a>

Gets whether backfill should be kept alive.

<br>
#### `public ERHAPI_InstanceHealthStatus `[`GetInstanceHealthStatusToReport`](#classURH__GameInstanceSessionSubsystem_1a791b155c96149c6264c6dd4757a3e751)`() const` <a id="classURH__GameInstanceSessionSubsystem_1a791b155c96149c6264c6dd4757a3e751"></a>

Gets the health status of the instance to report to the API.

<br>
#### `public bool `[`GetShouldKeepBackfillAlive`](#classURH__GameInstanceSessionSubsystem_1a44bf6755cb4867f55ddcccf05a7a860a)`() const` <a id="classURH__GameInstanceSessionSubsystem_1a44bf6755cb4867f55ddcccf05a7a860a"></a>

Gets whether backfill should be kept alive.

<br>
#### `public inline virtual void `[`TerminateBackfill`](#classURH__GameInstanceSessionSubsystem_1abfe7ecd29838bd3485cc6433230a9573)`()` <a id="classURH__GameInstanceSessionSubsystem_1abfe7ecd29838bd3485cc6433230a9573"></a>

Shuts down backfill handling for the current session, cannot be reversed.

<br>
#### `protected `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`DesiredSession`](#classURH__GameInstanceSessionSubsystem_1a99ecdc3b0198eb5121abcafc3d709d6e) <a id="classURH__GameInstanceSessionSubsystem_1a99ecdc3b0198eb5121abcafc3d709d6e"></a>

Session we want to sync to.

<br>
#### `protected `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * `[`ActiveSession`](#classURH__GameInstanceSessionSubsystem_1a89d9ca9d834e6b2951d188ddeb8397e2) <a id="classURH__GameInstanceSessionSubsystem_1a89d9ca9d834e6b2951d188ddeb8397e2"></a>

Session we are synced to.

<br>
#### `protected TOptional< FString > `[`FallbackSecurityToken`](#classURH__GameInstanceSessionSubsystem_1a6ac0e4430bf9c1028742f2e7bf47dfce) <a id="classURH__GameInstanceSessionSubsystem_1a6ac0e4430bf9c1028742f2e7bf47dfce"></a>

A fallback security token to be used while the security token set is in flight.

<br>
#### `protected bool `[`bHasBeenMarkedFubar`](#classURH__GameInstanceSessionSubsystem_1a4de8dea03d048a10d79f0b0ee103a5f4) <a id="classURH__GameInstanceSessionSubsystem_1a4de8dea03d048a10d79f0b0ee103a5f4"></a>

If set, the session instance is failed and unrecoverable.

<br>
#### `protected bool `[`bIsBackfillTerminated`](#classURH__GameInstanceSessionSubsystem_1abec1ac88c4da2672b4375b2d73d95c09) <a id="classURH__GameInstanceSessionSubsystem_1abec1ac88c4da2672b4375b2d73d95c09"></a>

<br>
#### `protected FRH_AutoPollerPtr `[`InstanceHealthPoller`](#classURH__GameInstanceSessionSubsystem_1a18aa79dfb9fa057762108590a4df2250) <a id="classURH__GameInstanceSessionSubsystem_1a18aa79dfb9fa057762108590a4df2250"></a>

Poller for the host's health check.

<br>
#### `protected FRH_AutoPollerPtr `[`BackfillPoller`](#classURH__GameInstanceSessionSubsystem_1ab792de51e69f50fce33471345a7ac559) <a id="classURH__GameInstanceSessionSubsystem_1ab792de51e69f50fce33471345a7ac559"></a>

Poller for the host's health check.

<br>
#### `protected virtual void `[`SetActiveSession`](#classURH__GameInstanceSessionSubsystem_1a0cb07970ac000b8e724b72159b632f45)`(`[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session)` <a id="classURH__GameInstanceSessionSubsystem_1a0cb07970ac000b8e724b72159b632f45"></a>

Sets the current active session.

#### Parameters
* `Session` to set as active session

<br>
#### `protected virtual void `[`OnMapLoadComplete`](#classURH__GameInstanceSessionSubsystem_1a23b8145e9cbad2799ae0abc0521c25d3)`(UWorld * pWorld)` <a id="classURH__GameInstanceSessionSubsystem_1a23b8145e9cbad2799ae0abc0521c25d3"></a>

Called when the map completes loading.

#### Parameters
* `pWorld` The world that was being traveled to.

<br>
#### `protected virtual void `[`OnNetworkFailure`](#classURH__GameInstanceSessionSubsystem_1aa96121d0002be3ca533f6505d69f8e0c)`(UWorld * World,UNetDriver * NetDriver,ENetworkFailure::Type FailureType,const FString & ErrorString)` <a id="classURH__GameInstanceSessionSubsystem_1aa96121d0002be3ca533f6505d69f8e0c"></a>

Called when there was a network failure trying to connect to the instance.

#### Parameters
* `World` The world that was being connected to. 

* `NetDriver` The net driver that was being used to connect. 

* `FailureType` The type of failure that occurred. 

* `ErrorString` The error string associated with the failure.

<br>
#### `protected virtual void `[`OnTravelFailure`](#classURH__GameInstanceSessionSubsystem_1ac689a6c95a0feb0901487621a262417d)`(UWorld * pWorld,ETravelFailure::Type FailureType,const FString & ErrorString)` <a id="classURH__GameInstanceSessionSubsystem_1ac689a6c95a0feb0901487621a262417d"></a>

Called when there is a travel failure to the instance map.

#### Parameters
* `pWorld` The world that was being traveled to. 

* `FailureType` The type of failure that occurred. 

* `ErrorString` The error string associated with the failure.

<br>
#### `protected virtual class ARH_OnlineBeaconHost * `[`CreateBeaconHost`](#classURH__GameInstanceSessionSubsystem_1ad480537673a18c2353ce9e422d280bee)`(class UWorld * pWorld,uint32 ListenPort,bool bShutdownWorldNetDriver)` <a id="classURH__GameInstanceSessionSubsystem_1ad480537673a18c2353ce9e422d280bee"></a>

Creates a beacon host for the instance.

#### Parameters
* `pWorld` The world the beacon is for. 

* `ListenPort` The port the beacon listens to. 

* `bShutdownWorldNetDriver` If set, then the beacon shuts down the worlds Net Driver when created.

<br>
#### `protected virtual void `[`PollInstanceHealth`](#classURH__GameInstanceSessionSubsystem_1aa83f9f3fcff828e6b53910c98e55ab95)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__GameInstanceSessionSubsystem_1aa83f9f3fcff828e6b53910c98e55ab95"></a>

Called when instance health should be updated.

#### Parameters
* `Delegate` Callback delegate for when the health is updated.

<br>
#### `protected virtual void `[`PollBackfill`](#classURH__GameInstanceSessionSubsystem_1ac281b925199729bdb3919a49db185362)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__GameInstanceSessionSubsystem_1ac281b925199729bdb3919a49db185362"></a>

Called when backfill should be updated.

#### Parameters
* `Delegate` Callback delegate for when the health is updated.

<br>
#### `protected void `[`EmitJoinInstanceStartedEvent`](#classURH__GameInstanceSessionSubsystem_1a8c251f3fb54bb09f56c2964ad40b61db)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session) const` <a id="classURH__GameInstanceSessionSubsystem_1a8c251f3fb54bb09f56c2964ad40b61db"></a>

<br>
#### `protected void `[`EmitJoinInstanceCompletedEvent`](#classURH__GameInstanceSessionSubsystem_1abbde067b96e7e0121ccc7c261e9b6f1d)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,bool bSuccess,const FString & ErrorReason) const` <a id="classURH__GameInstanceSessionSubsystem_1abbde067b96e7e0121ccc7c261e9b6f1d"></a>

<br>
#### `protected void `[`EmitLeaveInstanceEvent`](#classURH__GameInstanceSessionSubsystem_1a386264ec297a998caefaea9cdae39a90)`(const `[`URH_JoinedSession`](undefined.md#classURH__JoinedSession)` * Session,const FString & Reason) const` <a id="classURH__GameInstanceSessionSubsystem_1a386264ec297a998caefaea9cdae39a90"></a>

<br>
## class `URH_GameInstanceSubsystem` <a id="classURH__GameInstanceSubsystem"></a>

```
class URH_GameInstanceSubsystem
  : public UGameInstanceSubsystem
```

Subsystem for the Game Instance.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline bool `[`ShouldCreateSubsystem`](#classURH__GameInstanceSubsystem_1a2ba6a69eebee296a02c76c671db613a4)`(UObject * Outer) const` | Gets if the subsystem is enabled and should be created.
`public void `[`Initialize`](#classURH__GameInstanceSubsystem_1a5abfaebdaf723b4b00a562d797351d6e)`(FSubsystemCollectionBase & Collection)` | Initialize the subsystem.
`public void `[`Deinitialize`](#classURH__GameInstanceSubsystem_1aae4a94b12bffd66d4d189992104d5694)`()` | Safely tears down the subsystem.
`public inline void `[`SetAuthContext`](#classURH__GameInstanceSubsystem_1a4a87e0b22af83c1e92b55b9982ef0339)`(FAuthContextPtr InAuthContext)` | Sets the Auth Context for the subsystem.
`public inline FAuthContextPtr `[`GetAuthContext`](#classURH__GameInstanceSubsystem_1a3cb8fbd18f2eff771a140fe266a5f4b2)`() const` | Gets the subsystems designated auth context.
`public inline `[`URH_GameInstanceSessionSubsystem`](GameInstance.md#classURH__GameInstanceSessionSubsystem)` * `[`GetSessionSubsystem`](#classURH__GameInstanceSubsystem_1acab54311f541b73a796815cb8333e227)`() const` | Gets the session subsystem on the instance.
`public inline `[`URH_SessionBrowserCache`](Session.md#classURH__SessionBrowserCache)` * `[`GetSessionSearchCache`](#classURH__GameInstanceSubsystem_1af167d4cc8a173881dc30b7fa64ad7e2b)`() const` | Gets the session search cache on the instance.
`public inline `[`URH_MatchmakingBrowserCache`](MatchmakingBrowser.md#classURH__MatchmakingBrowserCache)` * `[`GetMatchmakingCache`](#classURH__GameInstanceSubsystem_1acfb5f63d8414c51c0c4b39fb5b6bf4fe)`() const` | Gets the matchmaking cache on the instance.
`public inline `[`URH_GameInstanceServerBootstrapper`](GameInstance.md#classURH__GameInstanceServerBootstrapper)` * `[`GetServerBootstrapper`](#classURH__GameInstanceSubsystem_1a27e99e7893908c6d9cc6127e962357ad)`() const` | Gets the server bootstrapper on the instance.
`public inline `[`URH_GameInstanceClientBootstrapper`](GameInstance.md#classURH__GameInstanceClientBootstrapper)` * `[`GetClientBootstrapper`](#classURH__GameInstanceSubsystem_1a9351e98f3758b7bd2d9278342d2c8bfe)`() const` | Gets the client boostrapper on the instance.
`public inline `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__GameInstanceSubsystem_1ad981a6b49e1b6717d8392edac8a7c49d)`() const` | Gets the player info subsystem on the instance.
`public inline `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` * `[`GetCatalogSubsystem`](#classURH__GameInstanceSubsystem_1a5939c3dddeefe5d5928307522526845a)`() const` | Gets the catalog subsystem on the instance.
`public inline `[`URH_ConfigSubsystem`](Config.md#classURH__ConfigSubsystem)` * `[`GetConfigSubsystem`](#classURH__GameInstanceSubsystem_1a7d68319809db5ea58fc8cd87eeeca7a7)`() const` | Gets the config subsystem on the instance.
`public inline `[`URH_SettingsSubsystem`](Settings.md#classURH__SettingsSubsystem)` * `[`GetSettingsSubsystem`](#classURH__GameInstanceSubsystem_1afafed40a588921b712548ce5071bf4cb)`() const` | Gets the settings subsystem on the instance.
`public void `[`GameModePreloginEvent`](#classURH__GameInstanceSubsystem_1a50b207a41e2a81673e201387c5ede103)`(class AGameModeBase * GameMode,const FUniqueNetIdRepl & NewPlayer,FString & ErrorMessage)` | Handles verification and validation of a player attempting to connect to the instance.
`public bool `[`ValidateIncomingConnection`](#classURH__GameInstanceSubsystem_1a5d28941dd50473ed14ccee407715ef0f)`(class UNetConnection * Connection,FString & ErrorMessage) const` | 
`public void `[`CustomEndpoint`](#classURH__GameInstanceSubsystem_1a1a8dcae5a5642315c8ba20f07aebd162)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const RallyHereAPI::FDelegate_CustomEndpointSend & Delegate)` | Custom Endpoint wrapper (for custom endpoints that require authentication)
`public void `[`CustomEndpoint`](#classURH__GameInstanceSubsystem_1aeb1056507af99208ee7397e1b0d23112)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const FRH_CustomEndpointDelegateBlock & Delegate)` | Custom Endpoint wrapper (for custom endpoints that require authentication)
`public inline void `[`BLUEPRINT_CustomEndpoint`](#classURH__GameInstanceSubsystem_1a42e7af944e181795ad0a71169e588e92)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const FRH_CustomEndpointDynamicDelegate & Delegate)` | Custom Endpoint wrapper (for custom endpoints that require authentication)
`protected FAuthContextPtr `[`AuthContext`](#classURH__GameInstanceSubsystem_1a8836a0620d1de84cc1383f20b38ab775) | Auth context used by the Game Instance Subsystem.
`protected TArray< `[`URH_GameInstanceSubsystemPlugin`](SubsystemBase.md#classURH__GameInstanceSubsystemPlugin)` * > `[`SubsystemPlugins`](#classURH__GameInstanceSubsystem_1a6204638edcade74afc54e77e367b6078) | Array of plugins for the Game Instance Subsystem.
`protected `[`URH_GameInstanceSessionSubsystem`](GameInstance.md#classURH__GameInstanceSessionSubsystem)` * `[`SessionSubsystem`](#classURH__GameInstanceSubsystem_1a136c6176cf760f3fc26194ea1a5a8ba2) | The Session Subsystem.
`protected `[`URH_SessionBrowserCache`](Session.md#classURH__SessionBrowserCache)` * `[`SessionSearchCache`](#classURH__GameInstanceSubsystem_1a2fa61113c03eff1731c6b0133826d745) | The Cache for seasion seaches.
`protected `[`URH_MatchmakingBrowserCache`](MatchmakingBrowser.md#classURH__MatchmakingBrowserCache)` * `[`MatchmakingCache`](#classURH__GameInstanceSubsystem_1a7fa7ded8ee351d55a3b5d761055465d5) | The Cache to matchmaking.
`protected `[`URH_GameInstanceServerBootstrapper`](GameInstance.md#classURH__GameInstanceServerBootstrapper)` * `[`ServerBootstrapper`](#classURH__GameInstanceSubsystem_1ad4abb48c852993789a049076c5ff18bf) | The Game Instance Server Boostrapper.
`protected `[`URH_GameInstanceClientBootstrapper`](GameInstance.md#classURH__GameInstanceClientBootstrapper)` * `[`ClientBootstrapper`](#classURH__GameInstanceSubsystem_1aed322e2d7c1ae98e3f77d0a40e526e3a) | The Game Instance Client Boostrapper.
`protected `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`PlayerInfoSubsystem`](#classURH__GameInstanceSubsystem_1af077fda546ea4dbc9d4142e233d402c0) | The Player Info Subsystem.
`protected `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` * `[`CatalogSubsystem`](#classURH__GameInstanceSubsystem_1a101dc200558351e0e846d90341e89f87) | The Catalog Subsystem.
`protected `[`URH_ConfigSubsystem`](Config.md#classURH__ConfigSubsystem)` * `[`ConfigSubsystem`](#classURH__GameInstanceSubsystem_1abe30d81653383a1aaf1a454ee67b27ce) | The Config Subsystem.
`protected `[`URH_SettingsSubsystem`](Settings.md#classURH__SettingsSubsystem)` * `[`SettingsSubsystem`](#classURH__GameInstanceSubsystem_1a0faf95129232d8f19571e9ebdc7b13e1) | The Settings Subsystem.
`protected bool `[`bEnabled`](#classURH__GameInstanceSubsystem_1aec940d2a189827f2ffea8b8248f9be12) | If the Game Instance Subsystem is enabled.
`protected bool `[`bEnableSessionBrowser`](#classURH__GameInstanceSubsystem_1a05992b3ee9dc7cc018f9f424069c4748) | If the Session Browser is enabled.
`protected bool `[`bEnableMatchmakingBrowser`](#classURH__GameInstanceSubsystem_1a65744cd5c8afb2596503251f63a7cf0f) | If the Matchmaking Browser is enabled.
`protected bool `[`bEnableGameSessions`](#classURH__GameInstanceSubsystem_1a2dab4109584cbf2a44f01cb1e488f505) | If the Game Sessions are enabled.
`protected bool `[`bEnableServerBootstrapper`](#classURH__GameInstanceSubsystem_1a2722842f55f1c5b68bacb822d7c64cb1) | If the Game Instance Server Bootstrapper is enabled.
`protected bool `[`bEnableClientBootstrapper`](#classURH__GameInstanceSubsystem_1aca95d824ef892413cfaf6a88bf4aef33) | If the Game Instance Client Bootstrapper is enabled.
`protected bool `[`bUseSecurityTokenForJoining`](#classURH__GameInstanceSubsystem_1ae1d6a9deec9d3d89eb3dfc6ed0930f5e) | If set, the connection attempt must have a valid security token to be allowed to connect.
`protected bool `[`bRequireImportedPlayerIdsForJoining`](#classURH__GameInstanceSubsystem_1acbbf4a90c60528d318fda665064921c6) | If set, the Player Id must have been imported to the instance before being allowed to connect.
`protected bool `[`bRequireValidPlayerIdsForJoining`](#classURH__GameInstanceSubsystem_1ab49cc70d224fae0acb852ff59106a2c6) | If set, the Player Id must be valid before being allowed to connect.
`protected template<>`  <br/>`inline UClassToUse * `[`AddSubsystemPlugin`](#classURH__GameInstanceSubsystem_1a3b7e4d48f4487b7a53562eba2cd14e21)`(const FSoftClassPath & SubsystemClassPath)` | Adds a plugin to the Game Instance Subsystem.
`protected virtual void `[`AppSuspendCallbackInGameThread`](#classURH__GameInstanceSubsystem_1a7ed49aacbd0e42e5bc4010dbd0ff2888)`()` | Handle application going into suspension (these involve the application losing focus).
`protected virtual void `[`AppResumeCallbackInGameThread`](#classURH__GameInstanceSubsystem_1afa9adfbf1b12fd3d37e91ea99d4f81fe)`()` | Handle application resuming from suspension (these involve the application losing focus).
`protected virtual void `[`AppDeactivatedCallbackInGameThread`](#classURH__GameInstanceSubsystem_1ad3d5d9832895928a55823981b222a746)`()` | Handle application deactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).
`protected virtual void `[`AppReactivatedCallbackInGameThread`](#classURH__GameInstanceSubsystem_1ae3d080074efa0bfdb7633ad71da2c3d7)`()` | Handle application reactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).

#### Members

#### `public inline bool `[`ShouldCreateSubsystem`](#classURH__GameInstanceSubsystem_1a2ba6a69eebee296a02c76c671db613a4)`(UObject * Outer) const` <a id="classURH__GameInstanceSubsystem_1a2ba6a69eebee296a02c76c671db613a4"></a>

Gets if the subsystem is enabled and should be created.

<br>
#### `public void `[`Initialize`](#classURH__GameInstanceSubsystem_1a5abfaebdaf723b4b00a562d797351d6e)`(FSubsystemCollectionBase & Collection)` <a id="classURH__GameInstanceSubsystem_1a5abfaebdaf723b4b00a562d797351d6e"></a>

Initialize the subsystem.

<br>
#### `public void `[`Deinitialize`](#classURH__GameInstanceSubsystem_1aae4a94b12bffd66d4d189992104d5694)`()` <a id="classURH__GameInstanceSubsystem_1aae4a94b12bffd66d4d189992104d5694"></a>

Safely tears down the subsystem.

<br>
#### `public inline void `[`SetAuthContext`](#classURH__GameInstanceSubsystem_1a4a87e0b22af83c1e92b55b9982ef0339)`(FAuthContextPtr InAuthContext)` <a id="classURH__GameInstanceSubsystem_1a4a87e0b22af83c1e92b55b9982ef0339"></a>

Sets the Auth Context for the subsystem.

#### Parameters
* `InAuthContext` The Auth Context to set with.

<br>
#### `public inline FAuthContextPtr `[`GetAuthContext`](#classURH__GameInstanceSubsystem_1a3cb8fbd18f2eff771a140fe266a5f4b2)`() const` <a id="classURH__GameInstanceSubsystem_1a3cb8fbd18f2eff771a140fe266a5f4b2"></a>

Gets the subsystems designated auth context.

<br>
#### `public inline `[`URH_GameInstanceSessionSubsystem`](GameInstance.md#classURH__GameInstanceSessionSubsystem)` * `[`GetSessionSubsystem`](#classURH__GameInstanceSubsystem_1acab54311f541b73a796815cb8333e227)`() const` <a id="classURH__GameInstanceSubsystem_1acab54311f541b73a796815cb8333e227"></a>

Gets the session subsystem on the instance.

<br>
#### `public inline `[`URH_SessionBrowserCache`](Session.md#classURH__SessionBrowserCache)` * `[`GetSessionSearchCache`](#classURH__GameInstanceSubsystem_1af167d4cc8a173881dc30b7fa64ad7e2b)`() const` <a id="classURH__GameInstanceSubsystem_1af167d4cc8a173881dc30b7fa64ad7e2b"></a>

Gets the session search cache on the instance.

<br>
#### `public inline `[`URH_MatchmakingBrowserCache`](MatchmakingBrowser.md#classURH__MatchmakingBrowserCache)` * `[`GetMatchmakingCache`](#classURH__GameInstanceSubsystem_1acfb5f63d8414c51c0c4b39fb5b6bf4fe)`() const` <a id="classURH__GameInstanceSubsystem_1acfb5f63d8414c51c0c4b39fb5b6bf4fe"></a>

Gets the matchmaking cache on the instance.

<br>
#### `public inline `[`URH_GameInstanceServerBootstrapper`](GameInstance.md#classURH__GameInstanceServerBootstrapper)` * `[`GetServerBootstrapper`](#classURH__GameInstanceSubsystem_1a27e99e7893908c6d9cc6127e962357ad)`() const` <a id="classURH__GameInstanceSubsystem_1a27e99e7893908c6d9cc6127e962357ad"></a>

Gets the server bootstrapper on the instance.

<br>
#### `public inline `[`URH_GameInstanceClientBootstrapper`](GameInstance.md#classURH__GameInstanceClientBootstrapper)` * `[`GetClientBootstrapper`](#classURH__GameInstanceSubsystem_1a9351e98f3758b7bd2d9278342d2c8bfe)`() const` <a id="classURH__GameInstanceSubsystem_1a9351e98f3758b7bd2d9278342d2c8bfe"></a>

Gets the client boostrapper on the instance.

<br>
#### `public inline `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__GameInstanceSubsystem_1ad981a6b49e1b6717d8392edac8a7c49d)`() const` <a id="classURH__GameInstanceSubsystem_1ad981a6b49e1b6717d8392edac8a7c49d"></a>

Gets the player info subsystem on the instance.

<br>
#### `public inline `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` * `[`GetCatalogSubsystem`](#classURH__GameInstanceSubsystem_1a5939c3dddeefe5d5928307522526845a)`() const` <a id="classURH__GameInstanceSubsystem_1a5939c3dddeefe5d5928307522526845a"></a>

Gets the catalog subsystem on the instance.

<br>
#### `public inline `[`URH_ConfigSubsystem`](Config.md#classURH__ConfigSubsystem)` * `[`GetConfigSubsystem`](#classURH__GameInstanceSubsystem_1a7d68319809db5ea58fc8cd87eeeca7a7)`() const` <a id="classURH__GameInstanceSubsystem_1a7d68319809db5ea58fc8cd87eeeca7a7"></a>

Gets the config subsystem on the instance.

<br>
#### `public inline `[`URH_SettingsSubsystem`](Settings.md#classURH__SettingsSubsystem)` * `[`GetSettingsSubsystem`](#classURH__GameInstanceSubsystem_1afafed40a588921b712548ce5071bf4cb)`() const` <a id="classURH__GameInstanceSubsystem_1afafed40a588921b712548ce5071bf4cb"></a>

Gets the settings subsystem on the instance.

<br>
#### `public void `[`GameModePreloginEvent`](#classURH__GameInstanceSubsystem_1a50b207a41e2a81673e201387c5ede103)`(class AGameModeBase * GameMode,const FUniqueNetIdRepl & NewPlayer,FString & ErrorMessage)` <a id="classURH__GameInstanceSubsystem_1a50b207a41e2a81673e201387c5ede103"></a>

Handles verification and validation of a player attempting to connect to the instance.

#### Parameters
* `GameMode` The game mode the instance is running. 

* `NewPlayer` The player that is attempting to connect. 

* `ErrorMessage` If an Error happens for this player being valid, this will be set to the error message.

<br>
#### `public bool `[`ValidateIncomingConnection`](#classURH__GameInstanceSubsystem_1a5d28941dd50473ed14ccee407715ef0f)`(class UNetConnection * Connection,FString & ErrorMessage) const` <a id="classURH__GameInstanceSubsystem_1a5d28941dd50473ed14ccee407715ef0f"></a>

<br>
#### `public void `[`CustomEndpoint`](#classURH__GameInstanceSubsystem_1a1a8dcae5a5642315c8ba20f07aebd162)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const RallyHereAPI::FDelegate_CustomEndpointSend & Delegate)` <a id="classURH__GameInstanceSubsystem_1a1a8dcae5a5642315c8ba20f07aebd162"></a>

Custom Endpoint wrapper (for custom endpoints that require authentication)

#### Parameters
* `[FRH_CustomEndpointRequestWrapper](Common.md#structFRH__CustomEndpointRequestWrapper)` Wrapper struct containing call information 

* `Delegate` The delegate to call when the call is complete (contains raw response)

<br>
#### `public void `[`CustomEndpoint`](#classURH__GameInstanceSubsystem_1aeb1056507af99208ee7397e1b0d23112)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const FRH_CustomEndpointDelegateBlock & Delegate)` <a id="classURH__GameInstanceSubsystem_1aeb1056507af99208ee7397e1b0d23112"></a>

Custom Endpoint wrapper (for custom endpoints that require authentication)

#### Parameters
* `[FRH_CustomEndpointRequestWrapper](Common.md#structFRH__CustomEndpointRequestWrapper)` Wrapper struct containing call information 

* `Delegate` The delegate to call when the call is complete

<br>
#### `public inline void `[`BLUEPRINT_CustomEndpoint`](#classURH__GameInstanceSubsystem_1a42e7af944e181795ad0a71169e588e92)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const FRH_CustomEndpointDynamicDelegate & Delegate)` <a id="classURH__GameInstanceSubsystem_1a42e7af944e181795ad0a71169e588e92"></a>

Custom Endpoint wrapper (for custom endpoints that require authentication)

#### Parameters
* `[FRH_CustomEndpointRequestWrapper](Common.md#structFRH__CustomEndpointRequestWrapper)` Wrapper struct containing call information 

* `Delegate` The delegate to call when the call is complete

<br>
#### `protected FAuthContextPtr `[`AuthContext`](#classURH__GameInstanceSubsystem_1a8836a0620d1de84cc1383f20b38ab775) <a id="classURH__GameInstanceSubsystem_1a8836a0620d1de84cc1383f20b38ab775"></a>

Auth context used by the Game Instance Subsystem.

<br>
#### `protected TArray< `[`URH_GameInstanceSubsystemPlugin`](SubsystemBase.md#classURH__GameInstanceSubsystemPlugin)` * > `[`SubsystemPlugins`](#classURH__GameInstanceSubsystem_1a6204638edcade74afc54e77e367b6078) <a id="classURH__GameInstanceSubsystem_1a6204638edcade74afc54e77e367b6078"></a>

Array of plugins for the Game Instance Subsystem.

<br>
#### `protected `[`URH_GameInstanceSessionSubsystem`](GameInstance.md#classURH__GameInstanceSessionSubsystem)` * `[`SessionSubsystem`](#classURH__GameInstanceSubsystem_1a136c6176cf760f3fc26194ea1a5a8ba2) <a id="classURH__GameInstanceSubsystem_1a136c6176cf760f3fc26194ea1a5a8ba2"></a>

The Session Subsystem.

<br>
#### `protected `[`URH_SessionBrowserCache`](Session.md#classURH__SessionBrowserCache)` * `[`SessionSearchCache`](#classURH__GameInstanceSubsystem_1a2fa61113c03eff1731c6b0133826d745) <a id="classURH__GameInstanceSubsystem_1a2fa61113c03eff1731c6b0133826d745"></a>

The Cache for seasion seaches.

<br>
#### `protected `[`URH_MatchmakingBrowserCache`](MatchmakingBrowser.md#classURH__MatchmakingBrowserCache)` * `[`MatchmakingCache`](#classURH__GameInstanceSubsystem_1a7fa7ded8ee351d55a3b5d761055465d5) <a id="classURH__GameInstanceSubsystem_1a7fa7ded8ee351d55a3b5d761055465d5"></a>

The Cache to matchmaking.

<br>
#### `protected `[`URH_GameInstanceServerBootstrapper`](GameInstance.md#classURH__GameInstanceServerBootstrapper)` * `[`ServerBootstrapper`](#classURH__GameInstanceSubsystem_1ad4abb48c852993789a049076c5ff18bf) <a id="classURH__GameInstanceSubsystem_1ad4abb48c852993789a049076c5ff18bf"></a>

The Game Instance Server Boostrapper.

<br>
#### `protected `[`URH_GameInstanceClientBootstrapper`](GameInstance.md#classURH__GameInstanceClientBootstrapper)` * `[`ClientBootstrapper`](#classURH__GameInstanceSubsystem_1aed322e2d7c1ae98e3f77d0a40e526e3a) <a id="classURH__GameInstanceSubsystem_1aed322e2d7c1ae98e3f77d0a40e526e3a"></a>

The Game Instance Client Boostrapper.

<br>
#### `protected `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`PlayerInfoSubsystem`](#classURH__GameInstanceSubsystem_1af077fda546ea4dbc9d4142e233d402c0) <a id="classURH__GameInstanceSubsystem_1af077fda546ea4dbc9d4142e233d402c0"></a>

The Player Info Subsystem.

<br>
#### `protected `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` * `[`CatalogSubsystem`](#classURH__GameInstanceSubsystem_1a101dc200558351e0e846d90341e89f87) <a id="classURH__GameInstanceSubsystem_1a101dc200558351e0e846d90341e89f87"></a>

The Catalog Subsystem.

<br>
#### `protected `[`URH_ConfigSubsystem`](Config.md#classURH__ConfigSubsystem)` * `[`ConfigSubsystem`](#classURH__GameInstanceSubsystem_1abe30d81653383a1aaf1a454ee67b27ce) <a id="classURH__GameInstanceSubsystem_1abe30d81653383a1aaf1a454ee67b27ce"></a>

The Config Subsystem.

<br>
#### `protected `[`URH_SettingsSubsystem`](Settings.md#classURH__SettingsSubsystem)` * `[`SettingsSubsystem`](#classURH__GameInstanceSubsystem_1a0faf95129232d8f19571e9ebdc7b13e1) <a id="classURH__GameInstanceSubsystem_1a0faf95129232d8f19571e9ebdc7b13e1"></a>

The Settings Subsystem.

<br>
#### `protected bool `[`bEnabled`](#classURH__GameInstanceSubsystem_1aec940d2a189827f2ffea8b8248f9be12) <a id="classURH__GameInstanceSubsystem_1aec940d2a189827f2ffea8b8248f9be12"></a>

If the Game Instance Subsystem is enabled.

<br>
#### `protected bool `[`bEnableSessionBrowser`](#classURH__GameInstanceSubsystem_1a05992b3ee9dc7cc018f9f424069c4748) <a id="classURH__GameInstanceSubsystem_1a05992b3ee9dc7cc018f9f424069c4748"></a>

If the Session Browser is enabled.

<br>
#### `protected bool `[`bEnableMatchmakingBrowser`](#classURH__GameInstanceSubsystem_1a65744cd5c8afb2596503251f63a7cf0f) <a id="classURH__GameInstanceSubsystem_1a65744cd5c8afb2596503251f63a7cf0f"></a>

If the Matchmaking Browser is enabled.

<br>
#### `protected bool `[`bEnableGameSessions`](#classURH__GameInstanceSubsystem_1a2dab4109584cbf2a44f01cb1e488f505) <a id="classURH__GameInstanceSubsystem_1a2dab4109584cbf2a44f01cb1e488f505"></a>

If the Game Sessions are enabled.

<br>
#### `protected bool `[`bEnableServerBootstrapper`](#classURH__GameInstanceSubsystem_1a2722842f55f1c5b68bacb822d7c64cb1) <a id="classURH__GameInstanceSubsystem_1a2722842f55f1c5b68bacb822d7c64cb1"></a>

If the Game Instance Server Bootstrapper is enabled.

<br>
#### `protected bool `[`bEnableClientBootstrapper`](#classURH__GameInstanceSubsystem_1aca95d824ef892413cfaf6a88bf4aef33) <a id="classURH__GameInstanceSubsystem_1aca95d824ef892413cfaf6a88bf4aef33"></a>

If the Game Instance Client Bootstrapper is enabled.

<br>
#### `protected bool `[`bUseSecurityTokenForJoining`](#classURH__GameInstanceSubsystem_1ae1d6a9deec9d3d89eb3dfc6ed0930f5e) <a id="classURH__GameInstanceSubsystem_1ae1d6a9deec9d3d89eb3dfc6ed0930f5e"></a>

If set, the connection attempt must have a valid security token to be allowed to connect.

<br>
#### `protected bool `[`bRequireImportedPlayerIdsForJoining`](#classURH__GameInstanceSubsystem_1acbbf4a90c60528d318fda665064921c6) <a id="classURH__GameInstanceSubsystem_1acbbf4a90c60528d318fda665064921c6"></a>

If set, the Player Id must have been imported to the instance before being allowed to connect.

<br>
#### `protected bool `[`bRequireValidPlayerIdsForJoining`](#classURH__GameInstanceSubsystem_1ab49cc70d224fae0acb852ff59106a2c6) <a id="classURH__GameInstanceSubsystem_1ab49cc70d224fae0acb852ff59106a2c6"></a>

If set, the Player Id must be valid before being allowed to connect.

<br>
#### `protected template<>`  <br/>`inline UClassToUse * `[`AddSubsystemPlugin`](#classURH__GameInstanceSubsystem_1a3b7e4d48f4487b7a53562eba2cd14e21)`(const FSoftClassPath & SubsystemClassPath)` <a id="classURH__GameInstanceSubsystem_1a3b7e4d48f4487b7a53562eba2cd14e21"></a>

Adds a plugin to the Game Instance Subsystem.

#### Parameters
* `SubsystemClassPath` The class path of the plugin to add. 

#### Returns
The plugin that was added.

<br>
#### `protected virtual void `[`AppSuspendCallbackInGameThread`](#classURH__GameInstanceSubsystem_1a7ed49aacbd0e42e5bc4010dbd0ff2888)`()` <a id="classURH__GameInstanceSubsystem_1a7ed49aacbd0e42e5bc4010dbd0ff2888"></a>

Handle application going into suspension (these involve the application losing focus).

<br>
#### `protected virtual void `[`AppResumeCallbackInGameThread`](#classURH__GameInstanceSubsystem_1afa9adfbf1b12fd3d37e91ea99d4f81fe)`()` <a id="classURH__GameInstanceSubsystem_1afa9adfbf1b12fd3d37e91ea99d4f81fe"></a>

Handle application resuming from suspension (these involve the application losing focus).

<br>
#### `protected virtual void `[`AppDeactivatedCallbackInGameThread`](#classURH__GameInstanceSubsystem_1ad3d5d9832895928a55823981b222a746)`()` <a id="classURH__GameInstanceSubsystem_1ad3d5d9832895928a55823981b222a746"></a>

Handle application deactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).

<br>
#### `protected virtual void `[`AppReactivatedCallbackInGameThread`](#classURH__GameInstanceSubsystem_1ae3d080074efa0bfdb7633ad71da2c3d7)`()` <a id="classURH__GameInstanceSubsystem_1ae3d080074efa0bfdb7633ad71da2c3d7"></a>

Handle application reactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).

<br>
## struct `FRH_BootstrappingResult` <a id="structFRH__BootstrappingResult"></a>

An result object that contains the accumulated results for the bootstrapping flow.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_GameHostAllocationInfo `[`AllocationInfo`](#structFRH__BootstrappingResult_1adec6488272e42a9e0b06af3ab6d59d21) | Allocation info from the provider.
`public TOptional< FString > `[`ETag`](#structFRH__BootstrappingResult_1ac73f26d7721fb5dad1842db2210f63ee) | Etag for the session.
`public TOptional< `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` > `[`Session`](#structFRH__BootstrappingResult_1ad19f9f0c2ef01ee27ee8662fa2c24fbf) | Session data.
`public TOptional< `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`Template`](#structFRH__BootstrappingResult_1a96b718bfaa357278d45e35e5f8195d7d) | Session template.
`public inline  `[`FRH_BootstrappingResult`](#structFRH__BootstrappingResult_1aa216ffeac7a1df598341b1c44b1cf60a)`()` | Default constructor.
`public inline  `[`FRH_BootstrappingResult`](#structFRH__BootstrappingResult_1ac72f8aa3aba34360f7bb355c28b09bf4)`(const FRH_GameHostAllocationInfo & InAllocationInfo)` | Constructor with Host Allocation Info.
`public inline FORCEINLINE bool `[`IsValid`](#structFRH__BootstrappingResult_1a2c15ea10bd2944064a94f6623a605c53)`() const` | Whether or not this result is valid (it has the required IDs to be finalized)
`public inline FORCEINLINE bool `[`IsComplete`](#structFRH__BootstrappingResult_1adf13be05a51ab5276b77474e92fe2bd6)`() const` | Whether or not this result is complete (it has valid and matching session information)

#### Members

#### `public FRH_GameHostAllocationInfo `[`AllocationInfo`](#structFRH__BootstrappingResult_1adec6488272e42a9e0b06af3ab6d59d21) <a id="structFRH__BootstrappingResult_1adec6488272e42a9e0b06af3ab6d59d21"></a>

Allocation info from the provider.

<br>
#### `public TOptional< FString > `[`ETag`](#structFRH__BootstrappingResult_1ac73f26d7721fb5dad1842db2210f63ee) <a id="structFRH__BootstrappingResult_1ac73f26d7721fb5dad1842db2210f63ee"></a>

Etag for the session.

<br>
#### `public TOptional< `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` > `[`Session`](#structFRH__BootstrappingResult_1ad19f9f0c2ef01ee27ee8662fa2c24fbf) <a id="structFRH__BootstrappingResult_1ad19f9f0c2ef01ee27ee8662fa2c24fbf"></a>

Session data.

<br>
#### `public TOptional< `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`Template`](#structFRH__BootstrappingResult_1a96b718bfaa357278d45e35e5f8195d7d) <a id="structFRH__BootstrappingResult_1a96b718bfaa357278d45e35e5f8195d7d"></a>

Session template.

<br>
#### `public inline  `[`FRH_BootstrappingResult`](#structFRH__BootstrappingResult_1aa216ffeac7a1df598341b1c44b1cf60a)`()` <a id="structFRH__BootstrappingResult_1aa216ffeac7a1df598341b1c44b1cf60a"></a>

Default constructor.

<br>
#### `public inline  `[`FRH_BootstrappingResult`](#structFRH__BootstrappingResult_1ac72f8aa3aba34360f7bb355c28b09bf4)`(const FRH_GameHostAllocationInfo & InAllocationInfo)` <a id="structFRH__BootstrappingResult_1ac72f8aa3aba34360f7bb355c28b09bf4"></a>

Constructor with Host Allocation Info.

<br>
#### `public inline FORCEINLINE bool `[`IsValid`](#structFRH__BootstrappingResult_1a2c15ea10bd2944064a94f6623a605c53)`() const` <a id="structFRH__BootstrappingResult_1a2c15ea10bd2944064a94f6623a605c53"></a>

Whether or not this result is valid (it has the required IDs to be finalized)

<br>
#### `public inline FORCEINLINE bool `[`IsComplete`](#structFRH__BootstrappingResult_1adf13be05a51ab5276b77474e92fe2bd6)`() const` <a id="structFRH__BootstrappingResult_1adf13be05a51ab5276b77474e92fe2bd6"></a>

Whether or not this result is complete (it has valid and matching session information)

<br>
