---
title: FRHAPI_CreateInventoryRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Request to Create a new Inventory.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_InventoryBucket|[Bucket_Optional](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a76f5a8d3c702966a17c7bc29e675ddf3)|Inventory Bucket for this Inventory Operation.|
|bool|[Bucket_IsSet](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a2ce32e4645f8267d3265ecb9b0cd77c4)|true if Bucket_Optional has been set to a value|
|int32|[Count_Optional](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1add764394cc2dc70fd1735a5e32cf42c7)|Count for this Inventory Operation.|
|bool|[Count_IsSet](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a6b47666c8a735bd51280663d72724e74)|true if Count_Optional has been set to a value|
|FDateTime|[Expires_Optional](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a41f1a997e28f8be5e66e682eb1332e7f)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[Expires_IsSet](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ae7761ce45a85554d147a84c729dfbdbc)|true if Expires_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1aa8b9cc39c3c1663ffc28e082263bd1a6)|Arbitrary data map that can be set to add additional data to Inventory.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1aab3c76b73ebab73dff0bb8caefe3b94c)|true if CustomData_Optional has been set to a value|
|int32|[ItemId](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ac1d6ef6e996f613b1de9891c10f9a5e6)||
|ERHAPI_CreateInventoryType|[Type_Optional](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a6b9eee826b685cd1dc669c98fb789719)||
|bool|[Type_IsSet](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a75960a6ec28c5652a2c70632c5e792bc)|true if Type_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ab09eb4d0768d95c9f03d22a97e5378b7)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a35c9fbf757c3217424a69a6af9f122ad)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a5029963fc3d9d06df3d40f4273c0515c)()|Gets the value of Bucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ad6c16e1d4e2fd6020cb5504dc9cde26a)()|Gets the value of Bucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a6ace80d17635daae06a26bc881620707)(const ERHAPI_InventoryBucket & DefaultValue)|Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetBucket](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1aa354de4886ec678357f6cfc0e3ca3d49)(ERHAPI_InventoryBucket & OutValue)|Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryBucket *|[GetBucketOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1af7c119e4466f936fc4e8df9bd33b2313)()|Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryBucket *|[GetBucketOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ac38e53ed4482b6937813e4d6d010c89b)()|Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetBucket](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a045fdd5e1be635d26a9307465354cf95)(ERHAPI_InventoryBucket NewValue)|Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.|
|void|[ClearBucket](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1af65d524d1fbd31b78cc01906c4664452)()|Clears the value of Bucket_Optional and sets Bucket_IsSet to false.|
|int32 &|[GetCount](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1aed4ce64e9f74edc358e2de99555da03e)()|Gets the value of Count_Optional, regardless of it having been set.|
|const int32 &|[GetCount](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a4b00e34df116d13c5f248c5882f695bf)()|Gets the value of Count_Optional, regardless of it having been set.|
|const int32 &|[GetCount](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a34c050fa6fe6977f8a1ed28719118cf7)(const int32 & DefaultValue)|Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCount](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1aa0ef4d427acc8c8e2a85b4afbcbf81ad)(int32 & OutValue)|Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetCountOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a29ddbb909f9e47a13ed0ae139006a5b8)()|Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetCountOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ad02e50234f2f3103cf3d2537a671c411)()|Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCount](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a922ef8ef30fcdd98403ef14a7d4ba351)(int32 NewValue)|Sets the value of Count_Optional and also sets Count_IsSet to true.|
|void|[ClearCount](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ab05cf66c182dabecdcd0531b3c66ff22)()|Clears the value of Count_Optional and sets Count_IsSet to false.|
|bool|[IsCountDefaultValue](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a4a80312cc1071de3f6cc54e0c7c3cfed)()|Returns true if Count_Optional is set and matches the default value.|
|void|[SetCountToDefault](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a388643174109779fe3dd3232304cf0a0)()|Sets the value of Count_Optional to its default and also sets Count_IsSet to true.|
|FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a05bae93ed2e0b6930924ad1b8685cf56)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a56077cba75f09242a38a3a9fa7ad4cf4)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ae91fe7b2fed22e36b094ca9506898597)(const FDateTime & DefaultValue)|Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExpires](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ab11ebe9f2134abb2b06a583117407871)(FDateTime & OutValue)|Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1af187cf86cc66df999cd4d44d56cae635)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a8fd750573443f58627a685a0e65aa970)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExpires](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a5718a3c06768f394ac8fde77b5965468)(FDateTime NewValue)|Sets the value of Expires_Optional and also sets Expires_IsSet to true.|
|void|[ClearExpires](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a3ed93883ede8b9a88228ab07bcbc08e1)()|Clears the value of Expires_Optional and sets Expires_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ae691355f886faefae07d9ddf37ca3a94)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1acae54ed4cd8680a36bda32ea6c2e66a9)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a23cc7e8e589b777d91848487845b282d)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1acf66285ff1cc76a356de7fcef50d524b)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ac994aa227aec7ccb1baa62a5462f49a6)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a573a54ec4b1c9a8655b0ac457797bf30)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a65d051f9eefd5a537e74aa195180ac30)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a1c28b8945d132420bcf24dbf79d90ae2)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a14a1819d0334533246ac6f6f3eee5673)()|Gets the value of ItemId.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a43320c01fd8c61d0da8941562f779a06)()|Gets the value of ItemId.|
|void|[SetItemId](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1ad6e611525ed0f2133ae300a262cbf82f)(int32 NewValue)|Sets the value of ItemId.|
|bool|[IsItemIdDefaultValue](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1aa452bb255788043b352a2f834ad56fb5)()|Returns true if ItemId matches the default value.|
|void|[SetItemIdToDefault](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a76b10a0b5195cae811f70705445db116)()|Sets the value of ItemId to its default|
|ERHAPI_CreateInventoryType &|[GetType](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a7e409aa5a911abeb9a555cbdc0ef97e1)()|Gets the value of Type_Optional, regardless of it having been set.|
|const ERHAPI_CreateInventoryType &|[GetType](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a973a840c195f48fcb06454669a9911c6)()|Gets the value of Type_Optional, regardless of it having been set.|
|const ERHAPI_CreateInventoryType &|[GetType](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a64db54556a74b8dbfba6d19f468e2e5b)(const ERHAPI_CreateInventoryType & DefaultValue)|Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetType](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a2f942c7682092c2d6b4d9c2e1048bbf1)(ERHAPI_CreateInventoryType & OutValue)|Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_CreateInventoryType *|[GetTypeOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1af8a45272863173f952f0cb7e325b8a0a)()|Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_CreateInventoryType *|[GetTypeOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1aaada712b2ec0f8e231ef3bc2e91c6a7b)()|Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetType](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1aef8ae330863b5cd5d64cf0997b225555)(ERHAPI_CreateInventoryType NewValue)|Sets the value of Type_Optional and also sets Type_IsSet to true.|
|void|[ClearType](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest_1a2dd897e1570b1b1cf4803f48f9e15759)()|Clears the value of Type_Optional and sets Type_IsSet to false.|
## Public Attributes



