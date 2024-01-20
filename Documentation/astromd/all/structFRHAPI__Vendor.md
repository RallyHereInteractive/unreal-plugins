---
title: FRHAPI_Vendor Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of Loot and how to fulfill them.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ad1fd7d01d6c9003ad84a5e58e8b638f5)|Custom data associated with the resource.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a2c1b1b4781dae86fc8d06815eb882ae2)|true if CustomData_Optional has been set to a value|
|ERHAPI_VendorType|[Type_Optional](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a5679543c05b7c35a6b7f9dfb45e82782)|Determines how the Vendor fulfills the loot.|
|bool|[Type_IsSet](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a2b43a4bd9314bb4dda95366e7465eab2)|true if Type_Optional has been set to a value|
|int32|[LegacyType_Optional](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a7ddc9fd486f80acdd94206d576727874)||
|bool|[LegacyType_IsSet](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a3eff8bffdc3807d97e3e6a92802e1f6d)|true if LegacyType_Optional has been set to a value|
|int32|[LegacyConfigVersion_Optional](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1afa022639264c0e49e1c57c4702eabfe6)||
|bool|[LegacyConfigVersion_IsSet](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a470fecdc7ab9ab86933c50c02fbbbf98)|true if LegacyConfigVersion_Optional has been set to a value|
|TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) >|[Loot_Optional](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a199a358c2b66f0c42a3c81bc12b8ef4b)|The Loot the Vendor will fulfill mapped by Loot ID.|
|bool|[Loot_IsSet](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a49cb8534ae895d0dbbb4718e49bc5d0d)|true if Loot_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a186c1479137c03910236ca2dec11939e)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a02cff5941552eb97b863c0504e9279ed)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1aabb9e1249de388316e3afe9c4450b83a)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1aadb2125b79d9369fa89d5428c18c6a5b)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a956ab93f7b49d4d44c94b268740772e1)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ac17d955d814ce05a9025657201ea2f2d)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a50d47bcfb078339affc57a7180c1c3e6)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a8105f764906c77a60c614e9c3c685f18)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a4183b612a36de5eabae8d1a3d11debaf)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a443f7f3b5a4d61b855258c8410498176)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a0c1bccc4044d44928f069428c54a0baa)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a3be0ed314dd1c186d5437cd282e72367)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|ERHAPI_VendorType &|[GetType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a45b0024bf9841cc84a56cf325a7b61e7)()|Gets the value of Type_Optional, regardless of it having been set.|
|const ERHAPI_VendorType &|[GetType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ae21da9d6ed5959edd48a777e7b6ff3a3)()|Gets the value of Type_Optional, regardless of it having been set.|
|const ERHAPI_VendorType &|[GetType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a8f67f4cd42adea280e7d6b01414cbefa)(const ERHAPI_VendorType & DefaultValue)|Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a828e1adcb46a9bd94aa54213b932ca2e)(ERHAPI_VendorType & OutValue)|Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_VendorType *|[GetTypeOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1af9215bfe94384c215051bd61fe159325)()|Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_VendorType *|[GetTypeOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a7620043e2ec89f1c12cb123d24949b1e)()|Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a92879bfb67b571aac58fedab8cd6980c)(ERHAPI_VendorType NewValue)|Sets the value of Type_Optional and also sets Type_IsSet to true.|
|void|[ClearType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a80edd87ab36f2af40668d9cded28fe38)()|Clears the value of Type_Optional and sets Type_IsSet to false.|
|int32 &|[GetLegacyType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ac502dd37140bae8da4c17bd4f61264db)()|Gets the value of LegacyType_Optional, regardless of it having been set.|
|const int32 &|[GetLegacyType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a9af7f8eab2cb80643f6f1e38f0ca1f30)()|Gets the value of LegacyType_Optional, regardless of it having been set.|
|const int32 &|[GetLegacyType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a4ab5ba62ab58a4ae8634abc56475008c)(const int32 & DefaultValue)|Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLegacyType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ab6c02b6569a627874af993cb74121201)(int32 & OutValue)|Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetLegacyTypeOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a0a01b3fec78493ab417c092373238b73)()|Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetLegacyTypeOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ae65ad3debd3fd58a3f0ad28369fe4c6b)()|Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLegacyType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a8a674360c7fbe19a34f815cc065a392b)(int32 NewValue)|Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.|
|void|[ClearLegacyType](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1abbe2f3c16522df63f1e1ed1c1e83050e)()|Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.|
|bool|[IsLegacyTypeDefaultValue](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ad0132c838c402d246db971bbc80ed73e)()|Returns true if LegacyType_Optional is set and matches the default value.|
|void|[SetLegacyTypeToDefault](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ab48395e3c0ad815ab6f12b5de430ec17)()|Sets the value of LegacyType_Optional to its default and also sets LegacyType_IsSet to true.|
|int32 &|[GetLegacyConfigVersion](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1abc9f0c39262d53e935382ae8d49ba9f9)()|Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.|
|const int32 &|[GetLegacyConfigVersion](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1aab6e1ed45fc2c0bcc84921dd11fbdb72)()|Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.|
|const int32 &|[GetLegacyConfigVersion](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a80e815c1badd58e50444ef553124de32)(const int32 & DefaultValue)|Gets the value of LegacyConfigVersion_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLegacyConfigVersion](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ac1127266dbd107f5570c171f86c4bde6)(int32 & OutValue)|Fills OutValue with the value of LegacyConfigVersion_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetLegacyConfigVersionOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ad71e61816a72d3732706eef5063a7d35)()|Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetLegacyConfigVersionOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a70560282202c79eb90f696968dd25b24)()|Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLegacyConfigVersion](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ac9c278fd82180b7d4fdd65d75226f5ae)(int32 NewValue)|Sets the value of LegacyConfigVersion_Optional and also sets LegacyConfigVersion_IsSet to true.|
|void|[ClearLegacyConfigVersion](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a39cd6cbcb2eac3f3c0ead5e4f4829c4b)()|Clears the value of LegacyConfigVersion_Optional and sets LegacyConfigVersion_IsSet to false.|
|bool|[IsLegacyConfigVersionDefaultValue](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a6993999a6bda0506d8515a042ea35d8e)()|Returns true if LegacyConfigVersion_Optional is set and matches the default value.|
|void|[SetLegacyConfigVersionToDefault](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a9e344ffcc36fb5a870528fe918f56022)()|Sets the value of LegacyConfigVersion_Optional to its default and also sets LegacyConfigVersion_IsSet to true.|
|TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > &|[GetLoot](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1af53f37d260b8440bbd4a0bdf349f68ef)()|Gets the value of Loot_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > &|[GetLoot](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a1eedd3448e3bc7fb00e60536503834ae)()|Gets the value of Loot_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > &|[GetLoot](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a921933df3c26f2f8009a87fdc25c00d8)(const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & DefaultValue)|Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLoot](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ab3dc72b107f49cbfbbb0f8c31a361386)(TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & OutValue)|Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > *|[GetLootOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a78a902e9294269a1d8d791a4a4d5a166)()|Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > *|[GetLootOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1abf95c1cb96c75ba9e2539222bd88bffb)()|Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLoot](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1abe9c308b868059eb397ab13197c488e9)(TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > NewValue)|Sets the value of Loot_Optional and also sets Loot_IsSet to true.|
|void|[ClearLoot](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a4df091c709882709f1f85c228a2c433b)()|Clears the value of Loot_Optional and sets Loot_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a1bb9e41145e791fdb2a302749766673b)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1accb6b3b3d1a4f7fc1384563476d17e1d)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a1e4c0bccdb1f200ab5f057f6a3c35592)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1abb4e281ecc7113f91a134a27651e0baa)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ab70558f3bfdc3e48d0c743f57f9d6e7f)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1ac467253fcf6fd3c80cd30a7f58a9032c)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1a93b22eb2618b002b78d3a5ab68b088f0)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor_1aab46ead254eea4bde0f552f352c5e2ad)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `CustomData_Optional` <a id="structFRHAPI__Vendor_1ad1fd7d01d6c9003ad84a5e58e8b638f5"></a>

