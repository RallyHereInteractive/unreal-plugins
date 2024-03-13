---
title: FRHAPI_InventoryRecord Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Inventory Record for a Player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[InventoryId](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a3066d9f5f0c8542ce6c146c8bffe52d7)|Unique ID for this Inventory Record.|
|ERHAPI_InventoryType|[Type](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1ad1d64f8daeb1c6134e82c777a84d8d88)|Type of Inventory Record.|
|int64|[LegacyInventoryId_Optional](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1aa0f620a4a9e126d8396a710071523a79)|Legacy Inventory ID.|
|bool|[LegacyInventoryId_IsSet](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1add59aa8246c622850361c5ab462c115f)|true if LegacyInventoryId_Optional has been set to a value|
|ERHAPI_InventoryBucket|[Bucket_Optional](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a11fead5ff19c7fcb7daa91dfac137c6c)|Bucket for this Inventory Record.|
|bool|[Bucket_IsSet](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a47df941858f320dcb7e7f558562838b7)|true if Bucket_Optional has been set to a value|
|int32|[Count](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1aec2fa3f8808055381e28fa978221cb3c)|Instance count for this Inventory Record.|
|FDateTime|[Acquired](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1af556a5b7250364999456be5869d542d2)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|FDateTime|[Expires_Optional](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a7e8064cb82896b8a7b9d86c1643f10db)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[Expires_IsSet](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1abf43a037e93daea3697d69dfc7934661)|true if Expires_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a696afe05e8ced2be8839d4d5af228d8d)|Arbitrary map of data for this Inventory Record.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a9dc9fa9ebdd2679071fb816b57a17384)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a10e72b7ebba9fa0e15d29318a9fa7705)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a507d662df00fd0187e69a3cb3e6487cf)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetInventoryId](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a94bb21199671283b41bfb6f26819da4b)()|Gets the value of InventoryId.|
|const FGuid &|[GetInventoryId](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a80004630cabe078cd5b608f3a7027827)()|Gets the value of InventoryId.|
|void|[SetInventoryId](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1aa0c70d6354e9fa93f9bbfcee853439c2)(FGuid NewValue)|Sets the value of InventoryId.|
|ERHAPI_InventoryType &|[GetType](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a5ca30fb5643ffe145ac7b58e374c9b1e)()|Gets the value of Type.|
|const ERHAPI_InventoryType &|[GetType](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1ab435243d849a30b353f05a2de80ef9a5)()|Gets the value of Type.|
|void|[SetType](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1adc58676d2d90f112efaf4558a479b733)(ERHAPI_InventoryType NewValue)|Sets the value of Type.|
|int64 &|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1aa41c67f28495b9569a418e4a7842ed44)()|Gets the value of LegacyInventoryId_Optional, regardless of it having been set.|
|const int64 &|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a560edee90d67d6eaf21c45de6903eea8)()|Gets the value of LegacyInventoryId_Optional, regardless of it having been set.|
|const int64 &|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1ae307f6d3053dd439c1d1e0175ffbc31e)(const int64 & DefaultValue)|Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a924fee5b96ce7a27ce78f2ca22fb53ce)(int64 & OutValue)|Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.|
|int64 *|[GetLegacyInventoryIdOrNull](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a13eb2be839a080301957a145e9ecdc1d)()|Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.|
|const int64 *|[GetLegacyInventoryIdOrNull](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1ab330a1aeb4b84d7c0b60844c4db3020a)()|Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLegacyInventoryId](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a502e9a3d7d98036f0f9ac647db3d3a9b)(int64 NewValue)|Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.|
|void|[ClearLegacyInventoryId](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1aaf472c325358c57db16dd0f9ebf59d92)()|Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.|
|bool|[IsLegacyInventoryIdDefaultValue](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a5e6439100c244b919e743144ab3955f9)()|Returns true if LegacyInventoryId_Optional is set and matches the default value.|
|void|[SetLegacyInventoryIdToDefault](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a8c218ecf9118863b1763fc91d1d224da)()|Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.|
|ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a86d117f09a70be7dbea3798b492440af)()|Gets the value of Bucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1ada4e475abcd8cb4c84b0d1dccac02539)()|Gets the value of Bucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a56571aceda540c4788f2ac6b9c5d189f)(const ERHAPI_InventoryBucket & DefaultValue)|Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetBucket](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a26cf9d02b0b0461d4f8985b678ba7984)(ERHAPI_InventoryBucket & OutValue)|Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryBucket *|[GetBucketOrNull](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a2d52f44b7f2e8d56ec75d785eaa1c1a2)()|Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryBucket *|[GetBucketOrNull](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a39bc8c4912fbb1e08d5e3b423b8bc38e)()|Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetBucket](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1ad3c6cd3cf2e373f5024845ba89fb1255)(ERHAPI_InventoryBucket NewValue)|Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.|
|void|[ClearBucket](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1ab17dce2e9f368e3fc89f9830d1e6c6c9)()|Clears the value of Bucket_Optional and sets Bucket_IsSet to false.|
|int32 &|[GetCount](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a113ae247db921a17a2d6da8fef790af6)()|Gets the value of Count.|
|const int32 &|[GetCount](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a88dd0330bbda1b30f07284c4e8d1aaa7)()|Gets the value of Count.|
|void|[SetCount](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a291ed91859cbe8c4a09d1571a8676552)(int32 NewValue)|Sets the value of Count.|
|bool|[IsCountDefaultValue](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a34f33c463881190a246dc0fa8018a5c9)()|Returns true if Count matches the default value.|
|void|[SetCountToDefault](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a2e3d6d0ddecafa323bc6fe91806ffda2)()|Sets the value of Count to its default|
|FDateTime &|[GetAcquired](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1ab7cdf8d762ea462bafcf6afb5a5da157)()|Gets the value of Acquired.|
|const FDateTime &|[GetAcquired](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a94959f164b05716b82795d7f3bd11f02)()|Gets the value of Acquired.|
|void|[SetAcquired](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a9d28cce12b3de288b1d4d688bc23a394)(FDateTime NewValue)|Sets the value of Acquired.|
|FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a2984a315e1787dc9340e6eed9d77d6ba)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a4945117e4341c26b44c528415714ca8d)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a01c2479e453ed5e15d6dc9a034387e68)(const FDateTime & DefaultValue)|Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExpires](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a1e7b15dbbf77d1f5bb180da2ae13a0f4)(FDateTime & OutValue)|Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1af8dccf708e058fbf2600546d32d42ec0)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a6ab1e15b4ae07928318bdf010f263fac)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExpires](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1ab8a9d31b883900a6ba991eb8e3f57d5f)(FDateTime NewValue)|Sets the value of Expires_Optional and also sets Expires_IsSet to true.|
|void|[ClearExpires](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a54ea52c0937d7f5df39a63e308800bad)()|Clears the value of Expires_Optional and sets Expires_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1adffbd7516ddcd9927933676864699c95)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1aa4687c79bc3956291cc24688c8fd351a)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1ad961452f6d97b614413c4a51d71c1165)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a4c02526a4d51a60841a90cd696d9a0e0)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1aee39f13ca4edbf16b673dcb729e91d0d)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1adfc7d677db6c3ca01b84a45e72720342)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1a4d512c49c6baa3295b90513f8cbe17a8)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord_1adef59732fd95e39cd8699d8fae251ec7)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `InventoryId` <a id="structFRHAPI__InventoryRecord_1a3066d9f5f0c8542ce6c146c8bffe52d7"></a>

