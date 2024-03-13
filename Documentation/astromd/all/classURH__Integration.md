---
title: URH_Integration Class
---Inherits from UObject

Main integration layer handler.

## Summary
| Kind | View | Description |
|------|------|-------------|
|RallyHereAPI::FRallyHereAPIAll|[APIs](/unreal-plugins/all/classurh__integration/#classURH__Integration_1ac4d8005f183a4ccbb40b151515e76a0f)||
|HttpRetryManagerPtr|[RetryManager](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a4058b63b6b09d7ad2422fcc067aed630)||
|FString|[ResolvedBaseUrl](/unreal-plugins/all/classurh__integration/#classURH__Integration_1ac8380462b05c45ce25aca4930bd49913)||
|bool|[bIsBaseUrlLocked](/unreal-plugins/all/classurh__integration/#classURH__Integration_1afb6f8c318b67d9833e34783cde86443e)||
|FString|[ResolvedEnvironmentId](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a823597c33e49827d6b939becd19456ed)||
|bool|[bIsEnvironmentIdLocked](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a5b06251c53564170823f756d7195f228)||
|FString|[ResolvedClientId](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a701ebc14be63b3dd5a865c6fa63ab345)||
|bool|[bIsClientIdLocked](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a326cced4db0a196c29a8888d28fcda9c)||
|FString|[ResolvedClientSecret](/unreal-plugins/all/classurh__integration/#classURH__Integration_1afb5fdde588266614c665710a29a439e5)||
|bool|[bIsClientSecretLocked](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a723c5189580828aeaa0b864b8c6f5d4e)||
|class [URH_WebRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests) *|[WebRequestTracker](/unreal-plugins/all/classurh__integration/#classURH__Integration_1ac75fe6de8756ccb3c632f4fd5310ba44)||
|class [URH_Diagnostics](/unreal-plugins/all/classurh__diagnostics/#classURH__Diagnostics) *|[Diagnostics](/unreal-plugins/all/classurh__integration/#classURH__Integration_1acead9232d332e26f31bb6f84bf454ebe)||
|void|[Initialize](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a900d421aea13c81ac91e48ec7a0b8f98)()|Initialize the Integration layer.|
|void|[Uninitialize](/unreal-plugins/all/classurh__integration/#classURH__Integration_1af1069eb3dfe1229a2a2b0044b5d4ab17)()|Safely tears down the Integration layer.|
|RallyHereAPI::FRallyHereAPIAll &|[GetAPIs](/unreal-plugins/all/classurh__integration/#classURH__Integration_1ae6de9d69bfaa3d3386a3bb47380156b3)()|Gets all the APIs.|
|HttpRetryManagerPtr|[GetRetryManager](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a79fc427b8c7eebdbd4a973bad90682ad)()|Gets Base Retry Manager for all RallyHereAPI calls.|
|void|[SetEnvironmentId](/unreal-plugins/all/classurh__integration/#classURH__Integration_1ad2478a83d20d2be82097d36162b2e94a)(FString InEnvironmentId, const FString & Source)|Sets the environment for he connection.|
|FString|[GetEnvironmentId](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a007194b606488da9cbc5299826c6c3ba)()|Get the current Environment Id (will run ResolveEnvironmentId if there isn't one)|
|void|[ResolveEnvironmentId](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a0b20b4df9925d720b4c1c97c1c38a149)()|Get the Environment ID used for finding the base URL from the first of the following sources:|
|void|[LockEnvironmentId](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a52b751ec4b8385731cf6490a8a4846ac)(bool bLocked)|Updates the locked status of the Environment Id.|
|void|[SetBaseURL](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a3f1a9a24ef392322deda7f4e08838889)(FString InBaseUrl, const FString & Source)|Set the base URL for all RallyHereAPI calls.|
|FString|[GetBaseURL](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a6a80ff137a6b4417db6a0e022f8bd7f2)()|Get the current base URL (will run ResolveBaseURL if there isn't one)|
|void|[ResolveBaseURL](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a9ba65df152ad1d5205d9a43959d63b3b)()|Check for a base URL across several sources and assign the first non-empty value to the APIs:|
|void|[LockBaseURL](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a2d48d18ed8c425037b48716951c609b7)(bool bLocked)|Updates the locked status of the Base URL.|
|void|[SetClientId](/unreal-plugins/all/classurh__integration/#classURH__Integration_1ab09fcf4dd89f17f1867ce6ac9cf93ebb)(FString InClientId, const FString & Source)|Set the client ID for the AuthContext.|
|FString|[GetClientId](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a7dde924eb4f662a32d710711a2a5d45d)()|Get the current client ID (will run ResolveClientId if there isn't one).|
|void|[ResolveClientId](/unreal-plugins/all/classurh__integration/#classURH__Integration_1aa5c8e07f1530d510afcb84e42c3eef06)()|Check for a client ID across several sources and assign the first non-empty value to the APIs:|
|void|[LockClientId](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a04b8f6446f4bc3380d15a20129804de6)(bool bLocked)|Updates the locked status of the Client Id.|
|void|[SetClientSecret](/unreal-plugins/all/classurh__integration/#classURH__Integration_1aa3c279d80bcc31d8fb2366bf8d4a5a59)(FString InClientSecret, const FString & Source)|Set the client secret for the AuthContext.|
|FString|[GetClientSecret](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a3c51a0686676ab34896ed21fe7ed786e)()|Get the current client secret (will run ResolveClientSecret if there isn't one).|
|void|[ResolveClientSecret](/unreal-plugins/all/classurh__integration/#classURH__Integration_1acf88cad66d6acbf99495f8895da38917)()|Check for a client secret across several sources and assign the first non-empty value to the APIs:|
|void|[LockClientSecret](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a05204a2d20528a3b4f59952368ae1814)(bool bLocked)|Updates the locked status of the Client Secret.|
|class [URH_WebRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests) *|[GetWebRequestTracker](/unreal-plugins/all/classurh__integration/#classURH__Integration_1aa0eca33c0d2add66db9ecf8d169325a0)()|Gets the Web Request Tracker.|
|class [URH_Diagnostics](/unreal-plugins/all/classurh__diagnostics/#classURH__Diagnostics) *|[GetDiagnostics](/unreal-plugins/all/classurh__integration/#classURH__Integration_1a9031d6508ab6dd48cbfa74e9e698fbdb)()|Gets the Diagnostic Reporter.|
## Private Attributes



### `APIs` <a id="classURH__Integration_1ac4d8005f183a4ccbb40b151515e76a0f"></a>

`RallyHereAPI::FRallyHereAPIAll URH_Integration::APIs`






### `RetryManager` <a id="classURH__Integration_1a4058b63b6b09d7ad2422fcc067aed630"></a>

`HttpRetryManagerPtr URH_Integration::RetryManager`






### `ResolvedBaseUrl` <a id="classURH__Integration_1ac8380462b05c45ce25aca4930bd49913"></a>

`FString URH_Integration::ResolvedBaseUrl`






### `bIsBaseUrlLocked` <a id="classURH__Integration_1afb6f8c318b67d9833e34783cde86443e"></a>

`bool URH_Integration::bIsBaseUrlLocked`






### `ResolvedEnvironmentId` <a id="classURH__Integration_1a823597c33e49827d6b939becd19456ed"></a>

`FString URH_Integration::ResolvedEnvironmentId`






### `bIsEnvironmentIdLocked` <a id="classURH__Integration_1a5b06251c53564170823f756d7195f228"></a>

`bool URH_Integration::bIsEnvironmentIdLocked`






### `ResolvedClientId` <a id="classURH__Integration_1a701ebc14be63b3dd5a865c6fa63ab345"></a>

`FString URH_Integration::ResolvedClientId`






### `bIsClientIdLocked` <a id="classURH__Integration_1a326cced4db0a196c29a8888d28fcda9c"></a>

`bool URH_Integration::bIsClientIdLocked`






### `ResolvedClientSecret` <a id="classURH__Integration_1afb5fdde588266614c665710a29a439e5"></a>

`FString URH_Integration::ResolvedClientSecret`






### `bIsClientSecretLocked` <a id="classURH__Integration_1a723c5189580828aeaa0b864b8c6f5d4e"></a>

`bool URH_Integration::bIsClientSecretLocked`






### `WebRequestTracker` <a id="classURH__Integration_1ac75fe6de8756ccb3c632f4fd5310ba44"></a>

`class URH_WebRequests* URH_Integration::WebRequestTracker`






### `Diagnostics` <a id="classURH__Integration_1acead9232d332e26f31bb6f84bf454ebe"></a>

`class URH_Diagnostics* URH_Integration::Diagnostics`







## Public Functions



### `Initialize` <a id="classURH__Integration_1a900d421aea13c81ac91e48ec7a0b8f98"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the Integration layer.




### `Uninitialize` <a id="classURH__Integration_1af1069eb3dfe1229a2a2b0044b5d4ab17"></a>

void Uninitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the Integration layer.




### `GetAPIs` <a id="classURH__Integration_1ae6de9d69bfaa3d3386a3bb47380156b3"></a>

RallyHereAPI::FRallyHereAPIAll & GetAPIs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets all the APIs.




### `GetRetryManager` <a id="classURH__Integration_1a79fc427b8c7eebdbd4a973bad90682ad"></a>

HttpRetryManagerPtr GetRetryManager()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets Base Retry Manager for all RallyHereAPI calls.




### `SetEnvironmentId` <a id="classURH__Integration_1ad2478a83d20d2be82097d36162b2e94a"></a>

void SetEnvironmentId(FString InEnvironmentId, const FString & Source)

#### Parameters

| Type | Name |
|------|------|
|FString|InEnvironmentId|
|const FString &|Source|

#### Description

Sets the environment for he connection.


#### Parameters

InEnvironmentId
: Id of the Environment to use. 
Source
: The source of the environment change, for logging. 



### `GetEnvironmentId` <a id="classURH__Integration_1a007194b606488da9cbc5299826c6c3ba"></a>

FString GetEnvironmentId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the current Environment Id (will run ResolveEnvironmentId if there isn't one)




### `ResolveEnvironmentId` <a id="classURH__Integration_1a0b20b4df9925d720b4c1c97c1c38a149"></a>

void ResolveEnvironmentId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the Environment ID used for finding the base URL from the first of the following sources:





### `LockEnvironmentId` <a id="classURH__Integration_1a52b751ec4b8385731cf6490a8a4846ac"></a>

void LockEnvironmentId(bool bLocked)

#### Parameters

| Type | Name |
|------|------|
|bool|bLocked|

#### Description

Updates the locked status of the Environment Id.


#### Parameters

bLocked
: If locked, disables the ResolveEnvironmentId function. 



### `SetBaseURL` <a id="classURH__Integration_1a3f1a9a24ef392322deda7f4e08838889"></a>

void SetBaseURL(FString InBaseUrl, const FString & Source)

#### Parameters

| Type | Name |
|------|------|
|FString|InBaseUrl|
|const FString &|Source|

#### Description

Set the base URL for all RallyHereAPI calls.


#### Parameters

InBaseURL
: The base URL to use. 
Source
: The source of the base URL change, for logging. 



### `GetBaseURL` <a id="classURH__Integration_1a6a80ff137a6b4417db6a0e022f8bd7f2"></a>

FString GetBaseURL()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the current base URL (will run ResolveBaseURL if there isn't one)




### `ResolveBaseURL` <a id="classURH__Integration_1a9ba65df152ad1d5205d9a43959d63b3b"></a>

void ResolveBaseURL()

#### Parameters

| Type | Name |
|------|------|

#### Description

Check for a base URL across several sources and assign the first non-empty value to the APIs:





### `LockBaseURL` <a id="classURH__Integration_1a2d48d18ed8c425037b48716951c609b7"></a>

void LockBaseURL(bool bLocked)

#### Parameters

| Type | Name |
|------|------|
|bool|bLocked|

#### Description

Updates the locked status of the Base URL.


#### Parameters

bLocked
: If locked, disables the ResolveBaseURL function. 



### `SetClientId` <a id="classURH__Integration_1ab09fcf4dd89f17f1867ce6ac9cf93ebb"></a>

void SetClientId(FString InClientId, const FString & Source)

#### Parameters

| Type | Name |
|------|------|
|FString|InClientId|
|const FString &|Source|

#### Description

Set the client ID for the AuthContext.


#### Parameters

InClientId
: The client ID to use. 
Source
: The source of the base Client Id Change, for logging. 



### `GetClientId` <a id="classURH__Integration_1a7dde924eb4f662a32d710711a2a5d45d"></a>

FString GetClientId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the current client ID (will run ResolveClientId if there isn't one).




### `ResolveClientId` <a id="classURH__Integration_1aa5c8e07f1530d510afcb84e42c3eef06"></a>

void ResolveClientId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Check for a client ID across several sources and assign the first non-empty value to the APIs:





### `LockClientId` <a id="classURH__Integration_1a04b8f6446f4bc3380d15a20129804de6"></a>

void LockClientId(bool bLocked)

#### Parameters

| Type | Name |
|------|------|
|bool|bLocked|

#### Description

Updates the locked status of the Client Id.


#### Parameters

bLocked
: If locked, disables the ResolveClientId function. 



### `SetClientSecret` <a id="classURH__Integration_1aa3c279d80bcc31d8fb2366bf8d4a5a59"></a>

void SetClientSecret(FString InClientSecret, const FString & Source)

#### Parameters

| Type | Name |
|------|------|
|FString|InClientSecret|
|const FString &|Source|

#### Description

Set the client secret for the AuthContext.


#### Parameters

InClientSecret
: The client secret to use. 
Source
: The source of the base Client Secret Change, for logging. 



### `GetClientSecret` <a id="classURH__Integration_1a3c51a0686676ab34896ed21fe7ed786e"></a>

FString GetClientSecret()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the current client secret (will run ResolveClientSecret if there isn't one).




### `ResolveClientSecret` <a id="classURH__Integration_1acf88cad66d6acbf99495f8895da38917"></a>

void ResolveClientSecret()

#### Parameters

| Type | Name |
|------|------|

#### Description

Check for a client secret across several sources and assign the first non-empty value to the APIs:





### `LockClientSecret` <a id="classURH__Integration_1a05204a2d20528a3b4f59952368ae1814"></a>

void LockClientSecret(bool bLocked)

#### Parameters

| Type | Name |
|------|------|
|bool|bLocked|

#### Description

Updates the locked status of the Client Secret.


#### Parameters

bLocked
: If locked, disables the ResolveClientSecret function. 



### `GetWebRequestTracker` <a id="classURH__Integration_1aa0eca33c0d2add66db9ecf8d169325a0"></a>

class [URH_WebRequests](/unreal-plugins/all/classurh__webrequests/#classURH__WebRequests) * GetWebRequestTracker()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Web Request Tracker.




### `GetDiagnostics` <a id="classURH__Integration_1a9031d6508ab6dd48cbfa74e9e698fbdb"></a>

class [URH_Diagnostics](/unreal-plugins/all/classurh__diagnostics/#classURH__Diagnostics) * GetDiagnostics()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Diagnostic Reporter.





