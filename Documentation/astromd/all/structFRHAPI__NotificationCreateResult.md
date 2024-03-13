---
title: FRHAPI_NotificationCreateResult Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[NotificationId](/unreal-plugins/all/structfrhapi__notificationcreateresult/#structFRHAPI__NotificationCreateResult_1a2470f8689b67650ca67a241f190d2cf5)|Unique Identifier for the last notification created. You cannot depend on the format of this string, and it must be considered opaque.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__notificationcreateresult/#structFRHAPI__NotificationCreateResult_1a5a8457b6b75cd0bbf39e89b789a50fa9)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__notificationcreateresult/#structFRHAPI__NotificationCreateResult_1a5c75358a5507ce1ca7d2640273faf0a3)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetNotificationId](/unreal-plugins/all/structfrhapi__notificationcreateresult/#structFRHAPI__NotificationCreateResult_1a185596c9052bde6a9bb6a89aa9562073)()|Gets the value of NotificationId.|
|const FString &|[GetNotificationId](/unreal-plugins/all/structfrhapi__notificationcreateresult/#structFRHAPI__NotificationCreateResult_1a0db393cd84c4b3a8858fcefc6eb6c04c)()|Gets the value of NotificationId.|
|void|[SetNotificationId](/unreal-plugins/all/structfrhapi__notificationcreateresult/#structFRHAPI__NotificationCreateResult_1af3fd2cd980ce7c6400b136f878f15f67)(FString NewValue)|Sets the value of NotificationId.|
## Public Attributes



### `NotificationId` <a id="structFRHAPI__NotificationCreateResult_1a2470f8689b67650ca67a241f190d2cf5"></a>

`FString FRHAPI_NotificationCreateResult::NotificationId`

Unique Identifier for the last notification created. You cannot depend on the format of this string, and it must be considered opaque.





## Public Functions



### `FromJson` <a id="structFRHAPI__NotificationCreateResult_1a5a8457b6b75cd0bbf39e89b789a50fa9"></a>

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



### `WriteJson` <a id="structFRHAPI__NotificationCreateResult_1a5c75358a5507ce1ca7d2640273faf0a3"></a>

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



### `GetNotificationId` <a id="structFRHAPI__NotificationCreateResult_1a185596c9052bde6a9bb6a89aa9562073"></a>

FString & GetNotificationId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NotificationId.




### `GetNotificationId` <a id="structFRHAPI__NotificationCreateResult_1a0db393cd84c4b3a8858fcefc6eb6c04c"></a>

const FString & GetNotificationId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NotificationId.




### `SetNotificationId` <a id="structFRHAPI__NotificationCreateResult_1af3fd2cd980ce7c6400b136f878f15f67"></a>

void SetNotificationId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of NotificationId.





