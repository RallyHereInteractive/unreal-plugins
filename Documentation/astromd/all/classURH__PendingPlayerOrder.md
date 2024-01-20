---
title: URH_PendingPlayerOrder Class
---Inherits from [URH_PendingOrder](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder)

Class to handle pending player orders.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_OrderResultBlock|[OrderResultDelegate](/unreal-plugins/all/classurh__pendingplayerorder/#classURH__PendingPlayerOrder_1a07d7f652f1b01bd3d29f691efa72b573)|Delegate callback with player order results.|
|TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * >|[OrderEntries](/unreal-plugins/all/classurh__pendingplayerorder/#classURH__PendingPlayerOrder_1a5ba9759def6c16bd12fac3ca5a867afd)|List of all the order entries submitted in the order.|
|void|[Init](/unreal-plugins/all/classurh__pendingplayerorder/#classURH__PendingPlayerOrder_1a72bb10bf44aff3eb38a48e6e01e886fd)(const FString & InOrderId, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & InOrderEntries, const FRH_OrderResultBlock & InOrderResultDelegate)|Initalized the pending request.|
|void|[BroadcastComplete](/unreal-plugins/all/classurh__pendingplayerorder/#classURH__PendingPlayerOrder_1aad3d587d8b58f21c3c873644165e646d)([URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) * PlayerInventory, const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & Content)|Triggers a broadcasts when the order is sucessfully processed.|
## Public Attributes



### `OrderResultDelegate` <a id="classURH__PendingPlayerOrder_1a07d7f652f1b01bd3d29f691efa72b573"></a>

`FRH_OrderResultBlock URH_PendingPlayerOrder::OrderResultDelegate`

Delegate callback with player order results.




### `OrderEntries` <a id="classURH__PendingPlayerOrder_1a5ba9759def6c16bd12fac3ca5a867afd"></a>

`TArray<URH_PlayerOrderEntry*> URH_PendingPlayerOrder::OrderEntries`

List of all the order entries submitted in the order.





## Public Functions



### `Init` <a id="classURH__PendingPlayerOrder_1a72bb10bf44aff3eb38a48e6e01e886fd"></a>

void Init(const FString & InOrderId, const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > & InOrderEntries, const FRH_OrderResultBlock & InOrderResultDelegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InOrderId|
|const TArray< [URH_PlayerOrderEntry](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry) * > &|InOrderEntries|
|const FRH_OrderResultBlock &|InOrderResultDelegate|

#### Description

Initalized the pending request.


#### Parameters

InOrderId
: OrderId of the pending order. 
InOrderEntries
: Order entries submitted with the order 
InOrderResultDelegate
: Callback delegate to fire when complete. 




## Protected Functions



### `BroadcastComplete` <a id="classURH__PendingPlayerOrder_1aad3d587d8b58f21c3c873644165e646d"></a>

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