`FGuid FRHAPI_InventoryRecord::InventoryId`

Unique ID for this Inventory Record.




### `Type` <a id="structFRHAPI__InventoryRecord_1ad1d64f8daeb1c6134e82c777a84d8d88"></a>

`ERHAPI_InventoryType FRHAPI_InventoryRecord::Type`

Type of Inventory Record.




### `LegacyInventoryId_Optional` <a id="structFRHAPI__InventoryRecord_1aa0f620a4a9e126d8396a710071523a79"></a>

`int64 FRHAPI_InventoryRecord::LegacyInventoryId_Optional`

Legacy Inventory ID.




### `LegacyInventoryId_IsSet` <a id="structFRHAPI__InventoryRecord_1add59aa8246c622850361c5ab462c115f"></a>

`bool FRHAPI_InventoryRecord::LegacyInventoryId_IsSet`

true if LegacyInventoryId_Optional has been set to a value




### `Bucket_Optional` <a id="structFRHAPI__InventoryRecord_1a11fead5ff19c7fcb7daa91dfac137c6c"></a>

`ERHAPI_InventoryBucket FRHAPI_InventoryRecord::Bucket_Optional`

Bucket for this Inventory Record.




### `Bucket_IsSet` <a id="structFRHAPI__InventoryRecord_1a47df941858f320dcb7e7f558562838b7"></a>

`bool FRHAPI_InventoryRecord::Bucket_IsSet`

true if Bucket_Optional has been set to a value




### `Count` <a id="structFRHAPI__InventoryRecord_1aec2fa3f8808055381e28fa978221cb3c"></a>

`int32 FRHAPI_InventoryRecord::Count`

Instance count for this Inventory Record.




### `Acquired` <a id="structFRHAPI__InventoryRecord_1af556a5b7250364999456be5869d542d2"></a>

`FDateTime FRHAPI_InventoryRecord::Acquired`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `Expires_Optional` <a id="structFRHAPI__InventoryRecord_1a7e8064cb82896b8a7b9d86c1643f10db"></a>

