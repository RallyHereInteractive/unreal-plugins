---
title: FRHAPI_EventList Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_RallyHereEvent](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent) >|[EventList](/unreal-plugins/all/structfrhapi__eventlist/#structFRHAPI__EventList_1ab40741de69839cb60db398e340ec2da7)|List of events.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__eventlist/#structFRHAPI__EventList_1a27fccb2ee3f7cc4403c9ac51d1a9e924)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__eventlist/#structFRHAPI__EventList_1af2eb5752d7bff14073f7062f6568e6f3)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_RallyHereEvent](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent) > &|[GetEventList](/unreal-plugins/all/structfrhapi__eventlist/#structFRHAPI__EventList_1aee65131c89751011cb94fb7d13e025fb)()|Gets the value of EventList.|
|const TArray< [FRHAPI_RallyHereEvent](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent) > &|[GetEventList](/unreal-plugins/all/structfrhapi__eventlist/#structFRHAPI__EventList_1a93799dde50ffba542b135d905641c5ae)()|Gets the value of EventList.|
|void|[SetEventList](/unreal-plugins/all/structfrhapi__eventlist/#structFRHAPI__EventList_1a9e6a338f4cbcbfc0d25d93a1e130853f)(TArray< [FRHAPI_RallyHereEvent](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent) > NewValue)|Sets the value of EventList.|
## Public Attributes



### `EventList` <a id="structFRHAPI__EventList_1ab40741de69839cb60db398e340ec2da7"></a>

`TArray<FRHAPI_RallyHereEvent> FRHAPI_EventList::EventList`

List of events.





## Public Functions



### `FromJson` <a id="structFRHAPI__EventList_1a27fccb2ee3f7cc4403c9ac51d1a9e924"></a>

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



### `WriteJson` <a id="structFRHAPI__EventList_1af2eb5752d7bff14073f7062f6568e6f3"></a>

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



### `GetEventList` <a id="structFRHAPI__EventList_1aee65131c89751011cb94fb7d13e025fb"></a>

TArray< [FRHAPI_RallyHereEvent](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent) > & GetEventList()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventList.




### `GetEventList` <a id="structFRHAPI__EventList_1a93799dde50ffba542b135d905641c5ae"></a>

const TArray< [FRHAPI_RallyHereEvent](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent) > & GetEventList()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventList.




### `SetEventList` <a id="structFRHAPI__EventList_1a9e6a338f4cbcbfc0d25d93a1e130853f"></a>

void SetEventList(TArray< [FRHAPI_RallyHereEvent](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_RallyHereEvent](/unreal-plugins/all/structfrhapi__rallyhereevent/#structFRHAPI__RallyHereEvent) >|NewValue|

#### Description

Sets the value of EventList.





