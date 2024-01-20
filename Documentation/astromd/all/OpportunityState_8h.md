---
title: OpportunityState.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_OpportunityState](/unreal-plugins/all/opportunitystate_8h/#OpportunityState_8h_1a79aa9e0a75c0b071d1b5b4db2f74c62d)|An enumeration.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/opportunitystate_8h/#OpportunityState_8h_1a8cbc8c0368b51b80ade1d17ed7343e02)(const ERHAPI_OpportunityState & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/opportunitystate_8h/#OpportunityState_8h_1a3b50b6f2e23db786aa048a24cf9037b8)(const FString & EnumAsString, ERHAPI_OpportunityState & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/opportunitystate_8h/#OpportunityState_8h_1a8964a4b09b1b16cf5c6e6d003e03d8d3)(const ERHAPI_OpportunityState & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/opportunitystate_8h/#OpportunityState_8h_1a01e94595c0e144a57f0ecd4339086e05)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OpportunityState & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/opportunitystate_8h/#OpportunityState_8h_1ae6df3a8e032464c56431dce3e7ccc96e)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OpportunityState & Value)||
## Enums




### `ERHAPI_OpportunityState` <a id="OpportunityState_8h_1a79aa9e0a75c0b071d1b5b4db2f74c62d"></a>
An enumeration.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="User started watching the ad")`|
|`UMETA`|`=(ToolTip="User finished watching the ad")`|
|`UMETA`|`=(ToolTip="User stopped watching the ad partway through")`|



## Functions



### `EnumToString` <a id="OpportunityState_8h_1a8cbc8c0368b51b80ade1d17ed7343e02"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_OpportunityState & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OpportunityState &|EnumValue|

#### Description






### `EnumFromString` <a id="OpportunityState_8h_1a3b50b6f2e23db786aa048a24cf9037b8"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_OpportunityState & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_OpportunityState &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="OpportunityState_8h_1a8964a4b09b1b16cf5c6e6d003e03d8d3"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_OpportunityState & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OpportunityState &|Value|

#### Description






### `WriteJsonValue` <a id="OpportunityState_8h_1a01e94595c0e144a57f0ecd4339086e05"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OpportunityState & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_OpportunityState &|Value|

#### Description






### `TryGetJsonValue` <a id="OpportunityState_8h_1ae6df3a8e032464c56431dce3e7ccc96e"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OpportunityState & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_OpportunityState &|Value|

#### Description







