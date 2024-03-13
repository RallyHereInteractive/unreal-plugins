---
title: URH_PendingOrder Class
---Inherits from UObject

Base class to handle pending orders waiting for a final response.

## Summary
| Kind | View | Description |
|------|------|-------------|
|typedef|[TGetOrderById](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder_1a08c6c0f06f758c0ceb65e4e9d9ad2f46)||
|FString|[OrderId](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder_1a83c5e4bd5c467fc44bec8737feba31aa)|Id of the pending order.|
|bool|[RequestOrders](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder_1ac9d803bd12539f79ad28c919988866d2)(const FRH_GenericSuccessWithErrorBlock & Delegate)|Polls to see if the order has completed.|
|FORCEINLINE bool|[RequestOrders](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder_1af446c79cf3b58b6b56e112aed33a2ed9)(const FRH_GenericSuccessBlock & Delegate)||
|void|[BroadcastComplete](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder_1a126b51538c0d0d8ca39acaa494c1c432)([URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) * PlayerInventory, const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & Content)|Triggers a broadcasts when the order is sucessfully processed.|
|void|[RequestOrdersResponse](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder_1a803ce919c79362b8053b81abef0cc13e)(const TGetOrderById::Response & Resp)|Handles the response to a Get Player Order call.|
|[URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) *|[GetPlayerInventory](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder_1a3c1cb4a28a04ff48aa50a4c4e8c2250d)()|Gets the Player Inventory.|
## Private Types



### `TGetOrderById` <a id="classURH__PendingOrder_1a08c6c0f06f758c0ceb65e4e9d9ad2f46"></a>

typedef RallyHereAPI::Traits_GetPlayerUuidOrderById TGetOrderById





## Public Attributes



### `OrderId` <a id="classURH__PendingOrder_1a83c5e4bd5c467fc44bec8737feba31aa"></a>

`FString URH_PendingOrder::OrderId`

Id of the pending order.





## Public Functions



### `RequestOrders` <a id="classURH__PendingOrder_1ac9d803bd12539f79ad28c919988866d2"></a>

bool RequestOrders(const FRH_GenericSuccessWithErrorBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessWithErrorBlock &|Delegate|

#### Description

Polls to see if the order has completed.


#### Parameters

Delegate
: Callback if the poll is successful. 

#### Returns
True if a call was made. 



### `RequestOrders` <a id="classURH__PendingOrder_1af446c79cf3b58b6b56e112aed33a2ed9"></a>

FORCEINLINE bool RequestOrders(const FRH_GenericSuccessBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessBlock &|Delegate|

#### Description







## Protected Functions



### `BroadcastComplete` <a id="classURH__PendingOrder_1a126b51538c0d0d8ca39acaa494c1c432"></a>

void BroadcastComplete([URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) * PlayerInventory, const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & Content)

#### Parameters

| Type | Name |
|------|------|
|[URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) *|PlayerInventory|
|const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) &|Content|

#### Description

Triggers a broadcasts when the order is sucessfully processed.


#### Parameters

PlayerInventory
: The Inventory Subystem to help will callback params. 
Content
: The results of the order being processed. 



### `RequestOrdersResponse` <a id="classURH__PendingOrder_1a803ce919c79362b8053b81abef0cc13e"></a>

void RequestOrdersResponse(const TGetOrderById::Response & Resp)

#### Parameters

| Type | Name |
|------|------|
|const TGetOrderById::Response &|Resp|

#### Description

Handles the response to a Get Player Order call.


#### Parameters

Resp
: Response given for the call. 



### `GetPlayerInventory` <a id="classURH__PendingOrder_1a3c1cb4a28a04ff48aa50a4c4e8c2250d"></a>

[URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) * GetPlayerInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Player Inventory.





