---
title: URH_PlayerInventory Class
---Inherits from UObject

Inventory Subsystem created per player for tracking and updating player inventory.

## Summary
| Kind | View | Description |
|------|------|-------------|
|typedef|[TCreateOrder](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a946da8328c5ead7256bcf01d73ba342c)||
|FRH_InventoryUpdatedDelegate|[OnInventoryCacheUpdated](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1aec143589873017eac01355a01c5ad0f5)|Delegate to listen to changes to the players cached inventory.|
|FRH_InventoryUpdatedDynamicDelegate|[OnInventoryCacheUpdatedBP](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ad1b9f15dd0f855b0997e5e8f97e213fc)||
|TMap< int32, TArray< [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) > >|[InventoryCache](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a5d5179ccce89d685f086005d1b907ad8)|Inventory cache map of Item Id to inventory records.|
|TArray< FString >|[ParsedInventoryOrders](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a76a82d3bb8f00ae1427129887e83952b)|Array of inventory orders that have recently been parsed to prevent double parsing orders through normal polling.|
|FRH_AutoPollerPtr|[InventoryPoller](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a9b073e90506714df4cff00f456168580)|Poller for inventory updates.|
|FRH_AutoPollerPtr|[PendingInventoryPoller](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ad2760c4c21398d38fad0929a5ab3b9ff)|Polled for pending inventory.|
|TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) >|[CachedOrderResults](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ac1119eb6995fedd771aba3267bba20f2)|Array of order results.|
|[URH_PlayerOrderWatch](/unreal-plugins/all/classurh__playerorderwatch/#classURH__PlayerOrderWatch) *|[OrderWatch](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a5ec78ed4488ac873c83015229342079c)|Tracking for orders that come in for the player.|
|TArray< [URH_PendingOrder](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder) * >|[PendingOrders](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a40eadf8f534b41e0ecc99086040a2da2)|Array of orders that have been requested that have not been returned yet.|
|[FRH_InventorySession](/unreal-plugins/all/structfrh__inventorysession/#structFRH__InventorySession)|[InventorySession](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1afcab0f1a8cf5f9e0051351ffba249322)|The active inventory session.|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[PlayerInfo](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a2da991415c67eb60ab1a5df90848568f)|The Player Info associated with this Inventory.|
|bool|[bReceivedInventoryNotification](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a45996faae3c7235df63ddd72c3baaba2)|Tracking of Inventory Notifications.|
|bool|[bReceivedPendingInventoryNotification](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a55c3db5006da2c2ed1ece4afc1a84bc2)|Tracking of Pending Inventory Notifications.|
|void|[Initialize](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a984d6ea76fd13361e4ee7fb04c03964f)()|Initialize the subobject.|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[GetPlayerInfo](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ae13c7ba7f568d94f382cadac250c0655)()|Gets the player info set on the subsystem.|
|const FGuid|[GetRHPlayerUuid](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a098b20b913bfc2a048627aefad4a9073)()|Gets the associated player infos Unique Player Id.|
|const FAuthContextPtr|[GetAuthContext](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ae6585ec255e5cd5fc4fd4bcb32c662fb)()|Gets the Auth Context that has authority to operate on this players inventory.|
|void|[SetPlayerInfo](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a76b4f19b926a83f287c3515acd8b9150)([URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * InPlayerInfo)|Sets the Player Info owner of the subsystem.|
|void|[GetInventoryCount](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1addb1cf44dbc4684f4bef23c51a012bb5)(const int32 & ItemId, const FRH_GetInventoryCountBlock & Delegate)|Gets the Players Inventory Count of the item for the connected platform, async pulls needed item data if it isn't already cached.|
|void|[BLUEPRINT_GetInventoryCount](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a254fc6a64aed8728a0dcf9c01ca2296d)(const int32 & ItemId, const FRH_GetInventoryCountDynamicDelegate & Delegate)||
|void|[IsInventoryItemOwned](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ab6843d485cb715c42e3c84dbf542c179)(const int32 & ItemId, const FRH_GetInventoryStateBlock & Delegate)|Gets if the player owns at least one of the item for the connected platform, async pulls needed item data if it isn't already cached.|
|void|[BLUEPRINT_IsInventoryItemOwned](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1afa90ae8b66a60239929ef05d5337cafe)(const int32 & ItemId, const FRH_GetInventoryStateDynamicDelegate & Delegate)||
|void|[IsInventoryItemRented](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a82cfc3b4a12f0d7ce7774ff6100a4245)(const int32 & ItemId, const FRH_GetInventoryStateBlock & Delegate)|Gets if the player has rented at least one of the item for the connected platform, async pulls needed item data if it isn't already cached.|
|void|[BLUEPRINT_IsInventoryItemRented](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ab36d5d81ad11652bf2b8c2a334f56926)(const int32 & ItemId, const FRH_GetInventoryStateDynamicDelegate & Delegate)||
|const [FRH_InventorySession](/unreal-plugins/all/structfrh__inventorysession/#structFRH__InventorySession) &|[GetCachedInventorySession](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a87fe7bf18012b4073c42a31c3ed04df2)()|Gets the active inventory session for the player.|
|const TArray< [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) >|[GetAllCachedInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a1fffa503b99fca22815fb14ccebbb06b)()|Gets the cached inventory for the player.|
|const TArray< [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) >|[GetCachedInventoryForItem](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a29c034f35b2ca574e942996e58f3fd2d)(const int32 & ItemId)|Gets the cached inventory records for an item id for the player.|
|const TArray< [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) >|[GetCachedInventoryForItems](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a5fdb61a338eb35e38b46f5d282fb66a8)(const TArray< int32 > & ItemIds)|Gets the cached inventory records for multiple item ids for the player.|
|const TArray< [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) >|[GetCachedInventoryForType](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ab29ede8a19a9316eb20eb52ed9c35aed)(const ERHAPI_InventoryType & Type)|Gets the cached inventory records for an inventory type for the player.|
|const TArray< [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) >|[GetCachedInventoryForItemsAndTypes](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ab8e5653fa66b9f65d3f0ebd527f2629c)(const TArray< int32 > & ItemIds, const TArray< ERHAPI_InventoryType > & Types)|Gets the cached inventory records for multiple item ids that have the given inventory type for the player.|
|bool|[GetCachedInventoryForInventoryId](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a8a8295a3807aef746e6b2db5a51cf9ba)(const FGuid & InventoryId, [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & Item)|Gets an exact cached inventory record for the player.|
|const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > &|[GetOrderResults](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a743b0a4541f198b9e4f9520caeabcde4)()|Gets all order results that have come in for the player.|
|void|[ClearCachedInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1abfe1776646639ec37f10b74ad3dee8e5)()|Clears all cached inventory for the player.|
|void|[ClearOrderCache](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a5387581632c52d10ec6464099ade2b3b)()|Clears all cached order results for the player.|
|void|[GetInventorySession](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a00d805080c0941cf004bfbc77b8942cb)(const FRH_OnInventorySessionUpdateDelegateBlock & Delegate)|Calls the Inventory API to get the players active Inventory Session.|
|void|[BLUEPRINT_GetInventorySession](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ad739b4c33a305945c102f6bb450a789e)(const FRH_OnInventorySessionUpdateDynamicDelegate & Delegate)||
|void|[CreateInventorySession](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a02fb814effbd191eb96c26ed91a6642d)(const TOptional< ERHAPI_Platform > Platform, const FRH_OnInventorySessionUpdateDelegateBlock & Delegate)|Calls the Inventory API to get the create an Inventory Session for the player.|
|void|[BLUEPRINT_CreateInventorySession](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a08d3630b94e3773b91f4dab72fd5538b)(const FRH_OnInventorySessionUpdateDynamicDelegate & Delegate)||
|void|[BLUEPRINT_CreateInventorySessionForPlatform](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a8c2fee2331e9b749386e050edf242aa1)(const ERHAPI_Platform Platform, const FRH_OnInventorySessionUpdateDynamicDelegate & Delegate)|Calls the Inventory API to get the create an Inventory Session for the player for a given Platform.|
|void|[GetInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1aa39e94993d051196093f8eb69f6a8e5e)(TArray< int32 > ItemIds, const FRH_OnInventoryUpdateDelegateBlock & Delegate)|Calls the Inventory API to get the the inventory for the player.|
|void|[BLUEPRINT_GetInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a59fda737d3bb2ae67d9e28d0fb5ab1b0)(TArray< int32 > ItemIds, const FRH_OnInventoryUpdateDynamicDelegate & Delegate)||
|void|[CreatePlayerOrder](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a25a32d0d801bfe8460c9fd5ffcc8a5e3)(ERHAPI_PlayerOrderEntryType FillType, ERHAPI_Source OrderSource, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, FRH_OrderResultBlock Delegate)|Creates an order for the player, used for purchasing and other loot related actions.|
|void|[BLUEPRINT_CreatePlayerOrder](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a45ff165c5a2c1d954408febb0a15f3a9)(ERHAPI_PlayerOrderEntryType FillType, ERHAPI_Source OrderSource, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, const FRH_OrderResultDynamicDelegate & Delegate)||
|void|[CreateNewPlayerOrder](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a383ffde7d88402ff420fd3b76a1145ab)(ERHAPI_Source OrderSource, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, const FRH_OrderResultBlock & Delegate)|Creates an order for the player, used for purchasing and other loot related actions.|
|void|[BLUEPRINT_CreateNewPlayerOrder](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a8cbcaaabc8e09039fac1db47a63cda77)(ERHAPI_Source OrderSource, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, const FRH_OrderResultDynamicDelegate & Delegate)||
|void|[CreateNewPlayerOrder](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1abbc28af90b1624685bcc4d2a7aba6cd4)(ERHAPI_Source OrderSource, bool IsTransaction, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, const FRH_OrderResultBlock & Delegate)|Creates an order for the player, used for purchasing and other loot related actions.|
|void|[BLUEPRINT_CreateNewPlayerOrder2](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1aa276a3fef62cd3e0083e3a9d433c4c01)(ERHAPI_Source OrderSource, bool IsTransaction, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, const FRH_OrderResultDynamicDelegate & Delegate)||
|void|[RedeemPromoCode](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a44a7384919f2fee13552699a96cd1708)(const FString & PromoCode, const FRH_PromoCodeResultBlock & Delegate)|Creates an order for the player that redeems a promotion code.|
|void|[BLUEPRINT_RedeemPromoCode](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a4098703781291ed8e38971f3f5e60bbc)(const FString & PromoCode, const FRH_PromoCodeResultDynamicDelegate & Delegate)||
|void|[SetOrderWatch](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1abfaceae0c3ccd3613308f113f12d3087)(const FRH_OrderDetailsBlock & Delegate)|Sets a watch to start polling for orders for the player.|
|void|[BLUEPRINT_SetOrderWatch](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a0c72781ba04a8dc362a87de084930ae9)(const FRH_OrderDetailsDynamicDelegate & Delegate)||
|void|[ClearOrderWatch](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1af95c3474ca75c146c11e1894f9493a3e)(const FRH_OrderDetailsBlock & Delegate)|Clears a watch for the player.|
|void|[BLUEPRINT_ClearOrderWatch](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a767dd017770b37fcec8dac7b8f30f89c)(const FRH_OrderDetailsDynamicDelegate & Delegate)||
|void|[AddPendingOrdersFromEntitlementsArray](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a41d3c4ca0a289b28935ab7496bd7fe74)(const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & Entitlements, const FRH_OrderDetailsBlock & Delegate)|Adds pending order monitoring for each processed entitlement.|
|void|[BLUEPRINT_AddPendingOrdersFromEntitlementsArray](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ab9f3e51843aa4ac292ca7602aeee0913)(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & Entitlements, const FRH_OrderDetailsDynamicDelegate & Delegate)||
|void|[AddPendingOrdersFromEntitlementResult](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a1fe3ba028e7fe6e9e923abf5a3fc6eba)(const [FRHAPI_PlatformEntitlementProcessResult](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult) & EntitlementResult, const FRH_OrderDetailsBlock & Delegate)|Adds pending order monitoring for each processed entitlement.|
|void|[BLUEPRINT_AddPendingOrdersFromEntitlementResult](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ac6024a68a966486865f311b89fa42c62)(const [FRHAPI_PlatformEntitlementProcessResult](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult) & EntitlementResult, const FRH_OrderDetailsDynamicDelegate & Delegate)||
|void|[CheckPollStatus](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a451359cb11acdeb358d924eff9c36c59)()|Used to pulse polling of watches and pending purchases.|
|void|[CreateInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1afb0227615c4db71e3c02484d7c59b53b)(const TOptional< FGuid > & ClientOrderReferenceId, const TArray< [FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory) > & CreateInventories, const ERHAPI_Source Source, const FRH_OnInventoryUpdateDelegateBlock & Delegate)|Requests direct inventory creation to the players inventory.|
|void|[BLUEPRINT_CreateInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a2779b3a5195b92bae3d8da552f8c47e0)(const FGuid & ClientOrderReferenceId, const TArray< [FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory) > & CreateInventories, const FRH_OnInventoryUpdateDynamicDelegate & Delegate, const ERHAPI_Source Source)||
|void|[BLUEPRINT_CreateInventoryWithoutClientOrderRefId](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a93674f3c5a360675e42a4a5750da7399)(const TArray< [FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory) > & CreateInventories, const FRH_OnInventoryUpdateDynamicDelegate & Delegate, const ERHAPI_Source Source)|Requests direct inventory creation to the players inventory.|
|void|[UpdateInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1af6944787996721ab352942ea487b23ca)(const TOptional< FGuid > & ClientOrderReferenceId, const TArray< [FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory) > & UpdateInventories, const ERHAPI_Source Source, const FRH_OnInventoryUpdateDelegateBlock & Delegate)|Requests direct inventory modifications to the players inventory.|
|void|[BLUEPRINT_UpdateInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a7ad5e5b926fa2823474afd5db311dc35)(const FGuid & ClientOrderReferenceId, const TArray< [FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory) > & UpdateInventories, const FRH_OnInventoryUpdateDynamicDelegate & Delegate, const ERHAPI_Source Source)||
|void|[BLUEPRINT_UpdateInventoryWithoutClientOrderRefId](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ab3cc6d1da91538527adbfc39503e2018)(const TArray< [FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory) > & UpdateInventories, const FRH_OnInventoryUpdateDynamicDelegate & Delegate, const ERHAPI_Source Source)|Requests direct inventory modifications to the players inventory.|
|void|[ClearPendingOrder](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a1023ef83a9e1d7a88d3da06246aa7637)(const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & OrderResult)|Used by the PendingOrder to clear itself from the pending order list when it completes.|
|void|[ParseOrderResult](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a0a3af764f187ffbd05955fb16a8bd5d7)(const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & Content)|Parses a player order result API into a URH_PlayerOrderEntry.|
|bool|[ShouldPollInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a6d4188288df48ec55bb6daf7edeb4959)()|Gets if the inventory should be polled due to an active watch.|
|bool|[ShouldPollPendingInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a44bb8f812b678184d35450f313bca922)()|Gets if pending inventory should be polled due to outstanding orders.|
|void|[HandleNotification](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a6164fd974fa48e65497343d05285d371)(const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & Notification, const FString & APIName, const TArray< FString > & APIParams)|Handles an incoming notification, checks if it is an invnetory notification, then operates if need be.|
|void|[PollInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1afeaab6fb7057a5e3c481c06465887dcd)(const FRH_PollCompleteFunc & Delegate)|Start a poll for inventory updates.|
|void|[PollPendingInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ae1b0dd55006d28db5dfbef7b4ec27f5d)(const FRH_PollCompleteFunc & Delegate)|Start a poll for pending inventory updates.|
|void|[BroadcastOnInventoryCacheUpdated](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a549a0f5600fc0957e61dfa3b6b75b997)(const TArray< int32 > & ItemIds)|Helper function to broadcast inventory changes.|
|void|[OnUserChanged](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ac429492f3cc9736fc88744dcd53fca03)()|Callback that occurs whenever the local player this subsystem is associated with changes.|
|void|[InitPropertiesWithDefaultValues](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a98ee25be3e5fcdd1ccf481bf12b7d0a0)()|Initializes the subsystem with defaults for its cached data.|
|void|[PopulateInstanceData](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a666fc902c1fe23954714cb660eac948b)([FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) & PlayerOrderCreate)|Adds instance specific data to an Player Order.|
|void|[CreatePlayerOrderResponse](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1afa2e5cb7cc7266afe1f33851cef008e3)(const TCreateOrder::Response & Resp, const FRH_OrderResultBlock Delegate, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > OrderEntries)|Handles the response to a Create Player Order call.|
|void|[RedeemPromoCodeResponse](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a4158aff1ace8179824d768f12389919c)(const TCreateOrder::Response & Resp, const FRH_PromoCodeResultBlock Delegate, const FString PromoCode)|Handles the response to a Redeem Promo Code call.|
|void|[HandleCreateInventorySession](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a2d5dc041893d81c3afe017ed06b2f21c)(const RallyHereAPI::FResponse_CreateNewInventorySessionByPlayerUuid & Response, const FRH_OnInventorySessionUpdateDelegateBlock Delegate)|Handles the response to a Create Inventory Session call.|
|void|[HandleGetInventorySession](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a6493cfede6044144868349a654c6acf2)(const RallyHereAPI::FResponse_GetInventorySessionInfoByPlayerUuid & Response, const FRH_OnInventorySessionUpdateDelegateBlock Delegate)|Handles the response to a Get Inventory Session call.|
|void|[HandleGetInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ad7274cd6de55fd492593ba6640627b4e)(const RallyHereAPI::FResponse_GetPlayerInventoryUuid & Response, const TArray< int32 > ItemIds, const FRH_OnInventoryUpdateDelegateBlock Delegate)|Handles the response to a Get Inventory call.|
|void|[HandleCreateInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a67a9683f2d48eb8d1f3af34703f5876c)(const RallyHereAPI::FResponse_CreatePlayerInventoryUuid & Response, const FRH_OnInventoryUpdateDelegateBlock Delegate)|Handles the response to a Create Inventory call.|
|void|[HandleUpdateInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a80d5fdb6953bb1378b75c511fae170c4)(const RallyHereAPI::FResponse_ModifyManyPlayerInventoryUuid & Response, const FRH_OnInventoryUpdateDelegateBlock Delegate)|Handles the response to a Update Inventory call.|
|void|[WriteOrderEntries](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a2588a2da983cd5d5d20d0b3bad876869)(TArray< [FRHAPI_PlayerOrderEntryCreate](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate) > & Entries, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries)|Converts the class of Order Entries to the struct used by the API system for calls.|
|void|[UpdateInventoryFromOrderDetails](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1ae0df47f4fda770275400e4f08c2d77e4)(const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > & OrderDetails)|Updates the cached inventory with data from an incoming order.|
|void|[GetInventoryCount_INTERNAL](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a051af5a05a0ea4574572a649b7d1eb09)([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * Item, const FRH_GetInventoryCountBlock & Delegate)|Internal helper function to complete Get Inventory Count.|
|void|[IsInventoryItemOwned_INTERNAL](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a8214e3be4acaa58fb4333d4517adbbac)([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * Item, const FRH_GetInventoryStateBlock & Delegate)|Internal helper function to complete Is Inventory Item Owned.|
|void|[IsInventoryItemRented_INTERNAL](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a83e3ae985adc5320194657b1a63b554a)([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * Item, const FRH_GetInventoryStateBlock & Delegate)|Internal helper function to complete Is Inventory Item Rented.|
|[URH_GameInstanceSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem) *|[GetGameInstanceSubsystem](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1a1b8ec4a659fad2e3defb26ceb27d3476)()|Helper function to get Game Instance Subsystem.|
|[URH_CatalogSubsystem](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem) *|[GetCatalogSubsystem](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory_1aa92f2f13128661b503c07ccd6de70540)()|Helper function to get Catalog Subsystem.|
## Public Types



### `TCreateOrder` <a id="classURH__PlayerInventory_1a946da8328c5ead7256bcf01d73ba342c"></a>

typedef RallyHereAPI::Traits_CreateNewPlayerUuidOrder TCreateOrder





## Public Attributes



### `OnInventoryCacheUpdated` <a id="classURH__PlayerInventory_1aec143589873017eac01355a01c5ad0f5"></a>

`FRH_InventoryUpdatedDelegate URH_PlayerInventory::OnInventoryCacheUpdated`

Delegate to listen to changes to the players cached inventory.




### `OnInventoryCacheUpdatedBP` <a id="classURH__PlayerInventory_1ad1b9f15dd0f855b0997e5e8f97e213fc"></a>

`FRH_InventoryUpdatedDynamicDelegate URH_PlayerInventory::OnInventoryCacheUpdatedBP`







## Protected Attributes



### `InventoryCache` <a id="classURH__PlayerInventory_1a5d5179ccce89d685f086005d1b907ad8"></a>

`TMap<int32, TArray<FRH_ItemInventory> > URH_PlayerInventory::InventoryCache`

Inventory cache map of Item Id to inventory records.




### `ParsedInventoryOrders` <a id="classURH__PlayerInventory_1a76a82d3bb8f00ae1427129887e83952b"></a>

`TArray<FString> URH_PlayerInventory::ParsedInventoryOrders`

Array of inventory orders that have recently been parsed to prevent double parsing orders through normal polling.




### `InventoryPoller` <a id="classURH__PlayerInventory_1a9b073e90506714df4cff00f456168580"></a>

`FRH_AutoPollerPtr URH_PlayerInventory::InventoryPoller`

Poller for inventory updates.




### `PendingInventoryPoller` <a id="classURH__PlayerInventory_1ad2760c4c21398d38fad0929a5ab3b9ff"></a>

`FRH_AutoPollerPtr URH_PlayerInventory::PendingInventoryPoller`

Polled for pending inventory.




### `CachedOrderResults` <a id="classURH__PlayerInventory_1ac1119eb6995fedd771aba3267bba20f2"></a>

`TArray<FRHAPI_PlayerOrder> URH_PlayerInventory::CachedOrderResults`

Array of order results.




### `OrderWatch` <a id="classURH__PlayerInventory_1a5ec78ed4488ac873c83015229342079c"></a>

`URH_PlayerOrderWatch* URH_PlayerInventory::OrderWatch`

Tracking for orders that come in for the player.




### `PendingOrders` <a id="classURH__PlayerInventory_1a40eadf8f534b41e0ecc99086040a2da2"></a>

`TArray<URH_PendingOrder*> URH_PlayerInventory::PendingOrders`

Array of orders that have been requested that have not been returned yet.




### `InventorySession` <a id="classURH__PlayerInventory_1afcab0f1a8cf5f9e0051351ffba249322"></a>

`FRH_InventorySession URH_PlayerInventory::InventorySession`

The active inventory session.




### `PlayerInfo` <a id="classURH__PlayerInventory_1a2da991415c67eb60ab1a5df90848568f"></a>

`URH_PlayerInfo* URH_PlayerInventory::PlayerInfo`

The Player Info associated with this Inventory.




### `bReceivedInventoryNotification` <a id="classURH__PlayerInventory_1a45996faae3c7235df63ddd72c3baaba2"></a>

`bool URH_PlayerInventory::bReceivedInventoryNotification`

Tracking of Inventory Notifications.




### `bReceivedPendingInventoryNotification` <a id="classURH__PlayerInventory_1a55c3db5006da2c2ed1ece4afc1a84bc2"></a>

`bool URH_PlayerInventory::bReceivedPendingInventoryNotification`

Tracking of Pending Inventory Notifications.





## Public Functions



### `Initialize` <a id="classURH__PlayerInventory_1a984d6ea76fd13361e4ee7fb04c03964f"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subobject.




### `GetPlayerInfo` <a id="classURH__PlayerInventory_1ae13c7ba7f568d94f382cadac250c0655"></a>

[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * GetPlayerInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the player info set on the subsystem.



#### Returns
The set player info. 



### `GetRHPlayerUuid` <a id="classURH__PlayerInventory_1a098b20b913bfc2a048627aefad4a9073"></a>

const FGuid GetRHPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the associated player infos Unique Player Id.



#### Returns
The set player infos Unique Player Id. 



### `GetAuthContext` <a id="classURH__PlayerInventory_1ae6585ec255e5cd5fc4fd4bcb32c662fb"></a>

const FAuthContextPtr GetAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Auth Context that has authority to operate on this players inventory.



#### Returns
The local or instance Auth Context. 



### `SetPlayerInfo` <a id="classURH__PlayerInventory_1a76b4f19b926a83f287c3515acd8b9150"></a>

void SetPlayerInfo([URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * InPlayerInfo)

#### Parameters

| Type | Name |
|------|------|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|InPlayerInfo|

#### Description

Sets the Player Info owner of the subsystem.




### `GetInventoryCount` <a id="classURH__PlayerInventory_1addb1cf44dbc4684f4bef23c51a012bb5"></a>

void GetInventoryCount(const int32 & ItemId, const FRH_GetInventoryCountBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|ItemId|
|const FRH_GetInventoryCountBlock &|Delegate|

#### Description

Gets the Players Inventory Count of the item for the connected platform, async pulls needed item data if it isn't already cached.


#### Parameters

ItemId
: The id of the item requesting count of. 
Delegate
: Callback with the count of the inventory item. 



### `BLUEPRINT_GetInventoryCount` <a id="classURH__PlayerInventory_1a254fc6a64aed8728a0dcf9c01ca2296d"></a>

void BLUEPRINT_GetInventoryCount(const int32 & ItemId, const FRH_GetInventoryCountDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|ItemId|
|const FRH_GetInventoryCountDynamicDelegate &|Delegate|

#### Description






### `IsInventoryItemOwned` <a id="classURH__PlayerInventory_1ab6843d485cb715c42e3c84dbf542c179"></a>

void IsInventoryItemOwned(const int32 & ItemId, const FRH_GetInventoryStateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|ItemId|
|const FRH_GetInventoryStateBlock &|Delegate|

#### Description

Gets if the player owns at least one of the item for the connected platform, async pulls needed item data if it isn't already cached.


#### Parameters

ItemId
: The id of the item requesting count of. 
Delegate
: Callback with the state of the items ownership. 



### `BLUEPRINT_IsInventoryItemOwned` <a id="classURH__PlayerInventory_1afa90ae8b66a60239929ef05d5337cafe"></a>

void BLUEPRINT_IsInventoryItemOwned(const int32 & ItemId, const FRH_GetInventoryStateDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|ItemId|
|const FRH_GetInventoryStateDynamicDelegate &|Delegate|

#### Description






### `IsInventoryItemRented` <a id="classURH__PlayerInventory_1a82cfc3b4a12f0d7ce7774ff6100a4245"></a>

void IsInventoryItemRented(const int32 & ItemId, const FRH_GetInventoryStateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|ItemId|
|const FRH_GetInventoryStateBlock &|Delegate|

#### Description

Gets if the player has rented at least one of the item for the connected platform, async pulls needed item data if it isn't already cached.


#### Parameters

ItemId
: The id of the item requesting count of. 
Delegate
: Callback with the state of the items rented status. 



### `BLUEPRINT_IsInventoryItemRented` <a id="classURH__PlayerInventory_1ab36d5d81ad11652bf2b8c2a334f56926"></a>

void BLUEPRINT_IsInventoryItemRented(const int32 & ItemId, const FRH_GetInventoryStateDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|ItemId|
|const FRH_GetInventoryStateDynamicDelegate &|Delegate|

#### Description






### `GetCachedInventorySession` <a id="classURH__PlayerInventory_1a87fe7bf18012b4073c42a31c3ed04df2"></a>

const [FRH_InventorySession](/unreal-plugins/all/structfrh__inventorysession/#structFRH__InventorySession) & GetCachedInventorySession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the active inventory session for the player.



#### Returns
The active inventory session. 



### `GetAllCachedInventory` <a id="classURH__PlayerInventory_1a1fffa503b99fca22815fb14ccebbb06b"></a>

const TArray< [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) > GetAllCachedInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the cached inventory for the player.



#### Returns
Array of inventory records. 



### `GetCachedInventoryForItem` <a id="classURH__PlayerInventory_1a29c034f35b2ca574e942996e58f3fd2d"></a>

const TArray< [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) > GetCachedInventoryForItem(const int32 & ItemId)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|ItemId|

#### Description

Gets the cached inventory records for an item id for the player.


#### Parameters

ItemId
: The id of the item requesting inventory records for. 

#### Returns
Array of inventory records. 



### `GetCachedInventoryForItems` <a id="classURH__PlayerInventory_1a5fdb61a338eb35e38b46f5d282fb66a8"></a>

const TArray< [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) > GetCachedInventoryForItems(const TArray< int32 > & ItemIds)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|ItemIds|

#### Description

Gets the cached inventory records for multiple item ids for the player.


#### Parameters

ItemIds
: The ids of the item requesting inventory records for. 

#### Returns
Array of inventory records. 



### `GetCachedInventoryForType` <a id="classURH__PlayerInventory_1ab29ede8a19a9316eb20eb52ed9c35aed"></a>

const TArray< [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) > GetCachedInventoryForType(const ERHAPI_InventoryType & Type)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryType &|Type|

#### Description

Gets the cached inventory records for an inventory type for the player.


#### Parameters

Type
: The type of inventory records being requested. 

#### Returns
Array of inventory records. 



### `GetCachedInventoryForItemsAndTypes` <a id="classURH__PlayerInventory_1ab8e5653fa66b9f65d3f0ebd527f2629c"></a>

const TArray< [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) > GetCachedInventoryForItemsAndTypes(const TArray< int32 > & ItemIds, const TArray< ERHAPI_InventoryType > & Types)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|ItemIds|
|const TArray< ERHAPI_InventoryType > &|Types|

#### Description

Gets the cached inventory records for multiple item ids that have the given inventory type for the player.


#### Parameters

ItemIds
: The ids of the item requesting inventory records for. 
Type
: The type of inventory records being requested. 

#### Returns
Array of inventory records. 



### `GetCachedInventoryForInventoryId` <a id="classURH__PlayerInventory_1a8a8295a3807aef746e6b2db5a51cf9ba"></a>

bool GetCachedInventoryForInventoryId(const FGuid & InventoryId, [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & Item)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|InventoryId|
|[FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|Item|

#### Description

Gets an exact cached inventory record for the player.


#### Parameters

InventoryId
: the Unique Id of the inventory record being requested. 
Item
: The inventory record requested. 

#### Returns
If true, the inventory record was found. 



### `GetOrderResults` <a id="classURH__PlayerInventory_1a743b0a4541f198b9e4f9520caeabcde4"></a>

const TArray< [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) > & GetOrderResults()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets all order results that have come in for the player.



#### Returns
Array of order results. 



### `ClearCachedInventory` <a id="classURH__PlayerInventory_1abfe1776646639ec37f10b74ad3dee8e5"></a>

void ClearCachedInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears all cached inventory for the player.




### `ClearOrderCache` <a id="classURH__PlayerInventory_1a5387581632c52d10ec6464099ade2b3b"></a>

void ClearOrderCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears all cached order results for the player.




### `GetInventorySession` <a id="classURH__PlayerInventory_1a00d805080c0941cf004bfbc77b8942cb"></a>

void GetInventorySession(const FRH_OnInventorySessionUpdateDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnInventorySessionUpdateDelegateBlock &|Delegate|

#### Description

Calls the Inventory API to get the players active Inventory Session.


#### Parameters

Delegate
: Callback delegate for getting the players session. 



### `BLUEPRINT_GetInventorySession` <a id="classURH__PlayerInventory_1ad739b4c33a305945c102f6bb450a789e"></a>

void BLUEPRINT_GetInventorySession(const FRH_OnInventorySessionUpdateDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnInventorySessionUpdateDynamicDelegate &|Delegate|

#### Description






### `CreateInventorySession` <a id="classURH__PlayerInventory_1a02fb814effbd191eb96c26ed91a6642d"></a>

void CreateInventorySession(const TOptional< ERHAPI_Platform > Platform, const FRH_OnInventorySessionUpdateDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TOptional< ERHAPI_Platform >|Platform|
|const FRH_OnInventorySessionUpdateDelegateBlock &|Delegate|

#### Description

Calls the Inventory API to get the create an Inventory Session for the player.


#### Parameters

Delegate
: Callback delegate for creating the players session. 



### `BLUEPRINT_CreateInventorySession` <a id="classURH__PlayerInventory_1a08d3630b94e3773b91f4dab72fd5538b"></a>

void BLUEPRINT_CreateInventorySession(const FRH_OnInventorySessionUpdateDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnInventorySessionUpdateDynamicDelegate &|Delegate|

#### Description






### `BLUEPRINT_CreateInventorySessionForPlatform` <a id="classURH__PlayerInventory_1a8c2fee2331e9b749386e050edf242aa1"></a>

void BLUEPRINT_CreateInventorySessionForPlatform(const ERHAPI_Platform Platform, const FRH_OnInventorySessionUpdateDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Platform|Platform|
|const FRH_OnInventorySessionUpdateDynamicDelegate &|Delegate|

#### Description

Calls the Inventory API to get the create an Inventory Session for the player for a given Platform.


#### Parameters

Delegate
: Callback delegate for creating the players session. 



### `GetInventory` <a id="classURH__PlayerInventory_1aa39e94993d051196093f8eb69f6a8e5e"></a>

void GetInventory(TArray< int32 > ItemIds, const FRH_OnInventoryUpdateDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|ItemIds|
|const FRH_OnInventoryUpdateDelegateBlock &|Delegate|

#### Description

Calls the Inventory API to get the the inventory for the player.


#### Parameters

ItemIds
: The Item Ids of inventory requested, if empty all inventory will be returned. 
Delegate
: Callback delegate for getting the inventory. 



### `BLUEPRINT_GetInventory` <a id="classURH__PlayerInventory_1a59fda737d3bb2ae67d9e28d0fb5ab1b0"></a>

void BLUEPRINT_GetInventory(TArray< int32 > ItemIds, const FRH_OnInventoryUpdateDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|ItemIds|
|const FRH_OnInventoryUpdateDynamicDelegate &|Delegate|

#### Description






### `CreatePlayerOrder` <a id="classURH__PlayerInventory_1a25a32d0d801bfe8460c9fd5ffcc8a5e3"></a>

void CreatePlayerOrder(ERHAPI_PlayerOrderEntryType FillType, ERHAPI_Source OrderSource, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, FRH_OrderResultBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlayerOrderEntryType|FillType|
|ERHAPI_Source|OrderSource|
|const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > &|OrderEntries|
|FRH_OrderResultBlock|Delegate|

#### Description

Creates an order for the player, used for purchasing and other loot related actions.


#### Parameters

FillType
: The type of player order being created 
OrderSource
: Where the order is being created from 
OrderEntries
: Array of orders being requested 
Delegate
: Callback delegate for the completion of the order request 



### `BLUEPRINT_CreatePlayerOrder` <a id="classURH__PlayerInventory_1a45ff165c5a2c1d954408febb0a15f3a9"></a>

void BLUEPRINT_CreatePlayerOrder(ERHAPI_PlayerOrderEntryType FillType, ERHAPI_Source OrderSource, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, const FRH_OrderResultDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlayerOrderEntryType|FillType|
|ERHAPI_Source|OrderSource|
|const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > &|OrderEntries|
|const FRH_OrderResultDynamicDelegate &|Delegate|

#### Description






### `CreateNewPlayerOrder` <a id="classURH__PlayerInventory_1a383ffde7d88402ff420fd3b76a1145ab"></a>

void CreateNewPlayerOrder(ERHAPI_Source OrderSource, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, const FRH_OrderResultBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source|OrderSource|
|const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > &|OrderEntries|
|const FRH_OrderResultBlock &|Delegate|

#### Description

Creates an order for the player, used for purchasing and other loot related actions.


#### Parameters

OrderSource
: Where the order is being created from. 
OrderEntries
: Array of orders being requested. 
Delegate
: Callback delegate for the completion of the order request. 



### `BLUEPRINT_CreateNewPlayerOrder` <a id="classURH__PlayerInventory_1a8cbcaaabc8e09039fac1db47a63cda77"></a>

void BLUEPRINT_CreateNewPlayerOrder(ERHAPI_Source OrderSource, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, const FRH_OrderResultDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source|OrderSource|
|const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > &|OrderEntries|
|const FRH_OrderResultDynamicDelegate &|Delegate|

#### Description






### `CreateNewPlayerOrder` <a id="classURH__PlayerInventory_1abbc28af90b1624685bcc4d2a7aba6cd4"></a>

void CreateNewPlayerOrder(ERHAPI_Source OrderSource, bool IsTransaction, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, const FRH_OrderResultBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source|OrderSource|
|bool|IsTransaction|
|const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > &|OrderEntries|
|const FRH_OrderResultBlock &|Delegate|

#### Description

Creates an order for the player, used for purchasing and other loot related actions.


#### Parameters

OrderSource
: Where the order is being created from. 
IsTransaction
: If true, all orders must succeed for any to be completed. 
OrderEntries
: Array of orders being requested. 
Delegate
: Callback delegate for the completion of the order request. 



### `BLUEPRINT_CreateNewPlayerOrder2` <a id="classURH__PlayerInventory_1aa276a3fef62cd3e0083e3a9d433c4c01"></a>

void BLUEPRINT_CreateNewPlayerOrder2(ERHAPI_Source OrderSource, bool IsTransaction, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries, const FRH_OrderResultDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source|OrderSource|
|bool|IsTransaction|
|const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > &|OrderEntries|
|const FRH_OrderResultDynamicDelegate &|Delegate|

#### Description






### `RedeemPromoCode` <a id="classURH__PlayerInventory_1a44a7384919f2fee13552699a96cd1708"></a>

void RedeemPromoCode(const FString & PromoCode, const FRH_PromoCodeResultBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|PromoCode|
|const FRH_PromoCodeResultBlock &|Delegate|

#### Description

Creates an order for the player that redeems a promotion code.


#### Parameters

PromoCode
: The Promo Code being redeemed. 
Delegate
: Callback delegate for the completion of the promo code redemption. 



### `BLUEPRINT_RedeemPromoCode` <a id="classURH__PlayerInventory_1a4098703781291ed8e38971f3f5e60bbc"></a>

void BLUEPRINT_RedeemPromoCode(const FString & PromoCode, const FRH_PromoCodeResultDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|PromoCode|
|const FRH_PromoCodeResultDynamicDelegate &|Delegate|

#### Description






### `SetOrderWatch` <a id="classURH__PlayerInventory_1abfaceae0c3ccd3613308f113f12d3087"></a>

void SetOrderWatch(const FRH_OrderDetailsBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OrderDetailsBlock &|Delegate|

#### Description

Sets a watch to start polling for orders for the player.


#### Parameters

Delegate
: Callback delegate whenever the player has any orders. 



### `BLUEPRINT_SetOrderWatch` <a id="classURH__PlayerInventory_1a0c72781ba04a8dc362a87de084930ae9"></a>

void BLUEPRINT_SetOrderWatch(const FRH_OrderDetailsDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OrderDetailsDynamicDelegate &|Delegate|

#### Description






### `ClearOrderWatch` <a id="classURH__PlayerInventory_1af95c3474ca75c146c11e1894f9493a3e"></a>

void ClearOrderWatch(const FRH_OrderDetailsBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OrderDetailsBlock &|Delegate|

#### Description

Clears a watch for the player.




### `BLUEPRINT_ClearOrderWatch` <a id="classURH__PlayerInventory_1a767dd017770b37fcec8dac7b8f30f89c"></a>

void BLUEPRINT_ClearOrderWatch(const FRH_OrderDetailsDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OrderDetailsDynamicDelegate &|Delegate|

#### Description






### `AddPendingOrdersFromEntitlementsArray` <a id="classURH__PlayerInventory_1a41d3c4ca0a289b28935ab7496bd7fe74"></a>

void AddPendingOrdersFromEntitlementsArray(const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & Entitlements, const FRH_OrderDetailsBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|Entitlements|
|const FRH_OrderDetailsBlock &|Delegate|

#### Description

Adds pending order monitoring for each processed entitlement.


#### Parameters

Entitlements
: Array of processed entitlements that need monitoring. 
Delegate
: Callback delegate when the inventory update completes. 



### `BLUEPRINT_AddPendingOrdersFromEntitlementsArray` <a id="classURH__PlayerInventory_1ab9f3e51843aa4ac292ca7602aeee0913"></a>

void BLUEPRINT_AddPendingOrdersFromEntitlementsArray(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & Entitlements, const FRH_OrderDetailsDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|Entitlements|
|const FRH_OrderDetailsDynamicDelegate &|Delegate|

#### Description






### `AddPendingOrdersFromEntitlementResult` <a id="classURH__PlayerInventory_1a1fe3ba028e7fe6e9e923abf5a3fc6eba"></a>

void AddPendingOrdersFromEntitlementResult(const [FRHAPI_PlatformEntitlementProcessResult](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult) & EntitlementResult, const FRH_OrderDetailsBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PlatformEntitlementProcessResult](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult) &|EntitlementResult|
|const FRH_OrderDetailsBlock &|Delegate|

#### Description

Adds pending order monitoring for each processed entitlement.


#### Parameters

EntitlementResult
: Result from entitlement processing that needs monitoring. 
Delegate
: Callback delegate when the inventory update completes. 



### `BLUEPRINT_AddPendingOrdersFromEntitlementResult` <a id="classURH__PlayerInventory_1ac6024a68a966486865f311b89fa42c62"></a>

void BLUEPRINT_AddPendingOrdersFromEntitlementResult(const [FRHAPI_PlatformEntitlementProcessResult](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult) & EntitlementResult, const FRH_OrderDetailsDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PlatformEntitlementProcessResult](/unreal-plugins/all/structfrhapi__platformentitlementprocessresult/#structFRHAPI__PlatformEntitlementProcessResult) &|EntitlementResult|
|const FRH_OrderDetailsDynamicDelegate &|Delegate|

#### Description






### `CheckPollStatus` <a id="classURH__PlayerInventory_1a451359cb11acdeb358d924eff9c36c59"></a>

void CheckPollStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Used to pulse polling of watches and pending purchases.




### `CreateInventory` <a id="classURH__PlayerInventory_1afb0227615c4db71e3c02484d7c59b53b"></a>

void CreateInventory(const TOptional< FGuid > & ClientOrderReferenceId, const TArray< [FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory) > & CreateInventories, const ERHAPI_Source Source, const FRH_OnInventoryUpdateDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TOptional< FGuid > &|ClientOrderReferenceId|
|const TArray< [FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory) > &|CreateInventories|
|const ERHAPI_Source|Source|
|const FRH_OnInventoryUpdateDelegateBlock &|Delegate|

#### Description

Requests direct inventory creation to the players inventory.


#### Parameters

ClientOrderReferenceId
: Client specified ref id for an inventory change. 
CreateInventories
: Array of items to be created in the players inventory. 
Source
: Where the order is being created from. 
Delegate
: Callback delegate when the inventory creation completes. 



### `BLUEPRINT_CreateInventory` <a id="classURH__PlayerInventory_1a2779b3a5195b92bae3d8da552f8c47e0"></a>

void BLUEPRINT_CreateInventory(const FGuid & ClientOrderReferenceId, const TArray< [FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory) > & CreateInventories, const FRH_OnInventoryUpdateDynamicDelegate & Delegate, const ERHAPI_Source Source)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|ClientOrderReferenceId|
|const TArray< [FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory) > &|CreateInventories|
|const FRH_OnInventoryUpdateDynamicDelegate &|Delegate|
|const ERHAPI_Source|Source|

#### Description






### `BLUEPRINT_CreateInventoryWithoutClientOrderRefId` <a id="classURH__PlayerInventory_1a93674f3c5a360675e42a4a5750da7399"></a>

void BLUEPRINT_CreateInventoryWithoutClientOrderRefId(const TArray< [FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory) > & CreateInventories, const FRH_OnInventoryUpdateDynamicDelegate & Delegate, const ERHAPI_Source Source)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory) > &|CreateInventories|
|const FRH_OnInventoryUpdateDynamicDelegate &|Delegate|
|const ERHAPI_Source|Source|

#### Description

Requests direct inventory creation to the players inventory.


#### Parameters

CreateInventories
: Array of items to be created in the players inventory. 
Source
: Where the order is being created from. 
Delegate
: Callback delegate when the inventory creation completes. 



### `UpdateInventory` <a id="classURH__PlayerInventory_1af6944787996721ab352942ea487b23ca"></a>

void UpdateInventory(const TOptional< FGuid > & ClientOrderReferenceId, const TArray< [FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory) > & UpdateInventories, const ERHAPI_Source Source, const FRH_OnInventoryUpdateDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TOptional< FGuid > &|ClientOrderReferenceId|
|const TArray< [FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory) > &|UpdateInventories|
|const ERHAPI_Source|Source|
|const FRH_OnInventoryUpdateDelegateBlock &|Delegate|

#### Description

Requests direct inventory modifications to the players inventory.


#### Parameters

ClientOrderReferenceId
: Client specified ref id for an inventory change. 
UpdateInventories
: Array of items to be created in the players inventory. 
Source
: Where the order is being created from. 
Delegate
: Callback delegate when the inventory modification completes. 



### `BLUEPRINT_UpdateInventory` <a id="classURH__PlayerInventory_1a7ad5e5b926fa2823474afd5db311dc35"></a>

void BLUEPRINT_UpdateInventory(const FGuid & ClientOrderReferenceId, const TArray< [FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory) > & UpdateInventories, const FRH_OnInventoryUpdateDynamicDelegate & Delegate, const ERHAPI_Source Source)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|ClientOrderReferenceId|
|const TArray< [FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory) > &|UpdateInventories|
|const FRH_OnInventoryUpdateDynamicDelegate &|Delegate|
|const ERHAPI_Source|Source|

#### Description






### `BLUEPRINT_UpdateInventoryWithoutClientOrderRefId` <a id="classURH__PlayerInventory_1ab3cc6d1da91538527adbfc39503e2018"></a>

void BLUEPRINT_UpdateInventoryWithoutClientOrderRefId(const TArray< [FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory) > & UpdateInventories, const FRH_OnInventoryUpdateDynamicDelegate & Delegate, const ERHAPI_Source Source)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory) > &|UpdateInventories|
|const FRH_OnInventoryUpdateDynamicDelegate &|Delegate|
|const ERHAPI_Source|Source|

#### Description

Requests direct inventory modifications to the players inventory.


#### Parameters

UpdateInventories
: Array of items to be created in the players inventory. 
Source
: Where the order is being created from. 
Delegate
: Callback delegate when the inventory modification completes. 



### `ClearPendingOrder` <a id="classURH__PlayerInventory_1a1023ef83a9e1d7a88d3da06246aa7637"></a>

void ClearPendingOrder(const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & OrderResult)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) &|OrderResult|

#### Description

Used by the PendingOrder to clear itself from the pending order list when it completes.


#### Parameters

OrderResult
: The pending order result to clear. 



### `ParseOrderResult` <a id="classURH__PlayerInventory_1a0a3af764f187ffbd05955fb16a8bd5d7"></a>

void ParseOrderResult(const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & Content)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) &|Content|

#### Description

Parses a player order result API into a URH_PlayerOrderEntry.


#### Parameters

Content
: The PlayerOrder data to parse. 




## Protected Functions



### `ShouldPollInventory` <a id="classURH__PlayerInventory_1a6d4188288df48ec55bb6daf7edeb4959"></a>

bool ShouldPollInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the inventory should be polled due to an active watch.




### `ShouldPollPendingInventory` <a id="classURH__PlayerInventory_1a44bb8f812b678184d35450f313bca922"></a>

bool ShouldPollPendingInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if pending inventory should be polled due to outstanding orders.




### `HandleNotification` <a id="classURH__PlayerInventory_1a6164fd974fa48e65497343d05285d371"></a>

void HandleNotification(const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & Notification, const FString & APIName, const TArray< FString > & APIParams)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) &|Notification|
|const FString &|APIName|
|const TArray< FString > &|APIParams|

#### Description

Handles an incoming notification, checks if it is an invnetory notification, then operates if need be.


#### Parameters

Notification
: The notification to handle. 
APIName
: The name of the API that sent the notification. 
APIParams
: The parameters of the API that sent the notification. 



### `PollInventory` <a id="classURH__PlayerInventory_1afeaab6fb7057a5e3c481c06465887dcd"></a>

void PollInventory(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Start a poll for inventory updates.


#### Parameters

Delegate
: Callback delegate for the polling. 



### `PollPendingInventory` <a id="classURH__PlayerInventory_1ae1b0dd55006d28db5dfbef7b4ec27f5d"></a>

void PollPendingInventory(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Start a poll for pending inventory updates.


#### Parameters

Delegate
: Callback delegate for the polling. 



### `BroadcastOnInventoryCacheUpdated` <a id="classURH__PlayerInventory_1a549a0f5600fc0957e61dfa3b6b75b997"></a>

void BroadcastOnInventoryCacheUpdated(const TArray< int32 > & ItemIds)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|ItemIds|

#### Description

Helper function to broadcast inventory changes.


#### Parameters

ItemIds
: The item ids that have been updated. 



### `OnUserChanged` <a id="classURH__PlayerInventory_1ac429492f3cc9736fc88744dcd53fca03"></a>

void OnUserChanged()

#### Parameters

| Type | Name |
|------|------|

#### Description

Callback that occurs whenever the local player this subsystem is associated with changes.




### `InitPropertiesWithDefaultValues` <a id="classURH__PlayerInventory_1a98ee25be3e5fcdd1ccf481bf12b7d0a0"></a>

void InitPropertiesWithDefaultValues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initializes the subsystem with defaults for its cached data.




### `PopulateInstanceData` <a id="classURH__PlayerInventory_1a666fc902c1fe23954714cb660eac948b"></a>

void PopulateInstanceData([FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) & PlayerOrderCreate)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PlayerOrderCreate](/unreal-plugins/all/structfrhapi__playerordercreate/#structFRHAPI__PlayerOrderCreate) &|PlayerOrderCreate|

#### Description

Adds instance specific data to an Player Order.


#### Parameters

PlayerOrderCreate
: The Player order to add the data to. 



### `CreatePlayerOrderResponse` <a id="classURH__PlayerInventory_1afa2e5cb7cc7266afe1f33851cef008e3"></a>

void CreatePlayerOrderResponse(const TCreateOrder::Response & Resp, const FRH_OrderResultBlock Delegate, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > OrderEntries)

#### Parameters

| Type | Name |
|------|------|
|const TCreateOrder::Response &|Resp|
|const FRH_OrderResultBlock|Delegate|
|const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * >|OrderEntries|

#### Description

Handles the response to a Create Player Order call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
OrderEntries
: The Order Entries submitted with the create call. 



### `RedeemPromoCodeResponse` <a id="classURH__PlayerInventory_1a4158aff1ace8179824d768f12389919c"></a>

void RedeemPromoCodeResponse(const TCreateOrder::Response & Resp, const FRH_PromoCodeResultBlock Delegate, const FString PromoCode)

#### Parameters

| Type | Name |
|------|------|
|const TCreateOrder::Response &|Resp|
|const FRH_PromoCodeResultBlock|Delegate|
|const FString|PromoCode|

#### Description

Handles the response to a Redeem Promo Code call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
PromoCode
: The Code that was submitted to redeem. 



### `HandleCreateInventorySession` <a id="classURH__PlayerInventory_1a2d5dc041893d81c3afe017ed06b2f21c"></a>

void HandleCreateInventorySession(const RallyHereAPI::FResponse_CreateNewInventorySessionByPlayerUuid & Response, const FRH_OnInventorySessionUpdateDelegateBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_CreateNewInventorySessionByPlayerUuid &|Response|
|const FRH_OnInventorySessionUpdateDelegateBlock|Delegate|

#### Description

Handles the response to a Create Inventory Session call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `HandleGetInventorySession` <a id="classURH__PlayerInventory_1a6493cfede6044144868349a654c6acf2"></a>

void HandleGetInventorySession(const RallyHereAPI::FResponse_GetInventorySessionInfoByPlayerUuid & Response, const FRH_OnInventorySessionUpdateDelegateBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_GetInventorySessionInfoByPlayerUuid &|Response|
|const FRH_OnInventorySessionUpdateDelegateBlock|Delegate|

#### Description

Handles the response to a Get Inventory Session call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `HandleGetInventory` <a id="classURH__PlayerInventory_1ad7274cd6de55fd492593ba6640627b4e"></a>

void HandleGetInventory(const RallyHereAPI::FResponse_GetPlayerInventoryUuid & Response, const TArray< int32 > ItemIds, const FRH_OnInventoryUpdateDelegateBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_GetPlayerInventoryUuid &|Response|
|const TArray< int32 >|ItemIds|
|const FRH_OnInventoryUpdateDelegateBlock|Delegate|

#### Description

Handles the response to a Get Inventory call.


#### Parameters

Resp
: Response given for the call. 
ItemIds
: The Items Ids that inventory was requested of. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `HandleCreateInventory` <a id="classURH__PlayerInventory_1a67a9683f2d48eb8d1f3af34703f5876c"></a>

void HandleCreateInventory(const RallyHereAPI::FResponse_CreatePlayerInventoryUuid & Response, const FRH_OnInventoryUpdateDelegateBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_CreatePlayerInventoryUuid &|Response|
|const FRH_OnInventoryUpdateDelegateBlock|Delegate|

#### Description

Handles the response to a Create Inventory call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `HandleUpdateInventory` <a id="classURH__PlayerInventory_1a80d5fdb6953bb1378b75c511fae170c4"></a>

void HandleUpdateInventory(const RallyHereAPI::FResponse_ModifyManyPlayerInventoryUuid & Response, const FRH_OnInventoryUpdateDelegateBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_ModifyManyPlayerInventoryUuid &|Response|
|const FRH_OnInventoryUpdateDelegateBlock|Delegate|

#### Description

Handles the response to a Update Inventory call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `WriteOrderEntries` <a id="classURH__PlayerInventory_1a2588a2da983cd5d5d20d0b3bad876869"></a>

void WriteOrderEntries(TArray< [FRHAPI_PlayerOrderEntryCreate](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate) > & Entries, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & OrderEntries)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerOrderEntryCreate](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate) > &|Entries|
|const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > &|OrderEntries|

#### Description

Converts the class of Order Entries to the struct used by the API system for calls.


#### Parameters

Entries
: Struct based Order entries for submission. 
OrderEntries
: Class based Order entries for conversion. 



### `UpdateInventoryFromOrderDetails` <a id="classURH__PlayerInventory_1ae0df47f4fda770275400e4f08c2d77e4"></a>

void UpdateInventoryFromOrderDetails(const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > & OrderDetails)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > &|OrderDetails|

#### Description

Updates the cached inventory with data from an incoming order.


#### Parameters

OrderDetails
: The details of the incoming order. 



### `GetInventoryCount_INTERNAL` <a id="classURH__PlayerInventory_1a051af5a05a0ea4574572a649b7d1eb09"></a>

void GetInventoryCount_INTERNAL([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * Item, const FRH_GetInventoryCountBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|[URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) *|Item|
|const FRH_GetInventoryCountBlock &|Delegate|

#### Description

Internal helper function to complete Get Inventory Count.


#### Parameters

Item
: The Item to get the count of. 
Delegate
: Callback delegate to send the count to. 



### `IsInventoryItemOwned_INTERNAL` <a id="classURH__PlayerInventory_1a8214e3be4acaa58fb4333d4517adbbac"></a>

void IsInventoryItemOwned_INTERNAL([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * Item, const FRH_GetInventoryStateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|[URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) *|Item|
|const FRH_GetInventoryStateBlock &|Delegate|

#### Description

Internal helper function to complete Is Inventory Item Owned.


#### Parameters

Item
: The Item to get the ownership of. 
Delegate
: Callback delegate to send the ownership status to. 



### `IsInventoryItemRented_INTERNAL` <a id="classURH__PlayerInventory_1a83e3ae985adc5320194657b1a63b554a"></a>

void IsInventoryItemRented_INTERNAL([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * Item, const FRH_GetInventoryStateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|[URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) *|Item|
|const FRH_GetInventoryStateBlock &|Delegate|

#### Description

Internal helper function to complete Is Inventory Item Rented.


#### Parameters

Item
: The Item to get the rental status of. 
Delegate
: Callback delegate to send the rental status to. 



### `GetGameInstanceSubsystem` <a id="classURH__PlayerInventory_1a1b8ec4a659fad2e3defb26ceb27d3476"></a>

[URH_GameInstanceSubsystem](/unreal-plugins/all/classurh__gameinstancesubsystem/#classURH__GameInstanceSubsystem) * GetGameInstanceSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Helper function to get Game Instance Subsystem.




### `GetCatalogSubsystem` <a id="classURH__PlayerInventory_1aa92f2f13128661b503c07ccd6de70540"></a>

[URH_CatalogSubsystem](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem) * GetCatalogSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Helper function to get Catalog Subsystem.





