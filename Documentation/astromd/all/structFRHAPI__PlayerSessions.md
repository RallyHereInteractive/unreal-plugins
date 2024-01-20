---
title: FRHAPI_PlayerSessions Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Information about all sessions that a player is currently a member of, or invited to.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) >|[Sessions_Optional](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1ac0452090142cdd25a70291a47731e4ed)|Session associated with this player, and any pending invites.|
|bool|[Sessions_IsSet](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a65be3a391fe50890ec37f01d3ac18e0d)|true if Sessions_Optional has been set to a value|
|FDateTime|[LastUpdatedTimestamp_Optional](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a1421f6c78dbccd3f16e0d373eb93a8c0)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[LastUpdatedTimestamp_IsSet](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1acb79f047f9fe82dffe5290d34aa4a750)|true if LastUpdatedTimestamp_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a1cbd1f3f619a56d77b46507a8038e523)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a05d62fde50431853d32a40cf9a32ac0a)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > &|[GetSessions](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1aa6986ffaa36620a5719a17f589d79f4b)()|Gets the value of Sessions_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > &|[GetSessions](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a10dd3287bdd0c41e99f7ced2b7dc7507)()|Gets the value of Sessions_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > &|[GetSessions](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a208cd475cdba50f450d9f233ca3d919c)(const TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > & DefaultValue)|Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSessions](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1ac3bd1f379b91636f171e1fa994082069)(TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > & OutValue)|Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > *|[GetSessionsOrNull](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1adfb154252949cd0d9a80807702554686)()|Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > *|[GetSessionsOrNull](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a186fdf0aa80993ab97e5e51d2e1e1a0d)()|Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSessions](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1ae3d490fea8b14a2b3d05310743ea6f09)(TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > NewValue)|Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.|
|void|[ClearSessions](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a11f4d310ceb782cf2b7912bb7d853910)()|Clears the value of Sessions_Optional and sets Sessions_IsSet to false.|
|FDateTime &|[GetLastUpdatedTimestamp](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a721f38d6641e78b9930b400bf9112ee3)()|Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.|
|const FDateTime &|[GetLastUpdatedTimestamp](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a3cd547cd72593da70e58358cce255a72)()|Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.|
|const FDateTime &|[GetLastUpdatedTimestamp](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a261728fd87870f4f529146642b413fe7)(const FDateTime & DefaultValue)|Gets the value of LastUpdatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLastUpdatedTimestamp](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1af64484360e07e3dbf4c4477b33ac6523)(FDateTime & OutValue)|Fills OutValue with the value of LastUpdatedTimestamp_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetLastUpdatedTimestampOrNull](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a33739c3ea2556fdb10a6183583fe3971)()|Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetLastUpdatedTimestampOrNull](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a2560de427b581886661de0c0d9a393bb)()|Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLastUpdatedTimestamp](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a890896cdf1ba717ef7c12b11f7a540ba)(FDateTime NewValue)|Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true.|
|void|[ClearLastUpdatedTimestamp](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions_1a158685391d310a57b456883520d177d0)()|Clears the value of LastUpdatedTimestamp_Optional and sets LastUpdatedTimestamp_IsSet to false.|
## Public Attributes



### `Sessions_Optional` <a id="structFRHAPI__PlayerSessions_1ac0452090142cdd25a70291a47731e4ed"></a>

`TMap<FString, FRHAPI_PlayerSession> FRHAPI_PlayerSessions::Sessions_Optional`

Session associated with this player, and any pending invites.




### `Sessions_IsSet` <a id="structFRHAPI__PlayerSessions_1a65be3a391fe50890ec37f01d3ac18e0d"></a>

`bool FRHAPI_PlayerSessions::Sessions_IsSet`

true if Sessions_Optional has been set to a value




### `LastUpdatedTimestamp_Optional` <a id="structFRHAPI__PlayerSessions_1a1421f6c78dbccd3f16e0d373eb93a8c0"></a>

`FDateTime FRHAPI_PlayerSessions::LastUpdatedTimestamp_Optional`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `LastUpdatedTimestamp_IsSet` <a id="structFRHAPI__PlayerSessions_1acb79f047f9fe82dffe5290d34aa4a750"></a>

