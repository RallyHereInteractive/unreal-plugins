---
title: FRHAPI_PlayerPersonResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response for getting a player&#39;s info.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[PlayerId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a280f3f2e11117ce512ad294bb77b986a)|Player ID DEPRECATED use player_uuid instead.|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a7519b55e22e6a9c02dc80cbfc9d6b2f6)|Player UUID.|
|int32|[ActivePlayerId_Optional](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a71d20d8453e439a2338a4796f4f7c9cc)|DEPRECATED use active_player_uuid instead. Active player ID, if the player has an active player.|
|bool|[ActivePlayerId_IsSet](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a1fe5e1c6848bc0efc3bf1a3c82357c9e)|true if ActivePlayerId_Optional has been set to a value|
|FGuid|[ActivePlayerUuid_Optional](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a3dde1fe982714d74c0fd44719367decb)|Active player UUID, if the player has an active player.|
|bool|[ActivePlayerUuid_IsSet](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a7e4f80a38d2b12f0420786801305dffd)|true if ActivePlayerUuid_Optional has been set to a value|
|FGuid|[PersonId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a7c9c64673c5f4060541b705be6a68e4e)|Person ID.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1aae962d8a5cb967cb7bcd382cc1188962)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a07e5f87c8b258ba8b4b5f9cf24294188)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1afed3098f55fb2c1175b20d5f9a469f11)()|Gets the value of PlayerId.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a218ed87d8e156eda4bf474f4a4efb050)()|Gets the value of PlayerId.|
|void|[SetPlayerId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1adcfa0dedd085e788f00442b172b657c1)(int32 NewValue)|Sets the value of PlayerId.|
|bool|[IsPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a5c9a8ada9783a0f385bc997745fdd9f2)()|Returns true if PlayerId matches the default value.|
|void|[SetPlayerIdToDefault](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1ab1bdfbc107c2424b5062899491c5ad56)()|Sets the value of PlayerId to its default|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a02c5fae88b825eb4dd395937544c5ce7)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1ad0409636cc555075b0b2e1a3afbafd93)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a46e761ddb66e8b25a3de3488e16a911e)(FGuid NewValue)|Sets the value of PlayerUuid.|
|int32 &|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1af591f58851eed2ffc18be12e5936ed24)()|Gets the value of ActivePlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a6929c7e179b8897bc5fcbb0a35836489)()|Gets the value of ActivePlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a96ac6dff30726f82b79ff0a5b1b47f73)(const int32 & DefaultValue)|Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a187cfe3d29b7eb69ae446035ac229f9f)(int32 & OutValue)|Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetActivePlayerIdOrNull](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a87c814466209339e0f658c1b411e7621)()|Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetActivePlayerIdOrNull](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1affd49f363af67f77e1d6622c31eccb5f)()|Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetActivePlayerId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1afd9a1220256eca92d3210f6086af0355)(int32 NewValue)|Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.|
|void|[ClearActivePlayerId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a52911bca3d1c286aa9c49fa76861047a)()|Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.|
|bool|[IsActivePlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a7b9f33082c19d3b28c613a7dbfd8243e)()|Returns true if ActivePlayerId_Optional is set and matches the default value.|
|void|[SetActivePlayerIdToDefault](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a2b06fa3955a69ff033aa899285fe0cc2)()|Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.|
|FGuid &|[GetActivePlayerUuid](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a023f6dcd8796e5bd8fded941f8ceaff8)()|Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetActivePlayerUuid](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1aea3c573d00ed9b1b0b50e673bf4d4471)()|Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetActivePlayerUuid](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a69a4e07cbbed9133ca54ddd2ef03a070)(const FGuid & DefaultValue)|Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetActivePlayerUuid](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1afcf0666d4223356e40602f728b72c17d)(FGuid & OutValue)|Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetActivePlayerUuidOrNull](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1aaaf0e94aa3718791751fde7e34416884)()|Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetActivePlayerUuidOrNull](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1ad3e7c39000c20d9b85d65875381180cd)()|Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetActivePlayerUuid](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a11de50995559963c46341b0b01d0212f)(FGuid NewValue)|Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.|
|void|[ClearActivePlayerUuid](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a4d3688ff68e789bac4d134e5781e3235)()|Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.|
|FGuid &|[GetPersonId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1ac85300f4fb4136190db63cae819ab715)()|Gets the value of PersonId.|
|const FGuid &|[GetPersonId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a8881ca097d22c79931874d8334478bbc)()|Gets the value of PersonId.|
|void|[SetPersonId](/unreal-plugins/all/structfrhapi__playerpersonresponse/#structFRHAPI__PlayerPersonResponse_1a78b38719bfeb0006e3534537428820ff)(FGuid NewValue)|Sets the value of PersonId.|
## Public Attributes



### `PlayerId` <a id="structFRHAPI__PlayerPersonResponse_1a280f3f2e11117ce512ad294bb77b986a"></a>

`int32 FRHAPI_PlayerPersonResponse::PlayerId`

Player ID DEPRECATED use player_uuid instead.




### `PlayerUuid` <a id="structFRHAPI__PlayerPersonResponse_1a7519b55e22e6a9c02dc80cbfc9d6b2f6"></a>

`FGuid FRHAPI_PlayerPersonResponse::PlayerUuid`

Player UUID.




### `ActivePlayerId_Optional` <a id="structFRHAPI__PlayerPersonResponse_1a71d20d8453e439a2338a4796f4f7c9cc"></a>

`int32 FRHAPI_PlayerPersonResponse::ActivePlayerId_Optional`

DEPRECATED use active_player_uuid instead. Active player ID, if the player has an active player.




### `ActivePlayerId_IsSet` <a id="structFRHAPI__PlayerPersonResponse_1a1fe5e1c6848bc0efc3bf1a3c82357c9e"></a>

`bool FRHAPI_PlayerPersonResponse::ActivePlayerId_IsSet`

true if ActivePlayerId_Optional has been set to a value




### `ActivePlayerUuid_Optional` <a id="structFRHAPI__PlayerPersonResponse_1a3dde1fe982714d74c0fd44719367decb"></a>

`FGuid FRHAPI_PlayerPersonResponse::ActivePlayerUuid_Optional`

Active player UUID, if the player has an active player.




### `ActivePlayerUuid_IsSet` <a id="structFRHAPI__PlayerPersonResponse_1a7e4f80a38d2b12f0420786801305dffd"></a>

`bool FRHAPI_PlayerPersonResponse::ActivePlayerUuid_IsSet`

true if ActivePlayerUuid_Optional has been set to a value




### `PersonId` <a id="structFRHAPI__PlayerPersonResponse_1a7c9c64673c5f4060541b705be6a68e4e"></a>

`FGuid FRHAPI_PlayerPersonResponse::PersonId`

Person ID.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerPersonResponse_1aae962d8a5cb967cb7bcd382cc1188962"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerPersonResponse_1a07e5f87c8b258ba8b4b5f9cf24294188"></a>

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



### `GetPlayerId` <a id="structFRHAPI__PlayerPersonResponse_1afed3098f55fb2c1175b20d5f9a469f11"></a>

int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `GetPlayerId` <a id="structFRHAPI__PlayerPersonResponse_1a218ed87d8e156eda4bf474f4a4efb050"></a>

const int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `SetPlayerId` <a id="structFRHAPI__PlayerPersonResponse_1adcfa0dedd085e788f00442b172b657c1"></a>

void SetPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayerId.




### `IsPlayerIdDefaultValue` <a id="structFRHAPI__PlayerPersonResponse_1a5c9a8ada9783a0f385bc997745fdd9f2"></a>

bool IsPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerId matches the default value.




### `SetPlayerIdToDefault` <a id="structFRHAPI__PlayerPersonResponse_1ab1bdfbc107c2424b5062899491c5ad56"></a>

void SetPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerId to its default




### `GetPlayerUuid` <a id="structFRHAPI__PlayerPersonResponse_1a02c5fae88b825eb4dd395937544c5ce7"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__PlayerPersonResponse_1ad0409636cc555075b0b2e1a3afbafd93"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__PlayerPersonResponse_1a46e761ddb66e8b25a3de3488e16a911e"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetActivePlayerId` <a id="structFRHAPI__PlayerPersonResponse_1af591f58851eed2ffc18be12e5936ed24"></a>

int32 & GetActivePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ActivePlayerId_Optional, regardless of it having been set.




### `GetActivePlayerId` <a id="structFRHAPI__PlayerPersonResponse_1a6929c7e179b8897bc5fcbb0a35836489"></a>

const int32 & GetActivePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ActivePlayerId_Optional, regardless of it having been set.




### `GetActivePlayerId` <a id="structFRHAPI__PlayerPersonResponse_1a96ac6dff30726f82b79ff0a5b1b47f73"></a>

const int32 & GetActivePlayerId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetActivePlayerId` <a id="structFRHAPI__PlayerPersonResponse_1a187cfe3d29b7eb69ae446035ac229f9f"></a>

bool GetActivePlayerId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.




### `GetActivePlayerIdOrNull` <a id="structFRHAPI__PlayerPersonResponse_1a87c814466209339e0f658c1b411e7621"></a>

int32 * GetActivePlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.




### `GetActivePlayerIdOrNull` <a id="structFRHAPI__PlayerPersonResponse_1affd49f363af67f77e1d6622c31eccb5f"></a>

const int32 * GetActivePlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.




### `SetActivePlayerId` <a id="structFRHAPI__PlayerPersonResponse_1afd9a1220256eca92d3210f6086af0355"></a>

void SetActivePlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.




### `ClearActivePlayerId` <a id="structFRHAPI__PlayerPersonResponse_1a52911bca3d1c286aa9c49fa76861047a"></a>

void ClearActivePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.




### `IsActivePlayerIdDefaultValue` <a id="structFRHAPI__PlayerPersonResponse_1a7b9f33082c19d3b28c613a7dbfd8243e"></a>

bool IsActivePlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ActivePlayerId_Optional is set and matches the default value.




### `SetActivePlayerIdToDefault` <a id="structFRHAPI__PlayerPersonResponse_1a2b06fa3955a69ff033aa899285fe0cc2"></a>

void SetActivePlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.




### `GetActivePlayerUuid` <a id="structFRHAPI__PlayerPersonResponse_1a023f6dcd8796e5bd8fded941f8ceaff8"></a>

FGuid & GetActivePlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.




### `GetActivePlayerUuid` <a id="structFRHAPI__PlayerPersonResponse_1aea3c573d00ed9b1b0b50e673bf4d4471"></a>

const FGuid & GetActivePlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.




### `GetActivePlayerUuid` <a id="structFRHAPI__PlayerPersonResponse_1a69a4e07cbbed9133ca54ddd2ef03a070"></a>

const FGuid & GetActivePlayerUuid(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetActivePlayerUuid` <a id="structFRHAPI__PlayerPersonResponse_1afcf0666d4223356e40602f728b72c17d"></a>

bool GetActivePlayerUuid(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.




### `GetActivePlayerUuidOrNull` <a id="structFRHAPI__PlayerPersonResponse_1aaaf0e94aa3718791751fde7e34416884"></a>

FGuid * GetActivePlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `GetActivePlayerUuidOrNull` <a id="structFRHAPI__PlayerPersonResponse_1ad3e7c39000c20d9b85d65875381180cd"></a>

const FGuid * GetActivePlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `SetActivePlayerUuid` <a id="structFRHAPI__PlayerPersonResponse_1a11de50995559963c46341b0b01d0212f"></a>

void SetActivePlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.




### `ClearActivePlayerUuid` <a id="structFRHAPI__PlayerPersonResponse_1a4d3688ff68e789bac4d134e5781e3235"></a>

void ClearActivePlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.




### `GetPersonId` <a id="structFRHAPI__PlayerPersonResponse_1ac85300f4fb4136190db63cae819ab715"></a>

FGuid & GetPersonId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PersonId.




### `GetPersonId` <a id="structFRHAPI__PlayerPersonResponse_1a8881ca097d22c79931874d8334478bbc"></a>

const FGuid & GetPersonId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PersonId.




### `SetPersonId` <a id="structFRHAPI__PlayerPersonResponse_1a78b38719bfeb0006e3534537428820ff"></a>

void SetPersonId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PersonId.





