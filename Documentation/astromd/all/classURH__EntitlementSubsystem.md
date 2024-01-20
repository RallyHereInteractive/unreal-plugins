---
title: URH_EntitlementSubsystem Class
---Inherits from [URH_LocalPlayerSubsystemPlugin](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin)

Subsystem for handling requesting and processing entitlements from the online subsystem.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_PlatformEntitlementProcessResult](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult) >|[EntitlementProcessResultMap](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1ae694a08037debcf46c6c8cbefd33b0b3)|Map of results from Entitlement Process calls.|
|FName|[EntitlementOSSName](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a3a1c18058080e0dc894e3f986f9f4230)|Online Subsystem to use for entitlements. If not provided, will use the default OSS.|
|void|[Initialize](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a84d5e948fe867f75a92f47b8ddd139fb)()|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1af3e449d4538d7e01532ab1b55e5d937c)()|Safely tears down the subsystem.|
|void|[OnUserChanged](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a5fd25cdb4e40bdf432b51bc96802b351)(const FGuid & OldPlayerUuid, class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * OldLocalPlayerInfo)|Notification that the user changed for the owning local player subsystem.|
|void|[HandleNotification](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a79e18971cbc52e3206cc1a3c6e56ab05)(const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & Notification, const FString & APIName, const TArray< FString > & APIParams)|Handle a notification from the inventory API.|
|void|[SubmitEntitlementsForLoggedInOSS](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a9dc31d9240e19268dbb67f71b3ef81ef)(const FRH_ProcessEntitlementCompletedDelegate & EntitlementProcessorCompleteDelegate, const FRH_GetPlatformRegionDelegate & PlatformRegionDelegate)|Start Async Task to Process Entitlements for the users connected OSS.|
|void|[SubmitEntitlementsForPlatform](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a04aadee8f206b0ace23ddb55575d80bd)(ERHAPI_Platform Platform, const FRH_ProcessEntitlementCompletedDelegate & EntitlementProcessorCompleteDelegate, const FRH_GetPlatformRegionDelegate & PlatformRegionDelegate)|Start Async Task to Process Entitlements for a specific platform (non-OSS based)|
|void|[QueryStoreOffersById](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a4a419cf977152a129ea1be9158ce07be)(const TArray< FString > & OfferIds, const FRH_GenericSuccessBlock & Delegate)|Queries the OSS to get the store offers for the given offer ids.|
|void|[OnQueryStoreOffersById](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1aba4dca826031b87f3f932436009622a6)(bool bSuccess, const TArray< FUniqueOfferId > & Offers, const FString & Error, const FRH_GenericSuccessBlock Delegate)|Response from OSS for Store Offer By Id Query.|
|void|[GetCachedStoreOffers](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1ac8d1546132a1bc76ef72d7b9f462a947)(TArray< FOnlineStoreOfferRef > & OutOffers)|Helper function to get the cached store offers from the OSS.|
|TMap< FString, [FRHAPI_PlatformEntitlementProcessResult](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult) > *|[GetEntitlementResults](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1ac478a330f287a564dd51e49a430e2809)()|Gets the map of all processed entitlement results.|
|void|[SetEntitlementOSSName](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1afb94ef35894b136c1a51c6695e24c06c)(const FName & InEntitlementOSSName)|Sets the entitlement OSS Name.|
|FName|[GetEntitlementOSSName](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a8aa48ac9424aea1058540ca316d1e426)()|Gets the set entitlement OSS Name.|
|IOnlineStoreV2Ptr|[GetStoreSubsystem](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a35d47446e0d8e8ff9c03c66ac8a90002)()|Helper to the store subsystem subsystem.|
|FTimerManager &|[GetTimerManager](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a3ac920200686b3ec67e976322e2913db)()|Helper to get the engines Timer Manager.|
|[URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) *|[GetRH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1ab1f1a051a4db3625191e529a6536a14a)()|Helper to the local player subsystem.|
|IOnlineSubsystem *|[GetOSS](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a9d4639fe82b8dad3e126519ac79f579b)()|Helper to the online subsystem.|
|IOnlinePurchasePtr|[GetPurchaseSubsystem](/unreal-plugins/all/classurh__entitlementsubsystem/#classURH__EntitlementSubsystem_1a68e068e84180db974ab6b29444847399)()|Helper to the online purchase subsystem.|
## Protected Attributes



### `EntitlementProcessResultMap` <a id="classURH__EntitlementSubsystem_1ae694a08037debcf46c6c8cbefd33b0b3"></a>

`TMap<FString, FRHAPI_PlatformEntitlementProcessResult> URH_EntitlementSubsystem::EntitlementProcessResultMap`

Map of results from Entitlement Process calls.




### `EntitlementOSSName` <a id="classURH__EntitlementSubsystem_1a3a1c18058080e0dc894e3f986f9f4230"></a>

`FName URH_EntitlementSubsystem::EntitlementOSSName`

Online Subsystem to use for entitlements. If not provided, will use the default OSS.





## Public Functions



### `Initialize` <a id="classURH__EntitlementSubsystem_1a84d5e948fe867f75a92f47b8ddd139fb"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__EntitlementSubsystem_1af3e449d4538d7e01532ab1b55e5d937c"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `OnUserChanged` <a id="classURH__EntitlementSubsystem_1a5fd25cdb4e40bdf432b51bc96802b351"></a>

void OnUserChanged(const FGuid & OldPlayerUuid, class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * OldLocalPlayerInfo)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|OldPlayerUuid|
|class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|OldLocalPlayerInfo|

#### Description

Notification that the user changed for the owning local player subsystem.




### `HandleNotification` <a id="classURH__EntitlementSubsystem_1a79e18971cbc52e3206cc1a3c6e56ab05"></a>

void HandleNotification(const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & Notification, const FString & APIName, const TArray< FString > & APIParams)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) &|Notification|
|const FString &|APIName|
|const TArray< FString > &|APIParams|

