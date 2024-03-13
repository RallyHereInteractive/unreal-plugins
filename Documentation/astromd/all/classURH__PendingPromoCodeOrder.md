---
title: URH_PendingPromoCodeOrder Class
---Inherits from [URH_PendingOrder](/unreal-plugins/all/classurh__pendingorder/#classURH__PendingOrder)

Class to handle pending promo code redemptions.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[PromoCode](/unreal-plugins/all/classurh__pendingpromocodeorder/#classURH__PendingPromoCodeOrder_1a85cdc37b5bbec7ac8d2df0dbdf0d087f)|Promo code attempting to be redeemed.|
|FRH_PromoCodeResultBlock|[PromoCodeResultsDelegate](/unreal-plugins/all/classurh__pendingpromocodeorder/#classURH__PendingPromoCodeOrder_1ae5622c5052dafc94488cf41555f2a2ac)|Delegate callback with the promo code results.|
|void|[Init](/unreal-plugins/all/classurh__pendingpromocodeorder/#classURH__PendingPromoCodeOrder_1a8293b2c6e26e85785d237210e598e997)(const FString & InOrderId, const FString & InPromoCode, const FRH_PromoCodeResultBlock & InPromoCodeDelegate)|Initalized the pending request.|
|void|[BroadcastComplete](/unreal-plugins/all/classurh__pendingpromocodeorder/#classURH__PendingPromoCodeOrder_1a4629f03754616a4c81733bc54d8d9c1f)([URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) * PlayerInventory, const [FRHAPI_PlayerOrder](/unreal-plugins/all/structfrhapi__playerorder/#structFRHAPI__PlayerOrder) & Content)|Triggers a broadcasts when the order is sucessfully processed.|
## Public Attributes



### `PromoCode` <a id="classURH__PendingPromoCodeOrder_1a85cdc37b5bbec7ac8d2df0dbdf0d087f"></a>

`FString URH_PendingPromoCodeOrder::PromoCode`

Promo code attempting to be redeemed.




### `PromoCodeResultsDelegate` <a id="classURH__PendingPromoCodeOrder_1ae5622c5052dafc94488cf41555f2a2ac"></a>

`FRH_PromoCodeResultBlock URH_PendingPromoCodeOrder::PromoCodeResultsDelegate`

Delegate callback with the promo code results.





## Public Functions



### `Init` <a id="classURH__PendingPromoCodeOrder_1a8293b2c6e26e85785d237210e598e997"></a>

void Init(const FString & InOrderId, const FString & InPromoCode, const FRH_PromoCodeResultBlock & InPromoCodeDelegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InOrderId|
|const FString &|InPromoCode|
|const FRH_PromoCodeResultBlock &|InPromoCodeDelegate|

#### Description

Initalized the pending request.


#### Parameters

InOrderId
: OrderId of the pending order. 
InPromoCode
: Promo code being redeemed in the order. 
InPromoCodeDelegate
: Callback delegate to fire when complete. 




## Protected Functions



### `BroadcastComplete` <a id="classURH__PendingPromoCodeOrder_1a4629f03754616a4c81733bc54d8d9c1f"></a>

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