`bool FRHAPI_PlayerSessions::LastUpdatedTimestamp_IsSet`

true if LastUpdatedTimestamp_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerSessions_1a1cbd1f3f619a56d77b46507a8038e523"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerSessions_1a05d62fde50431853d32a40cf9a32ac0a"></a>

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



### `GetSessions` <a id="structFRHAPI__PlayerSessions_1aa6986ffaa36620a5719a17f589d79f4b"></a>

TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > & GetSessions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Sessions_Optional, regardless of it having been set.




### `GetSessions` <a id="structFRHAPI__PlayerSessions_1a10dd3287bdd0c41e99f7ced2b7dc7507"></a>

const TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > & GetSessions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Sessions_Optional, regardless of it having been set.




### `GetSessions` <a id="structFRHAPI__PlayerSessions_1a208cd475cdba50f450d9f233ca3d919c"></a>

const TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > & GetSessions(const TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > &|DefaultValue|

#### Description

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSessions` <a id="structFRHAPI__PlayerSessions_1ac3bd1f379b91636f171e1fa994082069"></a>

bool GetSessions(TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > &|OutValue|

#### Description

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.




### `GetSessionsOrNull` <a id="structFRHAPI__PlayerSessions_1adfb154252949cd0d9a80807702554686"></a>

TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > * GetSessionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.




### `GetSessionsOrNull` <a id="structFRHAPI__PlayerSessions_1a186fdf0aa80993ab97e5e51d2e1e1a0d"></a>

const TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > * GetSessionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.




### `SetSessions` <a id="structFRHAPI__PlayerSessions_1ae3d490fea8b14a2b3d05310743ea6f09"></a>

void SetSessions(TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PlayerSession](/unreal-plugins/all/structfrhapi__playersession/#structFRHAPI__PlayerSession) >|NewValue|

#### Description

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.




### `ClearSessions` <a id="structFRHAPI__PlayerSessions_1a11f4d310ceb782cf2b7912bb7d853910"></a>

void ClearSessions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.




### `GetLastUpdatedTimestamp` <a id="structFRHAPI__PlayerSessions_1a721f38d6641e78b9930b400bf9112ee3"></a>

FDateTime & GetLastUpdatedTimestamp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.




### `GetLastUpdatedTimestamp` <a id="structFRHAPI__PlayerSessions_1a3cd547cd72593da70e58358cce255a72"></a>

const FDateTime & GetLastUpdatedTimestamp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.




### `GetLastUpdatedTimestamp` <a id="structFRHAPI__PlayerSessions_1a261728fd87870f4f529146642b413fe7"></a>

const FDateTime & GetLastUpdatedTimestamp(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of LastUpdatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLastUpdatedTimestamp` <a id="structFRHAPI__PlayerSessions_1af64484360e07e3dbf4c4477b33ac6523"></a>

bool GetLastUpdatedTimestamp(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of LastUpdatedTimestamp_Optional and returns true if it has been set, otherwise returns false.




### `GetLastUpdatedTimestampOrNull` <a id="structFRHAPI__PlayerSessions_1a33739c3ea2556fdb10a6183583fe3971"></a>

FDateTime * GetLastUpdatedTimestampOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.




### `GetLastUpdatedTimestampOrNull` <a id="structFRHAPI__PlayerSessions_1a2560de427b581886661de0c0d9a393bb"></a>

const FDateTime * GetLastUpdatedTimestampOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.




### `SetLastUpdatedTimestamp` <a id="structFRHAPI__PlayerSessions_1a890896cdf1ba717ef7c12b11f7a540ba"></a>

void SetLastUpdatedTimestamp(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true.




### `ClearLastUpdatedTimestamp` <a id="structFRHAPI__PlayerSessions_1a158685391d310a57b456883520d177d0"></a>

void ClearLastUpdatedTimestamp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LastUpdatedTimestamp_Optional and sets LastUpdatedTimestamp_IsSet to false.





