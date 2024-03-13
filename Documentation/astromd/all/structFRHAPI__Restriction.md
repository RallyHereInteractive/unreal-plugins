---
title: FRHAPI_Restriction Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Restriction applied to a player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_RestrictionType|[Type](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a4563f4ef4361eacf1e83acde5aa9e9b1)|Type of restriction.|
|FString|[Reason_Optional](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1acb07c004735610b31b0326e85867841f)|Reason the restriction was applied.|
|bool|[Reason_IsSet](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a33efc2fe715a3c3ee06ec148ab82a239)|true if Reason_Optional has been set to a value|
|FDateTime|[Expiration_Optional](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1aa9e2bfa5e8c955b12b209034e64c5e57)|Date the restriction expires. Null means the restriction is permanent.|
|bool|[Expiration_IsSet](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1ae0bb6d1bcce99870a53bd773b2740cf2)|true if Expiration_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a5a03667bdf37bfdf85209ed872024579)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1ad9b9b26c7c642e5d5c0d08fb4625a43f)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_RestrictionType &|[GetType](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a3b9f455e0c867bfd7754103ecc9e7ba7)()|Gets the value of Type.|
|const ERHAPI_RestrictionType &|[GetType](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a591e500a3661de66229c5f1ba7724435)()|Gets the value of Type.|
|void|[SetType](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1aa8c1f024b4049bac6c1241a6cdaeddad)(ERHAPI_RestrictionType NewValue)|Sets the value of Type.|
|FString &|[GetReason](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a182cbbe5278382533d8c8ba1929a35bf)()|Gets the value of Reason_Optional, regardless of it having been set.|
|const FString &|[GetReason](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a531a35039b7dec535cd8ad7c84d066bb)()|Gets the value of Reason_Optional, regardless of it having been set.|
|const FString &|[GetReason](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1afe82ab3fd779eb1d73b537f733ba6bc0)(const FString & DefaultValue)|Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetReason](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a560c7de16a3a9e8ae18c7f200d34104f)(FString & OutValue)|Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetReasonOrNull](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a580cc0f156b36849c2bdf786383a9b65)()|Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetReasonOrNull](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a6b62ccb570a792b511846846be454f02)()|Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetReason](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1ac50ac97764b8e3d0c121c7f8b22024e7)(FString NewValue)|Sets the value of Reason_Optional and also sets Reason_IsSet to true.|
|void|[ClearReason](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a7d50b5b72086bb552c7a73c2acd0dd2c)()|Clears the value of Reason_Optional and sets Reason_IsSet to false.|
|FDateTime &|[GetExpiration](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a9de96ed60891e7a52aff0cb19582fe96)()|Gets the value of Expiration_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpiration](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a41500509f91eaaa0659b1d40c038eb0b)()|Gets the value of Expiration_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpiration](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1aadf3d0a157498122a8794f504bbcf770)(const FDateTime & DefaultValue)|Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExpiration](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a0fc25026a69be9341c05a89894121eec)(FDateTime & OutValue)|Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetExpirationOrNull](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a866067dfa68137f91940de9ab1499d40)()|Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetExpirationOrNull](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a09ebfb37388cad70e5d94da468bf3c08)()|Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExpiration](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a6ac12c65ddd67ce353226d6acf29e559)(FDateTime NewValue)|Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.|
|void|[ClearExpiration](/unreal-plugins/all/structfrhapi__restriction/#structFRHAPI__Restriction_1a0d5fdc4f552874f065336b803cef5eb3)()|Clears the value of Expiration_Optional and sets Expiration_IsSet to false.|
## Public Attributes



### `Type` <a id="structFRHAPI__Restriction_1a4563f4ef4361eacf1e83acde5aa9e9b1"></a>

`ERHAPI_RestrictionType FRHAPI_Restriction::Type`

Type of restriction.




### `Reason_Optional` <a id="structFRHAPI__Restriction_1acb07c004735610b31b0326e85867841f"></a>

`FString FRHAPI_Restriction::Reason_Optional`

Reason the restriction was applied.




### `Reason_IsSet` <a id="structFRHAPI__Restriction_1a33efc2fe715a3c3ee06ec148ab82a239"></a>

`bool FRHAPI_Restriction::Reason_IsSet`

true if Reason_Optional has been set to a value




### `Expiration_Optional` <a id="structFRHAPI__Restriction_1aa9e2bfa5e8c955b12b209034e64c5e57"></a>

`FDateTime FRHAPI_Restriction::Expiration_Optional`

Date the restriction expires. Null means the restriction is permanent.




### `Expiration_IsSet` <a id="structFRHAPI__Restriction_1ae0bb6d1bcce99870a53bd773b2740cf2"></a>

`bool FRHAPI_Restriction::Expiration_IsSet`

true if Expiration_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Restriction_1a5a03667bdf37bfdf85209ed872024579"></a>

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



### `WriteJson` <a id="structFRHAPI__Restriction_1ad9b9b26c7c642e5d5c0d08fb4625a43f"></a>

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



### `GetType` <a id="structFRHAPI__Restriction_1a3b9f455e0c867bfd7754103ecc9e7ba7"></a>

ERHAPI_RestrictionType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `GetType` <a id="structFRHAPI__Restriction_1a591e500a3661de66229c5f1ba7724435"></a>

const ERHAPI_RestrictionType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `SetType` <a id="structFRHAPI__Restriction_1aa8c1f024b4049bac6c1241a6cdaeddad"></a>

void SetType(ERHAPI_RestrictionType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_RestrictionType|NewValue|

#### Description

Sets the value of Type.




### `GetReason` <a id="structFRHAPI__Restriction_1a182cbbe5278382533d8c8ba1929a35bf"></a>

FString & GetReason()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Reason_Optional, regardless of it having been set.




### `GetReason` <a id="structFRHAPI__Restriction_1a531a35039b7dec535cd8ad7c84d066bb"></a>

const FString & GetReason()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Reason_Optional, regardless of it having been set.




### `GetReason` <a id="structFRHAPI__Restriction_1afe82ab3fd779eb1d73b537f733ba6bc0"></a>

const FString & GetReason(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetReason` <a id="structFRHAPI__Restriction_1a560c7de16a3a9e8ae18c7f200d34104f"></a>

bool GetReason(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.




### `GetReasonOrNull` <a id="structFRHAPI__Restriction_1a580cc0f156b36849c2bdf786383a9b65"></a>

FString * GetReasonOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.




### `GetReasonOrNull` <a id="structFRHAPI__Restriction_1a6b62ccb570a792b511846846be454f02"></a>

const FString * GetReasonOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.




### `SetReason` <a id="structFRHAPI__Restriction_1ac50ac97764b8e3d0c121c7f8b22024e7"></a>

void SetReason(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Reason_Optional and also sets Reason_IsSet to true.




### `ClearReason` <a id="structFRHAPI__Restriction_1a7d50b5b72086bb552c7a73c2acd0dd2c"></a>

void ClearReason()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Reason_Optional and sets Reason_IsSet to false.




### `GetExpiration` <a id="structFRHAPI__Restriction_1a9de96ed60891e7a52aff0cb19582fe96"></a>

FDateTime & GetExpiration()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expiration_Optional, regardless of it having been set.




### `GetExpiration` <a id="structFRHAPI__Restriction_1a41500509f91eaaa0659b1d40c038eb0b"></a>

const FDateTime & GetExpiration()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expiration_Optional, regardless of it having been set.




### `GetExpiration` <a id="structFRHAPI__Restriction_1aadf3d0a157498122a8794f504bbcf770"></a>

const FDateTime & GetExpiration(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExpiration` <a id="structFRHAPI__Restriction_1a0fc25026a69be9341c05a89894121eec"></a>

bool GetExpiration(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.




### `GetExpirationOrNull` <a id="structFRHAPI__Restriction_1a866067dfa68137f91940de9ab1499d40"></a>

FDateTime * GetExpirationOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.




### `GetExpirationOrNull` <a id="structFRHAPI__Restriction_1a09ebfb37388cad70e5d94da468bf3c08"></a>

const FDateTime * GetExpirationOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.




### `SetExpiration` <a id="structFRHAPI__Restriction_1a6ac12c65ddd67ce353226d6acf29e559"></a>

void SetExpiration(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.




### `ClearExpiration` <a id="structFRHAPI__Restriction_1a0d5fdc4f552874f065336b803cef5eb3"></a>

void ClearExpiration()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Expiration_Optional and sets Expiration_IsSet to false.





