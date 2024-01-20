---
title: FRHAPI_UpdateInventoryRequestById Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Request to Update Inventory by an existing Inventory ID. If the Inventory entry does not exist, then the request will fail.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_InventoryBucket|[Bucket_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a8ca857e89d25ca0e98daf13f06a6efab)|Inventory Bucket for this Inventory Operation.|
|bool|[Bucket_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ac41a3118be44c4165a398617c96162ea)|true if Bucket_Optional has been set to a value|
|int32|[Count_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a1954e9b67818fea34a60cc71e5490e5b)|Count for this Inventory Operation.|
|bool|[Count_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a753c17f614d56bf432f4d323856fdccc)|true if Count_Optional has been set to a value|
|FDateTime|[Expires_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a820cf3ed3654429b8872612c4ea91384)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[Expires_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ace18916ca2ca408374d528fc6103dc4c)|true if Expires_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a838980eda31d6b59b0695e043b32ee67)|Arbitrary data map that can be set to add additional data to Inventory.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ab4012dc2c645022e36c9906b69a9f31f)|true if CustomData_Optional has been set to a value|
|int32|[ItemId_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1af8e1b49c7470b5984d48561d1200ec4b)|Item ID for this Inventory Operation. If the Item ID is not set during an Update Inventory Request, then the Item ID will not be modified on the existing Inventory Record.|
|bool|[ItemId_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a712999a198bdf14ac4d070bd1e99e666)|true if ItemId_Optional has been set to a value|
|FGuid|[InventoryId](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a2e4d3a8ca23b5b42fb25a19ccb38ee1a)|Inventory ID for this Inventory Operation.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ab0062a9f74f5a5d4cdedd3ca6b448e9c)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a88f37aaafd03a697602eaeaaabec5a6e)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a3d1f226f198aa556a34cdbfccbc82703)()|Gets the value of Bucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a90b237f377d909868474ac8f301c7a43)()|Gets the value of Bucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1accbe0124275dff1ccf9fd82c75513b3d)(const ERHAPI_InventoryBucket & DefaultValue)|Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a9dea35372560f239b64f704a0831f4ec)(ERHAPI_InventoryBucket & OutValue)|Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryBucket *|[GetBucketOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a7f26bbf0e8e86317f8eb2fc990e356b3)()|Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryBucket *|[GetBucketOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ad141339f0e7cf51d2cbc1791642174da)()|Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a5e287009c77d6b78b939eec19b2ff9c2)(ERHAPI_InventoryBucket NewValue)|Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.|
|void|[ClearBucket](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ad14f798244ea05e8654e6e4cde09b9c5)()|Clears the value of Bucket_Optional and sets Bucket_IsSet to false.|
|int32 &|[GetCount](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ad82a9ff10932f26fcd34f691a51a7e87)()|Gets the value of Count_Optional, regardless of it having been set.|
|const int32 &|[GetCount](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a6cbd3d5e00dda12488bd94ffff40b322)()|Gets the value of Count_Optional, regardless of it having been set.|
|const int32 &|[GetCount](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1adcda0097ff437f3a13d7d52778380a34)(const int32 & DefaultValue)|Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCount](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a4f8325eb8c2b059b8a8fbf6fde474e51)(int32 & OutValue)|Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetCountOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1acd945c2489f644ab3b39e359c9d2021d)()|Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetCountOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ad800400bfaa195d5d767d0808cd45a2b)()|Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCount](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a054d75f882919d3bffe8f0bd51e5a085)(int32 NewValue)|Sets the value of Count_Optional and also sets Count_IsSet to true.|
|void|[ClearCount](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a4ba546d925732f3b22e323beca7b9ec0)()|Clears the value of Count_Optional and sets Count_IsSet to false.|
|bool|[IsCountDefaultValue](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a90101fd151d48e7c46e9d9953aa24a1b)()|Returns true if Count_Optional is set and matches the default value.|
|void|[SetCountToDefault](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a04e649028a20de8491d255c0f7c0385d)()|Sets the value of Count_Optional to its default and also sets Count_IsSet to true.|
|FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a7e1761fe92b77a8dede5a630572fc95e)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a2b5c32595322f04e5e059f20743f1df8)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a8dc5f11bbfb1017ea277e3867497def1)(const FDateTime & DefaultValue)|Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a4e61374be0f9a4d5bee7f8bb34180c1a)(FDateTime & OutValue)|Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1af2de3fa18fd06aabb4b5ce4b6290322f)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ab9933f2509fff182987f64b6a3ad969b)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1aa9f10f5260fe4b966265becdf792463c)(FDateTime NewValue)|Sets the value of Expires_Optional and also sets Expires_IsSet to true.|
|void|[ClearExpires](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a100dee7b13d8b702376d702ae8b0b324)()|Clears the value of Expires_Optional and sets Expires_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a65bbb901dc858c64401a790f9810f632)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a67e1e212d9e0c15ee2ad2d8a237e6219)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1adc9a7530c55b3c5b337994d9671092f9)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1aa86e4244165e0073b66dbda18617e98d)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1aa99744cb35d5f53f1a51ad73157bd4a0)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ad0c70e926eaed1a7e1663efa7c7bf1cd)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ab96fc73d47aa69fc0db8a7c7ffd2cb26)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a71e04e0947013cc2eca04cfd9c3f451f)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1ad15222f98ee6b86f870ddfabbcfb5d99)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a603fe7259da23822134fac2dcae2f94a)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1aa19f045bda4ac8b8680a099ab6410cf1)(const int32 & DefaultValue)|Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a6f8a2bf06a0dcf82469b313ef3c0b8e3)(int32 & OutValue)|Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a06583e83d7b50ce6ab2327e2c3e3deb8)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a6bbfe8bb36b274517815cfb18f38a560)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1aea53bae11fbcea3da9539d2a7c82e30f)(int32 NewValue)|Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.|
|void|[ClearItemId](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1aa6e412766bdf2095a1d98d458806d8cf)()|Clears the value of ItemId_Optional and sets ItemId_IsSet to false.|
|bool|[IsItemIdDefaultValue](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a56a421d6eafe28d3a53c8650e0d28623)()|Returns true if ItemId_Optional is set and matches the default value.|
|void|[SetItemIdToDefault](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1abec149f819d14ecba1cb51c3390d7eab)()|Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.|
|FGuid &|[GetInventoryId](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a97a528f8ec22a5abd5a7e5aa4f762a5d)()|Gets the value of InventoryId.|
|const FGuid &|[GetInventoryId](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a8188f1c447a71c52e68def190a728bb8)()|Gets the value of InventoryId.|
|void|[SetInventoryId](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById_1a88895f69039a245b443bd4094bf91b7b)(FGuid NewValue)|Sets the value of InventoryId.|
## Public Attributes



