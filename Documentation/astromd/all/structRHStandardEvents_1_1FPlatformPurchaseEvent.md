---
title: RHStandardEvents::FPlatformPurchaseEvent Struct
---
This event is triggered when processing of a real money purchase has been completed.

rh.platform_purchase 
## Summary
| Kind | View | Description |
|------|------|-------------|
|struct|[RHStandardEvents::FPlatformPurchaseEvent::FCheckoutData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData)||
|struct|[RHStandardEvents::FPlatformPurchaseEvent::FReceiptData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData)||
|struct|[RHStandardEvents::FPlatformPurchaseEvent::FReceiptOfferData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptofferdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptOfferData)||
|[FCheckoutData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData)|[CheckoutData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1aa2dcc9195ad14b4c9d808b9beee6d6a9)||
|[FReceiptData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData)|[ReceiptData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1a86b933f5cb29196705c7a72828050f4b)||
|FString|[State](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1aa20e40471f982db8d7544951a49d253c)||
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1ad5022bcbe859ffa72c5b593fa292d395)|custom data fields (will be auto-prefixed with custom data prefix)|
|FString|[GetEventName](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1aa7be077a7917b964fece9b3ba345a6f8)()||
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1ab96181c47a680e6c72245a0618ad4691)(IAnalyticsProvider * Provider, const [FCheckoutData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData) & InCheckoutData, const [FReceiptData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData) & InReceiptData, const FString & InState, const TOptional< TMap< FString, FString >> & InCustomData)||
||[FPlatformPurchaseEvent](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1a1b772cdc5a20dc0eac0f5b71f24531d7)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1ac11f111abda67274f03f584fc22912da)(IAnalyticsProvider * Provider)||
## Public Attributes



### `CheckoutData` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1aa2dcc9195ad14b4c9d808b9beee6d6a9"></a>

`FCheckoutData RHStandardEvents::FPlatformPurchaseEvent::CheckoutData`



The checkout data for the purchase 



### `ReceiptData` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1a86b933f5cb29196705c7a72828050f4b"></a>

`FReceiptData RHStandardEvents::FPlatformPurchaseEvent::ReceiptData`



The receipt data for the purchase 



### `State` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1aa20e40471f982db8d7544951a49d253c"></a>

`FString RHStandardEvents::FPlatformPurchaseEvent::State`



The state of the purchase 



### `CustomData` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1ad5022bcbe859ffa72c5b593fa292d395"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FPlatformPurchaseEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Static Functions



### `GetEventName` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1aa7be077a7917b964fece9b3ba345a6f8"></a>

FString GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Emit` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1ab96181c47a680e6c72245a0618ad4691"></a>

void Emit(IAnalyticsProvider * Provider, const [FCheckoutData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData) & InCheckoutData, const [FReceiptData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData) & InReceiptData, const FString & InState, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|const [FCheckoutData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1fcheckoutdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData) &|InCheckoutData|
|const [FReceiptData](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent_1_1freceiptdata/#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData) &|InReceiptData|
|const FString &|InState|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







## Public Functions



### `FPlatformPurchaseEvent` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1a1b772cdc5a20dc0eac0f5b71f24531d7"></a>

 FPlatformPurchaseEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1ac11f111abda67274f03f584fc22912da"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







