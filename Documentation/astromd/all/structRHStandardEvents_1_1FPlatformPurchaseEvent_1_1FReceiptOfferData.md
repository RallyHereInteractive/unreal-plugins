---
title: RHStandardEvents::FPlatformPurchaseEvent::FReceiptOfferData Struct
---
A structure containing individual receipt offer data for a platform purchase.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TOptional< FString >|[Namespace](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptofferdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData_1a8a5867f1b8903420fff3c50eff560304)||
|TOptional< FString >|[Sku](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptofferdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData_1a0c45044824bffdd8be8958c1bab0bb42)||
|TOptional< int32 >|[Quantity](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptofferdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData_1ac5c9733cce5aa5edc98dbb774c15db2c)||
|TOptional< TArray< FString > >|[EntitlementIds](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptofferdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData_1a0e99117cb812f3c012134bdfd9a32cc7)||
|TSharedRef< FJsonValue >|[ToJsonValue](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptofferdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData_1a003c337962deff2fc93538a1320709a0)()|Converts the receipt data to a JSON value.|
## Public Attributes



### `Namespace` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData_1a8a5867f1b8903420fff3c50eff560304"></a>

`TOptional<FString> RHStandardEvents::FPlatformPurchaseEvent::FReceiptOfferData::Namespace`



The namespace for the receipt 



### `Sku` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData_1a0c45044824bffdd8be8958c1bab0bb42"></a>

`TOptional<FString> RHStandardEvents::FPlatformPurchaseEvent::FReceiptOfferData::Sku`



The sku for the receipt 



### `Quantity` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData_1ac5c9733cce5aa5edc98dbb774c15db2c"></a>

`TOptional<int32> RHStandardEvents::FPlatformPurchaseEvent::FReceiptOfferData::Quantity`



The quantity of the receipt 



### `EntitlementIds` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData_1a0e99117cb812f3c012134bdfd9a32cc7"></a>

`TOptional<TArray<FString> > RHStandardEvents::FPlatformPurchaseEvent::FReceiptOfferData::EntitlementIds`



The list of entitlements from the receipt 




## Public Functions



### `ToJsonValue` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData_1a003c337962deff2fc93538a1320709a0"></a>

TSharedRef< FJsonValue > ToJsonValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Converts the receipt data to a JSON value.





