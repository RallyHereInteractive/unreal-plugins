---
title: URH_GameInstanceSubsystem Class
---Inherits from UGameInstanceSubsystem

Subsystem for the Game Instance.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FAuthContextPtr|[AuthContext](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a8836a0620d1de84cc1383f20b38ab775)|Auth context used by the Game Instance Subsystem.|
|TArray< [URH_GameInstanceSubsystemPlugin](/unreal-plugins/all/classurh__gameinstancesubsystemplugin/#classURH__GameInstanceSubsystemPlugin) * >|[SubsystemPlugins](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a6204638edcade74afc54e77e367b6078)|Array of plugins for the Game Instance Subsystem.|
|[URH_GameInstanceSessionSubsystem](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem) *|[SessionSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a136c6176cf760f3fc26194ea1a5a8ba2)|The Session Subsystem.|
|[URH_SessionBrowserCache](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache) *|[SessionSearchCache](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a2fa61113c03eff1731c6b0133826d745)|The Cache for seasion seaches.|
|[URH_MatchmakingBrowserCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache) *|[MatchmakingCache](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a7fa7ded8ee351d55a3b5d761055465d5)|The Cache to matchmaking.|
|[URH_GameInstanceServerBootstrapper](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper) *|[ServerBootstrapper](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1ad4abb48c852993789a049076c5ff18bf)|The Game Instance Server Boostrapper.|
|[URH_GameInstanceClientBootstrapper](/unreal-plugins/all/classurh__gameinstanceclientbootstrapper/#classURH__GameInstanceClientBootstrapper) *|[ClientBootstrapper](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1aed322e2d7c1ae98e3f77d0a40e526e3a)|The Game Instance Client Boostrapper.|
|[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) *|[PlayerInfoSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1af077fda546ea4dbc9d4142e233d402c0)|The Player Info Subsystem.|
|[URH_CatalogSubsystem](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem) *|[CatalogSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a101dc200558351e0e846d90341e89f87)|The Catalog Subsystem.|
|[URH_ConfigSubsystem](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem) *|[ConfigSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1abe30d81653383a1aaf1a454ee67b27ce)|The Config Subsystem.|
|[URH_SettingsSubsystem](/unreal-plugins/all/classurh__settingssubsystem/#classURH__SettingsSubsystem) *|[SettingsSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a0faf95129232d8f19571e9ebdc7b13e1)|The Settings Subsystem.|
|bool|[bEnabled](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1aec940d2a189827f2ffea8b8248f9be12)|If the Game Instance Subsystem is enabled.|
|bool|[bEnableSessionBrowser](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a05992b3ee9dc7cc018f9f424069c4748)|If the Session Browser is enabled.|
|bool|[bEnableMatchmakingBrowser](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a65744cd5c8afb2596503251f63a7cf0f)|If the Matchmaking Browser is enabled.|
|bool|[bEnableGameSessions](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a2dab4109584cbf2a44f01cb1e488f505)|If the Game Sessions are enabled.|
|bool|[bEnableServerBootstrapper](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a2722842f55f1c5b68bacb822d7c64cb1)|If the Game Instance Server Bootstrapper is enabled.|
|bool|[bEnableClientBootstrapper](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1aca95d824ef892413cfaf6a88bf4aef33)|If the Game Instance Client Bootstrapper is enabled.|
|bool|[bUseSecurityTokenForJoining](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1ae1d6a9deec9d3d89eb3dfc6ed0930f5e)|If set, the connection attempt must have a valid security token to be allowed to connect.|
|bool|[bRequireImportedPlayerIdsForJoining](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1acbbf4a90c60528d318fda665064921c6)|If set, the Player Id must have been imported to the instance before being allowed to connect.|
|bool|[bRequireValidPlayerIdsForJoining](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1ab49cc70d224fae0acb852ff59106a2c6)|If set, the Player Id must be valid before being allowed to connect.|
|FDelegateHandle|[AppSuspendHandle](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1aa857f94bf7af4f8f17b8722fced93988)||
|FDelegateHandle|[AppResumeHandle](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a0a906b36cb8c1bcc41437fb2ca3b910d)||
|FDelegateHandle|[AppDeactivatedHandle](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a3c59563b96f0f54b725f3f8f7e10dab1)||
|FDelegateHandle|[AppReactivatedHandle](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1ab4f5efb79ffbc6fccc37dbc935332bbe)||
|bool|[ShouldCreateSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a2ba6a69eebee296a02c76c671db613a4)(UObject * Outer)|Gets if the subsystem is enabled and should be created.|
|void|[Initialize](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a5abfaebdaf723b4b00a562d797351d6e)(FSubsystemCollectionBase & Collection)|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1aae4a94b12bffd66d4d189992104d5694)()|Safely tears down the subsystem.|
|void|[SetAuthContext](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a4a87e0b22af83c1e92b55b9982ef0339)(FAuthContextPtr InAuthContext)|Sets the Auth Context for the subsystem.|
|FAuthContextPtr|[GetAuthContext](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a3cb8fbd18f2eff771a140fe266a5f4b2)()|Gets the subsystems designated auth context.|
|[URH_GameInstanceSessionSubsystem](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem) *|[GetSessionSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1acab54311f541b73a796815cb8333e227)()|Gets the session subsystem on the instance.|
|[URH_SessionBrowserCache](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache) *|[GetSessionSearchCache](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1af167d4cc8a173881dc30b7fa64ad7e2b)()|Gets the session search cache on the instance.|
|[URH_MatchmakingBrowserCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache) *|[GetMatchmakingCache](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1acfb5f63d8414c51c0c4b39fb5b6bf4fe)()|Gets the matchmaking cache on the instance.|
|[URH_GameInstanceServerBootstrapper](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper) *|[GetServerBootstrapper](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a27e99e7893908c6d9cc6127e962357ad)()|Gets the server bootstrapper on the instance.|
|[URH_GameInstanceClientBootstrapper](/unreal-plugins/all/classurh__gameinstanceclientbootstrapper/#classURH__GameInstanceClientBootstrapper) *|[GetClientBootstrapper](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a9351e98f3758b7bd2d9278342d2c8bfe)()|Gets the client boostrapper on the instance.|
|[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) *|[GetPlayerInfoSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1ad981a6b49e1b6717d8392edac8a7c49d)()|Gets the player info subsystem on the instance.|
|[URH_CatalogSubsystem](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem) *|[GetCatalogSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a5939c3dddeefe5d5928307522526845a)()|Gets the catalog subsystem on the instance.|
|[URH_ConfigSubsystem](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem) *|[GetConfigSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a7d68319809db5ea58fc8cd87eeeca7a7)()|Gets the config subsystem on the instance.|
|[URH_SettingsSubsystem](/unreal-plugins/all/classurh__settingssubsystem/#classURH__SettingsSubsystem) *|[GetSettingsSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1afafed40a588921b712548ce5071bf4cb)()|Gets the settings subsystem on the instance.|
|void|[GameModePreloginEvent](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a50b207a41e2a81673e201387c5ede103)(class AGameModeBase * GameMode, const FUniqueNetIdRepl & NewPlayer, FString & ErrorMessage)|Handles verification and validation of a player attempting to connect to the instance.|
|bool|[ValidateIncomingConnection](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a5d28941dd50473ed14ccee407715ef0f)(class UNetConnection * Connection, FString & ErrorMessage)||
|void|[CustomEndpoint](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a1a8dcae5a5642315c8ba20f07aebd162)(const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) & Request, const RallyHereAPI::FDelegate_CustomEndpointSend & Delegate)|Custom Endpoint wrapper (for custom endpoints that require authentication)|
|void|[CustomEndpoint](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1aeb1056507af99208ee7397e1b0d23112)(const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) & Request, const FRH_CustomEndpointDelegateBlock & Delegate)|Custom Endpoint wrapper (for custom endpoints that require authentication)|
|void|[BLUEPRINT_CustomEndpoint](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a42e7af944e181795ad0a71169e588e92)(const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) & Request, const FRH_CustomEndpointDynamicDelegate & Delegate)|Custom Endpoint wrapper (for custom endpoints that require authentication)|
|FORCEINLINE bool|[DEFAULT_IsServerBootstrappingEnabled](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a624c4745a5c86971edd6424630ae541e)()|Gets if server boostrapping is enabled, by inspecting state of default object before game instance is initialized, once it is initialized use the above.|
|FORCEINLINE bool|[DEFAULT_IsClientBootstrappingEnabled](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a456c0193ec0f49c9a9abb99f8c3993db)()|Gets if client boostrapping is enabled, by inspecting state of default object before game instance is initialized, once it is initialized use the above.|
|UClassToUse *|[AddSubsystemPlugin](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a3b7e4d48f4487b7a53562eba2cd14e21)(const FSoftClassPath & SubsystemClassPath)|Adds a plugin to the Game Instance Subsystem.|
|void|[AppSuspendCallbackInGameThread](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a7ed49aacbd0e42e5bc4010dbd0ff2888)()|Handle application going into suspension (these involve the application losing focus).|
|void|[AppResumeCallbackInGameThread](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1afa9adfbf1b12fd3d37e91ea99d4f81fe)()|Handle application resuming from suspension (these involve the application losing focus).|
|void|[AppDeactivatedCallbackInGameThread](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1ad3d5d9832895928a55823981b222a746)()|Handle application deactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).|
|void|[AppReactivatedCallbackInGameThread](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1ae3d080074efa0bfdb7633ad71da2c3d7)()|Handle application reactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).|
|void|[AppSuspendCallback](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a256148774ee4903896c6361329cbb4da)()|Handle application going into suspension (these involve the application losing focus).|
|void|[AppResumeCallback](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a61d27390ca63da312083769375e0aa52)()|Handle application resuming from suspension (these involve the application losing focus).|
|void|[AppDeactivatedCallback](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1a22a45322d05a0d9f4ae24818a8aa62e2)()|Handle application deactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).|
|void|[AppReactivatedCallback](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem_1abc7d45c261029dc9fc7235fdc7739df1)()|Handle application reactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).|
## Protected Attributes



