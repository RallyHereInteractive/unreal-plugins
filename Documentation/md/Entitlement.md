# group `Entitlement` <a id="group__Entitlement"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_EntitlementSubsystem`](#classURH__EntitlementSubsystem) | Subsystem for handling requesting and processing entitlements from the online subsystem.

## class `URH_EntitlementSubsystem` <a id="classURH__EntitlementSubsystem"></a>

```
class URH_EntitlementSubsystem
  : public URH_LocalPlayerSubsystemPlugin
```

Subsystem for handling requesting and processing entitlements from the online subsystem.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__EntitlementSubsystem_1a84d5e948fe867f75a92f47b8ddd139fb)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__EntitlementSubsystem_1af3e449d4538d7e01532ab1b55e5d937c)`()` | Safely tears down the subsystem.
`public virtual void `[`OnUserChanged`](#classURH__EntitlementSubsystem_1a5fd25cdb4e40bdf432b51bc96802b351)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` | Notification that the user changed for the owning local player subsystem.
`public void `[`HandleNotification`](#classURH__EntitlementSubsystem_1a79e18971cbc52e3206cc1a3c6e56ab05)`(const `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` | Handle a notification from the inventory API.
`public virtual void `[`SubmitEntitlementsForLoggedInOSS`](#classURH__EntitlementSubsystem_1acc6ed4a116445c4e3946872a7cb30335)`(const FRH_ProcessEntitlementCompletedDelegate & EntitlementProcessorCompleteDelegate,TOptional< ERHAPI_PlatformRegion > Region)` | Start Async Task to Process Entitlements for the users connected OSS.
`public void `[`SubmitEntitlementsForPlatform`](#classURH__EntitlementSubsystem_1a20c06506e33aa850964b771dfcbae3a2)`(ERHAPI_Platform Platform,const FRH_ProcessEntitlementCompletedDelegate & EntitlementProcessorCompleteDelegate,TOptional< ERHAPI_PlatformRegion > Region)` | Start Async Task to Process Entitlements for a specific platform (non-OSS based)
`public void `[`QueryStoreOffersById`](#classURH__EntitlementSubsystem_1a4a419cf977152a129ea1be9158ce07be)`(const TArray< FString > & OfferIds,const FRH_GenericSuccessBlock & Delegate)` | Queries the OSS to get the store offers for the given offer ids.
`public void `[`OnQueryStoreOffersById`](#classURH__EntitlementSubsystem_1aba4dca826031b87f3f932436009622a6)`(bool bSuccess,const TArray< FUniqueOfferId > & Offers,const FString & Error,const FRH_GenericSuccessBlock Delegate)` | Response from OSS for Store Offer By Id Query.
`public void `[`GetCachedStoreOffers`](#classURH__EntitlementSubsystem_1ac8d1546132a1bc76ef72d7b9f462a947)`(TArray< FOnlineStoreOfferRef > & OutOffers)` | Helper function to get the cached store offers from the OSS.
`public TMap< FString, `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` > * `[`GetEntitlementResults`](#classURH__EntitlementSubsystem_1ac478a330f287a564dd51e49a430e2809)`()` | Gets the map of all processed entitlement results.
`public void `[`SetEntitlementOSSName`](#classURH__EntitlementSubsystem_1afb94ef35894b136c1a51c6695e24c06c)`(const FName & InEntitlementOSSName)` | Sets the entitlement OSS Name.
`public FName `[`GetEntitlementOSSName`](#classURH__EntitlementSubsystem_1a8aa48ac9424aea1058540ca316d1e426)`()` | Gets the set entitlement OSS Name.
`public IOnlineStoreV2Ptr `[`GetStoreSubsystem`](#classURH__EntitlementSubsystem_1a35d47446e0d8e8ff9c03c66ac8a90002)`() const` | Helper to the store subsystem subsystem.
`protected TMap< FString, `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` > `[`EntitlementProcessResultMap`](#classURH__EntitlementSubsystem_1ae694a08037debcf46c6c8cbefd33b0b3) | Map of results from Entitlement Process calls.
`protected FName `[`EntitlementOSSName`](#classURH__EntitlementSubsystem_1a3a1c18058080e0dc894e3f986f9f4230) | Online Subsystem to use for entitlements. If not provided, will use the default OSS.
`protected FTimerManager & `[`GetTimerManager`](#classURH__EntitlementSubsystem_1a3ac920200686b3ec67e976322e2913db)`()` | Helper to get the engines Timer Manager.
`protected `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetRH_LocalPlayerSubsystem`](#classURH__EntitlementSubsystem_1ab1f1a051a4db3625191e529a6536a14a)`() const` | Helper to the local player subsystem.
`protected IOnlineSubsystemPtr `[`GetOSS`](#classURH__EntitlementSubsystem_1a0d8e49257638cc04901e70b8a2fccab9)`() const` | Helper to the online subsystem.
`protected IOnlinePurchasePtr `[`GetPurchaseSubsystem`](#classURH__EntitlementSubsystem_1a68e068e84180db974ab6b29444847399)`() const` | Helper to the online purchase subsystem.

### Members

#### `public virtual void `[`Initialize`](#classURH__EntitlementSubsystem_1a84d5e948fe867f75a92f47b8ddd139fb)`()` <a id="classURH__EntitlementSubsystem_1a84d5e948fe867f75a92f47b8ddd139fb"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__EntitlementSubsystem_1af3e449d4538d7e01532ab1b55e5d937c)`()` <a id="classURH__EntitlementSubsystem_1af3e449d4538d7e01532ab1b55e5d937c"></a>

Safely tears down the subsystem.

#### `public virtual void `[`OnUserChanged`](#classURH__EntitlementSubsystem_1a5fd25cdb4e40bdf432b51bc96802b351)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` <a id="classURH__EntitlementSubsystem_1a5fd25cdb4e40bdf432b51bc96802b351"></a>

Notification that the user changed for the owning local player subsystem.

#### `public void `[`HandleNotification`](#classURH__EntitlementSubsystem_1a79e18971cbc52e3206cc1a3c6e56ab05)`(const `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` <a id="classURH__EntitlementSubsystem_1a79e18971cbc52e3206cc1a3c6e56ab05"></a>

Handle a notification from the inventory API.

#### Parameters
* `Notification` The notification to handle 

* `APIName` The name of the API that sent the notification 

* `APIParams` The parameters for the API that sent the notification

#### `public virtual void `[`SubmitEntitlementsForLoggedInOSS`](#classURH__EntitlementSubsystem_1acc6ed4a116445c4e3946872a7cb30335)`(const FRH_ProcessEntitlementCompletedDelegate & EntitlementProcessorCompleteDelegate,TOptional< ERHAPI_PlatformRegion > Region)` <a id="classURH__EntitlementSubsystem_1acc6ed4a116445c4e3946872a7cb30335"></a>

Start Async Task to Process Entitlements for the users connected OSS.

#### Parameters
* `EntitlementProcessorCompleteDelegate` Delegate callback for when the entitlement process is complete. 

* `Region` The platform region to use for entitlements.

#### `public void `[`SubmitEntitlementsForPlatform`](#classURH__EntitlementSubsystem_1a20c06506e33aa850964b771dfcbae3a2)`(ERHAPI_Platform Platform,const FRH_ProcessEntitlementCompletedDelegate & EntitlementProcessorCompleteDelegate,TOptional< ERHAPI_PlatformRegion > Region)` <a id="classURH__EntitlementSubsystem_1a20c06506e33aa850964b771dfcbae3a2"></a>

Start Async Task to Process Entitlements for a specific platform (non-OSS based)

#### Parameters
* `Platform` The platform to process entitlements for. 

* `EntitlementProcessorCompleteDelegate` Delegate callback for when the entitlement process is complete. 

* `Region` The platform region to use for entitlements.

#### `public void `[`QueryStoreOffersById`](#classURH__EntitlementSubsystem_1a4a419cf977152a129ea1be9158ce07be)`(const TArray< FString > & OfferIds,const FRH_GenericSuccessBlock & Delegate)` <a id="classURH__EntitlementSubsystem_1a4a419cf977152a129ea1be9158ce07be"></a>

Queries the OSS to get the store offers for the given offer ids.

#### Parameters
* `OfferIds` List of SKUs to request offers for. 

* `Delegate` callback for getting offers.

#### `public void `[`OnQueryStoreOffersById`](#classURH__EntitlementSubsystem_1aba4dca826031b87f3f932436009622a6)`(bool bSuccess,const TArray< FUniqueOfferId > & Offers,const FString & Error,const FRH_GenericSuccessBlock Delegate)` <a id="classURH__EntitlementSubsystem_1aba4dca826031b87f3f932436009622a6"></a>

Response from OSS for Store Offer By Id Query.

#### Parameters
* `bSuccess` If the call to the OSS was successful. 

* `Offers` Offers returned by the OSS. 

* `Error` The error if the call was not successful. 

* `Delegate` callback for getting offers.

#### `public void `[`GetCachedStoreOffers`](#classURH__EntitlementSubsystem_1ac8d1546132a1bc76ef72d7b9f462a947)`(TArray< FOnlineStoreOfferRef > & OutOffers)` <a id="classURH__EntitlementSubsystem_1ac8d1546132a1bc76ef72d7b9f462a947"></a>

Helper function to get the cached store offers from the OSS.

#### Parameters
* `OutOffers` The offers cached in the store OSS.

#### `public TMap< FString, `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` > * `[`GetEntitlementResults`](#classURH__EntitlementSubsystem_1ac478a330f287a564dd51e49a430e2809)`()` <a id="classURH__EntitlementSubsystem_1ac478a330f287a564dd51e49a430e2809"></a>

Gets the map of all processed entitlement results.

#### `public void `[`SetEntitlementOSSName`](#classURH__EntitlementSubsystem_1afb94ef35894b136c1a51c6695e24c06c)`(const FName & InEntitlementOSSName)` <a id="classURH__EntitlementSubsystem_1afb94ef35894b136c1a51c6695e24c06c"></a>

Sets the entitlement OSS Name.

#### Parameters
* `InEntitlementOSSName` The OSS name to use for entitlements.

#### `public FName `[`GetEntitlementOSSName`](#classURH__EntitlementSubsystem_1a8aa48ac9424aea1058540ca316d1e426)`()` <a id="classURH__EntitlementSubsystem_1a8aa48ac9424aea1058540ca316d1e426"></a>

Gets the set entitlement OSS Name.

#### `public IOnlineStoreV2Ptr `[`GetStoreSubsystem`](#classURH__EntitlementSubsystem_1a35d47446e0d8e8ff9c03c66ac8a90002)`() const` <a id="classURH__EntitlementSubsystem_1a35d47446e0d8e8ff9c03c66ac8a90002"></a>

Helper to the store subsystem subsystem.

#### `protected TMap< FString, `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` > `[`EntitlementProcessResultMap`](#classURH__EntitlementSubsystem_1ae694a08037debcf46c6c8cbefd33b0b3) <a id="classURH__EntitlementSubsystem_1ae694a08037debcf46c6c8cbefd33b0b3"></a>

Map of results from Entitlement Process calls.

#### `protected FName `[`EntitlementOSSName`](#classURH__EntitlementSubsystem_1a3a1c18058080e0dc894e3f986f9f4230) <a id="classURH__EntitlementSubsystem_1a3a1c18058080e0dc894e3f986f9f4230"></a>

Online Subsystem to use for entitlements. If not provided, will use the default OSS.

#### `protected FTimerManager & `[`GetTimerManager`](#classURH__EntitlementSubsystem_1a3ac920200686b3ec67e976322e2913db)`()` <a id="classURH__EntitlementSubsystem_1a3ac920200686b3ec67e976322e2913db"></a>

Helper to get the engines Timer Manager.

#### `protected `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * `[`GetRH_LocalPlayerSubsystem`](#classURH__EntitlementSubsystem_1ab1f1a051a4db3625191e529a6536a14a)`() const` <a id="classURH__EntitlementSubsystem_1ab1f1a051a4db3625191e529a6536a14a"></a>

Helper to the local player subsystem.

#### `protected IOnlineSubsystemPtr `[`GetOSS`](#classURH__EntitlementSubsystem_1a0d8e49257638cc04901e70b8a2fccab9)`() const` <a id="classURH__EntitlementSubsystem_1a0d8e49257638cc04901e70b8a2fccab9"></a>

Helper to the online subsystem.

#### `protected IOnlinePurchasePtr `[`GetPurchaseSubsystem`](#classURH__EntitlementSubsystem_1a68e068e84180db974ab6b29444847399)`() const` <a id="classURH__EntitlementSubsystem_1a68e068e84180db974ab6b29444847399"></a>

Helper to the online purchase subsystem.

