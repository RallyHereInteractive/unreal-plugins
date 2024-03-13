---
title: FRHAPI_RallyHereEvent Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[EventUUID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a17cc424daeab709e9956d13998d41577)|Unique Event ID for this instance of the event.|
|FString|[EventName](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a656a296942ca42e695f76903e85c4595)|Type of event to process this as.|
|FDateTime|[EventTimestamp](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a21d884d4685260a84308c9b9f19bf30f)|Time the event was triggered.|
|TMap< FString, FString >|[EventParams](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a3c389602c5b095ae1eb16f2dcb90198b)|Event specific parameters.|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|[CustomData_Optional](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a597a285379f9219c1dde137bd86c07cd)|Event custom data.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a75c2cf8558bf9cb079cda2338ff78ec8)|true if CustomData_Optional has been set to a value|
|FString|[UserID_Optional](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a9d8f7a27032977911472882f63f80235)|User who submitted the event.|
|bool|[UserID_IsSet](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1ac7b987781945f3d4637fc8c008ca6c11)|true if UserID_Optional has been set to a value|
|FString|[SessionID_Optional](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1aeb41043d2df419b698f2c9157e69d5ec)|Session ID to associate the event with.|
|bool|[SessionID_IsSet](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1ab5334d234c8b0dfb65d3816f4024faa0)|true if SessionID_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a274e63cdf9ce91a751d12e9d5b0072d1)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a78aca75728bbab8942e70e3320d26f66)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetEventUUID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1aedf4fc36cde18b6a5bfda6e76ebd37c4)()|Gets the value of EventUUID.|
|const FGuid &|[GetEventUUID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1af510594195a9f807f8839921029d7379)()|Gets the value of EventUUID.|
|void|[SetEventUUID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a98762d10dbd98271a403fe898082f2cb)(FGuid NewValue)|Sets the value of EventUUID.|
|FString &|[GetEventName](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a8c0b6b106b52c8226290baecc2116bec)()|Gets the value of EventName.|
|const FString &|[GetEventName](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a6cbf1d4eae5f048fd0f5b0ef22071038)()|Gets the value of EventName.|
|void|[SetEventName](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a9e8c56e17ec3cc31ad3631304f49d044)(FString NewValue)|Sets the value of EventName.|
|FDateTime &|[GetEventTimestamp](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a9ab03712935c73f7d5f36c60429680d7)()|Gets the value of EventTimestamp.|
|const FDateTime &|[GetEventTimestamp](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a5d65f5360e0bc88c4ea2374bee40d3e8)()|Gets the value of EventTimestamp.|
|void|[SetEventTimestamp](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1ad478284f0400f058a9d0400fac9ff822)(FDateTime NewValue)|Sets the value of EventTimestamp.|
|TMap< FString, FString > &|[GetEventParams](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a775a23133aa9c8077906ff8aea74f7e8)()|Gets the value of EventParams.|
|const TMap< FString, FString > &|[GetEventParams](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a0be8c28670c31de4b5f4de130ded2ff7)()|Gets the value of EventParams.|
|void|[SetEventParams](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a8ec6d72db70dedcd8e7aa3a12e4e95e0)(TMap< FString, FString > NewValue)|Sets the value of EventParams.|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetCustomData](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1acb77d7c51fa1543b451db82cd9230e90)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetCustomData](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a7bae198c95d7bbb7b7e2455e701a9c9f)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetCustomData](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a9c39df555fb3a70e26e6002123fe0913)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a5d52bb1c648c8b9db7408edc21a82d19)([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1ae906a40c0127305e7eed02b2713c9090)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a4b6a83fa449f49e96628f2519d1389ae)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a3dd12474a1a6edef3fd913b8d14bfac0)([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|FString &|[GetUserID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1aabebb43614f85ed9a65d17d00ccb7a38)()|Gets the value of UserID_Optional, regardless of it having been set.|
|const FString &|[GetUserID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1add05d2a19609299568515c4f780e4037)()|Gets the value of UserID_Optional, regardless of it having been set.|
|const FString &|[GetUserID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a0d77d2a891a6c3c43d1c6977ef9952f8)(const FString & DefaultValue)|Gets the value of UserID_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetUserID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a0f6ba09a6d558da4b9ac958c877735b3)(FString & OutValue)|Fills OutValue with the value of UserID_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetUserIDOrNull](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a9f55bfb24698507fac3c876bfdbcb1c3)()|Returns a pointer to UserID_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetUserIDOrNull](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1ae54c2ed20e0f98ece0f5d2c99ec5d91f)()|Returns a pointer to UserID_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetUserID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a5fbb5ae83d3265a4354fde43af3e873e)(FString NewValue)|Sets the value of UserID_Optional and also sets UserID_IsSet to true.|
|void|[ClearUserID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a2a0d022aec78e8503646348efc63e2dc)()|Clears the value of UserID_Optional and sets UserID_IsSet to false.|
|FString &|[GetSessionID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a25f5bbb6ebe03c0a397a66a0445cbc6a)()|Gets the value of SessionID_Optional, regardless of it having been set.|
|const FString &|[GetSessionID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a74c4856b88efc0c5cf8bc41a662e9e97)()|Gets the value of SessionID_Optional, regardless of it having been set.|
|const FString &|[GetSessionID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1ab63bacad1fcd95ff5994cb7c69e83adf)(const FString & DefaultValue)|Gets the value of SessionID_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSessionID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1ae9a8982e27b8028f4ae0ff0728cb843d)(FString & OutValue)|Fills OutValue with the value of SessionID_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetSessionIDOrNull](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a86f6c85e9d57c983d50063d21b28c7af)()|Returns a pointer to SessionID_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetSessionIDOrNull](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a7240018ccde931badc3907070aef478c)()|Returns a pointer to SessionID_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSessionID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1a2d652dc32bccd4710d2068cea90b3c26)(FString NewValue)|Sets the value of SessionID_Optional and also sets SessionID_IsSet to true.|
|void|[ClearSessionID](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent_1ac600f84f7eb4945fe80cf5165968541e)()|Clears the value of SessionID_Optional and sets SessionID_IsSet to false.|
## Public Attributes



