---
title: FRHAPI_Notifications Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) >|[Notifications_Optional](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1a0bf3aa9ba6d2b3e4edb9fe9349833122)|List of notifications.|
|bool|[Notifications_IsSet](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1a23b554d64f425834a6ba28ac850a66a0)|true if Notifications_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1a8e6f88ce785d00b5a08e5f628548d40f)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1ad9d21610b3fc82034c570e4724adb55f)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > &|[GetNotifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1ad71dc5b11bc4a8bf5dfedd76389ae9ce)()|Gets the value of Notifications_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > &|[GetNotifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1afd69056610fe73ad8158d15a3e12452a)()|Gets the value of Notifications_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > &|[GetNotifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1a598ffd3e7077b3fc61cb56b89801b759)(const TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > & DefaultValue)|Gets the value of Notifications_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNotifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1a7f1ba68ab77910889f7eed1408a90a6d)(TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > & OutValue)|Fills OutValue with the value of Notifications_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > *|[GetNotificationsOrNull](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1ad665102ee0c88831a48ed45797ab4186)()|Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > *|[GetNotificationsOrNull](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1a6aaef183ae54e0157e1d902edad7bdea)()|Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNotifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1ace382adf0ac946e08db0343803e17183)(TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > NewValue)|Sets the value of Notifications_Optional and also sets Notifications_IsSet to true.|
|void|[ClearNotifications](/unreal-plugins/all/structfrhapi__notifications/#structFRHAPI__Notifications_1ab07527aa1d7b633c781fd47dae70826d)()|Clears the value of Notifications_Optional and sets Notifications_IsSet to false.|
## Public Attributes



### `Notifications_Optional` <a id="structFRHAPI__Notifications_1a0bf3aa9ba6d2b3e4edb9fe9349833122"></a>

`TArray<FRHAPI_Notification> FRHAPI_Notifications::Notifications_Optional`

List of notifications.




### `Notifications_IsSet` <a id="structFRHAPI__Notifications_1a23b554d64f425834a6ba28ac850a66a0"></a>

`bool FRHAPI_Notifications::Notifications_IsSet`

true if Notifications_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Notifications_1a8e6f88ce785d00b5a08e5f628548d40f"></a>

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



### `WriteJson` <a id="structFRHAPI__Notifications_1ad9d21610b3fc82034c570e4724adb55f"></a>

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



### `GetNotifications` <a id="structFRHAPI__Notifications_1ad71dc5b11bc4a8bf5dfedd76389ae9ce"></a>

TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > & GetNotifications()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notifications_Optional, regardless of it having been set.




### `GetNotifications` <a id="structFRHAPI__Notifications_1afd69056610fe73ad8158d15a3e12452a"></a>

const TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > & GetNotifications()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notifications_Optional, regardless of it having been set.




### `GetNotifications` <a id="structFRHAPI__Notifications_1a598ffd3e7077b3fc61cb56b89801b759"></a>

const TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > & GetNotifications(const TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > &|DefaultValue|

#### Description

Gets the value of Notifications_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNotifications` <a id="structFRHAPI__Notifications_1a7f1ba68ab77910889f7eed1408a90a6d"></a>

bool GetNotifications(TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > &|OutValue|

#### Description

Fills OutValue with the value of Notifications_Optional and returns true if it has been set, otherwise returns false.




### `GetNotificationsOrNull` <a id="structFRHAPI__Notifications_1ad665102ee0c88831a48ed45797ab4186"></a>

TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > * GetNotificationsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.




### `GetNotificationsOrNull` <a id="structFRHAPI__Notifications_1a6aaef183ae54e0157e1d902edad7bdea"></a>

const TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > * GetNotificationsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.




### `SetNotifications` <a id="structFRHAPI__Notifications_1ace382adf0ac946e08db0343803e17183"></a>

void SetNotifications(TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) >|NewValue|

#### Description

Sets the value of Notifications_Optional and also sets Notifications_IsSet to true.




### `ClearNotifications` <a id="structFRHAPI__Notifications_1ab07527aa1d7b633c781fd47dae70826d"></a>

void ClearNotifications()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Notifications_Optional and sets Notifications_IsSet to false.





