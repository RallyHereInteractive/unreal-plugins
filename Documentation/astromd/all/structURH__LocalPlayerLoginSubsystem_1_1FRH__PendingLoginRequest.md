---
title: URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest Struct
---
Pending login result.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FOnlineAccountCredentials|[Credentials](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a7a7304ea1458fb1419f45d3dfc2d42b6)|Account credentials needed to sign in to an online service.|
|FString|[CredentialRefreshToken](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a69ee459549e6fd520ac9d820d9d1612e)|Token to refresh the Account credentials.|
|bool|[bAcceptEULA](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a1d7aa0cfde9ec33d3aeeceb435e9fcaa)|Accept the EULA.|
|bool|[bAcceptTOS](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a079275457798e57bdc3adbab85b38914)|Accept the TOS.|
|bool|[bAcceptPP](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a3c8a69ee983059352ea23c47bf5563f7)|Accept the PP.|
|TSharedPtr< const FUniqueNetId >|[OSSUniqueId](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1abde02c91645907abe785d9c564c47911)|Unique Net ID for the PLAYER.|
|TSharedPtr< const FUniqueNetId >|[NicknameOSSUniqueId](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a86d15639a73333b9ef8cd762ac414f04)|Unique Net ID for the player when using Nickname Login.|
|[ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)|[LoginPhase](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a77ea494ebc2b287436abab867d34dc21)|Unique Current login phase.|
|FRH_OnLoginComplete|[OnLoginComplete](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1ab482bb2c01bf9ec67437221f6d5b7e72)|Delegate for login completion.|
|[FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult)|[CreateResult](/unreal-plugins/all/structurh__localplayerloginsubsystem_1_1frh__pendingloginrequest/#structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a095c295ed9d381961ed0540c40040328)([ERHAPI_LoginResult](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0) Result)|Creates a login result from the of the pending request.|
## Public Attributes



### `Credentials` <a id="structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a7a7304ea1458fb1419f45d3dfc2d42b6"></a>

`FOnlineAccountCredentials URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest::Credentials`

Account credentials needed to sign in to an online service.




### `CredentialRefreshToken` <a id="structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a69ee459549e6fd520ac9d820d9d1612e"></a>

`FString URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest::CredentialRefreshToken`

Token to refresh the Account credentials.




### `bAcceptEULA` <a id="structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a1d7aa0cfde9ec33d3aeeceb435e9fcaa"></a>

`bool URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest::bAcceptEULA`

Accept the EULA.




### `bAcceptTOS` <a id="structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a079275457798e57bdc3adbab85b38914"></a>

`bool URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest::bAcceptTOS`

Accept the TOS.




### `bAcceptPP` <a id="structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a3c8a69ee983059352ea23c47bf5563f7"></a>

`bool URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest::bAcceptPP`

Accept the PP.




### `OSSUniqueId` <a id="structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1abde02c91645907abe785d9c564c47911"></a>

`TSharedPtr<const FUniqueNetId> URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest::OSSUniqueId`

Unique Net ID for the PLAYER.




### `NicknameOSSUniqueId` <a id="structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a86d15639a73333b9ef8cd762ac414f04"></a>

`TSharedPtr<const FUniqueNetId> URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest::NicknameOSSUniqueId`

Unique Net ID for the player when using Nickname Login.




### `LoginPhase` <a id="structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a77ea494ebc2b287436abab867d34dc21"></a>

`ERHAPI_LocalPlayerLoginOSS URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest::LoginPhase`

Unique Current login phase.




### `OnLoginComplete` <a id="structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1ab482bb2c01bf9ec67437221f6d5b7e72"></a>

`FRH_OnLoginComplete URH_LocalPlayerLoginSubsystem::FRH_PendingLoginRequest::OnLoginComplete`

Delegate for login completion.





## Public Functions



### `CreateResult` <a id="structURH__LocalPlayerLoginSubsystem_1_1FRH__PendingLoginRequest_1a095c295ed9d381961ed0540c40040328"></a>

[FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult) CreateResult([ERHAPI_LoginResult](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0) Result)

#### Parameters

| Type | Name |
|------|------|
|[ERHAPI_LoginResult](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0)|Result|

#### Description

Creates a login result from the of the pending request.


#### Parameters

Result
: API Response to create the result from. 

#### Returns
The Login Result. 




