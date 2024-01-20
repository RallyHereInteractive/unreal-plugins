---
title: URH_LocalPlayerSubsystem Class
---Inherits from ULocalPlayerSubsystem

Subsystem to manage the local player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [URH_LocalPlayerSubsystemPlugin](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin) * >|[SubsystemPlugins](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1aa1e0f18bd03b9082f4dfa3b87e294111)|Array of plugins for the Local Player Subsystem.|
|TArray< [URH_SandboxedSubsystemPlugin](/unreal-plugins/all/classurh__sandboxedsubsystemplugin/#classURH__SandboxedSubsystemPlugin) * >|[SandboxedSubsystemPlugins](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a17f7feb3081a6a9ddd60220806af4101)|Array of plugins for the Local Player Subsystem.|
|[URH_LocalPlayerLoginSubsystem](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem) *|[LoginSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a4c91f163e0d3ce122ff5945e94fbfd42)|The Login Subsystem for the player.|
|[URH_AdSubsystem](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem) *|[AdSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a7828f1874dcd91a147856a6919086273)|The Ad Subsystem for the player.|
|[URH_FriendSubsystem](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem) *|[FriendSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a71f593fae588e9f7afa7733eae6aafac)|The Friend Subsystem for the player.|
|[URH_LocalPlayerSessionSubsystem](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem) *|[SessionSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a86df20cf68d8618951ae19a98c3fb5fd)|The Session Subsystem for the player.|
|[URH_LocalPlayerPresenceSubsystem](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem) *|[PresenceSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a1bc3544d5e09905d1a20b7d83af5087e)|The Presence Subsystem for the player.|
|[URH_PurgeSubsystem](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem) *|[PurgeSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a7e1beadec9fe8b854a37e4518b77c9cc)|The Purge Subsystem for the player.|
|[URH_EntitlementSubsystem](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem) *|[EntitlementSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1abbb158bc2cd5dd965ba03363d64723ba)|The Entitlement Subsystem for the player.|
|[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) *|[SandboxedPlayerInfoSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a2f8620e8c3c50fdfea4ec0c39678b476)|The Sandboxed PlayerInfo Subsystem for the player.|
|TWeakObjectPtr< [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) >|[PlayerInfoCache](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a48fa6f3ba219852b90b6eaa9bf0ec5e4)||
|FAuthContextPtr|[AuthContext](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a7db0fee21f61da0729bba78d7a892430)||
|TSharedPtr< class IAnalyticsProvider >|[AnalyticsProvider](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a9ece424deff5492e8d400a01c3295514)||
|TOptional< FDateTime >|[AnalyticsStartTime](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a4035dec7f2a4568acd091f0058fbf0b3)||
|void|[Initialize](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1aa2c904ac8c9e4e1e89d2f44f56297f19)(FSubsystemCollectionBase & Collection)|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a2eb5553bdd14a18a7496048e4fd8de60)()|Safely tears down the subsystem.|
|bool|[IsLoggedIn](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a3b7ce92eb8ce587f9da1bddd333d83a8)()|Gets if the player is currently logged in.|
|FGuid|[GetPlayerUuid](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1aa4f9ff67952acaac6cff21344e009ab0)()|Gets the player's unique player id.|
|[ERHAPI_PlatformTypes_DEPRECATED](/unreal-plugins/all/rh__common_8h/#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)|[GetLoggedInPlatformType](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a42fa36a5163bc8f1000945c19f5efeb7)()|Gets the platform type for the player if logged in.|
|ERHAPI_Platform|[GetLoggedInPlatform](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a05e6f540d539db2c2e32711a71b3ea0d)()|Gets the platform type for the player if logged in.|
|FUniqueNetIdWrapper|[GetOSSUniqueId](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1aaa4e0609a714252747d19e0bda2228de)()|Gets the player's OSS unique id.|
|int32|[GetPlatformUserId](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1af730a768c92209cd06f97b2ca3de6e2c)()|Gets the player's platform id.|
|TSharedPtr< class IAnalyticsProvider >|[GetAnalyticsProvider](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a971e67d99251ee5a805fc339f48ab66d)()|Gets the player's analytics provider.|
|TSharedPtr< class IAnalyticsProvider >|[CreateAnalyticsProvider](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a3b2f8337c43926cb688c16d15916ad03)()|Gets the player's analytics provider.|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[GetLocalPlayerInfo](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a5d9ea1d7b17a08d3a5c887f1331871bd)()|Gets the player's player info.|
|[FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId)|[GetPlayerPlatformId](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1ad821ccae7dc5dda771a939765510acf3)()|Gets the player's platform id wrapped with platform type.|
|FAuthContextPtr|[GetAuthContext](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a487eb72cbed66aac3e1673c06b1fefd1)()|Gets the player's auth context.|
|IOnlineSubsystem *|[GetOSS](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a411f7a0f814cd1df1fbd00e9fc277fc4)(const FName & SubsystemName)|Get a specific OSS by name for this local player's world. In editor, this allows each world/game instance to have a different OSS.|
|FORCEINLINE [URH_LocalPlayerLoginSubsystem](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem) *|[GetLoginSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1aa6d9e0d8f6462d16b6c0eab3e8c445b9)()|Gets the player's login subsystem.|
|FORCEINLINE [URH_AdSubsystem](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem) *|[GetAdSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a4b0be8bb978e72e755f383b5ca519c5a)()|Gets the player's ad subsystem.|
|FORCEINLINE [URH_FriendSubsystem](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem) *|[GetFriendSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1ad49c347f8117e9c66f0c40564bbe9ad8)()|Gets the player's friend subsystem.|
|FORCEINLINE [URH_LocalPlayerSessionSubsystem](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem) *|[GetSessionSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1af7588ae73890bd95a0d4b8ce240ecff9)()|Gets the player's session subsystem.|
|FORCEINLINE [URH_LocalPlayerPresenceSubsystem](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem) *|[GetPresenceSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1ac43dba7fff9bf907ae5e17675cc65c77)()|Gets the player's presence subsystem.|
|FORCEINLINE [URH_PurgeSubsystem](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem) *|[GetPurgeSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a5c2884b8b405e18804009f8b8cfeb245)()|Gets the player's purge subsystem.|
|FORCEINLINE [URH_EntitlementSubsystem](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem) *|[GetEntitlementSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a3553f6723f3c694a2bf15f3bfd647774)()|Gets the player's entitlement subsystem.|
|[URH_PlayerNotifications](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications) *|[GetPlayerNotifications](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a690473c3123f603e2122e66ceb9f2e7f)()|Gets the player's notification subsystem.|
|[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) *|[GetPlayerInfoSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a83ad712487ec862359de2aad0cfdae27)()|Gets the player's player info.|
|void|[CustomEndpoint](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a12825ba4b3fc959d767fa24fdd42ac4a)(const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) & Request, const RallyHereAPI::FDelegate_CustomEndpointSend & Delegate)|Custom Endpoint wrapper (for custom endpoints that require authentication)|
|void|[CustomEndpoint](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a0245b6c80572e106cdba6424306b4e5a)(const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) & Request, const FRH_CustomEndpointDelegateBlock & Delegate)|Custom Endpoint wrapper (for custom endpoints that require authentication)|
|void|[BLUEPRINT_CustomEndpoint](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1aa5c9cef7544050e91abe15452526fbd7)(const [FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper) & Request, const FRH_CustomEndpointDynamicDelegate & Delegate)|Custom Endpoint wrapper (for custom endpoints that require authentication)|
|UClassToUse *|[AddSubsystemPlugin](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1ab757058d891a562b63869377edf607bf)(const FSoftClassPath & SubsystemClassPath)|Adds a plugin to the Game Instance Subsystem.|
|UClassToUse *|[AddSandboxedSubsystemPlugin](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a2de7a5eafd696d509f653192edd9a09f)(const FSoftClassPath & SubsystemClassPath)|Adds a plugin to the Game Instance Subsystem.|
|void|[OnUserLoggedIn](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a9ef1338417d75dfc9f463538e2515d72)(bool bSuccess)|Called whenever the user logs in.|
|void|[OnUserLoggedOut](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a9ea340cc151118f71e42ddb33299dacc)()|Called whenever the user logs out explicitly.|
|void|[OnUserChanged](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem_1a8a159f043f9aaed47f06d7c6706cb6b7)()|Callback that occurs whenever the local player this subsystem is associated with changes.|
## Protected Attributes