#### Description

Handle a notification from the inventory API.


#### Parameters

Notification
: The notification to handle 
APIName
: The name of the API that sent the notification 
APIParams
: The parameters for the API that sent the notification 



### `SubmitEntitlementsForLoggedInOSS` <a id="classURH__EntitlementSubsystem_1a9dc31d9240e19268dbb67f71b3ef81ef"></a>

void SubmitEntitlementsForLoggedInOSS(const FRH_ProcessEntitlementCompletedDelegate & EntitlementProcessorCompleteDelegate, const FRH_GetPlatformRegionDelegate & PlatformRegionDelegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_ProcessEntitlementCompletedDelegate &|EntitlementProcessorCompleteDelegate|
|const FRH_GetPlatformRegionDelegate &|PlatformRegionDelegate|

#### Description

Start Async Task to Process Entitlements for the users connected OSS.


#### Parameters

EntitlementProcessorCompleteDelegate
: Delegate callback for when the entitlement process is complete. 
PlatformRegionDelegate
: Delegate callback for getting the platform region. 



### `SubmitEntitlementsForPlatform` <a id="classURH__EntitlementSubsystem_1a04aadee8f206b0ace23ddb55575d80bd"></a>

void SubmitEntitlementsForPlatform(ERHAPI_Platform Platform, const FRH_ProcessEntitlementCompletedDelegate & EntitlementProcessorCompleteDelegate, const FRH_GetPlatformRegionDelegate & PlatformRegionDelegate)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|Platform|
|const FRH_ProcessEntitlementCompletedDelegate &|EntitlementProcessorCompleteDelegate|
|const FRH_GetPlatformRegionDelegate &|PlatformRegionDelegate|

#### Description

Start Async Task to Process Entitlements for a specific platform (non-OSS based)


#### Parameters

Platform
: The platform to process entitlements for. 
EntitlementProcessorCompleteDelegate
: Delegate callback for when the entitlement process is complete. 
PlatformRegionDelegate
: Delegate callback for getting the platform region. 



### `QueryStoreOffersById` <a id="classURH__EntitlementSubsystem_1a4a419cf977152a129ea1be9158ce07be"></a>

void QueryStoreOffersById(const TArray< FString > & OfferIds, const FRH_GenericSuccessBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TArray< FString > &|OfferIds|
|const FRH_GenericSuccessBlock &|Delegate|

#### Description

Queries the OSS to get the store offers for the given offer ids.


#### Parameters

OfferIds
: List of SKUs to request offers for. 
Delegate
: callback for getting offers. 



### `OnQueryStoreOffersById` <a id="classURH__EntitlementSubsystem_1aba4dca826031b87f3f932436009622a6"></a>

void OnQueryStoreOffersById(bool bSuccess, const TArray< FUniqueOfferId > & Offers, const FString & Error, const FRH_GenericSuccessBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|
|const TArray< FUniqueOfferId > &|Offers|
|const FString &|Error|
|const FRH_GenericSuccessBlock|Delegate|

#### Description

Response from OSS for Store Offer By Id Query.


#### Parameters

bSuccess
: If the call to the OSS was successful. 
Offers
: Offers returned by the OSS. 
Error
: The error if the call was not successful. 
Delegate
: callback for getting offers. 



### `GetCachedStoreOffers` <a id="classURH__EntitlementSubsystem_1ac8d1546132a1bc76ef72d7b9f462a947"></a>

void GetCachedStoreOffers(TArray< FOnlineStoreOfferRef > & OutOffers)

#### Parameters

| Type | Name |
|------|------|
|TArray< FOnlineStoreOfferRef > &|OutOffers|

#### Description

Helper function to get the cached store offers from the OSS.


#### Parameters

OutOffers
: The offers cached in the store OSS. 



### `GetEntitlementResults` <a id="classURH__EntitlementSubsystem_1ac478a330f287a564dd51e49a430e2809"></a>

TMap< FString, [FRHAPI_PlatformEntitlementProcessResult](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult) > * GetEntitlementResults()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the map of all processed entitlement results.




### `SetEntitlementOSSName` <a id="classURH__EntitlementSubsystem_1afb94ef35894b136c1a51c6695e24c06c"></a>

void SetEntitlementOSSName(const FName & InEntitlementOSSName)

#### Parameters

| Type | Name |
|------|------|
|const FName &|InEntitlementOSSName|

#### Description

Sets the entitlement OSS Name.


#### Parameters

InEntitlementOSSName
: The OSS name to use for entitlements. 



### `GetEntitlementOSSName` <a id="classURH__EntitlementSubsystem_1a8aa48ac9424aea1058540ca316d1e426"></a>

FName GetEntitlementOSSName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the set entitlement OSS Name.




### `GetStoreSubsystem` <a id="classURH__EntitlementSubsystem_1a35d47446e0d8e8ff9c03c66ac8a90002"></a>

IOnlineStoreV2Ptr GetStoreSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Helper to the store subsystem subsystem.





## Protected Functions



### `GetTimerManager` <a id="classURH__EntitlementSubsystem_1a3ac920200686b3ec67e976322e2913db"></a>

FTimerManager & GetTimerManager()

#### Parameters

| Type | Name |
|------|------|

#### Description

Helper to get the engines Timer Manager.




### `GetRH_LocalPlayerSubsystem` <a id="classURH__EntitlementSubsystem_1ab1f1a051a4db3625191e529a6536a14a"></a>

[URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * GetRH_LocalPlayerSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Helper to the local player subsystem.




### `GetOSS` <a id="classURH__EntitlementSubsystem_1a9d4639fe82b8dad3e126519ac79f579b"></a>

IOnlineSubsystem * GetOSS()

#### Parameters

| Type | Name |
|------|------|

#### Description

Helper to the online subsystem.




### `GetPurchaseSubsystem` <a id="classURH__EntitlementSubsystem_1a68e068e84180db974ab6b29444847399"></a>

IOnlinePurchasePtr GetPurchaseSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Helper to the online purchase subsystem.





