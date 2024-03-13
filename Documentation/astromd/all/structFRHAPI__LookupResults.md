---
title: FRHAPI_LookupResults Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Lookup results for a player query.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > > >|[DisplayNames_Optional](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a2792e7ea1c67e9bc83be3cc6f8d8f160)|List of display names and the players that match that display name.|
|bool|[DisplayNames_IsSet](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a2dd1caa9fe26b2aaa70966f118305219)|true if DisplayNames_Optional has been set to a value|
|TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > >|[IdentityPlatforms_Optional](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a9b38e82b534a20dd79def5df5af49cec)|DEPRECATED Use identity_platforms_by_platform instead. List of platforms and the players that match that platform user id|
|bool|[IdentityPlatforms_IsSet](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a7916bca0eb141f565ec7062291c9d8d1)|true if IdentityPlatforms_Optional has been set to a value|
|TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > >|[IdentityPlatformsByPlatform_Optional](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a3c33f2087e0f5524231bdf41ad7b1627)|List of platforms and the players that match that platform user id.|
|bool|[IdentityPlatformsByPlatform_IsSet](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a52b71e32ef449b8d56b700674005b0ce)|true if IdentityPlatformsByPlatform_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1acd0574081cdfebd31f70443f17a3977c)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1aeb52b89da73d14f90f831f2cf343f66e)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > > > &|[GetDisplayNames](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a147b3e25f8345fd9705b72080132cbcc)()|Gets the value of DisplayNames_Optional, regardless of it having been set.|
|const TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > > > &|[GetDisplayNames](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a127df10f92296e00e545fb610d54a976)()|Gets the value of DisplayNames_Optional, regardless of it having been set.|
|const TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > > > &|[GetDisplayNames](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1abb89998ff9dbf27792d210b427e777f7)(const TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >>> & DefaultValue)|Gets the value of DisplayNames_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDisplayNames](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a837bb8420ea712949908e7eebfeede65)(TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >>> & OutValue)|Fills OutValue with the value of DisplayNames_Optional and returns true if it has been set, otherwise returns false.|
|TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > > > *|[GetDisplayNamesOrNull](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a16c6face42908516dbde7bb33af14ad4)()|Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > > > *|[GetDisplayNamesOrNull](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a96610b089e26e13d568b575368dfe737)()|Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDisplayNames](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a6460bc29bfc3ccd660283462e60e1099)(TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >>> NewValue)|Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true.|
|void|[ClearDisplayNames](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854)()|Clears the value of DisplayNames_Optional and sets DisplayNames_IsSet to false.|
|TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > &|[GetIdentityPlatforms](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a692d445f337bba6baf76f8aedfe3a290)()|Gets the value of IdentityPlatforms_Optional, regardless of it having been set.|
|const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > &|[GetIdentityPlatforms](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a83b50f1fa62f967258d9b6dfaffc84eb)()|Gets the value of IdentityPlatforms_Optional, regardless of it having been set.|
|const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > &|[GetIdentityPlatforms](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a584052e88b95321abc48547891d01ef8)(const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> & DefaultValue)|Gets the value of IdentityPlatforms_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetIdentityPlatforms](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1add656e8cc4e8a8f7d8e8db602f9e35d6)(TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> & OutValue)|Fills OutValue with the value of IdentityPlatforms_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > *|[GetIdentityPlatformsOrNull](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1ae670b2adf832a4afd8cc9859dcff7a10)()|Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > *|[GetIdentityPlatformsOrNull](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a57078bff20eb941ced0a180b744fa94a)()|Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetIdentityPlatforms](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a78f1e8592bfe33c0fff3d9f282a8cb31)(TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> NewValue)|Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true.|
|void|[ClearIdentityPlatforms](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed)()|Clears the value of IdentityPlatforms_Optional and sets IdentityPlatforms_IsSet to false.|
|TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > &|[GetIdentityPlatformsByPlatform](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a2daecfd02a8952b011172997eb28bce4)()|Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.|
|const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > &|[GetIdentityPlatformsByPlatform](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1ada78797f64d870728f6cb9348271d85b)()|Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.|
|const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > &|[GetIdentityPlatformsByPlatform](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a8aa734579893de72d37efef7ef0e7897)(const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> & DefaultValue)|Gets the value of IdentityPlatformsByPlatform_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetIdentityPlatformsByPlatform](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1abf4538232a31004a9c984f0f7e643f45)(TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> & OutValue)|Fills OutValue with the value of IdentityPlatformsByPlatform_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > *|[GetIdentityPlatformsByPlatformOrNull](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a22a3e2b00f5c8f1c831d34830a812b9b)()|Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > *|[GetIdentityPlatformsByPlatformOrNull](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a5d41c4ace1c4c955a0555ced609d4797)()|Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetIdentityPlatformsByPlatform](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a2640d5921ef0f91c9ef47f263c247236)(TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> NewValue)|Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true.|
|void|[ClearIdentityPlatformsByPlatform](/unreal-plugins/all/structfrhapi__lookupresults/#structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929)()|Clears the value of IdentityPlatformsByPlatform_Optional and sets IdentityPlatformsByPlatform_IsSet to false.|
## Public Attributes



### `DisplayNames_Optional` <a id="structFRHAPI__LookupResults_1a2792e7ea1c67e9bc83be3cc6f8d8f160"></a>

`TArray<TMap<FString, TArray<FRHAPI_PlayerResponse> > > FRHAPI_LookupResults::DisplayNames_Optional`

List of display names and the players that match that display name.




### `DisplayNames_IsSet` <a id="structFRHAPI__LookupResults_1a2dd1caa9fe26b2aaa70966f118305219"></a>

`bool FRHAPI_LookupResults::DisplayNames_IsSet`

true if DisplayNames_Optional has been set to a value




### `IdentityPlatforms_Optional` <a id="structFRHAPI__LookupResults_1a9b38e82b534a20dd79def5df5af49cec"></a>

`TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults> > FRHAPI_LookupResults::IdentityPlatforms_Optional`

DEPRECATED Use identity_platforms_by_platform instead. List of platforms and the players that match that platform user id




### `IdentityPlatforms_IsSet` <a id="structFRHAPI__LookupResults_1a7916bca0eb141f565ec7062291c9d8d1"></a>

`bool FRHAPI_LookupResults::IdentityPlatforms_IsSet`

true if IdentityPlatforms_Optional has been set to a value




### `IdentityPlatformsByPlatform_Optional` <a id="structFRHAPI__LookupResults_1a3c33f2087e0f5524231bdf41ad7b1627"></a>

`TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults> > FRHAPI_LookupResults::IdentityPlatformsByPlatform_Optional`

List of platforms and the players that match that platform user id.




### `IdentityPlatformsByPlatform_IsSet` <a id="structFRHAPI__LookupResults_1a52b71e32ef449b8d56b700674005b0ce"></a>

`bool FRHAPI_LookupResults::IdentityPlatformsByPlatform_IsSet`

true if IdentityPlatformsByPlatform_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__LookupResults_1acd0574081cdfebd31f70443f17a3977c"></a>

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



### `WriteJson` <a id="structFRHAPI__LookupResults_1aeb52b89da73d14f90f831f2cf343f66e"></a>

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



### `GetDisplayNames` <a id="structFRHAPI__LookupResults_1a147b3e25f8345fd9705b72080132cbcc"></a>

TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > > > & GetDisplayNames()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayNames_Optional, regardless of it having been set.




### `GetDisplayNames` <a id="structFRHAPI__LookupResults_1a127df10f92296e00e545fb610d54a976"></a>

const TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > > > & GetDisplayNames()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayNames_Optional, regardless of it having been set.




### `GetDisplayNames` <a id="structFRHAPI__LookupResults_1abb89998ff9dbf27792d210b427e777f7"></a>

const TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > > > & GetDisplayNames(const TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >>> & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >>> &|DefaultValue|

#### Description

Gets the value of DisplayNames_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDisplayNames` <a id="structFRHAPI__LookupResults_1a837bb8420ea712949908e7eebfeede65"></a>

bool GetDisplayNames(TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >>> & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >>> &|OutValue|

#### Description

Fills OutValue with the value of DisplayNames_Optional and returns true if it has been set, otherwise returns false.




### `GetDisplayNamesOrNull` <a id="structFRHAPI__LookupResults_1a16c6face42908516dbde7bb33af14ad4"></a>

TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > > > * GetDisplayNamesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.




### `GetDisplayNamesOrNull` <a id="structFRHAPI__LookupResults_1a96610b089e26e13d568b575368dfe737"></a>

const TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > > > * GetDisplayNamesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.




### `SetDisplayNames` <a id="structFRHAPI__LookupResults_1a6460bc29bfc3ccd660283462e60e1099"></a>

void SetDisplayNames(TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >>> NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< TMap< FString, TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >>>|NewValue|

#### Description

Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true.




### `ClearDisplayNames` <a id="structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854"></a>

void ClearDisplayNames()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DisplayNames_Optional and sets DisplayNames_IsSet to false.




### `GetIdentityPlatforms` <a id="structFRHAPI__LookupResults_1a692d445f337bba6baf76f8aedfe3a290"></a>

TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > & GetIdentityPlatforms()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IdentityPlatforms_Optional, regardless of it having been set.




### `GetIdentityPlatforms` <a id="structFRHAPI__LookupResults_1a83b50f1fa62f967258d9b6dfaffc84eb"></a>

const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > & GetIdentityPlatforms()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IdentityPlatforms_Optional, regardless of it having been set.




### `GetIdentityPlatforms` <a id="structFRHAPI__LookupResults_1a584052e88b95321abc48547891d01ef8"></a>

const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > & GetIdentityPlatforms(const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> &|DefaultValue|

#### Description

Gets the value of IdentityPlatforms_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetIdentityPlatforms` <a id="structFRHAPI__LookupResults_1add656e8cc4e8a8f7d8e8db602f9e35d6"></a>

bool GetIdentityPlatforms(TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> &|OutValue|

#### Description

Fills OutValue with the value of IdentityPlatforms_Optional and returns true if it has been set, otherwise returns false.




### `GetIdentityPlatformsOrNull` <a id="structFRHAPI__LookupResults_1ae670b2adf832a4afd8cc9859dcff7a10"></a>

TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > * GetIdentityPlatformsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.




### `GetIdentityPlatformsOrNull` <a id="structFRHAPI__LookupResults_1a57078bff20eb941ced0a180b744fa94a"></a>

const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > * GetIdentityPlatformsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.




### `SetIdentityPlatforms` <a id="structFRHAPI__LookupResults_1a78f1e8592bfe33c0fff3d9f282a8cb31"></a>

void SetIdentityPlatforms(TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >>|NewValue|

#### Description

Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true.




### `ClearIdentityPlatforms` <a id="structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed"></a>

void ClearIdentityPlatforms()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of IdentityPlatforms_Optional and sets IdentityPlatforms_IsSet to false.




### `GetIdentityPlatformsByPlatform` <a id="structFRHAPI__LookupResults_1a2daecfd02a8952b011172997eb28bce4"></a>

TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > & GetIdentityPlatformsByPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.




### `GetIdentityPlatformsByPlatform` <a id="structFRHAPI__LookupResults_1ada78797f64d870728f6cb9348271d85b"></a>

const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > & GetIdentityPlatformsByPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.




### `GetIdentityPlatformsByPlatform` <a id="structFRHAPI__LookupResults_1a8aa734579893de72d37efef7ef0e7897"></a>

const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > & GetIdentityPlatformsByPlatform(const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> &|DefaultValue|

#### Description

Gets the value of IdentityPlatformsByPlatform_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetIdentityPlatformsByPlatform` <a id="structFRHAPI__LookupResults_1abf4538232a31004a9c984f0f7e643f45"></a>

bool GetIdentityPlatformsByPlatform(TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> &|OutValue|

#### Description

Fills OutValue with the value of IdentityPlatformsByPlatform_Optional and returns true if it has been set, otherwise returns false.




### `GetIdentityPlatformsByPlatformOrNull` <a id="structFRHAPI__LookupResults_1a22a3e2b00f5c8f1c831d34830a812b9b"></a>

TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > * GetIdentityPlatformsByPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.




### `GetIdentityPlatformsByPlatformOrNull` <a id="structFRHAPI__LookupResults_1a5d41c4ace1c4c955a0555ced609d4797"></a>

const TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) > > * GetIdentityPlatformsByPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.




### `SetIdentityPlatformsByPlatform` <a id="structFRHAPI__LookupResults_1a2640d5921ef0f91c9ef47f263c247236"></a>

void SetIdentityPlatformsByPlatform(TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >> NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, TArray< [FRHAPI_PlatformIdentityLookupResults](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults) >>|NewValue|

#### Description

Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true.




### `ClearIdentityPlatformsByPlatform` <a id="structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929"></a>

void ClearIdentityPlatformsByPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of IdentityPlatformsByPlatform_Optional and sets IdentityPlatformsByPlatform_IsSet to false.