### `SubsystemPlugins` <a id="classURH__LocalPlayerSubsystem_1aa1e0f18bd03b9082f4dfa3b87e294111"></a>

`TArray<URH_LocalPlayerSubsystemPlugin*> URH_LocalPlayerSubsystem::SubsystemPlugins`

Array of plugins for the Local Player Subsystem.




### `SandboxedSubsystemPlugins` <a id="classURH__LocalPlayerSubsystem_1a17f7feb3081a6a9ddd60220806af4101"></a>

`TArray<URH_SandboxedSubsystemPlugin*> URH_LocalPlayerSubsystem::SandboxedSubsystemPlugins`

Array of plugins for the Local Player Subsystem.




### `LoginSubsystem` <a id="classURH__LocalPlayerSubsystem_1a4c91f163e0d3ce122ff5945e94fbfd42"></a>

`URH_LocalPlayerLoginSubsystem* URH_LocalPlayerSubsystem::LoginSubsystem`

The Login Subsystem for the player.




### `AdSubsystem` <a id="classURH__LocalPlayerSubsystem_1a7828f1874dcd91a147856a6919086273"></a>

`URH_AdSubsystem* URH_LocalPlayerSubsystem::AdSubsystem`

The Ad Subsystem for the player.




### `FriendSubsystem` <a id="classURH__LocalPlayerSubsystem_1a71f593fae588e9f7afa7733eae6aafac"></a>