`TMap<FString, FString> FRHAPI_Vendor::CustomData_Optional`

Custom data associated with the resource.




### `CustomData_IsSet` <a id="structFRHAPI__Vendor_1a2c1b1b4781dae86fc8d06815eb882ae2"></a>

`bool FRHAPI_Vendor::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Type_Optional` <a id="structFRHAPI__Vendor_1a5679543c05b7c35a6b7f9dfb45e82782"></a>

`ERHAPI_VendorType FRHAPI_Vendor::Type_Optional`

Determines how the Vendor fulfills the loot.




### `Type_IsSet` <a id="structFRHAPI__Vendor_1a2b43a4bd9314bb4dda95366e7465eab2"></a>

`bool FRHAPI_Vendor::Type_IsSet`

true if Type_Optional has been set to a value




### `LegacyType_Optional` <a id="structFRHAPI__Vendor_1a7ddc9fd486f80acdd94206d576727874"></a>

`int32 FRHAPI_Vendor::LegacyType_Optional`






### `LegacyType_IsSet` <a id="structFRHAPI__Vendor_1a3eff8bffdc3807d97e3e6a92802e1f6d"></a>

`bool FRHAPI_Vendor::LegacyType_IsSet`

true if LegacyType_Optional has been set to a value




### `LegacyConfigVersion_Optional` <a id="structFRHAPI__Vendor_1afa022639264c0e49e1c57c4702eabfe6"></a>

