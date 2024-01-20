---
title: FRHAPI_InstanceFubar Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Information about an instance that has been determined to be FUBAR.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[InstanceId](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a5318ab204d0e3dcd9b7ee656af424c0a)|ID for which instance was marked as FUBAR.|
|FString|[Error](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1ad2d05a55c1be83136efe75fcb34f93dd)|Error string describing what caused the instance failure.|
|FString|[Region](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a02a132ae495f77357f4830eb46551dd3)|What region the failed instance was in.|
|FString|[MatchmakingProfileId_Optional](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a122a2d34f02efafe3017bc1b4d98a8c2)|ID for which matchmaking profile was used to generate the failed instance.|
|bool|[MatchmakingProfileId_IsSet](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a729a1afe2b95e7c6374da6f5e70f2148)|true if MatchmakingProfileId_Optional has been set to a value|
|ERHAPI_InstanceSourceProvider|[InstanceSourceProvider_Optional](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1ac0f064b552cfe44769598fd05efcf290)|Which instance provider allocated this failed instance.|
|bool|[InstanceSourceProvider_IsSet](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1af00161ad647256b4aebaa38c55cec24a)|true if InstanceSourceProvider_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a7f886357c7b26160d9522159141cafe5)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a16b24745002fcfd27001e5240b3896f9)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a1d812c1274ff20253fff730a711549c9)()|Gets the value of InstanceId.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a8532875b579372d13f35e3310631701c)()|Gets the value of InstanceId.|
|void|[SetInstanceId](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1af54eb2bd66c4e8757f47afdc9ec9a780)(FString NewValue)|Sets the value of InstanceId.|
|FString &|[GetError](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a87232e0e066459725d7da6db1618d858)()|Gets the value of Error.|
|const FString &|[GetError](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1af39dce2398eff58d2872c7a7b33d6882)()|Gets the value of Error.|
|void|[SetError](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1ad172dbabd7b4975025c1cadb3b989132)(FString NewValue)|Sets the value of Error.|
|FString &|[GetRegion](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1abb659d9198de044c3a1ce16343b51370)()|Gets the value of Region.|
|const FString &|[GetRegion](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a11cc36df302564d7269b9f6962e97137)()|Gets the value of Region.|
|void|[SetRegion](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1aedb47e8402db6bf85ae1e3d409acadeb)(FString NewValue)|Sets the value of Region.|
|FString &|[GetMatchmakingProfileId](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1afcae9959aff56e37649a78f2a9393398)()|Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.|
|const FString &|[GetMatchmakingProfileId](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1ac569e1c140c99e307c9182f9df37874f)()|Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.|
|const FString &|[GetMatchmakingProfileId](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a29910120c89e7819256a8608831fb4e4)(const FString & DefaultValue)|Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMatchmakingProfileId](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a9cb21fb60509b05f133acea8c3eb8498)(FString & OutValue)|Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetMatchmakingProfileIdOrNull](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a544648b7fbb1585f430b372d0665b96f)()|Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetMatchmakingProfileIdOrNull](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a1476ba7b056f28494431959b9f9ee163)()|Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMatchmakingProfileId](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a30d2ff761d5bf90556a5a33b5a243768)(FString NewValue)|Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.|
|void|[ClearMatchmakingProfileId](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a872908729dc35f98f1c9dcdc92102f21)()|Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.|
|ERHAPI_InstanceSourceProvider &|[GetInstanceSourceProvider](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a2efba69a308b4cff37e3595fa845a6aa)()|Gets the value of InstanceSourceProvider_Optional, regardless of it having been set.|
|const ERHAPI_InstanceSourceProvider &|[GetInstanceSourceProvider](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a3e4e170c9fdeb664bb4e98abe38bcef5)()|Gets the value of InstanceSourceProvider_Optional, regardless of it having been set.|
|const ERHAPI_InstanceSourceProvider &|[GetInstanceSourceProvider](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1acf5d5e1e787e28ab8fdfb69709f13c56)(const ERHAPI_InstanceSourceProvider & DefaultValue)|Gets the value of InstanceSourceProvider_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstanceSourceProvider](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a1047648fe2e83fda56dc549ce708ac88)(ERHAPI_InstanceSourceProvider & OutValue)|Fills OutValue with the value of InstanceSourceProvider_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InstanceSourceProvider *|[GetInstanceSourceProviderOrNull](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1aceb28bd2b3bd65dbcae5739f52ac5058)()|Returns a pointer to InstanceSourceProvider_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InstanceSourceProvider *|[GetInstanceSourceProviderOrNull](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1a86907faf7cb3853a31c9e9207e0e3475)()|Returns a pointer to InstanceSourceProvider_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstanceSourceProvider](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1aea646fbed8dee430943854f42959bab6)(ERHAPI_InstanceSourceProvider NewValue)|Sets the value of InstanceSourceProvider_Optional and also sets InstanceSourceProvider_IsSet to true.|
|void|[ClearInstanceSourceProvider](/unreal-plugins/all/structfrhapi__instancefubar/#structFRHAPI__InstanceFubar_1aac21c7aac647feced2f99ef4b0a5e1f2)()|Clears the value of InstanceSourceProvider_Optional and sets InstanceSourceProvider_IsSet to false.|
## Public Attributes



### `InstanceId` <a id="structFRHAPI__InstanceFubar_1a5318ab204d0e3dcd9b7ee656af424c0a"></a>

`FString FRHAPI_InstanceFubar::InstanceId`

ID for which instance was marked as FUBAR.




### `Error` <a id="structFRHAPI__InstanceFubar_1ad2d05a55c1be83136efe75fcb34f93dd"></a>

`FString FRHAPI_InstanceFubar::Error`

Error string describing what caused the instance failure.




### `Region` <a id="structFRHAPI__InstanceFubar_1a02a132ae495f77357f4830eb46551dd3"></a>

`FString FRHAPI_InstanceFubar::Region`

What region the failed instance was in.




### `MatchmakingProfileId_Optional` <a id="structFRHAPI__InstanceFubar_1a122a2d34f02efafe3017bc1b4d98a8c2"></a>

`FString FRHAPI_InstanceFubar::MatchmakingProfileId_Optional`

ID for which matchmaking profile was used to generate the failed instance.




### `MatchmakingProfileId_IsSet` <a id="structFRHAPI__InstanceFubar_1a729a1afe2b95e7c6374da6f5e70f2148"></a>

`bool FRHAPI_InstanceFubar::MatchmakingProfileId_IsSet`

true if MatchmakingProfileId_Optional has been set to a value




### `InstanceSourceProvider_Optional` <a id="structFRHAPI__InstanceFubar_1ac0f064b552cfe44769598fd05efcf290"></a>

`ERHAPI_InstanceSourceProvider FRHAPI_InstanceFubar::InstanceSourceProvider_Optional`

Which instance provider allocated this failed instance.




### `InstanceSourceProvider_IsSet` <a id="structFRHAPI__InstanceFubar_1af00161ad647256b4aebaa38c55cec24a"></a>

`bool FRHAPI_InstanceFubar::InstanceSourceProvider_IsSet`

true if InstanceSourceProvider_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InstanceFubar_1a7f886357c7b26160d9522159141cafe5"></a>

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



### `WriteJson` <a id="structFRHAPI__InstanceFubar_1a16b24745002fcfd27001e5240b3896f9"></a>

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



### `GetInstanceId` <a id="structFRHAPI__InstanceFubar_1a1d812c1274ff20253fff730a711549c9"></a>

FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId.




### `GetInstanceId` <a id="structFRHAPI__InstanceFubar_1a8532875b579372d13f35e3310631701c"></a>

const FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId.




### `SetInstanceId` <a id="structFRHAPI__InstanceFubar_1af54eb2bd66c4e8757f47afdc9ec9a780"></a>

void SetInstanceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InstanceId.




### `GetError` <a id="structFRHAPI__InstanceFubar_1a87232e0e066459725d7da6db1618d858"></a>

FString & GetError()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Error.




### `GetError` <a id="structFRHAPI__InstanceFubar_1af39dce2398eff58d2872c7a7b33d6882"></a>

const FString & GetError()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Error.




### `SetError` <a id="structFRHAPI__InstanceFubar_1ad172dbabd7b4975025c1cadb3b989132"></a>

void SetError(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Error.




### `GetRegion` <a id="structFRHAPI__InstanceFubar_1abb659d9198de044c3a1ce16343b51370"></a>

FString & GetRegion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Region.




### `GetRegion` <a id="structFRHAPI__InstanceFubar_1a11cc36df302564d7269b9f6962e97137"></a>

const FString & GetRegion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Region.




### `SetRegion` <a id="structFRHAPI__InstanceFubar_1aedb47e8402db6bf85ae1e3d409acadeb"></a>

void SetRegion(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Region.




### `GetMatchmakingProfileId` <a id="structFRHAPI__InstanceFubar_1afcae9959aff56e37649a78f2a9393398"></a>

FString & GetMatchmakingProfileId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.




### `GetMatchmakingProfileId` <a id="structFRHAPI__InstanceFubar_1ac569e1c140c99e307c9182f9df37874f"></a>

const FString & GetMatchmakingProfileId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.




### `GetMatchmakingProfileId` <a id="structFRHAPI__InstanceFubar_1a29910120c89e7819256a8608831fb4e4"></a>

const FString & GetMatchmakingProfileId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMatchmakingProfileId` <a id="structFRHAPI__InstanceFubar_1a9cb21fb60509b05f133acea8c3eb8498"></a>

bool GetMatchmakingProfileId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.




### `GetMatchmakingProfileIdOrNull` <a id="structFRHAPI__InstanceFubar_1a544648b7fbb1585f430b372d0665b96f"></a>

FString * GetMatchmakingProfileIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.




### `GetMatchmakingProfileIdOrNull` <a id="structFRHAPI__InstanceFubar_1a1476ba7b056f28494431959b9f9ee163"></a>

const FString * GetMatchmakingProfileIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.




### `SetMatchmakingProfileId` <a id="structFRHAPI__InstanceFubar_1a30d2ff761d5bf90556a5a33b5a243768"></a>

void SetMatchmakingProfileId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.




### `ClearMatchmakingProfileId` <a id="structFRHAPI__InstanceFubar_1a872908729dc35f98f1c9dcdc92102f21"></a>

void ClearMatchmakingProfileId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.




### `GetInstanceSourceProvider` <a id="structFRHAPI__InstanceFubar_1a2efba69a308b4cff37e3595fa845a6aa"></a>

ERHAPI_InstanceSourceProvider & GetInstanceSourceProvider()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceSourceProvider_Optional, regardless of it having been set.




### `GetInstanceSourceProvider` <a id="structFRHAPI__InstanceFubar_1a3e4e170c9fdeb664bb4e98abe38bcef5"></a>

const ERHAPI_InstanceSourceProvider & GetInstanceSourceProvider()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceSourceProvider_Optional, regardless of it having been set.




### `GetInstanceSourceProvider` <a id="structFRHAPI__InstanceFubar_1acf5d5e1e787e28ab8fdfb69709f13c56"></a>

const ERHAPI_InstanceSourceProvider & GetInstanceSourceProvider(const ERHAPI_InstanceSourceProvider & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InstanceSourceProvider &|DefaultValue|

#### Description

Gets the value of InstanceSourceProvider_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstanceSourceProvider` <a id="structFRHAPI__InstanceFubar_1a1047648fe2e83fda56dc549ce708ac88"></a>

bool GetInstanceSourceProvider(ERHAPI_InstanceSourceProvider & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InstanceSourceProvider &|OutValue|

#### Description

Fills OutValue with the value of InstanceSourceProvider_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceSourceProviderOrNull` <a id="structFRHAPI__InstanceFubar_1aceb28bd2b3bd65dbcae5739f52ac5058"></a>

ERHAPI_InstanceSourceProvider * GetInstanceSourceProviderOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceSourceProvider_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceSourceProviderOrNull` <a id="structFRHAPI__InstanceFubar_1a86907faf7cb3853a31c9e9207e0e3475"></a>

const ERHAPI_InstanceSourceProvider * GetInstanceSourceProviderOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceSourceProvider_Optional, if it has been set, otherwise returns nullptr.




### `SetInstanceSourceProvider` <a id="structFRHAPI__InstanceFubar_1aea646fbed8dee430943854f42959bab6"></a>

void SetInstanceSourceProvider(ERHAPI_InstanceSourceProvider NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InstanceSourceProvider|NewValue|

#### Description

Sets the value of InstanceSourceProvider_Optional and also sets InstanceSourceProvider_IsSet to true.




### `ClearInstanceSourceProvider` <a id="structFRHAPI__InstanceFubar_1aac21c7aac647feced2f99ef4b0a5e1f2"></a>

void ClearInstanceSourceProvider()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InstanceSourceProvider_Optional and sets InstanceSourceProvider_IsSet to false.





