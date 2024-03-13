---
title: URH_GameInstanceServerBootstrapper Class
---Inherits from [URH_GameInstanceSubsystemPlugin](/unreal-plugins/all/classurh__gameinstancesubsystemplugin/#classURH__GameInstanceSubsystemPlugin)

Inherits from [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface)

Inherits from FTickableGameObject

Server Bootstrapper for the Game Instance.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[ERH_ServerBootstrapMode](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)|[BootstrapMode](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a437398cd4da11b39dbba5624ac0d4503)||
|[ERH_ServerBootstrapFlowStep](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)|[BootstrapStep](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a0c41579ef8e737384ac8e1c82efb8d11)||
|int32|[CurrentRecycleCount](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a95d71262cc53a06cf14abb0e1c5ebd76)||
|FDelegateHandle|[OnOSSLoginCompleteDelegateHandle](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ab1b28fef06ce98a58eaea9c81f7a6615)||
|FAuthContextPtr|[AuthContext](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a31e36a649064c176a0727626265f6ff8)||
|TUniquePtr< IRH_GameHostProviderInterface >|[GameHostProvider](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a1b04f9631853c09086b8f616bf2e14a5)||
|[FRH_BootstrappingResult](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult)|[BootstrappingResult](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a0874c2b9b1ad9a8e9e61e26ac7777d04)||
|TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) >|[Templates](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a9cd2bf3717733651fd52d461e8f11f16)||
|TOptional< FString >|[AllTemplatesETag](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a98d6b5f7f29f0a05d3cfe1064de8e230)||
|[URH_OnlineSession](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession) *|[RHSession](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ad302c0226ce41e487468265ce7ce3808)||
|FString|[DefaultAutoCreateSessionType](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ade098c2efc90a5136ef64520677b72d2)||
|[ERH_ServerBootstrapMode](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)|[DefaultBootstrapMode](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a925b503fbad705f2664c2d36e21fe9cb)||
|int32|[MaxRecycleCount](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a9c0012cfc1a7b0441d76f276d34e654a)||
|bool|[bMultiSessionServerMode](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1afacb0c65022bf850926bc30885a92028)||
|bool|[bReplaceSIGTERMHandler](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a369bde041817982419998ecec1081e4e)||
||[URH_GameInstanceServerBootstrapper](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a3da69fd930b5f05a1c46fac0b93d8cdb)()||
|void|[Initialize](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a432619f05655325816a804827d2628da)()|Initialize the bootstrapper.|
|void|[Deinitialize](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a59eb0bc34504af7e31816b52a7bf8098)()|Deinitialize the bootstrapper.|
|FORCEINLINE [ERH_ServerBootstrapFlowStep](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)|[GetBootstrapStep](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1acf176fcc96de694c32f32ad27ccf57f8)()|Get the current bootstrapping step.|
|FORCEINLINE [ERH_ServerBootstrapMode](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196)|[GetBootstrapMode](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a5633b7f16aac374fb3de4419fbb5d3e1)()|Get the current bootstrapping mode.|
|bool|[DetermineJoinParameters](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a05c84f3ca59681b62a9c23675d3aad3c)(FString & PublicConnStr, FString & PrivateConnStr)|Determines the join parameters to be used for a session that was bootstrapped.|
|void|[OnGameHostProviderStats](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1aac676ff53c8aedc49683c6e81f44b719)(FRH_GameHostProviderStats & Stats)|bound callback triggered to provide stats to the game host provider|
|void|[Tick](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a73c5b13ad645414ddfa9dbab9c09aff0)(float DeltaTime)|Tick function.|
|bool|[IsTickable](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a806c9027d05eece8eed4ebb5ea3838de)()|Whether or not to tick this object.|
|TStatId|[GetStatId](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ace60b33a55d1acdc8c07c42fc6f495e3)()|What stat id to use to report for the tick.|
|FAuthContextPtr|[GetAuthContext](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a55b7b631d0d985ed2b86cfa8ccfb3690)()|Provides the auth context this bootstrapper owns.|
|[URH_OnlineSession](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession) *|[GetSession](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a2ee4a4f52cbb85e077b2ffb2459f2c3e)()|Get the current bootstrapping mode.|
|FAuthContextPtr|[GetSessionAuthContext](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a3c8ddb006bbc3dea378d179e51be5b62)()||
|void|[ImportAPISession](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a374284e48119f0092acb4a0da5634215)(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Session)|Imports a session object from the API into the owner (ex: from polling).|
|void|[ImportAPITemplate](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a9cfc35913bd38f0fd8f090428c6971d4)(const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)|Imports the template into the owner's template list (ex: from polling).|
|void|[ReconcileAPISessions](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a30545d8b52b8fdfe6ebbff321514e929)(const TArray< FString > & SessionIds, const TOptional< FString > & ETag)|Updates the list of sessions to only those that are active.|
|void|[ReconcileAPITemplates](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a3f046c14798943a59bcb268c75e02e6c)(const TArray< FString > & InTemplates, const TOptional< FString > & ETag)|Updates the list of session templates to those that are active.|
|class [URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) *|[GetPlayerInfoSubsystem](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ac1a7eee0c5d62a932aba1d57520fba59)()|Gets the PlayerInfo Subsystem.|
|IOnlineSubsystem *|[GetOSS](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1afdc3030fd174d1a570231dcad8429265)()|Gets the Online Subsystem to use for OSS calls.|
|FUniqueNetIdWrapper|[GetOSSUniqueId](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a935444ab045d0e8647ace5f59b803a72)()|Gets the Online Subsystem Unique Id to use for OSS calls.|
|TOptional< FString >|[GetETagForAllTemplatesPoll](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ac1eaa7cf3cda91a7a1f412dfe5246fa8)()|Gets the etag to use for a "Get all Templates" type query.|
|TOptional< FString >|[GetETagForAllSessionsPoll](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ae10409319fa6d2264e124e65a8c9bf8e)()|Gets the etag to use for a "Get all Sessions" type query.|
|TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * >|[GetAllSessionsForPolling](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ac2f94216aa37e0981cbb72db9e8a9f10)()|Used to get all sessions, primarily for get all sessions polling where etag matches.|
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|[GetSessionById](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1abe0dcf495d31dfbd8876d63feab05ad5)(const FString & SessionId)|Gets a session by its id.|
|bool|[GetTemplate](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a62d69a1d7e7021f03557dff715e6179d)(const FString & Type, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)|Gets a session template by type.|
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *|[GetPlatformSyncerByRHSessionId](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1aec9f89849a3865282935f12646e98255)(const FString & SessionId)|Gets the platform synchronization object using the rally here session id.|
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *|[GetPlatformSyncerByPlatformSessionId](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a2c2d7c9b2b38fca62aba5ba8e642797b)(const FUniqueNetIdRepl & PlatformSessionId)|Gets the platform synchronization object using the platform session id.|
|bool|[GetCommandlineBootstrapModeOverride](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a9ee4a83d99f8e9e71f1e912bcd855e6e)([ERH_ServerBootstrapMode](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196) & mode)||
|FORCEINLINE bool|[IsBootstrapModeEnabled](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a4ccfb417e3abe91a91dca3e662ec3e07)()|static helper to determine if bootstrapping is enabled|
|void|[SetTerminationSignalHandler](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ad31cd7fedb3330eb21dec68a365d15e8)()|Set the SIGTERM(Unix) handlers that allow intercepting the SIGTERM signal to trigger a soft stop.|
|void|[ApplicationTerminationNotify](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a258259f6d6d1540397da45d80e653be1)()|Callback binding for the default engine SIGTERM / CTRL - C(Windows) handlers - these are indicating an IMMEDIATE shutdown - will defer to game thread if needed.|
|void|[HandleAppTerminatedGameThread](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a1ec1c5bb9f2a33ab6046cf66d8b4b152)()|Callback binding for the default engine SIGTERM / CTRL - C(Windows) handlers - these are indicating an IMMEDIATE shutdown - runs in the game thread.|
|void|[BestEffortLeaveSession](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a14524147b04e9d0a6c2e2f4e7e1de9bf)()|Fallback routine that does its best to leave the session we have loaded.|
|void|[UpdateBootstrapStep](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ad3057c819da82f1bd348bbfc8eeb1850)([ERH_ServerBootstrapFlowStep](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36) NewStep)|Updates the current bootstrapping step, and handles step change logic.|
|void|[OnBootstrappingFailed](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a1875bbf2ad7df512f7f1c977a6dfe161)()|Bootstrapping Flow [Failed] - trigger bootstrapping failure and handles failure logic.|
|void|[OnBootstrappingComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a2882f79445b73579a19dbb92e8b859df)()|Bootstrapping Flow [Complete] - trigger bootstrapping complete and handles completion logic. Note that recycling may start a new bootstrapping flow.|
|void|[BeginServerLogin](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a924d64924d1e13251752ae00763ea765)()|Bootstrapping Flow [LoggingIn] - begin the login process to the RallyHere API.|
|void|[BeginOSSLogin](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a596197bb7c3249d78c7f25cb7a45dee3)()|Bootstrapping Flow [LoggingIn] - begin platform OSS login to generate login credentials.|
|void|[BeginNullLogin](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1abe2daf2fda783a6322a4baafc3f4ce0e)()|Bootstrapping Flow [LoggingIn] - begin platform OSS login to generate login credentials.|
|void|[OnOSSLoginComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1afa72878c5edec64e1228cb302676a2a0)(int32 ControllerId, bool bSuccessful, const FUniqueNetId & UniqueId, const FString & ErrorMessage)|Bootstrapping Flow [LoggingIn] - completion callback for platform OSS login with credentials to use.|
|void|[RetrieveOSSAuthTokenComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a86498208233cbf6c51ef72ff0043410a)(int32 LocalUserNum, bool bWasSuccessful, const FExternalAuthToken & AuthTokenWrapper)|Start the login to Rally Here.|
|void|[OnServerLoginComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1aa3753ed4ef198142046a76016193062e)(bool bSuccess, const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & ErrorInfo)|Bootstrapping Flow [Login] - completion callback for RallyHere API login.|
|void|[Recycle](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a4899aaa6b044107233cb45e8695c3029)()|Bootstrapping Flow [Recycle] - start a new recycle loop.|
|void|[BeginRegistration](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1aa99989cd2184a498b1de613e4eeee199)()|Bootstrapping Flow [Registration][Allocation][AutoCreate] - start the process of registering with the game host provider.|
|void|[BeginConnecting](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ade01521ed7529ea5d6675439de5eec36)()|Bootstrapping Flow [Registration][Allocation][AutoCreate] - begin connecting to the provider.|
|void|[OnConnectComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1aea5e88f66215aaf38150c730b957a3de)(bool bSuccess)|Bootstrapping Flow [Registration][Allocation][AutoCreate] - completion callback for connecting to the provider.|
|void|[BeginRegister](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a39fcb4bf8f58a9de010aa99ec23a7b4d)()|Bootstrapping Flow [Registration][Allocation] - register with provider and wait for an allocation.|
|void|[OnRegisterComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1ac7200145aca8c04b0fc8d036d32fc0ea)(bool bSucess)|Bootstrapping Flow [Registration][Allocation] - completion callback for registering with the provider.|
|void|[OnAllocationComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a175d8c93883c53869093cc3ec7c431fd)(ERH_AllocationStatus Status, const FRH_GameHostAllocationInfo & AllocationInfo)|Bootstrapping Flow [Registration][Allocation] - completion callback for allocation being ready.|
|void|[BeginReservation](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1aec6f4c87f39a37cbdcd605d6449fcd13)()|Bootstrapping Flow [Registration][AutoCreate] - begin a reservation so that the provider can know about this server.|
|void|[OnReservationComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a490388b65fb63bd0536a4cc264455e53)(bool bSuccess)|Bootstrapping Flow [Registration][AutoCreate] - completion callback for reservation creation.|
|void|[BeginSelfAllocate](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a2754313adb76f07d1a0d57d7ff94353b)()|Bootstrapping Flow [Registration][AutoCreate] - inform the provider that this server is self-allocated.|
|void|[OnSelfAllocateComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a141d3bcd49aa8079af7852e5a09f9985)(bool bSuccess)|Bootstrapping Flow [Registration][AutoCreate] - completion callback for self allocation.|
|void|[OnRegistrationFinalizerComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1af5393fb9a958e0dd9d2a9d90e82cde47)(bool bSuccess, const [FRH_BootstrappingResult](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult) & Result)|Bootstrapping Flow [WaitingForSession] - callback for when registration process has completed and produced a bootstrapping result. Checks the result and then checks for an instance. Either creates and instance, or forwards on to OnSessionInstanceCreationCompleted()|
|void|[OnSessionInstanceCreationCompleted](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a664cad446221aca95b830ddab2eadd3f)(bool bSuccess, [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * CreatedRHSession, const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & ErrorInfo)|Bootstrapping Flow [WaitingForSession] - callback for when registration process has completed and produced a bootstrapping result.|
|void|[SyncToSession](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a916ef7edd3eae169e87ac544ea2088c6)()|Bootstrapping Flow [SyncingToSession] - begin the process of synchronizing the session state into RH_GameInstanceSessionSubsystem.|
|void|[OnSyncToSessionComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a70667eca088ae8b5873b4f02281c7a94)([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, bool bSuccess, const FString & Error)|Bootstrapping Flow [SyncingToSession] - completiong callback for session sync.|
|void|[OnSessionUpdated](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a91273ca69e8e885b6b96f4fb594d3318)([URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * Session)|Notification callback that the session we have synced to was updated.|
|void|[OnSessionNotFound](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a98ef077ce4a34510a6ee988549acd753)([URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * Session)|Notification callback that the session we have synced to was not found.|
|void|[CleanupAfterInstanceRemoval](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a9aab21c5a300e982d5216e04acdbf6f4)()|Utility function to clean up state after an instance removal and attempt to recycle.|
|void|[OnCleanupSessionSyncComplete](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a38bf567f475e12b06eb5a16883165bb6)([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, bool bSuccess, const FString & Error)|Completion callback for session and instance cleanup.|
|bool|[ShouldRecycleAfterCleanup](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper_1a3841facd4998b2ceb4e4f48354c2f665)()|Gets whether we should recycle the state after cleanup.|
## Protected Attributes



### `BootstrapMode` <a id="classURH__GameInstanceServerBootstrapper_1a437398cd4da11b39dbba5624ac0d4503"></a>

`ERH_ServerBootstrapMode URH_GameInstanceServerBootstrapper::BootstrapMode`



Bootstrap Mode being used 



### `BootstrapStep` <a id="classURH__GameInstanceServerBootstrapper_1a0c41579ef8e737384ac8e1c82efb8d11"></a>

`ERH_ServerBootstrapFlowStep URH_GameInstanceServerBootstrapper::BootstrapStep`



Current Bootstrap Step 



### `CurrentRecycleCount` <a id="classURH__GameInstanceServerBootstrapper_1a95d71262cc53a06cf14abb0e1c5ebd76"></a>

`int32 URH_GameInstanceServerBootstrapper::CurrentRecycleCount`



The current recycle count (note that the initial boot is considered the first recycle, so this is effectively 1-based) 



### `OnOSSLoginCompleteDelegateHandle` <a id="classURH__GameInstanceServerBootstrapper_1ab1b28fef06ce98a58eaea9c81f7a6615"></a>

`FDelegateHandle URH_GameInstanceServerBootstrapper::OnOSSLoginCompleteDelegateHandle`



Delegate handle for the OSS login call 



### `AuthContext` <a id="classURH__GameInstanceServerBootstrapper_1a31e36a649064c176a0727626265f6ff8"></a>

`FAuthContextPtr URH_GameInstanceServerBootstrapper::AuthContext`



The auth context for this bootstrapper 



### `GameHostProvider` <a id="classURH__GameInstanceServerBootstrapper_1a1b04f9631853c09086b8f616bf2e14a5"></a>

`TUniquePtr<IRH_GameHostProviderInterface> URH_GameInstanceServerBootstrapper::GameHostProvider`



The game host provider for this bootstrapper 



### `BootstrappingResult` <a id="classURH__GameInstanceServerBootstrapper_1a0874c2b9b1ad9a8e9e61e26ac7777d04"></a>

`FRH_BootstrappingResult URH_GameInstanceServerBootstrapper::BootstrappingResult`



The current bootstrapping result 



### `Templates` <a id="classURH__GameInstanceServerBootstrapper_1a9cd2bf3717733651fd52d461e8f11f16"></a>

`TMap<FString, FRHAPI_SessionTemplate> URH_GameInstanceServerBootstrapper::Templates`



Session templates to use to iniailize the session 



### `AllTemplatesETag` <a id="classURH__GameInstanceServerBootstrapper_1a98d6b5f7f29f0a05d3cfe1064de8e230"></a>

`TOptional<FString> URH_GameInstanceServerBootstrapper::AllTemplatesETag`



ETag for the template list 



### `RHSession` <a id="classURH__GameInstanceServerBootstrapper_1ad302c0226ce41e487468265ce7ce3808"></a>

`URH_OnlineSession* URH_GameInstanceServerBootstrapper::RHSession`



The current session we are using 



### `DefaultAutoCreateSessionType` <a id="classURH__GameInstanceServerBootstrapper_1ade098c2efc90a5136ef64520677b72d2"></a>

`FString URH_GameInstanceServerBootstrapper::DefaultAutoCreateSessionType`



The default type of session to create when using AutoCreate bootstrapping mode 



### `DefaultBootstrapMode` <a id="classURH__GameInstanceServerBootstrapper_1a925b503fbad705f2664c2d36e21fe9cb"></a>

`ERH_ServerBootstrapMode URH_GameInstanceServerBootstrapper::DefaultBootstrapMode`



The default type of bootstrapping mode (only supports Disabled and LoginOnly, as other session types require commandline injection) 



### `MaxRecycleCount` <a id="classURH__GameInstanceServerBootstrapper_1a9c0012cfc1a7b0441d76f276d34e654a"></a>

`int32 URH_GameInstanceServerBootstrapper::MaxRecycleCount`



The maximum number of times to recycle this bootstrapper (if less than one, implies 1), checked during cleanup 



### `bMultiSessionServerMode` <a id="classURH__GameInstanceServerBootstrapper_1afacb0c65022bf850926bc30885a92028"></a>

`bool URH_GameInstanceServerBootstrapper::bMultiSessionServerMode`



Disables some checks that will cause the process to spin down, for use in cases where multiple game instances are running within a single process 



### `bReplaceSIGTERMHandler` <a id="classURH__GameInstanceServerBootstrapper_1a369bde041817982419998ecec1081e4e"></a>

`bool URH_GameInstanceServerBootstrapper::bReplaceSIGTERMHandler`



Whether to intercept SIGTERM and prevent passing it to engine handler(which will exit immediately) 




## Public Functions



### `URH_GameInstanceServerBootstrapper` <a id="classURH__GameInstanceServerBootstrapper_1a3da69fd930b5f05a1c46fac0b93d8cdb"></a>

 URH_GameInstanceServerBootstrapper()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Initialize` <a id="classURH__GameInstanceServerBootstrapper_1a432619f05655325816a804827d2628da"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the bootstrapper.




### `Deinitialize` <a id="classURH__GameInstanceServerBootstrapper_1a59eb0bc34504af7e31816b52a7bf8098"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Deinitialize the bootstrapper.




### `GetBootstrapStep` <a id="classURH__GameInstanceServerBootstrapper_1acf176fcc96de694c32f32ad27ccf57f8"></a>

FORCEINLINE [ERH_ServerBootstrapFlowStep](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36) GetBootstrapStep()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the current bootstrapping step.




### `GetBootstrapMode` <a id="classURH__GameInstanceServerBootstrapper_1a5633b7f16aac374fb3de4419fbb5d3e1"></a>

FORCEINLINE [ERH_ServerBootstrapMode](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196) GetBootstrapMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the current bootstrapping mode.




### `DetermineJoinParameters` <a id="classURH__GameInstanceServerBootstrapper_1a05c84f3ca59681b62a9c23675d3aad3c"></a>

bool DetermineJoinParameters(FString & PublicConnStr, FString & PrivateConnStr)

#### Parameters

| Type | Name |
|------|------|
|FString &|PublicConnStr|
|FString &|PrivateConnStr|

#### Description

Determines the join parameters to be used for a session that was bootstrapped.


#### Parameters

PublicConnStr
: The public connection string to use 
PrivateConnStr
: The private connection string to use 

#### Returns
Whether or not the join parameters were successfully determined from the allocation info 



### `OnGameHostProviderStats` <a id="classURH__GameInstanceServerBootstrapper_1aac676ff53c8aedc49683c6e81f44b719"></a>

void OnGameHostProviderStats(FRH_GameHostProviderStats & Stats)

#### Parameters

| Type | Name |
|------|------|
|FRH_GameHostProviderStats &|Stats|

#### Description

bound callback triggered to provide stats to the game host provider




### `Tick` <a id="classURH__GameInstanceServerBootstrapper_1a73c5b13ad645414ddfa9dbab9c09aff0"></a>

void Tick(float DeltaTime)

#### Parameters

| Type | Name |
|------|------|
|float|DeltaTime|

#### Description

Tick function.


#### Parameters

DeltaTime
: The time since the last tick 



### `IsTickable` <a id="classURH__GameInstanceServerBootstrapper_1a806c9027d05eece8eed4ebb5ea3838de"></a>

bool IsTickable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Whether or not to tick this object.




### `GetStatId` <a id="classURH__GameInstanceServerBootstrapper_1ace60b33a55d1acdc8c07c42fc6f495e3"></a>

TStatId GetStatId()

#### Parameters

| Type | Name |
|------|------|

#### Description

What stat id to use to report for the tick.




### `GetAuthContext` <a id="classURH__GameInstanceServerBootstrapper_1a55b7b631d0d985ed2b86cfa8ccfb3690"></a>

FAuthContextPtr GetAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description

Provides the auth context this bootstrapper owns.




### `GetSession` <a id="classURH__GameInstanceServerBootstrapper_1a2ee4a4f52cbb85e077b2ffb2459f2c3e"></a>

[URH_OnlineSession](/unreal-plugins/all/classurh__onlinesession/#classURH__OnlineSession) * GetSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the current bootstrapping mode.




### `GetSessionAuthContext` <a id="classURH__GameInstanceServerBootstrapper_1a3c8ddb006bbc3dea378d179e51be5b62"></a>

FAuthContextPtr GetSessionAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description



Gets the auth context to use for API calls for the session owner. 



### `ImportAPISession` <a id="classURH__GameInstanceServerBootstrapper_1a374284e48119f0092acb4a0da5634215"></a>

void ImportAPISession(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Session)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) &|Session|

#### Description

Imports a session object from the API into the owner (ex: from polling).


#### Parameters

Session
: The Session to import. 



### `ImportAPITemplate` <a id="classURH__GameInstanceServerBootstrapper_1a9cfc35913bd38f0fd8f090428c6971d4"></a>

void ImportAPITemplate(const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) &|Template|

#### Description

Imports the template into the owner's template list (ex: from polling).


#### Parameters

TemplateWrapper
: The Template to import. 



### `ReconcileAPISessions` <a id="classURH__GameInstanceServerBootstrapper_1a30545d8b52b8fdfe6ebbff321514e929"></a>

void ReconcileAPISessions(const TArray< FString > & SessionIds, const TOptional< FString > & ETag)

#### Parameters

| Type | Name |
|------|------|
|const TArray< FString > &|SessionIds|
|const TOptional< FString > &|ETag|

#### Description

Updates the list of sessions to only those that are active.


#### Parameters

SessionIds
: The list of sessions that we are reconciling against. 
ETag
: The ETag to use for the update. 



### `ReconcileAPITemplates` <a id="classURH__GameInstanceServerBootstrapper_1a3f046c14798943a59bcb268c75e02e6c"></a>

void ReconcileAPITemplates(const TArray< FString > & InTemplates, const TOptional< FString > & ETag)

#### Parameters

| Type | Name |
|------|------|
|const TArray< FString > &|InTemplates|
|const TOptional< FString > &|ETag|

#### Description

Updates the list of session templates to those that are active.


#### Parameters

InTemplates
: The list of templates that we are reconciling against. 
ETag
: The ETag to use for the update. 



### `GetPlayerInfoSubsystem` <a id="classURH__GameInstanceServerBootstrapper_1ac1a7eee0c5d62a932aba1d57520fba59"></a>

class [URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) * GetPlayerInfoSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the PlayerInfo Subsystem.




### `GetOSS` <a id="classURH__GameInstanceServerBootstrapper_1afdc3030fd174d1a570231dcad8429265"></a>

IOnlineSubsystem * GetOSS()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Online Subsystem to use for OSS calls.




### `GetOSSUniqueId` <a id="classURH__GameInstanceServerBootstrapper_1a935444ab045d0e8647ace5f59b803a72"></a>

FUniqueNetIdWrapper GetOSSUniqueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Online Subsystem Unique Id to use for OSS calls.




### `GetETagForAllTemplatesPoll` <a id="classURH__GameInstanceServerBootstrapper_1ac1eaa7cf3cda91a7a1f412dfe5246fa8"></a>

TOptional< FString > GetETagForAllTemplatesPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the etag to use for a "Get all Templates" type query.




### `GetETagForAllSessionsPoll` <a id="classURH__GameInstanceServerBootstrapper_1ae10409319fa6d2264e124e65a8c9bf8e"></a>

TOptional< FString > GetETagForAllSessionsPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the etag to use for a "Get all Sessions" type query.




### `GetAllSessionsForPolling` <a id="classURH__GameInstanceServerBootstrapper_1ac2f94216aa37e0981cbb72db9e8a9f10"></a>

TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * > GetAllSessionsForPolling()

#### Parameters

| Type | Name |
|------|------|

#### Description

Used to get all sessions, primarily for get all sessions polling where etag matches.




### `GetSessionById` <a id="classURH__GameInstanceServerBootstrapper_1abe0dcf495d31dfbd8876d63feab05ad5"></a>

[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * GetSessionById(const FString & SessionId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|

#### Description

Gets a session by its id.


#### Parameters

SessionId
: The Session Id to get. 

#### Returns
The Session with the given Id. 



### `GetTemplate` <a id="classURH__GameInstanceServerBootstrapper_1a62d69a1d7e7021f03557dff715e6179d"></a>

bool GetTemplate(const FString & Type, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Type|
|[FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) &|Template|

#### Description

Gets a session template by type.


#### Parameters

Type
: the Type of template to get. 
Template
: The session template being retrieved. 

#### Returns
If true, the template was found. 



### `GetPlatformSyncerByRHSessionId` <a id="classURH__GameInstanceServerBootstrapper_1aec9f89849a3865282935f12646e98255"></a>

[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * GetPlatformSyncerByRHSessionId(const FString & SessionId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|

#### Description

Gets the platform synchronization object using the rally here session id.




### `GetPlatformSyncerByPlatformSessionId` <a id="classURH__GameInstanceServerBootstrapper_1a2c2d7c9b2b38fca62aba5ba8e642797b"></a>

[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * GetPlatformSyncerByPlatformSessionId(const FUniqueNetIdRepl & PlatformSessionId)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetIdRepl &|PlatformSessionId|

#### Description

Gets the platform synchronization object using the platform session id.





## Public Static Functions



### `GetCommandlineBootstrapModeOverride` <a id="classURH__GameInstanceServerBootstrapper_1a9ee4a83d99f8e9e71f1e912bcd855e6e"></a>

bool GetCommandlineBootstrapModeOverride([ERH_ServerBootstrapMode](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196) & mode)

#### Parameters

| Type | Name |
|------|------|
|[ERH_ServerBootstrapMode](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga9dd612a2285258b977ec4c21d7a64196) &|mode|

#### Description






### `IsBootstrapModeEnabled` <a id="classURH__GameInstanceServerBootstrapper_1a4ccfb417e3abe91a91dca3e662ec3e07"></a>

FORCEINLINE bool IsBootstrapModeEnabled()

#### Parameters

| Type | Name |
|------|------|

#### Description

static helper to determine if bootstrapping is enabled





## Protected Static Functions



### `SetTerminationSignalHandler` <a id="classURH__GameInstanceServerBootstrapper_1ad31cd7fedb3330eb21dec68a365d15e8"></a>

void SetTerminationSignalHandler()

#### Parameters

| Type | Name |
|------|------|

#### Description

Set the SIGTERM(Unix) handlers that allow intercepting the SIGTERM signal to trigger a soft stop.





## Protected Functions



### `ApplicationTerminationNotify` <a id="classURH__GameInstanceServerBootstrapper_1a258259f6d6d1540397da45d80e653be1"></a>

void ApplicationTerminationNotify()

#### Parameters

| Type | Name |
|------|------|

#### Description

Callback binding for the default engine SIGTERM / CTRL - C(Windows) handlers - these are indicating an IMMEDIATE shutdown - will defer to game thread if needed.




### `HandleAppTerminatedGameThread` <a id="classURH__GameInstanceServerBootstrapper_1a1ec1c5bb9f2a33ab6046cf66d8b4b152"></a>

void HandleAppTerminatedGameThread()

#### Parameters

| Type | Name |
|------|------|

#### Description

Callback binding for the default engine SIGTERM / CTRL - C(Windows) handlers - these are indicating an IMMEDIATE shutdown - runs in the game thread.




### `BestEffortLeaveSession` <a id="classURH__GameInstanceServerBootstrapper_1a14524147b04e9d0a6c2e2f4e7e1de9bf"></a>

void BestEffortLeaveSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Fallback routine that does its best to leave the session we have loaded.




### `UpdateBootstrapStep` <a id="classURH__GameInstanceServerBootstrapper_1ad3057c819da82f1bd348bbfc8eeb1850"></a>

void UpdateBootstrapStep([ERH_ServerBootstrapFlowStep](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36) NewStep)

#### Parameters

| Type | Name |
|------|------|
|[ERH_ServerBootstrapFlowStep](/unreal-plugins/all/rh__gameinstancebootstrappers_8h/#group__GameInstance_1ga70ec3ebac3b063bae8ad728c7cdd4d36)|NewStep|

#### Description

Updates the current bootstrapping step, and handles step change logic.


#### Parameters

NewStep
: The new step to transition to 



### `OnBootstrappingFailed` <a id="classURH__GameInstanceServerBootstrapper_1a1875bbf2ad7df512f7f1c977a6dfe161"></a>

void OnBootstrappingFailed()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [Failed] - trigger bootstrapping failure and handles failure logic.




### `OnBootstrappingComplete` <a id="classURH__GameInstanceServerBootstrapper_1a2882f79445b73579a19dbb92e8b859df"></a>

void OnBootstrappingComplete()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [Complete] - trigger bootstrapping complete and handles completion logic. Note that recycling may start a new bootstrapping flow.




### `BeginServerLogin` <a id="classURH__GameInstanceServerBootstrapper_1a924d64924d1e13251752ae00763ea765"></a>

void BeginServerLogin()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [LoggingIn] - begin the login process to the RallyHere API.




### `BeginOSSLogin` <a id="classURH__GameInstanceServerBootstrapper_1a596197bb7c3249d78c7f25cb7a45dee3"></a>

void BeginOSSLogin()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [LoggingIn] - begin platform OSS login to generate login credentials.




### `BeginNullLogin` <a id="classURH__GameInstanceServerBootstrapper_1abe2daf2fda783a6322a4baafc3f4ce0e"></a>

void BeginNullLogin()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [LoggingIn] - begin platform OSS login to generate login credentials.




### `OnOSSLoginComplete` <a id="classURH__GameInstanceServerBootstrapper_1afa72878c5edec64e1228cb302676a2a0"></a>

void OnOSSLoginComplete(int32 ControllerId, bool bSuccessful, const FUniqueNetId & UniqueId, const FString & ErrorMessage)

#### Parameters

| Type | Name |
|------|------|
|int32|ControllerId|
|bool|bSuccessful|
|const FUniqueNetId &|UniqueId|
|const FString &|ErrorMessage|

#### Description

Bootstrapping Flow [LoggingIn] - completion callback for platform OSS login with credentials to use.


#### Parameters

ControllerId
: The controller id that was used to login 
bSuccessful
: Whether or not the login was successful 
UniqueId
: The unique id of the user that logged in 
ErrorMessage
: The error message if the login failed 



### `RetrieveOSSAuthTokenComplete` <a id="classURH__GameInstanceServerBootstrapper_1a86498208233cbf6c51ef72ff0043410a"></a>

void RetrieveOSSAuthTokenComplete(int32 LocalUserNum, bool bWasSuccessful, const FExternalAuthToken & AuthTokenWrapper)

#### Parameters

| Type | Name |
|------|------|
|int32|LocalUserNum|
|bool|bWasSuccessful|
|const FExternalAuthToken &|AuthTokenWrapper|

#### Description

Start the login to Rally Here.


#### Parameters

LocalUserNum
: Local user number of the player logging in. 
bWasSuccessful
: Was the retrieval successful. 
AuthTokenWrapper
: The auth token wrapper. 



### `OnServerLoginComplete` <a id="classURH__GameInstanceServerBootstrapper_1aa3753ed4ef198142046a76016193062e"></a>

void OnServerLoginComplete(bool bSuccess, const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & ErrorInfo)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &|ErrorInfo|

#### Description

Bootstrapping Flow [Login] - completion callback for RallyHere API login.


#### Parameters

bSuccess
: Whether or not the login was successful 



### `Recycle` <a id="classURH__GameInstanceServerBootstrapper_1a4899aaa6b044107233cb45e8695c3029"></a>

void Recycle()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [Recycle] - start a new recycle loop.




### `BeginRegistration` <a id="classURH__GameInstanceServerBootstrapper_1aa99989cd2184a498b1de613e4eeee199"></a>

void BeginRegistration()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [Registration][Allocation][AutoCreate] - start the process of registering with the game host provider.




### `BeginConnecting` <a id="classURH__GameInstanceServerBootstrapper_1ade01521ed7529ea5d6675439de5eec36"></a>

void BeginConnecting()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [Registration][Allocation][AutoCreate] - begin connecting to the provider.




### `OnConnectComplete` <a id="classURH__GameInstanceServerBootstrapper_1aea5e88f66215aaf38150c730b957a3de"></a>

void OnConnectComplete(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Bootstrapping Flow [Registration][Allocation][AutoCreate] - completion callback for connecting to the provider.


#### Parameters

bSuccess
: Whether or not the connection was successful 



### `BeginRegister` <a id="classURH__GameInstanceServerBootstrapper_1a39fcb4bf8f58a9de010aa99ec23a7b4d"></a>

void BeginRegister()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [Registration][Allocation] - register with provider and wait for an allocation.




### `OnRegisterComplete` <a id="classURH__GameInstanceServerBootstrapper_1ac7200145aca8c04b0fc8d036d32fc0ea"></a>

void OnRegisterComplete(bool bSucess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSucess|

#### Description

Bootstrapping Flow [Registration][Allocation] - completion callback for registering with the provider.


#### Parameters

bSuccess
: Whether or not the connection was successful 



### `OnAllocationComplete` <a id="classURH__GameInstanceServerBootstrapper_1a175d8c93883c53869093cc3ec7c431fd"></a>

void OnAllocationComplete(ERH_AllocationStatus Status, const FRH_GameHostAllocationInfo & AllocationInfo)

#### Parameters

| Type | Name |
|------|------|
|ERH_AllocationStatus|Status|
|const FRH_GameHostAllocationInfo &|AllocationInfo|

#### Description

Bootstrapping Flow [Registration][Allocation] - completion callback for allocation being ready.


#### Parameters

Status
: Whether or not the allocation was successful or had an error 
AllocationInfo
: The allocation info that was produced 



### `BeginReservation` <a id="classURH__GameInstanceServerBootstrapper_1aec6f4c87f39a37cbdcd605d6449fcd13"></a>

void BeginReservation()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [Registration][AutoCreate] - begin a reservation so that the provider can know about this server.




### `OnReservationComplete` <a id="classURH__GameInstanceServerBootstrapper_1a490388b65fb63bd0536a4cc264455e53"></a>

void OnReservationComplete(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Bootstrapping Flow [Registration][AutoCreate] - completion callback for reservation creation.


#### Parameters

bSuccess
: Whether or not the reservation was successful 



### `BeginSelfAllocate` <a id="classURH__GameInstanceServerBootstrapper_1a2754313adb76f07d1a0d57d7ff94353b"></a>

void BeginSelfAllocate()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [Registration][AutoCreate] - inform the provider that this server is self-allocated.




### `OnSelfAllocateComplete` <a id="classURH__GameInstanceServerBootstrapper_1a141d3bcd49aa8079af7852e5a09f9985"></a>

void OnSelfAllocateComplete(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Bootstrapping Flow [Registration][AutoCreate] - completion callback for self allocation.


#### Parameters

bSuccess
: Whether or not the self allocation was successful 



### `OnRegistrationFinalizerComplete` <a id="classURH__GameInstanceServerBootstrapper_1af5393fb9a958e0dd9d2a9d90e82cde47"></a>

void OnRegistrationFinalizerComplete(bool bSuccess, const [FRH_BootstrappingResult](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult) & Result)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|
|const [FRH_BootstrappingResult](/unreal-plugins/all/structfrh__bootstrappingresult/#structFRH__BootstrappingResult) &|Result|

#### Description

Bootstrapping Flow [WaitingForSession] - callback for when registration process has completed and produced a bootstrapping result. Checks the result and then checks for an instance. Either creates and instance, or forwards on to OnSessionInstanceCreationCompleted()


#### Parameters

bSuccess
: Whether or not the registration was successful 
Result
: The bootstrapping result that was produced 



### `OnSessionInstanceCreationCompleted` <a id="classURH__GameInstanceServerBootstrapper_1a664cad446221aca95b830ddab2eadd3f"></a>

void OnSessionInstanceCreationCompleted(bool bSuccess, [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * CreatedRHSession, const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & ErrorInfo)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|CreatedRHSession|
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &|ErrorInfo|

#### Description

Bootstrapping Flow [WaitingForSession] - callback for when registration process has completed and produced a bootstrapping result.


#### Parameters

bSuccess
: Whether or not the instance was successfully created 
CreatedRHSession
: The session that was created with an instance 
ErrorInfo
: Error information about the instance creation 



### `SyncToSession` <a id="classURH__GameInstanceServerBootstrapper_1a916ef7edd3eae169e87ac544ea2088c6"></a>

void SyncToSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Bootstrapping Flow [SyncingToSession] - begin the process of synchronizing the session state into RH_GameInstanceSessionSubsystem.




### `OnSyncToSessionComplete` <a id="classURH__GameInstanceServerBootstrapper_1a70667eca088ae8b5873b4f02281c7a94"></a>

void OnSyncToSessionComplete([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, bool bSuccess, const FString & Error)

#### Parameters

| Type | Name |
|------|------|
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|Session|
|bool|bSuccess|
|const FString &|Error|

#### Description

Bootstrapping Flow [SyncingToSession] - completiong callback for session sync.


#### Parameters

bSuccess
: Whether or not the session sync was successful 



### `OnSessionUpdated` <a id="classURH__GameInstanceServerBootstrapper_1a91273ca69e8e885b6b96f4fb594d3318"></a>

void OnSessionUpdated([URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * Session)

#### Parameters

| Type | Name |
|------|------|
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|Session|

#### Description

Notification callback that the session we have synced to was updated.


#### Parameters

Session
: The updated session 



### `OnSessionNotFound` <a id="classURH__GameInstanceServerBootstrapper_1a98ef077ce4a34510a6ee988549acd753"></a>

void OnSessionNotFound([URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * Session)

#### Parameters

| Type | Name |
|------|------|
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|Session|

#### Description

Notification callback that the session we have synced to was not found.


#### Parameters

Session
: The session that was not found 



### `CleanupAfterInstanceRemoval` <a id="classURH__GameInstanceServerBootstrapper_1a9aab21c5a300e982d5216e04acdbf6f4"></a>

void CleanupAfterInstanceRemoval()

#### Parameters

| Type | Name |
|------|------|

#### Description

Utility function to clean up state after an instance removal and attempt to recycle.




### `OnCleanupSessionSyncComplete` <a id="classURH__GameInstanceServerBootstrapper_1a38bf567f475e12b06eb5a16883165bb6"></a>

void OnCleanupSessionSyncComplete([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session, bool bSuccess, const FString & Error)

#### Parameters

| Type | Name |
|------|------|
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|Session|
|bool|bSuccess|
|const FString &|Error|

#### Description

Completion callback for session and instance cleanup.




### `ShouldRecycleAfterCleanup` <a id="classURH__GameInstanceServerBootstrapper_1a3841facd4998b2ceb4e4f48354c2f665"></a>

bool ShouldRecycleAfterCleanup()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets whether we should recycle the state after cleanup.





