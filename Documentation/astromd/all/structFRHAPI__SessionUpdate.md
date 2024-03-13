---
title: FRHAPI_SessionUpdate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A request body to update information about a session resource.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[RegionId_Optional](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1aa6a8ea4e32122c33643902ccae72a6cb)|Preferred region for the instance and match to take place in.|
|bool|[RegionId_IsSet](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a9da573f2aec70094dcf75954ace79333)|true if RegionId_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a75a25433fd525c331b5e6119f40c6816)|Leader Player or instance defined custom data about this session.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a2e97bffd938db16822e8f35b4b808ef6)|true if CustomData_Optional has been set to a value|
|bool|[Joinable_Optional](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1aacbfdec8b14c38f25c0a26d96e373f80)|Flag for if players can freely join this session without an invite.|
|bool|[Joinable_IsSet](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a1771b6a886f26629df2e7c1f798c3632)|true if Joinable_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1afa43baf74e0c17d38ef79d73a9101d5d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1ac9074a03cedc50aa8525fadaa378bf75)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetRegionId](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a89c91fcd33810a8033ff794ad01923ab)()|Gets the value of RegionId_Optional, regardless of it having been set.|
|const FString &|[GetRegionId](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1aead7d3b8758e4d3009ae50a728814bf9)()|Gets the value of RegionId_Optional, regardless of it having been set.|
|const FString &|[GetRegionId](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a7a63b0205dd6e8ec13ff38eae4bc7729)(const FString & DefaultValue)|Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRegionId](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1abb52a4f959368b5ff17dfca55868ca1a)(FString & OutValue)|Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetRegionIdOrNull](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a98aa631f19fe9d833553ce00e76784c9)()|Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetRegionIdOrNull](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a3c305f88622374211674d0460ffbe2ec)()|Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRegionId](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1af3738baba2b55dd312a464d2cd2cb5b2)(FString NewValue)|Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.|
|void|[ClearRegionId](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad)()|Clears the value of RegionId_Optional and sets RegionId_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a90c555e3270441fd39ca37b48f42e4b7)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a25f19ba461efb88d2e796043b704acbe)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1ad55370ef9e60177045854e7ef98dce12)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a6ad53d6269bd9319b6aa9fd4d6dc57f7)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a511d62a037fe7af840ad0a35146fa553)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a24df114a5fcae9e12a1c2d0c35d9ab5e)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a067b23e769c67dbef812810ef33038fd)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|bool &|[GetJoinable](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a02c087ef532461a4a67965edf157e2be)()|Gets the value of Joinable_Optional, regardless of it having been set.|
|const bool &|[GetJoinable](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a76ddc37b2559202fb20415df8dd2b6b7)()|Gets the value of Joinable_Optional, regardless of it having been set.|
|const bool &|[GetJoinable](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a702ccd3fd1429a1fa75cc224af6609f2)(const bool & DefaultValue)|Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetJoinable](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1ab8ce51e436d1aec01168e2685464133f)(bool & OutValue)|Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetJoinableOrNull](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a72e87a8e9e412964af2f81946e6adbb4)()|Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetJoinableOrNull](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a81dd7dfa0fc643e2c7f136d667fe5112)()|Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetJoinable](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1ad3553aa34e058ae6965d6c915ac88254)(bool NewValue)|Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.|
|void|[ClearJoinable](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a5e38954afb4281bfd14241a6b0faca88)()|Clears the value of Joinable_Optional and sets Joinable_IsSet to false.|
|bool|[IsJoinableDefaultValue](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a6c81424549450bef7b7430faa548f0e4)()|Returns true if Joinable_Optional is set and matches the default value.|
|void|[SetJoinableToDefault](/unreal-plugins/all/structfrhapi__sessionupdate/#structFRHAPI__SessionUpdate_1a0831036473b80aa18223036feeab2a6f)()|Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.|
## Public Attributes



### `RegionId_Optional` <a id="structFRHAPI__SessionUpdate_1aa6a8ea4e32122c33643902ccae72a6cb"></a>

`FString FRHAPI_SessionUpdate::RegionId_Optional`

Preferred region for the instance and match to take place in.




### `RegionId_IsSet` <a id="structFRHAPI__SessionUpdate_1a9da573f2aec70094dcf75954ace79333"></a>

`bool FRHAPI_SessionUpdate::RegionId_IsSet`

true if RegionId_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__SessionUpdate_1a75a25433fd525c331b5e6119f40c6816"></a>

`TMap<FString, FString> FRHAPI_SessionUpdate::CustomData_Optional`

Leader Player or instance defined custom data about this session.




### `CustomData_IsSet` <a id="structFRHAPI__SessionUpdate_1a2e97bffd938db16822e8f35b4b808ef6"></a>

`bool FRHAPI_SessionUpdate::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Joinable_Optional` <a id="structFRHAPI__SessionUpdate_1aacbfdec8b14c38f25c0a26d96e373f80"></a>

`bool FRHAPI_SessionUpdate::Joinable_Optional`

Flag for if players can freely join this session without an invite.




### `Joinable_IsSet` <a id="structFRHAPI__SessionUpdate_1a1771b6a886f26629df2e7c1f798c3632"></a>

`bool FRHAPI_SessionUpdate::Joinable_IsSet`

true if Joinable_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionUpdate_1afa43baf74e0c17d38ef79d73a9101d5d"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionUpdate_1ac9074a03cedc50aa8525fadaa378bf75"></a>

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



### `GetRegionId` <a id="structFRHAPI__SessionUpdate_1a89c91fcd33810a8033ff794ad01923ab"></a>

FString & GetRegionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RegionId_Optional, regardless of it having been set.




### `GetRegionId` <a id="structFRHAPI__SessionUpdate_1aead7d3b8758e4d3009ae50a728814bf9"></a>

const FString & GetRegionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RegionId_Optional, regardless of it having been set.




### `GetRegionId` <a id="structFRHAPI__SessionUpdate_1a7a63b0205dd6e8ec13ff38eae4bc7729"></a>

const FString & GetRegionId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRegionId` <a id="structFRHAPI__SessionUpdate_1abb52a4f959368b5ff17dfca55868ca1a"></a>

bool GetRegionId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.




### `GetRegionIdOrNull` <a id="structFRHAPI__SessionUpdate_1a98aa631f19fe9d833553ce00e76784c9"></a>

FString * GetRegionIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.




### `GetRegionIdOrNull` <a id="structFRHAPI__SessionUpdate_1a3c305f88622374211674d0460ffbe2ec"></a>

const FString * GetRegionIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.




### `SetRegionId` <a id="structFRHAPI__SessionUpdate_1af3738baba2b55dd312a464d2cd2cb5b2"></a>

void SetRegionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.




### `ClearRegionId` <a id="structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad"></a>

void ClearRegionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__SessionUpdate_1a90c555e3270441fd39ca37b48f42e4b7"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionUpdate_1a25f19ba461efb88d2e796043b704acbe"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionUpdate_1ad55370ef9e60177045854e7ef98dce12"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__SessionUpdate_1a6ad53d6269bd9319b6aa9fd4d6dc57f7"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionUpdate_1a511d62a037fe7af840ad0a35146fa553"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionUpdate_1a24df114a5fcae9e12a1c2d0c35d9ab5e"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__SessionUpdate_1a067b23e769c67dbef812810ef33038fd"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetJoinable` <a id="structFRHAPI__SessionUpdate_1a02c087ef532461a4a67965edf157e2be"></a>

bool & GetJoinable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Joinable_Optional, regardless of it having been set.




### `GetJoinable` <a id="structFRHAPI__SessionUpdate_1a76ddc37b2559202fb20415df8dd2b6b7"></a>

const bool & GetJoinable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Joinable_Optional, regardless of it having been set.




### `GetJoinable` <a id="structFRHAPI__SessionUpdate_1a702ccd3fd1429a1fa75cc224af6609f2"></a>

const bool & GetJoinable(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetJoinable` <a id="structFRHAPI__SessionUpdate_1ab8ce51e436d1aec01168e2685464133f"></a>

bool GetJoinable(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.




### `GetJoinableOrNull` <a id="structFRHAPI__SessionUpdate_1a72e87a8e9e412964af2f81946e6adbb4"></a>

bool * GetJoinableOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.




### `GetJoinableOrNull` <a id="structFRHAPI__SessionUpdate_1a81dd7dfa0fc643e2c7f136d667fe5112"></a>

const bool * GetJoinableOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.




### `SetJoinable` <a id="structFRHAPI__SessionUpdate_1ad3553aa34e058ae6965d6c915ac88254"></a>

void SetJoinable(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.




### `ClearJoinable` <a id="structFRHAPI__SessionUpdate_1a5e38954afb4281bfd14241a6b0faca88"></a>

void ClearJoinable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.




### `IsJoinableDefaultValue` <a id="structFRHAPI__SessionUpdate_1a6c81424549450bef7b7430faa548f0e4"></a>

bool IsJoinableDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Joinable_Optional is set and matches the default value.




### `SetJoinableToDefault` <a id="structFRHAPI__SessionUpdate_1a0831036473b80aa18223036feeab2a6f"></a>

void SetJoinableToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.