`int32 FRHAPI_Vendor::LegacyConfigVersion_Optional`






### `LegacyConfigVersion_IsSet` <a id="structFRHAPI__Vendor_1a470fecdc7ab9ab86933c50c02fbbbf98"></a>

`bool FRHAPI_Vendor::LegacyConfigVersion_IsSet`

true if LegacyConfigVersion_Optional has been set to a value




### `Loot_Optional` <a id="structFRHAPI__Vendor_1a199a358c2b66f0c42a3c81bc12b8ef4b"></a>

`TMap<FString, FRHAPI_Loot> FRHAPI_Vendor::Loot_Optional`

The Loot the Vendor will fulfill mapped by Loot ID.




### `Loot_IsSet` <a id="structFRHAPI__Vendor_1a49cb8534ae895d0dbbb4718e49bc5d0d"></a>

`bool FRHAPI_Vendor::Loot_IsSet`

true if Loot_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__Vendor_1a186c1479137c03910236ca2dec11939e"></a>

`FRHAPI_CacheInfo FRHAPI_Vendor::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__Vendor_1a02cff5941552eb97b863c0504e9279ed"></a>

`bool FRHAPI_Vendor::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Vendor_1aabb9e1249de388316e3afe9c4450b83a"></a>

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



### `WriteJson` <a id="structFRHAPI__Vendor_1aadb2125b79d9369fa89d5428c18c6a5b"></a>

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



### `GetCustomData` <a id="structFRHAPI__Vendor_1a956ab93f7b49d4d44c94b268740772e1"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Vendor_1ac17d955d814ce05a9025657201ea2f2d"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Vendor_1a50d47bcfb078339affc57a7180c1c3e6"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__Vendor_1a8105f764906c77a60c614e9c3c685f18"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__Vendor_1a4183b612a36de5eabae8d1a3d11debaf"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__Vendor_1a443f7f3b5a4d61b855258c8410498176"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__Vendor_1a0c1bccc4044d44928f069428c54a0baa"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__Vendor_1a3be0ed314dd1c186d5437cd282e72367"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetType` <a id="structFRHAPI__Vendor_1a45b0024bf9841cc84a56cf325a7b61e7"></a>

ERHAPI_VendorType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type_Optional, regardless of it having been set.




### `GetType` <a id="structFRHAPI__Vendor_1ae21da9d6ed5959edd48a777e7b6ff3a3"></a>

