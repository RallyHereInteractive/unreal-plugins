---
title: URH_PendingOrderDetailsOrder Class
---Inherits from [URH_PendingOrder](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder)

Class to handle pending order details orders.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_OrderDetailsBlock|[OrderDetailsDelegate](/unreal-plugins/all/classurh__pendingorderdetailsorder/#classURH__PendingOrderDetailsOrder_1a2f55d2a898c76ba950a0a40231afed7d)|Delegate callback with player order results.|
|void|[Init](/unreal-plugins/all/classurh__pendingorderdetailsorder/#classURH__PendingOrderDetailsOrder_1a3ed85df7842d29e831c2c2d29df23014)(const FString & InOrderId, const FRH_OrderDetailsBlock & InOrderDetailDelegate)|Initalized the pending request.|
|void|[BroadcastComplete](/unreal-plugins/all/classurh__pendingorderdetailsorder/#classURH__PendingOrderDetailsOrder_1a756eeacc251fdc5cccab7bf7299662d3)([URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) * PlayerInventory, const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & Content)|Triggers a broadcasts when the order is sucessfully processed.|
## Public Attributes



### `OrderDetailsDelegate` <a id="classURH__PendingOrderDetailsOrder_1a2f55d2a898c76ba950a0a40231afed7d"></a>

`FRH_OrderDetailsBlock URH_PendingOrderDetailsOrder::OrderDetailsDelegate`

Delegate callback with player order results.





## Public Functions



### `Init` <a id="classURH__PendingOrderDetailsOrder_1a3ed85df7842d29e831c2c2d29df23014"></a>

void Init(const FString & InOrderId, const FRH_OrderDetailsBlock & InOrderDetailDelegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InOrderId|
|const FRH_OrderDetailsBlock &|InOrderDetailDelegate|

#### Description

Initalized the pending request.


#### Parameters

InOrderId
: OrderId of the pending order. 
InOrderResultDelegate
: Callback delegate to fire when complete. 




## Protected Functions



### `BroadcastComplete` <a id="classURH__PendingOrderDetailsOrder_1a756eeacc251fdc5cccab7bf7299662d3"></a>

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