### `EventUUID` <a id="structFRHAPI__RallyHereEvent_1a17cc424daeab709e9956d13998d41577"></a>

`FGuid FRHAPI_RallyHereEvent::EventUUID`

Unique Event ID for this instance of the event.




### `EventName` <a id="structFRHAPI__RallyHereEvent_1a656a296942ca42e695f76903e85c4595"></a>

`FString FRHAPI_RallyHereEvent::EventName`

Type of event to process this as.




### `EventTimestamp` <a id="structFRHAPI__RallyHereEvent_1a21d884d4685260a84308c9b9f19bf30f"></a>

`FDateTime FRHAPI_RallyHereEvent::EventTimestamp`

Time the event was triggered.




### `EventParams` <a id="structFRHAPI__RallyHereEvent_1a3c389602c5b095ae1eb16f2dcb90198b"></a>

`TMap<FString, FString> FRHAPI_RallyHereEvent::EventParams`

Event specific parameters.




### `CustomData_Optional` <a id="structFRHAPI__RallyHereEvent_1a597a285379f9219c1dde137bd86c07cd"></a>

`FRHAPI_JsonObject FRHAPI_RallyHereEvent::CustomData_Optional`

Event custom data.




### `CustomData_IsSet` <a id="structFRHAPI__RallyHereEvent_1a75c2cf8558bf9cb079cda2338ff78ec8"></a>

