---
title: FRHAPI_PurgeRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Purge request to purge a person from the system. This will remove all data about that player from the system.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FDateTime|[SuggestedPurgeTime_Optional](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1a4bf9b1063d210902a3f01fcc374debef)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[SuggestedPurgeTime_IsSet](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1aeebdf2921a2e20d78da7649f9942d975)|true if SuggestedPurgeTime_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1ae2926f8ed4d7ada3270a24fa22581b04)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1a9f8aea049ea3ea3f3804fed6fc4af285)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FDateTime &|[GetSuggestedPurgeTime](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1a90f105ad324cb69521d1fb64afccdb9d)()|Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.|
|const FDateTime &|[GetSuggestedPurgeTime](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1aa373f9ebde40d495c28fd2d85fec7e08)()|Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.|
|const FDateTime &|[GetSuggestedPurgeTime](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1aa77827115c501ea8218a1feb85aa1168)(const FDateTime & DefaultValue)|Gets the value of SuggestedPurgeTime_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSuggestedPurgeTime](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1a809a8c516d3eddc8691bd59e3bdae36a)(FDateTime & OutValue)|Fills OutValue with the value of SuggestedPurgeTime_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetSuggestedPurgeTimeOrNull](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1ada5179545649871f9f6f1f67241de802)()|Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetSuggestedPurgeTimeOrNull](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1a8c060bac1f0fb9d171a069be84fd27a6)()|Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSuggestedPurgeTime](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1a984eb6ce9ebd05540f22ef48a4481a66)(FDateTime NewValue)|Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true.|
|void|[ClearSuggestedPurgeTime](/unreal-plugins/all/structfrhapi__purgerequest/#structFRHAPI__PurgeRequest_1a90e1c3b323ef9c0d6582d92a4ba4b990)()|Clears the value of SuggestedPurgeTime_Optional and sets SuggestedPurgeTime_IsSet to false.|
## Public Attributes



### `SuggestedPurgeTime_Optional` <a id="structFRHAPI__PurgeRequest_1a4bf9b1063d210902a3f01fcc374debef"></a>

`FDateTime FRHAPI_PurgeRequest::SuggestedPurgeTime_Optional`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `SuggestedPurgeTime_IsSet` <a id="structFRHAPI__PurgeRequest_1aeebdf2921a2e20d78da7649f9942d975"></a>

`bool FRHAPI_PurgeRequest::SuggestedPurgeTime_IsSet`

true if SuggestedPurgeTime_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PurgeRequest_1ae2926f8ed4d7ada3270a24fa22581b04"></a>

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



### `WriteJson` <a id="structFRHAPI__PurgeRequest_1a9f8aea049ea3ea3f3804fed6fc4af285"></a>

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



### `GetSuggestedPurgeTime` <a id="structFRHAPI__PurgeRequest_1a90f105ad324cb69521d1fb64afccdb9d"></a>

FDateTime & GetSuggestedPurgeTime()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.




### `GetSuggestedPurgeTime` <a id="structFRHAPI__PurgeRequest_1aa373f9ebde40d495c28fd2d85fec7e08"></a>

const FDateTime & GetSuggestedPurgeTime()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set.




### `GetSuggestedPurgeTime` <a id="structFRHAPI__PurgeRequest_1aa77827115c501ea8218a1feb85aa1168"></a>

const FDateTime & GetSuggestedPurgeTime(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of SuggestedPurgeTime_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSuggestedPurgeTime` <a id="structFRHAPI__PurgeRequest_1a809a8c516d3eddc8691bd59e3bdae36a"></a>

bool GetSuggestedPurgeTime(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of SuggestedPurgeTime_Optional and returns true if it has been set, otherwise returns false.




### `GetSuggestedPurgeTimeOrNull` <a id="structFRHAPI__PurgeRequest_1ada5179545649871f9f6f1f67241de802"></a>

FDateTime * GetSuggestedPurgeTimeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.




### `GetSuggestedPurgeTimeOrNull` <a id="structFRHAPI__PurgeRequest_1a8c060bac1f0fb9d171a069be84fd27a6"></a>

const FDateTime * GetSuggestedPurgeTimeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr.




### `SetSuggestedPurgeTime` <a id="structFRHAPI__PurgeRequest_1a984eb6ce9ebd05540f22ef48a4481a66"></a>

void SetSuggestedPurgeTime(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true.




### `ClearSuggestedPurgeTime` <a id="structFRHAPI__PurgeRequest_1a90e1c3b323ef9c0d6582d92a4ba4b990"></a>

void ClearSuggestedPurgeTime()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SuggestedPurgeTime_Optional and sets SuggestedPurgeTime_IsSet to false.





