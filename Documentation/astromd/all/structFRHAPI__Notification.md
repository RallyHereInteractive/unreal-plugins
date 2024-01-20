---
title: FRHAPI_Notification Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Message](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1ae4087f5fac717be76bd871f5d1eae466)|Base Message for the notification.|
|FString|[RhUrl_Optional](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1ac50019b604d4120f297b471f59e54b36)|Path to get additional data about this notification.|
|bool|[RhUrl_IsSet](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a90d058a7605a66d00476278add49a8e5)|true if RhUrl_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a2ed2e4d61f837740f5c6c7845e6ab8e9)|Custom values for the notification.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1abcde3f0d6857b25bc22e6e9ebc356a1b)|true if CustomData_Optional has been set to a value|
|FString|[Etag_Optional](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1ae8660f0a8480f5407e67755d9d4dbd44)|ETag for the resource at rh_url at the time of this notification.|
|bool|[Etag_IsSet](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a6b05614b7b3914a0d9ee31f2eac7eaab)|true if Etag_Optional has been set to a value|
|FString|[NotificationId](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1ab7fc8b3ac00ad8a3655c045b7f7b6bed)|Unique Identifier for the notification. You cannot depend on the format of this string, and it must be considered opaque.|
|FDateTime|[Created](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a8af4c0587e0e1ea8402658f2797c848e)|When this notification was added.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a290fa10324e33b33c0931c1d4ba92762)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a20876b56542c2a7f1fefa60733e924a2)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetMessage](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1ae013fad90cd40a95d2d627550491bcd3)()|Gets the value of Message.|
|const FString &|[GetMessage](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a483f507d7236fe1a937539bda11cb667)()|Gets the value of Message.|
|void|[SetMessage](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1ae5f6d7e3aa0bb4cec66f3ef684736fd2)(FString NewValue)|Sets the value of Message.|
|FString &|[GetRhUrl](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a62380cae8a2adacaa8e2e44255fd2bf2)()|Gets the value of RhUrl_Optional, regardless of it having been set.|
|const FString &|[GetRhUrl](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a9edca49ded3ed83fc5e2d3ceb0dc45c0)()|Gets the value of RhUrl_Optional, regardless of it having been set.|
|const FString &|[GetRhUrl](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1acabebc814d377a928882aa3b30cc034e)(const FString & DefaultValue)|Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRhUrl](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a4792a5d1eb1f4edd47474f17bac7f073)(FString & OutValue)|Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetRhUrlOrNull](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1aca1731a511c71e33a9df6ef9b9f6efb0)()|Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetRhUrlOrNull](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1ae925e7bd30d42446b9a9a3a55ab9a303)()|Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRhUrl](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a6686c952f35b6680510fbd4c5c6d1f65)(FString NewValue)|Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.|
|void|[ClearRhUrl](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1abec18e1a52fdb6a0f2f863bd9a2b8c0f)()|Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1abacdd5bbf93f5f9a0792bf6aaa29f5b3)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a96bd2509a4af4a0ed91aa51fac49ed54)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a5e25c0358dfcc7cb39a1218cf9a1b229)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a5bf362e8c77d4ef66ad1002a1384c442)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a5548ad4106f6569427dc5977b5a457f0)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1ad2abe39a4b2fe07310c385bdd11a5615)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a565c080927068eb56d2fc78646def077)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a595377476c3814e5d2d628cf20ac2d1d)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|FString &|[GetEtag](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a7bf6b0f58e0516336ed67b998e38c413)()|Gets the value of Etag_Optional, regardless of it having been set.|
|const FString &|[GetEtag](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a2c240194d3e9f6af9e99b9c3d77a8030)()|Gets the value of Etag_Optional, regardless of it having been set.|
|const FString &|[GetEtag](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a37096664cfc81ad28df2bae12580b7be)(const FString & DefaultValue)|Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEtag](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a9e49f93b9c00111bc2226d61cdbe80bc)(FString & OutValue)|Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetEtagOrNull](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a93c8855312f1903103f1d49cfe3e7a38)()|Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetEtagOrNull](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a267e03b817886cb7ace4dade429990fd)()|Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEtag](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a3d3dbfc798fb63f70b3c40db66d0b10a)(FString NewValue)|Sets the value of Etag_Optional and also sets Etag_IsSet to true.|
|void|[ClearEtag](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a270365c81e422b9cf7497f5ac8db21b7)()|Clears the value of Etag_Optional and sets Etag_IsSet to false.|
|FString &|[GetNotificationId](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a8f80a8b8678957cbc77cfb355c6fddd3)()|Gets the value of NotificationId.|
|const FString &|[GetNotificationId](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a07bb182df03aae6a51e9ebc236c250f8)()|Gets the value of NotificationId.|
|void|[SetNotificationId](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1ac4e47b528f78cfaab3ccdd477f459dda)(FString NewValue)|Sets the value of NotificationId.|
|FDateTime &|[GetCreated](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1afcad8a6c121f2425dd66d425d5910d15)()|Gets the value of Created.|
|const FDateTime &|[GetCreated](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1a42ced56616701691473283c0ae354585)()|Gets the value of Created.|
|void|[SetCreated](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification_1ab4cc335883a8d39233891217087575d7)(FDateTime NewValue)|Sets the value of Created.|
## Public Attributes



