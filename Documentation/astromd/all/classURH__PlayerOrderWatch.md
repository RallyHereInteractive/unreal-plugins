---
title: URH_PlayerOrderWatch Class
---Inherits from UObject

Class to track watches on players orders.

## Summary
| Kind | View | Description |
|------|------|-------------|
|typedef|[TGetOrders](/unreal-plugins/all/classurh__playerorderwatch/#classURH__PlayerOrderWatch_1a03e5d9d2f3bb8f880e1b937a6210a655)||
|TArray< FRH_OrderDetailsBlock >|[Delegates](/unreal-plugins/all/classurh__playerorderwatch/#classURH__PlayerOrderWatch_1a478e3d65d0b3ef1816a434fab2a2434e)|List of delegates listening for order.|
|FString|[Cursor](/unreal-plugins/all/classurh__playerorderwatch/#classURH__PlayerOrderWatch_1ac296a67c627387c8eec532497fd458fc)||
|bool|[RequestOrders](/unreal-plugins/all/classurh__playerorderwatch/#classURH__PlayerOrderWatch_1a8e3771a7606e875a82480d14c0eda10d)(const FRH_GenericSuccessWithErrorBlock & Delegate)|Gets the players orders.|
|FORCEINLINE bool|[RequestOrders](/unreal-plugins/all/classurh__playerorderwatch/#classURH__PlayerOrderWatch_1a0971ebca21c2bc89f3a6e26994912a3c)(const FRH_GenericSuccessBlock & Delegate)||
|void|[RequestOrdersResponse](/unreal-plugins/all/classurh__playerorderwatch/#classURH__PlayerOrderWatch_1a156cada0b20a90e20017c618b28b1723)(const TGetOrders::Response & Resp)|Handles the response to a Get Player Order call.|
|[URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) *|[GetPlayerInventory](/unreal-plugins/all/classurh__playerorderwatch/#classURH__PlayerOrderWatch_1a49c22be3b3f0b9e3ef8170766cb1b392)()|Gets the Player Inventory.|
## Private Types



### `TGetOrders` <a id="classURH__PlayerOrderWatch_1a03e5d9d2f3bb8f880e1b937a6210a655"></a>

typedef RallyHereAPI::Traits_GetPlayerUuidOrders TGetOrders





## Public Attributes



### `Delegates` <a id="classURH__PlayerOrderWatch_1a478e3d65d0b3ef1816a434fab2a2434e"></a>

`TArray<FRH_OrderDetailsBlock> URH_PlayerOrderWatch::Delegates`

List of delegates listening for order.





## Protected Attributes



### `Cursor` <a id="classURH__PlayerOrderWatch_1ac296a67c627387c8eec532497fd458fc"></a>

`FString URH_PlayerOrderWatch::Cursor`



Cursor location of last player orders response. 




## Public Functions



### `RequestOrders` <a id="classURH__PlayerOrderWatch_1a8e3771a7606e875a82480d14c0eda10d"></a>

bool RequestOrders(const FRH_GenericSuccessWithErrorBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessWithErrorBlock &|Delegate|

#### Description

Gets the players orders.


#### Parameters

Delegate
: Callback with the players orders. 

#### Returns
True if the call was made. 



### `RequestOrders` <a id="classURH__PlayerOrderWatch_1a0971ebca21c2bc89f3a6e26994912a3c"></a>

FORCEINLINE bool RequestOrders(const FRH_GenericSuccessBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessBlock &|Delegate|

#### Description







## Protected Functions



### `RequestOrdersResponse` <a id="classURH__PlayerOrderWatch_1a156cada0b20a90e20017c618b28b1723"></a>

void RequestOrdersResponse(const TGetOrders::Response & Resp)

#### Parameters

| Type | Name |
|------|------|
|const TGetOrders::Response &|Resp|

#### Description

Handles the response to a Get Player Order call.


#### Parameters

Resp
: Response given for the call. 



### `GetPlayerInventory` <a id="classURH__PlayerOrderWatch_1a49c22be3b3f0b9e3ef8170766cb1b392"></a>

[URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) * GetPlayerInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Player Inventory.