### `Bucket_Optional` <a id="structFRHAPI__UpdateInventoryRequestById_1a8ca857e89d25ca0e98daf13f06a6efab"></a>

`ERHAPI_InventoryBucket FRHAPI_UpdateInventoryRequestById::Bucket_Optional`

Inventory Bucket for this Inventory Operation.




### `Bucket_IsSet` <a id="structFRHAPI__UpdateInventoryRequestById_1ac41a3118be44c4165a398617c96162ea"></a>

`bool FRHAPI_UpdateInventoryRequestById::Bucket_IsSet`

true if Bucket_Optional has been set to a value




### `Count_Optional` <a id="structFRHAPI__UpdateInventoryRequestById_1a1954e9b67818fea34a60cc71e5490e5b"></a>

`int32 FRHAPI_UpdateInventoryRequestById::Count_Optional`

Count for this Inventory Operation.




### `Count_IsSet` <a id="structFRHAPI__UpdateInventoryRequestById_1a753c17f614d56bf432f4d323856fdccc"></a>

`bool FRHAPI_UpdateInventoryRequestById::Count_IsSet`

true if Count_Optional has been set to a value




### `Expires_Optional` <a id="structFRHAPI__UpdateInventoryRequestById_1a820cf3ed3654429b8872612c4ea91384"></a>

`FDateTime FRHAPI_UpdateInventoryRequestById::Expires_Optional`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `Expires_IsSet` <a id="structFRHAPI__UpdateInventoryRequestById_1ace18916ca2ca408374d528fc6103dc4c"></a>

`bool FRHAPI_UpdateInventoryRequestById::Expires_IsSet`

true if Expires_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__UpdateInventoryRequestById_1a838980eda31d6b59b0695e043b32ee67"></a>

`TMap<FString, FString> FRHAPI_UpdateInventoryRequestById::CustomData_Optional`

Arbitrary data map that can be set to add additional data to Inventory.




### `CustomData_IsSet` <a id="structFRHAPI__UpdateInventoryRequestById_1ab4012dc2c645022e36c9906b69a9f31f"></a>