`FDateTime FRHAPI_InventoryRecord::Expires_Optional`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `Expires_IsSet` <a id="structFRHAPI__InventoryRecord_1abf43a037e93daea3697d69dfc7934661"></a>

`bool FRHAPI_InventoryRecord::Expires_IsSet`

true if Expires_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__InventoryRecord_1a696afe05e8ced2be8839d4d5af228d8d"></a>

`TMap<FString, FString> FRHAPI_InventoryRecord::CustomData_Optional`

Arbitrary map of data for this Inventory Record.




### `CustomData_IsSet` <a id="structFRHAPI__InventoryRecord_1a9dc9fa9ebdd2679071fb816b57a17384"></a>

`bool FRHAPI_InventoryRecord::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InventoryRecord_1a10e72b7ebba9fa0e15d29318a9fa7705"></a>

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



### `WriteJson` <a id="structFRHAPI__InventoryRecord_1a507d662df00fd0187e69a3cb3e6487cf"></a>

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



### `GetInventoryId` <a id="structFRHAPI__InventoryRecord_1a94bb21199671283b41bfb6f26819da4b"></a>

FGuid & GetInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryId.




### `GetInventoryId` <a id="structFRHAPI__InventoryRecord_1a80004630cabe078cd5b608f3a7027827"></a>

const FGuid & GetInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryId.




### `SetInventoryId` <a id="structFRHAPI__InventoryRecord_1aa0c70d6354e9fa93f9bbfcee853439c2"></a>

void SetInventoryId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of InventoryId.




### `GetType` <a id="structFRHAPI__InventoryRecord_1a5ca30fb5643ffe145ac7b58e374c9b1e"></a>

ERHAPI_InventoryType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `GetType` <a id="structFRHAPI__InventoryRecord_1ab435243d849a30b353f05a2de80ef9a5"></a>

const ERHAPI_InventoryType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `SetType` <a id="structFRHAPI__InventoryRecord_1adc58676d2d90f112efaf4558a479b733"></a>

void SetType(ERHAPI_InventoryType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryType|NewValue|

#### Description

Sets the value of Type.




### `GetLegacyInventoryId` <a id="structFRHAPI__InventoryRecord_1aa41c67f28495b9569a418e4a7842ed44"></a>

int64 & GetLegacyInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.




### `GetLegacyInventoryId` <a id="structFRHAPI__InventoryRecord_1a560edee90d67d6eaf21c45de6903eea8"></a>

const int64 & GetLegacyInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.




### `GetLegacyInventoryId` <a id="structFRHAPI__InventoryRecord_1ae307f6d3053dd439c1d1e0175ffbc31e"></a>

const int64 & GetLegacyInventoryId(const int64 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int64 &|DefaultValue|

#### Description

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLegacyInventoryId` <a id="structFRHAPI__InventoryRecord_1a924fee5b96ce7a27ce78f2ca22fb53ce"></a>

