---
title: RHStandardEvents Namespace
---Namespace containing RallyHere GETS Standard Events wrappers.

## Summary
| Kind | View | Description |
|------|------|-------------|
|struct|[RHStandardEvents::FCorrelationStartEvent](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent)||
|struct|[RHStandardEvents::FCorrelationEndEvent](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationendevent/#structRHStandardEvents_1_1FCorrelationEndEvent)||
|struct|[RHStandardEvents::FClientDeviceEvent](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent)||
|struct|[RHStandardEvents::FInstanceJoinStartEvent](/unreal-plugins/all/structrhstandardevents_1_1finstancejoinstartevent/#structRHStandardEvents_1_1FInstanceJoinStartEvent)||
|struct|[RHStandardEvents::FInstanceJoinCompleteEvent](/unreal-plugins/all/structrhstandardevents_1_1finstancejoincompleteevent/#structRHStandardEvents_1_1FInstanceJoinCompleteEvent)||
|struct|[RHStandardEvents::FInstanceLeftEvent](/unreal-plugins/all/structrhstandardevents_1_1finstanceleftevent/#structRHStandardEvents_1_1FInstanceLeftEvent)||
|struct|[RHStandardEvents::FLoginStartEvent](/unreal-plugins/all/structrhstandardevents_1_1floginstartevent/#structRHStandardEvents_1_1FLoginStartEvent)||
|struct|[RHStandardEvents::FLoginCompleteEvent](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent)||
|struct|[RHStandardEvents::FObjectiveProgressEvent](/unreal-plugins/all/structrhstandardevents_1_1fobjectiveprogressevent/#structRHStandardEvents_1_1FObjectiveProgressEvent)||
|struct|[RHStandardEvents::FPlayerGameResultEvent](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent)||
|struct|[RHStandardEvents::FPlatformPurchaseEvent](/unreal-plugins/all/structrhstandardevents_1_1fplatformpurchaseevent/#structRHStandardEvents_1_1FPlatformPurchaseEvent)||
|struct|[RHStandardEvents::FCustomEvent](/unreal-plugins/all/structrhstandardevents_1_1fcustomevent/#structRHStandardEvents_1_1FCustomEvent)||
|FString|[CustomDataPrefix](/unreal-plugins/all/namespacerhstandardevents/#group__Events_1gad379819843793e62f662bc4195712a35)||
|void RALLYHEREINTEGRATION_API|[CreateCustomDataAttributes](/unreal-plugins/all/namespacerhstandardevents/#group__Events_1gaa582d62c9f49b2f7fd8f24fa6ae4d6df)(const TOptional< TMap< FString, FString >> & InCustomData, TArray< FAnalyticsEventAttribute > & Attributes)||
|TSharedPtr< class IAnalyticsProvider > RALLYHEREINTEGRATION_API|[AutoCreateAnalyticsProvider](/unreal-plugins/all/namespacerhstandardevents/#group__Events_1ga7eb36ad6c9fda8dbaf75f0105729e359)()||
|FORCEINLINE FJsonFragment|[JsonValueToFragment](/unreal-plugins/all/namespacerhstandardevents/#group__Events_1ga030389845523022e1934e67c81e62df9)(const TSharedPtr< FJsonValue > & InJsonValue)||
## Variables



### `CustomDataPrefix` <a id="group__Events_1gad379819843793e62f662bc4195712a35"></a>

`FString RHStandardEvents::CustomDataPrefix`







## Functions



### `CreateCustomDataAttributes` <a id="group__Events_1gaa582d62c9f49b2f7fd8f24fa6ae4d6df"></a>

void RALLYHEREINTEGRATION_API CreateCustomDataAttributes(const TOptional< TMap< FString, FString >> & InCustomData, TArray< FAnalyticsEventAttribute > & Attributes)

#### Parameters

| Type | Name |
|------|------|
|const TOptional< TMap< FString, FString >> &|InCustomData|
|TArray< FAnalyticsEventAttribute > &|Attributes|

#### Description






### `AutoCreateAnalyticsProvider` <a id="group__Events_1ga7eb36ad6c9fda8dbaf75f0105729e359"></a>

TSharedPtr< class IAnalyticsProvider > RALLYHEREINTEGRATION_API AutoCreateAnalyticsProvider()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `JsonValueToFragment` <a id="group__Events_1ga030389845523022e1934e67c81e62df9"></a>

FORCEINLINE FJsonFragment JsonValueToFragment(const TSharedPtr< FJsonValue > & InJsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|InJsonValue|

#### Description







