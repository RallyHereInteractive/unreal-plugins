---
title: FRHAPI_TimeFrame Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Time Frames are used to calculate the expiration of Inventory.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Name_Optional](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a9f98d9b63bc7ed584b19f122871a6fce)|The name of the Time Frame.|
|bool|[Name_IsSet](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a59a4d8fb084ba9df3aa0f8846cfec44f)|true if Name_Optional has been set to a value|
|bool|[Active_Optional](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a977575282d88a38f08c66cab4b0bb1b1)|Whether or not the Time Frame is active.|
|bool|[Active_IsSet](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a9331dfcec5f120169f0a6d9ab933964c)|true if Active_Optional has been set to a value|
|int32|[Episode_Optional](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a6f13c5bba3d4736c37c8dd34db523907)||
|bool|[Episode_IsSet](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a22d729d0fc761e3ca8aecd4b9bf1e00b)|true if Episode_Optional has been set to a value|
|int32|[EpisodeType_Optional](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1aa86fb2d7d68e0d1d545c6dfb1fbc5229)||
|bool|[EpisodeType_IsSet](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a09b0cf40f95f9b13341f8cd0fdbc8d0b)|true if EpisodeType_Optional has been set to a value|
|int32|[HourInterval_Optional](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1adcbfa15f184a815d088751cc18df818e)|Number of hours that this time frame lasts until restarting.0 interval means no repeating.|
|bool|[HourInterval_IsSet](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a2bdacd12b2f852433aab7d081195de09)|true if HourInterval_Optional has been set to a value|
|FDateTime|[Start](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a73cb11a548bd25c9db92a9aa4730ea7a)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|FDateTime|[End](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1ad3022631cc8ca9e042b21e579e1c7056)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a147c3051181706c6bdf0c078e9f8d44b)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a35e7451323d4130ffdf6f1768334514e)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a6216b8f840e8a64f7415c31d82b359e4)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a51b994d0e2578162a4385fe227282178)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetName](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a61a9c58b46ee70d81e2db50065091133)()|Gets the value of Name_Optional, regardless of it having been set.|
|const FString &|[GetName](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a74a8f2660fa870509e208f709bb5f324)()|Gets the value of Name_Optional, regardless of it having been set.|
|const FString &|[GetName](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a61956dabee5d81e6010fd6649465f058)(const FString & DefaultValue)|Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetName](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a758329c3ea43e1f46586235a6f1f6c1d)(FString & OutValue)|Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetNameOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1aefee06dc4bfdb221312e8ace4ccd8b9a)()|Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetNameOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a0c9e9f3dc27555d9d558b679a0e87134)()|Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetName](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a13f0f620aec5f65ba8c5c185f3073bad)(FString NewValue)|Sets the value of Name_Optional and also sets Name_IsSet to true.|
|void|[ClearName](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a581126a53e4cb04c4151c1454e79aded)()|Clears the value of Name_Optional and sets Name_IsSet to false.|
|bool &|[GetActive](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a7a12bcf20262c2009ed84473cd914405)()|Gets the value of Active_Optional, regardless of it having been set.|
|const bool &|[GetActive](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a5ef2ffa44fefe506cebaa4f66ce1ef48)()|Gets the value of Active_Optional, regardless of it having been set.|
|const bool &|[GetActive](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a09122c2a9538d8b41f96f10e304179ad)(const bool & DefaultValue)|Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetActive](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a2270c07de39e64c8c2a99d8dbd72070c)(bool & OutValue)|Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetActiveOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a58445f3c2933caaf91a495d153a1c17e)()|Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetActiveOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a78fb77fe09a49a56f8ae44da6b33c126)()|Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetActive](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1addda5b0153efc29d21fc0e0fb05f83e3)(bool NewValue)|Sets the value of Active_Optional and also sets Active_IsSet to true.|
|void|[ClearActive](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1ad0aca5c772290bd9b2c69b0e95cac039)()|Clears the value of Active_Optional and sets Active_IsSet to false.|
|bool|[IsActiveDefaultValue](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a868ac1cf044aba574f8b71380cd5c84e)()|Returns true if Active_Optional is set and matches the default value.|
|void|[SetActiveToDefault](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1ac3e33f300357adaafe87c2d29e058a31)()|Sets the value of Active_Optional to its default and also sets Active_IsSet to true.|
|int32 &|[GetEpisode](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a81efe2c90e4897f348a02ec956bca5b7)()|Gets the value of Episode_Optional, regardless of it having been set.|
|const int32 &|[GetEpisode](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a32628e6aa1b5b3445847fdf20c413a5d)()|Gets the value of Episode_Optional, regardless of it having been set.|
|const int32 &|[GetEpisode](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a188254266e1b65194afbd37059760d79)(const int32 & DefaultValue)|Gets the value of Episode_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEpisode](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1afdb8b52fa67192b5b84ea28055e6933d)(int32 & OutValue)|Fills OutValue with the value of Episode_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetEpisodeOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1acc3e2886064a54754261a4e2ac6d7c7f)()|Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetEpisodeOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a84f705a43ed2aa5e7d0911b56931285b)()|Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEpisode](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a1ec8ed2b771aa319c36ca7b3b3adefb5)(int32 NewValue)|Sets the value of Episode_Optional and also sets Episode_IsSet to true.|
|void|[ClearEpisode](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a2f88f072cc4379db7a5e9355178dedcd)()|Clears the value of Episode_Optional and sets Episode_IsSet to false.|
|bool|[IsEpisodeDefaultValue](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a3c1c4726e257599575433177bab44d2f)()|Returns true if Episode_Optional is set and matches the default value.|
|void|[SetEpisodeToDefault](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a7dd090778af7205fb0076af77f84e4d5)()|Sets the value of Episode_Optional to its default and also sets Episode_IsSet to true.|
|int32 &|[GetEpisodeType](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a8fd40449d98103424b3b0ebc22b9eadd)()|Gets the value of EpisodeType_Optional, regardless of it having been set.|
|const int32 &|[GetEpisodeType](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1ace71d32bd19c9798ce6e5b1d3e7a7e89)()|Gets the value of EpisodeType_Optional, regardless of it having been set.|
|const int32 &|[GetEpisodeType](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1aedcab36c40ce0f9c65c6caae417e85b7)(const int32 & DefaultValue)|Gets the value of EpisodeType_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEpisodeType](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a6ec55307d4f45826becb235276a81bc0)(int32 & OutValue)|Fills OutValue with the value of EpisodeType_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetEpisodeTypeOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1aec3237f211f5a315646ae569f15f0d3e)()|Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetEpisodeTypeOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a537a6c6e1f3fa724593574a8b32e2a8c)()|Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEpisodeType](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a6ecfc3bfa3501f669ab1ec62a0ce41d0)(int32 NewValue)|Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true.|
|void|[ClearEpisodeType](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1ac593875efb4429774428eb2de7ff4eb9)()|Clears the value of EpisodeType_Optional and sets EpisodeType_IsSet to false.|
|bool|[IsEpisodeTypeDefaultValue](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1ab1cc20719aabc912a5fb97d99ee0e211)()|Returns true if EpisodeType_Optional is set and matches the default value.|
|void|[SetEpisodeTypeToDefault](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a211e7b5d08b87886daddaf325358ee15)()|Sets the value of EpisodeType_Optional to its default and also sets EpisodeType_IsSet to true.|
|int32 &|[GetHourInterval](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a96fe52c2123c0171189076b9957d5055)()|Gets the value of HourInterval_Optional, regardless of it having been set.|
|const int32 &|[GetHourInterval](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a98c1e1b0437597f70e1532c4aedbb0f3)()|Gets the value of HourInterval_Optional, regardless of it having been set.|
|const int32 &|[GetHourInterval](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a9ed2214e9fdbda6be5f0be224d482722)(const int32 & DefaultValue)|Gets the value of HourInterval_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetHourInterval](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1ace7da4e14654b9de551fcedf243ef83a)(int32 & OutValue)|Fills OutValue with the value of HourInterval_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetHourIntervalOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1ae926130800a31b291758a1e7c9ce9c4d)()|Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetHourIntervalOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1ab54995c9ec6e93bc721dbad614789812)()|Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetHourInterval](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a74ed5691da10214be3e36df9804c84e6)(int32 NewValue)|Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true.|
|void|[ClearHourInterval](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a7488c51a0f1ecd54b148cc00009ef711)()|Clears the value of HourInterval_Optional and sets HourInterval_IsSet to false.|
|bool|[IsHourIntervalDefaultValue](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1adaaf6dfb8a78bdd20d76260a45d65d95)()|Returns true if HourInterval_Optional is set and matches the default value.|
|void|[SetHourIntervalToDefault](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a1b3affee895187185d25a80d848097c6)()|Sets the value of HourInterval_Optional to its default and also sets HourInterval_IsSet to true.|
|FDateTime &|[GetStart](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1afcd1399a2f4d19035b6dc7e1b068b971)()|Gets the value of Start.|
|const FDateTime &|[GetStart](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1adfea0cf9fe4c09b0e77087fe2ff3c6c6)()|Gets the value of Start.|
|void|[SetStart](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a262555f788047ebb0d240f999f794f5f)(FDateTime NewValue)|Sets the value of Start.|
|FDateTime &|[GetEnd](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1af81d214b4f63a21dfd7b0659d963ff99)()|Gets the value of End.|
|const FDateTime &|[GetEnd](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a20a539e8f2739e6e86bb44ca0edd15f0)()|Gets the value of End.|
|void|[SetEnd](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1ac9c8254d72f15326b439e637e2c68d4d)(FDateTime NewValue)|Sets the value of End.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1af9aa89ce323040f0ccd0c2d14b5dde29)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a62cd18465fa31e73c0a6156afdc583eb)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a517db9f51a7ec1bc0ac5b04fbd2b1c6c)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1ab2d06ff4c1f1c9d37c6fcae1e33878b8)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a5d762255a302a1bf885905350c8394f0)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1aed405aca0d7c3ca4590cd75d145f73b9)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1aa780f7c451501bb1488d8264f68e141f)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame_1a38a9e13c08ae05b91dd35621c129a2d1)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `Name_Optional` <a id="structFRHAPI__TimeFrame_1a9f98d9b63bc7ed584b19f122871a6fce"></a>