### `Bucket_Optional` <a id="structFRHAPI__CreateInventoryRequest_1a76f5a8d3c702966a17c7bc29e675ddf3"></a>

`ERHAPI_InventoryBucket FRHAPI_CreateInventoryRequest::Bucket_Optional`

Inventory Bucket for this Inventory Operation.




### `Bucket_IsSet` <a id="structFRHAPI__CreateInventoryRequest_1a2ce32e4645f8267d3265ecb9b0cd77c4"></a>

`bool FRHAPI_CreateInventoryRequest::Bucket_IsSet`

true if Bucket_Optional has been set to a value




### `Count_Optional` <a id="structFRHAPI__CreateInventoryRequest_1add764394cc2dc70fd1735a5e32cf42c7"></a>

`int32 FRHAPI_CreateInventoryRequest::Count_Optional`

Count for this Inventory Operation.




### `Count_IsSet` <a id="structFRHAPI__CreateInventoryRequest_1a6b47666c8a735bd51280663d72724e74"></a>

`bool FRHAPI_CreateInventoryRequest::Count_IsSet`

true if Count_Optional has been set to a value




### `Expires_Optional` <a id="structFRHAPI__CreateInventoryRequest_1a41f1a997e28f8be5e66e682eb1332e7f"></a>

`FDateTime FRHAPI_CreateInventoryRequest::Expires_Optional`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `Expires_IsSet` <a id="structFRHAPI__CreateInventoryRequest_1ae7761ce45a85554d147a84c729dfbdbc"></a>

`bool FRHAPI_CreateInventoryRequest::Expires_IsSet`

true if Expires_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__CreateInventoryRequest_1aa8b9cc39c3c1663ffc28e082263bd1a6"></a>

`TMap<FString, FString> FRHAPI_CreateInventoryRequest::CustomData_Optional`

Arbitrary data map that can be set to add additional data to Inventory.




### `CustomData_IsSet` <a id="structFRHAPI__CreateInventoryRequest_1aab3c76b73ebab73dff0bb8caefe3b94c"></a>

