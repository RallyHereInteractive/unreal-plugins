---
title: RHStandardEvents::FPlatformPurchaseEvent::FReceiptData Struct
---
A structure containing receipt data for a platform purchase.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TOptional< FString >|[TransactionId](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData_1a05a88a993e30f97dca63ad6919b21b6c)||
|TArray< [FReceiptOfferData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptofferdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData) >|[ReceiptOffers](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData_1a1d2f0c5b6b66b280de087abb2d305df8)||
|TSharedRef< FJsonValue >|[ToJsonValue](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData_1ac1a69aa0d1a2c522a33271017e5088ab)()|Converts the receipt data to a JSON value.|
## Public Attributes



### `TransactionId` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData_1a05a88a993e30f97dca63ad6919b21b6c"></a>

`TOptional<FString> RHStandardEvents::FPlatformPurchaseEvent::FReceiptData::TransactionId`



The transaction id for the receipt 



### `ReceiptOffers` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData_1a1d2f0c5b6b66b280de087abb2d305df8"></a>

`TArray<FReceiptOfferData> RHStandardEvents::FPlatformPurchaseEvent::FReceiptData::ReceiptOffers`



List of the receipt offers 




## Public Functions



### `ToJsonValue` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData_1ac1a69aa0d1a2c522a33271017e5088ab"></a>

TSharedRef< FJsonValue > ToJsonValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Converts the receipt data to a JSON value.





