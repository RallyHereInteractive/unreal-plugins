# GameInstance <a id="group__GameInstance"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`ERH_ServerBootstrapMode`](#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)            | An enum for the handled bootstrapping modes.
`enum `[`ERH_ServerBootstrapFlowStep`](#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)            | An enum for the steps in the bootstrapping flow.
`class `[`URH_BootstrappingSettings`](#classURH__BootstrappingSettings) | An settings object that contains the settings for the bootstrapping flow.
`class `[`URH_GameInstanceServerBootstrapper`](#classURH__GameInstanceServerBootstrapper) | Server Bootstrapper for the Game Instance.
`class `[`URH_GameInstanceClientBootstrapper`](#classURH__GameInstanceClientBootstrapper) | Client Boostrapper for the Game Instance.
`class `[`URH_GameInstanceSubsystem`](#classURH__GameInstanceSubsystem) | Subsystem for the Game Instance.
`struct `[`FRH_BootstrappingResult`](#structFRH__BootstrappingResult) | An result object that contains the accumulated results for the bootstrapping flow.
`struct `[`FRH_ActiveSessionStatePlayerContext`](#structFRH__ActiveSessionStatePlayerContext) | 

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
`public FRH_GameHostProviderStatsRequested `[`OnGameHostProviderStatsRequested`](#classURH__GameInstanceServerBootstrapper_1ac3fec0c2d9228db884a97ea32c82ebc4) | callback triggered to request stats if default implementation is not sufficient
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
`public inline virtual TSharedPtr< class IAnalyticsProvider > `[`GetAnalyticsProvider`](#classURH__GameInstanceServerBootstrapper_1a3b8760a66ce261f2c4651298a8012097)`() const` | Get the Analytics Provider.
`public inline virtual `[`URH_OnlineSession`](Session.md#classURH__OnlineSession)` * `[`GetSession`](#classURH__GameInstanceServerBootstrapper_1a2ee4a4f52cbb85e077b2ffb2459f2c3e)`() const` | Get the current bootstrapping mode.
`public inline virtual FAuthContextPtr `[`GetSessionAuthContext`](#classURH__GameInstanceServerBootstrapper_1a3c8ddb006bbc3dea378d179e51be5b62)`() const` | Gets the auth context to use for API calls for the session owner.
`public virtual void `[`ImportAPISession`](#classURH__GameInstanceServerBootstrapper_1a374284e48119f0092acb4a0da5634215)`(const `[`FRH_APISessionWithETag`](Session.md#structTRH__DataWithETagWrapper)` & Session)` | Imports a session object from the API into the owner (ex: from polling).
`public virtual void `[`ImportAPITemplate`](#classURH__GameInstanceServerBootstrapper_1a9cfc35913bd38f0fd8f090428c6971d4)`(const `[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template)` | Imports the template into the owner's template list (ex: from polling).
`public virtual void `[`ReconcileAPISessions`](#classURH__GameInstanceServerBootstrapper_1a30545d8b52b8fdfe6ebbff321514e929)`(const TArray< FString > & SessionIds,const TOptional< FString > & ETag)` | Updates the list of sessions to only those that are active.
`public virtual void `[`ReconcileAPITemplates`](#classURH__GameInstanceServerBootstrapper_1a3f046c14798943a59bcb268c75e02e6c)`(const TArray< FString > & InTemplates,const TOptional< FString > & ETag)` | Updates the list of session templates to those that are active.
`public virtual class `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__GameInstanceServerBootstrapper_1ac1a7eee0c5d62a932aba1d57520fba59)`() const` | Gets the PlayerInfo Subsystem.
`public virtual IOnlineSubsystem * `[`GetOSS`](#classURH__GameInstanceServerBootstrapper_1afdc3030fd174d1a570231dcad8429265)`() const` | Gets the Online Subsystem to use for OSS calls.
`public virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__GameInstanceServerBootstrapper_1ab21f0bba37ec5caa75fe83379da54074)`() const` | Gets the Online Subsystem Unique Id to use for OSS calls.
`public virtual FPlatformUserId `[`GetOSSPlatformUserId`](#classURH__GameInstanceServerBootstrapper_1a0c31da8cfe9dcfcb2c8988e870e26931)`() const` | Gets the Online Subsystem PlatformUserId to use for OSS calls (equivalent to controller index)
`public inline virtual TOptional< FString > `[`GetETagForAllTemplatesPoll`](#classURH__GameInstanceServerBootstrapper_1ac1eaa7cf3cda91a7a1f412dfe5246fa8)`() const` | Gets the etag to use for a "Get all Templates" type query.
`public inline virtual TOptional< FString > `[`GetETagForAllSessionsPoll`](#classURH__GameInstanceServerBootstrapper_1ae10409319fa6d2264e124e65a8c9bf8e)`() const` | Gets the etag to use for a "Get all Sessions" type query.
`public inline virtual TArray< `[`URH_SessionView`](Session.md#classURH__SessionView)` * > `[`GetAllSessionsForPolling`](#classURH__GameInstanceServerBootstrapper_1ac2f94216aa37e0981cbb72db9e8a9f10)`() const` | Used to get all sessions, primarily for get all sessions polling where etag matches.
`public virtual `[`URH_SessionView`](Session.md#classURH__SessionView)` * `[`GetSessionById`](#classURH__GameInstanceServerBootstrapper_1abe0dcf495d31dfbd8876d63feab05ad5)`(const FString & SessionId) const` | Gets a session by its id.
`public virtual void `[`RemoveSessionById`](#classURH__GameInstanceServerBootstrapper_1a493191c1aab0553e34f0dcf4c05f8f22)`(const FString & SessionId)` | Removes a cached session for the local player, this does NOT try to leave it.
`public virtual bool `[`GetTemplate`](#classURH__GameInstanceServerBootstrapper_1a62d69a1d7e7021f03557dff715e6179d)`(const FString & Type,`[`FRHAPI_SessionTemplate`](models/RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` & Template) const` | Gets a session template by type.
`public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByRHSessionId`](#classURH__GameInstanceServerBootstrapper_1aec9f89849a3865282935f12646e98255)`(const FString & SessionId) const` | Gets the platform synchronization object using the rally here session id.
`public inline virtual `[`URH_PlatformSessionSyncer`](Session.md#classURH__PlatformSessionSyncer)` * `[`GetPlatformSyncerByPlatformSessionId`](#classURH__GameInstanceServerBootstrapper_1a2c2d7c9b2b38fca62aba5ba8e642797b)`(const FUniqueNetIdRepl & PlatformSessionId) const` | Gets the platform synchronization object using the platform session id.
`public inline const `[`FRH_BootstrappingResult`](GameInstance.md#structFRH__BootstrappingResult)` & `[`GetBootstrappingResult`](#classURH__GameInstanceServerBootstrapper_1aa61e1f51c28e5437d220362e652e4156)`() const` | Gets the bootstrapping result from this bootstrapper.
`public inline virtual TOptional< FString > `[`GetBoundAllocationId`](#classURH__GameInstanceServerBootstrapper_1afc0a4f4f72556a0b713b0bf5f1442eb7)`() const` | Gets the allocation id this session owner is bound to, if any. Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view.
`public inline virtual TOptional< FString > `[`GetBoundInstanceId`](#classURH__GameInstanceServerBootstrapper_1a33402e7dd26b4a226f7615749184303b)`() const` | Gets the instance id this session owner is bound to, if any. Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view.
`public virtual bool `[`CanAutoUploadServerFiles`](#classURH__GameInstanceServerBootstrapper_1a9cfd09c543c9435af1a994d400d5c564)`() const` | Gets the directory to use for uploading files for this bootstrapper.
`public virtual `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` `[`GetAutoUploadDirectory`](#classURH__GameInstanceServerBootstrapper_1a482bf6b82fcc70879d897f4de4fbc21b)`(bool bDeveloperFile) const` | Gets the directory to use for uploading files for this bootstrapper.
`public virtual void `[`ConditionalAutoUploadLogFile`](#classURH__GameInstanceServerBootstrapper_1a77257d8a5d5c426286fbf301fec96171)`() const` | Capture and upload log file based on settings.
`public virtual void `[`ConditionalAutoUploadTraceFile`](#classURH__GameInstanceServerBootstrapper_1af74b0fa8ecac1183cfd34c7c1b3f69ed)`(const FString & TraceFile) const` | Capture and upload trace file based on settings.
`protected `[`ERH_ServerBootstrapMode`](undefined.md#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)` `[`BootstrapMode`](#classURH__GameInstanceServerBootstrapper_1a437398cd4da11b39dbba5624ac0d4503) | Bootstrap Mode being used
`protected `[`ERH_ServerBootstrapFlowStep`](undefined.md#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)` `[`BootstrapStep`](#classURH__GameInstanceServerBootstrapper_1a0c41579ef8e737384ac8e1c82efb8d11) | Current Bootstrap Step
`protected int32 `[`CurrentRecycleCount`](#classURH__GameInstanceServerBootstrapper_1a95d71262cc53a06cf14abb0e1c5ebd76) | The current recycle count (note that the initial boot is considered the first recycle, so this is effectively 1-based)
`protected FAuthContextPtr `[`AuthContext`](#classURH__GameInstanceServerBootstrapper_1a31e36a649064c176a0727626265f6ff8) | The auth context for this bootstrapper
`protected TSharedPtr< class IAnalyticsProvider > `[`AnalyticsProvider`](#classURH__GameInstanceServerBootstrapper_1a6613fddda184297e91015e16ce6e88f8) | The analytics provider for this bootstrapper
`protected TOptional< FDateTime > `[`AnalyticsStartTime`](#classURH__GameInstanceServerBootstrapper_1a397fabb31e01701e68081f7cb3da45da) | The start time of the AnalyticsProvider
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
`protected virtual void `[`OnBootstrappingFailed`](#classURH__GameInstanceServerBootstrapper_1a0153222bb4308545e9f1270882ddab4f)`(const FString & FailureReason)` | Bootstrapping Flow [Failed] - trigger bootstrapping failure and handles failure logic.
`protected virtual void `[`OnBootstrappingComplete`](#classURH__GameInstanceServerBootstrapper_1a2882f79445b73579a19dbb92e8b859df)`()` | Bootstrapping Flow [Complete] - trigger bootstrapping complete and handles completion logic. Note that recycling may start a new bootstrapping flow.
`protected virtual void `[`BeginServerLogin`](#classURH__GameInstanceServerBootstrapper_1a924d64924d1e13251752ae00763ea765)`()` | Bootstrapping Flow [LoggingIn] - begin the login process to the RallyHere API.
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
`protected virtual void `[`OnLoggedOut`](#classURH__GameInstanceServerBootstrapper_1af6d9c3758a402b830393c531822f586b)`(bool bRefreshTokenExpired)` | Callback for when the server is logged out (effectively, authorization to the API is lost, and was not automatically recovered)
`protected virtual void `[`OnRefreshTokenExpired`](#classURH__GameInstanceServerBootstrapper_1a5c36a506ed51f8694e9ea296ab4c1822)`(FSimpleDelegate CompleteCallback)` | Callback for when a refresh token expires.

#### Members

#### `public FRH_GameHostProviderStatsRequested `[`OnGameHostProviderStatsRequested`](#classURH__GameInstanceServerBootstrapper_1ac3fec0c2d9228db884a97ea32c82ebc4) <a id="classURH__GameInstanceServerBootstrapper_1ac3fec0c2d9228db884a97ea32c82ebc4"></a>

callback triggered to request stats if default implementation is not sufficient

<br>
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
#### `public inline virtual TSharedPtr< class IAnalyticsProvider > `[`GetAnalyticsProvider`](#classURH__GameInstanceServerBootstrapper_1a3b8760a66ce261f2c4651298a8012097)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a3b8760a66ce261f2c4651298a8012097"></a>

Get the Analytics Provider.

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
#### `public virtual FUniqueNetIdWrapper `[`GetOSSUniqueId`](#classURH__GameInstanceServerBootstrapper_1ab21f0bba37ec5caa75fe83379da54074)`() const` <a id="classURH__GameInstanceServerBootstrapper_1ab21f0bba37ec5caa75fe83379da54074"></a>

Gets the Online Subsystem Unique Id to use for OSS calls.

<br>
#### `public virtual FPlatformUserId `[`GetOSSPlatformUserId`](#classURH__GameInstanceServerBootstrapper_1a0c31da8cfe9dcfcb2c8988e870e26931)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a0c31da8cfe9dcfcb2c8988e870e26931"></a>

Gets the Online Subsystem PlatformUserId to use for OSS calls (equivalent to controller index)

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
#### `public virtual void `[`RemoveSessionById`](#classURH__GameInstanceServerBootstrapper_1a493191c1aab0553e34f0dcf4c05f8f22)`(const FString & SessionId)` <a id="classURH__GameInstanceServerBootstrapper_1a493191c1aab0553e34f0dcf4c05f8f22"></a>

Removes a cached session for the local player, this does NOT try to leave it.

#### Parameters
* `SessionId` The Session Id to remove.

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
#### `public inline const `[`FRH_BootstrappingResult`](GameInstance.md#structFRH__BootstrappingResult)` & `[`GetBootstrappingResult`](#classURH__GameInstanceServerBootstrapper_1aa61e1f51c28e5437d220362e652e4156)`() const` <a id="classURH__GameInstanceServerBootstrapper_1aa61e1f51c28e5437d220362e652e4156"></a>

Gets the bootstrapping result from this bootstrapper.

<br>
#### `public inline virtual TOptional< FString > `[`GetBoundAllocationId`](#classURH__GameInstanceServerBootstrapper_1afc0a4f4f72556a0b713b0bf5f1442eb7)`() const` <a id="classURH__GameInstanceServerBootstrapper_1afc0a4f4f72556a0b713b0bf5f1442eb7"></a>

Gets the allocation id this session owner is bound to, if any. Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view.

<br>
#### `public inline virtual TOptional< FString > `[`GetBoundInstanceId`](#classURH__GameInstanceServerBootstrapper_1a33402e7dd26b4a226f7615749184303b)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a33402e7dd26b4a226f7615749184303b"></a>

Gets the instance id this session owner is bound to, if any. Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view.

<br>
#### `public virtual bool `[`CanAutoUploadServerFiles`](#classURH__GameInstanceServerBootstrapper_1a9cfd09c543c9435af1a994d400d5c564)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a9cfd09c543c9435af1a994d400d5c564"></a>

Gets the directory to use for uploading files for this bootstrapper.

<br>
#### `public virtual `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` `[`GetAutoUploadDirectory`](#classURH__GameInstanceServerBootstrapper_1a482bf6b82fcc70879d897f4de4fbc21b)`(bool bDeveloperFile) const` <a id="classURH__GameInstanceServerBootstrapper_1a482bf6b82fcc70879d897f4de4fbc21b"></a>

Gets the directory to use for uploading files for this bootstrapper.

<br>
#### `public virtual void `[`ConditionalAutoUploadLogFile`](#classURH__GameInstanceServerBootstrapper_1a77257d8a5d5c426286fbf301fec96171)`() const` <a id="classURH__GameInstanceServerBootstrapper_1a77257d8a5d5c426286fbf301fec96171"></a>

Capture and upload log file based on settings.

<br>
#### `public virtual void `[`ConditionalAutoUploadTraceFile`](#classURH__GameInstanceServerBootstrapper_1af74b0fa8ecac1183cfd34c7c1b3f69ed)`(const FString & TraceFile) const` <a id="classURH__GameInstanceServerBootstrapper_1af74b0fa8ecac1183cfd34c7c1b3f69ed"></a>

Capture and upload trace file based on settings.

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
#### `protected FAuthContextPtr `[`AuthContext`](#classURH__GameInstanceServerBootstrapper_1a31e36a649064c176a0727626265f6ff8) <a id="classURH__GameInstanceServerBootstrapper_1a31e36a649064c176a0727626265f6ff8"></a>

The auth context for this bootstrapper

<br>
#### `protected TSharedPtr< class IAnalyticsProvider > `[`AnalyticsProvider`](#classURH__GameInstanceServerBootstrapper_1a6613fddda184297e91015e16ce6e88f8) <a id="classURH__GameInstanceServerBootstrapper_1a6613fddda184297e91015e16ce6e88f8"></a>

The analytics provider for this bootstrapper

<br>
#### `protected TOptional< FDateTime > `[`AnalyticsStartTime`](#classURH__GameInstanceServerBootstrapper_1a397fabb31e01701e68081f7cb3da45da) <a id="classURH__GameInstanceServerBootstrapper_1a397fabb31e01701e68081f7cb3da45da"></a>

The start time of the AnalyticsProvider

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
#### `protected virtual void `[`OnBootstrappingFailed`](#classURH__GameInstanceServerBootstrapper_1a0153222bb4308545e9f1270882ddab4f)`(const FString & FailureReason)` <a id="classURH__GameInstanceServerBootstrapper_1a0153222bb4308545e9f1270882ddab4f"></a>

Bootstrapping Flow [Failed] - trigger bootstrapping failure and handles failure logic.

<br>
#### `protected virtual void `[`OnBootstrappingComplete`](#classURH__GameInstanceServerBootstrapper_1a2882f79445b73579a19dbb92e8b859df)`()` <a id="classURH__GameInstanceServerBootstrapper_1a2882f79445b73579a19dbb92e8b859df"></a>

Bootstrapping Flow [Complete] - trigger bootstrapping complete and handles completion logic. Note that recycling may start a new bootstrapping flow.

<br>
#### `protected virtual void `[`BeginServerLogin`](#classURH__GameInstanceServerBootstrapper_1a924d64924d1e13251752ae00763ea765)`()` <a id="classURH__GameInstanceServerBootstrapper_1a924d64924d1e13251752ae00763ea765"></a>

Bootstrapping Flow [LoggingIn] - begin the login process to the RallyHere API.

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
#### `protected virtual void `[`OnLoggedOut`](#classURH__GameInstanceServerBootstrapper_1af6d9c3758a402b830393c531822f586b)`(bool bRefreshTokenExpired)` <a id="classURH__GameInstanceServerBootstrapper_1af6d9c3758a402b830393c531822f586b"></a>

Callback for when the server is logged out (effectively, authorization to the API is lost, and was not automatically recovered)

<br>
#### `protected virtual void `[`OnRefreshTokenExpired`](#classURH__GameInstanceServerBootstrapper_1a5c36a506ed51f8694e9ea296ab4c1822)`(FSimpleDelegate CompleteCallback)` <a id="classURH__GameInstanceServerBootstrapper_1a5c36a506ed51f8694e9ea296ab4c1822"></a>

Callback for when a refresh token expires.

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
`public inline void `[`SetAnalyticsProvider`](#classURH__GameInstanceSubsystem_1a1319227db10c4bece2cca18069c821a7)`(TSharedPtr< class IAnalyticsProvider > InAnalyticsProvider)` | Sets the analytics provider for the subsystem.
`public inline virtual TSharedPtr< class IAnalyticsProvider > `[`GetAnalyticsProvider`](#classURH__GameInstanceSubsystem_1a24f6265f8d5f58d838c8efbf2e14f689)`() const` | Gets the instance's analytics provider to use.
`public inline `[`URH_GameInstanceSessionSubsystem`](undefined.md#classURH__GameInstanceSessionSubsystem)` * `[`GetSessionSubsystem`](#classURH__GameInstanceSubsystem_1acab54311f541b73a796815cb8333e227)`() const` | Gets the session subsystem on the instance.
`public inline `[`URH_SessionBrowserCache`](Session.md#classURH__SessionBrowserCache)` * `[`GetSessionSearchCache`](#classURH__GameInstanceSubsystem_1af167d4cc8a173881dc30b7fa64ad7e2b)`() const` | Gets the session search cache on the instance.
`public inline `[`URH_MatchmakingBrowserCache`](MatchmakingBrowser.md#classURH__MatchmakingBrowserCache)` * `[`GetMatchmakingCache`](#classURH__GameInstanceSubsystem_1acfb5f63d8414c51c0c4b39fb5b6bf4fe)`() const` | Gets the matchmaking cache on the instance.
`public inline `[`URH_GameInstanceServerBootstrapper`](GameInstance.md#classURH__GameInstanceServerBootstrapper)` * `[`GetServerBootstrapper`](#classURH__GameInstanceSubsystem_1a27e99e7893908c6d9cc6127e962357ad)`() const` | Gets the server bootstrapper on the instance.
`public inline `[`URH_GameInstanceClientBootstrapper`](GameInstance.md#classURH__GameInstanceClientBootstrapper)` * `[`GetClientBootstrapper`](#classURH__GameInstanceSubsystem_1a9351e98f3758b7bd2d9278342d2c8bfe)`() const` | Gets the client boostrapper on the instance.
`public inline `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__GameInstanceSubsystem_1ad981a6b49e1b6717d8392edac8a7c49d)`() const` | Gets the player info subsystem on the instance.
`public inline `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` * `[`GetCatalogSubsystem`](#classURH__GameInstanceSubsystem_1a5939c3dddeefe5d5928307522526845a)`() const` | Gets the catalog subsystem on the instance.
`public inline `[`URH_ConfigSubsystem`](Config.md#classURH__ConfigSubsystem)` * `[`GetConfigSubsystem`](#classURH__GameInstanceSubsystem_1a7d68319809db5ea58fc8cd87eeeca7a7)`() const` | Gets the config subsystem on the instance.
`public inline `[`URH_SettingsSubsystem`](Settings.md#classURH__SettingsSubsystem)` * `[`GetSettingsSubsystem`](#classURH__GameInstanceSubsystem_1afafed40a588921b712548ce5071bf4cb)`() const` | Gets the settings subsystem on the instance.
`public inline `[`URH_MatchSubsystem`](Match.md#classURH__MatchSubsystem)` * `[`GetMatchSubsystem`](#classURH__GameInstanceSubsystem_1aa5048780cc5ed5836e03be9d7780706e)`() const` | Gets the match subsystem on the instance.
`public inline `[`URH_RemoteFileSubsystem`](File.md#classURH__RemoteFileSubsystem)` * `[`GetRemoteFileSubsystem`](#classURH__GameInstanceSubsystem_1aafa066f39f2a1aedeb992a2b7c52164d)`() const` | Gets the remote file subsystem on the instance.
`public void `[`CustomEndpoint`](#classURH__GameInstanceSubsystem_1a1a8dcae5a5642315c8ba20f07aebd162)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const RallyHereAPI::FDelegate_CustomEndpointSend & Delegate)` | Custom Endpoint wrapper (for custom endpoints that require authentication)
`public void `[`CustomEndpoint`](#classURH__GameInstanceSubsystem_1aeb1056507af99208ee7397e1b0d23112)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const FRH_CustomEndpointDelegateBlock & Delegate)` | Custom Endpoint wrapper (for custom endpoints that require authentication)
`public inline void `[`BLUEPRINT_CustomEndpoint`](#classURH__GameInstanceSubsystem_1a42e7af944e181795ad0a71169e588e92)`(const `[`FRH_CustomEndpointRequestWrapper`](Common.md#structFRH__CustomEndpointRequestWrapper)` & Request,const FRH_CustomEndpointDynamicDelegate & Delegate)` | Custom Endpoint wrapper (for custom endpoints that require authentication)
`protected FAuthContextPtr `[`AuthContext`](#classURH__GameInstanceSubsystem_1a8836a0620d1de84cc1383f20b38ab775) | Auth context used by the Game Instance Subsystem.
`protected TSharedPtr< class IAnalyticsProvider > `[`AnalyticsProvider`](#classURH__GameInstanceSubsystem_1aae5830efe955343c08f88ce79747be51) | Analytics provider used by the Game Instance Subsystem.
`protected TArray< `[`URH_GameInstanceSubsystemPlugin`](SubsystemBase.md#classURH__GameInstanceSubsystemPlugin)` * > `[`SubsystemPlugins`](#classURH__GameInstanceSubsystem_1a6204638edcade74afc54e77e367b6078) | Array of plugins for the Game Instance Subsystem.
`protected `[`URH_GameInstanceSessionSubsystem`](undefined.md#classURH__GameInstanceSessionSubsystem)` * `[`SessionSubsystem`](#classURH__GameInstanceSubsystem_1a136c6176cf760f3fc26194ea1a5a8ba2) | The Session Subsystem.
`protected `[`URH_SessionBrowserCache`](Session.md#classURH__SessionBrowserCache)` * `[`SessionSearchCache`](#classURH__GameInstanceSubsystem_1a2fa61113c03eff1731c6b0133826d745) | The Cache for seasion seaches.
`protected `[`URH_MatchmakingBrowserCache`](MatchmakingBrowser.md#classURH__MatchmakingBrowserCache)` * `[`MatchmakingCache`](#classURH__GameInstanceSubsystem_1a7fa7ded8ee351d55a3b5d761055465d5) | The Cache to matchmaking.
`protected `[`URH_GameInstanceServerBootstrapper`](GameInstance.md#classURH__GameInstanceServerBootstrapper)` * `[`ServerBootstrapper`](#classURH__GameInstanceSubsystem_1ad4abb48c852993789a049076c5ff18bf) | The Game Instance Server Boostrapper.
`protected `[`URH_GameInstanceClientBootstrapper`](GameInstance.md#classURH__GameInstanceClientBootstrapper)` * `[`ClientBootstrapper`](#classURH__GameInstanceSubsystem_1aed322e2d7c1ae98e3f77d0a40e526e3a) | The Game Instance Client Boostrapper.
`protected `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`PlayerInfoSubsystem`](#classURH__GameInstanceSubsystem_1af077fda546ea4dbc9d4142e233d402c0) | The Player Info Subsystem.
`protected `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` * `[`CatalogSubsystem`](#classURH__GameInstanceSubsystem_1a101dc200558351e0e846d90341e89f87) | The Catalog Subsystem.
`protected `[`URH_ConfigSubsystem`](Config.md#classURH__ConfigSubsystem)` * `[`ConfigSubsystem`](#classURH__GameInstanceSubsystem_1abe30d81653383a1aaf1a454ee67b27ce) | The Config Subsystem.
`protected `[`URH_SettingsSubsystem`](Settings.md#classURH__SettingsSubsystem)` * `[`SettingsSubsystem`](#classURH__GameInstanceSubsystem_1a0faf95129232d8f19571e9ebdc7b13e1) | The Settings Subsystem.
`protected `[`URH_MatchSubsystem`](Match.md#classURH__MatchSubsystem)` * `[`MatchSubsystem`](#classURH__GameInstanceSubsystem_1a3d15c09c7d7205f9e38ccc368ffaf62a) | The Match Subsystem.
`protected `[`URH_RemoteFileSubsystem`](File.md#classURH__RemoteFileSubsystem)` * `[`RemoteFileSubsystem`](#classURH__GameInstanceSubsystem_1a02dcdefba948191414723ca5a5770190) | The File Subsystem.
`protected bool `[`bEnabled`](#classURH__GameInstanceSubsystem_1aec940d2a189827f2ffea8b8248f9be12) | If the Game Instance Subsystem is enabled.
`protected bool `[`bEnableSessionBrowser`](#classURH__GameInstanceSubsystem_1a05992b3ee9dc7cc018f9f424069c4748) | If the Session Browser is enabled.
`protected bool `[`bEnableMatchmakingBrowser`](#classURH__GameInstanceSubsystem_1a65744cd5c8afb2596503251f63a7cf0f) | If the Matchmaking Browser is enabled.
`protected bool `[`bEnableGameSessions`](#classURH__GameInstanceSubsystem_1a2dab4109584cbf2a44f01cb1e488f505) | If the Game Sessions are enabled.
`protected bool `[`bEnableServerBootstrapper`](#classURH__GameInstanceSubsystem_1a2722842f55f1c5b68bacb822d7c64cb1) | If the Game Instance Server Bootstrapper is enabled.
`protected bool `[`bEnableClientBootstrapper`](#classURH__GameInstanceSubsystem_1aca95d824ef892413cfaf6a88bf4aef33) | If the Game Instance Client Bootstrapper is enabled.
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
#### `public inline void `[`SetAnalyticsProvider`](#classURH__GameInstanceSubsystem_1a1319227db10c4bece2cca18069c821a7)`(TSharedPtr< class IAnalyticsProvider > InAnalyticsProvider)` <a id="classURH__GameInstanceSubsystem_1a1319227db10c4bece2cca18069c821a7"></a>

Sets the analytics provider for the subsystem.

#### Parameters
* `InAnalyticsProvider` The analytics provider to set with.

<br>
#### `public inline virtual TSharedPtr< class IAnalyticsProvider > `[`GetAnalyticsProvider`](#classURH__GameInstanceSubsystem_1a24f6265f8d5f58d838c8efbf2e14f689)`() const` <a id="classURH__GameInstanceSubsystem_1a24f6265f8d5f58d838c8efbf2e14f689"></a>

Gets the instance's analytics provider to use.

<br>
#### `public inline `[`URH_GameInstanceSessionSubsystem`](undefined.md#classURH__GameInstanceSessionSubsystem)` * `[`GetSessionSubsystem`](#classURH__GameInstanceSubsystem_1acab54311f541b73a796815cb8333e227)`() const` <a id="classURH__GameInstanceSubsystem_1acab54311f541b73a796815cb8333e227"></a>

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
#### `public inline `[`URH_MatchSubsystem`](Match.md#classURH__MatchSubsystem)` * `[`GetMatchSubsystem`](#classURH__GameInstanceSubsystem_1aa5048780cc5ed5836e03be9d7780706e)`() const` <a id="classURH__GameInstanceSubsystem_1aa5048780cc5ed5836e03be9d7780706e"></a>

Gets the match subsystem on the instance.

<br>
#### `public inline `[`URH_RemoteFileSubsystem`](File.md#classURH__RemoteFileSubsystem)` * `[`GetRemoteFileSubsystem`](#classURH__GameInstanceSubsystem_1aafa066f39f2a1aedeb992a2b7c52164d)`() const` <a id="classURH__GameInstanceSubsystem_1aafa066f39f2a1aedeb992a2b7c52164d"></a>

Gets the remote file subsystem on the instance.

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
#### `protected TSharedPtr< class IAnalyticsProvider > `[`AnalyticsProvider`](#classURH__GameInstanceSubsystem_1aae5830efe955343c08f88ce79747be51) <a id="classURH__GameInstanceSubsystem_1aae5830efe955343c08f88ce79747be51"></a>

Analytics provider used by the Game Instance Subsystem.

<br>
#### `protected TArray< `[`URH_GameInstanceSubsystemPlugin`](SubsystemBase.md#classURH__GameInstanceSubsystemPlugin)` * > `[`SubsystemPlugins`](#classURH__GameInstanceSubsystem_1a6204638edcade74afc54e77e367b6078) <a id="classURH__GameInstanceSubsystem_1a6204638edcade74afc54e77e367b6078"></a>

Array of plugins for the Game Instance Subsystem.

<br>
#### `protected `[`URH_GameInstanceSessionSubsystem`](undefined.md#classURH__GameInstanceSessionSubsystem)` * `[`SessionSubsystem`](#classURH__GameInstanceSubsystem_1a136c6176cf760f3fc26194ea1a5a8ba2) <a id="classURH__GameInstanceSubsystem_1a136c6176cf760f3fc26194ea1a5a8ba2"></a>

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
#### `protected `[`URH_MatchSubsystem`](Match.md#classURH__MatchSubsystem)` * `[`MatchSubsystem`](#classURH__GameInstanceSubsystem_1a3d15c09c7d7205f9e38ccc368ffaf62a) <a id="classURH__GameInstanceSubsystem_1a3d15c09c7d7205f9e38ccc368ffaf62a"></a>

The Match Subsystem.

<br>
#### `protected `[`URH_RemoteFileSubsystem`](File.md#classURH__RemoteFileSubsystem)` * `[`RemoteFileSubsystem`](#classURH__GameInstanceSubsystem_1a02dcdefba948191414723ca5a5770190) <a id="classURH__GameInstanceSubsystem_1a02dcdefba948191414723ca5a5770190"></a>

The File Subsystem.

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
## struct `FRH_ActiveSessionStatePlayerContext` <a id="structFRH__ActiveSessionStatePlayerContext"></a>

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`RHPlayerId`](#structFRH__ActiveSessionStatePlayerContext_1afbdc565f33bd535631bfbc9c2b20c088) | The player id for the context.
`public TWeakObjectPtr< AController > `[`Controller`](#structFRH__ActiveSessionStatePlayerContext_1ae48566fe29a65e5f2ff61d42b27c4556) | The controller for the context.
`public FDateTime `[`JoinedTime`](#structFRH__ActiveSessionStatePlayerContext_1a07fb65fb777e549fdc612c996deaae5f) | The time the player joined the server.
`public FDateTime `[`LeaveTime`](#structFRH__ActiveSessionStatePlayerContext_1aaf8b1f18d4879ae9dfd81b1b015429d3) | The time the player left the server.
`public float `[`DurationSeconds`](#structFRH__ActiveSessionStatePlayerContext_1a74f68c02960a1fa413eae8f6bee28f17) | The total time the player has been connected.
`public inline  `[`FRH_ActiveSessionStatePlayerContext`](#structFRH__ActiveSessionStatePlayerContext_1a262b126ed6edc7c0882c51d3783e9ad1)`()` | 

#### Members

#### `public FGuid `[`RHPlayerId`](#structFRH__ActiveSessionStatePlayerContext_1afbdc565f33bd535631bfbc9c2b20c088) <a id="structFRH__ActiveSessionStatePlayerContext_1afbdc565f33bd535631bfbc9c2b20c088"></a>

The player id for the context.

<br>
#### `public TWeakObjectPtr< AController > `[`Controller`](#structFRH__ActiveSessionStatePlayerContext_1ae48566fe29a65e5f2ff61d42b27c4556) <a id="structFRH__ActiveSessionStatePlayerContext_1ae48566fe29a65e5f2ff61d42b27c4556"></a>

The controller for the context.

<br>
#### `public FDateTime `[`JoinedTime`](#structFRH__ActiveSessionStatePlayerContext_1a07fb65fb777e549fdc612c996deaae5f) <a id="structFRH__ActiveSessionStatePlayerContext_1a07fb65fb777e549fdc612c996deaae5f"></a>

The time the player joined the server.

<br>
#### `public FDateTime `[`LeaveTime`](#structFRH__ActiveSessionStatePlayerContext_1aaf8b1f18d4879ae9dfd81b1b015429d3) <a id="structFRH__ActiveSessionStatePlayerContext_1aaf8b1f18d4879ae9dfd81b1b015429d3"></a>

The time the player left the server.

<br>
#### `public float `[`DurationSeconds`](#structFRH__ActiveSessionStatePlayerContext_1a74f68c02960a1fa413eae8f6bee28f17) <a id="structFRH__ActiveSessionStatePlayerContext_1a74f68c02960a1fa413eae8f6bee28f17"></a>

The total time the player has been connected.

<br>
#### `public inline  `[`FRH_ActiveSessionStatePlayerContext`](#structFRH__ActiveSessionStatePlayerContext_1a262b126ed6edc7c0882c51d3783e9ad1)`()` <a id="structFRH__ActiveSessionStatePlayerContext_1a262b126ed6edc7c0882c51d3783e9ad1"></a>

<br>
