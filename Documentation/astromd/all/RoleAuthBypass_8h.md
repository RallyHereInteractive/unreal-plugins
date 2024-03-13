---
title: RoleAuthBypass.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_RoleAuthBypass](/unreal-plugins/all/roleauthbypass_8h/#RoleAuthBypass_8h_1a96a58edee4bac5e1ab02f240b77b6f75)|Role auth bypass options.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/roleauthbypass_8h/#RoleAuthBypass_8h_1ad45596a182675c288168ea8dc37488ad)(const ERHAPI_RoleAuthBypass & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/roleauthbypass_8h/#RoleAuthBypass_8h_1a6d88b5205ecc19cd51a1dda646428def)(const FString & EnumAsString, ERHAPI_RoleAuthBypass & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/roleauthbypass_8h/#RoleAuthBypass_8h_1abb999228a301bbd71f184db641fcb3bf)(const ERHAPI_RoleAuthBypass & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/roleauthbypass_8h/#RoleAuthBypass_8h_1ab51d98da6d0849a22807c3a9558e4ed9)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_RoleAuthBypass & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/roleauthbypass_8h/#RoleAuthBypass_8h_1a396fc368556747479201d47b01e6cbdc)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_RoleAuthBypass & Value)||
## Enums




### `ERHAPI_RoleAuthBypass` <a id="RoleAuthBypass_8h_1a96a58edee4bac5e1ab02f240b77b6f75"></a>
Role auth bypass options.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Does not bypass any auth states")`|
|`UMETA`|`=(ToolTip="Allow bypass of the limited auth state")`|
|`UMETA`|`=(ToolTip="Auth bypass for the limited and locked auth states")`|



## Functions



### `EnumToString` <a id="RoleAuthBypass_8h_1ad45596a182675c288168ea8dc37488ad"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_RoleAuthBypass & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_RoleAuthBypass &|EnumValue|

#### Description






### `EnumFromString` <a id="RoleAuthBypass_8h_1a6d88b5205ecc19cd51a1dda646428def"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_RoleAuthBypass & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_RoleAuthBypass &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="RoleAuthBypass_8h_1abb999228a301bbd71f184db641fcb3bf"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_RoleAuthBypass & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_RoleAuthBypass &|Value|

#### Description






### `WriteJsonValue` <a id="RoleAuthBypass_8h_1ab51d98da6d0849a22807c3a9558e4ed9"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_RoleAuthBypass & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_RoleAuthBypass &|Value|

#### Description






### `TryGetJsonValue` <a id="RoleAuthBypass_8h_1a396fc368556747479201d47b01e6cbdc"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_RoleAuthBypass & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_RoleAuthBypass &|Value|

#### Description







