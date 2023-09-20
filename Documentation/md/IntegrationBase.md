# IntegrationBase <a id="group__IntegrationBase"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`FRallyHereIntegrationModule`](#classFRallyHereIntegrationModule) | Module for the Rally Here Integration Layer.
`class `[`URH_Integration`](#classURH__Integration) | Main integration layer handler.

## class `FRallyHereIntegrationModule` <a id="classFRallyHereIntegrationModule"></a>

```
class FRallyHereIntegrationModule
  : public IModuleInterface
```

Module for the Rally Here Integration Layer.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`~FRallyHereIntegrationModule`](#classFRallyHereIntegrationModule_1a05fc3130408ed64a45219dfdaca29120)`() = default` | Default constructor.
`public void `[`StartupModule`](#classFRallyHereIntegrationModule_1ac91ef7cb3468c0eb68c74069f99fa47b)`()` | Initializes the module.
`public void `[`ShutdownModule`](#classFRallyHereIntegrationModule_1a537c97b39e36b257d3499bb8f88b2aff)`()` | Safely ends the module.
`public inline `[`URH_Integration`](IntegrationBase.md#classURH__Integration)` & `[`GetIntegration`](#classFRallyHereIntegrationModule_1aef9bad7d1f539b0e86e055663d30df2a)`() const` | Gets the Integration class fromt he module.

#### Members

#### `public  `[`~FRallyHereIntegrationModule`](#classFRallyHereIntegrationModule_1a05fc3130408ed64a45219dfdaca29120)`() = default` <a id="classFRallyHereIntegrationModule_1a05fc3130408ed64a45219dfdaca29120"></a>

Default constructor.

<br>
#### `public void `[`StartupModule`](#classFRallyHereIntegrationModule_1ac91ef7cb3468c0eb68c74069f99fa47b)`()` <a id="classFRallyHereIntegrationModule_1ac91ef7cb3468c0eb68c74069f99fa47b"></a>

Initializes the module.

<br>
#### `public void `[`ShutdownModule`](#classFRallyHereIntegrationModule_1a537c97b39e36b257d3499bb8f88b2aff)`()` <a id="classFRallyHereIntegrationModule_1a537c97b39e36b257d3499bb8f88b2aff"></a>

Safely ends the module.

<br>
#### `public inline `[`URH_Integration`](IntegrationBase.md#classURH__Integration)` & `[`GetIntegration`](#classFRallyHereIntegrationModule_1aef9bad7d1f539b0e86e055663d30df2a)`() const` <a id="classFRallyHereIntegrationModule_1aef9bad7d1f539b0e86e055663d30df2a"></a>

Gets the Integration class fromt he module.

<br>
## class `URH_Integration` <a id="classURH__Integration"></a>

```
class URH_Integration
  : public UObject
```

Main integration layer handler.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void `[`Initialize`](#classURH__Integration_1a900d421aea13c81ac91e48ec7a0b8f98)`()` | Initialize the Integration layer.
`public void `[`Uninitialize`](#classURH__Integration_1af1069eb3dfe1229a2a2b0044b5d4ab17)`()` | Safely tears down the Integration layer.
`public inline RallyHereAPI::FRallyHereAPIAll & `[`GetAPIs`](#classURH__Integration_1ae6de9d69bfaa3d3386a3bb47380156b3)`()` | Gets all the APIs.
`public inline HttpRetryManagerPtr `[`GetRetryManager`](#classURH__Integration_1a79fc427b8c7eebdbd4a973bad90682ad)`() const` | Gets Base Retry Manager for all RallyHereAPI calls.
`public void `[`SetSandboxId`](#classURH__Integration_1aff2625ff09d78a10270d2caa51451a51)`(FString InSandboxId,FString Source)` | Sets the sandbox for he connection.
`public FString `[`GetSandboxId`](#classURH__Integration_1a08285db72758c4634323e2ab1f53c203)`()` | Get the current Sandbox Id (will run ResolveSandboxId if there isn't one)
`public void `[`ResolveSandboxId`](#classURH__Integration_1a228af5b6dfe7ce03b50fed3672285f09)`()` | Get the Sandbox ID used for finding the base URL from the first of the following sources:
`public inline void `[`LockSandboxId`](#classURH__Integration_1acc5ea61270eed353a3699f5571b8f1f1)`(bool bLocked)` | Updates the locked status of the Sandbox Id.
`public void `[`SetBaseURL`](#classURH__Integration_1a9669e3313670455164a410f7557fedb2)`(FString InBaseUrl,FString Source)` | Set the base URL for all RallyHereAPI calls.
`public FString `[`GetBaseURL`](#classURH__Integration_1a6a80ff137a6b4417db6a0e022f8bd7f2)`()` | Get the current base URL (will run ResolveBaseURL if there isn't one)
`public void `[`ResolveBaseURL`](#classURH__Integration_1a9ba65df152ad1d5205d9a43959d63b3b)`()` | Check for a base URL across several sources and assign the first non-empty value to the APIs:
`public inline void `[`LockBaseURL`](#classURH__Integration_1a2d48d18ed8c425037b48716951c609b7)`(bool bLocked)` | Updates the locked status of the Base URL.
`public void `[`SetClientId`](#classURH__Integration_1a5578fc1861dfeb34aa7f766136b8062f)`(FString InClientId,FString Source)` | Set the client ID for the AuthContext.
`public FString `[`GetClientId`](#classURH__Integration_1a7dde924eb4f662a32d710711a2a5d45d)`()` | Get the current client ID (will run ResolveClientId if there isn't one).
`public void `[`ResolveClientId`](#classURH__Integration_1aa5c8e07f1530d510afcb84e42c3eef06)`()` | Check for a client ID across several sources and assign the first non-empty value to the APIs:
`public inline void `[`LockClientId`](#classURH__Integration_1a04b8f6446f4bc3380d15a20129804de6)`(bool bLocked)` | Updates the locked status of the Client Id.
`public void `[`SetClientSecret`](#classURH__Integration_1a0bae4ace96859c8a98d49491760e1568)`(FString InClientSecret,FString Source)` | Set the client secret for the AuthContext.
`public FString `[`GetClientSecret`](#classURH__Integration_1a3c51a0686676ab34896ed21fe7ed786e)`()` | Get the current client secret (will run ResolveClientSecret if there isn't one).
`public void `[`ResolveClientSecret`](#classURH__Integration_1acf88cad66d6acbf99495f8895da38917)`()` | Check for a client secret across several sources and assign the first non-empty value to the APIs:
`public inline void `[`LockClientSecret`](#classURH__Integration_1a05204a2d20528a3b4f59952368ae1814)`(bool bLocked)` | Updates the locked status of the Client Secret.
`public inline class `[`URH_WebRequests`](WebRequest.md#classURH__WebRequests)` * `[`GetWebRequestTracker`](#classURH__Integration_1aa0eca33c0d2add66db9ecf8d169325a0)`() const` | Gets the Web Request Tracker.
`public inline class `[`URH_Diagnostics`](Diagnostics.md#classURH__Diagnostics)` * `[`GetDiagnostics`](#classURH__Integration_1a9031d6508ab6dd48cbfa74e9e698fbdb)`() const` | Gets the Diagnostic Reporter.

#### Members

#### `public void `[`Initialize`](#classURH__Integration_1a900d421aea13c81ac91e48ec7a0b8f98)`()` <a id="classURH__Integration_1a900d421aea13c81ac91e48ec7a0b8f98"></a>

Initialize the Integration layer.

<br>
#### `public void `[`Uninitialize`](#classURH__Integration_1af1069eb3dfe1229a2a2b0044b5d4ab17)`()` <a id="classURH__Integration_1af1069eb3dfe1229a2a2b0044b5d4ab17"></a>

Safely tears down the Integration layer.

<br>
#### `public inline RallyHereAPI::FRallyHereAPIAll & `[`GetAPIs`](#classURH__Integration_1ae6de9d69bfaa3d3386a3bb47380156b3)`()` <a id="classURH__Integration_1ae6de9d69bfaa3d3386a3bb47380156b3"></a>

Gets all the APIs.

<br>
#### `public inline HttpRetryManagerPtr `[`GetRetryManager`](#classURH__Integration_1a79fc427b8c7eebdbd4a973bad90682ad)`() const` <a id="classURH__Integration_1a79fc427b8c7eebdbd4a973bad90682ad"></a>

Gets Base Retry Manager for all RallyHereAPI calls.

<br>
#### `public void `[`SetSandboxId`](#classURH__Integration_1aff2625ff09d78a10270d2caa51451a51)`(FString InSandboxId,FString Source)` <a id="classURH__Integration_1aff2625ff09d78a10270d2caa51451a51"></a>

Sets the sandbox for he connection.

#### Parameters
* `InSandboxId` Id of the Sandbox to use. 

* `Source` The source of the sandbox change, for logging.

<br>
#### `public FString `[`GetSandboxId`](#classURH__Integration_1a08285db72758c4634323e2ab1f53c203)`()` <a id="classURH__Integration_1a08285db72758c4634323e2ab1f53c203"></a>

Get the current Sandbox Id (will run ResolveSandboxId if there isn't one)

<br>
#### `public void `[`ResolveSandboxId`](#classURH__Integration_1a228af5b6dfe7ce03b50fed3672285f09)`()` <a id="classURH__Integration_1a228af5b6dfe7ce03b50fed3672285f09"></a>

Get the Sandbox ID used for finding the base URL from the first of the following sources:

* Command line values from the keys in SandboxCommandLineKeys. By default these are: RallyHereSandboxX RallyHereSandbox RallyHereSandboxInternal

* Results from GetSandboxId from the SandboxOSSName (or default if one is not provided)

<br>
#### `public inline void `[`LockSandboxId`](#classURH__Integration_1acc5ea61270eed353a3699f5571b8f1f1)`(bool bLocked)` <a id="classURH__Integration_1acc5ea61270eed353a3699f5571b8f1f1"></a>

Updates the locked status of the Sandbox Id.

#### Parameters
* `bLocked` If locked, disables the ResolveSandboxId function.

<br>
#### `public void `[`SetBaseURL`](#classURH__Integration_1a9669e3313670455164a410f7557fedb2)`(FString InBaseUrl,FString Source)` <a id="classURH__Integration_1a9669e3313670455164a410f7557fedb2"></a>

Set the base URL for all RallyHereAPI calls.

#### Parameters
* `InBaseURL` The base URL to use. 

* `Source` The source of the base URL change, for logging.

<br>
#### `public FString `[`GetBaseURL`](#classURH__Integration_1a6a80ff137a6b4417db6a0e022f8bd7f2)`()` <a id="classURH__Integration_1a6a80ff137a6b4417db6a0e022f8bd7f2"></a>

Get the current base URL (will run ResolveBaseURL if there isn't one)

<br>
#### `public void `[`ResolveBaseURL`](#classURH__Integration_1a9ba65df152ad1d5205d9a43959d63b3b)`()` <a id="classURH__Integration_1a9ba65df152ad1d5205d9a43959d63b3b"></a>

Check for a base URL across several sources and assign the first non-empty value to the APIs:

* Command line values from the keys in BaseURLCommandLineKeys. By default these are: RallyHereURLX RallyHereURL RallyHereURLInternal

* ini value from the "RallyHereSandboxURL" section, where the key is the current sandboxId returned from GetSandboxId

* ini value from the section for this class, with the "BaseUrl" key.

<br>
#### `public inline void `[`LockBaseURL`](#classURH__Integration_1a2d48d18ed8c425037b48716951c609b7)`(bool bLocked)` <a id="classURH__Integration_1a2d48d18ed8c425037b48716951c609b7"></a>

Updates the locked status of the Base URL.

#### Parameters
* `bLocked` If locked, disables the ResolveBaseURL function.

<br>
#### `public void `[`SetClientId`](#classURH__Integration_1a5578fc1861dfeb34aa7f766136b8062f)`(FString InClientId,FString Source)` <a id="classURH__Integration_1a5578fc1861dfeb34aa7f766136b8062f"></a>

Set the client ID for the AuthContext.

#### Parameters
* `InClientId` The client ID to use. 

* `Source` The source of the base Client Id Change, for logging.

<br>
#### `public FString `[`GetClientId`](#classURH__Integration_1a7dde924eb4f662a32d710711a2a5d45d)`()` <a id="classURH__Integration_1a7dde924eb4f662a32d710711a2a5d45d"></a>

Get the current client ID (will run ResolveClientId if there isn't one).

<br>
#### `public void `[`ResolveClientId`](#classURH__Integration_1aa5c8e07f1530d510afcb84e42c3eef06)`()` <a id="classURH__Integration_1aa5c8e07f1530d510afcb84e42c3eef06"></a>

Check for a client ID across several sources and assign the first non-empty value to the APIs:

* Command line values from the keys in ClientIdCommandLineKeys. By default these are: RallyHereClientIdX RallyHereClientId RallyHereClientIdInternal

* ini value from the "RallyHere" section, with the "ClientId" key.

* ini value from the section for this class, with the "ClientId" key.

<br>
#### `public inline void `[`LockClientId`](#classURH__Integration_1a04b8f6446f4bc3380d15a20129804de6)`(bool bLocked)` <a id="classURH__Integration_1a04b8f6446f4bc3380d15a20129804de6"></a>

Updates the locked status of the Client Id.

#### Parameters
* `bLocked` If locked, disables the ResolveClientId function.

<br>
#### `public void `[`SetClientSecret`](#classURH__Integration_1a0bae4ace96859c8a98d49491760e1568)`(FString InClientSecret,FString Source)` <a id="classURH__Integration_1a0bae4ace96859c8a98d49491760e1568"></a>

Set the client secret for the AuthContext.

#### Parameters
* `InClientSecret` The client secret to use. 

* `Source` The source of the base Client Secret Change, for logging.

<br>
#### `public FString `[`GetClientSecret`](#classURH__Integration_1a3c51a0686676ab34896ed21fe7ed786e)`()` <a id="classURH__Integration_1a3c51a0686676ab34896ed21fe7ed786e"></a>

Get the current client secret (will run ResolveClientSecret if there isn't one).

<br>
#### `public void `[`ResolveClientSecret`](#classURH__Integration_1acf88cad66d6acbf99495f8895da38917)`()` <a id="classURH__Integration_1acf88cad66d6acbf99495f8895da38917"></a>

Check for a client secret across several sources and assign the first non-empty value to the APIs:

* Command line values from the keys in ClientSecretCommandLineKeys. By default these are: RallyHereClientSecretX RallyHereClientSecret RallyHereClientSecretInternal

* ini value from the "RallyHere" section, with the "ClientSecret" key.

* ini value from the section for this class, with the "ClientSecret" key.

<br>
#### `public inline void `[`LockClientSecret`](#classURH__Integration_1a05204a2d20528a3b4f59952368ae1814)`(bool bLocked)` <a id="classURH__Integration_1a05204a2d20528a3b4f59952368ae1814"></a>

Updates the locked status of the Client Secret.

#### Parameters
* `bLocked` If locked, disables the ResolveClientSecret function.

<br>
#### `public inline class `[`URH_WebRequests`](WebRequest.md#classURH__WebRequests)` * `[`GetWebRequestTracker`](#classURH__Integration_1aa0eca33c0d2add66db9ecf8d169325a0)`() const` <a id="classURH__Integration_1aa0eca33c0d2add66db9ecf8d169325a0"></a>

Gets the Web Request Tracker.

<br>
#### `public inline class `[`URH_Diagnostics`](Diagnostics.md#classURH__Diagnostics)` * `[`GetDiagnostics`](#classURH__Integration_1a9031d6508ab6dd48cbfa74e9e698fbdb)`() const` <a id="classURH__Integration_1a9031d6508ab6dd48cbfa74e9e698fbdb"></a>

Gets the Diagnostic Reporter.

<br>
