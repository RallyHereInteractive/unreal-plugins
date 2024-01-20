---
title: RestrictionType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_RestrictionType](/unreal-plugins/all/restrictiontype_8h/#RestrictionType_8h_1a2a17c43f5fef2ac80ddf366fc60d86ef)|Restrictions that can be applied to a player. Resitrictions are applied to a player by an admin and often types indicates that the player is banned.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/restrictiontype_8h/#RestrictionType_8h_1aefd41c5318f9af5430b1fd3e91feb4b6)(const ERHAPI_RestrictionType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/restrictiontype_8h/#RestrictionType_8h_1a86a89cf7686079197735b7e9d88531b4)(const FString & EnumAsString, ERHAPI_RestrictionType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/restrictiontype_8h/#RestrictionType_8h_1ac7f4ec7c407d4f9054a153f462647f8e)(const ERHAPI_RestrictionType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/restrictiontype_8h/#RestrictionType_8h_1a0e6282250657c0313a17ef3ae874abbf)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_RestrictionType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/restrictiontype_8h/#RestrictionType_8h_1a7f6d09a2d7cc1d9518b65dba3a5c18cb)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_RestrictionType & Value)||
## Enums




### `ERHAPI_RestrictionType` <a id="RestrictionType_8h_1a2a17c43f5fef2ac80ddf366fc60d86ef"></a>
Restrictions that can be applied to a player. Resitrictions are applied to a player by an admin and often types indicates that the player is banned.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Account is banned")`|
|`UMETA`|`=(ToolTip="Account is locked out")`|
|`UMETA`|`=(ToolTip="Account is pending deletion and will be deleted in the future")`|
|`UMETA`|`=(ToolTip="Account has been banned from authentication")`|



## Functions



### `EnumToString` <a id="RestrictionType_8h_1aefd41c5318f9af5430b1fd3e91feb4b6"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_RestrictionType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_RestrictionType &|EnumValue|

#### Description






### `EnumFromString` <a id="RestrictionType_8h_1a86a89cf7686079197735b7e9d88531b4"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_RestrictionType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_RestrictionType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="RestrictionType_8h_1ac7f4ec7c407d4f9054a153f462647f8e"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_RestrictionType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_RestrictionType &|Value|

#### Description






### `WriteJsonValue` <a id="RestrictionType_8h_1a0e6282250657c0313a17ef3ae874abbf"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_RestrictionType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_RestrictionType &|Value|

#### Description






### `TryGetJsonValue` <a id="RestrictionType_8h_1a7f6d09a2d7cc1d9518b65dba3a5c18cb"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_RestrictionType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_RestrictionType &|Value|

#### Description