`bool FRHAPI_CreateInventoryRequest::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `ItemId` <a id="structFRHAPI__CreateInventoryRequest_1ac1d6ef6e996f613b1de9891c10f9a5e6"></a>

`int32 FRHAPI_CreateInventoryRequest::ItemId`






### `Type_Optional` <a id="structFRHAPI__CreateInventoryRequest_1a6b9eee826b685cd1dc669c98fb789719"></a>

`ERHAPI_CreateInventoryType FRHAPI_CreateInventoryRequest::Type_Optional`






### `Type_IsSet` <a id="structFRHAPI__CreateInventoryRequest_1a75960a6ec28c5652a2c70632c5e792bc"></a>

`bool FRHAPI_CreateInventoryRequest::Type_IsSet`

true if Type_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__CreateInventoryRequest_1ab09eb4d0768d95c9f03d22a97e5378b7"></a>

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



### `WriteJson` <a id="structFRHAPI__CreateInventoryRequest_1a35c9fbf757c3217424a69a6af9f122ad"></a>

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



### `GetBucket` <a id="structFRHAPI__CreateInventoryRequest_1a5029963fc3d9d06df3d40f4273c0515c"></a>

ERHAPI_InventoryBucket & GetBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Bucket_Optional, regardless of it having been set.




### `GetBucket` <a id="structFRHAPI__CreateInventoryRequest_1ad6c16e1d4e2fd6020cb5504dc9cde26a"></a>

const ERHAPI_InventoryBucket & GetBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Bucket_Optional, regardless of it having been set.




### `GetBucket` <a id="structFRHAPI__CreateInventoryRequest_1a6ace80d17635daae06a26bc881620707"></a>

const ERHAPI_InventoryBucket & GetBucket(const ERHAPI_InventoryBucket & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryBucket &|DefaultValue|

#### Description

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetBucket` <a id="structFRHAPI__CreateInventoryRequest_1aa354de4886ec678357f6cfc0e3ca3d49"></a>