`FString FRHAPI_TimeFrame::Name_Optional`

The name of the Time Frame.




### `Name_IsSet` <a id="structFRHAPI__TimeFrame_1a59a4d8fb084ba9df3aa0f8846cfec44f"></a>

`bool FRHAPI_TimeFrame::Name_IsSet`

true if Name_Optional has been set to a value




### `Active_Optional` <a id="structFRHAPI__TimeFrame_1a977575282d88a38f08c66cab4b0bb1b1"></a>

`bool FRHAPI_TimeFrame::Active_Optional`

Whether or not the Time Frame is active.




### `Active_IsSet` <a id="structFRHAPI__TimeFrame_1a9331dfcec5f120169f0a6d9ab933964c"></a>

`bool FRHAPI_TimeFrame::Active_IsSet`

true if Active_Optional has been set to a value




### `Episode_Optional` <a id="structFRHAPI__TimeFrame_1a6f13c5bba3d4736c37c8dd34db523907"></a>

`int32 FRHAPI_TimeFrame::Episode_Optional`






### `Episode_IsSet` <a id="structFRHAPI__TimeFrame_1a22d729d0fc761e3ca8aecd4b9bf1e00b"></a>

`bool FRHAPI_TimeFrame::Episode_IsSet`

true if Episode_Optional has been set to a value




