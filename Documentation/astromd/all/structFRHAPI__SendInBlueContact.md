---
title: FRHAPI_SendInBlueContact Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

SendInBlue contact.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Email](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1aa5f9c11c8565c4f5de86c3296bd82ec5)|Email address.|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|[Attributes_Optional](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a768398f30f35727e97ae0553e80fdccb)|Attributes.|
|bool|[Attributes_IsSet](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1ad2a67f41968390d4cf2677aa34479667)|true if Attributes_Optional has been set to a value|
|bool|[EmailBlacklisted_Optional](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a4eb54281e103d49aa7a401f1a4380843)|Email blacklisted.|
|bool|[EmailBlacklisted_IsSet](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1adb78d96f39655a66f12d5e76393649ab)|true if EmailBlacklisted_Optional has been set to a value|
|TArray< int32 >|[ListIds_Optional](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1afd9ccd77f63a9a86a39a8cf17ed4667c)|List IDs.|
|bool|[ListIds_IsSet](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1ac9547f84f1829532edee0b6ff99ed08c)|true if ListIds_Optional has been set to a value|
|TArray< int32 >|[UnlinkListIds_Optional](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a1faa2eb247b45d3fe26774ec02aad67f)|Unlink list IDs.|
|bool|[UnlinkListIds_IsSet](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a229c851fe9bc2c4e48ae3249962279fc)|true if UnlinkListIds_Optional has been set to a value|
|bool|[UpdateEnabled_Optional](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a227fe444e6106d9b8ed68078776f8fb0)|Update enabled.|
|bool|[UpdateEnabled_IsSet](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a4479e2d747f83edd483a4864a864fd1b)|true if UpdateEnabled_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1afd153a9f368a76d84691a109a842129a)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1afee18ef1912e56f08af2f4acab2559f8)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetEmail](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a9101c7cf39e127ff7279718c6b55cc57)()|Gets the value of Email.|
|const FString &|[GetEmail](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a36347ad9d5cdbc08cb7ee81effa148f2)()|Gets the value of Email.|
|void|[SetEmail](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1af6364832486ab9285bf5f762925e0643)(FString NewValue)|Sets the value of Email.|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetAttributes](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a963748048eef99851bc2f10fa9bda3df)()|Gets the value of Attributes_Optional, regardless of it having been set.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetAttributes](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1ac90c7a20159c2e7de6f889d060851cf7)()|Gets the value of Attributes_Optional, regardless of it having been set.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetAttributes](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1af81a592a0dff653eccfad6582ea4968e)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & DefaultValue)|Gets the value of Attributes_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAttributes](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a4a327da48c9aa4cca9e11806011aa91d)([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutValue)|Fills OutValue with the value of Attributes_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) *|[GetAttributesOrNull](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1adeb0c804608c728b4dc05084e9af205f)()|Returns a pointer to Attributes_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) *|[GetAttributesOrNull](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1aad5a7574fde383d1bc926d3aa388525f)()|Returns a pointer to Attributes_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAttributes](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a13bd2b3a0d69e6984621b3611780c34d)([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) NewValue)|Sets the value of Attributes_Optional and also sets Attributes_IsSet to true.|
|void|[ClearAttributes](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1aef4f44a54a0b4ecb45e5c5c22a7c132d)()|Clears the value of Attributes_Optional and sets Attributes_IsSet to false.|
|bool &|[GetEmailBlacklisted](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a4cb2b041c5c82ad304fa0617a75ba47a)()|Gets the value of EmailBlacklisted_Optional, regardless of it having been set.|
|const bool &|[GetEmailBlacklisted](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1af01e694637fd7f5638ae5778d343e056)()|Gets the value of EmailBlacklisted_Optional, regardless of it having been set.|
|const bool &|[GetEmailBlacklisted](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a2eb8dc9f868b0e9e172b47d079ab9eb0)(const bool & DefaultValue)|Gets the value of EmailBlacklisted_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEmailBlacklisted](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1aa5cdc0ad2170d230d1047b8cbe7778db)(bool & OutValue)|Fills OutValue with the value of EmailBlacklisted_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetEmailBlacklistedOrNull](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a660a937eaa756a2d71fff735c3aa9436)()|Returns a pointer to EmailBlacklisted_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetEmailBlacklistedOrNull](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a34a3540d16ac26b8e488a4fb349516a6)()|Returns a pointer to EmailBlacklisted_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEmailBlacklisted](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1adec1e08026090606572f1c81710896a9)(bool NewValue)|Sets the value of EmailBlacklisted_Optional and also sets EmailBlacklisted_IsSet to true.|
|void|[ClearEmailBlacklisted](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1aa51a7edca5560903b8acb968619ecd99)()|Clears the value of EmailBlacklisted_Optional and sets EmailBlacklisted_IsSet to false.|
|bool|[IsEmailBlacklistedDefaultValue](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a4a2a76b3853bf3854b476494dac95097)()|Returns true if EmailBlacklisted_Optional is set and matches the default value.|
|void|[SetEmailBlacklistedToDefault](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a3faf237e0b96ef466a21fcae40d5559d)()|Sets the value of EmailBlacklisted_Optional to its default and also sets EmailBlacklisted_IsSet to true.|
|TArray< int32 > &|[GetListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a32996960334b43550b6df9697b90b0a4)()|Gets the value of ListIds_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1adb1b7f5eec28461c58d7fa82943677f2)()|Gets the value of ListIds_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1ab2d5d9f75d40bb8afc3a19d559a8649f)(const TArray< int32 > & DefaultValue)|Gets the value of ListIds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a8249ab6337f81af308b1f4732b2aa247)(TArray< int32 > & OutValue)|Fills OutValue with the value of ListIds_Optional and returns true if it has been set, otherwise returns false.|
|TArray< int32 > *|[GetListIdsOrNull](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a5bf74841aedf5a249071e345a6c03f8d)()|Returns a pointer to ListIds_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< int32 > *|[GetListIdsOrNull](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a2d7041eeedde05ca54dc03780b156333)()|Returns a pointer to ListIds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1af9e064246fce38905490d9706c08a291)(TArray< int32 > NewValue)|Sets the value of ListIds_Optional and also sets ListIds_IsSet to true.|
|void|[ClearListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a95e57bb78e908e0c7bca8bd9679c2d2b)()|Clears the value of ListIds_Optional and sets ListIds_IsSet to false.|
|TArray< int32 > &|[GetUnlinkListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a563766947f346b8a0cef8f549387ec00)()|Gets the value of UnlinkListIds_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetUnlinkListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1acf3e46a654bec910195bbbdfe83808c5)()|Gets the value of UnlinkListIds_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetUnlinkListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a8887d8085214adc583f8d545d2835c20)(const TArray< int32 > & DefaultValue)|Gets the value of UnlinkListIds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetUnlinkListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a3b7ce70c5d50167b41281d39332fee97)(TArray< int32 > & OutValue)|Fills OutValue with the value of UnlinkListIds_Optional and returns true if it has been set, otherwise returns false.|
|TArray< int32 > *|[GetUnlinkListIdsOrNull](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1ac7bb27671781916f209b93103b5f2abf)()|Returns a pointer to UnlinkListIds_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< int32 > *|[GetUnlinkListIdsOrNull](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a154612291299325cfd922ed11f9d1fbd)()|Returns a pointer to UnlinkListIds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetUnlinkListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a981daf3c362565630248880741275b42)(TArray< int32 > NewValue)|Sets the value of UnlinkListIds_Optional and also sets UnlinkListIds_IsSet to true.|
|void|[ClearUnlinkListIds](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a5b95f4f0c0e94242e0e66e3903529d8c)()|Clears the value of UnlinkListIds_Optional and sets UnlinkListIds_IsSet to false.|
|bool &|[GetUpdateEnabled](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1afae60bf8519d0a0f541be3d2a48b3449)()|Gets the value of UpdateEnabled_Optional, regardless of it having been set.|
|const bool &|[GetUpdateEnabled](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1ab5fd99bbe37670e4bff6f500ba283fe4)()|Gets the value of UpdateEnabled_Optional, regardless of it having been set.|
|const bool &|[GetUpdateEnabled](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a8da2f36f7ba4f777ff9d581f8aba8b93)(const bool & DefaultValue)|Gets the value of UpdateEnabled_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetUpdateEnabled](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1af29c3aa6e96928648158b714eeda3ada)(bool & OutValue)|Fills OutValue with the value of UpdateEnabled_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetUpdateEnabledOrNull](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a78910a3eb406e69a6b64f08934ee5259)()|Returns a pointer to UpdateEnabled_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetUpdateEnabledOrNull](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a94363265bd68d18e2e6ccf8291e3aad4)()|Returns a pointer to UpdateEnabled_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetUpdateEnabled](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a57ecc6fda4fbdf8a9bd106e274c026f6)(bool NewValue)|Sets the value of UpdateEnabled_Optional and also sets UpdateEnabled_IsSet to true.|
|void|[ClearUpdateEnabled](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1a6da8611cb3675b22593e034578a0886c)()|Clears the value of UpdateEnabled_Optional and sets UpdateEnabled_IsSet to false.|
|bool|[IsUpdateEnabledDefaultValue](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1ad02e90be12448e9da0e518d7bed8872a)()|Returns true if UpdateEnabled_Optional is set and matches the default value.|
|void|[SetUpdateEnabledToDefault](/unreal-plugins/all/structfrhapi__sendinbluecontact/#structFRHAPI__SendInBlueContact_1af5524c67044a55e677378e61ff88f9e8)()|Sets the value of UpdateEnabled_Optional to its default and also sets UpdateEnabled_IsSet to true.|
## Public Attributes



### `Email` <a id="structFRHAPI__SendInBlueContact_1aa5f9c11c8565c4f5de86c3296bd82ec5"></a>

`FString FRHAPI_SendInBlueContact::Email`

Email address.




### `Attributes_Optional` <a id="structFRHAPI__SendInBlueContact_1a768398f30f35727e97ae0553e80fdccb"></a>

`FRHAPI_JsonObject FRHAPI_SendInBlueContact::Attributes_Optional`

Attributes.




### `Attributes_IsSet` <a id="structFRHAPI__SendInBlueContact_1ad2a67f41968390d4cf2677aa34479667"></a>

`bool FRHAPI_SendInBlueContact::Attributes_IsSet`

true if Attributes_Optional has been set to a value




### `EmailBlacklisted_Optional` <a id="structFRHAPI__SendInBlueContact_1a4eb54281e103d49aa7a401f1a4380843"></a>

`bool FRHAPI_SendInBlueContact::EmailBlacklisted_Optional`

Email blacklisted.




### `EmailBlacklisted_IsSet` <a id="structFRHAPI__SendInBlueContact_1adb78d96f39655a66f12d5e76393649ab"></a>

`bool FRHAPI_SendInBlueContact::EmailBlacklisted_IsSet`

true if EmailBlacklisted_Optional has been set to a value




### `ListIds_Optional` <a id="structFRHAPI__SendInBlueContact_1afd9ccd77f63a9a86a39a8cf17ed4667c"></a>

`TArray<int32> FRHAPI_SendInBlueContact::ListIds_Optional`

List IDs.




### `ListIds_IsSet` <a id="structFRHAPI__SendInBlueContact_1ac9547f84f1829532edee0b6ff99ed08c"></a>

`bool FRHAPI_SendInBlueContact::ListIds_IsSet`

true if ListIds_Optional has been set to a value




### `UnlinkListIds_Optional` <a id="structFRHAPI__SendInBlueContact_1a1faa2eb247b45d3fe26774ec02aad67f"></a>

`TArray<int32> FRHAPI_SendInBlueContact::UnlinkListIds_Optional`

Unlink list IDs.




### `UnlinkListIds_IsSet` <a id="structFRHAPI__SendInBlueContact_1a229c851fe9bc2c4e48ae3249962279fc"></a>

`bool FRHAPI_SendInBlueContact::UnlinkListIds_IsSet`

true if UnlinkListIds_Optional has been set to a value




### `UpdateEnabled_Optional` <a id="structFRHAPI__SendInBlueContact_1a227fe444e6106d9b8ed68078776f8fb0"></a>

`bool FRHAPI_SendInBlueContact::UpdateEnabled_Optional`

Update enabled.




### `UpdateEnabled_IsSet` <a id="structFRHAPI__SendInBlueContact_1a4479e2d747f83edd483a4864a864fd1b"></a>

`bool FRHAPI_SendInBlueContact::UpdateEnabled_IsSet`

true if UpdateEnabled_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SendInBlueContact_1afd153a9f368a76d84691a109a842129a"></a>

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



### `WriteJson` <a id="structFRHAPI__SendInBlueContact_1afee18ef1912e56f08af2f4acab2559f8"></a>

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



### `GetEmail` <a id="structFRHAPI__SendInBlueContact_1a9101c7cf39e127ff7279718c6b55cc57"></a>

FString & GetEmail()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Email.




### `GetEmail` <a id="structFRHAPI__SendInBlueContact_1a36347ad9d5cdbc08cb7ee81effa148f2"></a>

const FString & GetEmail()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Email.




### `SetEmail` <a id="structFRHAPI__SendInBlueContact_1af6364832486ab9285bf5f762925e0643"></a>

void SetEmail(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Email.




### `GetAttributes` <a id="structFRHAPI__SendInBlueContact_1a963748048eef99851bc2f10fa9bda3df"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetAttributes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Attributes_Optional, regardless of it having been set.




### `GetAttributes` <a id="structFRHAPI__SendInBlueContact_1ac90c7a20159c2e7de6f889d060851cf7"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetAttributes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Attributes_Optional, regardless of it having been set.




### `GetAttributes` <a id="structFRHAPI__SendInBlueContact_1af81a592a0dff653eccfad6582ea4968e"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetAttributes(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|DefaultValue|

#### Description

Gets the value of Attributes_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAttributes` <a id="structFRHAPI__SendInBlueContact_1a4a327da48c9aa4cca9e11806011aa91d"></a>

bool GetAttributes([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|OutValue|

#### Description

Fills OutValue with the value of Attributes_Optional and returns true if it has been set, otherwise returns false.




### `GetAttributesOrNull` <a id="structFRHAPI__SendInBlueContact_1adeb0c804608c728b4dc05084e9af205f"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) * GetAttributesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Attributes_Optional, if it has been set, otherwise returns nullptr.




### `GetAttributesOrNull` <a id="structFRHAPI__SendInBlueContact_1aad5a7574fde383d1bc926d3aa388525f"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) * GetAttributesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Attributes_Optional, if it has been set, otherwise returns nullptr.




### `SetAttributes` <a id="structFRHAPI__SendInBlueContact_1a13bd2b3a0d69e6984621b3611780c34d"></a>

void SetAttributes([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|NewValue|

#### Description

Sets the value of Attributes_Optional and also sets Attributes_IsSet to true.




### `ClearAttributes` <a id="structFRHAPI__SendInBlueContact_1aef4f44a54a0b4ecb45e5c5c22a7c132d"></a>

void ClearAttributes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Attributes_Optional and sets Attributes_IsSet to false.




### `GetEmailBlacklisted` <a id="structFRHAPI__SendInBlueContact_1a4cb2b041c5c82ad304fa0617a75ba47a"></a>

bool & GetEmailBlacklisted()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EmailBlacklisted_Optional, regardless of it having been set.




### `GetEmailBlacklisted` <a id="structFRHAPI__SendInBlueContact_1af01e694637fd7f5638ae5778d343e056"></a>

const bool & GetEmailBlacklisted()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EmailBlacklisted_Optional, regardless of it having been set.




### `GetEmailBlacklisted` <a id="structFRHAPI__SendInBlueContact_1a2eb8dc9f868b0e9e172b47d079ab9eb0"></a>

const bool & GetEmailBlacklisted(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of EmailBlacklisted_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEmailBlacklisted` <a id="structFRHAPI__SendInBlueContact_1aa5cdc0ad2170d230d1047b8cbe7778db"></a>

bool GetEmailBlacklisted(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of EmailBlacklisted_Optional and returns true if it has been set, otherwise returns false.




### `GetEmailBlacklistedOrNull` <a id="structFRHAPI__SendInBlueContact_1a660a937eaa756a2d71fff735c3aa9436"></a>

bool * GetEmailBlacklistedOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EmailBlacklisted_Optional, if it has been set, otherwise returns nullptr.




### `GetEmailBlacklistedOrNull` <a id="structFRHAPI__SendInBlueContact_1a34a3540d16ac26b8e488a4fb349516a6"></a>

const bool * GetEmailBlacklistedOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EmailBlacklisted_Optional, if it has been set, otherwise returns nullptr.




### `SetEmailBlacklisted` <a id="structFRHAPI__SendInBlueContact_1adec1e08026090606572f1c81710896a9"></a>

void SetEmailBlacklisted(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of EmailBlacklisted_Optional and also sets EmailBlacklisted_IsSet to true.




### `ClearEmailBlacklisted` <a id="structFRHAPI__SendInBlueContact_1aa51a7edca5560903b8acb968619ecd99"></a>

void ClearEmailBlacklisted()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of EmailBlacklisted_Optional and sets EmailBlacklisted_IsSet to false.




### `IsEmailBlacklistedDefaultValue` <a id="structFRHAPI__SendInBlueContact_1a4a2a76b3853bf3854b476494dac95097"></a>

bool IsEmailBlacklistedDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if EmailBlacklisted_Optional is set and matches the default value.




### `SetEmailBlacklistedToDefault` <a id="structFRHAPI__SendInBlueContact_1a3faf237e0b96ef466a21fcae40d5559d"></a>

void SetEmailBlacklistedToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of EmailBlacklisted_Optional to its default and also sets EmailBlacklisted_IsSet to true.




### `GetListIds` <a id="structFRHAPI__SendInBlueContact_1a32996960334b43550b6df9697b90b0a4"></a>

TArray< int32 > & GetListIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ListIds_Optional, regardless of it having been set.




### `GetListIds` <a id="structFRHAPI__SendInBlueContact_1adb1b7f5eec28461c58d7fa82943677f2"></a>

const TArray< int32 > & GetListIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ListIds_Optional, regardless of it having been set.




### `GetListIds` <a id="structFRHAPI__SendInBlueContact_1ab2d5d9f75d40bb8afc3a19d559a8649f"></a>

const TArray< int32 > & GetListIds(const TArray< int32 > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|DefaultValue|

#### Description

Gets the value of ListIds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetListIds` <a id="structFRHAPI__SendInBlueContact_1a8249ab6337f81af308b1f4732b2aa247"></a>

bool GetListIds(TArray< int32 > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 > &|OutValue|

#### Description

Fills OutValue with the value of ListIds_Optional and returns true if it has been set, otherwise returns false.




### `GetListIdsOrNull` <a id="structFRHAPI__SendInBlueContact_1a5bf74841aedf5a249071e345a6c03f8d"></a>

TArray< int32 > * GetListIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ListIds_Optional, if it has been set, otherwise returns nullptr.




### `GetListIdsOrNull` <a id="structFRHAPI__SendInBlueContact_1a2d7041eeedde05ca54dc03780b156333"></a>

const TArray< int32 > * GetListIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ListIds_Optional, if it has been set, otherwise returns nullptr.




### `SetListIds` <a id="structFRHAPI__SendInBlueContact_1af9e064246fce38905490d9706c08a291"></a>

void SetListIds(TArray< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|NewValue|

#### Description

Sets the value of ListIds_Optional and also sets ListIds_IsSet to true.




### `ClearListIds` <a id="structFRHAPI__SendInBlueContact_1a95e57bb78e908e0c7bca8bd9679c2d2b"></a>

void ClearListIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ListIds_Optional and sets ListIds_IsSet to false.




### `GetUnlinkListIds` <a id="structFRHAPI__SendInBlueContact_1a563766947f346b8a0cef8f549387ec00"></a>

TArray< int32 > & GetUnlinkListIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UnlinkListIds_Optional, regardless of it having been set.




### `GetUnlinkListIds` <a id="structFRHAPI__SendInBlueContact_1acf3e46a654bec910195bbbdfe83808c5"></a>

const TArray< int32 > & GetUnlinkListIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UnlinkListIds_Optional, regardless of it having been set.




### `GetUnlinkListIds` <a id="structFRHAPI__SendInBlueContact_1a8887d8085214adc583f8d545d2835c20"></a>

const TArray< int32 > & GetUnlinkListIds(const TArray< int32 > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|DefaultValue|

#### Description

Gets the value of UnlinkListIds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetUnlinkListIds` <a id="structFRHAPI__SendInBlueContact_1a3b7ce70c5d50167b41281d39332fee97"></a>

bool GetUnlinkListIds(TArray< int32 > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 > &|OutValue|

#### Description

Fills OutValue with the value of UnlinkListIds_Optional and returns true if it has been set, otherwise returns false.




### `GetUnlinkListIdsOrNull` <a id="structFRHAPI__SendInBlueContact_1ac7bb27671781916f209b93103b5f2abf"></a>

TArray< int32 > * GetUnlinkListIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UnlinkListIds_Optional, if it has been set, otherwise returns nullptr.




### `GetUnlinkListIdsOrNull` <a id="structFRHAPI__SendInBlueContact_1a154612291299325cfd922ed11f9d1fbd"></a>

const TArray< int32 > * GetUnlinkListIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UnlinkListIds_Optional, if it has been set, otherwise returns nullptr.




### `SetUnlinkListIds` <a id="structFRHAPI__SendInBlueContact_1a981daf3c362565630248880741275b42"></a>

void SetUnlinkListIds(TArray< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|NewValue|

#### Description

Sets the value of UnlinkListIds_Optional and also sets UnlinkListIds_IsSet to true.




### `ClearUnlinkListIds` <a id="structFRHAPI__SendInBlueContact_1a5b95f4f0c0e94242e0e66e3903529d8c"></a>

void ClearUnlinkListIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of UnlinkListIds_Optional and sets UnlinkListIds_IsSet to false.




### `GetUpdateEnabled` <a id="structFRHAPI__SendInBlueContact_1afae60bf8519d0a0f541be3d2a48b3449"></a>

bool & GetUpdateEnabled()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UpdateEnabled_Optional, regardless of it having been set.




### `GetUpdateEnabled` <a id="structFRHAPI__SendInBlueContact_1ab5fd99bbe37670e4bff6f500ba283fe4"></a>

const bool & GetUpdateEnabled()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UpdateEnabled_Optional, regardless of it having been set.




### `GetUpdateEnabled` <a id="structFRHAPI__SendInBlueContact_1a8da2f36f7ba4f777ff9d581f8aba8b93"></a>

const bool & GetUpdateEnabled(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of UpdateEnabled_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetUpdateEnabled` <a id="structFRHAPI__SendInBlueContact_1af29c3aa6e96928648158b714eeda3ada"></a>

bool GetUpdateEnabled(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of UpdateEnabled_Optional and returns true if it has been set, otherwise returns false.




### `GetUpdateEnabledOrNull` <a id="structFRHAPI__SendInBlueContact_1a78910a3eb406e69a6b64f08934ee5259"></a>

bool * GetUpdateEnabledOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UpdateEnabled_Optional, if it has been set, otherwise returns nullptr.




### `GetUpdateEnabledOrNull` <a id="structFRHAPI__SendInBlueContact_1a94363265bd68d18e2e6ccf8291e3aad4"></a>

const bool * GetUpdateEnabledOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UpdateEnabled_Optional, if it has been set, otherwise returns nullptr.




### `SetUpdateEnabled` <a id="structFRHAPI__SendInBlueContact_1a57ecc6fda4fbdf8a9bd106e274c026f6"></a>

void SetUpdateEnabled(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of UpdateEnabled_Optional and also sets UpdateEnabled_IsSet to true.




### `ClearUpdateEnabled` <a id="structFRHAPI__SendInBlueContact_1a6da8611cb3675b22593e034578a0886c"></a>

void ClearUpdateEnabled()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of UpdateEnabled_Optional and sets UpdateEnabled_IsSet to false.




### `IsUpdateEnabledDefaultValue` <a id="structFRHAPI__SendInBlueContact_1ad02e90be12448e9da0e518d7bed8872a"></a>

bool IsUpdateEnabledDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if UpdateEnabled_Optional is set and matches the default value.




### `SetUpdateEnabledToDefault` <a id="structFRHAPI__SendInBlueContact_1af5524c67044a55e677378e61ff88f9e8"></a>

void SetUpdateEnabledToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of UpdateEnabled_Optional to its default and also sets UpdateEnabled_IsSet to true.





