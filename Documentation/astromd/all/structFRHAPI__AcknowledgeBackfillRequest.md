---
title: FRHAPI_AcknowledgeBackfillRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[InstanceId](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1a97b0c8cdce253a06e8c124f2ae1e975f)|The instance ID for this backfill request.|
|TMap< FString, FString >|[Extensions_Optional](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1a6ac9dbac81edc9fc3dc8305d19fc422e)|Additional extensions to add to the Assignment for the backfill resource associated with the session.|
|bool|[Extensions_IsSet](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1a333bfc8516098517d853f5d598b4d602)|true if Extensions_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1ae7271024195408c334d05e227b29199d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1a17e9895536a83263afef85c3340b1f0c)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1ad8f0beb276ae3c29cf25ee2d0433cc44)()|Gets the value of InstanceId.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1a2e8f06f0b393750e7255f8dd6f57ec12)()|Gets the value of InstanceId.|
|void|[SetInstanceId](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1a8da7e7d623284a8972eeccb2ddb91fcd)(FString NewValue)|Sets the value of InstanceId.|
|TMap< FString, FString > &|[GetExtensions](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1a1c659e1b5a491ce224e5e3ceda7b0ad7)()|Gets the value of Extensions_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetExtensions](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1ac9896f1d4604dbcaa7c37da0cfc8bbab)()|Gets the value of Extensions_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetExtensions](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1ae7658fe6ae44655ea2b8ff3925d3a65d)(const TMap< FString, FString > & DefaultValue)|Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExtensions](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1aeab99f0232db3b9a3b059a48c7d7188d)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetExtensionsOrNull](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1ad441436ad6f13436710c1dd3b73d6ada)()|Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetExtensionsOrNull](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1a973415325b0ff1e8707185310a9555c6)()|Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExtensions](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1a54d89c6f19d0858a857c9eb6817b9110)(TMap< FString, FString > NewValue)|Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.|
|void|[ClearExtensions](/unreal-plugins/all/structfrhapi__acknowledgebackfillrequest/#structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f)()|Clears the value of Extensions_Optional and sets Extensions_IsSet to false.|
## Public Attributes



### `InstanceId` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a97b0c8cdce253a06e8c124f2ae1e975f"></a>

`FString FRHAPI_AcknowledgeBackfillRequest::InstanceId`

The instance ID for this backfill request.




### `Extensions_Optional` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a6ac9dbac81edc9fc3dc8305d19fc422e"></a>

`TMap<FString, FString> FRHAPI_AcknowledgeBackfillRequest::Extensions_Optional`

Additional extensions to add to the Assignment for the backfill resource associated with the session.




### `Extensions_IsSet` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a333bfc8516098517d853f5d598b4d602"></a>

`bool FRHAPI_AcknowledgeBackfillRequest::Extensions_IsSet`

true if Extensions_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ae7271024195408c334d05e227b29199d"></a>

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



### `WriteJson` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a17e9895536a83263afef85c3340b1f0c"></a>

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



### `GetInstanceId` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad8f0beb276ae3c29cf25ee2d0433cc44"></a>

FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId.




### `GetInstanceId` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a2e8f06f0b393750e7255f8dd6f57ec12"></a>

const FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId.




### `SetInstanceId` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a8da7e7d623284a8972eeccb2ddb91fcd"></a>

void SetInstanceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InstanceId.




### `GetExtensions` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a1c659e1b5a491ce224e5e3ceda7b0ad7"></a>

TMap< FString, FString > & GetExtensions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Extensions_Optional, regardless of it having been set.




### `GetExtensions` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ac9896f1d4604dbcaa7c37da0cfc8bbab"></a>

const TMap< FString, FString > & GetExtensions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Extensions_Optional, regardless of it having been set.




### `GetExtensions` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ae7658fe6ae44655ea2b8ff3925d3a65d"></a>

const TMap< FString, FString > & GetExtensions(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExtensions` <a id="structFRHAPI__AcknowledgeBackfillRequest_1aeab99f0232db3b9a3b059a48c7d7188d"></a>

bool GetExtensions(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.




### `GetExtensionsOrNull` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad441436ad6f13436710c1dd3b73d6ada"></a>

TMap< FString, FString > * GetExtensionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.




### `GetExtensionsOrNull` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a973415325b0ff1e8707185310a9555c6"></a>

const TMap< FString, FString > * GetExtensionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.




### `SetExtensions` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a54d89c6f19d0858a857c9eb6817b9110"></a>

void SetExtensions(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.




### `ClearExtensions` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f"></a>

void ClearExtensions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.