### `EpisodeType_Optional` <a id="structFRHAPI__TimeFrame_1aa86fb2d7d68e0d1d545c6dfb1fbc5229"></a>

`int32 FRHAPI_TimeFrame::EpisodeType_Optional`






### `EpisodeType_IsSet` <a id="structFRHAPI__TimeFrame_1a09b0cf40f95f9b13341f8cd0fdbc8d0b"></a>

`bool FRHAPI_TimeFrame::EpisodeType_IsSet`

true if EpisodeType_Optional has been set to a value




### `HourInterval_Optional` <a id="structFRHAPI__TimeFrame_1adcbfa15f184a815d088751cc18df818e"></a>

`int32 FRHAPI_TimeFrame::HourInterval_Optional`

Number of hours that this time frame lasts until restarting.0 interval means no repeating.




### `HourInterval_IsSet` <a id="structFRHAPI__TimeFrame_1a2bdacd12b2f852433aab7d081195de09"></a>

`bool FRHAPI_TimeFrame::HourInterval_IsSet`

true if HourInterval_Optional has been set to a value




### `Start` <a id="structFRHAPI__TimeFrame_1a73cb11a548bd25c9db92a9aa4730ea7a"></a>

`FDateTime FRHAPI_TimeFrame::Start`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `End` <a id="structFRHAPI__TimeFrame_1ad3022631cc8ca9e042b21e579e1c7056"></a>