`bool FRHAPI_UpdateInventoryRequestById::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `ItemId_Optional` <a id="structFRHAPI__UpdateInventoryRequestById_1af8e1b49c7470b5984d48561d1200ec4b"></a>

`int32 FRHAPI_UpdateInventoryRequestById::ItemId_Optional`

Item ID for this Inventory Operation. If the Item ID is not set during an Update Inventory Request, then the Item ID will not be modified on the existing Inventory Record.




### `ItemId_IsSet` <a id="structFRHAPI__UpdateInventoryRequestById_1a712999a198bdf14ac4d070bd1e99e666"></a>

`bool FRHAPI_UpdateInventoryRequestById::ItemId_IsSet`

true if ItemId_Optional has been set to a value




### `InventoryId` <a id="structFRHAPI__UpdateInventoryRequestById_1a2e4d3a8ca23b5b42fb25a19ccb38ee1a"></a>

`FGuid FRHAPI_UpdateInventoryRequestById::InventoryId`

Inventory ID for this Inventory Operation.





## Public Functions



### `FromJson` <a id="structFRHAPI__UpdateInventoryRequestById_1ab0062a9f74f5a5d4cdedd3ca6b448e9c"></a>

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



### `WriteJson` <a id="structFRHAPI__UpdateInventoryRequestById_1a88f37aaafd03a697602eaeaaabec5a6e"></a>

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



### `GetBucket` <a id="structFRHAPI__UpdateInventoryRequestById_1a3d1f226f198aa556a34cdbfccbc82703"></a>

ERHAPI_InventoryBucket & GetBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Bucket_Optional, regardless of it having been set.




### `GetBucket` <a id="structFRHAPI__UpdateInventoryRequestById_1a90b237f377d909868474ac8f301c7a43"></a>

const ERHAPI_InventoryBucket & GetBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Bucket_Optional, regardless of it having been set.




### `GetBucket` <a id="structFRHAPI__UpdateInventoryRequestById_1accbe0124275dff1ccf9fd82c75513b3d"></a>

const ERHAPI_InventoryBucket & GetBucket(const ERHAPI_InventoryBucket & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryBucket &|DefaultValue|

#### Description

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetBucket` <a id="structFRHAPI__UpdateInventoryRequestById_1a9dea35372560f239b64f704a0831f4ec"></a>