`URH_FriendSubsystem* URH_LocalPlayerSubsystem::FriendSubsystem`

The Friend Subsystem for the player.




### `SessionSubsystem` <a id="classURH__LocalPlayerSubsystem_1a86df20cf68d8618951ae19a98c3fb5fd"></a>

`URH_LocalPlayerSessionSubsystem* URH_LocalPlayerSubsystem::SessionSubsystem`

The Session Subsystem for the player.




### `PresenceSubsystem` <a id="classURH__LocalPlayerSubsystem_1a1bc3544d5e09905d1a20b7d83af5087e"></a>

`URH_LocalPlayerPresenceSubsystem* URH_LocalPlayerSubsystem::PresenceSubsystem`

The Presence Subsystem for the player.




### `PurgeSubsystem` <a id="classURH__LocalPlayerSubsystem_1a7e1beadec9fe8b854a37e4518b77c9cc"></a>

`URH_PurgeSubsystem* URH_LocalPlayerSubsystem::PurgeSubsystem`

The Purge Subsystem for the player.




### `EntitlementSubsystem` <a id="classURH__LocalPlayerSubsystem_1abbb158bc2cd5dd965ba03363d64723ba"></a>

`URH_EntitlementSubsystem* URH_LocalPlayerSubsystem::EntitlementSubsystem`

The Entitlement Subsystem for the player.




### `SandboxedPlayerInfoSubsystem` <a id="classURH__LocalPlayerSubsystem_1a2f8620e8c3c50fdfea4ec0c39678b476"></a>

`URH_PlayerInfoSubsystem* URH_LocalPlayerSubsystem::SandboxedPlayerInfoSubsystem`

The Sandboxed PlayerInfo Subsystem for the player.




### `PlayerInfoCache` <a id="classURH__LocalPlayerSubsystem_1a48fa6f3ba219852b90b6eaa9bf0ec5e4"></a>

`TWeakObjectPtr<URH_PlayerInfo> URH_LocalPlayerSubsystem::PlayerInfoCache`



The Player Info associated with the local player. 



### `AuthContext` <a id="classURH__LocalPlayerSubsystem_1a7db0fee21f61da0729bba78d7a892430"></a>

`FAuthContextPtr URH_LocalPlayerSubsystem::AuthContext`



The Local Players auth context. 



### `AnalyticsProvider` <a id="classURH__LocalPlayerSubsystem_1a9ece424deff5492e8d400a01c3295514"></a>

`TSharedPtr<class IAnalyticsProvider> URH_LocalPlayerSubsystem::AnalyticsProvider`



The Analytics Provider for the player. 