const ERHAPI_VendorType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type_Optional, regardless of it having been set.




### `GetType` <a id="structFRHAPI__Vendor_1a8f67f4cd42adea280e7d6b01414cbefa"></a>

const ERHAPI_VendorType & GetType(const ERHAPI_VendorType & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_VendorType &|DefaultValue|

#### Description

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetType` <a id="structFRHAPI__Vendor_1a828e1adcb46a9bd94aa54213b932ca2e"></a>

bool GetType(ERHAPI_VendorType & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_VendorType &|OutValue|

#### Description

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.




### `GetTypeOrNull` <a id="structFRHAPI__Vendor_1af9215bfe94384c215051bd61fe159325"></a>

ERHAPI_VendorType * GetTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.




### `GetTypeOrNull` <a id="structFRHAPI__Vendor_1a7620043e2ec89f1c12cb123d24949b1e"></a>

const ERHAPI_VendorType * GetTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.




### `SetType` <a id="structFRHAPI__Vendor_1a92879bfb67b571aac58fedab8cd6980c"></a>

void SetType(ERHAPI_VendorType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_VendorType|NewValue|

#### Description

Sets the value of Type_Optional and also sets Type_IsSet to true.




### `ClearType` <a id="structFRHAPI__Vendor_1a80edd87ab36f2af40668d9cded28fe38"></a>

void ClearType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Type_Optional and sets Type_IsSet to false.




### `GetLegacyType` <a id="structFRHAPI__Vendor_1ac502dd37140bae8da4c17bd4f61264db"></a>

int32 & GetLegacyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyType_Optional, regardless of it having been set.




### `GetLegacyType` <a id="structFRHAPI__Vendor_1a9af7f8eab2cb80643f6f1e38f0ca1f30"></a>

const int32 & GetLegacyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyType_Optional, regardless of it having been set.




### `GetLegacyType` <a id="structFRHAPI__Vendor_1a4ab5ba62ab58a4ae8634abc56475008c"></a>

const int32 & GetLegacyType(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLegacyType` <a id="structFRHAPI__Vendor_1ab6c02b6569a627874af993cb74121201"></a>

bool GetLegacyType(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.




### `GetLegacyTypeOrNull` <a id="structFRHAPI__Vendor_1a0a01b3fec78493ab417c092373238b73"></a>

int32 * GetLegacyTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.




### `GetLegacyTypeOrNull` <a id="structFRHAPI__Vendor_1ae65ad3debd3fd58a3f0ad28369fe4c6b"></a>

const int32 * GetLegacyTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.




### `SetLegacyType` <a id="structFRHAPI__Vendor_1a8a674360c7fbe19a34f815cc065a392b"></a>

void SetLegacyType(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.




### `ClearLegacyType` <a id="structFRHAPI__Vendor_1abbe2f3c16522df63f1e1ed1c1e83050e"></a>

void ClearLegacyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.




### `IsLegacyTypeDefaultValue` <a id="structFRHAPI__Vendor_1ad0132c838c402d246db971bbc80ed73e"></a>

bool IsLegacyTypeDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LegacyType_Optional is set and matches the default value.




### `SetLegacyTypeToDefault` <a id="structFRHAPI__Vendor_1ab48395e3c0ad815ab6f12b5de430ec17"></a>

void SetLegacyTypeToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LegacyType_Optional to its default and also sets LegacyType_IsSet to true.




### `GetLegacyConfigVersion` <a id="structFRHAPI__Vendor_1abc9f0c39262d53e935382ae8d49ba9f9"></a>

int32 & GetLegacyConfigVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.




### `GetLegacyConfigVersion` <a id="structFRHAPI__Vendor_1aab6e1ed45fc2c0bcc84921dd11fbdb72"></a>

const int32 & GetLegacyConfigVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.




### `GetLegacyConfigVersion` <a id="structFRHAPI__Vendor_1a80e815c1badd58e50444ef553124de32"></a>

const int32 & GetLegacyConfigVersion(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of LegacyConfigVersion_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLegacyConfigVersion` <a id="structFRHAPI__Vendor_1ac1127266dbd107f5570c171f86c4bde6"></a>

bool GetLegacyConfigVersion(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of LegacyConfigVersion_Optional and returns true if it has been set, otherwise returns false.




### `GetLegacyConfigVersionOrNull` <a id="structFRHAPI__Vendor_1ad71e61816a72d3732706eef5063a7d35"></a>

int32 * GetLegacyConfigVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.




### `GetLegacyConfigVersionOrNull` <a id="structFRHAPI__Vendor_1a70560282202c79eb90f696968dd25b24"></a>

const int32 * GetLegacyConfigVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.




### `SetLegacyConfigVersion` <a id="structFRHAPI__Vendor_1ac9c278fd82180b7d4fdd65d75226f5ae"></a>

void SetLegacyConfigVersion(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of LegacyConfigVersion_Optional and also sets LegacyConfigVersion_IsSet to true.




### `ClearLegacyConfigVersion` <a id="structFRHAPI__Vendor_1a39cd6cbcb2eac3f3c0ead5e4f4829c4b"></a>

void ClearLegacyConfigVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LegacyConfigVersion_Optional and sets LegacyConfigVersion_IsSet to false.




### `IsLegacyConfigVersionDefaultValue` <a id="structFRHAPI__Vendor_1a6993999a6bda0506d8515a042ea35d8e"></a>

bool IsLegacyConfigVersionDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LegacyConfigVersion_Optional is set and matches the default value.




### `SetLegacyConfigVersionToDefault` <a id="structFRHAPI__Vendor_1a9e344ffcc36fb5a870528fe918f56022"></a>

void SetLegacyConfigVersionToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LegacyConfigVersion_Optional to its default and also sets LegacyConfigVersion_IsSet to true.




### `GetLoot` <a id="structFRHAPI__Vendor_1af53f37d260b8440bbd4a0bdf349f68ef"></a>

TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & GetLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Loot_Optional, regardless of it having been set.




### `GetLoot` <a id="structFRHAPI__Vendor_1a1eedd3448e3bc7fb00e60536503834ae"></a>

const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & GetLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Loot_Optional, regardless of it having been set.




### `GetLoot` <a id="structFRHAPI__Vendor_1a921933df3c26f2f8009a87fdc25c00d8"></a>

const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & GetLoot(const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > &|DefaultValue|

#### Description

Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLoot` <a id="structFRHAPI__Vendor_1ab3dc72b107f49cbfbbb0f8c31a361386"></a>

bool GetLoot(TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > &|OutValue|

#### Description

Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.




### `GetLootOrNull` <a id="structFRHAPI__Vendor_1a78a902e9294269a1d8d791a4a4d5a166"></a>

TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > * GetLootOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.




### `GetLootOrNull` <a id="structFRHAPI__Vendor_1abf95c1cb96c75ba9e2539222bd88bffb"></a>

const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > * GetLootOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.




### `SetLoot` <a id="structFRHAPI__Vendor_1abe9c308b868059eb397ab13197c488e9"></a>

void SetLoot(TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) >|NewValue|

#### Description

Sets the value of Loot_Optional and also sets Loot_IsSet to true.




### `ClearLoot` <a id="structFRHAPI__Vendor_1a4df091c709882709f1f85c228a2c433b"></a>

void ClearLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Loot_Optional and sets Loot_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__Vendor_1a1bb9e41145e791fdb2a302749766673b"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Vendor_1accb6b3b3d1a4f7fc1384563476d17e1d"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Vendor_1a1e4c0bccdb1f200ab5f057f6a3c35592"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__Vendor_1abb4e281ecc7113f91a134a27651e0baa"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Vendor_1ab70558f3bfdc3e48d0c743f57f9d6e7f"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Vendor_1ac467253fcf6fd3c80cd30a7f58a9032c"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__Vendor_1a93b22eb2618b002b78d3a5ab68b088f0"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__Vendor_1aab46ead254eea4bde0f552f352c5e2ad"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