bool GetBucket(ERHAPI_InventoryBucket & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket &|OutValue|

#### Description

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.




### `GetBucketOrNull` <a id="structFRHAPI__UpdateInventoryRequestById_1a7f26bbf0e8e86317f8eb2fc990e356b3"></a>

ERHAPI_InventoryBucket * GetBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.




### `GetBucketOrNull` <a id="structFRHAPI__UpdateInventoryRequestById_1ad141339f0e7cf51d2cbc1791642174da"></a>

const ERHAPI_InventoryBucket * GetBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.




### `SetBucket` <a id="structFRHAPI__UpdateInventoryRequestById_1a5e287009c77d6b78b939eec19b2ff9c2"></a>

void SetBucket(ERHAPI_InventoryBucket NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket|NewValue|

#### Description

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.




### `ClearBucket` <a id="structFRHAPI__UpdateInventoryRequestById_1ad14f798244ea05e8654e6e4cde09b9c5"></a>

void ClearBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.




### `GetCount` <a id="structFRHAPI__UpdateInventoryRequestById_1ad82a9ff10932f26fcd34f691a51a7e87"></a>

int32 & GetCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Count_Optional, regardless of it having been set.




### `GetCount` <a id="structFRHAPI__UpdateInventoryRequestById_1a6cbd3d5e00dda12488bd94ffff40b322"></a>

const int32 & GetCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Count_Optional, regardless of it having been set.




### `GetCount` <a id="structFRHAPI__UpdateInventoryRequestById_1adcda0097ff437f3a13d7d52778380a34"></a>

const int32 & GetCount(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCount` <a id="structFRHAPI__UpdateInventoryRequestById_1a4f8325eb8c2b059b8a8fbf6fde474e51"></a>

bool GetCount(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.




### `GetCountOrNull` <a id="structFRHAPI__UpdateInventoryRequestById_1acd945c2489f644ab3b39e359c9d2021d"></a>

int32 * GetCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.




### `GetCountOrNull` <a id="structFRHAPI__UpdateInventoryRequestById_1ad800400bfaa195d5d767d0808cd45a2b"></a>

const int32 * GetCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.




### `SetCount` <a id="structFRHAPI__UpdateInventoryRequestById_1a054d75f882919d3bffe8f0bd51e5a085"></a>

void SetCount(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Count_Optional and also sets Count_IsSet to true.




### `ClearCount` <a id="structFRHAPI__UpdateInventoryRequestById_1a4ba546d925732f3b22e323beca7b9ec0"></a>

void ClearCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Count_Optional and sets Count_IsSet to false.




### `IsCountDefaultValue` <a id="structFRHAPI__UpdateInventoryRequestById_1a90101fd151d48e7c46e9d9953aa24a1b"></a>

bool IsCountDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Count_Optional is set and matches the default value.




### `SetCountToDefault` <a id="structFRHAPI__UpdateInventoryRequestById_1a04e649028a20de8491d255c0f7c0385d"></a>

void SetCountToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Count_Optional to its default and also sets Count_IsSet to true.




### `GetExpires` <a id="structFRHAPI__UpdateInventoryRequestById_1a7e1761fe92b77a8dede5a630572fc95e"></a>

FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__UpdateInventoryRequestById_1a2b5c32595322f04e5e059f20743f1df8"></a>

const FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__UpdateInventoryRequestById_1a8dc5f11bbfb1017ea277e3867497def1"></a>

const FDateTime & GetExpires(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExpires` <a id="structFRHAPI__UpdateInventoryRequestById_1a4e61374be0f9a4d5bee7f8bb34180c1a"></a>

bool GetExpires(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.




### `GetExpiresOrNull` <a id="structFRHAPI__UpdateInventoryRequestById_1af2de3fa18fd06aabb4b5ce4b6290322f"></a>

FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `GetExpiresOrNull` <a id="structFRHAPI__UpdateInventoryRequestById_1ab9933f2509fff182987f64b6a3ad969b"></a>

const FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `SetExpires` <a id="structFRHAPI__UpdateInventoryRequestById_1aa9f10f5260fe4b966265becdf792463c"></a>

void SetExpires(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Expires_Optional and also sets Expires_IsSet to true.




### `ClearExpires` <a id="structFRHAPI__UpdateInventoryRequestById_1a100dee7b13d8b702376d702ae8b0b324"></a>

void ClearExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Expires_Optional and sets Expires_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__UpdateInventoryRequestById_1a65bbb901dc858c64401a790f9810f632"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__UpdateInventoryRequestById_1a67e1e212d9e0c15ee2ad2d8a237e6219"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__UpdateInventoryRequestById_1adc9a7530c55b3c5b337994d9671092f9"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__UpdateInventoryRequestById_1aa86e4244165e0073b66dbda18617e98d"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__UpdateInventoryRequestById_1aa99744cb35d5f53f1a51ad73157bd4a0"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__UpdateInventoryRequestById_1ad0c70e926eaed1a7e1663efa7c7bf1cd"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__UpdateInventoryRequestById_1ab96fc73d47aa69fc0db8a7c7ffd2cb26"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__UpdateInventoryRequestById_1a71e04e0947013cc2eca04cfd9c3f451f"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetItemId` <a id="structFRHAPI__UpdateInventoryRequestById_1ad15222f98ee6b86f870ddfabbcfb5d99"></a>

int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__UpdateInventoryRequestById_1a603fe7259da23822134fac2dcae2f94a"></a>

const int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__UpdateInventoryRequestById_1aa19f045bda4ac8b8680a099ab6410cf1"></a>

const int32 & GetItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetItemId` <a id="structFRHAPI__UpdateInventoryRequestById_1a6f8a2bf06a0dcf82469b313ef3c0b8e3"></a>

bool GetItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetItemIdOrNull` <a id="structFRHAPI__UpdateInventoryRequestById_1a06583e83d7b50ce6ab2327e2c3e3deb8"></a>

int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetItemIdOrNull` <a id="structFRHAPI__UpdateInventoryRequestById_1a6bbfe8bb36b274517815cfb18f38a560"></a>

const int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetItemId` <a id="structFRHAPI__UpdateInventoryRequestById_1aea53bae11fbcea3da9539d2a7c82e30f"></a>

void SetItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.




### `ClearItemId` <a id="structFRHAPI__UpdateInventoryRequestById_1aa6e412766bdf2095a1d98d458806d8cf"></a>

void ClearItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.




### `IsItemIdDefaultValue` <a id="structFRHAPI__UpdateInventoryRequestById_1a56a421d6eafe28d3a53c8650e0d28623"></a>

bool IsItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ItemId_Optional is set and matches the default value.




### `SetItemIdToDefault` <a id="structFRHAPI__UpdateInventoryRequestById_1abec149f819d14ecba1cb51c3390d7eab"></a>

void SetItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.




### `GetInventoryId` <a id="structFRHAPI__UpdateInventoryRequestById_1a97a528f8ec22a5abd5a7e5aa4f762a5d"></a>

FGuid & GetInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryId.




### `GetInventoryId` <a id="structFRHAPI__UpdateInventoryRequestById_1a8188f1c447a71c52e68def190a728bb8"></a>

const FGuid & GetInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryId.




### `SetInventoryId` <a id="structFRHAPI__UpdateInventoryRequestById_1a88895f69039a245b443bd4094bf91b7b"></a>

void SetInventoryId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of InventoryId.