### `Message` <a id="structFRHAPI__Notification_1ae4087f5fac717be76bd871f5d1eae466"></a>

`FString FRHAPI_Notification::Message`

Base Message for the notification.




### `RhUrl_Optional` <a id="structFRHAPI__Notification_1ac50019b604d4120f297b471f59e54b36"></a>

`FString FRHAPI_Notification::RhUrl_Optional`

Path to get additional data about this notification.




### `RhUrl_IsSet` <a id="structFRHAPI__Notification_1a90d058a7605a66d00476278add49a8e5"></a>

`bool FRHAPI_Notification::RhUrl_IsSet`

true if RhUrl_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__Notification_1a2ed2e4d61f837740f5c6c7845e6ab8e9"></a>

`TMap<FString, FString> FRHAPI_Notification::CustomData_Optional`

Custom values for the notification.




### `CustomData_IsSet` <a id="structFRHAPI__Notification_1abcde3f0d6857b25bc22e6e9ebc356a1b"></a>

`bool FRHAPI_Notification::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Etag_Optional` <a id="structFRHAPI__Notification_1ae8660f0a8480f5407e67755d9d4dbd44"></a>

`FString FRHAPI_Notification::Etag_Optional`

ETag for the resource at rh_url at the time of this notification.




### `Etag_IsSet` <a id="structFRHAPI__Notification_1a6b05614b7b3914a0d9ee31f2eac7eaab"></a>

`bool FRHAPI_Notification::Etag_IsSet`

true if Etag_Optional has been set to a value




### `NotificationId` <a id="structFRHAPI__Notification_1ab7fc8b3ac00ad8a3655c045b7f7b6bed"></a>

`FString FRHAPI_Notification::NotificationId`

Unique Identifier for the notification. You cannot depend on the format of this string, and it must be considered opaque.




### `Created` <a id="structFRHAPI__Notification_1a8af4c0587e0e1ea8402658f2797c848e"></a>

`FDateTime FRHAPI_Notification::Created`

When this notification was added.





## Public Functions



### `FromJson` <a id="structFRHAPI__Notification_1a290fa10324e33b33c0931c1d4ba92762"></a>

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



### `WriteJson` <a id="structFRHAPI__Notification_1a20876b56542c2a7f1fefa60733e924a2"></a>

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



### `GetMessage` <a id="structFRHAPI__Notification_1ae013fad90cd40a95d2d627550491bcd3"></a>

FString & GetMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Message.




### `GetMessage` <a id="structFRHAPI__Notification_1a483f507d7236fe1a937539bda11cb667"></a>

const FString & GetMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Message.




### `SetMessage` <a id="structFRHAPI__Notification_1ae5f6d7e3aa0bb4cec66f3ef684736fd2"></a>