`FDateTime FRHAPI_TimeFrame::End`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `CacheInfo_Optional` <a id="structFRHAPI__TimeFrame_1a147c3051181706c6bdf0c078e9f8d44b"></a>

`FRHAPI_CacheInfo FRHAPI_TimeFrame::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__TimeFrame_1a35e7451323d4130ffdf6f1768334514e"></a>

`bool FRHAPI_TimeFrame::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__TimeFrame_1a6216b8f840e8a64f7415c31d82b359e4"></a>

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



### `WriteJson` <a id="structFRHAPI__TimeFrame_1a51b994d0e2578162a4385fe227282178"></a>

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



### `GetName` <a id="structFRHAPI__TimeFrame_1a61a9c58b46ee70d81e2db50065091133"></a>

FString & GetName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Name_Optional, regardless of it having been set.




### `GetName` <a id="structFRHAPI__TimeFrame_1a74a8f2660fa870509e208f709bb5f324"></a>

const FString & GetName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Name_Optional, regardless of it having been set.




### `GetName` <a id="structFRHAPI__TimeFrame_1a61956dabee5d81e6010fd6649465f058"></a>

const FString & GetName(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetName` <a id="structFRHAPI__TimeFrame_1a758329c3ea43e1f46586235a6f1f6c1d"></a>

bool GetName(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.




### `GetNameOrNull` <a id="structFRHAPI__TimeFrame_1aefee06dc4bfdb221312e8ace4ccd8b9a"></a>

FString * GetNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.




### `GetNameOrNull` <a id="structFRHAPI__TimeFrame_1a0c9e9f3dc27555d9d558b679a0e87134"></a>

const FString * GetNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.




### `SetName` <a id="structFRHAPI__TimeFrame_1a13f0f620aec5f65ba8c5c185f3073bad"></a>

void SetName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Name_Optional and also sets Name_IsSet to true.




### `ClearName` <a id="structFRHAPI__TimeFrame_1a581126a53e4cb04c4151c1454e79aded"></a>

void ClearName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Name_Optional and sets Name_IsSet to false.




### `GetActive` <a id="structFRHAPI__TimeFrame_1a7a12bcf20262c2009ed84473cd914405"></a>

bool & GetActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Active_Optional, regardless of it having been set.




### `GetActive` <a id="structFRHAPI__TimeFrame_1a5ef2ffa44fefe506cebaa4f66ce1ef48"></a>

const bool & GetActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Active_Optional, regardless of it having been set.




### `GetActive` <a id="structFRHAPI__TimeFrame_1a09122c2a9538d8b41f96f10e304179ad"></a>

const bool & GetActive(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetActive` <a id="structFRHAPI__TimeFrame_1a2270c07de39e64c8c2a99d8dbd72070c"></a>

bool GetActive(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.




### `GetActiveOrNull` <a id="structFRHAPI__TimeFrame_1a58445f3c2933caaf91a495d153a1c17e"></a>

bool * GetActiveOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.




### `GetActiveOrNull` <a id="structFRHAPI__TimeFrame_1a78fb77fe09a49a56f8ae44da6b33c126"></a>

const bool * GetActiveOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.




### `SetActive` <a id="structFRHAPI__TimeFrame_1addda5b0153efc29d21fc0e0fb05f83e3"></a>

void SetActive(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of Active_Optional and also sets Active_IsSet to true.




### `ClearActive` <a id="structFRHAPI__TimeFrame_1ad0aca5c772290bd9b2c69b0e95cac039"></a>

void ClearActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Active_Optional and sets Active_IsSet to false.




### `IsActiveDefaultValue` <a id="structFRHAPI__TimeFrame_1a868ac1cf044aba574f8b71380cd5c84e"></a>

bool IsActiveDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Active_Optional is set and matches the default value.




### `SetActiveToDefault` <a id="structFRHAPI__TimeFrame_1ac3e33f300357adaafe87c2d29e058a31"></a>

void SetActiveToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Active_Optional to its default and also sets Active_IsSet to true.




### `GetEpisode` <a id="structFRHAPI__TimeFrame_1a81efe2c90e4897f348a02ec956bca5b7"></a>

int32 & GetEpisode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Episode_Optional, regardless of it having been set.




### `GetEpisode` <a id="structFRHAPI__TimeFrame_1a32628e6aa1b5b3445847fdf20c413a5d"></a>

const int32 & GetEpisode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Episode_Optional, regardless of it having been set.




### `GetEpisode` <a id="structFRHAPI__TimeFrame_1a188254266e1b65194afbd37059760d79"></a>

const int32 & GetEpisode(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of Episode_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEpisode` <a id="structFRHAPI__TimeFrame_1afdb8b52fa67192b5b84ea28055e6933d"></a>

bool GetEpisode(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of Episode_Optional and returns true if it has been set, otherwise returns false.




### `GetEpisodeOrNull` <a id="structFRHAPI__TimeFrame_1acc3e2886064a54754261a4e2ac6d7c7f"></a>

int32 * GetEpisodeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.




### `GetEpisodeOrNull` <a id="structFRHAPI__TimeFrame_1a84f705a43ed2aa5e7d0911b56931285b"></a>

const int32 * GetEpisodeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.




### `SetEpisode` <a id="structFRHAPI__TimeFrame_1a1ec8ed2b771aa319c36ca7b3b3adefb5"></a>

void SetEpisode(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Episode_Optional and also sets Episode_IsSet to true.




### `ClearEpisode` <a id="structFRHAPI__TimeFrame_1a2f88f072cc4379db7a5e9355178dedcd"></a>

void ClearEpisode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Episode_Optional and sets Episode_IsSet to false.




### `IsEpisodeDefaultValue` <a id="structFRHAPI__TimeFrame_1a3c1c4726e257599575433177bab44d2f"></a>

bool IsEpisodeDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Episode_Optional is set and matches the default value.




### `SetEpisodeToDefault` <a id="structFRHAPI__TimeFrame_1a7dd090778af7205fb0076af77f84e4d5"></a>

void SetEpisodeToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Episode_Optional to its default and also sets Episode_IsSet to true.




### `GetEpisodeType` <a id="structFRHAPI__TimeFrame_1a8fd40449d98103424b3b0ebc22b9eadd"></a>

int32 & GetEpisodeType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EpisodeType_Optional, regardless of it having been set.




### `GetEpisodeType` <a id="structFRHAPI__TimeFrame_1ace71d32bd19c9798ce6e5b1d3e7a7e89"></a>

const int32 & GetEpisodeType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EpisodeType_Optional, regardless of it having been set.




### `GetEpisodeType` <a id="structFRHAPI__TimeFrame_1aedcab36c40ce0f9c65c6caae417e85b7"></a>

const int32 & GetEpisodeType(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of EpisodeType_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEpisodeType` <a id="structFRHAPI__TimeFrame_1a6ec55307d4f45826becb235276a81bc0"></a>

bool GetEpisodeType(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of EpisodeType_Optional and returns true if it has been set, otherwise returns false.




### `GetEpisodeTypeOrNull` <a id="structFRHAPI__TimeFrame_1aec3237f211f5a315646ae569f15f0d3e"></a>

int32 * GetEpisodeTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.




### `GetEpisodeTypeOrNull` <a id="structFRHAPI__TimeFrame_1a537a6c6e1f3fa724593574a8b32e2a8c"></a>

const int32 * GetEpisodeTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.




### `SetEpisodeType` <a id="structFRHAPI__TimeFrame_1a6ecfc3bfa3501f669ab1ec62a0ce41d0"></a>

void SetEpisodeType(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true.




### `ClearEpisodeType` <a id="structFRHAPI__TimeFrame_1ac593875efb4429774428eb2de7ff4eb9"></a>

void ClearEpisodeType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of EpisodeType_Optional and sets EpisodeType_IsSet to false.




### `IsEpisodeTypeDefaultValue` <a id="structFRHAPI__TimeFrame_1ab1cc20719aabc912a5fb97d99ee0e211"></a>

bool IsEpisodeTypeDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if EpisodeType_Optional is set and matches the default value.




### `SetEpisodeTypeToDefault` <a id="structFRHAPI__TimeFrame_1a211e7b5d08b87886daddaf325358ee15"></a>

void SetEpisodeTypeToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of EpisodeType_Optional to its default and also sets EpisodeType_IsSet to true.




### `GetHourInterval` <a id="structFRHAPI__TimeFrame_1a96fe52c2123c0171189076b9957d5055"></a>

int32 & GetHourInterval()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HourInterval_Optional, regardless of it having been set.




### `GetHourInterval` <a id="structFRHAPI__TimeFrame_1a98c1e1b0437597f70e1532c4aedbb0f3"></a>

const int32 & GetHourInterval()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HourInterval_Optional, regardless of it having been set.




### `GetHourInterval` <a id="structFRHAPI__TimeFrame_1a9ed2214e9fdbda6be5f0be224d482722"></a>

const int32 & GetHourInterval(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of HourInterval_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetHourInterval` <a id="structFRHAPI__TimeFrame_1ace7da4e14654b9de551fcedf243ef83a"></a>

bool GetHourInterval(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of HourInterval_Optional and returns true if it has been set, otherwise returns false.




### `GetHourIntervalOrNull` <a id="structFRHAPI__TimeFrame_1ae926130800a31b291758a1e7c9ce9c4d"></a>

int32 * GetHourIntervalOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.




### `GetHourIntervalOrNull` <a id="structFRHAPI__TimeFrame_1ab54995c9ec6e93bc721dbad614789812"></a>

const int32 * GetHourIntervalOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.




### `SetHourInterval` <a id="structFRHAPI__TimeFrame_1a74ed5691da10214be3e36df9804c84e6"></a>

void SetHourInterval(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true.




### `ClearHourInterval` <a id="structFRHAPI__TimeFrame_1a7488c51a0f1ecd54b148cc00009ef711"></a>

void ClearHourInterval()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of HourInterval_Optional and sets HourInterval_IsSet to false.




### `IsHourIntervalDefaultValue` <a id="structFRHAPI__TimeFrame_1adaaf6dfb8a78bdd20d76260a45d65d95"></a>

bool IsHourIntervalDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if HourInterval_Optional is set and matches the default value.




### `SetHourIntervalToDefault` <a id="structFRHAPI__TimeFrame_1a1b3affee895187185d25a80d848097c6"></a>

void SetHourIntervalToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of HourInterval_Optional to its default and also sets HourInterval_IsSet to true.




### `GetStart` <a id="structFRHAPI__TimeFrame_1afcd1399a2f4d19035b6dc7e1b068b971"></a>

FDateTime & GetStart()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Start.




### `GetStart` <a id="structFRHAPI__TimeFrame_1adfea0cf9fe4c09b0e77087fe2ff3c6c6"></a>

const FDateTime & GetStart()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Start.




### `SetStart` <a id="structFRHAPI__TimeFrame_1a262555f788047ebb0d240f999f794f5f"></a>

void SetStart(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Start.




### `GetEnd` <a id="structFRHAPI__TimeFrame_1af81d214b4f63a21dfd7b0659d963ff99"></a>

FDateTime & GetEnd()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of End.




### `GetEnd` <a id="structFRHAPI__TimeFrame_1a20a539e8f2739e6e86bb44ca0edd15f0"></a>

const FDateTime & GetEnd()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of End.




### `SetEnd` <a id="structFRHAPI__TimeFrame_1ac9c8254d72f15326b439e637e2c68d4d"></a>

void SetEnd(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of End.




### `GetCacheInfo` <a id="structFRHAPI__TimeFrame_1af9aa89ce323040f0ccd0c2d14b5dde29"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__TimeFrame_1a62cd18465fa31e73c0a6156afdc583eb"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__TimeFrame_1a517db9f51a7ec1bc0ac5b04fbd2b1c6c"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__TimeFrame_1ab2d06ff4c1f1c9d37c6fcae1e33878b8"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__TimeFrame_1a5d762255a302a1bf885905350c8394f0"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__TimeFrame_1aed405aca0d7c3ca4590cd75d145f73b9"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__TimeFrame_1aa780f7c451501bb1488d8264f68e141f"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__TimeFrame_1a38a9e13c08ae05b91dd35621c129a2d1"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