bool GetLegacyInventoryId(int64 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int64 &|OutValue|

#### Description

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.




### `GetLegacyInventoryIdOrNull` <a id="structFRHAPI__InventoryRecord_1a13eb2be839a080301957a145e9ecdc1d"></a>

int64 * GetLegacyInventoryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.




### `GetLegacyInventoryIdOrNull` <a id="structFRHAPI__InventoryRecord_1ab330a1aeb4b84d7c0b60844c4db3020a"></a>

const int64 * GetLegacyInventoryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.




### `SetLegacyInventoryId` <a id="structFRHAPI__InventoryRecord_1a502e9a3d7d98036f0f9ac647db3d3a9b"></a>

void SetLegacyInventoryId(int64 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int64|NewValue|

#### Description

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.




### `ClearLegacyInventoryId` <a id="structFRHAPI__InventoryRecord_1aaf472c325358c57db16dd0f9ebf59d92"></a>

void ClearLegacyInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.




### `IsLegacyInventoryIdDefaultValue` <a id="structFRHAPI__InventoryRecord_1a5e6439100c244b919e743144ab3955f9"></a>

bool IsLegacyInventoryIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LegacyInventoryId_Optional is set and matches the default value.




### `SetLegacyInventoryIdToDefault` <a id="structFRHAPI__InventoryRecord_1a8c218ecf9118863b1763fc91d1d224da"></a>

void SetLegacyInventoryIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.




### `GetBucket` <a id="structFRHAPI__InventoryRecord_1a86d117f09a70be7dbea3798b492440af"></a>

ERHAPI_InventoryBucket & GetBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Bucket_Optional, regardless of it having been set.




### `GetBucket` <a id="structFRHAPI__InventoryRecord_1ada4e475abcd8cb4c84b0d1dccac02539"></a>

const ERHAPI_InventoryBucket & GetBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Bucket_Optional, regardless of it having been set.




### `GetBucket` <a id="structFRHAPI__InventoryRecord_1a56571aceda540c4788f2ac6b9c5d189f"></a>

const ERHAPI_InventoryBucket & GetBucket(const ERHAPI_InventoryBucket & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryBucket &|DefaultValue|

#### Description

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetBucket` <a id="structFRHAPI__InventoryRecord_1a26cf9d02b0b0461d4f8985b678ba7984"></a>

bool GetBucket(ERHAPI_InventoryBucket & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket &|OutValue|

#### Description

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.




### `GetBucketOrNull` <a id="structFRHAPI__InventoryRecord_1a2d52f44b7f2e8d56ec75d785eaa1c1a2"></a>

ERHAPI_InventoryBucket * GetBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.




### `GetBucketOrNull` <a id="structFRHAPI__InventoryRecord_1a39bc8c4912fbb1e08d5e3b423b8bc38e"></a>

const ERHAPI_InventoryBucket * GetBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.




### `SetBucket` <a id="structFRHAPI__InventoryRecord_1ad3c6cd3cf2e373f5024845ba89fb1255"></a>

void SetBucket(ERHAPI_InventoryBucket NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket|NewValue|

#### Description

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.




### `ClearBucket` <a id="structFRHAPI__InventoryRecord_1ab17dce2e9f368e3fc89f9830d1e6c6c9"></a>

void ClearBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.




### `GetCount` <a id="structFRHAPI__InventoryRecord_1a113ae247db921a17a2d6da8fef790af6"></a>

int32 & GetCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Count.




### `GetCount` <a id="structFRHAPI__InventoryRecord_1a88dd0330bbda1b30f07284c4e8d1aaa7"></a>

const int32 & GetCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Count.




### `SetCount` <a id="structFRHAPI__InventoryRecord_1a291ed91859cbe8c4a09d1571a8676552"></a>

void SetCount(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Count.




### `IsCountDefaultValue` <a id="structFRHAPI__InventoryRecord_1a34f33c463881190a246dc0fa8018a5c9"></a>

bool IsCountDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Count matches the default value.




### `SetCountToDefault` <a id="structFRHAPI__InventoryRecord_1a2e3d6d0ddecafa323bc6fe91806ffda2"></a>

void SetCountToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Count to its default




### `GetAcquired` <a id="structFRHAPI__InventoryRecord_1ab7cdf8d762ea462bafcf6afb5a5da157"></a>

FDateTime & GetAcquired()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Acquired.




### `GetAcquired` <a id="structFRHAPI__InventoryRecord_1a94959f164b05716b82795d7f3bd11f02"></a>

const FDateTime & GetAcquired()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Acquired.




### `SetAcquired` <a id="structFRHAPI__InventoryRecord_1a9d28cce12b3de288b1d4d688bc23a394"></a>

void SetAcquired(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Acquired.




### `GetExpires` <a id="structFRHAPI__InventoryRecord_1a2984a315e1787dc9340e6eed9d77d6ba"></a>

FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__InventoryRecord_1a4945117e4341c26b44c528415714ca8d"></a>

const FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__InventoryRecord_1a01c2479e453ed5e15d6dc9a034387e68"></a>

const FDateTime & GetExpires(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExpires` <a id="structFRHAPI__InventoryRecord_1a1e7b15dbbf77d1f5bb180da2ae13a0f4"></a>

bool GetExpires(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.




### `GetExpiresOrNull` <a id="structFRHAPI__InventoryRecord_1af8dccf708e058fbf2600546d32d42ec0"></a>

FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `GetExpiresOrNull` <a id="structFRHAPI__InventoryRecord_1a6ab1e15b4ae07928318bdf010f263fac"></a>

const FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `SetExpires` <a id="structFRHAPI__InventoryRecord_1ab8a9d31b883900a6ba991eb8e3f57d5f"></a>

void SetExpires(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Expires_Optional and also sets Expires_IsSet to true.




### `ClearExpires` <a id="structFRHAPI__InventoryRecord_1a54ea52c0937d7f5df39a63e308800bad"></a>

void ClearExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Expires_Optional and sets Expires_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__InventoryRecord_1adffbd7516ddcd9927933676864699c95"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InventoryRecord_1aa4687c79bc3956291cc24688c8fd351a"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InventoryRecord_1ad961452f6d97b614413c4a51d71c1165"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__InventoryRecord_1a4c02526a4d51a60841a90cd696d9a0e0"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__InventoryRecord_1aee39f13ca4edbf16b673dcb729e91d0d"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__InventoryRecord_1adfc7d677db6c3ca01b84a45e72720342"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__InventoryRecord_1a4d512c49c6baa3295b90513f8cbe17a8"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__InventoryRecord_1adef59732fd95e39cd8699d8fae251ec7"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