`bool FRHAPI_RallyHereEvent::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `UserID_Optional` <a id="structFRHAPI__RallyHereEvent_1a9d8f7a27032977911472882f63f80235"></a>

`FString FRHAPI_RallyHereEvent::UserID_Optional`

User who submitted the event.




### `UserID_IsSet` <a id="structFRHAPI__RallyHereEvent_1ac7b987781945f3d4637fc8c008ca6c11"></a>

`bool FRHAPI_RallyHereEvent::UserID_IsSet`

true if UserID_Optional has been set to a value




### `SessionID_Optional` <a id="structFRHAPI__RallyHereEvent_1aeb41043d2df419b698f2c9157e69d5ec"></a>

`FString FRHAPI_RallyHereEvent::SessionID_Optional`

Session ID to associate the event with.




### `SessionID_IsSet` <a id="structFRHAPI__RallyHereEvent_1ab5334d234c8b0dfb65d3816f4024faa0"></a>

`bool FRHAPI_RallyHereEvent::SessionID_IsSet`

true if SessionID_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__RallyHereEvent_1a274e63cdf9ce91a751d12e9d5b0072d1"></a>

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



### `WriteJson` <a id="structFRHAPI__RallyHereEvent_1a78aca75728bbab8942e70e3320d26f66"></a>

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



### `GetEventUUID` <a id="structFRHAPI__RallyHereEvent_1aedf4fc36cde18b6a5bfda6e76ebd37c4"></a>

FGuid & GetEventUUID()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventUUID.




### `GetEventUUID` <a id="structFRHAPI__RallyHereEvent_1af510594195a9f807f8839921029d7379"></a>

const FGuid & GetEventUUID()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventUUID.




### `SetEventUUID` <a id="structFRHAPI__RallyHereEvent_1a98762d10dbd98271a403fe898082f2cb"></a>

void SetEventUUID(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of EventUUID.




### `GetEventName` <a id="structFRHAPI__RallyHereEvent_1a8c0b6b106b52c8226290baecc2116bec"></a>

FString & GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventName.




### `GetEventName` <a id="structFRHAPI__RallyHereEvent_1a6cbf1d4eae5f048fd0f5b0ef22071038"></a>

const FString & GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventName.




### `SetEventName` <a id="structFRHAPI__RallyHereEvent_1a9e8c56e17ec3cc31ad3631304f49d044"></a>

void SetEventName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of EventName.




### `GetEventTimestamp` <a id="structFRHAPI__RallyHereEvent_1a9ab03712935c73f7d5f36c60429680d7"></a>

FDateTime & GetEventTimestamp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventTimestamp.




### `GetEventTimestamp` <a id="structFRHAPI__RallyHereEvent_1a5d65f5360e0bc88c4ea2374bee40d3e8"></a>

const FDateTime & GetEventTimestamp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventTimestamp.




### `SetEventTimestamp` <a id="structFRHAPI__RallyHereEvent_1ad478284f0400f058a9d0400fac9ff822"></a>

void SetEventTimestamp(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of EventTimestamp.




### `GetEventParams` <a id="structFRHAPI__RallyHereEvent_1a775a23133aa9c8077906ff8aea74f7e8"></a>

TMap< FString, FString > & GetEventParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventParams.




### `GetEventParams` <a id="structFRHAPI__RallyHereEvent_1a0be8c28670c31de4b5f4de130ded2ff7"></a>

const TMap< FString, FString > & GetEventParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventParams.




### `SetEventParams` <a id="structFRHAPI__RallyHereEvent_1a8ec6d72db70dedcd8e7aa3a12e4e95e0"></a>

void SetEventParams(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of EventParams.




### `GetCustomData` <a id="structFRHAPI__RallyHereEvent_1acb77d7c51fa1543b451db82cd9230e90"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__RallyHereEvent_1a7bae198c95d7bbb7b7e2455e701a9c9f"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__RallyHereEvent_1a9c39df555fb3a70e26e6002123fe0913"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetCustomData(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__RallyHereEvent_1a5d52bb1c648c8b9db7408edc21a82d19"></a>

bool GetCustomData([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__RallyHereEvent_1ae906a40c0127305e7eed02b2713c9090"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__RallyHereEvent_1a4b6a83fa449f49e96628f2519d1389ae"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__RallyHereEvent_1a3dd12474a1a6edef3fd913b8d14bfac0"></a>

void SetCustomData([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__RallyHereEvent_1a25599661d7605c4bc5f94814ecdf0702"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetUserID` <a id="structFRHAPI__RallyHereEvent_1aabebb43614f85ed9a65d17d00ccb7a38"></a>

