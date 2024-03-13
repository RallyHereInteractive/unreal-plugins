---
title: InstanceSourceProvider.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_InstanceSourceProvider](/unreal-plugins/all/instancesourceprovider_8h/#InstanceSourceProvider_8h_1a7951ce6e51c0745cd6e020aad3f9cae9)|What type of provider is hosting the instance.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/instancesourceprovider_8h/#InstanceSourceProvider_8h_1afa7134396ccbe8f12c046f9c85e1bdfc)(const ERHAPI_InstanceSourceProvider & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/instancesourceprovider_8h/#InstanceSourceProvider_8h_1a5d9743e080c1a1b020ec2483d8cb1758)(const FString & EnumAsString, ERHAPI_InstanceSourceProvider & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/instancesourceprovider_8h/#InstanceSourceProvider_8h_1ad105177aa1b8555112d9ead9aa2adcff)(const ERHAPI_InstanceSourceProvider & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/instancesourceprovider_8h/#InstanceSourceProvider_8h_1a20eb9a5d1d60b73f6c2545fa8034c854)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InstanceSourceProvider & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/instancesourceprovider_8h/#InstanceSourceProvider_8h_1ab3ee10b189fcca81382c0d0b6a421f49)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InstanceSourceProvider & Value)||
## Enums




### `ERHAPI_InstanceSourceProvider` <a id="InstanceSourceProvider_8h_1a7951ce6e51c0745cd6e020aad3f9cae9"></a>
What type of provider is hosting the instance.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Instance is being hosted by a player")`|
|`UMETA`|`=(ToolTip="Instance is hosted by the RallyHere SIC system")`|
|`UMETA`|`=(ToolTip="Instance is being hosted by Multiplay")`|



## Functions



### `EnumToString` <a id="InstanceSourceProvider_8h_1afa7134396ccbe8f12c046f9c85e1bdfc"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_InstanceSourceProvider & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InstanceSourceProvider &|EnumValue|

#### Description






### `EnumFromString` <a id="InstanceSourceProvider_8h_1a5d9743e080c1a1b020ec2483d8cb1758"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_InstanceSourceProvider & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_InstanceSourceProvider &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="InstanceSourceProvider_8h_1ad105177aa1b8555112d9ead9aa2adcff"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_InstanceSourceProvider & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InstanceSourceProvider &|Value|

#### Description






### `WriteJsonValue` <a id="InstanceSourceProvider_8h_1a20eb9a5d1d60b73f6c2545fa8034c854"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InstanceSourceProvider & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_InstanceSourceProvider &|Value|

#### Description






### `TryGetJsonValue` <a id="InstanceSourceProvider_8h_1ab3ee10b189fcca81382c0d0b6a421f49"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InstanceSourceProvider & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_InstanceSourceProvider &|Value|

#### Description







