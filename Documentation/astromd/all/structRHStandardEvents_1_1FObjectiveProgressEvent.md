---
title: RHStandardEvents::FObjectiveProgressEvent Struct
---
This event is meant to be triggered when a player has earned progress on an objective.The RHIntegration Plugin will not automatically trigger this, but this event is something that RallyHere will process and have an understanding of the data.

rh.objective_progress 
## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Category](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a599682d21697df42de766247514cf56a)|A "bigger.smaller.smallest.tiny" formatted string.For example, in a UI element specification, this could be "hud.minimap.expandButton".|
|FString|[Status](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a1666afdda05cb4637328a084935e9c9a)|Generic status.|
|TOptional< FString >|[Context](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a5fa44ba551357c5931a544a7acc9f804)|Generic context, possibly escaped JSON.|
|TOptional< FString >|[VendorId](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a9c15bd432a7d967ec5bb3b6884e5c0fc)|Vendor ID for the order.|
|TOptional< FString >|[LootId](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1ad13f52f80bb9708ae92bcd01d27572db)|Loot ID for the order.|
|TOptional< FString >|[ItemId](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1ad4a2b8caf6e7b1a7d214bfb191409d7f)|Specific Item ID.|
|TOptional< int32 >|[StartProgress](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a6a53df5dda366b73a78e53e664e0a69e)|The quantity value before the progression event.|
|TOptional< int32 >|[EndProgress](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a143b405070508d212baa6c53f94c4b2e)|The quantity value after the progression event.|
|TOptional< FString >|[ProviderId](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a0a9c7c225a92a2e24ca1c595deb1a901)|Identifier for the authentication provider.|
|TOptional< FString >|[OrderRefId](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a44543703ee251c8012f231b98d2776c8)|Order reference ID.|
|TOptional< FString >|[OrderId](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1ace08b35c3ed55570033d7b606e04f112)|Order identifier.|
|TOptional< FString >|[OrderEntryId](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a3c9c1e2749fc414ed608d672146489be)|Order entry identifier.|
|TOptional< FString >|[Description](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a6a42dfd2f81fdbfb7c60ff14203b075b)|Generic description string.|
|TOptional< FString >|[SessionId](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1ac13dff22b34faf109069a6ebbf18cbb9)|A SessionID to be associated with this event (ex: for gameplay rewards)|
|TOptional< FString >|[InstanceId](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a6b0bd7a6a9497aebe4f49967394ac8a3)|A InstanceId to be associated with this event (ex: for gameplay rewards)|
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1a9ffc3b2b5472a6ec21830cdc57638356)|custom data fields (will be auto-prefixed with custom data prefix)|
|FString|[GetEventName](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1afb105db86768005a43aea2fbbfb88fe2)()||
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1ab983fd84a79204bd6ff60beadaa5549f)(IAnalyticsProvider * Provider, const FString & InCategory, const FString & InStatus, const TOptional< FString > & InContext, const TOptional< FString > & InVendorId, const TOptional< FString > & InLootId, const TOptional< FString > & InItemId, const TOptional< int32 > & InStartProgress, const TOptional< int32 > & InEndProgress, const TOptional< FString > & InProviderId, const TOptional< FString > & InOrderRefId, const TOptional< FString > & InOrderId, const TOptional< FString > & InOrderEntryId, const TOptional< FString > & InDescription, const TOptional< FString > & InSessionId, const TOptional< FString > & InInstanceId, const TOptional< TMap< FString, FString >> & InCustomData)||
||[FObjectiveProgressEvent](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1ae4ae09439045f64f41c15068bd296729)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent_1afc45b87abf3b09ff20d3299ecb6a322e)(IAnalyticsProvider * Provider)||
## Public Attributes



### `Category` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a599682d21697df42de766247514cf56a"></a>

`FString RHStandardEvents::FObjectiveProgressEvent::Category`

A "bigger.smaller.smallest.tiny" formatted string.For example, in a UI element specification, this could be "hud.minimap.expandButton".




### `Status` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a1666afdda05cb4637328a084935e9c9a"></a>

`FString RHStandardEvents::FObjectiveProgressEvent::Status`

Generic status.




### `Context` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a5fa44ba551357c5931a544a7acc9f804"></a>

`TOptional<FString> RHStandardEvents::FObjectiveProgressEvent::Context`

Generic context, possibly escaped JSON.




### `VendorId` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a9c15bd432a7d967ec5bb3b6884e5c0fc"></a>

