# group `Inventory` <a id="group__Inventory"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_PendingOrder`](#classURH__PendingOrder) | Base class to handle pending orders waiting for a final response.
`class `[`URH_PendingPromoCodeOrder`](#classURH__PendingPromoCodeOrder) | Class to handle pending promo code redemptions.
`class `[`URH_PendingInventoryUpdateOrder`](#classURH__PendingInventoryUpdateOrder) | Class to handle pending inventory update calls.
`class `[`URH_PendingPlayerOrder`](#classURH__PendingPlayerOrder) | Class to handle pending player orders.
`class `[`URH_PendingOrderDetailsOrder`](#classURH__PendingOrderDetailsOrder) | Class to handle pending order details orders.
`class `[`URH_PlayerOrderWatch`](#classURH__PlayerOrderWatch) | Class to track watches on players orders.
`class `[`URH_PlayerOrderEntry`](#classURH__PlayerOrderEntry) | Player Order Entry class defines the data of an Order used to submit one to the InventoryAPI.
`class `[`URH_PlayerInventory`](#classURH__PlayerInventory) | Inventory Subsystem created per player for tracking and updating player inventory.
`class `[`URH_InventoryBlueprintLibrary`](#classURH__InventoryBlueprintLibrary) | Inventory Blueprint Library with helper methods for inventory item struct.
`struct `[`FRH_InventorySession`](#structFRH__InventorySession) | Struct for tracking an inventory session.
`struct `[`FRH_ItemInventory`](#structFRH__ItemInventory) | Inventory Item struct for defining cached inventory items and making inventory write calls.
`struct `[`FRH_BaseInventoryOperation`](#structFRH__BaseInventoryOperation) | Base Inventory Operation struct for defining shared input data for Inventory Modification API calls.
`struct `[`FRH_CreateInventory`](#structFRH__CreateInventory) | Create Inventory Operation struct for setting up data to Create an Inventory record.
`struct `[`FRH_UpdateInventory`](#structFRH__UpdateInventory) | Update Inventory Operation struct for setting up data to Update an Inventory record.

## class `URH_PendingOrder` <a id="classURH__PendingOrder"></a>

```
class URH_PendingOrder
  : public UObject
```

Base class to handle pending orders waiting for a final response.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`OrderId`](#classURH__PendingOrder_1a83c5e4bd5c467fc44bec8737feba31aa) | Id of the pending order.
`public bool `[`RequestOrders`](#classURH__PendingOrder_1ac9d803bd12539f79ad28c919988866d2)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` | Polls to see if the order has completed.
`public inline FORCEINLINE bool `[`RequestOrders`](#classURH__PendingOrder_1af446c79cf3b58b6b56e112aed33a2ed9)`(const FRH_GenericSuccessBlock & Delegate)` | 
`protected inline virtual void `[`BroadcastComplete`](#classURH__PendingOrder_1a126b51538c0d0d8ca39acaa494c1c432)`(`[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * PlayerInventory,const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` | Triggers a broadcasts when the order is sucessfully processed.
`protected virtual void `[`RequestOrdersResponse`](#classURH__PendingOrder_1a803ce919c79362b8053b81abef0cc13e)`(const TGetOrderById::Response & Resp)` | Handles the response to a Get Player Order call.
`protected `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`GetPlayerInventory`](#classURH__PendingOrder_1a3c1cb4a28a04ff48aa50a4c4e8c2250d)`() const` | Gets the Player Inventory.

### Members

#### `public FString `[`OrderId`](#classURH__PendingOrder_1a83c5e4bd5c467fc44bec8737feba31aa) <a id="classURH__PendingOrder_1a83c5e4bd5c467fc44bec8737feba31aa"></a>

Id of the pending order.

#### `public bool `[`RequestOrders`](#classURH__PendingOrder_1ac9d803bd12539f79ad28c919988866d2)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__PendingOrder_1ac9d803bd12539f79ad28c919988866d2"></a>

Polls to see if the order has completed.

#### Parameters
* `Delegate` Callback if the poll is successful. 

#### Returns
True if a call was made.

#### `public inline FORCEINLINE bool `[`RequestOrders`](#classURH__PendingOrder_1af446c79cf3b58b6b56e112aed33a2ed9)`(const FRH_GenericSuccessBlock & Delegate)` <a id="classURH__PendingOrder_1af446c79cf3b58b6b56e112aed33a2ed9"></a>

#### `protected inline virtual void `[`BroadcastComplete`](#classURH__PendingOrder_1a126b51538c0d0d8ca39acaa494c1c432)`(`[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * PlayerInventory,const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` <a id="classURH__PendingOrder_1a126b51538c0d0d8ca39acaa494c1c432"></a>

Triggers a broadcasts when the order is sucessfully processed.

#### Parameters
* `PlayerInventory` The Inventory Subystem to help will callback params. 

* `Content` The results of the order being processed.

#### `protected virtual void `[`RequestOrdersResponse`](#classURH__PendingOrder_1a803ce919c79362b8053b81abef0cc13e)`(const TGetOrderById::Response & Resp)` <a id="classURH__PendingOrder_1a803ce919c79362b8053b81abef0cc13e"></a>

Handles the response to a Get Player Order call.

#### Parameters
* `Resp` Response given for the call.

#### `protected `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`GetPlayerInventory`](#classURH__PendingOrder_1a3c1cb4a28a04ff48aa50a4c4e8c2250d)`() const` <a id="classURH__PendingOrder_1a3c1cb4a28a04ff48aa50a4c4e8c2250d"></a>

Gets the Player Inventory.

## class `URH_PendingPromoCodeOrder` <a id="classURH__PendingPromoCodeOrder"></a>

```
class URH_PendingPromoCodeOrder
  : public URH_PendingOrder
```

Class to handle pending promo code redemptions.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`PromoCode`](#classURH__PendingPromoCodeOrder_1a85cdc37b5bbec7ac8d2df0dbdf0d087f) | Promo code attempting to be redeemed.
`public FRH_PromoCodeResultBlock `[`PromoCodeResultsDelegate`](#classURH__PendingPromoCodeOrder_1ae5622c5052dafc94488cf41555f2a2ac) | Delegate callback with the promo code results.
`public inline void `[`Init`](#classURH__PendingPromoCodeOrder_1a8293b2c6e26e85785d237210e598e997)`(const FString & InOrderId,const FString & InPromoCode,const FRH_PromoCodeResultBlock & InPromoCodeDelegate)` | Initalized the pending request.
`protected virtual void `[`BroadcastComplete`](#classURH__PendingPromoCodeOrder_1a4629f03754616a4c81733bc54d8d9c1f)`(`[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * PlayerInventory,const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` | Triggers a broadcasts when the order is sucessfully processed.

### Members

#### `public FString `[`PromoCode`](#classURH__PendingPromoCodeOrder_1a85cdc37b5bbec7ac8d2df0dbdf0d087f) <a id="classURH__PendingPromoCodeOrder_1a85cdc37b5bbec7ac8d2df0dbdf0d087f"></a>

Promo code attempting to be redeemed.

#### `public FRH_PromoCodeResultBlock `[`PromoCodeResultsDelegate`](#classURH__PendingPromoCodeOrder_1ae5622c5052dafc94488cf41555f2a2ac) <a id="classURH__PendingPromoCodeOrder_1ae5622c5052dafc94488cf41555f2a2ac"></a>

Delegate callback with the promo code results.

#### `public inline void `[`Init`](#classURH__PendingPromoCodeOrder_1a8293b2c6e26e85785d237210e598e997)`(const FString & InOrderId,const FString & InPromoCode,const FRH_PromoCodeResultBlock & InPromoCodeDelegate)` <a id="classURH__PendingPromoCodeOrder_1a8293b2c6e26e85785d237210e598e997"></a>

Initalized the pending request.

#### Parameters
* `InOrderId` OrderId of the pending order. 

* `InPromoCode` Promo code being redeemed in the order. 

* `InPromoCodeDelegate` Callback delegate to fire when complete.

#### `protected virtual void `[`BroadcastComplete`](#classURH__PendingPromoCodeOrder_1a4629f03754616a4c81733bc54d8d9c1f)`(`[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * PlayerInventory,const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` <a id="classURH__PendingPromoCodeOrder_1a4629f03754616a4c81733bc54d8d9c1f"></a>

Triggers a broadcasts when the order is sucessfully processed.

#### Parameters
* `PlayerInventory` The Inventory Subystem to help will callback params. 

* `Content` The results of the order being processed.

## class `URH_PendingInventoryUpdateOrder` <a id="classURH__PendingInventoryUpdateOrder"></a>

```
class URH_PendingInventoryUpdateOrder
  : public URH_PendingOrder
```

Class to handle pending inventory update calls.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_OnInventoryUpdateDelegateBlock `[`InventoryUpdateDelegate`](#classURH__PendingInventoryUpdateOrder_1a20bd6332b5aba3f967a9d7c0970340fc) | Delegate callback with inventory update results.
`public inline void `[`Init`](#classURH__PendingInventoryUpdateOrder_1afa0d467f72eecb32302bb507673f0165)`(const FString & InOrderId,const FRH_OnInventoryUpdateDelegateBlock & InInventoryUpdateDelegate)` | Initalized the pending request.
`protected virtual void `[`BroadcastComplete`](#classURH__PendingInventoryUpdateOrder_1a97bbd4a1825b41a8ba5cb150fa5e8b80)`(`[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * PlayerInventory,const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` | Triggers a broadcasts when the order is sucessfully processed.

### Members

#### `public FRH_OnInventoryUpdateDelegateBlock `[`InventoryUpdateDelegate`](#classURH__PendingInventoryUpdateOrder_1a20bd6332b5aba3f967a9d7c0970340fc) <a id="classURH__PendingInventoryUpdateOrder_1a20bd6332b5aba3f967a9d7c0970340fc"></a>

Delegate callback with inventory update results.

#### `public inline void `[`Init`](#classURH__PendingInventoryUpdateOrder_1afa0d467f72eecb32302bb507673f0165)`(const FString & InOrderId,const FRH_OnInventoryUpdateDelegateBlock & InInventoryUpdateDelegate)` <a id="classURH__PendingInventoryUpdateOrder_1afa0d467f72eecb32302bb507673f0165"></a>

Initalized the pending request.

#### Parameters
* `InOrderId` OrderId of the pending order. 

* `InInventoryUpdateDelegate` Callback delegate to fire when complete.

#### `protected virtual void `[`BroadcastComplete`](#classURH__PendingInventoryUpdateOrder_1a97bbd4a1825b41a8ba5cb150fa5e8b80)`(`[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * PlayerInventory,const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` <a id="classURH__PendingInventoryUpdateOrder_1a97bbd4a1825b41a8ba5cb150fa5e8b80"></a>

Triggers a broadcasts when the order is sucessfully processed.

#### Parameters
* `PlayerInventory` The Inventory Subystem to help will callback params. 

* `Content` The results of the order being processed.

## class `URH_PendingPlayerOrder` <a id="classURH__PendingPlayerOrder"></a>

```
class URH_PendingPlayerOrder
  : public URH_PendingOrder
```

Class to handle pending player orders.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_OrderResultBlock `[`OrderResultDelegate`](#classURH__PendingPlayerOrder_1a07d7f652f1b01bd3d29f691efa72b573) | Delegate callback with player order results.
`public TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > `[`OrderEntries`](#classURH__PendingPlayerOrder_1a5ba9759def6c16bd12fac3ca5a867afd) | List of all the order entries submitted in the order.
`public inline void `[`Init`](#classURH__PendingPlayerOrder_1a72bb10bf44aff3eb38a48e6e01e886fd)`(const FString & InOrderId,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > & InOrderEntries,const FRH_OrderResultBlock & InOrderResultDelegate)` | Initalized the pending request.
`protected virtual void `[`BroadcastComplete`](#classURH__PendingPlayerOrder_1aad3d587d8b58f21c3c873644165e646d)`(`[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * PlayerInventory,const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` | Triggers a broadcasts when the order is sucessfully processed.

### Members

#### `public FRH_OrderResultBlock `[`OrderResultDelegate`](#classURH__PendingPlayerOrder_1a07d7f652f1b01bd3d29f691efa72b573) <a id="classURH__PendingPlayerOrder_1a07d7f652f1b01bd3d29f691efa72b573"></a>

Delegate callback with player order results.

#### `public TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > `[`OrderEntries`](#classURH__PendingPlayerOrder_1a5ba9759def6c16bd12fac3ca5a867afd) <a id="classURH__PendingPlayerOrder_1a5ba9759def6c16bd12fac3ca5a867afd"></a>

List of all the order entries submitted in the order.

#### `public inline void `[`Init`](#classURH__PendingPlayerOrder_1a72bb10bf44aff3eb38a48e6e01e886fd)`(const FString & InOrderId,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > & InOrderEntries,const FRH_OrderResultBlock & InOrderResultDelegate)` <a id="classURH__PendingPlayerOrder_1a72bb10bf44aff3eb38a48e6e01e886fd"></a>

Initalized the pending request.

#### Parameters
* `InOrderId` OrderId of the pending order. 

* `InOrderEntries` Order entries submitted with the order 

* `InOrderResultDelegate` Callback delegate to fire when complete.

#### `protected virtual void `[`BroadcastComplete`](#classURH__PendingPlayerOrder_1aad3d587d8b58f21c3c873644165e646d)`(`[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * PlayerInventory,const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` <a id="classURH__PendingPlayerOrder_1aad3d587d8b58f21c3c873644165e646d"></a>

Triggers a broadcasts when the order is sucessfully processed.

#### Parameters
* `PlayerInventory` The Inventory Subystem to help will callback params. 

* `Content` The results of the order being processed.

## class `URH_PendingOrderDetailsOrder` <a id="classURH__PendingOrderDetailsOrder"></a>

```
class URH_PendingOrderDetailsOrder
  : public URH_PendingOrder
```

Class to handle pending order details orders.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_OrderDetailsBlock `[`OrderDetailsDelegate`](#classURH__PendingOrderDetailsOrder_1a2f55d2a898c76ba950a0a40231afed7d) | Delegate callback with player order results.
`public inline void `[`Init`](#classURH__PendingOrderDetailsOrder_1a3ed85df7842d29e831c2c2d29df23014)`(const FString & InOrderId,const FRH_OrderDetailsBlock & InOrderDetailDelegate)` | Initalized the pending request.
`protected virtual void `[`BroadcastComplete`](#classURH__PendingOrderDetailsOrder_1a756eeacc251fdc5cccab7bf7299662d3)`(`[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * PlayerInventory,const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` | Triggers a broadcasts when the order is sucessfully processed.

### Members

#### `public FRH_OrderDetailsBlock `[`OrderDetailsDelegate`](#classURH__PendingOrderDetailsOrder_1a2f55d2a898c76ba950a0a40231afed7d) <a id="classURH__PendingOrderDetailsOrder_1a2f55d2a898c76ba950a0a40231afed7d"></a>

Delegate callback with player order results.

#### `public inline void `[`Init`](#classURH__PendingOrderDetailsOrder_1a3ed85df7842d29e831c2c2d29df23014)`(const FString & InOrderId,const FRH_OrderDetailsBlock & InOrderDetailDelegate)` <a id="classURH__PendingOrderDetailsOrder_1a3ed85df7842d29e831c2c2d29df23014"></a>

Initalized the pending request.

#### Parameters
* `InOrderId` OrderId of the pending order. 

* `InOrderResultDelegate` Callback delegate to fire when complete.

#### `protected virtual void `[`BroadcastComplete`](#classURH__PendingOrderDetailsOrder_1a756eeacc251fdc5cccab7bf7299662d3)`(`[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * PlayerInventory,const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` <a id="classURH__PendingOrderDetailsOrder_1a756eeacc251fdc5cccab7bf7299662d3"></a>

Triggers a broadcasts when the order is sucessfully processed.

#### Parameters
* `PlayerInventory` The Inventory Subystem to help will callback params. 

* `Content` The results of the order being processed.

## class `URH_PlayerOrderWatch` <a id="classURH__PlayerOrderWatch"></a>

```
class URH_PlayerOrderWatch
  : public UObject
```

Class to track watches on players orders.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< FRH_OrderDetailsBlock > `[`Delegates`](#classURH__PlayerOrderWatch_1a478e3d65d0b3ef1816a434fab2a2434e) | List of delegates listening for order.
`public bool `[`RequestOrders`](#classURH__PlayerOrderWatch_1a8e3771a7606e875a82480d14c0eda10d)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` | Gets the players orders.
`public inline FORCEINLINE bool `[`RequestOrders`](#classURH__PlayerOrderWatch_1a0971ebca21c2bc89f3a6e26994912a3c)`(const FRH_GenericSuccessBlock & Delegate)` | 
`protected `[`FRHAPI_InventoryPageMeta`](models/RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` `[`LastRequestMeta`](#classURH__PlayerOrderWatch_1a65f88e42d44280f328a4b994e67bdb7e) | Information about the last successful request, to used for future requests (contains cursor, etc).
`protected virtual void `[`RequestOrdersResponse`](#classURH__PlayerOrderWatch_1a156cada0b20a90e20017c618b28b1723)`(const TGetOrders::Response & Resp)` | Handles the response to a Get Player Order call.
`protected `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`GetPlayerInventory`](#classURH__PlayerOrderWatch_1a49c22be3b3f0b9e3ef8170766cb1b392)`() const` | Gets the Player Inventory.

### Members

#### `public TArray< FRH_OrderDetailsBlock > `[`Delegates`](#classURH__PlayerOrderWatch_1a478e3d65d0b3ef1816a434fab2a2434e) <a id="classURH__PlayerOrderWatch_1a478e3d65d0b3ef1816a434fab2a2434e"></a>

List of delegates listening for order.

#### `public bool `[`RequestOrders`](#classURH__PlayerOrderWatch_1a8e3771a7606e875a82480d14c0eda10d)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__PlayerOrderWatch_1a8e3771a7606e875a82480d14c0eda10d"></a>

Gets the players orders.

#### Parameters
* `Delegate` Callback with the players orders. 

#### Returns
True if the call was made.

#### `public inline FORCEINLINE bool `[`RequestOrders`](#classURH__PlayerOrderWatch_1a0971ebca21c2bc89f3a6e26994912a3c)`(const FRH_GenericSuccessBlock & Delegate)` <a id="classURH__PlayerOrderWatch_1a0971ebca21c2bc89f3a6e26994912a3c"></a>

#### `protected `[`FRHAPI_InventoryPageMeta`](models/RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` `[`LastRequestMeta`](#classURH__PlayerOrderWatch_1a65f88e42d44280f328a4b994e67bdb7e) <a id="classURH__PlayerOrderWatch_1a65f88e42d44280f328a4b994e67bdb7e"></a>

Information about the last successful request, to used for future requests (contains cursor, etc).

#### `protected virtual void `[`RequestOrdersResponse`](#classURH__PlayerOrderWatch_1a156cada0b20a90e20017c618b28b1723)`(const TGetOrders::Response & Resp)` <a id="classURH__PlayerOrderWatch_1a156cada0b20a90e20017c618b28b1723"></a>

Handles the response to a Get Player Order call.

#### Parameters
* `Resp` Response given for the call.

#### `protected `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`GetPlayerInventory`](#classURH__PlayerOrderWatch_1a49c22be3b3f0b9e3ef8170766cb1b392)`() const` <a id="classURH__PlayerOrderWatch_1a49c22be3b3f0b9e3ef8170766cb1b392"></a>

Gets the Player Inventory.

## class `URH_PlayerOrderEntry` <a id="classURH__PlayerOrderEntry"></a>

```
class URH_PlayerOrderEntry
  : public UObject
```

Player Order Entry class defines the data of an Order used to submit one to the InventoryAPI.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PlayerOrderEntryType `[`FillType`](#classURH__PlayerOrderEntry_1a6324972122c3e217ef2f30b502f6be96) | The Fill Type of this order Entry.
`public `[`FRHAPI_Loot`](models/RHAPI_Loot.md#structFRHAPI__Loot)` `[`LootItem`](#classURH__PlayerOrderEntry_1ab8eb2ce399f6c87e100915af9550e452) | The Loot Item the order is for.
`public int32 `[`LootId`](#classURH__PlayerOrderEntry_1af7d201c7c164b7b74d10275a329c7b70) | The Loot Id of the loot item.
`public int32 `[`Quantity`](#classURH__PlayerOrderEntry_1a5aab19365ad5685ead597e6aade55bff) | The amount of the loot item the order is for.
`public FString `[`ExternalTransactionId`](#classURH__PlayerOrderEntry_1a415d4db9bef6f060e98217c8806d2a0d) | The id that the client can provide for the order for record keeping.
`public int32 `[`PriceItemId`](#classURH__PlayerOrderEntry_1a5e0ac397f38aba73cb3429dcf68876e8) | The item id of the item being used to pay for the order.
`public int32 `[`Price`](#classURH__PlayerOrderEntry_1a3e4b6531988df83d2d9087c863658af7) | The amount of the item being used for payment, this is verified to match the expected price.
`public TArray< `[`FRHAPI_PurchasePriceCurrency`](models/RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > `[`Prices`](#classURH__PlayerOrderEntry_1a0dbea9af8bde1181c736798c763fd60d) | An array of items and their types being used for payment, this is verified to match the expected price.
`public int32 `[`CouponItemId`](#classURH__PlayerOrderEntry_1a81d35b761d82023ac6b29c949d2f182f) | The item id of a coupon item being used if one is being applied for an item discount.
`public TMap< FString, FString > `[`CustomData`](#classURH__PlayerOrderEntry_1a465d00f2f73358c3509caf95166df187) | Custom data for the given order to be placed on the item.
`public inline ERHAPI_PlayerOrderEntryType `[`GetFillType`](#classURH__PlayerOrderEntry_1a14ca340eba40b938357e21e65c6fa439)`() const` | Gets the Fill Type of the order.
`public inline const `[`FRHAPI_Loot`](models/RHAPI_Loot.md#structFRHAPI__Loot)` & `[`GetLootItem`](#classURH__PlayerOrderEntry_1aba95d130fe7f689319afdc0bb55e74ac)`() const` | Gets the Loot Item the order is for.
`public inline const int32 & `[`GetLootId`](#classURH__PlayerOrderEntry_1a9bae2b65520001d9a63d48b9a8d1fb20)`() const` | Gets the Loot Id of the loot item.
`public inline int32 `[`GetQuantity`](#classURH__PlayerOrderEntry_1afdd804405384e6adb0adb7ecd310457f)`() const` | Gets the amount of the loot item the order is for.
`public inline const FString & `[`GetExternalTransactionId`](#classURH__PlayerOrderEntry_1a044f824678cd2a32199c7dad1538cb19)`() const` | Gets the id that the client can provide for the order for record keeping.
`public inline const int32 & `[`GetPriceItemId`](#classURH__PlayerOrderEntry_1a35d0954118cbfb8d9886c29fcfc59932)`() const` | Gets the item id of the item being used to pay for the order.
`public inline int32 `[`GetPrice`](#classURH__PlayerOrderEntry_1aab86a728d3883a34a8e5e06de40d3057)`() const` | Gets the amount of the item being used for payment, this is verified to match the expected price.
`public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](models/RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetPrices`](#classURH__PlayerOrderEntry_1a29cd81e70d0bb0c1bc51be8dd7ab003a)`() const` | Gets an array of items and their types being used for payment, this is verified to match the expected price.
`public inline const int32 & `[`GetCouponItemId`](#classURH__PlayerOrderEntry_1a0db41c510ffc7be86684f03d6ff26367)`() const` | Gets the item id of a coupon item being used if one is being applied for an item discount.
`public inline void `[`AddCustomData`](#classURH__PlayerOrderEntry_1a61764974114c2ae68fc78d64bd9e692b)`(const FString & Key,const FString & Value)` | Adds custom data to the order entry.

### Members

#### `public ERHAPI_PlayerOrderEntryType `[`FillType`](#classURH__PlayerOrderEntry_1a6324972122c3e217ef2f30b502f6be96) <a id="classURH__PlayerOrderEntry_1a6324972122c3e217ef2f30b502f6be96"></a>

The Fill Type of this order Entry.

#### `public `[`FRHAPI_Loot`](models/RHAPI_Loot.md#structFRHAPI__Loot)` `[`LootItem`](#classURH__PlayerOrderEntry_1ab8eb2ce399f6c87e100915af9550e452) <a id="classURH__PlayerOrderEntry_1ab8eb2ce399f6c87e100915af9550e452"></a>

The Loot Item the order is for.

#### `public int32 `[`LootId`](#classURH__PlayerOrderEntry_1af7d201c7c164b7b74d10275a329c7b70) <a id="classURH__PlayerOrderEntry_1af7d201c7c164b7b74d10275a329c7b70"></a>

The Loot Id of the loot item.

#### `public int32 `[`Quantity`](#classURH__PlayerOrderEntry_1a5aab19365ad5685ead597e6aade55bff) <a id="classURH__PlayerOrderEntry_1a5aab19365ad5685ead597e6aade55bff"></a>

The amount of the loot item the order is for.

#### `public FString `[`ExternalTransactionId`](#classURH__PlayerOrderEntry_1a415d4db9bef6f060e98217c8806d2a0d) <a id="classURH__PlayerOrderEntry_1a415d4db9bef6f060e98217c8806d2a0d"></a>

The id that the client can provide for the order for record keeping.

#### `public int32 `[`PriceItemId`](#classURH__PlayerOrderEntry_1a5e0ac397f38aba73cb3429dcf68876e8) <a id="classURH__PlayerOrderEntry_1a5e0ac397f38aba73cb3429dcf68876e8"></a>

The item id of the item being used to pay for the order.

#### `public int32 `[`Price`](#classURH__PlayerOrderEntry_1a3e4b6531988df83d2d9087c863658af7) <a id="classURH__PlayerOrderEntry_1a3e4b6531988df83d2d9087c863658af7"></a>

The amount of the item being used for payment, this is verified to match the expected price.

#### `public TArray< `[`FRHAPI_PurchasePriceCurrency`](models/RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > `[`Prices`](#classURH__PlayerOrderEntry_1a0dbea9af8bde1181c736798c763fd60d) <a id="classURH__PlayerOrderEntry_1a0dbea9af8bde1181c736798c763fd60d"></a>

An array of items and their types being used for payment, this is verified to match the expected price.

#### `public int32 `[`CouponItemId`](#classURH__PlayerOrderEntry_1a81d35b761d82023ac6b29c949d2f182f) <a id="classURH__PlayerOrderEntry_1a81d35b761d82023ac6b29c949d2f182f"></a>

The item id of a coupon item being used if one is being applied for an item discount.

#### `public TMap< FString, FString > `[`CustomData`](#classURH__PlayerOrderEntry_1a465d00f2f73358c3509caf95166df187) <a id="classURH__PlayerOrderEntry_1a465d00f2f73358c3509caf95166df187"></a>

Custom data for the given order to be placed on the item.

#### `public inline ERHAPI_PlayerOrderEntryType `[`GetFillType`](#classURH__PlayerOrderEntry_1a14ca340eba40b938357e21e65c6fa439)`() const` <a id="classURH__PlayerOrderEntry_1a14ca340eba40b938357e21e65c6fa439"></a>

Gets the Fill Type of the order.

#### `public inline const `[`FRHAPI_Loot`](models/RHAPI_Loot.md#structFRHAPI__Loot)` & `[`GetLootItem`](#classURH__PlayerOrderEntry_1aba95d130fe7f689319afdc0bb55e74ac)`() const` <a id="classURH__PlayerOrderEntry_1aba95d130fe7f689319afdc0bb55e74ac"></a>

Gets the Loot Item the order is for.

#### `public inline const int32 & `[`GetLootId`](#classURH__PlayerOrderEntry_1a9bae2b65520001d9a63d48b9a8d1fb20)`() const` <a id="classURH__PlayerOrderEntry_1a9bae2b65520001d9a63d48b9a8d1fb20"></a>

Gets the Loot Id of the loot item.

#### `public inline int32 `[`GetQuantity`](#classURH__PlayerOrderEntry_1afdd804405384e6adb0adb7ecd310457f)`() const` <a id="classURH__PlayerOrderEntry_1afdd804405384e6adb0adb7ecd310457f"></a>

Gets the amount of the loot item the order is for.

#### `public inline const FString & `[`GetExternalTransactionId`](#classURH__PlayerOrderEntry_1a044f824678cd2a32199c7dad1538cb19)`() const` <a id="classURH__PlayerOrderEntry_1a044f824678cd2a32199c7dad1538cb19"></a>

Gets the id that the client can provide for the order for record keeping.

#### `public inline const int32 & `[`GetPriceItemId`](#classURH__PlayerOrderEntry_1a35d0954118cbfb8d9886c29fcfc59932)`() const` <a id="classURH__PlayerOrderEntry_1a35d0954118cbfb8d9886c29fcfc59932"></a>

Gets the item id of the item being used to pay for the order.

#### `public inline int32 `[`GetPrice`](#classURH__PlayerOrderEntry_1aab86a728d3883a34a8e5e06de40d3057)`() const` <a id="classURH__PlayerOrderEntry_1aab86a728d3883a34a8e5e06de40d3057"></a>

Gets the amount of the item being used for payment, this is verified to match the expected price.

#### `public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](models/RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetPrices`](#classURH__PlayerOrderEntry_1a29cd81e70d0bb0c1bc51be8dd7ab003a)`() const` <a id="classURH__PlayerOrderEntry_1a29cd81e70d0bb0c1bc51be8dd7ab003a"></a>

Gets an array of items and their types being used for payment, this is verified to match the expected price.

#### `public inline const int32 & `[`GetCouponItemId`](#classURH__PlayerOrderEntry_1a0db41c510ffc7be86684f03d6ff26367)`() const` <a id="classURH__PlayerOrderEntry_1a0db41c510ffc7be86684f03d6ff26367"></a>

Gets the item id of a coupon item being used if one is being applied for an item discount.

#### `public inline void `[`AddCustomData`](#classURH__PlayerOrderEntry_1a61764974114c2ae68fc78d64bd9e692b)`(const FString & Key,const FString & Value)` <a id="classURH__PlayerOrderEntry_1a61764974114c2ae68fc78d64bd9e692b"></a>

Adds custom data to the order entry.

#### Parameters
* `Key` The key for the custom data. 

* `Value` The value for the custom data.

## class `URH_PlayerInventory` <a id="classURH__PlayerInventory"></a>

```
class URH_PlayerInventory
  : public UObject
```

Inventory Subsystem created per player for tracking and updating player inventory.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_InventoryUpdatedDelegate `[`OnInventoryCacheUpdated`](#classURH__PlayerInventory_1aec143589873017eac01355a01c5ad0f5) | Delegate to listen to changes to the players cached inventory.
`public FRH_InventoryUpdatedDynamicDelegate `[`OnInventoryCacheUpdatedBP`](#classURH__PlayerInventory_1ad1b9f15dd0f855b0997e5e8f97e213fc) | 
`public void `[`Initialize`](#classURH__PlayerInventory_1a984d6ea76fd13361e4ee7fb04c03964f)`()` | Initialize the subobject.
`public inline `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerInventory_1ae13c7ba7f568d94f382cadac250c0655)`() const` | Gets the player info set on the subsystem.
`public const FGuid `[`GetRHPlayerUuid`](#classURH__PlayerInventory_1a098b20b913bfc2a048627aefad4a9073)`() const` | Gets the associated player infos Unique Player Id.
`public const FAuthContextPtr `[`GetAuthContext`](#classURH__PlayerInventory_1ae6585ec255e5cd5fc4fd4bcb32c662fb)`() const` | Gets the Auth Context that has authority to operate on this players inventory.
`public inline void `[`SetPlayerInfo`](#classURH__PlayerInventory_1a76b4f19b926a83f287c3515acd8b9150)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * InPlayerInfo)` | Sets the Player Info owner of the subsystem.
`public void `[`GetInventoryCount`](#classURH__PlayerInventory_1addb1cf44dbc4684f4bef23c51a012bb5)`(const int32 & ItemId,const FRH_GetInventoryCountBlock & Delegate) const` | Gets the Players Inventory Count of the item for the connected platform, async pulls needed item data if it isn't already cached.
`public void `[`IsInventoryItemOwned`](#classURH__PlayerInventory_1ab6843d485cb715c42e3c84dbf542c179)`(const int32 & ItemId,const FRH_GetInventoryStateBlock & Delegate) const` | Gets if the player owns at least one of the item for the connected platform, async pulls needed item data if it isn't already cached.
`public void `[`IsInventoryItemRented`](#classURH__PlayerInventory_1a82cfc3b4a12f0d7ce7774ff6100a4245)`(const int32 & ItemId,const FRH_GetInventoryStateBlock & Delegate) const` | Gets if the player has rented at least one of the item for the connected platform, async pulls needed item data if it isn't already cached.
`public inline const `[`FRH_InventorySession`](Inventory.md#structFRH__InventorySession)` & `[`GetCachedInventorySession`](#classURH__PlayerInventory_1a87fe7bf18012b4073c42a31c3ed04df2)`() const` | Gets the active inventory session for the player.
`public const TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > `[`GetAllCachedInventory`](#classURH__PlayerInventory_1a1fffa503b99fca22815fb14ccebbb06b)`() const` | Gets the cached inventory for the player.
`public const TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > `[`GetCachedInventoryForItem`](#classURH__PlayerInventory_1a29c034f35b2ca574e942996e58f3fd2d)`(const int32 & ItemId) const` | Gets the cached inventory records for an item id for the player.
`public const TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > `[`GetCachedInventoryForItems`](#classURH__PlayerInventory_1a5fdb61a338eb35e38b46f5d282fb66a8)`(const TArray< int32 > & ItemIds) const` | Gets the cached inventory records for multiple item ids for the player.
`public const TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > `[`GetCachedInventoryForType`](#classURH__PlayerInventory_1ab29ede8a19a9316eb20eb52ed9c35aed)`(const ERHAPI_InventoryType & Type) const` | Gets the cached inventory records for an inventory type for the player.
`public const TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > `[`GetCachedInventoryForItemsAndTypes`](#classURH__PlayerInventory_1ab8e5653fa66b9f65d3f0ebd527f2629c)`(const TArray< int32 > & ItemIds,const TArray< ERHAPI_InventoryType > & Types) const` | Gets the cached inventory records for multiple item ids that have the given inventory type for the player.
`public bool `[`GetCachedInventoryForInventoryId`](#classURH__PlayerInventory_1a8a8295a3807aef746e6b2db5a51cf9ba)`(const FGuid & InventoryId,`[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` & Item) const` | Gets an exact cached inventory record for the player.
`public inline const TArray< `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetOrderResults`](#classURH__PlayerInventory_1a743b0a4541f198b9e4f9520caeabcde4)`() const` | Gets all order results that have come in for the player.
`public inline void `[`ClearCachedInventory`](#classURH__PlayerInventory_1abfe1776646639ec37f10b74ad3dee8e5)`()` | Clears all cached inventory for the player.
`public inline void `[`ClearOrderCache`](#classURH__PlayerInventory_1a5387581632c52d10ec6464099ade2b3b)`()` | Clears all cached order results for the player.
`public void `[`GetInventorySession`](#classURH__PlayerInventory_1a00d805080c0941cf004bfbc77b8942cb)`(const FRH_OnInventorySessionUpdateDelegateBlock & Delegate)` | Calls the Inventory API to get the players active Inventory Session.
`public void `[`CreateInventorySession`](#classURH__PlayerInventory_1a02fb814effbd191eb96c26ed91a6642d)`(const TOptional< ERHAPI_Platform > Platform,const FRH_OnInventorySessionUpdateDelegateBlock & Delegate)` | Calls the Inventory API to get the create an Inventory Session for the player.
`public void `[`GetInventory`](#classURH__PlayerInventory_1aa39e94993d051196093f8eb69f6a8e5e)`(TArray< int32 > ItemIds,const FRH_OnInventoryUpdateDelegateBlock & Delegate)` | Calls the Inventory API to get the the inventory for the player.
`public inline void `[`CreatePlayerOrder`](#classURH__PlayerInventory_1a25a32d0d801bfe8460c9fd5ffcc8a5e3)`(ERHAPI_PlayerOrderEntryType FillType,ERHAPI_Source OrderSource,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > & OrderEntries,FRH_OrderResultBlock Delegate)` | Creates an order for the player, used for purchasing and other loot related actions.
`public inline void `[`CreateNewPlayerOrder`](#classURH__PlayerInventory_1a383ffde7d88402ff420fd3b76a1145ab)`(ERHAPI_Source OrderSource,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > & OrderEntries,const FRH_OrderResultBlock & Delegate)` | Creates an order for the player, used for purchasing and other loot related actions.
`public void `[`CreateNewPlayerOrder`](#classURH__PlayerInventory_1abbc28af90b1624685bcc4d2a7aba6cd4)`(ERHAPI_Source OrderSource,bool IsTransaction,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > & OrderEntries,const FRH_OrderResultBlock & Delegate)` | Creates an order for the player, used for purchasing and other loot related actions.
`public void `[`RedeemPromoCode`](#classURH__PlayerInventory_1a44a7384919f2fee13552699a96cd1708)`(const FString & PromoCode,const FRH_PromoCodeResultBlock & Delegate)` | Creates an order for the player that redeems a promotion code.
`public void `[`SetOrderWatch`](#classURH__PlayerInventory_1abfaceae0c3ccd3613308f113f12d3087)`(const FRH_OrderDetailsBlock & Delegate)` | Sets a watch to start polling for orders for the player.
`public void `[`ClearOrderWatch`](#classURH__PlayerInventory_1af95c3474ca75c146c11e1894f9493a3e)`(const FRH_OrderDetailsBlock & Delegate)` | Clears a watch for the player.
`public void `[`AddPendingOrdersFromEntitlementsArray`](#classURH__PlayerInventory_1a41d3c4ca0a289b28935ab7496bd7fe74)`(const TArray< `[`FRHAPI_PlatformEntitlement`](models/RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & Entitlements,const FRH_OrderDetailsBlock & Delegate)` | Adds pending order monitoring for each processed entitlement.
`public void `[`AddPendingOrdersFromEntitlementResult`](#classURH__PlayerInventory_1a1fe3ba028e7fe6e9e923abf5a3fc6eba)`(const `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` & EntitlementResult,const FRH_OrderDetailsBlock & Delegate)` | Adds pending order monitoring for each processed entitlement.
`public void `[`CheckPollStatus`](#classURH__PlayerInventory_1a451359cb11acdeb358d924eff9c36c59)`()` | Used to pulse polling of watches and pending purchases.
`public void `[`CreateInventory`](#classURH__PlayerInventory_1afb0227615c4db71e3c02484d7c59b53b)`(const TOptional< FGuid > & ClientOrderReferenceId,const TArray< `[`FRH_CreateInventory`](Inventory.md#structFRH__CreateInventory)` > & CreateInventories,const ERHAPI_Source Source,const FRH_OnInventoryUpdateDelegateBlock & Delegate)` | Requests direct inventory creation to the players inventory.
`public void `[`UpdateInventory`](#classURH__PlayerInventory_1af6944787996721ab352942ea487b23ca)`(const TOptional< FGuid > & ClientOrderReferenceId,const TArray< `[`FRH_UpdateInventory`](Inventory.md#structFRH__UpdateInventory)` > & UpdateInventories,const ERHAPI_Source Source,const FRH_OnInventoryUpdateDelegateBlock & Delegate)` | Requests direct inventory modifications to the players inventory.
`public void `[`ClearPendingOrder`](#classURH__PlayerInventory_1a1023ef83a9e1d7a88d3da06246aa7637)`(const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & OrderResult)` | Used by the PendingOrder to clear itself from the pending order list when it completes.
`public void `[`ParseOrderResult`](#classURH__PlayerInventory_1a0a3af764f187ffbd05955fb16a8bd5d7)`(const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` | Parses a player order result API into a [URH_PlayerOrderEntry](Inventory.md#classURH__PlayerOrderEntry).
`protected TMap< int32, TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > > `[`InventoryCache`](#classURH__PlayerInventory_1a5d5179ccce89d685f086005d1b907ad8) | Inventory cache map of Item Id to inventory records.
`protected TArray< FString > `[`ParsedInventoryOrders`](#classURH__PlayerInventory_1a76a82d3bb8f00ae1427129887e83952b) | Array of inventory orders that have recently been parsed to prevent double parsing orders through normal polling.
`protected FRH_AutoPollerPtr `[`InventoryPoller`](#classURH__PlayerInventory_1a9b073e90506714df4cff00f456168580) | Poller for inventory updates.
`protected FRH_AutoPollerPtr `[`PendingInventoryPoller`](#classURH__PlayerInventory_1ad2760c4c21398d38fad0929a5ab3b9ff) | Polled for pending inventory.
`protected TArray< `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > `[`CachedOrderResults`](#classURH__PlayerInventory_1ac1119eb6995fedd771aba3267bba20f2) | Array of order results.
`protected `[`URH_PlayerOrderWatch`](Inventory.md#classURH__PlayerOrderWatch)` * `[`OrderWatch`](#classURH__PlayerInventory_1a5ec78ed4488ac873c83015229342079c) | Tracking for orders that come in for the player.
`protected TArray< `[`URH_PendingOrder`](Inventory.md#classURH__PendingOrder)` * > `[`PendingOrders`](#classURH__PlayerInventory_1a40eadf8f534b41e0ecc99086040a2da2) | Array of orders that have been requested that have not been returned yet.
`protected `[`FRH_InventorySession`](Inventory.md#structFRH__InventorySession)` `[`InventorySession`](#classURH__PlayerInventory_1afcab0f1a8cf5f9e0051351ffba249322) | The active inventory session.
`protected `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`PlayerInfo`](#classURH__PlayerInventory_1a2da991415c67eb60ab1a5df90848568f) | The Player Info associated with this Inventory.
`protected bool `[`bReceivedInventoryNotification`](#classURH__PlayerInventory_1a45996faae3c7235df63ddd72c3baaba2) | Tracking of Inventory Notifications.
`protected bool `[`bReceivedPendingInventoryNotification`](#classURH__PlayerInventory_1a55c3db5006da2c2ed1ece4afc1a84bc2) | Tracking of Pending Inventory Notifications.
`protected inline bool `[`ShouldPollInventory`](#classURH__PlayerInventory_1a6d4188288df48ec55bb6daf7edeb4959)`() const` | Gets if the inventory should be polled due to an active watch.
`protected inline bool `[`ShouldPollPendingInventory`](#classURH__PlayerInventory_1a44bb8f812b678184d35450f313bca922)`() const` | Gets if pending inventory should be polled due to outstanding orders.
`protected void `[`HandleNotification`](#classURH__PlayerInventory_1a6164fd974fa48e65497343d05285d371)`(const `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` | Handles an incoming notification, checks if it is an invnetory notification, then operates if need be.
`protected void `[`PollInventory`](#classURH__PlayerInventory_1afeaab6fb7057a5e3c481c06465887dcd)`(const FRH_PollCompleteFunc & Delegate)` | Start a poll for inventory updates.
`protected virtual void `[`PollPendingInventory`](#classURH__PlayerInventory_1aca8c5064815bc09e16b01b631a182f17)`(const FRH_PollCompleteFunc & Delegate)` | Start a poll for pending inventory updates.
`protected virtual void `[`PollPendingInventoryInternal`](#classURH__PlayerInventory_1a18874a5e4ae8348cb224f790ea9f9a90)`(TArray< `[`URH_PendingOrder`](Inventory.md#classURH__PendingOrder)` * > OrdersToProcess,const FRH_PollCompleteFunc & Delegate)` | Start a poll for pending inventory updates.
`protected inline void `[`BroadcastOnInventoryCacheUpdated`](#classURH__PlayerInventory_1a549a0f5600fc0957e61dfa3b6b75b997)`(const TArray< int32 > & ItemIds)` | Helper function to broadcast inventory changes.
`protected void `[`OnUserChanged`](#classURH__PlayerInventory_1ac429492f3cc9736fc88744dcd53fca03)`()` | Callback that occurs whenever the local player this subsystem is associated with changes.
`protected void `[`InitPropertiesWithDefaultValues`](#classURH__PlayerInventory_1a98ee25be3e5fcdd1ccf481bf12b7d0a0)`()` | Initializes the subsystem with defaults for its cached data.
`protected void `[`PopulateInstanceData`](#classURH__PlayerInventory_1a666fc902c1fe23954714cb660eac948b)`(`[`FRHAPI_PlayerOrderCreate`](models/RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & PlayerOrderCreate) const` | Adds instance specific data to an Player Order.
`protected void `[`CreatePlayerOrderResponse`](#classURH__PlayerInventory_1afa2e5cb7cc7266afe1f33851cef008e3)`(const TCreateOrder::Response & Resp,const FRH_OrderResultBlock Delegate,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > OrderEntries)` | Handles the response to a Create Player Order call.
`protected void `[`RedeemPromoCodeResponse`](#classURH__PlayerInventory_1a4158aff1ace8179824d768f12389919c)`(const TCreateOrder::Response & Resp,const FRH_PromoCodeResultBlock Delegate,const FString PromoCode)` | Handles the response to a Redeem Promo Code call.
`protected void `[`HandleCreateInventorySession`](#classURH__PlayerInventory_1a2d5dc041893d81c3afe017ed06b2f21c)`(const RallyHereAPI::FResponse_CreateNewInventorySessionByPlayerUuid & Response,const FRH_OnInventorySessionUpdateDelegateBlock Delegate)` | Handles the response to a Create Inventory Session call.
`protected void `[`HandleGetInventorySession`](#classURH__PlayerInventory_1a6493cfede6044144868349a654c6acf2)`(const RallyHereAPI::FResponse_GetInventorySessionInfoByPlayerUuid & Response,const FRH_OnInventorySessionUpdateDelegateBlock Delegate)` | Handles the response to a Get Inventory Session call.
`protected void `[`HandleGetInventory`](#classURH__PlayerInventory_1ad7274cd6de55fd492593ba6640627b4e)`(const RallyHereAPI::FResponse_GetPlayerInventoryUuid & Response,const TArray< int32 > ItemIds,const FRH_OnInventoryUpdateDelegateBlock Delegate)` | Handles the response to a Get Inventory call.
`protected void `[`HandleCreateInventory`](#classURH__PlayerInventory_1a67a9683f2d48eb8d1f3af34703f5876c)`(const RallyHereAPI::FResponse_CreatePlayerInventoryUuid & Response,const FRH_OnInventoryUpdateDelegateBlock Delegate)` | Handles the response to a Create Inventory call.
`protected void `[`HandleUpdateInventory`](#classURH__PlayerInventory_1a80d5fdb6953bb1378b75c511fae170c4)`(const RallyHereAPI::FResponse_ModifyManyPlayerInventoryUuid & Response,const FRH_OnInventoryUpdateDelegateBlock Delegate)` | Handles the response to a Update Inventory call.
`protected void `[`WriteOrderEntries`](#classURH__PlayerInventory_1a2588a2da983cd5d5d20d0b3bad876869)`(TArray< `[`FRHAPI_PlayerOrderEntryCreate`](models/RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > & Entries,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > & OrderEntries)` | Converts the class of Order Entries to the struct used by the API system for calls.
`protected void `[`UpdateInventoryFromOrderDetails`](#classURH__PlayerInventory_1ae0df47f4fda770275400e4f08c2d77e4)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](models/RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & OrderDetails)` | Updates the cached inventory with data from an incoming order.
`protected void `[`GetInventoryCount_INTERNAL`](#classURH__PlayerInventory_1a051af5a05a0ea4574572a649b7d1eb09)`(`[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * Item,const FRH_GetInventoryCountBlock & Delegate) const` | Internal helper function to complete Get Inventory Count.
`protected void `[`IsInventoryItemOwned_INTERNAL`](#classURH__PlayerInventory_1a8214e3be4acaa58fb4333d4517adbbac)`(`[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * Item,const FRH_GetInventoryStateBlock & Delegate) const` | Internal helper function to complete Is Inventory Item Owned.
`protected void `[`IsInventoryItemRented_INTERNAL`](#classURH__PlayerInventory_1a83e3ae985adc5320194657b1a63b554a)`(`[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * Item,const FRH_GetInventoryStateBlock & Delegate) const` | Internal helper function to complete Is Inventory Item Rented.
`protected `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__PlayerInventory_1a1b8ec4a659fad2e3defb26ceb27d3476)`() const` | Helper function to get Game Instance Subsystem.
`protected `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` * `[`GetCatalogSubsystem`](#classURH__PlayerInventory_1aa92f2f13128661b503c07ccd6de70540)`() const` | Helper function to get Catalog Subsystem.
`typedef `[`TCreateOrder`](#classURH__PlayerInventory_1a946da8328c5ead7256bcf01d73ba342c) | 

### Members

#### `public FRH_InventoryUpdatedDelegate `[`OnInventoryCacheUpdated`](#classURH__PlayerInventory_1aec143589873017eac01355a01c5ad0f5) <a id="classURH__PlayerInventory_1aec143589873017eac01355a01c5ad0f5"></a>

Delegate to listen to changes to the players cached inventory.

#### `public FRH_InventoryUpdatedDynamicDelegate `[`OnInventoryCacheUpdatedBP`](#classURH__PlayerInventory_1ad1b9f15dd0f855b0997e5e8f97e213fc) <a id="classURH__PlayerInventory_1ad1b9f15dd0f855b0997e5e8f97e213fc"></a>

#### `public void `[`Initialize`](#classURH__PlayerInventory_1a984d6ea76fd13361e4ee7fb04c03964f)`()` <a id="classURH__PlayerInventory_1a984d6ea76fd13361e4ee7fb04c03964f"></a>

Initialize the subobject.

#### `public inline `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerInventory_1ae13c7ba7f568d94f382cadac250c0655)`() const` <a id="classURH__PlayerInventory_1ae13c7ba7f568d94f382cadac250c0655"></a>

Gets the player info set on the subsystem.

#### Returns
The set player info.

#### `public const FGuid `[`GetRHPlayerUuid`](#classURH__PlayerInventory_1a098b20b913bfc2a048627aefad4a9073)`() const` <a id="classURH__PlayerInventory_1a098b20b913bfc2a048627aefad4a9073"></a>

Gets the associated player infos Unique Player Id.

#### Returns
The set player infos Unique Player Id.

#### `public const FAuthContextPtr `[`GetAuthContext`](#classURH__PlayerInventory_1ae6585ec255e5cd5fc4fd4bcb32c662fb)`() const` <a id="classURH__PlayerInventory_1ae6585ec255e5cd5fc4fd4bcb32c662fb"></a>

Gets the Auth Context that has authority to operate on this players inventory.

#### Returns
The local or instance Auth Context.

#### `public inline void `[`SetPlayerInfo`](#classURH__PlayerInventory_1a76b4f19b926a83f287c3515acd8b9150)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * InPlayerInfo)` <a id="classURH__PlayerInventory_1a76b4f19b926a83f287c3515acd8b9150"></a>

Sets the Player Info owner of the subsystem.

#### `public void `[`GetInventoryCount`](#classURH__PlayerInventory_1addb1cf44dbc4684f4bef23c51a012bb5)`(const int32 & ItemId,const FRH_GetInventoryCountBlock & Delegate) const` <a id="classURH__PlayerInventory_1addb1cf44dbc4684f4bef23c51a012bb5"></a>

Gets the Players Inventory Count of the item for the connected platform, async pulls needed item data if it isn't already cached.

#### Parameters
* `ItemId` The id of the item requesting count of. 

* `Delegate` Callback with the count of the inventory item.

#### `public void `[`IsInventoryItemOwned`](#classURH__PlayerInventory_1ab6843d485cb715c42e3c84dbf542c179)`(const int32 & ItemId,const FRH_GetInventoryStateBlock & Delegate) const` <a id="classURH__PlayerInventory_1ab6843d485cb715c42e3c84dbf542c179"></a>

Gets if the player owns at least one of the item for the connected platform, async pulls needed item data if it isn't already cached.

#### Parameters
* `ItemId` The id of the item requesting count of. 

* `Delegate` Callback with the state of the items ownership.

#### `public void `[`IsInventoryItemRented`](#classURH__PlayerInventory_1a82cfc3b4a12f0d7ce7774ff6100a4245)`(const int32 & ItemId,const FRH_GetInventoryStateBlock & Delegate) const` <a id="classURH__PlayerInventory_1a82cfc3b4a12f0d7ce7774ff6100a4245"></a>

Gets if the player has rented at least one of the item for the connected platform, async pulls needed item data if it isn't already cached.

#### Parameters
* `ItemId` The id of the item requesting count of. 

* `Delegate` Callback with the state of the items rented status.

#### `public inline const `[`FRH_InventorySession`](Inventory.md#structFRH__InventorySession)` & `[`GetCachedInventorySession`](#classURH__PlayerInventory_1a87fe7bf18012b4073c42a31c3ed04df2)`() const` <a id="classURH__PlayerInventory_1a87fe7bf18012b4073c42a31c3ed04df2"></a>

Gets the active inventory session for the player.

#### Returns
The active inventory session.

#### `public const TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > `[`GetAllCachedInventory`](#classURH__PlayerInventory_1a1fffa503b99fca22815fb14ccebbb06b)`() const` <a id="classURH__PlayerInventory_1a1fffa503b99fca22815fb14ccebbb06b"></a>

Gets the cached inventory for the player.

#### Returns
Array of inventory records.

#### `public const TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > `[`GetCachedInventoryForItem`](#classURH__PlayerInventory_1a29c034f35b2ca574e942996e58f3fd2d)`(const int32 & ItemId) const` <a id="classURH__PlayerInventory_1a29c034f35b2ca574e942996e58f3fd2d"></a>

Gets the cached inventory records for an item id for the player.

#### Parameters
* `ItemId` The id of the item requesting inventory records for. 

#### Returns
Array of inventory records.

#### `public const TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > `[`GetCachedInventoryForItems`](#classURH__PlayerInventory_1a5fdb61a338eb35e38b46f5d282fb66a8)`(const TArray< int32 > & ItemIds) const` <a id="classURH__PlayerInventory_1a5fdb61a338eb35e38b46f5d282fb66a8"></a>

Gets the cached inventory records for multiple item ids for the player.

#### Parameters
* `ItemIds` The ids of the item requesting inventory records for. 

#### Returns
Array of inventory records.

#### `public const TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > `[`GetCachedInventoryForType`](#classURH__PlayerInventory_1ab29ede8a19a9316eb20eb52ed9c35aed)`(const ERHAPI_InventoryType & Type) const` <a id="classURH__PlayerInventory_1ab29ede8a19a9316eb20eb52ed9c35aed"></a>

Gets the cached inventory records for an inventory type for the player.

#### Parameters
* `Type` The type of inventory records being requested. 

#### Returns
Array of inventory records.

#### `public const TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > `[`GetCachedInventoryForItemsAndTypes`](#classURH__PlayerInventory_1ab8e5653fa66b9f65d3f0ebd527f2629c)`(const TArray< int32 > & ItemIds,const TArray< ERHAPI_InventoryType > & Types) const` <a id="classURH__PlayerInventory_1ab8e5653fa66b9f65d3f0ebd527f2629c"></a>

Gets the cached inventory records for multiple item ids that have the given inventory type for the player.

#### Parameters
* `ItemIds` The ids of the item requesting inventory records for. 

* `Type` The type of inventory records being requested. 

#### Returns
Array of inventory records.

#### `public bool `[`GetCachedInventoryForInventoryId`](#classURH__PlayerInventory_1a8a8295a3807aef746e6b2db5a51cf9ba)`(const FGuid & InventoryId,`[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` & Item) const` <a id="classURH__PlayerInventory_1a8a8295a3807aef746e6b2db5a51cf9ba"></a>

Gets an exact cached inventory record for the player.

#### Parameters
* `InventoryId` the Unique Id of the inventory record being requested. 

* `Item` The inventory record requested. 

#### Returns
If true, the inventory record was found.

#### `public inline const TArray< `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetOrderResults`](#classURH__PlayerInventory_1a743b0a4541f198b9e4f9520caeabcde4)`() const` <a id="classURH__PlayerInventory_1a743b0a4541f198b9e4f9520caeabcde4"></a>

Gets all order results that have come in for the player.

#### Returns
Array of order results.

#### `public inline void `[`ClearCachedInventory`](#classURH__PlayerInventory_1abfe1776646639ec37f10b74ad3dee8e5)`()` <a id="classURH__PlayerInventory_1abfe1776646639ec37f10b74ad3dee8e5"></a>

Clears all cached inventory for the player.

#### `public inline void `[`ClearOrderCache`](#classURH__PlayerInventory_1a5387581632c52d10ec6464099ade2b3b)`()` <a id="classURH__PlayerInventory_1a5387581632c52d10ec6464099ade2b3b"></a>

Clears all cached order results for the player.

#### `public void `[`GetInventorySession`](#classURH__PlayerInventory_1a00d805080c0941cf004bfbc77b8942cb)`(const FRH_OnInventorySessionUpdateDelegateBlock & Delegate)` <a id="classURH__PlayerInventory_1a00d805080c0941cf004bfbc77b8942cb"></a>

Calls the Inventory API to get the players active Inventory Session.

#### Parameters
* `Delegate` Callback delegate for getting the players session.

#### `public void `[`CreateInventorySession`](#classURH__PlayerInventory_1a02fb814effbd191eb96c26ed91a6642d)`(const TOptional< ERHAPI_Platform > Platform,const FRH_OnInventorySessionUpdateDelegateBlock & Delegate)` <a id="classURH__PlayerInventory_1a02fb814effbd191eb96c26ed91a6642d"></a>

Calls the Inventory API to get the create an Inventory Session for the player.

#### Parameters
* `Platform` The platform to create the session for. 

* `Delegate` Callback delegate for creating the players session.

#### `public void `[`GetInventory`](#classURH__PlayerInventory_1aa39e94993d051196093f8eb69f6a8e5e)`(TArray< int32 > ItemIds,const FRH_OnInventoryUpdateDelegateBlock & Delegate)` <a id="classURH__PlayerInventory_1aa39e94993d051196093f8eb69f6a8e5e"></a>

Calls the Inventory API to get the the inventory for the player.

#### Parameters
* `ItemIds` The Item Ids of inventory requested, if empty all inventory will be returned. 

* `Delegate` Callback delegate for getting the inventory.

#### `public inline void `[`CreatePlayerOrder`](#classURH__PlayerInventory_1a25a32d0d801bfe8460c9fd5ffcc8a5e3)`(ERHAPI_PlayerOrderEntryType FillType,ERHAPI_Source OrderSource,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > & OrderEntries,FRH_OrderResultBlock Delegate)` <a id="classURH__PlayerInventory_1a25a32d0d801bfe8460c9fd5ffcc8a5e3"></a>

Creates an order for the player, used for purchasing and other loot related actions.

#### Parameters
* `FillType` The type of player order being created 

* `OrderSource` Where the order is being created from 

* `OrderEntries` Array of orders being requested 

* `Delegate` Callback delegate for the completion of the order request

#### `public inline void `[`CreateNewPlayerOrder`](#classURH__PlayerInventory_1a383ffde7d88402ff420fd3b76a1145ab)`(ERHAPI_Source OrderSource,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > & OrderEntries,const FRH_OrderResultBlock & Delegate)` <a id="classURH__PlayerInventory_1a383ffde7d88402ff420fd3b76a1145ab"></a>

Creates an order for the player, used for purchasing and other loot related actions.

#### Parameters
* `OrderSource` Where the order is being created from. 

* `OrderEntries` Array of orders being requested. 

* `Delegate` Callback delegate for the completion of the order request.

#### `public void `[`CreateNewPlayerOrder`](#classURH__PlayerInventory_1abbc28af90b1624685bcc4d2a7aba6cd4)`(ERHAPI_Source OrderSource,bool IsTransaction,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > & OrderEntries,const FRH_OrderResultBlock & Delegate)` <a id="classURH__PlayerInventory_1abbc28af90b1624685bcc4d2a7aba6cd4"></a>

Creates an order for the player, used for purchasing and other loot related actions.

#### Parameters
* `OrderSource` Where the order is being created from. 

* `IsTransaction` If true, all orders must succeed for any to be completed. 

* `OrderEntries` Array of orders being requested. 

* `Delegate` Callback delegate for the completion of the order request.

#### `public void `[`RedeemPromoCode`](#classURH__PlayerInventory_1a44a7384919f2fee13552699a96cd1708)`(const FString & PromoCode,const FRH_PromoCodeResultBlock & Delegate)` <a id="classURH__PlayerInventory_1a44a7384919f2fee13552699a96cd1708"></a>

Creates an order for the player that redeems a promotion code.

#### Parameters
* `PromoCode` The Promo Code being redeemed. 

* `Delegate` Callback delegate for the completion of the promo code redemption.

#### `public void `[`SetOrderWatch`](#classURH__PlayerInventory_1abfaceae0c3ccd3613308f113f12d3087)`(const FRH_OrderDetailsBlock & Delegate)` <a id="classURH__PlayerInventory_1abfaceae0c3ccd3613308f113f12d3087"></a>

Sets a watch to start polling for orders for the player.

#### Parameters
* `Delegate` Callback delegate whenever the player has any orders.

#### `public void `[`ClearOrderWatch`](#classURH__PlayerInventory_1af95c3474ca75c146c11e1894f9493a3e)`(const FRH_OrderDetailsBlock & Delegate)` <a id="classURH__PlayerInventory_1af95c3474ca75c146c11e1894f9493a3e"></a>

Clears a watch for the player.

#### `public void `[`AddPendingOrdersFromEntitlementsArray`](#classURH__PlayerInventory_1a41d3c4ca0a289b28935ab7496bd7fe74)`(const TArray< `[`FRHAPI_PlatformEntitlement`](models/RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & Entitlements,const FRH_OrderDetailsBlock & Delegate)` <a id="classURH__PlayerInventory_1a41d3c4ca0a289b28935ab7496bd7fe74"></a>

Adds pending order monitoring for each processed entitlement.

#### Parameters
* `Entitlements` Array of processed entitlements that need monitoring. 

* `Delegate` Callback delegate when the inventory update completes.

#### `public void `[`AddPendingOrdersFromEntitlementResult`](#classURH__PlayerInventory_1a1fe3ba028e7fe6e9e923abf5a3fc6eba)`(const `[`FRHAPI_PlatformEntitlementProcessResult`](models/RHAPI_PlatformEntitlementProcessResult.md#structFRHAPI__PlatformEntitlementProcessResult)` & EntitlementResult,const FRH_OrderDetailsBlock & Delegate)` <a id="classURH__PlayerInventory_1a1fe3ba028e7fe6e9e923abf5a3fc6eba"></a>

Adds pending order monitoring for each processed entitlement.

#### Parameters
* `EntitlementResult` Result from entitlement processing that needs monitoring. 

* `Delegate` Callback delegate when the inventory update completes.

#### `public void `[`CheckPollStatus`](#classURH__PlayerInventory_1a451359cb11acdeb358d924eff9c36c59)`()` <a id="classURH__PlayerInventory_1a451359cb11acdeb358d924eff9c36c59"></a>

Used to pulse polling of watches and pending purchases.

#### `public void `[`CreateInventory`](#classURH__PlayerInventory_1afb0227615c4db71e3c02484d7c59b53b)`(const TOptional< FGuid > & ClientOrderReferenceId,const TArray< `[`FRH_CreateInventory`](Inventory.md#structFRH__CreateInventory)` > & CreateInventories,const ERHAPI_Source Source,const FRH_OnInventoryUpdateDelegateBlock & Delegate)` <a id="classURH__PlayerInventory_1afb0227615c4db71e3c02484d7c59b53b"></a>

Requests direct inventory creation to the players inventory.

#### Parameters
* `ClientOrderReferenceId` Client specified ref id for an inventory change. 

* `CreateInventories` Array of items to be created in the players inventory. 

* `Source` Where the order is being created from. 

* `Delegate` Callback delegate when the inventory creation completes.

#### `public void `[`UpdateInventory`](#classURH__PlayerInventory_1af6944787996721ab352942ea487b23ca)`(const TOptional< FGuid > & ClientOrderReferenceId,const TArray< `[`FRH_UpdateInventory`](Inventory.md#structFRH__UpdateInventory)` > & UpdateInventories,const ERHAPI_Source Source,const FRH_OnInventoryUpdateDelegateBlock & Delegate)` <a id="classURH__PlayerInventory_1af6944787996721ab352942ea487b23ca"></a>

Requests direct inventory modifications to the players inventory.

#### Parameters
* `ClientOrderReferenceId` Client specified ref id for an inventory change. 

* `UpdateInventories` Array of items to be created in the players inventory. 

* `Source` Where the order is being created from. 

* `Delegate` Callback delegate when the inventory modification completes.

#### `public void `[`ClearPendingOrder`](#classURH__PlayerInventory_1a1023ef83a9e1d7a88d3da06246aa7637)`(const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & OrderResult)` <a id="classURH__PlayerInventory_1a1023ef83a9e1d7a88d3da06246aa7637"></a>

Used by the PendingOrder to clear itself from the pending order list when it completes.

#### Parameters
* `OrderResult` The pending order result to clear.

#### `public void `[`ParseOrderResult`](#classURH__PlayerInventory_1a0a3af764f187ffbd05955fb16a8bd5d7)`(const `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` & Content)` <a id="classURH__PlayerInventory_1a0a3af764f187ffbd05955fb16a8bd5d7"></a>

Parses a player order result API into a [URH_PlayerOrderEntry](Inventory.md#classURH__PlayerOrderEntry).

#### Parameters
* `Content` The PlayerOrder data to parse.

#### `protected TMap< int32, TArray< `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` > > `[`InventoryCache`](#classURH__PlayerInventory_1a5d5179ccce89d685f086005d1b907ad8) <a id="classURH__PlayerInventory_1a5d5179ccce89d685f086005d1b907ad8"></a>

Inventory cache map of Item Id to inventory records.

#### `protected TArray< FString > `[`ParsedInventoryOrders`](#classURH__PlayerInventory_1a76a82d3bb8f00ae1427129887e83952b) <a id="classURH__PlayerInventory_1a76a82d3bb8f00ae1427129887e83952b"></a>

Array of inventory orders that have recently been parsed to prevent double parsing orders through normal polling.

#### `protected FRH_AutoPollerPtr `[`InventoryPoller`](#classURH__PlayerInventory_1a9b073e90506714df4cff00f456168580) <a id="classURH__PlayerInventory_1a9b073e90506714df4cff00f456168580"></a>

Poller for inventory updates.

#### `protected FRH_AutoPollerPtr `[`PendingInventoryPoller`](#classURH__PlayerInventory_1ad2760c4c21398d38fad0929a5ab3b9ff) <a id="classURH__PlayerInventory_1ad2760c4c21398d38fad0929a5ab3b9ff"></a>

Polled for pending inventory.

#### `protected TArray< `[`FRHAPI_PlayerOrder`](models/RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > `[`CachedOrderResults`](#classURH__PlayerInventory_1ac1119eb6995fedd771aba3267bba20f2) <a id="classURH__PlayerInventory_1ac1119eb6995fedd771aba3267bba20f2"></a>

Array of order results.

#### `protected `[`URH_PlayerOrderWatch`](Inventory.md#classURH__PlayerOrderWatch)` * `[`OrderWatch`](#classURH__PlayerInventory_1a5ec78ed4488ac873c83015229342079c) <a id="classURH__PlayerInventory_1a5ec78ed4488ac873c83015229342079c"></a>

Tracking for orders that come in for the player.

#### `protected TArray< `[`URH_PendingOrder`](Inventory.md#classURH__PendingOrder)` * > `[`PendingOrders`](#classURH__PlayerInventory_1a40eadf8f534b41e0ecc99086040a2da2) <a id="classURH__PlayerInventory_1a40eadf8f534b41e0ecc99086040a2da2"></a>

Array of orders that have been requested that have not been returned yet.

#### `protected `[`FRH_InventorySession`](Inventory.md#structFRH__InventorySession)` `[`InventorySession`](#classURH__PlayerInventory_1afcab0f1a8cf5f9e0051351ffba249322) <a id="classURH__PlayerInventory_1afcab0f1a8cf5f9e0051351ffba249322"></a>

The active inventory session.

#### `protected `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`PlayerInfo`](#classURH__PlayerInventory_1a2da991415c67eb60ab1a5df90848568f) <a id="classURH__PlayerInventory_1a2da991415c67eb60ab1a5df90848568f"></a>

The Player Info associated with this Inventory.

#### `protected bool `[`bReceivedInventoryNotification`](#classURH__PlayerInventory_1a45996faae3c7235df63ddd72c3baaba2) <a id="classURH__PlayerInventory_1a45996faae3c7235df63ddd72c3baaba2"></a>

Tracking of Inventory Notifications.

#### `protected bool `[`bReceivedPendingInventoryNotification`](#classURH__PlayerInventory_1a55c3db5006da2c2ed1ece4afc1a84bc2) <a id="classURH__PlayerInventory_1a55c3db5006da2c2ed1ece4afc1a84bc2"></a>

Tracking of Pending Inventory Notifications.

#### `protected inline bool `[`ShouldPollInventory`](#classURH__PlayerInventory_1a6d4188288df48ec55bb6daf7edeb4959)`() const` <a id="classURH__PlayerInventory_1a6d4188288df48ec55bb6daf7edeb4959"></a>

Gets if the inventory should be polled due to an active watch.

#### `protected inline bool `[`ShouldPollPendingInventory`](#classURH__PlayerInventory_1a44bb8f812b678184d35450f313bca922)`() const` <a id="classURH__PlayerInventory_1a44bb8f812b678184d35450f313bca922"></a>

Gets if pending inventory should be polled due to outstanding orders.

#### `protected void `[`HandleNotification`](#classURH__PlayerInventory_1a6164fd974fa48e65497343d05285d371)`(const `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` <a id="classURH__PlayerInventory_1a6164fd974fa48e65497343d05285d371"></a>

Handles an incoming notification, checks if it is an invnetory notification, then operates if need be.

#### Parameters
* `Notification` The notification to handle. 

* `APIName` The name of the API that sent the notification. 

* `APIParams` The parameters of the API that sent the notification.

#### `protected void `[`PollInventory`](#classURH__PlayerInventory_1afeaab6fb7057a5e3c481c06465887dcd)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerInventory_1afeaab6fb7057a5e3c481c06465887dcd"></a>

Start a poll for inventory updates.

#### Parameters
* `Delegate` Callback delegate for the polling.

#### `protected virtual void `[`PollPendingInventory`](#classURH__PlayerInventory_1aca8c5064815bc09e16b01b631a182f17)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerInventory_1aca8c5064815bc09e16b01b631a182f17"></a>

Start a poll for pending inventory updates.

#### Parameters
* `Delegate` Callback delegate for the polling.

#### `protected virtual void `[`PollPendingInventoryInternal`](#classURH__PlayerInventory_1a18874a5e4ae8348cb224f790ea9f9a90)`(TArray< `[`URH_PendingOrder`](Inventory.md#classURH__PendingOrder)` * > OrdersToProcess,const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerInventory_1a18874a5e4ae8348cb224f790ea9f9a90"></a>

Start a poll for pending inventory updates.

#### Parameters
* `Delegate` Callback delegate for the polling.

#### `protected inline void `[`BroadcastOnInventoryCacheUpdated`](#classURH__PlayerInventory_1a549a0f5600fc0957e61dfa3b6b75b997)`(const TArray< int32 > & ItemIds)` <a id="classURH__PlayerInventory_1a549a0f5600fc0957e61dfa3b6b75b997"></a>

Helper function to broadcast inventory changes.

#### Parameters
* `ItemIds` The item ids that have been updated.

#### `protected void `[`OnUserChanged`](#classURH__PlayerInventory_1ac429492f3cc9736fc88744dcd53fca03)`()` <a id="classURH__PlayerInventory_1ac429492f3cc9736fc88744dcd53fca03"></a>

Callback that occurs whenever the local player this subsystem is associated with changes.

#### `protected void `[`InitPropertiesWithDefaultValues`](#classURH__PlayerInventory_1a98ee25be3e5fcdd1ccf481bf12b7d0a0)`()` <a id="classURH__PlayerInventory_1a98ee25be3e5fcdd1ccf481bf12b7d0a0"></a>

Initializes the subsystem with defaults for its cached data.

#### `protected void `[`PopulateInstanceData`](#classURH__PlayerInventory_1a666fc902c1fe23954714cb660eac948b)`(`[`FRHAPI_PlayerOrderCreate`](models/RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & PlayerOrderCreate) const` <a id="classURH__PlayerInventory_1a666fc902c1fe23954714cb660eac948b"></a>

Adds instance specific data to an Player Order.

#### Parameters
* `PlayerOrderCreate` The Player order to add the data to.

#### `protected void `[`CreatePlayerOrderResponse`](#classURH__PlayerInventory_1afa2e5cb7cc7266afe1f33851cef008e3)`(const TCreateOrder::Response & Resp,const FRH_OrderResultBlock Delegate,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > OrderEntries)` <a id="classURH__PlayerInventory_1afa2e5cb7cc7266afe1f33851cef008e3"></a>

Handles the response to a Create Player Order call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `OrderEntries` The Order Entries submitted with the create call.

#### `protected void `[`RedeemPromoCodeResponse`](#classURH__PlayerInventory_1a4158aff1ace8179824d768f12389919c)`(const TCreateOrder::Response & Resp,const FRH_PromoCodeResultBlock Delegate,const FString PromoCode)` <a id="classURH__PlayerInventory_1a4158aff1ace8179824d768f12389919c"></a>

Handles the response to a Redeem Promo Code call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `PromoCode` The Code that was submitted to redeem.

#### `protected void `[`HandleCreateInventorySession`](#classURH__PlayerInventory_1a2d5dc041893d81c3afe017ed06b2f21c)`(const RallyHereAPI::FResponse_CreateNewInventorySessionByPlayerUuid & Response,const FRH_OnInventorySessionUpdateDelegateBlock Delegate)` <a id="classURH__PlayerInventory_1a2d5dc041893d81c3afe017ed06b2f21c"></a>

Handles the response to a Create Inventory Session call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected void `[`HandleGetInventorySession`](#classURH__PlayerInventory_1a6493cfede6044144868349a654c6acf2)`(const RallyHereAPI::FResponse_GetInventorySessionInfoByPlayerUuid & Response,const FRH_OnInventorySessionUpdateDelegateBlock Delegate)` <a id="classURH__PlayerInventory_1a6493cfede6044144868349a654c6acf2"></a>

Handles the response to a Get Inventory Session call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected void `[`HandleGetInventory`](#classURH__PlayerInventory_1ad7274cd6de55fd492593ba6640627b4e)`(const RallyHereAPI::FResponse_GetPlayerInventoryUuid & Response,const TArray< int32 > ItemIds,const FRH_OnInventoryUpdateDelegateBlock Delegate)` <a id="classURH__PlayerInventory_1ad7274cd6de55fd492593ba6640627b4e"></a>

Handles the response to a Get Inventory call.

#### Parameters
* `Resp` Response given for the call. 

* `ItemIds` The Items Ids that inventory was requested of. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected void `[`HandleCreateInventory`](#classURH__PlayerInventory_1a67a9683f2d48eb8d1f3af34703f5876c)`(const RallyHereAPI::FResponse_CreatePlayerInventoryUuid & Response,const FRH_OnInventoryUpdateDelegateBlock Delegate)` <a id="classURH__PlayerInventory_1a67a9683f2d48eb8d1f3af34703f5876c"></a>

Handles the response to a Create Inventory call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected void `[`HandleUpdateInventory`](#classURH__PlayerInventory_1a80d5fdb6953bb1378b75c511fae170c4)`(const RallyHereAPI::FResponse_ModifyManyPlayerInventoryUuid & Response,const FRH_OnInventoryUpdateDelegateBlock Delegate)` <a id="classURH__PlayerInventory_1a80d5fdb6953bb1378b75c511fae170c4"></a>

Handles the response to a Update Inventory call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected void `[`WriteOrderEntries`](#classURH__PlayerInventory_1a2588a2da983cd5d5d20d0b3bad876869)`(TArray< `[`FRHAPI_PlayerOrderEntryCreate`](models/RHAPI_PlayerOrderEntryCreate.md#structFRHAPI__PlayerOrderEntryCreate)` > & Entries,const TArray< `[`URH_PlayerOrderEntry`](Inventory.md#classURH__PlayerOrderEntry)` * > & OrderEntries)` <a id="classURH__PlayerInventory_1a2588a2da983cd5d5d20d0b3bad876869"></a>

Converts the class of Order Entries to the struct used by the API system for calls.

#### Parameters
* `Entries` Struct based Order entries for submission. 

* `OrderEntries` Class based Order entries for conversion.

#### `protected void `[`UpdateInventoryFromOrderDetails`](#classURH__PlayerInventory_1ae0df47f4fda770275400e4f08c2d77e4)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](models/RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & OrderDetails)` <a id="classURH__PlayerInventory_1ae0df47f4fda770275400e4f08c2d77e4"></a>

Updates the cached inventory with data from an incoming order.

#### Parameters
* `OrderDetails` The details of the incoming order.

#### `protected void `[`GetInventoryCount_INTERNAL`](#classURH__PlayerInventory_1a051af5a05a0ea4574572a649b7d1eb09)`(`[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * Item,const FRH_GetInventoryCountBlock & Delegate) const` <a id="classURH__PlayerInventory_1a051af5a05a0ea4574572a649b7d1eb09"></a>

Internal helper function to complete Get Inventory Count.

#### Parameters
* `Item` The Item to get the count of. 

* `Delegate` Callback delegate to send the count to.

#### `protected void `[`IsInventoryItemOwned_INTERNAL`](#classURH__PlayerInventory_1a8214e3be4acaa58fb4333d4517adbbac)`(`[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * Item,const FRH_GetInventoryStateBlock & Delegate) const` <a id="classURH__PlayerInventory_1a8214e3be4acaa58fb4333d4517adbbac"></a>

Internal helper function to complete Is Inventory Item Owned.

#### Parameters
* `Item` The Item to get the ownership of. 

* `Delegate` Callback delegate to send the ownership status to.

#### `protected void `[`IsInventoryItemRented_INTERNAL`](#classURH__PlayerInventory_1a83e3ae985adc5320194657b1a63b554a)`(`[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * Item,const FRH_GetInventoryStateBlock & Delegate) const` <a id="classURH__PlayerInventory_1a83e3ae985adc5320194657b1a63b554a"></a>

Internal helper function to complete Is Inventory Item Rented.

#### Parameters
* `Item` The Item to get the rental status of. 

* `Delegate` Callback delegate to send the rental status to.

#### `protected `[`URH_GameInstanceSubsystem`](GameInstance.md#classURH__GameInstanceSubsystem)` * `[`GetGameInstanceSubsystem`](#classURH__PlayerInventory_1a1b8ec4a659fad2e3defb26ceb27d3476)`() const` <a id="classURH__PlayerInventory_1a1b8ec4a659fad2e3defb26ceb27d3476"></a>

Helper function to get Game Instance Subsystem.

#### `protected `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` * `[`GetCatalogSubsystem`](#classURH__PlayerInventory_1aa92f2f13128661b503c07ccd6de70540)`() const` <a id="classURH__PlayerInventory_1aa92f2f13128661b503c07ccd6de70540"></a>

Helper function to get Catalog Subsystem.

#### `typedef `[`TCreateOrder`](#classURH__PlayerInventory_1a946da8328c5ead7256bcf01d73ba342c) <a id="classURH__PlayerInventory_1a946da8328c5ead7256bcf01d73ba342c"></a>

## class `URH_InventoryBlueprintLibrary` <a id="classURH__InventoryBlueprintLibrary"></a>

```
class URH_InventoryBlueprintLibrary
  : public UBlueprintFunctionLibrary
```

Inventory Blueprint Library with helper methods for inventory item struct.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

### Members

## struct `FRH_InventorySession` <a id="structFRH__InventorySession"></a>

Struct for tracking an inventory session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRH__InventorySession_1a24cbb7a17c13037c75e24731da912bb8) | The Session Id.
`public ERHAPI_Platform `[`SessionPlatform`](#structFRH__InventorySession_1a376394ddb2a62d134f0b92804bbaad87) | The platform associated with the session.
`public FString `[`OrderId`](#structFRH__InventorySession_1a622e147f47d7de6bc2af119d6951a38a) | The Order Id associated with any loot that may have been created when the session was created.
`public TArray< int32 > `[`AppliedDurableLoot`](#structFRH__InventorySession_1a0da0d0385b4703e6d2ca0cd666eda224) | Array of durable loot that was applied to the inventory by the session.
`public inline  `[`FRH_InventorySession`](#structFRH__InventorySession_1a042cdfe82bab92315f5e6e1bd4e461be)`()` | Default constructor.

### Members

#### `public FString `[`SessionId`](#structFRH__InventorySession_1a24cbb7a17c13037c75e24731da912bb8) <a id="structFRH__InventorySession_1a24cbb7a17c13037c75e24731da912bb8"></a>

The Session Id.

#### `public ERHAPI_Platform `[`SessionPlatform`](#structFRH__InventorySession_1a376394ddb2a62d134f0b92804bbaad87) <a id="structFRH__InventorySession_1a376394ddb2a62d134f0b92804bbaad87"></a>

The platform associated with the session.

#### `public FString `[`OrderId`](#structFRH__InventorySession_1a622e147f47d7de6bc2af119d6951a38a) <a id="structFRH__InventorySession_1a622e147f47d7de6bc2af119d6951a38a"></a>

The Order Id associated with any loot that may have been created when the session was created.

#### `public TArray< int32 > `[`AppliedDurableLoot`](#structFRH__InventorySession_1a0da0d0385b4703e6d2ca0cd666eda224) <a id="structFRH__InventorySession_1a0da0d0385b4703e6d2ca0cd666eda224"></a>

Array of durable loot that was applied to the inventory by the session.

#### `public inline  `[`FRH_InventorySession`](#structFRH__InventorySession_1a042cdfe82bab92315f5e6e1bd4e461be)`()` <a id="structFRH__InventorySession_1a042cdfe82bab92315f5e6e1bd4e461be"></a>

Default constructor.

## struct `FRH_ItemInventory` <a id="structFRH__ItemInventory"></a>

Inventory Item struct for defining cached inventory items and making inventory write calls.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`InventoryId`](#structFRH__ItemInventory_1ae433fc841de8bdb91d58ea8e4e3f874f) | Unique Id of the inventory record.
`public ERHAPI_InventoryType `[`InventoryType`](#structFRH__ItemInventory_1a084404452b4dc969f155ade4bcf4125e) | The ownership type of the record.
`public int32 `[`ItemId`](#structFRH__ItemInventory_1afa7f949931bf0eec4ba4d1d7a6ee8a88) | The item id of the record.
`public int32 `[`Count`](#structFRH__ItemInventory_1aa60dcc32af1a04af33ed4a9ef8fa6661) | Amount of the record.
`public TOptional< FDateTime > `[`Expires`](#structFRH__ItemInventory_1a86ca5775f84bb47f3088e98154f8d59c) | If the record is a rental, when the rental expires.
`public FDateTime `[`Acquired`](#structFRH__ItemInventory_1a15df85a8682ee6eb5f1c235c01546ff6) | The time that the record was first recorded.
`public TMap< FString, FString > `[`CustomData`](#structFRH__ItemInventory_1afda3fd6789abe53a101e3841d98e808b) | Custom data that is stored on the record.
`public ERHAPI_InventoryBucket `[`Bucket`](#structFRH__ItemInventory_1afe4d4e0b5c59d5f985e02a4e71044d55) | The bucket that the inventory record is in.
`public inline  `[`FRH_ItemInventory`](#structFRH__ItemInventory_1a5a5ebd942009979f0245fe5392378243)`()` | Default constructor.
`public inline void `[`AddCustomData`](#structFRH__ItemInventory_1ad581781aa100288a7969a4cd53aa4b13)`(const FString & Key,const FString & Value)` | Adds custom data to the inventory record.
`public inline int32 `[`RemoveCustomData`](#structFRH__ItemInventory_1ac05885e5b0cb125a91a8542bbad7e5eb)`(const FString & Key)` | Removes custom data to the inventory record.
`public inline FORCEINLINE FString `[`FindCustomDataWithKey`](#structFRH__ItemInventory_1a8699c5e7692bbbbdab7211b5edcd63a5)`(const FString & Key) const` | Gets custom data by key from the inventory record.
`public inline void `[`Init`](#structFRH__ItemInventory_1ae0ef931fa1341db81394d6a25ef0fde3)`(const int32 & ItemIdOfInventory,const `[`FRHAPI_InventoryRecord`](models/RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & Inventory)` | Initializes an inventory record from an Inventory Record API response.
`public inline bool `[`operator==`](#structFRH__ItemInventory_1a90397dbaf2c27ccbca10ed24d9e8ab17)`(const `[`FRH_ItemInventory`](#structFRH__ItemInventory)` & Other) const` | Equals operator override for comparison.

### Members

#### `public FGuid `[`InventoryId`](#structFRH__ItemInventory_1ae433fc841de8bdb91d58ea8e4e3f874f) <a id="structFRH__ItemInventory_1ae433fc841de8bdb91d58ea8e4e3f874f"></a>

Unique Id of the inventory record.

#### `public ERHAPI_InventoryType `[`InventoryType`](#structFRH__ItemInventory_1a084404452b4dc969f155ade4bcf4125e) <a id="structFRH__ItemInventory_1a084404452b4dc969f155ade4bcf4125e"></a>

The ownership type of the record.

#### `public int32 `[`ItemId`](#structFRH__ItemInventory_1afa7f949931bf0eec4ba4d1d7a6ee8a88) <a id="structFRH__ItemInventory_1afa7f949931bf0eec4ba4d1d7a6ee8a88"></a>

The item id of the record.

#### `public int32 `[`Count`](#structFRH__ItemInventory_1aa60dcc32af1a04af33ed4a9ef8fa6661) <a id="structFRH__ItemInventory_1aa60dcc32af1a04af33ed4a9ef8fa6661"></a>

Amount of the record.

#### `public TOptional< FDateTime > `[`Expires`](#structFRH__ItemInventory_1a86ca5775f84bb47f3088e98154f8d59c) <a id="structFRH__ItemInventory_1a86ca5775f84bb47f3088e98154f8d59c"></a>

If the record is a rental, when the rental expires.

#### `public FDateTime `[`Acquired`](#structFRH__ItemInventory_1a15df85a8682ee6eb5f1c235c01546ff6) <a id="structFRH__ItemInventory_1a15df85a8682ee6eb5f1c235c01546ff6"></a>

The time that the record was first recorded.

#### `public TMap< FString, FString > `[`CustomData`](#structFRH__ItemInventory_1afda3fd6789abe53a101e3841d98e808b) <a id="structFRH__ItemInventory_1afda3fd6789abe53a101e3841d98e808b"></a>

Custom data that is stored on the record.

#### `public ERHAPI_InventoryBucket `[`Bucket`](#structFRH__ItemInventory_1afe4d4e0b5c59d5f985e02a4e71044d55) <a id="structFRH__ItemInventory_1afe4d4e0b5c59d5f985e02a4e71044d55"></a>

The bucket that the inventory record is in.

#### `public inline  `[`FRH_ItemInventory`](#structFRH__ItemInventory_1a5a5ebd942009979f0245fe5392378243)`()` <a id="structFRH__ItemInventory_1a5a5ebd942009979f0245fe5392378243"></a>

Default constructor.

#### `public inline void `[`AddCustomData`](#structFRH__ItemInventory_1ad581781aa100288a7969a4cd53aa4b13)`(const FString & Key,const FString & Value)` <a id="structFRH__ItemInventory_1ad581781aa100288a7969a4cd53aa4b13"></a>

Adds custom data to the inventory record.

#### Parameters
* `Key` The key for the custom data. 

* `Value` The value for the custom data.

#### `public inline int32 `[`RemoveCustomData`](#structFRH__ItemInventory_1ac05885e5b0cb125a91a8542bbad7e5eb)`(const FString & Key)` <a id="structFRH__ItemInventory_1ac05885e5b0cb125a91a8542bbad7e5eb"></a>

Removes custom data to the inventory record.

#### Parameters
* `Key` The key for the custom data. 

#### Returns
The number of elements removed.

#### `public inline FORCEINLINE FString `[`FindCustomDataWithKey`](#structFRH__ItemInventory_1a8699c5e7692bbbbdab7211b5edcd63a5)`(const FString & Key) const` <a id="structFRH__ItemInventory_1a8699c5e7692bbbbdab7211b5edcd63a5"></a>

Gets custom data by key from the inventory record.

#### Parameters
* `Key` The key for the custom data. 

#### Returns
The value for the custome data.

#### `public inline void `[`Init`](#structFRH__ItemInventory_1ae0ef931fa1341db81394d6a25ef0fde3)`(const int32 & ItemIdOfInventory,const `[`FRHAPI_InventoryRecord`](models/RHAPI_InventoryRecord.md#structFRHAPI__InventoryRecord)` & Inventory)` <a id="structFRH__ItemInventory_1ae0ef931fa1341db81394d6a25ef0fde3"></a>

Initializes an inventory record from an Inventory Record API response.

#### Parameters
* `ItemIdOfInventory` The Item Id for the record. 

* `Inventory` The inventory record from the API call.

#### `public inline bool `[`operator==`](#structFRH__ItemInventory_1a90397dbaf2c27ccbca10ed24d9e8ab17)`(const `[`FRH_ItemInventory`](#structFRH__ItemInventory)` & Other) const` <a id="structFRH__ItemInventory_1a90397dbaf2c27ccbca10ed24d9e8ab17"></a>

Equals operator override for comparison.

## struct `FRH_BaseInventoryOperation` <a id="structFRH__BaseInventoryOperation"></a>

Base Inventory Operation struct for defining shared input data for Inventory Modification API calls.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`Count`](#structFRH__BaseInventoryOperation_1aa4d84c54e1ee0bf2813ab1026b764c01) | The amount of the inventory operation.
`public int32 `[`ItemId`](#structFRH__BaseInventoryOperation_1a0805225ecfdcea0546be89e6333ac2bd) | The item id for the inventory operation.
`public TMap< FString, FString > `[`CustomData`](#structFRH__BaseInventoryOperation_1a1b3c0c1b37a2c0af483ed35f9d2067eb) | The custom data for the inventory operation.
`public ERHAPI_InventoryBucket `[`Bucket`](#structFRH__BaseInventoryOperation_1a95be2c5b7b5df2ab6ce50f57198b9ff0) | The bucket for the inventory operation.
`public TOptional< FDateTime > `[`Expires`](#structFRH__BaseInventoryOperation_1a297edc1d1d7f1acdd92ca2dc4e25535c) | The expiriation date of the inventory operation.
`public bool `[`InventoryShouldExpire`](#structFRH__BaseInventoryOperation_1a2bc300b71dfa8a8440e65da4d9947d51) | If set, then the the expiration date will be considered for the inventory operation.
`public inline  `[`FRH_BaseInventoryOperation`](#structFRH__BaseInventoryOperation_1aa718ffb220e49e5821c75764838e94d7)`()` | Default constructor.
`public inline bool `[`InitFromItemInventory`](#structFRH__BaseInventoryOperation_1a8dca78d16cced1969fa5955e30b47071)`(const `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` & ItemInventory)` | Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.

### Members

#### `public int32 `[`Count`](#structFRH__BaseInventoryOperation_1aa4d84c54e1ee0bf2813ab1026b764c01) <a id="structFRH__BaseInventoryOperation_1aa4d84c54e1ee0bf2813ab1026b764c01"></a>

The amount of the inventory operation.

#### `public int32 `[`ItemId`](#structFRH__BaseInventoryOperation_1a0805225ecfdcea0546be89e6333ac2bd) <a id="structFRH__BaseInventoryOperation_1a0805225ecfdcea0546be89e6333ac2bd"></a>

The item id for the inventory operation.

#### `public TMap< FString, FString > `[`CustomData`](#structFRH__BaseInventoryOperation_1a1b3c0c1b37a2c0af483ed35f9d2067eb) <a id="structFRH__BaseInventoryOperation_1a1b3c0c1b37a2c0af483ed35f9d2067eb"></a>

The custom data for the inventory operation.

#### `public ERHAPI_InventoryBucket `[`Bucket`](#structFRH__BaseInventoryOperation_1a95be2c5b7b5df2ab6ce50f57198b9ff0) <a id="structFRH__BaseInventoryOperation_1a95be2c5b7b5df2ab6ce50f57198b9ff0"></a>

The bucket for the inventory operation.

#### `public TOptional< FDateTime > `[`Expires`](#structFRH__BaseInventoryOperation_1a297edc1d1d7f1acdd92ca2dc4e25535c) <a id="structFRH__BaseInventoryOperation_1a297edc1d1d7f1acdd92ca2dc4e25535c"></a>

The expiriation date of the inventory operation.

#### `public bool `[`InventoryShouldExpire`](#structFRH__BaseInventoryOperation_1a2bc300b71dfa8a8440e65da4d9947d51) <a id="structFRH__BaseInventoryOperation_1a2bc300b71dfa8a8440e65da4d9947d51"></a>

If set, then the the expiration date will be considered for the inventory operation.

#### `public inline  `[`FRH_BaseInventoryOperation`](#structFRH__BaseInventoryOperation_1aa718ffb220e49e5821c75764838e94d7)`()` <a id="structFRH__BaseInventoryOperation_1aa718ffb220e49e5821c75764838e94d7"></a>

Default constructor.

#### `public inline bool `[`InitFromItemInventory`](#structFRH__BaseInventoryOperation_1a8dca78d16cced1969fa5955e30b47071)`(const `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` & ItemInventory)` <a id="structFRH__BaseInventoryOperation_1a8dca78d16cced1969fa5955e30b47071"></a>

Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.

#### Returns
If true, the operation was initialized successfully.

## struct `FRH_CreateInventory` <a id="structFRH__CreateInventory"></a>

```
struct FRH_CreateInventory
  : public FRH_BaseInventoryOperation
```

Create Inventory Operation struct for setting up data to Create an Inventory record.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`Count`](#structFRH__CreateInventory_1ae35d25742e5090f59dce4451e597ae94) | The amount of the inventory operation, defaults to 1.
`public ERHAPI_CreateInventoryType `[`InventoryType`](#structFRH__CreateInventory_1aaf9b8cdb0208933622a7da151c35b76a) | The item id for the inventory operation, defaults to Persistent.
`public inline bool `[`InitFromItemInventory`](#structFRH__CreateInventory_1ab22e9d4a705d3dcd2147629478673043)`(const `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` & ItemInventory)` | Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.

### Members

#### `public int32 `[`Count`](#structFRH__CreateInventory_1ae35d25742e5090f59dce4451e597ae94) <a id="structFRH__CreateInventory_1ae35d25742e5090f59dce4451e597ae94"></a>

The amount of the inventory operation, defaults to 1.

#### `public ERHAPI_CreateInventoryType `[`InventoryType`](#structFRH__CreateInventory_1aaf9b8cdb0208933622a7da151c35b76a) <a id="structFRH__CreateInventory_1aaf9b8cdb0208933622a7da151c35b76a"></a>

The item id for the inventory operation, defaults to Persistent.

#### `public inline bool `[`InitFromItemInventory`](#structFRH__CreateInventory_1ab22e9d4a705d3dcd2147629478673043)`(const `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` & ItemInventory)` <a id="structFRH__CreateInventory_1ab22e9d4a705d3dcd2147629478673043"></a>

Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.

#### Returns
If true, the operation was initialized successfully.

## struct `FRH_UpdateInventory` <a id="structFRH__UpdateInventory"></a>

```
struct FRH_UpdateInventory
  : public FRH_BaseInventoryOperation
```

Update Inventory Operation struct for setting up data to Update an Inventory record.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`InventoryId`](#structFRH__UpdateInventory_1a12dcae9ffba97bf3612c579efab5bc48) | Unique Id of the inventory record being operated on.
`public int32 `[`Count`](#structFRH__UpdateInventory_1afe4138f30fa8b11f449af55f944f9552) | The amount of the inventory operation, defaults to 0.
`public inline bool `[`InitFromItemInventory`](#structFRH__UpdateInventory_1aff31e7fc1bf79da3f6fcdc58210bd3ed)`(const `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` & ItemInventory)` | Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.

### Members

#### `public FGuid `[`InventoryId`](#structFRH__UpdateInventory_1a12dcae9ffba97bf3612c579efab5bc48) <a id="structFRH__UpdateInventory_1a12dcae9ffba97bf3612c579efab5bc48"></a>

Unique Id of the inventory record being operated on.

#### `public int32 `[`Count`](#structFRH__UpdateInventory_1afe4138f30fa8b11f449af55f944f9552) <a id="structFRH__UpdateInventory_1afe4138f30fa8b11f449af55f944f9552"></a>

The amount of the inventory operation, defaults to 0.

#### `public inline bool `[`InitFromItemInventory`](#structFRH__UpdateInventory_1aff31e7fc1bf79da3f6fcdc58210bd3ed)`(const `[`FRH_ItemInventory`](Inventory.md#structFRH__ItemInventory)` & ItemInventory)` <a id="structFRH__UpdateInventory_1aff31e7fc1bf79da3f6fcdc58210bd3ed"></a>

Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.

#### Returns
If true, the operation was initialized successfully.