### `AuthContext` <a id="classURH__GameInstanceSubsystem_1a8836a0620d1de84cc1383f20b38ab775"></a>

`FAuthContextPtr URH_GameInstanceSubsystem::AuthContext`

Auth context used by the Game Instance Subsystem.




### `SubsystemPlugins` <a id="classURH__GameInstanceSubsystem_1a6204638edcade74afc54e77e367b6078"></a>

`TArray<URH_GameInstanceSubsystemPlugin*> URH_GameInstanceSubsystem::SubsystemPlugins`

Array of plugins for the Game Instance Subsystem.




### `SessionSubsystem` <a id="classURH__GameInstanceSubsystem_1a136c6176cf760f3fc26194ea1a5a8ba2"></a>

`URH_GameInstanceSessionSubsystem* URH_GameInstanceSubsystem::SessionSubsystem`

The Session Subsystem.




### `SessionSearchCache` <a id="classURH__GameInstanceSubsystem_1a2fa61113c03eff1731c6b0133826d745"></a>

`URH_SessionBrowserCache* URH_GameInstanceSubsystem::SessionSearchCache`

The Cache for seasion seaches.




### `MatchmakingCache` <a id="classURH__GameInstanceSubsystem_1a7fa7ded8ee351d55a3b5d761055465d5"></a>

