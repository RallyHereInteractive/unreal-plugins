---
title: FRHAPI_BackfillSettingsResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|float|[Timeout](/unreal-plugins/all/structfrhapi__backfillsettingsresponse/#structFRHAPI__BackfillSettingsResponse_1abe93a6bdf962bab45bb4767a775b8849)|How often we expect backfill heartbeats to occur.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__backfillsettingsresponse/#structFRHAPI__BackfillSettingsResponse_1ae24dfc7555827dcaf381240f4ce6729c)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__backfillsettingsresponse/#structFRHAPI__BackfillSettingsResponse_1a8bc2efddc2eeccb95e310cd81d818b1a)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|float &|[GetTimeout](/unreal-plugins/all/structfrhapi__backfillsettingsresponse/#structFRHAPI__BackfillSettingsResponse_1ac079c953b4903b9cffc824a5672d01c1)()|Gets the value of Timeout.|
|const float &|[GetTimeout](/unreal-plugins/all/structfrhapi__backfillsettingsresponse/#structFRHAPI__BackfillSettingsResponse_1ad8af373f0c08c40fe4bd1dc8a7ac81a7)()|Gets the value of Timeout.|
|void|[SetTimeout](/unreal-plugins/all/structfrhapi__backfillsettingsresponse/#structFRHAPI__BackfillSettingsResponse_1ad12bb0eb9309bce3b1a4219d916842bf)(float NewValue)|Sets the value of Timeout.|
## Public Attributes



### `Timeout` <a id="structFRHAPI__BackfillSettingsResponse_1abe93a6bdf962bab45bb4767a775b8849"></a>

`float FRHAPI_BackfillSettingsResponse::Timeout`

How often we expect backfill heartbeats to occur.





## Public Functions



### `FromJson` <a id="structFRHAPI__BackfillSettingsResponse_1ae24dfc7555827dcaf381240f4ce6729c"></a>

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



### `WriteJson` <a id="structFRHAPI__BackfillSettingsResponse_1a8bc2efddc2eeccb95e310cd81d818b1a"></a>

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



### `GetTimeout` <a id="structFRHAPI__BackfillSettingsResponse_1ac079c953b4903b9cffc824a5672d01c1"></a>

float & GetTimeout()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Timeout.




### `GetTimeout` <a id="structFRHAPI__BackfillSettingsResponse_1ad8af373f0c08c40fe4bd1dc8a7ac81a7"></a>

const float & GetTimeout()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Timeout.




### `SetTimeout` <a id="structFRHAPI__BackfillSettingsResponse_1ad12bb0eb9309bce3b1a4219d916842bf"></a>

void SetTimeout(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of Timeout.





