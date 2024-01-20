---
title: FRHAPI_PlayerRankUpdateRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Request body to update generic rank data.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[InstanceId_Optional](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1af38fcda3794f6b94dd00fba499d1360b)|ID for the instance the match took place on.|
|bool|[InstanceId_IsSet](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1a40d06b2cf100c0b0b2e47ad7d7853b68)|true if InstanceId_Optional has been set to a value|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData)|[Rank](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1a2bc65f5b21cbd31a5aa56cb3ad11381b)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1afa1dc423d993330bbc8484b990d77827)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1a3b76c5a3d842343b27f0538ace0e665f)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1ad1cf60fa86e710efd0b046dada4e3c59)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1a21010161b9f74a09a0f1ffc0eb05560f)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1abaf0629c5e89f214428157d2cb7e4ea3)(const FString & DefaultValue)|Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstanceId](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1a77bd2cd58b54b0336faf0bf98e422658)(FString & OutValue)|Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1a5842aca4a8311ee0ca42163ccf7b38ea)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1afbc936802367071d0637ea2a76874862)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstanceId](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1a34a2ee59444834c77a865fad11d7be05)(FString NewValue)|Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.|
|void|[ClearInstanceId](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1a6ed6ba4c13c1d481737f6ad718caa77b)()|Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) &|[GetRank](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1adcf57f5bc660d6e33c228e92031b2d6d)()|Gets the value of Rank.|
|const [FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) &|[GetRank](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1aea27448b12b90f63f81a75da57a130bb)()|Gets the value of Rank.|
|void|[SetRank](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest_1ae767c2f7ca88b15553b58f13278ed525)([FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) NewValue)|Sets the value of Rank.|
## Public Attributes



### `InstanceId_Optional` <a id="structFRHAPI__PlayerRankUpdateRequest_1af38fcda3794f6b94dd00fba499d1360b"></a>

`FString FRHAPI_PlayerRankUpdateRequest::InstanceId_Optional`

ID for the instance the match took place on.




### `InstanceId_IsSet` <a id="structFRHAPI__PlayerRankUpdateRequest_1a40d06b2cf100c0b0b2e47ad7d7853b68"></a>

`bool FRHAPI_PlayerRankUpdateRequest::InstanceId_IsSet`

true if InstanceId_Optional has been set to a value




### `Rank` <a id="structFRHAPI__PlayerRankUpdateRequest_1a2bc65f5b21cbd31a5aa56cb3ad11381b"></a>

`FRHAPI_RankData FRHAPI_PlayerRankUpdateRequest::Rank`







## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerRankUpdateRequest_1afa1dc423d993330bbc8484b990d77827"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerRankUpdateRequest_1a3b76c5a3d842343b27f0538ace0e665f"></a>

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



### `GetInstanceId` <a id="structFRHAPI__PlayerRankUpdateRequest_1ad1cf60fa86e710efd0b046dada4e3c59"></a>

FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__PlayerRankUpdateRequest_1a21010161b9f74a09a0f1ffc0eb05560f"></a>

const FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__PlayerRankUpdateRequest_1abaf0629c5e89f214428157d2cb7e4ea3"></a>

const FString & GetInstanceId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstanceId` <a id="structFRHAPI__PlayerRankUpdateRequest_1a77bd2cd58b54b0336faf0bf98e422658"></a>

bool GetInstanceId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceIdOrNull` <a id="structFRHAPI__PlayerRankUpdateRequest_1a5842aca4a8311ee0ca42163ccf7b38ea"></a>

FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceIdOrNull` <a id="structFRHAPI__PlayerRankUpdateRequest_1afbc936802367071d0637ea2a76874862"></a>

const FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `SetInstanceId` <a id="structFRHAPI__PlayerRankUpdateRequest_1a34a2ee59444834c77a865fad11d7be05"></a>

void SetInstanceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.




### `ClearInstanceId` <a id="structFRHAPI__PlayerRankUpdateRequest_1a6ed6ba4c13c1d481737f6ad718caa77b"></a>

void ClearInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.




### `GetRank` <a id="structFRHAPI__PlayerRankUpdateRequest_1adcf57f5bc660d6e33c228e92031b2d6d"></a>

[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) & GetRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rank.




### `GetRank` <a id="structFRHAPI__PlayerRankUpdateRequest_1aea27448b12b90f63f81a75da57a130bb"></a>

const [FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) & GetRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rank.




### `SetRank` <a id="structFRHAPI__PlayerRankUpdateRequest_1ae767c2f7ca88b15553b58f13278ed525"></a>

void SetRank([FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData)|NewValue|

#### Description

Sets the value of Rank.





