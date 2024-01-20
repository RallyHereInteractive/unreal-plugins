---
title: RHStandardEvents::FPlatformPurchaseEvent::FCheckoutData Struct
---
A structure containing checkout data for a platform purchase.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TOptional< FString >|[DisplayedPrice](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1ad44b7b290f357c678b31f78208fabea4)||
|TOptional< float >|[NumericPrice](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1ae6c0de8eb31a97b7ea1df30c0531a4e3)||
|TOptional< FString >|[DisplayedPresalePrice](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1aa143c1dd0ab8a50747804994d78a0a3c)||
|TOptional< float >|[NumericPresalePrice](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1a5337a19a5c2e2524e448a6bcc3fd540b)||
|TOptional< FString >|[CurrencyCode](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1a52e7a4b076b1f6848298e3c8ca422930)||
|TOptional< FString >|[Sku](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1aae7400e4153c7090f98106acdd0fe301)||
|TOptional< FString >|[Platform](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1a90909fc3648af41164abbdeb15619967)||
|TSharedRef< FJsonValue >|[ToJsonValue](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1a8a98245eea14c491da81617045c0bac4)()|Converts the receipt data to a JSON value.|
## Public Attributes



### `DisplayedPrice` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1ad44b7b290f357c678b31f78208fabea4"></a>

`TOptional<FString> RHStandardEvents::FPlatformPurchaseEvent::FCheckoutData::DisplayedPrice`



The displayed price for the purchase 



### `NumericPrice` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1ae6c0de8eb31a97b7ea1df30c0531a4e3"></a>

`TOptional<float> RHStandardEvents::FPlatformPurchaseEvent::FCheckoutData::NumericPrice`



The numeric price for the purchase 



### `DisplayedPresalePrice` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1aa143c1dd0ab8a50747804994d78a0a3c"></a>

`TOptional<FString> RHStandardEvents::FPlatformPurchaseEvent::FCheckoutData::DisplayedPresalePrice`



The displayed presale price for the purchase 



### `NumericPresalePrice` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1a5337a19a5c2e2524e448a6bcc3fd540b"></a>

`TOptional<float> RHStandardEvents::FPlatformPurchaseEvent::FCheckoutData::NumericPresalePrice`



The numeric presale price for the purchase 



### `CurrencyCode` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1a52e7a4b076b1f6848298e3c8ca422930"></a>

`TOptional<FString> RHStandardEvents::FPlatformPurchaseEvent::FCheckoutData::CurrencyCode`



The currency code for the purchase 



### `Sku` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1aae7400e4153c7090f98106acdd0fe301"></a>

`TOptional<FString> RHStandardEvents::FPlatformPurchaseEvent::FCheckoutData::Sku`



The SKU for the purchase 



### `Platform` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1a90909fc3648af41164abbdeb15619967"></a>

`TOptional<FString> RHStandardEvents::FPlatformPurchaseEvent::FCheckoutData::Platform`



The platform for the purchase 




## Public Functions



### `ToJsonValue` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData_1a8a98245eea14c491da81617045c0bac4"></a>

TSharedRef< FJsonValue > ToJsonValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Converts the receipt data to a JSON value.