FString & GetUserID()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UserID_Optional, regardless of it having been set.




### `GetUserID` <a id="structFRHAPI__RallyHereEvent_1add05d2a19609299568515c4f780e4037"></a>

const FString & GetUserID()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UserID_Optional, regardless of it having been set.




### `GetUserID` <a id="structFRHAPI__RallyHereEvent_1a0d77d2a891a6c3c43d1c6977ef9952f8"></a>

const FString & GetUserID(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of UserID_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetUserID` <a id="structFRHAPI__RallyHereEvent_1a0f6ba09a6d558da4b9ac958c877735b3"></a>

bool GetUserID(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of UserID_Optional and returns true if it has been set, otherwise returns false.




### `GetUserIDOrNull` <a id="structFRHAPI__RallyHereEvent_1a9f55bfb24698507fac3c876bfdbcb1c3"></a>

FString * GetUserIDOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UserID_Optional, if it has been set, otherwise returns nullptr.




### `GetUserIDOrNull` <a id="structFRHAPI__RallyHereEvent_1ae54c2ed20e0f98ece0f5d2c99ec5d91f"></a>

const FString * GetUserIDOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UserID_Optional, if it has been set, otherwise returns nullptr.




### `SetUserID` <a id="structFRHAPI__RallyHereEvent_1a5fbb5ae83d3265a4354fde43af3e873e"></a>

void SetUserID(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of UserID_Optional and also sets UserID_IsSet to true.




### `ClearUserID` <a id="structFRHAPI__RallyHereEvent_1a2a0d022aec78e8503646348efc63e2dc"></a>

void ClearUserID()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of UserID_Optional and sets UserID_IsSet to false.




### `GetSessionID` <a id="structFRHAPI__RallyHereEvent_1a25f5bbb6ebe03c0a397a66a0445cbc6a"></a>

FString & GetSessionID()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionID_Optional, regardless of it having been set.




### `GetSessionID` <a id="structFRHAPI__RallyHereEvent_1a74c4856b88efc0c5cf8bc41a662e9e97"></a>

const FString & GetSessionID()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionID_Optional, regardless of it having been set.




### `GetSessionID` <a id="structFRHAPI__RallyHereEvent_1ab63bacad1fcd95ff5994cb7c69e83adf"></a>

const FString & GetSessionID(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of SessionID_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSessionID` <a id="structFRHAPI__RallyHereEvent_1ae9a8982e27b8028f4ae0ff0728cb843d"></a>

bool GetSessionID(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of SessionID_Optional and returns true if it has been set, otherwise returns false.




### `GetSessionIDOrNull` <a id="structFRHAPI__RallyHereEvent_1a86f6c85e9d57c983d50063d21b28c7af"></a>

FString * GetSessionIDOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SessionID_Optional, if it has been set, otherwise returns nullptr.




### `GetSessionIDOrNull` <a id="structFRHAPI__RallyHereEvent_1a7240018ccde931badc3907070aef478c"></a>

const FString * GetSessionIDOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SessionID_Optional, if it has been set, otherwise returns nullptr.




### `SetSessionID` <a id="structFRHAPI__RallyHereEvent_1a2d652dc32bccd4710d2068cea90b3c26"></a>

void SetSessionID(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of SessionID_Optional and also sets SessionID_IsSet to true.




### `ClearSessionID` <a id="structFRHAPI__RallyHereEvent_1ac600f84f7eb4945fe80cf5165968541e"></a>

void ClearSessionID()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SessionID_Optional and sets SessionID_IsSet to false.