`URH_MatchmakingBrowserCache* URH_GameInstanceSubsystem::MatchmakingCache`

The Cache to matchmaking.




### `ServerBootstrapper` <a id="classURH__GameInstanceSubsystem_1ad4abb48c852993789a049076c5ff18bf"></a>

`URH_GameInstanceServerBootstrapper* URH_GameInstanceSubsystem::ServerBootstrapper`

The Game Instance Server Boostrapper.




### `ClientBootstrapper` <a id="classURH__GameInstanceSubsystem_1aed322e2d7c1ae98e3f77d0a40e526e3a"></a>

`URH_GameInstanceClientBootstrapper* URH_GameInstanceSubsystem::ClientBootstrapper`

The Game Instance Client Boostrapper.




### `PlayerInfoSubsystem` <a id="classURH__GameInstanceSubsystem_1af077fda546ea4dbc9d4142e233d402c0"></a>

`URH_PlayerInfoSubsystem* URH_GameInstanceSubsystem::PlayerInfoSubsystem`

The Player Info Subsystem.




### `CatalogSubsystem` <a id="classURH__GameInstanceSubsystem_1a101dc200558351e0e846d90341e89f87"></a>

`URH_CatalogSubsystem* URH_GameInstanceSubsystem::CatalogSubsystem`

