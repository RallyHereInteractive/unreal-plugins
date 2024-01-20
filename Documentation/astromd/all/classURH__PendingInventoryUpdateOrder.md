---
title: URH_PendingInventoryUpdateOrder Class
---Inherits from [URH_PendingOrder](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder)

Class to handle pending inventory update calls.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_OnInventoryUpdateDelegateBlock|[InventoryUpdateDelegate](/unreal-plugins/all/classurh__pendinginventoryupdateorder/#classURH__PendingInventoryUpdateOrder_1a20bd6332b5aba3f967a9d7c0970340fc)|Delegate callback with inventory update results.|
|void|[Init](/unreal-plugins/all/classurh__pendinginventoryupdateorder/#classURH__PendingInventoryUpdateOrder_1afa0d467f72eecb32302bb507673f0165)(const FString & InOrderId, const FRH_OnInventoryUpdateDelegateBlock & InInventoryUpdateDelegate)|Initalized the pending request.|
|void|[BroadcastComplete](/unreal-plugins/all/classurh__pendinginventoryupdateorder/#classURH__PendingInventoryUpdateOrder_1a97bbd4a1825b41a8ba5cb150fa5e8b80)([URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) * PlayerInventory, const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & Content)|Triggers a broadcasts when the order is sucessfully processed.|
## Public Attributes



### `InventoryUpdateDelegate` <a id="classURH__PendingInventoryUpdateOrder_1a20bd6332b5aba3f967a9d7c0970340fc"></a>

`FRH_OnInventoryUpdateDelegateBlock URH_PendingInventoryUpdateOrder::InventoryUpdateDelegate`

Delegate callback with inventory update results.





## Public Functions



### `Init` <a id="classURH__PendingInventoryUpdateOrder_1afa0d467f72eecb32302bb507673f0165"></a>

void Init(const FString & InOrderId, const FRH_OnInventoryUpdateDelegateBlock & InInventoryUpdateDelegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InOrderId|
|const FRH_OnInventoryUpdateDelegateBlock &|InInventoryUpdateDelegate|

#### Description

Initalized the pending request.


#### Parameters

InOrderId
: OrderId of the pending order. 
InInventoryUpdateDelegate
: Callback delegate to fire when complete. 




## Protected Functions



### `BroadcastComplete` <a id="classURH__PendingInventoryUpdateOrder_1a97bbd4a1825b41a8ba5cb150fa5e8b80"></a>

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




