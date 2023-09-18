# Entitlement <a id="group__Entitlement"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_EntitlementSubsystem`](#classURH__EntitlementSubsystem) | Subsystem for handling requesting and processing entitlements from the online subsystem.
`class `[`FRH_EntitlementProcessor`](#classFRH__EntitlementProcessor) | Processor class used to make entitlment process calls.

## class `URH_EntitlementSubsystem` <a id="classURH__EntitlementSubsystem"></a>

```
class URH_EntitlementSubsystem
  : public URH_LocalPlayerSubsystemPlugin
```

Subsystem for handling requesting and processing entitlements from the online subsystem.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__EntitlementSubsystem_1a84d5e948fe867f75a92f47b8ddd139fb)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__EntitlementSubsystem_1af3e449d4538d7e01532ab1b55e5d937c)`()` | Safely tears down the subsystem.
`public virtual void `[`OnUserChanged`](#classURH__EntitlementSubsystem_1a5fd25cdb4e40bdf432b51bc96802b351)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` | Notification that the user changed for the owning local player subsystem.
`public void `[`HandleNotification`](#classURH__EntitlementSubsystem_1a79e18971cbc52e3206cc1a3c6e56ab05)`(const `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` | Handle a notification from the inventory API.
`public void `[`SubmitEntitlementsForLoggedInOSS`](#classURH__EntitlementSubsystem_1a088f33babad2c1631c61a0f07d998320)`(FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate,FRH_GetPlatformRegionDelegate PlatformRegionDelegate)` | Start Async Task to Process Entitlements for the users connected OSS.
`public void `[`SubmitEntitlementsForOSS`](#classURH__EntitlementSubsystem_1ae9fb7f95769f90a24c8693bb41029b8b)`(ERHAPI_Platform platform,FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate,FRH_GetPlatformRegionDelegate PlatformRegionDelegate)` | Start Async Task to Process Entitlements for a specific OSS.
`public TMap< FString, `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` > * `[`GetEntitlementResults`](#classURH__EntitlementSubsystem_1ac478a330f287a564dd51e49a430e2809)`()` | Gets the map of all processed entitlement results.
`public void `[`SetEntitlementOSSName`](#classURH__EntitlementSubsystem_1afb94ef35894b136c1a51c6695e24c06c)`(const FName & InEntitlementOSSName)` | Sets the entitlement OSS Name.
`public FName `[`GetEntitlementOSSName`](#classURH__EntitlementSubsystem_1a8aa48ac9424aea1058540ca316d1e426)`()` | Gets the set entitlement OSS Name.
`protected TMap< FString, `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` > `[`EntitlementProcessResultMap`](#classURH__EntitlementSubsystem_1ae694a08037debcf46c6c8cbefd33b0b3) | Map of results from Entitlement Process calls.
`protected FName `[`EntitlementOSSName`](#classURH__EntitlementSubsystem_1a3a1c18058080e0dc894e3f986f9f4230) | Online Subsystem to use for entitlements. If not provided, will use the default OSS.
`protected FTimerManager & `[`GetTimerManager`](#classURH__EntitlementSubsystem_1a3ac920200686b3ec67e976322e2913db)`()` | Helper to get the engines Timer Manager.
`protected `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetRH_LocalPlayerSubsystem`](#classURH__EntitlementSubsystem_1ab1f1a051a4db3625191e529a6536a14a)`() const` | Helper to the local player subsystem.
`protected IOnlineSubsystem * `[`GetOSS`](#classURH__EntitlementSubsystem_1a9d4639fe82b8dad3e126519ac79f579b)`() const` | Helper to the online subsystem.
`protected IOnlinePurchasePtr `[`GetPurchaseSubsystem`](#classURH__EntitlementSubsystem_1a68e068e84180db974ab6b29444847399)`() const` | Helper to the online purchase subsystem.

#### Members

#### `public virtual void `[`Initialize`](#classURH__EntitlementSubsystem_1a84d5e948fe867f75a92f47b8ddd139fb)`()` <a id="classURH__EntitlementSubsystem_1a84d5e948fe867f75a92f47b8ddd139fb"></a>

Initialize the subsystem.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__EntitlementSubsystem_1af3e449d4538d7e01532ab1b55e5d937c)`()` <a id="classURH__EntitlementSubsystem_1af3e449d4538d7e01532ab1b55e5d937c"></a>

Safely tears down the subsystem.

<br>
#### `public virtual void `[`OnUserChanged`](#classURH__EntitlementSubsystem_1a5fd25cdb4e40bdf432b51bc96802b351)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` <a id="classURH__EntitlementSubsystem_1a5fd25cdb4e40bdf432b51bc96802b351"></a>

Notification that the user changed for the owning local player subsystem.

<br>
#### `public void `[`HandleNotification`](#classURH__EntitlementSubsystem_1a79e18971cbc52e3206cc1a3c6e56ab05)`(const `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` <a id="classURH__EntitlementSubsystem_1a79e18971cbc52e3206cc1a3c6e56ab05"></a>

Handle a notification from the inventory API.

#### Parameters
* `Notification` The notification to handle 

* `APIName` The name of the API that sent the notification 

* `APIParams` The parameters for the API that sent the notification

<br>
#### `public void `[`SubmitEntitlementsForLoggedInOSS`](#classURH__EntitlementSubsystem_1a088f33babad2c1631c61a0f07d998320)`(FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate,FRH_GetPlatformRegionDelegate PlatformRegionDelegate)` <a id="classURH__EntitlementSubsystem_1a088f33babad2c1631c61a0f07d998320"></a>

Start Async Task to Process Entitlements for the users connected OSS.

#### Parameters
* `EntitlementProcessorCompleteDelegate` Delegate callback for when the entitlement process is complete. 

* `PlatformRegionDelegate` Delegate callback for getting the platform region.

<br>
#### `public void `[`SubmitEntitlementsForOSS`](#classURH__EntitlementSubsystem_1ae9fb7f95769f90a24c8693bb41029b8b)`(ERHAPI_Platform platform,FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate,FRH_GetPlatformRegionDelegate PlatformRegionDelegate)` <a id="classURH__EntitlementSubsystem_1ae9fb7f95769f90a24c8693bb41029b8b"></a>

Start Async Task to Process Entitlements for a specific OSS.

#### Parameters
* `platform` The OSS to process entitlements for. 

* `EntitlementProcessorCompleteDelegate` Delegate callback for when the entitlement process is complete. 

* `PlatformRegionDelegate` Delegate callback for getting the platform region.

<br>
#### `public TMap< FString, `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` > * `[`GetEntitlementResults`](#classURH__EntitlementSubsystem_1ac478a330f287a564dd51e49a430e2809)`()` <a id="classURH__EntitlementSubsystem_1ac478a330f287a564dd51e49a430e2809"></a>

Gets the map of all processed entitlement results.

<br>
#### `public void `[`SetEntitlementOSSName`](#classURH__EntitlementSubsystem_1afb94ef35894b136c1a51c6695e24c06c)`(const FName & InEntitlementOSSName)` <a id="classURH__EntitlementSubsystem_1afb94ef35894b136c1a51c6695e24c06c"></a>

Sets the entitlement OSS Name.

#### Parameters
* `InEntitlementOSSName` The OSS name to use for entitlements.

<br>
#### `public FName `[`GetEntitlementOSSName`](#classURH__EntitlementSubsystem_1a8aa48ac9424aea1058540ca316d1e426)`()` <a id="classURH__EntitlementSubsystem_1a8aa48ac9424aea1058540ca316d1e426"></a>

Gets the set entitlement OSS Name.

<br>
#### `protected TMap< FString, `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` > `[`EntitlementProcessResultMap`](#classURH__EntitlementSubsystem_1ae694a08037debcf46c6c8cbefd33b0b3) <a id="classURH__EntitlementSubsystem_1ae694a08037debcf46c6c8cbefd33b0b3"></a>

Map of results from Entitlement Process calls.

<br>
#### `protected FName `[`EntitlementOSSName`](#classURH__EntitlementSubsystem_1a3a1c18058080e0dc894e3f986f9f4230) <a id="classURH__EntitlementSubsystem_1a3a1c18058080e0dc894e3f986f9f4230"></a>

Online Subsystem to use for entitlements. If not provided, will use the default OSS.

<br>
#### `protected FTimerManager & `[`GetTimerManager`](#classURH__EntitlementSubsystem_1a3ac920200686b3ec67e976322e2913db)`()` <a id="classURH__EntitlementSubsystem_1a3ac920200686b3ec67e976322e2913db"></a>

Helper to get the engines Timer Manager.

<br>
#### `protected `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetRH_LocalPlayerSubsystem`](#classURH__EntitlementSubsystem_1ab1f1a051a4db3625191e529a6536a14a)`() const` <a id="classURH__EntitlementSubsystem_1ab1f1a051a4db3625191e529a6536a14a"></a>

Helper to the local player subsystem.

<br>
#### `protected IOnlineSubsystem * `[`GetOSS`](#classURH__EntitlementSubsystem_1a9d4639fe82b8dad3e126519ac79f579b)`() const` <a id="classURH__EntitlementSubsystem_1a9d4639fe82b8dad3e126519ac79f579b"></a>

Helper to the online subsystem.

<br>
#### `protected IOnlinePurchasePtr `[`GetPurchaseSubsystem`](#classURH__EntitlementSubsystem_1a68e068e84180db974ab6b29444847399)`() const` <a id="classURH__EntitlementSubsystem_1a68e068e84180db974ab6b29444847399"></a>

Helper to the online purchase subsystem.

<br>
## class `FRH_EntitlementProcessor` <a id="classFRH__EntitlementProcessor"></a>

```
class FRH_EntitlementProcessor
  : public FRH_AsyncTaskHelper
```

Processor class used to make entitlment process calls.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`FRH_EntitlementProcessor`](#classFRH__EntitlementProcessor_1aae2d4efd51a19ff01d8383fa7f2b07fc)`(`[`URH_EntitlementSubsystem`](Entitlement.md#classURH__EntitlementSubsystem)` * InEntitlementSubsystem,IOnlineSubsystem * InOSS,const IOnlinePurchasePtr & InPurchaseSubsystem,int32 InLocalUserNum,FUniqueNetIdWrapper InPlatformUserId,FTimerManager & InTimerManager,FRH_ProcessEntitlementCompletedDelegate InProcessorCompleteDelegate,FRH_GetPlatformRegionDelegate InGetPlatformRegionDelegate,std::optional< ERHAPI_Platform > InOverridePlatform)` | Main Constructor for Entitlement Processor, used internally by the entitlement process calls.
`public inline virtual void `[`Start`](#classFRH__EntitlementProcessor_1a3424a20d87e8738efe75b97003af7122)`()` | Start the Entitlement processing.
`protected FAuthContextPtr `[`AuthContext`](#classFRH__EntitlementProcessor_1a8cafa17c7919e113fb52e9ea0d28ff00) | Auth Context used by the entitlement subsystem.
`protected TWeakObjectPtr< `[`URH_EntitlementSubsystem`](Entitlement.md#classURH__EntitlementSubsystem)` > `[`EntitlementSubsystem`](#classFRH__EntitlementProcessor_1acc7904271cef9ed650b253c449c7b37d) | Pointer back to the entitlement subsystem that owns this processor.
`protected IOnlineSubsystem * `[`OSS`](#classFRH__EntitlementProcessor_1a28022acb7083dbe7f18c84f05d78ceaf) | Online Subsystem this processor is for.
`protected IOnlinePurchasePtr `[`PurchaseSubsystem`](#classFRH__EntitlementProcessor_1a0ed705e9a4a3b83e9b30ab32766e202d) | Online Purchase Subsystem this processor is for.
`protected int32 `[`LocalUserNum`](#classFRH__EntitlementProcessor_1ab125739cfbb23f62b4e2a2a597b45b68) | Contorller Id of the user.
`protected FUniqueNetIdWrapper `[`PlatformUserId`](#classFRH__EntitlementProcessor_1a95dd9e99de314b3c224af67c57b5bfeb) | Platform User Id of the user.
`protected FTimerManager & `[`TimerManager`](#classFRH__EntitlementProcessor_1a6d90d0fbf8a9eb2155c36ecd2cdc0681) | The engines Timer Manager.
`protected FRH_ProcessEntitlementCompletedDelegate `[`EntitlementProcessorCompleteDelegate`](#classFRH__EntitlementProcessor_1a6e54fc02de56616ff00d71428f9271d1) | Delegate to fire when completed.
`protected FRH_GetPlatformRegionDelegate `[`GetPlatformRegionDelegate`](#classFRH__EntitlementProcessor_1a5acc7ff1af2e637583073391e4872585) | Delegate that fires when getting the platforms region.
`protected ERHAPI_Platform `[`Platform`](#classFRH__EntitlementProcessor_1a5bc5a0e1c2832d0f8c9322ac37443e3d) | Platform the entitlements are for.
`protected bool `[`IsOverride`](#classFRH__EntitlementProcessor_1a09185186322b5443b471ab8475a2b5cd) | If set, the platform is an override of the main connection platform.
`protected const FString `[`TaskId`](#classFRH__EntitlementProcessor_1a1476a4cb8a1fff62fa930fb2d479249e) | Unique Id for the process task.
`protected `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` `[`ProcessEntitlementResult`](#classFRH__EntitlementProcessor_1aa858ecc28f83dcf6fe2d443bc9fc4b97) | Result of the entitlement process.
`protected int32 `[`ReceiptsToValidateCount`](#classFRH__EntitlementProcessor_1a4e65fb1fccf2c0975ec8d98403bba63a) | Tracks how many reciepts are still needed to be validated.
`protected float `[`fEntitlementCheckPollInterval`](#classFRH__EntitlementProcessor_1aca68bba4f68c07e9ba606f1d2e06d05b) | Polling interval for entitlments.
`protected FTimerHandle `[`EntitlementCheckPollTimerHandle`](#classFRH__EntitlementProcessor_1a797b62a4002f0d3f773ea64e3c19a5b8) | Handler for the polling timer.
`protected FRH_AutoPollerPtr `[`EntitlementsPoller`](#classFRH__EntitlementProcessor_1a3fdf188edff75b2d6718abb8fe0bc092) | Auto poller for the entitlements.
`protected TArray< FPurchaseReceipt > `[`Receipts`](#classFRH__EntitlementProcessor_1a8ea9a176b97a2e6588623c1da581ace3) | Array of reciepts from the online subsystem entitlment check.
`protected FHttpRequestPtr `[`HttpRequest`](#classFRH__EntitlementProcessor_1a0875d568dc89e3e6bd17a5810b5dbf74) | Http Request for processing entitlements with the core.
`protected inline void `[`QueryEntitlements`](#classFRH__EntitlementProcessor_1a14594e7f19296138edf1f3a60b4db5d5)`()` | Queries entitlements from the online subsystem.
`protected inline void `[`QueryEntitlementsComplete`](#classFRH__EntitlementProcessor_1a737af4be11827f1273e85f34cda32782)`(const FOnlineError & Result,IOnlineSubsystem * ProvidedOSS)` | Response from the online subsystem query entitlements call.
`protected inline void `[`ValidateEntitlementReceipts`](#classFRH__EntitlementProcessor_1a48daa7a8dba548f2a76a045cf41f931b)`()` | Validates the entitlement receipts if needed by the platform.
`protected inline void `[`OnReceiptValidationComplete`](#classFRH__EntitlementProcessor_1afb74c96dc7449b0f1cba41d37ce3bc95)`(const FOnlineError & Result,const FString & ValidationInfo)` | Response from the online subsystem validate entitlements call.
`protected inline void `[`ProcessPlatformInventory`](#classFRH__EntitlementProcessor_1a6d7cf63dfeed08d563941c1b7eda9341)`()` | Processes the platform inventory and stores as cached responses.
`protected inline bool `[`CheckIfWeNeedToPoll`](#classFRH__EntitlementProcessor_1a73743de948c21bd9786c88c945d5a7af)`()` | Returns if there are pending entitlement checks being processed in the online subsystem.
`protected inline void `[`ProcessPlatformInventoryComplete`](#classFRH__EntitlementProcessor_1a8270605f44d3d3e9c78ef9c4fd5b85d8)`(const RallyHereAPI::FResponse_ProcessPlatformEntitlementsByPlayerUuid & Resp)` | Callback when the processing of platform inventory complets on the core.
`protected inline void `[`PollEntitlements`](#classFRH__EntitlementProcessor_1a9b36f0fdc9cccd5e0c810b4e207b082f)`(const FRH_PollCompleteFunc & Delegate)` | Polls for new entitlements.
`protected inline void `[`PollEntitlementComplete`](#classFRH__EntitlementProcessor_1ac23588455ebaabc9449d2f77855544aa)`(const RallyHereAPI::FResponse_RetrieveEntitlementsByPlayerUuid & Resp,FRH_PollCompleteFunc Delegate)` | Handles the response to a Poll Entitlements call.
`protected inline void `[`FinalizePurchase`](#classFRH__EntitlementProcessor_1a39d339db2e03ec7b1f4cccc6b5f4d997)`()` | Finalizes a purchase from an online subsystem.
`protected inline void `[`StartPoll`](#classFRH__EntitlementProcessor_1a2dca41f5044ed5242c51d88374339726)`()` | Starts polling of entitlements.
`protected inline void `[`StopPoll`](#classFRH__EntitlementProcessor_1acc23be16ab62b45f8c0ca6e943ef7310)`()` | Stops polling of entitlements.
`protected inline virtual FString `[`GetName`](#classFRH__EntitlementProcessor_1aec98538f3a4f33c7060a957f729cca6e)`() const` | Gets the name of the entitlement processor.
`protected inline virtual void `[`ExecuteCallback`](#classFRH__EntitlementProcessor_1aff8deb79458caad8c21235655a974fc7)`(bool bSuccess) const` | Triggers the callback of the Entitlements Processor.
`protected inline ERHAPI_PlatformRegion `[`GetRegionFromTitleSettings`](#classFRH__EntitlementProcessor_1a0b769f36b7b0bd3b0995aada92257960)`()` | Gets the region for the platform.

#### Members

#### `public inline  `[`FRH_EntitlementProcessor`](#classFRH__EntitlementProcessor_1aae2d4efd51a19ff01d8383fa7f2b07fc)`(`[`URH_EntitlementSubsystem`](Entitlement.md#classURH__EntitlementSubsystem)` * InEntitlementSubsystem,IOnlineSubsystem * InOSS,const IOnlinePurchasePtr & InPurchaseSubsystem,int32 InLocalUserNum,FUniqueNetIdWrapper InPlatformUserId,FTimerManager & InTimerManager,FRH_ProcessEntitlementCompletedDelegate InProcessorCompleteDelegate,FRH_GetPlatformRegionDelegate InGetPlatformRegionDelegate,std::optional< ERHAPI_Platform > InOverridePlatform)` <a id="classFRH__EntitlementProcessor_1aae2d4efd51a19ff01d8383fa7f2b07fc"></a>

Main Constructor for Entitlement Processor, used internally by the entitlement process calls.

<br>
#### `public inline virtual void `[`Start`](#classFRH__EntitlementProcessor_1a3424a20d87e8738efe75b97003af7122)`()` <a id="classFRH__EntitlementProcessor_1a3424a20d87e8738efe75b97003af7122"></a>

Start the Entitlement processing.

<br>
#### `protected FAuthContextPtr `[`AuthContext`](#classFRH__EntitlementProcessor_1a8cafa17c7919e113fb52e9ea0d28ff00) <a id="classFRH__EntitlementProcessor_1a8cafa17c7919e113fb52e9ea0d28ff00"></a>

Auth Context used by the entitlement subsystem.

<br>
#### `protected TWeakObjectPtr< `[`URH_EntitlementSubsystem`](Entitlement.md#classURH__EntitlementSubsystem)` > `[`EntitlementSubsystem`](#classFRH__EntitlementProcessor_1acc7904271cef9ed650b253c449c7b37d) <a id="classFRH__EntitlementProcessor_1acc7904271cef9ed650b253c449c7b37d"></a>

Pointer back to the entitlement subsystem that owns this processor.

<br>
#### `protected IOnlineSubsystem * `[`OSS`](#classFRH__EntitlementProcessor_1a28022acb7083dbe7f18c84f05d78ceaf) <a id="classFRH__EntitlementProcessor_1a28022acb7083dbe7f18c84f05d78ceaf"></a>

Online Subsystem this processor is for.

<br>
#### `protected IOnlinePurchasePtr `[`PurchaseSubsystem`](#classFRH__EntitlementProcessor_1a0ed705e9a4a3b83e9b30ab32766e202d) <a id="classFRH__EntitlementProcessor_1a0ed705e9a4a3b83e9b30ab32766e202d"></a>

Online Purchase Subsystem this processor is for.

<br>
#### `protected int32 `[`LocalUserNum`](#classFRH__EntitlementProcessor_1ab125739cfbb23f62b4e2a2a597b45b68) <a id="classFRH__EntitlementProcessor_1ab125739cfbb23f62b4e2a2a597b45b68"></a>

Contorller Id of the user.

<br>
#### `protected FUniqueNetIdWrapper `[`PlatformUserId`](#classFRH__EntitlementProcessor_1a95dd9e99de314b3c224af67c57b5bfeb) <a id="classFRH__EntitlementProcessor_1a95dd9e99de314b3c224af67c57b5bfeb"></a>

Platform User Id of the user.

<br>
#### `protected FTimerManager & `[`TimerManager`](#classFRH__EntitlementProcessor_1a6d90d0fbf8a9eb2155c36ecd2cdc0681) <a id="classFRH__EntitlementProcessor_1a6d90d0fbf8a9eb2155c36ecd2cdc0681"></a>

The engines Timer Manager.

<br>
#### `protected FRH_ProcessEntitlementCompletedDelegate `[`EntitlementProcessorCompleteDelegate`](#classFRH__EntitlementProcessor_1a6e54fc02de56616ff00d71428f9271d1) <a id="classFRH__EntitlementProcessor_1a6e54fc02de56616ff00d71428f9271d1"></a>

Delegate to fire when completed.

<br>
#### `protected FRH_GetPlatformRegionDelegate `[`GetPlatformRegionDelegate`](#classFRH__EntitlementProcessor_1a5acc7ff1af2e637583073391e4872585) <a id="classFRH__EntitlementProcessor_1a5acc7ff1af2e637583073391e4872585"></a>

Delegate that fires when getting the platforms region.

<br>
#### `protected ERHAPI_Platform `[`Platform`](#classFRH__EntitlementProcessor_1a5bc5a0e1c2832d0f8c9322ac37443e3d) <a id="classFRH__EntitlementProcessor_1a5bc5a0e1c2832d0f8c9322ac37443e3d"></a>

Platform the entitlements are for.

<br>
#### `protected bool `[`IsOverride`](#classFRH__EntitlementProcessor_1a09185186322b5443b471ab8475a2b5cd) <a id="classFRH__EntitlementProcessor_1a09185186322b5443b471ab8475a2b5cd"></a>

If set, the platform is an override of the main connection platform.

<br>
#### `protected const FString `[`TaskId`](#classFRH__EntitlementProcessor_1a1476a4cb8a1fff62fa930fb2d479249e) <a id="classFRH__EntitlementProcessor_1a1476a4cb8a1fff62fa930fb2d479249e"></a>

Unique Id for the process task.

<br>
#### `protected `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` `[`ProcessEntitlementResult`](#classFRH__EntitlementProcessor_1aa858ecc28f83dcf6fe2d443bc9fc4b97) <a id="classFRH__EntitlementProcessor_1aa858ecc28f83dcf6fe2d443bc9fc4b97"></a>

Result of the entitlement process.

<br>
#### `protected int32 `[`ReceiptsToValidateCount`](#classFRH__EntitlementProcessor_1a4e65fb1fccf2c0975ec8d98403bba63a) <a id="classFRH__EntitlementProcessor_1a4e65fb1fccf2c0975ec8d98403bba63a"></a>

Tracks how many reciepts are still needed to be validated.

<br>
#### `protected float `[`fEntitlementCheckPollInterval`](#classFRH__EntitlementProcessor_1aca68bba4f68c07e9ba606f1d2e06d05b) <a id="classFRH__EntitlementProcessor_1aca68bba4f68c07e9ba606f1d2e06d05b"></a>

Polling interval for entitlments.

<br>
#### `protected FTimerHandle `[`EntitlementCheckPollTimerHandle`](#classFRH__EntitlementProcessor_1a797b62a4002f0d3f773ea64e3c19a5b8) <a id="classFRH__EntitlementProcessor_1a797b62a4002f0d3f773ea64e3c19a5b8"></a>

Handler for the polling timer.

<br>
#### `protected FRH_AutoPollerPtr `[`EntitlementsPoller`](#classFRH__EntitlementProcessor_1a3fdf188edff75b2d6718abb8fe0bc092) <a id="classFRH__EntitlementProcessor_1a3fdf188edff75b2d6718abb8fe0bc092"></a>

Auto poller for the entitlements.

<br>
#### `protected TArray< FPurchaseReceipt > `[`Receipts`](#classFRH__EntitlementProcessor_1a8ea9a176b97a2e6588623c1da581ace3) <a id="classFRH__EntitlementProcessor_1a8ea9a176b97a2e6588623c1da581ace3"></a>

Array of reciepts from the online subsystem entitlment check.

<br>
#### `protected FHttpRequestPtr `[`HttpRequest`](#classFRH__EntitlementProcessor_1a0875d568dc89e3e6bd17a5810b5dbf74) <a id="classFRH__EntitlementProcessor_1a0875d568dc89e3e6bd17a5810b5dbf74"></a>

Http Request for processing entitlements with the core.

<br>
#### `protected inline void `[`QueryEntitlements`](#classFRH__EntitlementProcessor_1a14594e7f19296138edf1f3a60b4db5d5)`()` <a id="classFRH__EntitlementProcessor_1a14594e7f19296138edf1f3a60b4db5d5"></a>

Queries entitlements from the online subsystem.

<br>
#### `protected inline void `[`QueryEntitlementsComplete`](#classFRH__EntitlementProcessor_1a737af4be11827f1273e85f34cda32782)`(const FOnlineError & Result,IOnlineSubsystem * ProvidedOSS)` <a id="classFRH__EntitlementProcessor_1a737af4be11827f1273e85f34cda32782"></a>

Response from the online subsystem query entitlements call.

#### Parameters
* `Result` The result of the query. 

* `ProvidedOSS` The OSS that provided the result.

<br>
#### `protected inline void `[`ValidateEntitlementReceipts`](#classFRH__EntitlementProcessor_1a48daa7a8dba548f2a76a045cf41f931b)`()` <a id="classFRH__EntitlementProcessor_1a48daa7a8dba548f2a76a045cf41f931b"></a>

Validates the entitlement receipts if needed by the platform.

<br>
#### `protected inline void `[`OnReceiptValidationComplete`](#classFRH__EntitlementProcessor_1afb74c96dc7449b0f1cba41d37ce3bc95)`(const FOnlineError & Result,const FString & ValidationInfo)` <a id="classFRH__EntitlementProcessor_1afb74c96dc7449b0f1cba41d37ce3bc95"></a>

Response from the online subsystem validate entitlements call.

#### Parameters
* `Result` The result of the query. 

* `ValidationInfo` The validation info of the receipt.

<br>
#### `protected inline void `[`ProcessPlatformInventory`](#classFRH__EntitlementProcessor_1a6d7cf63dfeed08d563941c1b7eda9341)`()` <a id="classFRH__EntitlementProcessor_1a6d7cf63dfeed08d563941c1b7eda9341"></a>

Processes the platform inventory and stores as cached responses.

<br>
#### `protected inline bool `[`CheckIfWeNeedToPoll`](#classFRH__EntitlementProcessor_1a73743de948c21bd9786c88c945d5a7af)`()` <a id="classFRH__EntitlementProcessor_1a73743de948c21bd9786c88c945d5a7af"></a>

Returns if there are pending entitlement checks being processed in the online subsystem.

<br>
#### `protected inline void `[`ProcessPlatformInventoryComplete`](#classFRH__EntitlementProcessor_1a8270605f44d3d3e9c78ef9c4fd5b85d8)`(const RallyHereAPI::FResponse_ProcessPlatformEntitlementsByPlayerUuid & Resp)` <a id="classFRH__EntitlementProcessor_1a8270605f44d3d3e9c78ef9c4fd5b85d8"></a>

Callback when the processing of platform inventory complets on the core.

#### Parameters
* `Resp` The repsonse from the core.

<br>
#### `protected inline void `[`PollEntitlements`](#classFRH__EntitlementProcessor_1a9b36f0fdc9cccd5e0c810b4e207b082f)`(const FRH_PollCompleteFunc & Delegate)` <a id="classFRH__EntitlementProcessor_1a9b36f0fdc9cccd5e0c810b4e207b082f"></a>

Polls for new entitlements.

#### Parameters
* `Delegate` Delegate to callback when poll completes.

<br>
#### `protected inline void `[`PollEntitlementComplete`](#classFRH__EntitlementProcessor_1ac23588455ebaabc9449d2f77855544aa)`(const RallyHereAPI::FResponse_RetrieveEntitlementsByPlayerUuid & Resp,FRH_PollCompleteFunc Delegate)` <a id="classFRH__EntitlementProcessor_1ac23588455ebaabc9449d2f77855544aa"></a>

Handles the response to a Poll Entitlements call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected inline void `[`FinalizePurchase`](#classFRH__EntitlementProcessor_1a39d339db2e03ec7b1f4cccc6b5f4d997)`()` <a id="classFRH__EntitlementProcessor_1a39d339db2e03ec7b1f4cccc6b5f4d997"></a>

Finalizes a purchase from an online subsystem.

<br>
#### `protected inline void `[`StartPoll`](#classFRH__EntitlementProcessor_1a2dca41f5044ed5242c51d88374339726)`()` <a id="classFRH__EntitlementProcessor_1a2dca41f5044ed5242c51d88374339726"></a>

Starts polling of entitlements.

<br>
#### `protected inline void `[`StopPoll`](#classFRH__EntitlementProcessor_1acc23be16ab62b45f8c0ca6e943ef7310)`()` <a id="classFRH__EntitlementProcessor_1acc23be16ab62b45f8c0ca6e943ef7310"></a>

Stops polling of entitlements.

<br>
#### `protected inline virtual FString `[`GetName`](#classFRH__EntitlementProcessor_1aec98538f3a4f33c7060a957f729cca6e)`() const` <a id="classFRH__EntitlementProcessor_1aec98538f3a4f33c7060a957f729cca6e"></a>

Gets the name of the entitlement processor.

<br>
#### `protected inline virtual void `[`ExecuteCallback`](#classFRH__EntitlementProcessor_1aff8deb79458caad8c21235655a974fc7)`(bool bSuccess) const` <a id="classFRH__EntitlementProcessor_1aff8deb79458caad8c21235655a974fc7"></a>

Triggers the callback of the Entitlements Processor.

#### Parameters
* `bSuccess` If true, the entitlement process was successful.

<br>
#### `protected inline ERHAPI_PlatformRegion `[`GetRegionFromTitleSettings`](#classFRH__EntitlementProcessor_1a0b769f36b7b0bd3b0995aada92257960)`()` <a id="classFRH__EntitlementProcessor_1a0b769f36b7b0bd3b0995aada92257960"></a>

Gets the region for the platform.

<br>