The Catalog Subsystem.




### `ConfigSubsystem` <a id="classURH__GameInstanceSubsystem_1abe30d81653383a1aaf1a454ee67b27ce"></a>

`URH_ConfigSubsystem* URH_GameInstanceSubsystem::ConfigSubsystem`

The Config Subsystem.




### `SettingsSubsystem` <a id="classURH__GameInstanceSubsystem_1a0faf95129232d8f19571e9ebdc7b13e1"></a>

`URH_SettingsSubsystem* URH_GameInstanceSubsystem::SettingsSubsystem`

The Settings Subsystem.




### `bEnabled` <a id="classURH__GameInstanceSubsystem_1aec940d2a189827f2ffea8b8248f9be12"></a>

`bool URH_GameInstanceSubsystem::bEnabled`

If the Game Instance Subsystem is enabled.




### `bEnableSessionBrowser` <a id="classURH__GameInstanceSubsystem_1a05992b3ee9dc7cc018f9f424069c4748"></a>

`bool URH_GameInstanceSubsystem::bEnableSessionBrowser`

If the Session Browser is enabled.




### `bEnableMatchmakingBrowser` <a id="classURH__GameInstanceSubsystem_1a65744cd5c8afb2596503251f63a7cf0f"></a>

`bool URH_GameInstanceSubsystem::bEnableMatchmakingBrowser`

If the Matchmaking Browser is enabled.




### `bEnableGameSessions` <a id="classURH__GameInstanceSubsystem_1a2dab4109584cbf2a44f01cb1e488f505"></a>

`bool URH_GameInstanceSubsystem::bEnableGameSessions`

If the Game Sessions are enabled.




### `bEnableServerBootstrapper` <a id="classURH__GameInstanceSubsystem_1a2722842f55f1c5b68bacb822d7c64cb1"></a>

`bool URH_GameInstanceSubsystem::bEnableServerBootstrapper`

If the Game Instance Server Bootstrapper is enabled.




### `bEnableClientBootstrapper` <a id="classURH__GameInstanceSubsystem_1aca95d824ef892413cfaf6a88bf4aef33"></a>

`bool URH_GameInstanceSubsystem::bEnableClientBootstrapper`

If the Game Instance Client Bootstrapper is enabled.




### `bUseSecurityTokenForJoining` <a id="classURH__GameInstanceSubsystem_1ae1d6a9deec9d3d89eb3dfc6ed0930f5e"></a>

`bool URH_GameInstanceSubsystem::bUseSecurityTokenForJoining`

If set, the connection attempt must have a valid security token to be allowed to connect.




### `bRequireImportedPlayerIdsForJoining` <a id="classURH__GameInstanceSubsystem_1acbbf4a90c60528d318fda665064921c6"></a>

`bool URH_GameInstanceSubsystem::bRequireImportedPlayerIdsForJoining`

If set, the Player Id must have been imported to the instance before being allowed to connect.




### `bRequireValidPlayerIdsForJoining` <a id="classURH__GameInstanceSubsystem_1ab49cc70d224fae0acb852ff59106a2c6"></a>