### `AnalyticsStartTime` <a id="classURH__LocalPlayerSubsystem_1a4035dec7f2a4568acd091f0058fbf0b3"></a>

`TOptional<FDateTime> URH_LocalPlayerSubsystem::AnalyticsStartTime`



The start time of the AnalyticsProvider 




## Public Functions



### `Initialize` <a id="classURH__LocalPlayerSubsystem_1aa2c904ac8c9e4e1e89d2f44f56297f19"></a>

void Initialize(FSubsystemCollectionBase & Collection)

#### Parameters

| Type | Name |
|------|------|
|FSubsystemCollectionBase &|Collection|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__LocalPlayerSubsystem_1a2eb5553bdd14a18a7496048e4fd8de60"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `IsLoggedIn` <a id="classURH__LocalPlayerSubsystem_1a3b7ce92eb8ce587f9da1bddd333d83a8"></a>

bool IsLoggedIn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player is currently logged in.




### `GetPlayerUuid` <a id="classURH__LocalPlayerSubsystem_1aa4f9ff67952acaac6cff21344e009ab0"></a>

FGuid GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's unique player id.




### `GetLoggedInPlatformType` <a id="classURH__LocalPlayerSubsystem_1a42fa36a5163bc8f1000945c19f5efeb7"></a>

[ERHAPI_PlatformTypes_DEPRECATED](/unreal-plugins/all/rh__common_8h/#group__Common_1ga8d2aa1d87e398a5548531751e8cea759) GetLoggedInPlatformType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the platform type for the player if logged in.




### `GetLoggedInPlatform` <a id="classURH__LocalPlayerSubsystem_1a05e6f540d539db2c2e32711a71b3ea0d"></a>

ERHAPI_Platform GetLoggedInPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the platform type for the player if logged in.




### `GetOSSUniqueId` <a id="classURH__LocalPlayerSubsystem_1aaa4e0609a714252747d19e0bda2228de"></a>

FUniqueNetIdWrapper GetOSSUniqueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's OSS unique id.




### `GetPlatformUserId` <a id="classURH__LocalPlayerSubsystem_1af730a768c92209cd06f97b2ca3de6e2c"></a>

int32 GetPlatformUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's platform id.




### `GetAnalyticsProvider` <a id="classURH__LocalPlayerSubsystem_1a971e67d99251ee5a805fc339f48ab66d"></a>

TSharedPtr< class IAnalyticsProvider > GetAnalyticsProvider()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's analytics provider.




### `CreateAnalyticsProvider` <a id="classURH__LocalPlayerSubsystem_1a3b2f8337c43926cb688c16d15916ad03"></a>

TSharedPtr< class IAnalyticsProvider > CreateAnalyticsProvider()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's analytics provider.




### `GetLocalPlayerInfo` <a id="classURH__LocalPlayerSubsystem_1a5d9ea1d7b17a08d3a5c887f1331871bd"></a>

[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * GetLocalPlayerInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's player info.




### `GetPlayerPlatformId` <a id="classURH__LocalPlayerSubsystem_1ad821ccae7dc5dda771a939765510acf3"></a>

[FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) GetPlayerPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's platform id wrapped with platform type.




### `GetAuthContext` <a id="classURH__LocalPlayerSubsystem_1a487eb72cbed66aac3e1673c06b1fefd1"></a>

FAuthContextPtr GetAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's auth context.




### `GetOSS` <a id="classURH__LocalPlayerSubsystem_1a411f7a0f814cd1df1fbd00e9fc277fc4"></a>

IOnlineSubsystem * GetOSS(const FName & SubsystemName)

#### Parameters

| Type | Name |
|------|------|
|const FName &|SubsystemName|

#### Description

Get a specific OSS by name for this local player's world. In editor, this allows each world/game instance to have a different OSS.




### `GetLoginSubsystem` <a id="classURH__LocalPlayerSubsystem_1aa6d9e0d8f6462d16b6c0eab3e8c445b9"></a>

FORCEINLINE [URH_LocalPlayerLoginSubsystem](/unreal-plugins/all/classurh__localplayerloginsubsystem/#classURH__LocalPlayerLoginSubsystem) * GetLoginSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's login subsystem.




### `GetAdSubsystem` <a id="classURH__LocalPlayerSubsystem_1a4b0be8bb978e72e755f383b5ca519c5a"></a>

FORCEINLINE [URH_AdSubsystem](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem) * GetAdSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's ad subsystem.




### `GetFriendSubsystem` <a id="classURH__LocalPlayerSubsystem_1ad49c347f8117e9c66f0c40564bbe9ad8"></a>

FORCEINLINE [URH_FriendSubsystem](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem) * GetFriendSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's friend subsystem.




### `GetSessionSubsystem` <a id="classURH__LocalPlayerSubsystem_1af7588ae73890bd95a0d4b8ce240ecff9"></a>

FORCEINLINE [URH_LocalPlayerSessionSubsystem](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem) * GetSessionSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's session subsystem.




### `GetPresenceSubsystem` <a id="classURH__LocalPlayerSubsystem_1ac43dba7fff9bf907ae5e17675cc65c77"></a>

FORCEINLINE [URH_LocalPlayerPresenceSubsystem](/unreal-plugins/all/classurh__localplayerpresencesubsystem/#classURH__LocalPlayerPresenceSubsystem) * GetPresenceSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's presence subsystem.




### `GetPurgeSubsystem` <a id="classURH__LocalPlayerSubsystem_1a5c2884b8b405e18804009f8b8cfeb245"></a>

FORCEINLINE [URH_PurgeSubsystem](/unreal-plugins/all/classurh__purgesubsystem/#classURH__PurgeSubsystem) * GetPurgeSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's purge subsystem.




### `GetEntitlementSubsystem` <a id="classURH__LocalPlayerSubsystem_1a3553f6723f3c694a2bf15f3bfd647774"></a>

FORCEINLINE [URH_EntitlementSubsystem](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem) * GetEntitlementSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's entitlement subsystem.




### `GetPlayerNotifications` <a id="classURH__LocalPlayerSubsystem_1a690473c3123f603e2122e66ceb9f2e7f"></a>

[URH_PlayerNotifications](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications) * GetPlayerNotifications()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's notification subsystem.




### `GetPlayerInfoSubsystem` <a id="classURH__LocalPlayerSubsystem_1a83ad712487ec862359de2aad0cfdae27"></a>

[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) * GetPlayerInfoSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player's player info.




### `CustomEndpoint` <a id="classURH__LocalPlayerSubsystem_1a12825ba4b3fc959d767fa24fdd42ac4a"></a>

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



### `CustomEndpoint` <a id="classURH__LocalPlayerSubsystem_1a0245b6c80572e106cdba6424306b4e5a"></a>

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



### `BLUEPRINT_CustomEndpoint` <a id="classURH__LocalPlayerSubsystem_1aa5c9cef7544050e91abe15452526fbd7"></a>

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




## Protected Functions



### `AddSubsystemPlugin` <a id="classURH__LocalPlayerSubsystem_1ab757058d891a562b63869377edf607bf"></a>

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



### `AddSandboxedSubsystemPlugin` <a id="classURH__LocalPlayerSubsystem_1a2de7a5eafd696d509f653192edd9a09f"></a>

UClassToUse * AddSandboxedSubsystemPlugin(const FSoftClassPath & SubsystemClassPath)

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



### `OnUserLoggedIn` <a id="classURH__LocalPlayerSubsystem_1a9ef1338417d75dfc9f463538e2515d72"></a>

void OnUserLoggedIn(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Called whenever the user logs in.


#### Parameters

bSuccess
: True if the login was successful, false otherwise. 



### `OnUserLoggedOut` <a id="classURH__LocalPlayerSubsystem_1a9ea340cc151118f71e42ddb33299dacc"></a>

void OnUserLoggedOut()

#### Parameters

| Type | Name |
|------|------|

#### Description

Called whenever the user logs out explicitly.




### `OnUserChanged` <a id="classURH__LocalPlayerSubsystem_1a8a159f043f9aaed47f06d7c6706cb6b7"></a>

void OnUserChanged()

#### Parameters

| Type | Name |
|------|------|

#### Description

Callback that occurs whenever the local player this subsystem is associated with changes.





