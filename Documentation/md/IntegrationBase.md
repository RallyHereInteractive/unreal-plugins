# group `IntegrationBase` <a id="group__IntegrationBase"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`FRallyHereIntegrationModule`](#classFRallyHereIntegrationModule) | Module for the Rally Here Integration Layer.
`class `[`FRH_Integration`](#classFRH__Integration) | Main integration layer handler.

---
title: FRallyHereIntegrationModule
---

```
class FRallyHereIntegrationModule
  : public IModuleInterface
```

Module for the Rally Here Integration Layer.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`~FRallyHereIntegrationModule`](#classFRallyHereIntegrationModule_1a05fc3130408ed64a45219dfdaca29120)`() = default` | Default constructor.
`public void `[`StartupModule`](#classFRallyHereIntegrationModule_1ac91ef7cb3468c0eb68c74069f99fa47b)`()` | Initializes the module.
`public void `[`ShutdownModule`](#classFRallyHereIntegrationModule_1a537c97b39e36b257d3499bb8f88b2aff)`()` | Safely ends the module.
`public inline `[`FRH_Integration`](IntegrationBase.md#classFRH__Integration)` & `[`GetIntegration`](#classFRallyHereIntegrationModule_1ab428b2c8db543b36835a636472d55ed8)`() const` | Gets the Integration class fromt he module.

### Members

#### `public  `[`~FRallyHereIntegrationModule`](#classFRallyHereIntegrationModule_1a05fc3130408ed64a45219dfdaca29120)`() = default` <a id="classFRallyHereIntegrationModule_1a05fc3130408ed64a45219dfdaca29120"></a>

Default constructor.

#### `public void `[`StartupModule`](#classFRallyHereIntegrationModule_1ac91ef7cb3468c0eb68c74069f99fa47b)`()` <a id="classFRallyHereIntegrationModule_1ac91ef7cb3468c0eb68c74069f99fa47b"></a>

Initializes the module.

#### `public void `[`ShutdownModule`](#classFRallyHereIntegrationModule_1a537c97b39e36b257d3499bb8f88b2aff)`()` <a id="classFRallyHereIntegrationModule_1a537c97b39e36b257d3499bb8f88b2aff"></a>

Safely ends the module.

#### `public inline `[`FRH_Integration`](IntegrationBase.md#classFRH__Integration)` & `[`GetIntegration`](#classFRallyHereIntegrationModule_1ab428b2c8db543b36835a636472d55ed8)`() const` <a id="classFRallyHereIntegrationModule_1ab428b2c8db543b36835a636472d55ed8"></a>

Gets the Integration class fromt he module.

---
title: FRH_Integration
---

Main integration layer handler.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`FRH_Integration`](#classFRH__Integration_1ad429ec1c11342e1a32bc418f9c527c7f)`()` | 
`public void `[`Initialize`](#classFRH__Integration_1a5406bc46c19e6268c00ace04a51e13af)`()` | Initialize the Integration layer.
`public void `[`Uninitialize`](#classFRH__Integration_1affec69b27c9acf7015815812bbb6833f)`()` | Safely tears down the Integration layer.
`public inline RallyHereAPI::FRallyHereAPIAll & `[`GetAPIs`](#classFRH__Integration_1a890bf9b414bc85d6c057a3b9158204ed)`()` | Gets all the APIs.
`public inline HttpRetryManagerPtr `[`GetRetryManager`](#classFRH__Integration_1afc39eec959666867e8c4bae0de6ff862)`() const` | Gets Base Retry Manager for all RallyHereAPI calls.
`public void `[`SetEnvironmentId`](#classFRH__Integration_1a2c35e2e9223d77db72f0fc4927a61cac)`(FString InEnvironmentId,const FString & Source)` | Sets the environment for he connection.
`public FString `[`GetEnvironmentId`](#classFRH__Integration_1ad0d54cb4e8185064ab8feb5b8cfe1158)`()` | Get the current Environment Id (will run ResolveEnvironmentId if there isn't one)
`public void `[`ResolveEnvironmentId`](#classFRH__Integration_1a9579149b9470a1a8b8eefb9978a6d6aa)`()` | Get the Environment ID used for finding the base URL from the first of the following sources:
`public inline void `[`LockEnvironmentId`](#classFRH__Integration_1a2416f70e5f8aefa4621077557046b518)`(bool bLocked)` | Updates the locked status of the Environment Id.
`public void `[`SetBaseURL`](#classFRH__Integration_1a2de7c31c9f2df613372b70899612a75e)`(FString InBaseUrl,const FString & Source)` | Set the base URL for all RallyHereAPI calls.
`public FString `[`GetBaseURL`](#classFRH__Integration_1a2133066a14b8ece9675e74ab9be18e68)`()` | Get the current base URL (will run ResolveBaseURL if there isn't one)
`public void `[`ResolveBaseURL`](#classFRH__Integration_1ab948f32204bfe002d03f6faa58f4b761)`()` | Check for a base URL across several sources and assign the first non-empty value to the APIs:
`public inline void `[`LockBaseURL`](#classFRH__Integration_1a5078259f8298619fa5ac7966da3f6e0c)`(bool bLocked)` | Updates the locked status of the Base URL.
`public void `[`SetClientId`](#classFRH__Integration_1abbe2d34dc0d7a870c747f00c9ad1e4c5)`(FString InClientId,const FString & Source)` | Set the client ID for the AuthContext.
`public FString `[`GetClientId`](#classFRH__Integration_1a695e02ae6c4327902afcfe12a121b6cd)`()` | Get the current client ID (will run ResolveClientId if there isn't one).
`public void `[`ResolveClientId`](#classFRH__Integration_1a13a7c74b6fce44f275bc0131442c5f61)`()` | Check for a client ID across several sources and assign the first non-empty value to the APIs:
`public inline void `[`LockClientId`](#classFRH__Integration_1ae547716a7648acf415dee0f3d334a7ac)`(bool bLocked)` | Updates the locked status of the Client Id.
`public void `[`SetClientSecret`](#classFRH__Integration_1a6b05ae0200ee5f66ed2ce503abbbdf88)`(FString InClientSecret,const FString & Source)` | Set the client secret for the AuthContext.
`public FString `[`GetClientSecret`](#classFRH__Integration_1ac50700a8ff4e112ed60171ffbf5817b7)`()` | Get the current client secret (will run ResolveClientSecret if there isn't one).
`public void `[`ResolveClientSecret`](#classFRH__Integration_1a19706c54b4a17d6e82b3f86c22247be2)`()` | Check for a client secret across several sources and assign the first non-empty value to the APIs:
`public inline void `[`LockClientSecret`](#classFRH__Integration_1aeb750cd617fad0b3ade042b7a7c1d54a)`(bool bLocked)` | Updates the locked status of the Client Secret.
`public inline `[`FRH_WebRequests`](WebRequest.md#classFRH__WebRequests)` * `[`GetWebRequestTracker`](#classFRH__Integration_1a3b54823f537913d46a2266f9a4875a16)`() const` | Gets the Web Request Tracker.
`public inline `[`FRH_Diagnostics`](Diagnostics.md#classFRH__Diagnostics)` * `[`GetDiagnostics`](#classFRH__Integration_1a0f7dc5599a89b010715dba506bb16288)`() const` | Gets the Diagnostic Reporter.

### Members

#### `public  `[`FRH_Integration`](#classFRH__Integration_1ad429ec1c11342e1a32bc418f9c527c7f)`()` <a id="classFRH__Integration_1ad429ec1c11342e1a32bc418f9c527c7f"></a>

#### `public void `[`Initialize`](#classFRH__Integration_1a5406bc46c19e6268c00ace04a51e13af)`()` <a id="classFRH__Integration_1a5406bc46c19e6268c00ace04a51e13af"></a>

Initialize the Integration layer.

#### `public void `[`Uninitialize`](#classFRH__Integration_1affec69b27c9acf7015815812bbb6833f)`()` <a id="classFRH__Integration_1affec69b27c9acf7015815812bbb6833f"></a>

Safely tears down the Integration layer.

#### `public inline RallyHereAPI::FRallyHereAPIAll & `[`GetAPIs`](#classFRH__Integration_1a890bf9b414bc85d6c057a3b9158204ed)`()` <a id="classFRH__Integration_1a890bf9b414bc85d6c057a3b9158204ed"></a>

Gets all the APIs.

#### `public inline HttpRetryManagerPtr `[`GetRetryManager`](#classFRH__Integration_1afc39eec959666867e8c4bae0de6ff862)`() const` <a id="classFRH__Integration_1afc39eec959666867e8c4bae0de6ff862"></a>

Gets Base Retry Manager for all RallyHereAPI calls.

#### `public void `[`SetEnvironmentId`](#classFRH__Integration_1a2c35e2e9223d77db72f0fc4927a61cac)`(FString InEnvironmentId,const FString & Source)` <a id="classFRH__Integration_1a2c35e2e9223d77db72f0fc4927a61cac"></a>

Sets the environment for he connection.

#### Parameters
* `InEnvironmentId` Id of the Environment to use. 

* `Source` The source of the environment change, for logging.

#### `public FString `[`GetEnvironmentId`](#classFRH__Integration_1ad0d54cb4e8185064ab8feb5b8cfe1158)`()` <a id="classFRH__Integration_1ad0d54cb4e8185064ab8feb5b8cfe1158"></a>

Get the current Environment Id (will run ResolveEnvironmentId if there isn't one)

#### `public void `[`ResolveEnvironmentId`](#classFRH__Integration_1a9579149b9470a1a8b8eefb9978a6d6aa)`()` <a id="classFRH__Integration_1a9579149b9470a1a8b8eefb9978a6d6aa"></a>

Get the Environment ID used for finding the base URL from the first of the following sources:

* Command line values from the keys in EnvironmentCommandLineKeysInternal. By default these are: RallyHereEnvX RallyHereEnv RallyHereEnvInternal

* Command line values from the keys in EnvironmentCommandLineKeys, which are configured by ini

* Results from GetEnvironmentId from the EnvironmentOSSName (or default if one is not provided)

#### `public inline void `[`LockEnvironmentId`](#classFRH__Integration_1a2416f70e5f8aefa4621077557046b518)`(bool bLocked)` <a id="classFRH__Integration_1a2416f70e5f8aefa4621077557046b518"></a>

Updates the locked status of the Environment Id.

#### Parameters
* `bLocked` If locked, disables the ResolveEnvironmentId function.

#### `public void `[`SetBaseURL`](#classFRH__Integration_1a2de7c31c9f2df613372b70899612a75e)`(FString InBaseUrl,const FString & Source)` <a id="classFRH__Integration_1a2de7c31c9f2df613372b70899612a75e"></a>

Set the base URL for all RallyHereAPI calls.

#### Parameters
* `InBaseURL` The base URL to use. 

* `Source` The source of the base URL change, for logging.

#### `public FString `[`GetBaseURL`](#classFRH__Integration_1a2133066a14b8ece9675e74ab9be18e68)`()` <a id="classFRH__Integration_1a2133066a14b8ece9675e74ab9be18e68"></a>

Get the current base URL (will run ResolveBaseURL if there isn't one)

#### `public void `[`ResolveBaseURL`](#classFRH__Integration_1ab948f32204bfe002d03f6faa58f4b761)`()` <a id="classFRH__Integration_1ab948f32204bfe002d03f6faa58f4b761"></a>

Check for a base URL across several sources and assign the first non-empty value to the APIs:

* Command line values from the keys in BaseURLCommandLineKeysInternal. By default these are: RallyHereURLX RallyHereURL RallyHereURLInternal

* Command line values from the keys in BaseURLCommandLineKeys, which are configured by ini

* ini value from the "RallyHereEnvURL" section, where the key is the current EnvironmentId returned from GetEnvironmentId

* ini value from the section for this class, with the "BaseUrl" key.

#### `public inline void `[`LockBaseURL`](#classFRH__Integration_1a5078259f8298619fa5ac7966da3f6e0c)`(bool bLocked)` <a id="classFRH__Integration_1a5078259f8298619fa5ac7966da3f6e0c"></a>

Updates the locked status of the Base URL.

#### Parameters
* `bLocked` If locked, disables the ResolveBaseURL function.

#### `public void `[`SetClientId`](#classFRH__Integration_1abbe2d34dc0d7a870c747f00c9ad1e4c5)`(FString InClientId,const FString & Source)` <a id="classFRH__Integration_1abbe2d34dc0d7a870c747f00c9ad1e4c5"></a>

Set the client ID for the AuthContext.

#### Parameters
* `InClientId` The client ID to use. 

* `Source` The source of the base Client Id Change, for logging.

#### `public FString `[`GetClientId`](#classFRH__Integration_1a695e02ae6c4327902afcfe12a121b6cd)`()` <a id="classFRH__Integration_1a695e02ae6c4327902afcfe12a121b6cd"></a>

Get the current client ID (will run ResolveClientId if there isn't one).

#### `public void `[`ResolveClientId`](#classFRH__Integration_1a13a7c74b6fce44f275bc0131442c5f61)`()` <a id="classFRH__Integration_1a13a7c74b6fce44f275bc0131442c5f61"></a>

Check for a client ID across several sources and assign the first non-empty value to the APIs:

* Command line values from the keys in ClientIdCommandLineKeysInternal. By default these are: RallyHereClientIdX RallyHereClientId RallyHereClientIdInternal

* Command line values from the keys in ClientIdCommandLineKeys, which are configured by ini

* ini value from the "RallyHere" section, with the "ClientId" key.

* ini value from the section for this class, with the "ClientId" key.

#### `public inline void `[`LockClientId`](#classFRH__Integration_1ae547716a7648acf415dee0f3d334a7ac)`(bool bLocked)` <a id="classFRH__Integration_1ae547716a7648acf415dee0f3d334a7ac"></a>

Updates the locked status of the Client Id.

#### Parameters
* `bLocked` If locked, disables the ResolveClientId function.

#### `public void `[`SetClientSecret`](#classFRH__Integration_1a6b05ae0200ee5f66ed2ce503abbbdf88)`(FString InClientSecret,const FString & Source)` <a id="classFRH__Integration_1a6b05ae0200ee5f66ed2ce503abbbdf88"></a>

Set the client secret for the AuthContext.

#### Parameters
* `InClientSecret` The client secret to use. 

* `Source` The source of the base Client Secret Change, for logging.

#### `public FString `[`GetClientSecret`](#classFRH__Integration_1ac50700a8ff4e112ed60171ffbf5817b7)`()` <a id="classFRH__Integration_1ac50700a8ff4e112ed60171ffbf5817b7"></a>

Get the current client secret (will run ResolveClientSecret if there isn't one).

#### `public void `[`ResolveClientSecret`](#classFRH__Integration_1a19706c54b4a17d6e82b3f86c22247be2)`()` <a id="classFRH__Integration_1a19706c54b4a17d6e82b3f86c22247be2"></a>

Check for a client secret across several sources and assign the first non-empty value to the APIs:

* Command line values from the keys in ClientSecretCommandLineKeysInternal. By default these are: RallyHereClientSecretX RallyHereClientSecret RallyHereClientSecretInternal

* Command line values from the keys in ClientSecretCommandLineKeys, which are configured by ini

* ini value from the "RallyHere" section, with the "ClientSecret" key.

* ini value from the section for this class, with the "ClientSecret" key.

#### `public inline void `[`LockClientSecret`](#classFRH__Integration_1aeb750cd617fad0b3ade042b7a7c1d54a)`(bool bLocked)` <a id="classFRH__Integration_1aeb750cd617fad0b3ade042b7a7c1d54a"></a>

Updates the locked status of the Client Secret.

#### Parameters
* `bLocked` If locked, disables the ResolveClientSecret function.

#### `public inline `[`FRH_WebRequests`](WebRequest.md#classFRH__WebRequests)` * `[`GetWebRequestTracker`](#classFRH__Integration_1a3b54823f537913d46a2266f9a4875a16)`() const` <a id="classFRH__Integration_1a3b54823f537913d46a2266f9a4875a16"></a>

Gets the Web Request Tracker.

#### `public inline `[`FRH_Diagnostics`](Diagnostics.md#classFRH__Diagnostics)` * `[`GetDiagnostics`](#classFRH__Integration_1a0f7dc5599a89b010715dba506bb16288)`() const` <a id="classFRH__Integration_1a0f7dc5599a89b010715dba506bb16288"></a>

Gets the Diagnostic Reporter.