`bool URH_GameInstanceSubsystem::bRequireValidPlayerIdsForJoining`

If set, the Player Id must be valid before being allowed to connect.





## Private Attributes



### `AppSuspendHandle` <a id="classURH__GameInstanceSubsystem_1aa857f94bf7af4f8f17b8722fced93988"></a>

`FDelegateHandle URH_GameInstanceSubsystem::AppSuspendHandle`






### `AppResumeHandle` <a id="classURH__GameInstanceSubsystem_1a0a906b36cb8c1bcc41437fb2ca3b910d"></a>

`FDelegateHandle URH_GameInstanceSubsystem::AppResumeHandle`






### `AppDeactivatedHandle` <a id="classURH__GameInstanceSubsystem_1a3c59563b96f0f54b725f3f8f7e10dab1"></a>

`FDelegateHandle URH_GameInstanceSubsystem::AppDeactivatedHandle`






### `AppReactivatedHandle` <a id="classURH__GameInstanceSubsystem_1ab4f5efb79ffbc6fccc37dbc935332bbe"></a>

`FDelegateHandle URH_GameInstanceSubsystem::AppReactivatedHandle`







## Public Functions



### `ShouldCreateSubsystem` <a id="classURH__GameInstanceSubsystem_1a2ba6a69eebee296a02c76c671db613a4"></a>

bool ShouldCreateSubsystem(UObject * Outer)

#### Parameters

| Type | Name |
|------|------|
|UObject *|Outer|

#### Description

Gets if the subsystem is enabled and should be created.




### `Initialize` <a id="classURH__GameInstanceSubsystem_1a5abfaebdaf723b4b00a562d797351d6e"></a>

void Initialize(FSubsystemCollectionBase & Collection)

#### Parameters

| Type | Name |
|------|------|
|FSubsystemCollectionBase &|Collection|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__GameInstanceSubsystem_1aae4a94b12bffd66d4d189992104d5694"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `SetAuthContext` <a id="classURH__GameInstanceSubsystem_1a4a87e0b22af83c1e92b55b9982ef0339"></a>

void SetAuthContext(FAuthContextPtr InAuthContext)

#### Parameters

| Type | Name |
|------|------|
|FAuthContextPtr|InAuthContext|

#### Description

Sets the Auth Context for the subsystem.


#### Parameters

InAuthContext
: The Auth Context to set with. 



### `GetAuthContext` <a id="classURH__GameInstanceSubsystem_1a3cb8fbd18f2eff771a140fe266a5f4b2"></a>

FAuthContextPtr GetAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the subsystems designated auth context.




### `GetSessionSubsystem` <a id="classURH__GameInstanceSubsystem_1acab54311f541b73a796815cb8333e227"></a>

