---
title: FRHAPI_SessionEvents Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A list of events that occurred in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) >|[Events_Optional](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1afa117b66782f3028c18566fd8b9d1cab)|A list of the events that have occurred in a given session.|
|bool|[Events_IsSet](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1aba39793fed0e479f324a41e3a2d17f14)|true if Events_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1a55953462f01cbd21c46f0a8ab59e3ce9)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1aaab6f4110d88366d0647cfef9599c440)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > &|[GetEvents](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1a907a373a6b5bb6bb50b2607db99114ea)()|Gets the value of Events_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > &|[GetEvents](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1a5ee6ceda5517ee888373526aaed8bb32)()|Gets the value of Events_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > &|[GetEvents](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1a140834e1af9be77df4d20f78b28797b9)(const TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > & DefaultValue)|Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEvents](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1a0dbfe1a06ad0b9efecad61e8c3f64007)(TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > & OutValue)|Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > *|[GetEventsOrNull](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1ae6c1cb65b7d819b36bb7e45b7b62df18)()|Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > *|[GetEventsOrNull](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1afbad1e6c9072e3166dcdc713959a9168)()|Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEvents](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1a826209e591429c44673122ea2d55cd41)(TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > NewValue)|Sets the value of Events_Optional and also sets Events_IsSet to true.|
|void|[ClearEvents](/unreal-plugins/all/structfrhapi__sessionevents/#structFRHAPI__SessionEvents_1a073b1af664748fe26ad7b73ce54b75d4)()|Clears the value of Events_Optional and sets Events_IsSet to false.|
## Public Attributes



### `Events_Optional` <a id="structFRHAPI__SessionEvents_1afa117b66782f3028c18566fd8b9d1cab"></a>

`TArray<FRHAPI_SessionEvent> FRHAPI_SessionEvents::Events_Optional`

A list of the events that have occurred in a given session.




### `Events_IsSet` <a id="structFRHAPI__SessionEvents_1aba39793fed0e479f324a41e3a2d17f14"></a>

`bool FRHAPI_SessionEvents::Events_IsSet`

true if Events_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionEvents_1a55953462f01cbd21c46f0a8ab59e3ce9"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionEvents_1aaab6f4110d88366d0647cfef9599c440"></a>

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



### `GetEvents` <a id="structFRHAPI__SessionEvents_1a907a373a6b5bb6bb50b2607db99114ea"></a>

TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > & GetEvents()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Events_Optional, regardless of it having been set.




### `GetEvents` <a id="structFRHAPI__SessionEvents_1a5ee6ceda5517ee888373526aaed8bb32"></a>

const TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > & GetEvents()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Events_Optional, regardless of it having been set.




### `GetEvents` <a id="structFRHAPI__SessionEvents_1a140834e1af9be77df4d20f78b28797b9"></a>

const TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > & GetEvents(const TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > &|DefaultValue|

#### Description

Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEvents` <a id="structFRHAPI__SessionEvents_1a0dbfe1a06ad0b9efecad61e8c3f64007"></a>

bool GetEvents(TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > &|OutValue|

#### Description

Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.




### `GetEventsOrNull` <a id="structFRHAPI__SessionEvents_1ae6c1cb65b7d819b36bb7e45b7b62df18"></a>

TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > * GetEventsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.




### `GetEventsOrNull` <a id="structFRHAPI__SessionEvents_1afbad1e6c9072e3166dcdc713959a9168"></a>

const TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > * GetEventsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.




### `SetEvents` <a id="structFRHAPI__SessionEvents_1a826209e591429c44673122ea2d55cd41"></a>

void SetEvents(TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_SessionEvent](/unreal-plugins/all/structfrhapi__sessionevent/#structFRHAPI__SessionEvent) >|NewValue|

#### Description

Sets the value of Events_Optional and also sets Events_IsSet to true.




### `ClearEvents` <a id="structFRHAPI__SessionEvents_1a073b1af664748fe26ad7b73ce54b75d4"></a>

void ClearEvents()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Events_Optional and sets Events_IsSet to false.