`TOptional<FString> RHStandardEvents::FObjectiveProgressEvent::VendorId`

Vendor ID for the order.




### `LootId` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1ad13f52f80bb9708ae92bcd01d27572db"></a>

`TOptional<FString> RHStandardEvents::FObjectiveProgressEvent::LootId`

Loot ID for the order.




### `ItemId` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1ad4a2b8caf6e7b1a7d214bfb191409d7f"></a>

`TOptional<FString> RHStandardEvents::FObjectiveProgressEvent::ItemId`

Specific Item ID.




### `StartProgress` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a6a53df5dda366b73a78e53e664e0a69e"></a>

`TOptional<int32> RHStandardEvents::FObjectiveProgressEvent::StartProgress`

The quantity value before the progression event.




### `EndProgress` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a143b405070508d212baa6c53f94c4b2e"></a>

`TOptional<int32> RHStandardEvents::FObjectiveProgressEvent::EndProgress`

The quantity value after the progression event.




### `ProviderId` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a0a9c7c225a92a2e24ca1c595deb1a901"></a>

`TOptional<FString> RHStandardEvents::FObjectiveProgressEvent::ProviderId`

Identifier for the authentication provider.




### `OrderRefId` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a44543703ee251c8012f231b98d2776c8"></a>

`TOptional<FString> RHStandardEvents::FObjectiveProgressEvent::OrderRefId`

Order reference ID.




### `OrderId` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1ace08b35c3ed55570033d7b606e04f112"></a>

`TOptional<FString> RHStandardEvents::FObjectiveProgressEvent::OrderId`

Order identifier.




### `OrderEntryId` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a3c9c1e2749fc414ed608d672146489be"></a>

`TOptional<FString> RHStandardEvents::FObjectiveProgressEvent::OrderEntryId`

Order entry identifier.




### `Description` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a6a42dfd2f81fdbfb7c60ff14203b075b"></a>

`TOptional<FString> RHStandardEvents::FObjectiveProgressEvent::Description`

Generic description string.




### `SessionId` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1ac13dff22b34faf109069a6ebbf18cbb9"></a>

`TOptional<FString> RHStandardEvents::FObjectiveProgressEvent::SessionId`

A SessionID to be associated with this event (ex: for gameplay rewards)




### `InstanceId` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a6b0bd7a6a9497aebe4f49967394ac8a3"></a>

`TOptional<FString> RHStandardEvents::FObjectiveProgressEvent::InstanceId`

A InstanceId to be associated with this event (ex: for gameplay rewards)




### `CustomData` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a9ffc3b2b5472a6ec21830cdc57638356"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FObjectiveProgressEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Static Functions



### `GetEventName` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1afb105db86768005a43aea2fbbfb88fe2"></a>

FString GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Emit` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1ab983fd84a79204bd6ff60beadaa5549f"></a>

void Emit(IAnalyticsProvider * Provider, const FString & InCategory, const FString & InStatus, const TOptional< FString > & InContext, const TOptional< FString > & InVendorId, const TOptional< FString > & InLootId, const TOptional< FString > & InItemId, const TOptional< int32 > & InStartProgress, const TOptional< int32 > & InEndProgress, const TOptional< FString > & InProviderId, const TOptional< FString > & InOrderRefId, const TOptional< FString > & InOrderId, const TOptional< FString > & InOrderEntryId, const TOptional< FString > & InDescription, const TOptional< FString > & InSessionId, const TOptional< FString > & InInstanceId, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|const FString &|InCategory|
|const FString &|InStatus|
|const TOptional< FString > &|InContext|
|const TOptional< FString > &|InVendorId|
|const TOptional< FString > &|InLootId|
|const TOptional< FString > &|InItemId|
|const TOptional< int32 > &|InStartProgress|
|const TOptional< int32 > &|InEndProgress|
|const TOptional< FString > &|InProviderId|
|const TOptional< FString > &|InOrderRefId|
|const TOptional< FString > &|InOrderId|
|const TOptional< FString > &|InOrderEntryId|
|const TOptional< FString > &|InDescription|
|const TOptional< FString > &|InSessionId|
|const TOptional< FString > &|InInstanceId|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







## Public Functions



### `FObjectiveProgressEvent` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1ae4ae09439045f64f41c15068bd296729"></a>

 FObjectiveProgressEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1afc45b87abf3b09ff20d3299ecb6a322e"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