[URH_GameInstanceSessionSubsystem](/unreal-plugins/all/classurh__gameinstancesessionsubsystem/#classURH__GameInstanceSessionSubsystem) * GetSessionSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the session subsystem on the instance.




### `GetSessionSearchCache` <a id="classURH__GameInstanceSubsystem_1af167d4cc8a173881dc30b7fa64ad7e2b"></a>

[URH_SessionBrowserCache](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache) * GetSessionSearchCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the session search cache on the instance.




### `GetMatchmakingCache` <a id="classURH__GameInstanceSubsystem_1acfb5f63d8414c51c0c4b39fb5b6bf4fe"></a>

[URH_MatchmakingBrowserCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache) * GetMatchmakingCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the matchmaking cache on the instance.




### `GetServerBootstrapper` <a id="classURH__GameInstanceSubsystem_1a27e99e7893908c6d9cc6127e962357ad"></a>

[URH_GameInstanceServerBootstrapper](/unreal-plugins/all/classurh__gameinstanceserverbootstrapper/#classURH__GameInstanceServerBootstrapper) * GetServerBootstrapper()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the server bootstrapper on the instance.




### `GetClientBootstrapper` <a id="classURH__GameInstanceSubsystem_1a9351e98f3758b7bd2d9278342d2c8bfe"></a>

[URH_GameInstanceClientBootstrapper](/unreal-plugins/all/classurh__gameinstanceclientbootstrapper/#classURH__GameInstanceClientBootstrapper) * GetClientBootstrapper()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the client boostrapper on the instance.




### `GetPlayerInfoSubsystem` <a id="classURH__GameInstanceSubsystem_1ad981a6b49e1b6717d8392edac8a7c49d"></a>

[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) * GetPlayerInfoSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player info subsystem on the instance.




### `GetCatalogSubsystem` <a id="classURH__GameInstanceSubsystem_1a5939c3dddeefe5d5928307522526845a"></a>

[URH_CatalogSubsystem](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem) * GetCatalogSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the catalog subsystem on the instance.




### `GetConfigSubsystem` <a id="classURH__GameInstanceSubsystem_1a7d68319809db5ea58fc8cd87eeeca7a7"></a>

[URH_ConfigSubsystem](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem) * GetConfigSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the config subsystem on the instance.




### `GetSettingsSubsystem` <a id="classURH__GameInstanceSubsystem_1afafed40a588921b712548ce5071bf4cb"></a>

[URH_SettingsSubsystem](/unreal-plugins/all/classurh__settingssubsystem/#classURH__SettingsSubsystem) * GetSettingsSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the settings subsystem on the instance.




### `GameModePreloginEvent` <a id="classURH__GameInstanceSubsystem_1a50b207a41e2a81673e201387c5ede103"></a>

void GameModePreloginEvent(class AGameModeBase * GameMode, const FUniqueNetIdRepl & NewPlayer, FString & ErrorMessage)

#### Parameters

| Type | Name |
|------|------|
|class AGameModeBase *|GameMode|
|const FUniqueNetIdRepl &|NewPlayer|
|FString &|ErrorMessage|

#### Description

Handles verification and validation of a player attempting to connect to the instance.


#### Parameters

GameMode
: The game mode the instance is running. 
NewPlayer
: The player that is attempting to connect. 
ErrorMessage
: If an Error happens for this player being valid, this will be set to the error message. 



### `ValidateIncomingConnection` <a id="classURH__GameInstanceSubsystem_1a5d28941dd50473ed14ccee407715ef0f"></a>

bool ValidateIncomingConnection(class UNetConnection * Connection, FString & ErrorMessage)

#### Parameters

| Type | Name |
|------|------|
|class UNetConnection *|Connection|
|FString &|ErrorMessage|

#### Description






### `CustomEndpoint` <a id="classURH__GameInstanceSubsystem_1a1a8dcae5a5642315c8ba20f07aebd162"></a>

void CustomEndpoint(const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) & Request, const RallyHereAPI::FDelegate_CustomEndpointSend & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) &|Request|
|const RallyHereAPI::FDelegate_CustomEndpointSend &|Delegate|

#### Description

Custom Endpoint wrapper (for custom endpoints that require authentication)


#### Parameters

None
[FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper): Wrapper struct containing call information 
Delegate
: The delegate to call when the call is complete (contains raw response) 



### `CustomEndpoint` <a id="classURH__GameInstanceSubsystem_1aeb1056507af99208ee7397e1b0d23112"></a>

void CustomEndpoint(const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) & Request, const FRH_CustomEndpointDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) &|Request|
|const FRH_CustomEndpointDelegateBlock &|Delegate|

#### Description

Custom Endpoint wrapper (for custom endpoints that require authentication)


#### Parameters

None
[FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper): Wrapper struct containing call information 
Delegate
: The delegate to call when the call is complete 



### `BLUEPRINT_CustomEndpoint` <a id="classURH__GameInstanceSubsystem_1a42e7af944e181795ad0a71169e588e92"></a>

void BLUEPRINT_CustomEndpoint(const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) & Request, const FRH_CustomEndpointDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) &|Request|
|const FRH_CustomEndpointDynamicDelegate &|Delegate|

#### Description

Custom Endpoint wrapper (for custom endpoints that require authentication)


#### Parameters

None
[FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper): Wrapper struct containing call information 
Delegate
: The delegate to call when the call is complete 




## Public Static Functions



### `DEFAULT_IsServerBootstrappingEnabled` <a id="classURH__GameInstanceSubsystem_1a624c4745a5c86971edd6424630ae541e"></a>

FORCEINLINE bool DEFAULT_IsServerBootstrappingEnabled()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if server boostrapping is enabled, by inspecting state of default object before game instance is initialized, once it is initialized use the above.




### `DEFAULT_IsClientBootstrappingEnabled` <a id="classURH__GameInstanceSubsystem_1a456c0193ec0f49c9a9abb99f8c3993db"></a>

FORCEINLINE bool DEFAULT_IsClientBootstrappingEnabled()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if client boostrapping is enabled, by inspecting state of default object before game instance is initialized, once it is initialized use the above.





## Protected Functions



### `AddSubsystemPlugin` <a id="classURH__GameInstanceSubsystem_1a3b7e4d48f4487b7a53562eba2cd14e21"></a>

UClassToUse * AddSubsystemPlugin(const FSoftClassPath & SubsystemClassPath)

#### Parameters

| Type | Name |
|------|------|
|const FSoftClassPath &|SubsystemClassPath|

#### Description

Adds a plugin to the Game Instance Subsystem.


#### Parameters

SubsystemClassPath
: The class path of the plugin to add. 

#### Returns
The plugin that was added. 



### `AppSuspendCallbackInGameThread` <a id="classURH__GameInstanceSubsystem_1a7ed49aacbd0e42e5bc4010dbd0ff2888"></a>

void AppSuspendCallbackInGameThread()

#### Parameters

| Type | Name |
|------|------|

#### Description

Handle application going into suspension (these involve the application losing focus).




### `AppResumeCallbackInGameThread` <a id="classURH__GameInstanceSubsystem_1afa9adfbf1b12fd3d37e91ea99d4f81fe"></a>

void AppResumeCallbackInGameThread()

#### Parameters

| Type | Name |
|------|------|

#### Description

Handle application resuming from suspension (these involve the application losing focus).




### `AppDeactivatedCallbackInGameThread` <a id="classURH__GameInstanceSubsystem_1ad3d5d9832895928a55823981b222a746"></a>

void AppDeactivatedCallbackInGameThread()

#### Parameters

| Type | Name |
|------|------|

#### Description

Handle application deactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).




