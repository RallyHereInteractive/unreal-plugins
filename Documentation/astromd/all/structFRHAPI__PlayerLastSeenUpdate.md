---
title: FRHAPI_PlayerLastSeenUpdate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FDateTime|[Time](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1ac52ac599410a5675a0052148618eb994)|Last time this player reported their online status.|
|FString|[Platform_Optional](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1ace7260325ef2f15713ef90d0544387d3)|Platform the user was online in.|
|bool|[Platform_IsSet](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1a3e0f8a06427ed33debc26f6e803716f3)|true if Platform_Optional has been set to a value|
|FString|[DisplayName_Optional](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1af7ccaaa4754dfdfecb54198a36a1023c)|Player Display Name.|
|bool|[DisplayName_IsSet](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1a5806815fa7538ea0b3c068d1542bc012)|true if DisplayName_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1a69d14579678d69c672e84c3b1f4d3aed)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1aebe570f16c631f17b3c363b4feba3347)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FDateTime &|[GetTime](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1ae4c517815382d832c42ed5176b7b263e)()|Gets the value of Time.|
|const FDateTime &|[GetTime](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1ac1c9b2a229061b77dd501bc90928e4f2)()|Gets the value of Time.|
|void|[SetTime](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1a8f00375115d308d4948492533a3b7513)(FDateTime NewValue)|Sets the value of Time.|
|FString &|[GetPlatform](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1a92f99e6dc4b486ad533f07cbdf9667b5)()|Gets the value of Platform_Optional, regardless of it having been set.|
|const FString &|[GetPlatform](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1a4d2e617b2394850ec7eb69bf938a08be)()|Gets the value of Platform_Optional, regardless of it having been set.|
|const FString &|[GetPlatform](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1af3f949aae640c72190baf0d73e6d9b80)(const FString & DefaultValue)|Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlatform](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1a904d2fa8eb892778c6b748195fed4593)(FString & OutValue)|Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPlatformOrNull](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1abf1e4a79e065ce2e25e43876f6f001cd)()|Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPlatformOrNull](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1ae6f1517f7ddca3105951e4fb717770e3)()|Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlatform](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1ae27d91e724a1f7a7570b5829e0dfee8f)(FString NewValue)|Sets the value of Platform_Optional and also sets Platform_IsSet to true.|
|void|[ClearPlatform](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1aa3cc09e14a89615c9bbe6c0c8d8fae9b)()|Clears the value of Platform_Optional and sets Platform_IsSet to false.|
|FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1a30250675af12fb277f2182668bf3ec9a)()|Gets the value of DisplayName_Optional, regardless of it having been set.|
|const FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1ab5489de635edc0730fdaf537f0120d5f)()|Gets the value of DisplayName_Optional, regardless of it having been set.|
|const FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1a6d5d04b81a85d0f01b640ba714d0f8df)(const FString & DefaultValue)|Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDisplayName](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1a7ed6067e479cde3635a48302c86c7db6)(FString & OutValue)|Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetDisplayNameOrNull](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1afd2dc56c4287e3fb3c96f347ceb712f5)()|Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetDisplayNameOrNull](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1ad59d485b895730387c53caed315b4aa5)()|Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDisplayName](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1ac582ecace3194202efe69422236169ae)(FString NewValue)|Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.|
|void|[ClearDisplayName](/unreal-plugins/all/structfrhapi__playerlastseenupdate/#structFRHAPI__PlayerLastSeenUpdate_1a808a56f9cf76cfde9abcf2bb0c5bd9c4)()|Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.|
## Public Attributes



### `Time` <a id="structFRHAPI__PlayerLastSeenUpdate_1ac52ac599410a5675a0052148618eb994"></a>

`FDateTime FRHAPI_PlayerLastSeenUpdate::Time`

Last time this player reported their online status.




### `Platform_Optional` <a id="structFRHAPI__PlayerLastSeenUpdate_1ace7260325ef2f15713ef90d0544387d3"></a>

`FString FRHAPI_PlayerLastSeenUpdate::Platform_Optional`

Platform the user was online in.




### `Platform_IsSet` <a id="structFRHAPI__PlayerLastSeenUpdate_1a3e0f8a06427ed33debc26f6e803716f3"></a>

`bool FRHAPI_PlayerLastSeenUpdate::Platform_IsSet`

true if Platform_Optional has been set to a value




### `DisplayName_Optional` <a id="structFRHAPI__PlayerLastSeenUpdate_1af7ccaaa4754dfdfecb54198a36a1023c"></a>

`FString FRHAPI_PlayerLastSeenUpdate::DisplayName_Optional`

Player Display Name.




### `DisplayName_IsSet` <a id="structFRHAPI__PlayerLastSeenUpdate_1a5806815fa7538ea0b3c068d1542bc012"></a>

`bool FRHAPI_PlayerLastSeenUpdate::DisplayName_IsSet`

true if DisplayName_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerLastSeenUpdate_1a69d14579678d69c672e84c3b1f4d3aed"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__PlayerLastSeenUpdate_1aebe570f16c631f17b3c363b4feba3347"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetTime` <a id="structFRHAPI__PlayerLastSeenUpdate_1ae4c517815382d832c42ed5176b7b263e"></a>

FDateTime & GetTime()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Time.




### `GetTime` <a id="structFRHAPI__PlayerLastSeenUpdate_1ac1c9b2a229061b77dd501bc90928e4f2"></a>

const FDateTime & GetTime()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Time.




### `SetTime` <a id="structFRHAPI__PlayerLastSeenUpdate_1a8f00375115d308d4948492533a3b7513"></a>

void SetTime(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Time.




### `GetPlatform` <a id="structFRHAPI__PlayerLastSeenUpdate_1a92f99e6dc4b486ad533f07cbdf9667b5"></a>

FString & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform_Optional, regardless of it having been set.




### `GetPlatform` <a id="structFRHAPI__PlayerLastSeenUpdate_1a4d2e617b2394850ec7eb69bf938a08be"></a>

const FString & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform_Optional, regardless of it having been set.




### `GetPlatform` <a id="structFRHAPI__PlayerLastSeenUpdate_1af3f949aae640c72190baf0d73e6d9b80"></a>

const FString & GetPlatform(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlatform` <a id="structFRHAPI__PlayerLastSeenUpdate_1a904d2fa8eb892778c6b748195fed4593"></a>

bool GetPlatform(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.




### `GetPlatformOrNull` <a id="structFRHAPI__PlayerLastSeenUpdate_1abf1e4a79e065ce2e25e43876f6f001cd"></a>

FString * GetPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.




### `GetPlatformOrNull` <a id="structFRHAPI__PlayerLastSeenUpdate_1ae6f1517f7ddca3105951e4fb717770e3"></a>

const FString * GetPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.




### `SetPlatform` <a id="structFRHAPI__PlayerLastSeenUpdate_1ae27d91e724a1f7a7570b5829e0dfee8f"></a>

void SetPlatform(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Platform_Optional and also sets Platform_IsSet to true.




### `ClearPlatform` <a id="structFRHAPI__PlayerLastSeenUpdate_1aa3cc09e14a89615c9bbe6c0c8d8fae9b"></a>

void ClearPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Platform_Optional and sets Platform_IsSet to false.




### `GetDisplayName` <a id="structFRHAPI__PlayerLastSeenUpdate_1a30250675af12fb277f2182668bf3ec9a"></a>

FString & GetDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayName_Optional, regardless of it having been set.




### `GetDisplayName` <a id="structFRHAPI__PlayerLastSeenUpdate_1ab5489de635edc0730fdaf537f0120d5f"></a>

const FString & GetDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayName_Optional, regardless of it having been set.




### `GetDisplayName` <a id="structFRHAPI__PlayerLastSeenUpdate_1a6d5d04b81a85d0f01b640ba714d0f8df"></a>

const FString & GetDisplayName(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDisplayName` <a id="structFRHAPI__PlayerLastSeenUpdate_1a7ed6067e479cde3635a48302c86c7db6"></a>

bool GetDisplayName(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.




### `GetDisplayNameOrNull` <a id="structFRHAPI__PlayerLastSeenUpdate_1afd2dc56c4287e3fb3c96f347ceb712f5"></a>

FString * GetDisplayNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.




### `GetDisplayNameOrNull` <a id="structFRHAPI__PlayerLastSeenUpdate_1ad59d485b895730387c53caed315b4aa5"></a>

const FString * GetDisplayNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.




### `SetDisplayName` <a id="structFRHAPI__PlayerLastSeenUpdate_1ac582ecace3194202efe69422236169ae"></a>

void SetDisplayName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.




### `ClearDisplayName` <a id="structFRHAPI__PlayerLastSeenUpdate_1a808a56f9cf76cfde9abcf2bb0c5bd9c4"></a>

void ClearDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.





