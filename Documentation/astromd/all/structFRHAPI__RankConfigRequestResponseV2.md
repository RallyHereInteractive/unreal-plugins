---
title: FRHAPI_RankConfigRequestResponseV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response to successfully requesting all rank config.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_RankConfigV2](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2) >|[RankConfigs](/unreal-plugins/all/structfrhapi__rankconfigrequestresponsev2/#structFRHAPI__RankConfigRequestResponseV2_1a39920f1f7c59d99816f489ce3e94ffb6)|List of rank configurations.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__rankconfigrequestresponsev2/#structFRHAPI__RankConfigRequestResponseV2_1a63f122606f6d809d601ec563ba304b03)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__rankconfigrequestresponsev2/#structFRHAPI__RankConfigRequestResponseV2_1a4ef8805eded7567dde66d3b7e4171867)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_RankConfigV2](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2) > &|[GetRankConfigs](/unreal-plugins/all/structfrhapi__rankconfigrequestresponsev2/#structFRHAPI__RankConfigRequestResponseV2_1a4e67afae60c8736ba9e2b1dbe21e0dea)()|Gets the value of RankConfigs.|
|const TArray< [FRHAPI_RankConfigV2](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2) > &|[GetRankConfigs](/unreal-plugins/all/structfrhapi__rankconfigrequestresponsev2/#structFRHAPI__RankConfigRequestResponseV2_1af1f506b674a6ec136d194f6d34065b4b)()|Gets the value of RankConfigs.|
|void|[SetRankConfigs](/unreal-plugins/all/structfrhapi__rankconfigrequestresponsev2/#structFRHAPI__RankConfigRequestResponseV2_1a7af071c973f89a9917fc84f6040e12c0)(TArray< [FRHAPI_RankConfigV2](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2) > NewValue)|Sets the value of RankConfigs.|
## Public Attributes



### `RankConfigs` <a id="structFRHAPI__RankConfigRequestResponseV2_1a39920f1f7c59d99816f489ce3e94ffb6"></a>

`TArray<FRHAPI_RankConfigV2> FRHAPI_RankConfigRequestResponseV2::RankConfigs`

List of rank configurations.





## Public Functions



### `FromJson` <a id="structFRHAPI__RankConfigRequestResponseV2_1a63f122606f6d809d601ec563ba304b03"></a>

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



### `WriteJson` <a id="structFRHAPI__RankConfigRequestResponseV2_1a4ef8805eded7567dde66d3b7e4171867"></a>

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



### `GetRankConfigs` <a id="structFRHAPI__RankConfigRequestResponseV2_1a4e67afae60c8736ba9e2b1dbe21e0dea"></a>

TArray< [FRHAPI_RankConfigV2](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2) > & GetRankConfigs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankConfigs.




### `GetRankConfigs` <a id="structFRHAPI__RankConfigRequestResponseV2_1af1f506b674a6ec136d194f6d34065b4b"></a>

const TArray< [FRHAPI_RankConfigV2](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2) > & GetRankConfigs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankConfigs.




### `SetRankConfigs` <a id="structFRHAPI__RankConfigRequestResponseV2_1a7af071c973f89a9917fc84f6040e12c0"></a>

void SetRankConfigs(TArray< [FRHAPI_RankConfigV2](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_RankConfigV2](/unreal-plugins/all/structfrhapi__rankconfigv2/#structFRHAPI__RankConfigV2) >|NewValue|

#### Description

Sets the value of RankConfigs.