### `AppReactivatedCallbackInGameThread` <a id="classURH__GameInstanceSubsystem_1ae3d080074efa0bfdb7633ad71da2c3d7"></a>

void AppReactivatedCallbackInGameThread()

#### Parameters

| Type | Name |
|------|------|

#### Description

Handle application reactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).





## Private Functions



### `AppSuspendCallback` <a id="classURH__GameInstanceSubsystem_1a256148774ee4903896c6361329cbb4da"></a>

void AppSuspendCallback()

#### Parameters

| Type | Name |
|------|------|

#### Description

Handle application going into suspension (these involve the application losing focus).




### `AppResumeCallback` <a id="classURH__GameInstanceSubsystem_1a61d27390ca63da312083769375e0aa52"></a>

void AppResumeCallback()

#### Parameters

| Type | Name |
|------|------|

#### Description

Handle application resuming from suspension (these involve the application losing focus).




### `AppDeactivatedCallback` <a id="classURH__GameInstanceSubsystem_1a22a45322d05a0d9f4ae24818a8aa62e2"></a>

void AppDeactivatedCallback()

#### Parameters

| Type | Name |
|------|------|

#### Description

Handle application deactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).




### `AppReactivatedCallback` <a id="classURH__GameInstanceSubsystem_1abc7d45c261029dc9fc7235fdc7739df1"></a>

void AppReactivatedCallback()

#### Parameters

| Type | Name |
|------|------|

#### Description

Handle application reactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)).





