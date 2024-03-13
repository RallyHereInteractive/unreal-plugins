---
title: FRHAPI_NotificationCreate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Message](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1aa0b36df125568c5a818f6d912e68026b)|Base Message for the notification.|
|FString|[RhUrl_Optional](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1aab76e69babb5831da06322158ac18a5a)|Path to get additional data about this notification.|
|bool|[RhUrl_IsSet](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a92cbe6572c2358361c7fd7b7f8881339)|true if RhUrl_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a262983e21a17f8f39a40b96cf38baf89)|Custom values for the notification.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1aef02ee1a1a84a9c2ef1b83e9059ce0dc)|true if CustomData_Optional has been set to a value|
|FString|[Etag_Optional](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1af0a10c4259a996effcdcf157ce8f6053)|ETag for the resource at rh_url at the time of this notification.|
|bool|[Etag_IsSet](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a84ce9b6e74852a4e933096b16d1b554c)|true if Etag_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a41db2b45c132d9b93af6f18e647a3dd7)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1aaa33690fbc48e369e62493c435a9bb68)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetMessage](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a0152ca697ce4a14177fab0a434cfbe48)()|Gets the value of Message.|
|const FString &|[GetMessage](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1adcab94108c90cdf9aa68dc7ff7159029)()|Gets the value of Message.|
|void|[SetMessage](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a0f46dfa8a6bd62de5713e126a99b127a)(FString NewValue)|Sets the value of Message.|
|FString &|[GetRhUrl](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a330c21817ef1b8f82bf3b37309ddf2f7)()|Gets the value of RhUrl_Optional, regardless of it having been set.|
|const FString &|[GetRhUrl](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a277ef684586b3ee64cb16a0553a6c000)()|Gets the value of RhUrl_Optional, regardless of it having been set.|
|const FString &|[GetRhUrl](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a39516c3d34ca765c1b0b7df4a138cbda)(const FString & DefaultValue)|Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRhUrl](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a2e8c420d3c44cdfff8a68702694640de)(FString & OutValue)|Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetRhUrlOrNull](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a94579c2d8042f573e7331d83e6c5c92d)()|Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetRhUrlOrNull](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a5cfe484ab2e2c5132a5de200f4d8ec62)()|Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRhUrl](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1ae4834ed698007730c549b97cef2d7af2)(FString NewValue)|Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.|
|void|[ClearRhUrl](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c)()|Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a2380bfb434d133469ff26ead31d7de1b)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a04a2dc2c902a5acb0041de12b6f8eae6)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1ae5529e828fcd280c5b49ae661b9e20cf)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1aef2522d79f3a3f80f788eec472f72577)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1ab1d44f7bbdabc2fe8373d987938dbb8d)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a12abc4d5f1931d5ff50e8937bf44dec7)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a54b2434bb2971cec3ac16043ddbcd502)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|FString &|[GetEtag](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1af0752d1df2cea737cf54519f5f5135b9)()|Gets the value of Etag_Optional, regardless of it having been set.|
|const FString &|[GetEtag](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1ab6bc32e156c1d89e93c8032592dbbb5e)()|Gets the value of Etag_Optional, regardless of it having been set.|
|const FString &|[GetEtag](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a5b6f47e5eaf9f47315b6a9288d8e3225)(const FString & DefaultValue)|Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEtag](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1aed19722f10bf0167cfec2eff5a89d2a8)(FString & OutValue)|Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetEtagOrNull](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a8d317f2c741c8fd624bdd17315eaba9a)()|Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetEtagOrNull](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a36c85629c00031dd796c4967643f3c8f)()|Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEtag](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a9e407e790330d460b78af078c64b823b)(FString NewValue)|Sets the value of Etag_Optional and also sets Etag_IsSet to true.|
|void|[ClearEtag](/unreal-plugins/all/structfrhapi__notificationcreate/#structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6)()|Clears the value of Etag_Optional and sets Etag_IsSet to false.|
## Public Attributes



### `Message` <a id="structFRHAPI__NotificationCreate_1aa0b36df125568c5a818f6d912e68026b"></a>

`FString FRHAPI_NotificationCreate::Message`

Base Message for the notification.




### `RhUrl_Optional` <a id="structFRHAPI__NotificationCreate_1aab76e69babb5831da06322158ac18a5a"></a>

`FString FRHAPI_NotificationCreate::RhUrl_Optional`

Path to get additional data about this notification.




### `RhUrl_IsSet` <a id="structFRHAPI__NotificationCreate_1a92cbe6572c2358361c7fd7b7f8881339"></a>

`bool FRHAPI_NotificationCreate::RhUrl_IsSet`

true if RhUrl_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__NotificationCreate_1a262983e21a17f8f39a40b96cf38baf89"></a>

`TMap<FString, FString> FRHAPI_NotificationCreate::CustomData_Optional`

Custom values for the notification.




### `CustomData_IsSet` <a id="structFRHAPI__NotificationCreate_1aef02ee1a1a84a9c2ef1b83e9059ce0dc"></a>

`bool FRHAPI_NotificationCreate::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Etag_Optional` <a id="structFRHAPI__NotificationCreate_1af0a10c4259a996effcdcf157ce8f6053"></a>

`FString FRHAPI_NotificationCreate::Etag_Optional`

ETag for the resource at rh_url at the time of this notification.




### `Etag_IsSet` <a id="structFRHAPI__NotificationCreate_1a84ce9b6e74852a4e933096b16d1b554c"></a>

`bool FRHAPI_NotificationCreate::Etag_IsSet`

true if Etag_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__NotificationCreate_1a41db2b45c132d9b93af6f18e647a3dd7"></a>

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



### `WriteJson` <a id="structFRHAPI__NotificationCreate_1aaa33690fbc48e369e62493c435a9bb68"></a>

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



### `GetMessage` <a id="structFRHAPI__NotificationCreate_1a0152ca697ce4a14177fab0a434cfbe48"></a>

FString & GetMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Message.




### `GetMessage` <a id="structFRHAPI__NotificationCreate_1adcab94108c90cdf9aa68dc7ff7159029"></a>

const FString & GetMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Message.




### `SetMessage` <a id="structFRHAPI__NotificationCreate_1a0f46dfa8a6bd62de5713e126a99b127a"></a>

void SetMessage(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Message.




### `GetRhUrl` <a id="structFRHAPI__NotificationCreate_1a330c21817ef1b8f82bf3b37309ddf2f7"></a>

FString & GetRhUrl()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RhUrl_Optional, regardless of it having been set.




### `GetRhUrl` <a id="structFRHAPI__NotificationCreate_1a277ef684586b3ee64cb16a0553a6c000"></a>

const FString & GetRhUrl()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RhUrl_Optional, regardless of it having been set.




### `GetRhUrl` <a id="structFRHAPI__NotificationCreate_1a39516c3d34ca765c1b0b7df4a138cbda"></a>

const FString & GetRhUrl(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRhUrl` <a id="structFRHAPI__NotificationCreate_1a2e8c420d3c44cdfff8a68702694640de"></a>

bool GetRhUrl(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.




### `GetRhUrlOrNull` <a id="structFRHAPI__NotificationCreate_1a94579c2d8042f573e7331d83e6c5c92d"></a>

FString * GetRhUrlOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.




### `GetRhUrlOrNull` <a id="structFRHAPI__NotificationCreate_1a5cfe484ab2e2c5132a5de200f4d8ec62"></a>

const FString * GetRhUrlOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.




### `SetRhUrl` <a id="structFRHAPI__NotificationCreate_1ae4834ed698007730c549b97cef2d7af2"></a>

void SetRhUrl(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.




### `ClearRhUrl` <a id="structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c"></a>

void ClearRhUrl()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__NotificationCreate_1a2380bfb434d133469ff26ead31d7de1b"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__NotificationCreate_1a04a2dc2c902a5acb0041de12b6f8eae6"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__NotificationCreate_1ae5529e828fcd280c5b49ae661b9e20cf"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__NotificationCreate_1aef2522d79f3a3f80f788eec472f72577"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__NotificationCreate_1ab1d44f7bbdabc2fe8373d987938dbb8d"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__NotificationCreate_1a12abc4d5f1931d5ff50e8937bf44dec7"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__NotificationCreate_1a54b2434bb2971cec3ac16043ddbcd502"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetEtag` <a id="structFRHAPI__NotificationCreate_1af0752d1df2cea737cf54519f5f5135b9"></a>

FString & GetEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Etag_Optional, regardless of it having been set.




### `GetEtag` <a id="structFRHAPI__NotificationCreate_1ab6bc32e156c1d89e93c8032592dbbb5e"></a>

const FString & GetEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Etag_Optional, regardless of it having been set.




### `GetEtag` <a id="structFRHAPI__NotificationCreate_1a5b6f47e5eaf9f47315b6a9288d8e3225"></a>

const FString & GetEtag(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEtag` <a id="structFRHAPI__NotificationCreate_1aed19722f10bf0167cfec2eff5a89d2a8"></a>

bool GetEtag(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.




### `GetEtagOrNull` <a id="structFRHAPI__NotificationCreate_1a8d317f2c741c8fd624bdd17315eaba9a"></a>

FString * GetEtagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.




### `GetEtagOrNull` <a id="structFRHAPI__NotificationCreate_1a36c85629c00031dd796c4967643f3c8f"></a>

const FString * GetEtagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.




### `SetEtag` <a id="structFRHAPI__NotificationCreate_1a9e407e790330d460b78af078c64b823b"></a>

void SetEtag(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Etag_Optional and also sets Etag_IsSet to true.




### `ClearEtag` <a id="structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6"></a>

void ClearEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Etag_Optional and sets Etag_IsSet to false.





