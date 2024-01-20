---
title: Source.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_Source](/unreal-plugins/all/source_8h/#Source_8h_1a7e378bc5489b108f9974b5aaa40d3547)|The source of Player Orders.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/source_8h/#Source_8h_1ac12495e2507c326ec12d82e6001edd5b)(const ERHAPI_Source & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/source_8h/#Source_8h_1ad4b0b4043edc6425af26dc91b75f50bb)(const FString & EnumAsString, ERHAPI_Source & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/source_8h/#Source_8h_1a93b0cf75dad50d198746af7e238ffd40)(const ERHAPI_Source & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/source_8h/#Source_8h_1ad226e990f61f0f9fcedaa514bf3037bd)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Source & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/source_8h/#Source_8h_1ae67c0c516bc1ceaecf00dea2cb424952)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Source & Value)||
## Enums




### `ERHAPI_Source` <a id="Source_8h_1a7e378bc5489b108f9974b5aaa40d3547"></a>
The source of Player Orders.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Unknown source.")`|
|`UMETA`|`=(ToolTip="Repair Order send from the Web to fix up Inventory mistakes.")`|
|`UMETA`|`=(ToolTip="Order granted in-game.")`|
|`UMETA`|`=(ToolTip="Order send from the Web site.")`|
|`UMETA`|`=(ToolTip="No sale.")`|
|`UMETA`|`=(ToolTip="Order granted by Support.")`|
|`UMETA`|`=(ToolTip="Order granted by an activity.")`|
|`UMETA`|`=(ToolTip="Order granted by a refund.")`|
|`UMETA`|`=(ToolTip="Order granted by the system.")`|
|`UMETA`|`=(ToolTip="Order granted by as a reward.")`|
|`UMETA`|`=(ToolTip="Order granted by Esports.")`|
|`UMETA`|`=(ToolTip="Order granted by Treasure.")`|
|`UMETA`|`=(ToolTip="Order granted by Console.")`|
|`UMETA`|`=(ToolTip="Order granted by Odyssey.")`|
|`UMETA`|`=(ToolTip="Order granted by Steam.")`|
|`UMETA`|`=(ToolTip="Order granted by a return.")`|
|`UMETA`|`=(ToolTip="Order granted by the JSON gate.")`|
|`UMETA`|`=(ToolTip="Order granted by sending a gift.")`|
|`UMETA`|`=(ToolTip="Order granted by receiving a gift.")`|
|`UMETA`|`=(ToolTip="Order granted by Steam DLC.")`|
|`UMETA`|`=(ToolTip="Order granted by hitting a Twitch milestone.")`|
|`UMETA`|`=(ToolTip="Order granted by Twitch Prime.")`|
|`UMETA`|`=(ToolTip="Order granted by PSN.")`|
|`UMETA`|`=(ToolTip="Order granted by Xbox.")`|
|`UMETA`|`=(ToolTip="Order granted by PTS.")`|
|`UMETA`|`=(ToolTip="Order granted by an instance.")`|
|`UMETA`|`=(ToolTip="Order granted by an account transfer.")`|
|`UMETA`|`=(ToolTip="Order granted by a promocode.")`|
|`UMETA`|`=(ToolTip="Order granted by the Triumph system.")`|
|`UMETA`|`=(ToolTip="Order granted by logging in.")`|
|`UMETA`|`=(ToolTip="Order granted by an uncapped EOM .")`|
|`UMETA`|`=(ToolTip="Order granted by a capped EOM reward.")`|
|`UMETA`|`=(ToolTip="Order granted by a Facebook drop.")`|
|`UMETA`|`=(ToolTip="Order granted by a database script.")`|
|`UMETA`|`=(ToolTip="Order granted by account linking.")`|
|`UMETA`|`=(ToolTip="Order granted by a clan.")`|
|`UMETA`|`=(ToolTip="Order granted by a conversion.")`|
|`UMETA`|`=(ToolTip="Order granted by Apple.")`|
|`UMETA`|`=(ToolTip="Order granted by Google.")`|
|`UMETA`|`=(ToolTip="Order granted by Google Play.")`|
|`UMETA`|`=(ToolTip="Order granted by a portal durable.")`|
|`UMETA`|`=(ToolTip="Order granted by a partner achievement.")`|
|`UMETA`|`=(ToolTip="Order granted by a Mixer drop.")`|
|`UMETA`|`=(ToolTip="Order granted by Nintendo.")`|
|`UMETA`|`=(ToolTip="Order granted by stream viewing progress.")`|
|`UMETA`|`=(ToolTip="Order granted by Discord.")`|
|`UMETA`|`=(ToolTip="Order granted by first login.")`|
|`UMETA`|`=(ToolTip="Order granted by Twitch Fuel.")`|
|`UMETA`|`=(ToolTip="Order granted by Discord DLC.")`|
|`UMETA`|`=(ToolTip="Order granted by NetEase.")`|
|`UMETA`|`=(ToolTip="Order granted by Epic Games.")`|
|`UMETA`|`=(ToolTip="Order granted by Forte.")`|
|`UMETA`|`=(ToolTip="Order granted by Facebook.")`|
|`UMETA`|`=(ToolTip="Order granted by Hi-Rez.")`|
|`UMETA`|`=(ToolTip="Order granted by a daily reward.")`|
|`UMETA`|`=(ToolTip="Order granted by adding an account email.")`|
|`UMETA`|`=(ToolTip="Order granted by a client claim.")`|
|`UMETA`|`=(ToolTip="Order granted by the client.")`|
|`UMETA`|`=(ToolTip="Order granted by entitlements.")`|
|`UMETA`|`=(ToolTip="Order granted by Amazon.")`|
|`UMETA`|`=(ToolTip="Order granted by Simulmedia.")`|
|`UMETA`|`=(ToolTip="Order granted by Luna.")`|



## Functions



### `EnumToString` <a id="Source_8h_1ac12495e2507c326ec12d82e6001edd5b"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_Source & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Source &|EnumValue|

#### Description






### `EnumFromString` <a id="Source_8h_1ad4b0b4043edc6425af26dc91b75f50bb"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_Source & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_Source &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="Source_8h_1a93b0cf75dad50d198746af7e238ffd40"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_Source & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Source &|Value|

#### Description






### `WriteJsonValue` <a id="Source_8h_1ad226e990f61f0f9fcedaa514bf3037bd"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Source & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_Source &|Value|

#### Description






### `TryGetJsonValue` <a id="Source_8h_1ae67c0c516bc1ceaecf00dea2cb424952"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Source & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_Source &|Value|

#### Description







