---
title: FRHAPI_PostGameEventsResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[PostedEvents](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1ab14cbee3111a9f8af4d2dc4a81b91a77)|Number of events successfully posted to Event Hub.|
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) >|[Errors_Optional](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1a4bcd13cbbb6908fe7b3c2cd698b09b3d)|list of validation failure for each event.|
|bool|[Errors_IsSet](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1a64e1d83ca099175ac36efd3fd0778b4f)|true if Errors_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1ae85902fce843a04afa56f4a445605834)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1a2526583c3c98ef274d01a87d86108cb0)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetPostedEvents](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1a5d308cdc0e5647372e993ed02ec53701)()|Gets the value of PostedEvents.|
|const int32 &|[GetPostedEvents](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1ac08763c5db10d34a410d0ed7711bf03a)()|Gets the value of PostedEvents.|
|void|[SetPostedEvents](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1a2ccb7747d3b05789b3362e423ec658fe)(int32 NewValue)|Sets the value of PostedEvents.|
|bool|[IsPostedEventsDefaultValue](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1a33f77ad6d36173417f8a53c402654493)()|Returns true if PostedEvents matches the default value.|
|void|[SetPostedEventsToDefault](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1a3f5dfe2d5d14b932b8502db6a2ca119a)()|Sets the value of PostedEvents to its default|
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|[GetErrors](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1af6ed576d107b976b7c215980b44843d9)()|Gets the value of Errors_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|[GetErrors](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1a3547a97c61fc1e3f211c540c81159cd9)()|Gets the value of Errors_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|[GetErrors](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1ae108ad84828b04fde877aacd7553c19a)(const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & DefaultValue)|Gets the value of Errors_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetErrors](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1afdeb56eacaf89f648ca521d479fa2c23)(TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & OutValue)|Fills OutValue with the value of Errors_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > *|[GetErrorsOrNull](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1a87b36b7499a7e78bdc27f1d32666d849)()|Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > *|[GetErrorsOrNull](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1a6e5cae343486059f6b3eaa11b8a60c90)()|Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetErrors](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1a25c25fc991dbbfa0bd1a9d4042835053)(TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > NewValue)|Sets the value of Errors_Optional and also sets Errors_IsSet to true.|
|void|[ClearErrors](/unreal-plugins/all/structfrhapi__postgameeventsresponse/#structFRHAPI__PostGameEventsResponse_1afbb863db522201168db69a6f6c10e2af)()|Clears the value of Errors_Optional and sets Errors_IsSet to false.|
## Public Attributes



### `PostedEvents` <a id="structFRHAPI__PostGameEventsResponse_1ab14cbee3111a9f8af4d2dc4a81b91a77"></a>

`int32 FRHAPI_PostGameEventsResponse::PostedEvents`

Number of events successfully posted to Event Hub.




### `Errors_Optional` <a id="structFRHAPI__PostGameEventsResponse_1a4bcd13cbbb6908fe7b3c2cd698b09b3d"></a>

`TArray<FRHAPI_JsonValue> FRHAPI_PostGameEventsResponse::Errors_Optional`

list of validation failure for each event.




### `Errors_IsSet` <a id="structFRHAPI__PostGameEventsResponse_1a64e1d83ca099175ac36efd3fd0778b4f"></a>

`bool FRHAPI_PostGameEventsResponse::Errors_IsSet`

true if Errors_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PostGameEventsResponse_1ae85902fce843a04afa56f4a445605834"></a>

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



### `WriteJson` <a id="structFRHAPI__PostGameEventsResponse_1a2526583c3c98ef274d01a87d86108cb0"></a>

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



### `GetPostedEvents` <a id="structFRHAPI__PostGameEventsResponse_1a5d308cdc0e5647372e993ed02ec53701"></a>

int32 & GetPostedEvents()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PostedEvents.




### `GetPostedEvents` <a id="structFRHAPI__PostGameEventsResponse_1ac08763c5db10d34a410d0ed7711bf03a"></a>

const int32 & GetPostedEvents()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PostedEvents.




### `SetPostedEvents` <a id="structFRHAPI__PostGameEventsResponse_1a2ccb7747d3b05789b3362e423ec658fe"></a>

void SetPostedEvents(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PostedEvents.




### `IsPostedEventsDefaultValue` <a id="structFRHAPI__PostGameEventsResponse_1a33f77ad6d36173417f8a53c402654493"></a>

bool IsPostedEventsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PostedEvents matches the default value.




### `SetPostedEventsToDefault` <a id="structFRHAPI__PostGameEventsResponse_1a3f5dfe2d5d14b932b8502db6a2ca119a"></a>

void SetPostedEventsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PostedEvents to its default




### `GetErrors` <a id="structFRHAPI__PostGameEventsResponse_1af6ed576d107b976b7c215980b44843d9"></a>

TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & GetErrors()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Errors_Optional, regardless of it having been set.




### `GetErrors` <a id="structFRHAPI__PostGameEventsResponse_1a3547a97c61fc1e3f211c540c81159cd9"></a>

const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & GetErrors()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Errors_Optional, regardless of it having been set.




### `GetErrors` <a id="structFRHAPI__PostGameEventsResponse_1ae108ad84828b04fde877aacd7553c19a"></a>

const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & GetErrors(const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|DefaultValue|

#### Description

Gets the value of Errors_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetErrors` <a id="structFRHAPI__PostGameEventsResponse_1afdeb56eacaf89f648ca521d479fa2c23"></a>

bool GetErrors(TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > &|OutValue|

#### Description

Fills OutValue with the value of Errors_Optional and returns true if it has been set, otherwise returns false.




### `GetErrorsOrNull` <a id="structFRHAPI__PostGameEventsResponse_1a87b36b7499a7e78bdc27f1d32666d849"></a>

TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > * GetErrorsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.




### `GetErrorsOrNull` <a id="structFRHAPI__PostGameEventsResponse_1a6e5cae343486059f6b3eaa11b8a60c90"></a>

const TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > * GetErrorsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.




### `SetErrors` <a id="structFRHAPI__PostGameEventsResponse_1a25c25fc991dbbfa0bd1a9d4042835053"></a>

void SetErrors(TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) >|NewValue|

#### Description

Sets the value of Errors_Optional and also sets Errors_IsSet to true.




### `ClearErrors` <a id="structFRHAPI__PostGameEventsResponse_1afbb863db522201168db69a6f6c10e2af"></a>

void ClearErrors()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Errors_Optional and sets Errors_IsSet to false.





