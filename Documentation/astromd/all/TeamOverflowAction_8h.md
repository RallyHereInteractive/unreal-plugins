---
title: TeamOverflowAction.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_TeamOverflowAction](/unreal-plugins/all/teamoverflowaction_8h/#TeamOverflowAction_8h_1a490fba595dfa98214bc88a59f5640a94)|How too many players being invited to a single team should be handled.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/teamoverflowaction_8h/#TeamOverflowAction_8h_1a9d196f978c6e6f238b7d0367098dda7e)(const ERHAPI_TeamOverflowAction & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/teamoverflowaction_8h/#TeamOverflowAction_8h_1a9401657a01f4d67bd13e0ce1aaf127e8)(const FString & EnumAsString, ERHAPI_TeamOverflowAction & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/teamoverflowaction_8h/#TeamOverflowAction_8h_1a9e19a09303c498e7ae4c8b6bab79a9ff)(const ERHAPI_TeamOverflowAction & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/teamoverflowaction_8h/#TeamOverflowAction_8h_1a31bce8f44a7adadab18d0ec62c91a4e0)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_TeamOverflowAction & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/teamoverflowaction_8h/#TeamOverflowAction_8h_1a9af188ebf9b2622e20fc950ed9eece7d)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_TeamOverflowAction & Value)||
## Enums




### `ERHAPI_TeamOverflowAction` <a id="TeamOverflowAction_8h_1a490fba595dfa98214bc88a59f5640a94"></a>
How too many players being invited to a single team should be handled.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Raise an error when too many players are invited to the same team")`|
|`UMETA`|`=(ToolTip="Attempt to fill other teams when too many players are invited to one team. Will return an error if there is not enough room for all players")`|
|`UMETA`|`=(ToolTip="Invite as many players as possible, and allow them to overflow onto other teams if necessary. Some players may not get invited. Will return an error if no players are invited")`|
|`UMETA`|`=(ToolTip="Invite as many players as possible to the chosen team, and do not allow them to overflow. Some players may not get invited. Will return an error if no players are invited")`|
|`UMETA`|`=(ToolTip="Overfill the specific team (ex. allow 6 players on a team that normally only allows 5)")`|



## Functions



### `EnumToString` <a id="TeamOverflowAction_8h_1a9d196f978c6e6f238b7d0367098dda7e"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_TeamOverflowAction & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_TeamOverflowAction &|EnumValue|

#### Description






### `EnumFromString` <a id="TeamOverflowAction_8h_1a9401657a01f4d67bd13e0ce1aaf127e8"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_TeamOverflowAction & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_TeamOverflowAction &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="TeamOverflowAction_8h_1a9e19a09303c498e7ae4c8b6bab79a9ff"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_TeamOverflowAction & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_TeamOverflowAction &|Value|

#### Description






### `WriteJsonValue` <a id="TeamOverflowAction_8h_1a31bce8f44a7adadab18d0ec62c91a4e0"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_TeamOverflowAction & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_TeamOverflowAction &|Value|

#### Description






### `TryGetJsonValue` <a id="TeamOverflowAction_8h_1a9af188ebf9b2622e20fc950ed9eece7d"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_TeamOverflowAction & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_TeamOverflowAction &|Value|

#### Description







