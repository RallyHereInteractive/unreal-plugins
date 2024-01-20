---
title: FRHAPI_RankConfigRequestResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED Response to successfully requesting all rank config.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_RankConfig](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig) >|[RankConfigs](/unreal-plugins/all/structfrhapi__rankconfigrequestresponse/#structFRHAPI__RankConfigRequestResponse_1a06467dc9fc36b86f7882b698da59ca3c)|List of rank configurations.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__rankconfigrequestresponse/#structFRHAPI__RankConfigRequestResponse_1a9a012bba332ab54b4bc7dfa69b30cb07)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__rankconfigrequestresponse/#structFRHAPI__RankConfigRequestResponse_1a6b1bbc830bc841a1ad8f440b490d651c)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_RankConfig](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig) > &|[GetRankConfigs](/unreal-plugins/all/structfrhapi__rankconfigrequestresponse/#structFRHAPI__RankConfigRequestResponse_1a10293ed196ac1e3e124af3b85a34fb44)()|Gets the value of RankConfigs.|
|const TArray< [FRHAPI_RankConfig](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig) > &|[GetRankConfigs](/unreal-plugins/all/structfrhapi__rankconfigrequestresponse/#structFRHAPI__RankConfigRequestResponse_1aeb54e898307a9b90a72e029b626fee85)()|Gets the value of RankConfigs.|
|void|[SetRankConfigs](/unreal-plugins/all/structfrhapi__rankconfigrequestresponse/#structFRHAPI__RankConfigRequestResponse_1a7df52291c8b3cdce8418cde93a3ae6ad)(TArray< [FRHAPI_RankConfig](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig) > NewValue)|Sets the value of RankConfigs.|
## Public Attributes



### `RankConfigs` <a id="structFRHAPI__RankConfigRequestResponse_1a06467dc9fc36b86f7882b698da59ca3c"></a>

`TArray<FRHAPI_RankConfig> FRHAPI_RankConfigRequestResponse::RankConfigs`

List of rank configurations.





## Public Functions



### `FromJson` <a id="structFRHAPI__RankConfigRequestResponse_1a9a012bba332ab54b4bc7dfa69b30cb07"></a>

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



### `WriteJson` <a id="structFRHAPI__RankConfigRequestResponse_1a6b1bbc830bc841a1ad8f440b490d651c"></a>

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



### `GetRankConfigs` <a id="structFRHAPI__RankConfigRequestResponse_1a10293ed196ac1e3e124af3b85a34fb44"></a>

TArray< [FRHAPI_RankConfig](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig) > & GetRankConfigs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankConfigs.




### `GetRankConfigs` <a id="structFRHAPI__RankConfigRequestResponse_1aeb54e898307a9b90a72e029b626fee85"></a>

const TArray< [FRHAPI_RankConfig](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig) > & GetRankConfigs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankConfigs.




### `SetRankConfigs` <a id="structFRHAPI__RankConfigRequestResponse_1a7df52291c8b3cdce8418cde93a3ae6ad"></a>

void SetRankConfigs(TArray< [FRHAPI_RankConfig](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_RankConfig](/unreal-plugins/all/structfrhapi__rankconfig/#structFRHAPI__RankConfig) >|NewValue|

#### Description

Sets the value of RankConfigs.