void SetMessage(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Message.




### `GetRhUrl` <a id="structFRHAPI__Notification_1a62380cae8a2adacaa8e2e44255fd2bf2"></a>

FString & GetRhUrl()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RhUrl_Optional, regardless of it having been set.




### `GetRhUrl` <a id="structFRHAPI__Notification_1a9edca49ded3ed83fc5e2d3ceb0dc45c0"></a>

const FString & GetRhUrl()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RhUrl_Optional, regardless of it having been set.




### `GetRhUrl` <a id="structFRHAPI__Notification_1acabebc814d377a928882aa3b30cc034e"></a>

const FString & GetRhUrl(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRhUrl` <a id="structFRHAPI__Notification_1a4792a5d1eb1f4edd47474f17bac7f073"></a>

bool GetRhUrl(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.




### `GetRhUrlOrNull` <a id="structFRHAPI__Notification_1aca1731a511c71e33a9df6ef9b9f6efb0"></a>

FString * GetRhUrlOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.




### `GetRhUrlOrNull` <a id="structFRHAPI__Notification_1ae925e7bd30d42446b9a9a3a55ab9a303"></a>

const FString * GetRhUrlOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.




### `SetRhUrl` <a id="structFRHAPI__Notification_1a6686c952f35b6680510fbd4c5c6d1f65"></a>

void SetRhUrl(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.




### `ClearRhUrl` <a id="structFRHAPI__Notification_1abec18e1a52fdb6a0f2f863bd9a2b8c0f"></a>

void ClearRhUrl()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__Notification_1abacdd5bbf93f5f9a0792bf6aaa29f5b3"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Notification_1a96bd2509a4af4a0ed91aa51fac49ed54"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Notification_1a5e25c0358dfcc7cb39a1218cf9a1b229"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__Notification_1a5bf362e8c77d4ef66ad1002a1384c442"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__Notification_1a5548ad4106f6569427dc5977b5a457f0"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__Notification_1ad2abe39a4b2fe07310c385bdd11a5615"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__Notification_1a565c080927068eb56d2fc78646def077"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__Notification_1a595377476c3814e5d2d628cf20ac2d1d"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetEtag` <a id="structFRHAPI__Notification_1a7bf6b0f58e0516336ed67b998e38c413"></a>

FString & GetEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Etag_Optional, regardless of it having been set.




### `GetEtag` <a id="structFRHAPI__Notification_1a2c240194d3e9f6af9e99b9c3d77a8030"></a>

const FString & GetEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Etag_Optional, regardless of it having been set.




### `GetEtag` <a id="structFRHAPI__Notification_1a37096664cfc81ad28df2bae12580b7be"></a>

const FString & GetEtag(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEtag` <a id="structFRHAPI__Notification_1a9e49f93b9c00111bc2226d61cdbe80bc"></a>

bool GetEtag(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.




### `GetEtagOrNull` <a id="structFRHAPI__Notification_1a93c8855312f1903103f1d49cfe3e7a38"></a>

FString * GetEtagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.




### `GetEtagOrNull` <a id="structFRHAPI__Notification_1a267e03b817886cb7ace4dade429990fd"></a>

const FString * GetEtagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.




### `SetEtag` <a id="structFRHAPI__Notification_1a3d3dbfc798fb63f70b3c40db66d0b10a"></a>

void SetEtag(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Etag_Optional and also sets Etag_IsSet to true.




### `ClearEtag` <a id="structFRHAPI__Notification_1a270365c81e422b9cf7497f5ac8db21b7"></a>

void ClearEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Etag_Optional and sets Etag_IsSet to false.




### `GetNotificationId` <a id="structFRHAPI__Notification_1a8f80a8b8678957cbc77cfb355c6fddd3"></a>

FString & GetNotificationId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NotificationId.




### `GetNotificationId` <a id="structFRHAPI__Notification_1a07bb182df03aae6a51e9ebc236c250f8"></a>

const FString & GetNotificationId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NotificationId.




### `SetNotificationId` <a id="structFRHAPI__Notification_1ac4e47b528f78cfaab3ccdd477f459dda"></a>

void SetNotificationId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of NotificationId.




### `GetCreated` <a id="structFRHAPI__Notification_1afcad8a6c121f2425dd66d425d5910d15"></a>

FDateTime & GetCreated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Created.




### `GetCreated` <a id="structFRHAPI__Notification_1a42ced56616701691473283c0ae354585"></a>

const FDateTime & GetCreated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Created.




### `SetCreated` <a id="structFRHAPI__Notification_1ab4cc335883a8d39233891217087575d7"></a>

void SetCreated(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Created.