bool GetBucket(ERHAPI_InventoryBucket & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket &|OutValue|

#### Description

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.




### `GetBucketOrNull` <a id="structFRHAPI__CreateInventoryRequest_1af7c119e4466f936fc4e8df9bd33b2313"></a>

ERHAPI_InventoryBucket * GetBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.




### `GetBucketOrNull` <a id="structFRHAPI__CreateInventoryRequest_1ac38e53ed4482b6937813e4d6d010c89b"></a>

const ERHAPI_InventoryBucket * GetBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.




### `SetBucket` <a id="structFRHAPI__CreateInventoryRequest_1a045fdd5e1be635d26a9307465354cf95"></a>

void SetBucket(ERHAPI_InventoryBucket NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket|NewValue|

#### Description

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.




### `ClearBucket` <a id="structFRHAPI__CreateInventoryRequest_1af65d524d1fbd31b78cc01906c4664452"></a>

void ClearBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.




### `GetCount` <a id="structFRHAPI__CreateInventoryRequest_1aed4ce64e9f74edc358e2de99555da03e"></a>

int32 & GetCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Count_Optional, regardless of it having been set.




### `GetCount` <a id="structFRHAPI__CreateInventoryRequest_1a4b00e34df116d13c5f248c5882f695bf"></a>

const int32 & GetCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Count_Optional, regardless of it having been set.




### `GetCount` <a id="structFRHAPI__CreateInventoryRequest_1a34c050fa6fe6977f8a1ed28719118cf7"></a>

const int32 & GetCount(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCount` <a id="structFRHAPI__CreateInventoryRequest_1aa0ef4d427acc8c8e2a85b4afbcbf81ad"></a>

bool GetCount(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.




### `GetCountOrNull` <a id="structFRHAPI__CreateInventoryRequest_1a29ddbb909f9e47a13ed0ae139006a5b8"></a>

int32 * GetCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.




### `GetCountOrNull` <a id="structFRHAPI__CreateInventoryRequest_1ad02e50234f2f3103cf3d2537a671c411"></a>

const int32 * GetCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.




### `SetCount` <a id="structFRHAPI__CreateInventoryRequest_1a922ef8ef30fcdd98403ef14a7d4ba351"></a>

void SetCount(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Count_Optional and also sets Count_IsSet to true.




### `ClearCount` <a id="structFRHAPI__CreateInventoryRequest_1ab05cf66c182dabecdcd0531b3c66ff22"></a>

void ClearCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Count_Optional and sets Count_IsSet to false.




### `IsCountDefaultValue` <a id="structFRHAPI__CreateInventoryRequest_1a4a80312cc1071de3f6cc54e0c7c3cfed"></a>

bool IsCountDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Count_Optional is set and matches the default value.




### `SetCountToDefault` <a id="structFRHAPI__CreateInventoryRequest_1a388643174109779fe3dd3232304cf0a0"></a>

void SetCountToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Count_Optional to its default and also sets Count_IsSet to true.




### `GetExpires` <a id="structFRHAPI__CreateInventoryRequest_1a05bae93ed2e0b6930924ad1b8685cf56"></a>

FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__CreateInventoryRequest_1a56077cba75f09242a38a3a9fa7ad4cf4"></a>

const FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__CreateInventoryRequest_1ae91fe7b2fed22e36b094ca9506898597"></a>

const FDateTime & GetExpires(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExpires` <a id="structFRHAPI__CreateInventoryRequest_1ab11ebe9f2134abb2b06a583117407871"></a>

bool GetExpires(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.




### `GetExpiresOrNull` <a id="structFRHAPI__CreateInventoryRequest_1af187cf86cc66df999cd4d44d56cae635"></a>

FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `GetExpiresOrNull` <a id="structFRHAPI__CreateInventoryRequest_1a8fd750573443f58627a685a0e65aa970"></a>

const FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `SetExpires` <a id="structFRHAPI__CreateInventoryRequest_1a5718a3c06768f394ac8fde77b5965468"></a>

void SetExpires(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Expires_Optional and also sets Expires_IsSet to true.




### `ClearExpires` <a id="structFRHAPI__CreateInventoryRequest_1a3ed93883ede8b9a88228ab07bcbc08e1"></a>

void ClearExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Expires_Optional and sets Expires_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__CreateInventoryRequest_1ae691355f886faefae07d9ddf37ca3a94"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__CreateInventoryRequest_1acae54ed4cd8680a36bda32ea6c2e66a9"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__CreateInventoryRequest_1a23cc7e8e589b777d91848487845b282d"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__CreateInventoryRequest_1acf66285ff1cc76a356de7fcef50d524b"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__CreateInventoryRequest_1ac994aa227aec7ccb1baa62a5462f49a6"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__CreateInventoryRequest_1a573a54ec4b1c9a8655b0ac457797bf30"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__CreateInventoryRequest_1a65d051f9eefd5a537e74aa195180ac30"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__CreateInventoryRequest_1a1c28b8945d132420bcf24dbf79d90ae2"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetItemId` <a id="structFRHAPI__CreateInventoryRequest_1a14a1819d0334533246ac6f6f3eee5673"></a>

int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId.




### `GetItemId` <a id="structFRHAPI__CreateInventoryRequest_1a43320c01fd8c61d0da8941562f779a06"></a>

const int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId.




### `SetItemId` <a id="structFRHAPI__CreateInventoryRequest_1ad6e611525ed0f2133ae300a262cbf82f"></a>

void SetItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ItemId.




### `IsItemIdDefaultValue` <a id="structFRHAPI__CreateInventoryRequest_1aa452bb255788043b352a2f834ad56fb5"></a>

bool IsItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ItemId matches the default value.




### `SetItemIdToDefault` <a id="structFRHAPI__CreateInventoryRequest_1a76b10a0b5195cae811f70705445db116"></a>

void SetItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ItemId to its default




### `GetType` <a id="structFRHAPI__CreateInventoryRequest_1a7e409aa5a911abeb9a555cbdc0ef97e1"></a>

ERHAPI_CreateInventoryType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type_Optional, regardless of it having been set.




### `GetType` <a id="structFRHAPI__CreateInventoryRequest_1a973a840c195f48fcb06454669a9911c6"></a>

const ERHAPI_CreateInventoryType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type_Optional, regardless of it having been set.




### `GetType` <a id="structFRHAPI__CreateInventoryRequest_1a64db54556a74b8dbfba6d19f468e2e5b"></a>

const ERHAPI_CreateInventoryType & GetType(const ERHAPI_CreateInventoryType & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_CreateInventoryType &|DefaultValue|

#### Description

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetType` <a id="structFRHAPI__CreateInventoryRequest_1a2f942c7682092c2d6b4d9c2e1048bbf1"></a>

bool GetType(ERHAPI_CreateInventoryType & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_CreateInventoryType &|OutValue|

#### Description

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.




### `GetTypeOrNull` <a id="structFRHAPI__CreateInventoryRequest_1af8a45272863173f952f0cb7e325b8a0a"></a>

ERHAPI_CreateInventoryType * GetTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.




### `GetTypeOrNull` <a id="structFRHAPI__CreateInventoryRequest_1aaada712b2ec0f8e231ef3bc2e91c6a7b"></a>

const ERHAPI_CreateInventoryType * GetTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.




### `SetType` <a id="structFRHAPI__CreateInventoryRequest_1aef8ae330863b5cd5d64cf0997b225555"></a>

void SetType(ERHAPI_CreateInventoryType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_CreateInventoryType|NewValue|

#### Description

Sets the value of Type_Optional and also sets Type_IsSet to true.




### `ClearType` <a id="structFRHAPI__CreateInventoryRequest_1a2dd897e1570b1b1cf4803f48f9e15759"></a>

void ClearType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Type_Optional and sets Type_IsSet to false.





