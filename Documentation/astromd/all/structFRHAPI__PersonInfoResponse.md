---
title: FRHAPI_PersonInfoResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response for getting a person&#39;s info.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[PersonId_Optional](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a15fb6d340c496b10078584551091b39c)|Person ID.|
|bool|[PersonId_IsSet](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a87e0b874455b6011cd39dcf767ea30ec)|true if PersonId_Optional has been set to a value|
|int32|[ActivePlayerId_Optional](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a61def40c5bab540afe269d7d85de9c66)|Active player ID, if the person has an active player.|
|bool|[ActivePlayerId_IsSet](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1af159facae488624991b49f348421998b)|true if ActivePlayerId_Optional has been set to a value|
|FString|[Email_Optional](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1ae1b5739f1b696af14a9f90a885fbaba5)|Email address.|
|bool|[Email_IsSet](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1ad1a4fb8de953a5e933e2250a6f80dd27)|true if Email_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a999bd82da327328e8dc6bfc43f9e8f61)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a8874b620d30ed90233111181d268b85c)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetPersonId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1ab35a1ca7e4b583c9514f41b034efc0af)()|Gets the value of PersonId_Optional, regardless of it having been set.|
|const FGuid &|[GetPersonId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1ae42bcf61d14d37b3ab220ff9e0fbbde1)()|Gets the value of PersonId_Optional, regardless of it having been set.|
|const FGuid &|[GetPersonId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a443edab7dd792e6a59f874be67889f63)(const FGuid & DefaultValue)|Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPersonId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a1ffb7b957a1aa0f7e53a10a5f083e068)(FGuid & OutValue)|Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetPersonIdOrNull](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a5a55d6fc5154bf5ba092a184a73fcb38)()|Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetPersonIdOrNull](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a17c8a2d76dbbe566904a18e5637e1db0)()|Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPersonId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a636fad92ade2dda2ccec5fe0f2faf9c8)(FGuid NewValue)|Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.|
|void|[ClearPersonId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1aee15a4d0a3e019e24aa98d3b5fb41442)()|Clears the value of PersonId_Optional and sets PersonId_IsSet to false.|
|int32 &|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1ac8837d8dcdf81a2289e6369be782df95)()|Gets the value of ActivePlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1ac808f70bd213157b932360926fd94601)()|Gets the value of ActivePlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a9d8cb01ede43080fbe878005d8aca2b4)(const int32 & DefaultValue)|Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetActivePlayerId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1af1e1ffaba380a3c6db46e100a715a137)(int32 & OutValue)|Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetActivePlayerIdOrNull](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a5c5295c3dcdadb5a168172cb61ff7400)()|Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetActivePlayerIdOrNull](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1ab2f1f65704194c8209b251e5e92496d7)()|Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetActivePlayerId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a18dca6461596c1af7e37c4f45b0bb856)(int32 NewValue)|Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.|
|void|[ClearActivePlayerId](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a558267ad55a7da0b17c9a7378646b429)()|Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.|
|bool|[IsActivePlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a80e6f00658d24becf4a172719002d624)()|Returns true if ActivePlayerId_Optional is set and matches the default value.|
|void|[SetActivePlayerIdToDefault](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a0e6c098a669a0d819d8a0edcbb09b916)()|Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.|
|FString &|[GetEmail](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a7fcd04cc2d8ccb25a7c4d1620534b9d4)()|Gets the value of Email_Optional, regardless of it having been set.|
|const FString &|[GetEmail](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a221f426875e39b05030b1a0f05e01884)()|Gets the value of Email_Optional, regardless of it having been set.|
|const FString &|[GetEmail](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1ab5de4e7165e521b36c05030ddbfb3164)(const FString & DefaultValue)|Gets the value of Email_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEmail](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1aab796fbe933c7fc5bd4186d3f9c567bd)(FString & OutValue)|Fills OutValue with the value of Email_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetEmailOrNull](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1a1f293a96bcfad12a1633e73febdadf94)()|Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetEmailOrNull](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1aa5788c2920e399ccf8f5d0eb2f75130e)()|Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEmail](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1ae300cc4f31ac61b1ab1ef71795201184)(FString NewValue)|Sets the value of Email_Optional and also sets Email_IsSet to true.|
|void|[ClearEmail](/unreal-plugins/all/structfrhapi__personinforesponse/#structFRHAPI__PersonInfoResponse_1ae7e95f48a6604663a002c86dd219fee6)()|Clears the value of Email_Optional and sets Email_IsSet to false.|
## Public Attributes



### `PersonId_Optional` <a id="structFRHAPI__PersonInfoResponse_1a15fb6d340c496b10078584551091b39c"></a>

`FGuid FRHAPI_PersonInfoResponse::PersonId_Optional`

Person ID.




### `PersonId_IsSet` <a id="structFRHAPI__PersonInfoResponse_1a87e0b874455b6011cd39dcf767ea30ec"></a>

`bool FRHAPI_PersonInfoResponse::PersonId_IsSet`

true if PersonId_Optional has been set to a value




### `ActivePlayerId_Optional` <a id="structFRHAPI__PersonInfoResponse_1a61def40c5bab540afe269d7d85de9c66"></a>

`int32 FRHAPI_PersonInfoResponse::ActivePlayerId_Optional`

Active player ID, if the person has an active player.




### `ActivePlayerId_IsSet` <a id="structFRHAPI__PersonInfoResponse_1af159facae488624991b49f348421998b"></a>

`bool FRHAPI_PersonInfoResponse::ActivePlayerId_IsSet`

true if ActivePlayerId_Optional has been set to a value




### `Email_Optional` <a id="structFRHAPI__PersonInfoResponse_1ae1b5739f1b696af14a9f90a885fbaba5"></a>

`FString FRHAPI_PersonInfoResponse::Email_Optional`

Email address.




### `Email_IsSet` <a id="structFRHAPI__PersonInfoResponse_1ad1a4fb8de953a5e933e2250a6f80dd27"></a>

`bool FRHAPI_PersonInfoResponse::Email_IsSet`

true if Email_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PersonInfoResponse_1a999bd82da327328e8dc6bfc43f9e8f61"></a>

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



### `WriteJson` <a id="structFRHAPI__PersonInfoResponse_1a8874b620d30ed90233111181d268b85c"></a>

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



### `GetPersonId` <a id="structFRHAPI__PersonInfoResponse_1ab35a1ca7e4b583c9514f41b034efc0af"></a>

FGuid & GetPersonId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PersonId_Optional, regardless of it having been set.




### `GetPersonId` <a id="structFRHAPI__PersonInfoResponse_1ae42bcf61d14d37b3ab220ff9e0fbbde1"></a>

const FGuid & GetPersonId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PersonId_Optional, regardless of it having been set.




### `GetPersonId` <a id="structFRHAPI__PersonInfoResponse_1a443edab7dd792e6a59f874be67889f63"></a>

const FGuid & GetPersonId(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPersonId` <a id="structFRHAPI__PersonInfoResponse_1a1ffb7b957a1aa0f7e53a10a5f083e068"></a>

bool GetPersonId(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.




### `GetPersonIdOrNull` <a id="structFRHAPI__PersonInfoResponse_1a5a55d6fc5154bf5ba092a184a73fcb38"></a>

FGuid * GetPersonIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.




### `GetPersonIdOrNull` <a id="structFRHAPI__PersonInfoResponse_1a17c8a2d76dbbe566904a18e5637e1db0"></a>

const FGuid * GetPersonIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.




### `SetPersonId` <a id="structFRHAPI__PersonInfoResponse_1a636fad92ade2dda2ccec5fe0f2faf9c8"></a>

void SetPersonId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.




### `ClearPersonId` <a id="structFRHAPI__PersonInfoResponse_1aee15a4d0a3e019e24aa98d3b5fb41442"></a>

void ClearPersonId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.




### `GetActivePlayerId` <a id="structFRHAPI__PersonInfoResponse_1ac8837d8dcdf81a2289e6369be782df95"></a>

int32 & GetActivePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ActivePlayerId_Optional, regardless of it having been set.




### `GetActivePlayerId` <a id="structFRHAPI__PersonInfoResponse_1ac808f70bd213157b932360926fd94601"></a>

const int32 & GetActivePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ActivePlayerId_Optional, regardless of it having been set.




### `GetActivePlayerId` <a id="structFRHAPI__PersonInfoResponse_1a9d8cb01ede43080fbe878005d8aca2b4"></a>

const int32 & GetActivePlayerId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetActivePlayerId` <a id="structFRHAPI__PersonInfoResponse_1af1e1ffaba380a3c6db46e100a715a137"></a>

bool GetActivePlayerId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.




### `GetActivePlayerIdOrNull` <a id="structFRHAPI__PersonInfoResponse_1a5c5295c3dcdadb5a168172cb61ff7400"></a>

int32 * GetActivePlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.




### `GetActivePlayerIdOrNull` <a id="structFRHAPI__PersonInfoResponse_1ab2f1f65704194c8209b251e5e92496d7"></a>

const int32 * GetActivePlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.




### `SetActivePlayerId` <a id="structFRHAPI__PersonInfoResponse_1a18dca6461596c1af7e37c4f45b0bb856"></a>

void SetActivePlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.




### `ClearActivePlayerId` <a id="structFRHAPI__PersonInfoResponse_1a558267ad55a7da0b17c9a7378646b429"></a>

void ClearActivePlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.




### `IsActivePlayerIdDefaultValue` <a id="structFRHAPI__PersonInfoResponse_1a80e6f00658d24becf4a172719002d624"></a>

bool IsActivePlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ActivePlayerId_Optional is set and matches the default value.




### `SetActivePlayerIdToDefault` <a id="structFRHAPI__PersonInfoResponse_1a0e6c098a669a0d819d8a0edcbb09b916"></a>

void SetActivePlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.




### `GetEmail` <a id="structFRHAPI__PersonInfoResponse_1a7fcd04cc2d8ccb25a7c4d1620534b9d4"></a>

FString & GetEmail()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Email_Optional, regardless of it having been set.




### `GetEmail` <a id="structFRHAPI__PersonInfoResponse_1a221f426875e39b05030b1a0f05e01884"></a>

const FString & GetEmail()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Email_Optional, regardless of it having been set.




### `GetEmail` <a id="structFRHAPI__PersonInfoResponse_1ab5de4e7165e521b36c05030ddbfb3164"></a>

const FString & GetEmail(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Email_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEmail` <a id="structFRHAPI__PersonInfoResponse_1aab796fbe933c7fc5bd4186d3f9c567bd"></a>

bool GetEmail(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Email_Optional and returns true if it has been set, otherwise returns false.




### `GetEmailOrNull` <a id="structFRHAPI__PersonInfoResponse_1a1f293a96bcfad12a1633e73febdadf94"></a>

FString * GetEmailOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.




### `GetEmailOrNull` <a id="structFRHAPI__PersonInfoResponse_1aa5788c2920e399ccf8f5d0eb2f75130e"></a>

const FString * GetEmailOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.




### `SetEmail` <a id="structFRHAPI__PersonInfoResponse_1ae300cc4f31ac61b1ab1ef71795201184"></a>

void SetEmail(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Email_Optional and also sets Email_IsSet to true.




### `ClearEmail` <a id="structFRHAPI__PersonInfoResponse_1ae7e95f48a6604663a002c86dd219fee6"></a>

void ClearEmail()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Email_Optional and sets Email_IsSet to false.





