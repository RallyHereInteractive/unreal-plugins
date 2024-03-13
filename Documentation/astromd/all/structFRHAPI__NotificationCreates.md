---
title: FRHAPI_NotificationCreates Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_NotificationCreate](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate) >|[Notifications](/unreal-plugins/all/structfrhapi__notificationcreates/#structFRHAPI__NotificationCreates_1ae5e68d62abaf22a7f915837ea078699b)|List of notifications creation requests.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__notificationcreates/#structFRHAPI__NotificationCreates_1a40c089cdce8ec2e20b67ac987dd8c508)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__notificationcreates/#structFRHAPI__NotificationCreates_1a6e1fc671101a6fb9cc5cfcb96ff067ae)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_NotificationCreate](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate) > &|[GetNotifications](/unreal-plugins/all/structfrhapi__notificationcreates/#structFRHAPI__NotificationCreates_1a9c4940dd27a70f36a6eddc2f3fc99578)()|Gets the value of Notifications.|
|const TArray< [FRHAPI_NotificationCreate](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate) > &|[GetNotifications](/unreal-plugins/all/structfrhapi__notificationcreates/#structFRHAPI__NotificationCreates_1a0c864431bbd3d55c5ac1d0c3000d6f8d)()|Gets the value of Notifications.|
|void|[SetNotifications](/unreal-plugins/all/structfrhapi__notificationcreates/#structFRHAPI__NotificationCreates_1a82108e9b74ec61cb3d11b686ce1d91c8)(TArray< [FRHAPI_NotificationCreate](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate) > NewValue)|Sets the value of Notifications.|
## Public Attributes



### `Notifications` <a id="structFRHAPI__NotificationCreates_1ae5e68d62abaf22a7f915837ea078699b"></a>

`TArray<FRHAPI_NotificationCreate> FRHAPI_NotificationCreates::Notifications`

List of notifications creation requests.





## Public Functions



### `FromJson` <a id="structFRHAPI__NotificationCreates_1a40c089cdce8ec2e20b67ac987dd8c508"></a>

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



### `WriteJson` <a id="structFRHAPI__NotificationCreates_1a6e1fc671101a6fb9cc5cfcb96ff067ae"></a>

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



### `GetNotifications` <a id="structFRHAPI__NotificationCreates_1a9c4940dd27a70f36a6eddc2f3fc99578"></a>

TArray< [FRHAPI_NotificationCreate](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate) > & GetNotifications()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notifications.




### `GetNotifications` <a id="structFRHAPI__NotificationCreates_1a0c864431bbd3d55c5ac1d0c3000d6f8d"></a>

const TArray< [FRHAPI_NotificationCreate](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate) > & GetNotifications()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notifications.




### `SetNotifications` <a id="structFRHAPI__NotificationCreates_1a82108e9b74ec61cb3d11b686ce1d91c8"></a>

void SetNotifications(TArray< [FRHAPI_NotificationCreate](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_NotificationCreate](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate) >|NewValue|

#### Description

Sets the value of Notifications.





