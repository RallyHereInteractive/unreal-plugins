---
title: FRHAPI_QueueJoinRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A request body to enter into a matchmaking queue.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[QueueId](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a763c48b62bd3fb1caa989e3398be38da)|ID of the queue to join.|
|[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams)|[AdditionalJoinParams_Optional](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a74c20f33662a9eccedb8cd848144a9e4)||
|bool|[AdditionalJoinParams_IsSet](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a3f5faa941b1293875299ecebbd90b2fd)|true if AdditionalJoinParams_Optional has been set to a value|
|TArray< FString >|[MapPreferences_Optional](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a588de1beb24df35a7a1a7ac8f27e18c9)|List of map preferences in order from most desired, to least desired.|
|bool|[MapPreferences_IsSet](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a1a60372efe9faff49d483ff34112a6fd)|true if MapPreferences_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1aca836ceeca7c09ce5239c1e3769baee6)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a97acb248466e63b7798eafa5ce7ebcc8)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetQueueId](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a04947239245adaac9f29e11bcbeda080)()|Gets the value of QueueId.|
|const FString &|[GetQueueId](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1aac1422f7f250b7adf344f06933daec99)()|Gets the value of QueueId.|
|void|[SetQueueId](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a773383670395fcd0af3caca9097b942a)(FString NewValue)|Sets the value of QueueId.|
|[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) &|[GetAdditionalJoinParams](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a5970453e4b31aa54a9faf3ac5845c832)()|Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.|
|const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) &|[GetAdditionalJoinParams](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a88e22a378f5e9df2d48545c7b450ed2f)()|Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.|
|const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) &|[GetAdditionalJoinParams](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a273fb9fade8c917d42141e1418a8bcd6)(const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & DefaultValue)|Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAdditionalJoinParams](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a9abf8cdeef8fb56ceb7d860e8c9cbca7)([FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & OutValue)|Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) *|[GetAdditionalJoinParamsOrNull](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a15d288553c61109c70c71ae2bc3eae19)()|Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) *|[GetAdditionalJoinParamsOrNull](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a58825f4cefd0e8251a5d18cea6fef2c1)()|Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAdditionalJoinParams](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a5b3c1314212338247edf3bbfc50e23c1)([FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) NewValue)|Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.|
|void|[ClearAdditionalJoinParams](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a3e098b2fd5478ac3893a7e4149f84a19)()|Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.|
|TArray< FString > &|[GetMapPreferences](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1acc39604b4fe9d852c99cc1e64e475402)()|Gets the value of MapPreferences_Optional, regardless of it having been set.|
|const TArray< FString > &|[GetMapPreferences](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1acc8805274de0a0ef1fc7da1931e4221f)()|Gets the value of MapPreferences_Optional, regardless of it having been set.|
|const TArray< FString > &|[GetMapPreferences](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1ac3cfea20641948bbde3870ed5075af31)(const TArray< FString > & DefaultValue)|Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMapPreferences](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a9e431e3f2cae778b8ac13c5e310e3165)(TArray< FString > & OutValue)|Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.|
|TArray< FString > *|[GetMapPreferencesOrNull](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a64156de1f457b5963b1c675c0eacc8ee)()|Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< FString > *|[GetMapPreferencesOrNull](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a67fc70d6a1bf8d21cb8644bee33042e3)()|Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMapPreferences](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a473a1e40872aa37c1c2bb1e05589d673)(TArray< FString > NewValue)|Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.|
|void|[ClearMapPreferences](/unreal-plugins/all/structfrhapi__queuejoinrequest/#structFRHAPI__QueueJoinRequest_1a60ee35ca85529854b6ecc140d872194a)()|Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.|
## Public Attributes



### `QueueId` <a id="structFRHAPI__QueueJoinRequest_1a763c48b62bd3fb1caa989e3398be38da"></a>

`FString FRHAPI_QueueJoinRequest::QueueId`

ID of the queue to join.




### `AdditionalJoinParams_Optional` <a id="structFRHAPI__QueueJoinRequest_1a74c20f33662a9eccedb8cd848144a9e4"></a>

`FRHAPI_AdditionalJoinParams FRHAPI_QueueJoinRequest::AdditionalJoinParams_Optional`






### `AdditionalJoinParams_IsSet` <a id="structFRHAPI__QueueJoinRequest_1a3f5faa941b1293875299ecebbd90b2fd"></a>

`bool FRHAPI_QueueJoinRequest::AdditionalJoinParams_IsSet`

true if AdditionalJoinParams_Optional has been set to a value




### `MapPreferences_Optional` <a id="structFRHAPI__QueueJoinRequest_1a588de1beb24df35a7a1a7ac8f27e18c9"></a>

`TArray<FString> FRHAPI_QueueJoinRequest::MapPreferences_Optional`

List of map preferences in order from most desired, to least desired.




### `MapPreferences_IsSet` <a id="structFRHAPI__QueueJoinRequest_1a1a60372efe9faff49d483ff34112a6fd"></a>

`bool FRHAPI_QueueJoinRequest::MapPreferences_IsSet`

true if MapPreferences_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__QueueJoinRequest_1aca836ceeca7c09ce5239c1e3769baee6"></a>

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



### `WriteJson` <a id="structFRHAPI__QueueJoinRequest_1a97acb248466e63b7798eafa5ce7ebcc8"></a>

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



### `GetQueueId` <a id="structFRHAPI__QueueJoinRequest_1a04947239245adaac9f29e11bcbeda080"></a>

FString & GetQueueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of QueueId.




### `GetQueueId` <a id="structFRHAPI__QueueJoinRequest_1aac1422f7f250b7adf344f06933daec99"></a>

const FString & GetQueueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of QueueId.




### `SetQueueId` <a id="structFRHAPI__QueueJoinRequest_1a773383670395fcd0af3caca9097b942a"></a>

void SetQueueId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of QueueId.




### `GetAdditionalJoinParams` <a id="structFRHAPI__QueueJoinRequest_1a5970453e4b31aa54a9faf3ac5845c832"></a>

[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & GetAdditionalJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.




### `GetAdditionalJoinParams` <a id="structFRHAPI__QueueJoinRequest_1a88e22a378f5e9df2d48545c7b450ed2f"></a>

const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & GetAdditionalJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.




### `GetAdditionalJoinParams` <a id="structFRHAPI__QueueJoinRequest_1a273fb9fade8c917d42141e1418a8bcd6"></a>

const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & GetAdditionalJoinParams(const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) &|DefaultValue|

#### Description

Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAdditionalJoinParams` <a id="structFRHAPI__QueueJoinRequest_1a9abf8cdeef8fb56ceb7d860e8c9cbca7"></a>

bool GetAdditionalJoinParams([FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) &|OutValue|

#### Description

Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.




### `GetAdditionalJoinParamsOrNull` <a id="structFRHAPI__QueueJoinRequest_1a15d288553c61109c70c71ae2bc3eae19"></a>

[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) * GetAdditionalJoinParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.




### `GetAdditionalJoinParamsOrNull` <a id="structFRHAPI__QueueJoinRequest_1a58825f4cefd0e8251a5d18cea6fef2c1"></a>

const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) * GetAdditionalJoinParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.




### `SetAdditionalJoinParams` <a id="structFRHAPI__QueueJoinRequest_1a5b3c1314212338247edf3bbfc50e23c1"></a>

void SetAdditionalJoinParams([FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams)|NewValue|

#### Description

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.




### `ClearAdditionalJoinParams` <a id="structFRHAPI__QueueJoinRequest_1a3e098b2fd5478ac3893a7e4149f84a19"></a>

void ClearAdditionalJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.




### `GetMapPreferences` <a id="structFRHAPI__QueueJoinRequest_1acc39604b4fe9d852c99cc1e64e475402"></a>

TArray< FString > & GetMapPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapPreferences_Optional, regardless of it having been set.




### `GetMapPreferences` <a id="structFRHAPI__QueueJoinRequest_1acc8805274de0a0ef1fc7da1931e4221f"></a>

const TArray< FString > & GetMapPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapPreferences_Optional, regardless of it having been set.




### `GetMapPreferences` <a id="structFRHAPI__QueueJoinRequest_1ac3cfea20641948bbde3870ed5075af31"></a>

const TArray< FString > & GetMapPreferences(const TArray< FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< FString > &|DefaultValue|

#### Description

Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMapPreferences` <a id="structFRHAPI__QueueJoinRequest_1a9e431e3f2cae778b8ac13c5e310e3165"></a>

bool GetMapPreferences(TArray< FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< FString > &|OutValue|

#### Description

Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.




### `GetMapPreferencesOrNull` <a id="structFRHAPI__QueueJoinRequest_1a64156de1f457b5963b1c675c0eacc8ee"></a>

TArray< FString > * GetMapPreferencesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.




### `GetMapPreferencesOrNull` <a id="structFRHAPI__QueueJoinRequest_1a67fc70d6a1bf8d21cb8644bee33042e3"></a>

const TArray< FString > * GetMapPreferencesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.




### `SetMapPreferences` <a id="structFRHAPI__QueueJoinRequest_1a473a1e40872aa37c1c2bb1e05589d673"></a>

void SetMapPreferences(TArray< FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< FString >|NewValue|

#### Description

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.




### `ClearMapPreferences` <a id="structFRHAPI__QueueJoinRequest_1a60ee35ca85529854b6ecc140d872194a"></a>

void ClearMapPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.





