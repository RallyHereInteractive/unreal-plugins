---
title: FRHAPI_MatchMakingTemplateV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Configuration about what rules must be satisfied to use this template, and what matchmaking profiles the ticket will be a part of.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[MatchMakingTemplateId_Optional](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a3295d654d889fe7043ad146896039b4b)|ID for this unique MatchMakingTemplate.|
|bool|[MatchMakingTemplateId_IsSet](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a6c386f1d13fd054ed3af35f140eea282)|true if MatchMakingTemplateId_Optional has been set to a value|
|ERHAPI_MMRGroupingMethod|[MmrGroupingMethod](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a6851769d87be8fa66eed7673454e6a3e)|What method should be used to calculate a group's MMR based on the individual player's ranks.|
|[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset)|[Ruleset_Optional](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a85ff3e95e6d7eca87856477431951e12)||
|bool|[Ruleset_IsSet](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a9de7f5bcdf3afa3e10a05380d1f5caf2)|true if Ruleset_Optional has been set to a value|
|TArray< [FRHAPI_MatchMakingProfileV2](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2) >|[Profiles](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1abd9787ccfc61fbbce96bd078274122c6)|A list of which match making profiles are going to be created on the ticket.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a09913cfeba8e84397ee528f2b90b6278)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1ada7b0f8337d314195687e2723873c9b5)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a8dd4261eb599b8a6bd5d08c7e25669bd)()|Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.|
|const FGuid &|[GetMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1ac3880a7ea2a987e26230d3a6717ec3de)()|Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.|
|const FGuid &|[GetMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1abe89b532da1f20915138f712b527ffbc)(const FGuid & DefaultValue)|Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a7b085305b6e53e783f0d3aadf22c6cb7)(FGuid & OutValue)|Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetMatchMakingTemplateIdOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a0ab3c67e565f452e9e0a1cf900bc3e4a)()|Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetMatchMakingTemplateIdOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1aa635721c585310969cc7b069e4407d20)()|Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a3b030e9e1bb451664236e0424f683b6f)(FGuid NewValue)|Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.|
|void|[ClearMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a5504349fe1028c681a85b8ca7f108bb0)()|Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.|
|ERHAPI_MMRGroupingMethod &|[GetMmrGroupingMethod](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a5c7579f8bee79294e6f468d9a5657213)()|Gets the value of MmrGroupingMethod.|
|const ERHAPI_MMRGroupingMethod &|[GetMmrGroupingMethod](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1aa34861b6db1685a94a5a04914848b47b)()|Gets the value of MmrGroupingMethod.|
|void|[SetMmrGroupingMethod](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1ac3b2dc09cd3e913133e2ffc6b067b813)(ERHAPI_MMRGroupingMethod NewValue)|Sets the value of MmrGroupingMethod.|
|[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) &|[GetRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1acc840e02ad48aa18ba12f5f2e764021f)()|Gets the value of Ruleset_Optional, regardless of it having been set.|
|const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) &|[GetRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1ae987dad7336e79143fe0a3935a57d860)()|Gets the value of Ruleset_Optional, regardless of it having been set.|
|const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) &|[GetRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1ab8e6b978fdb6298e159afeb299bde5f1)(const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & DefaultValue)|Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a1b146c33b32dd3a8accd80db9079a739)([FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & OutValue)|Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) *|[GetRulesetOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a16192932ce33cd91fa00dd29a61c6bbe)()|Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) *|[GetRulesetOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a2f2665a9a1e142676d280de0988e0161)()|Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a47645001717ba9ce9628c23dc5da55bb)([FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) NewValue)|Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.|
|void|[ClearRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a5bbf9a75a6693491ce2de9f6ec92a3b6)()|Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.|
|TArray< [FRHAPI_MatchMakingProfileV2](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2) > &|[GetProfiles](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1aed66168c605aae3123ab7c7835e4bad9)()|Gets the value of Profiles.|
|const TArray< [FRHAPI_MatchMakingProfileV2](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2) > &|[GetProfiles](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1a0d19cee62ef89941b197361270feae87)()|Gets the value of Profiles.|
|void|[SetProfiles](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2_1af1fb3a4356072620d82518cc7b2c856a)(TArray< [FRHAPI_MatchMakingProfileV2](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2) > NewValue)|Sets the value of Profiles.|
## Public Attributes



### `MatchMakingTemplateId_Optional` <a id="structFRHAPI__MatchMakingTemplateV2_1a3295d654d889fe7043ad146896039b4b"></a>

`FGuid FRHAPI_MatchMakingTemplateV2::MatchMakingTemplateId_Optional`

ID for this unique MatchMakingTemplate.




### `MatchMakingTemplateId_IsSet` <a id="structFRHAPI__MatchMakingTemplateV2_1a6c386f1d13fd054ed3af35f140eea282"></a>

`bool FRHAPI_MatchMakingTemplateV2::MatchMakingTemplateId_IsSet`

true if MatchMakingTemplateId_Optional has been set to a value




### `MmrGroupingMethod` <a id="structFRHAPI__MatchMakingTemplateV2_1a6851769d87be8fa66eed7673454e6a3e"></a>

`ERHAPI_MMRGroupingMethod FRHAPI_MatchMakingTemplateV2::MmrGroupingMethod`

What method should be used to calculate a group's MMR based on the individual player's ranks.




### `Ruleset_Optional` <a id="structFRHAPI__MatchMakingTemplateV2_1a85ff3e95e6d7eca87856477431951e12"></a>

`FRHAPI_MatchMakingRuleset FRHAPI_MatchMakingTemplateV2::Ruleset_Optional`






### `Ruleset_IsSet` <a id="structFRHAPI__MatchMakingTemplateV2_1a9de7f5bcdf3afa3e10a05380d1f5caf2"></a>

`bool FRHAPI_MatchMakingTemplateV2::Ruleset_IsSet`

true if Ruleset_Optional has been set to a value




### `Profiles` <a id="structFRHAPI__MatchMakingTemplateV2_1abd9787ccfc61fbbce96bd078274122c6"></a>

`TArray<FRHAPI_MatchMakingProfileV2> FRHAPI_MatchMakingTemplateV2::Profiles`

A list of which match making profiles are going to be created on the ticket.





## Public Functions



### `FromJson` <a id="structFRHAPI__MatchMakingTemplateV2_1a09913cfeba8e84397ee528f2b90b6278"></a>

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



### `WriteJson` <a id="structFRHAPI__MatchMakingTemplateV2_1ada7b0f8337d314195687e2723873c9b5"></a>

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



### `GetMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplateV2_1a8dd4261eb599b8a6bd5d08c7e25669bd"></a>

FGuid & GetMatchMakingTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.




### `GetMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplateV2_1ac3880a7ea2a987e26230d3a6717ec3de"></a>

const FGuid & GetMatchMakingTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.




### `GetMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplateV2_1abe89b532da1f20915138f712b527ffbc"></a>

const FGuid & GetMatchMakingTemplateId(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplateV2_1a7b085305b6e53e783f0d3aadf22c6cb7"></a>

bool GetMatchMakingTemplateId(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.




### `GetMatchMakingTemplateIdOrNull` <a id="structFRHAPI__MatchMakingTemplateV2_1a0ab3c67e565f452e9e0a1cf900bc3e4a"></a>

FGuid * GetMatchMakingTemplateIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.




### `GetMatchMakingTemplateIdOrNull` <a id="structFRHAPI__MatchMakingTemplateV2_1aa635721c585310969cc7b069e4407d20"></a>

const FGuid * GetMatchMakingTemplateIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.




### `SetMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplateV2_1a3b030e9e1bb451664236e0424f683b6f"></a>

void SetMatchMakingTemplateId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.




### `ClearMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplateV2_1a5504349fe1028c681a85b8ca7f108bb0"></a>

void ClearMatchMakingTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.




### `GetMmrGroupingMethod` <a id="structFRHAPI__MatchMakingTemplateV2_1a5c7579f8bee79294e6f468d9a5657213"></a>

ERHAPI_MMRGroupingMethod & GetMmrGroupingMethod()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MmrGroupingMethod.




### `GetMmrGroupingMethod` <a id="structFRHAPI__MatchMakingTemplateV2_1aa34861b6db1685a94a5a04914848b47b"></a>

const ERHAPI_MMRGroupingMethod & GetMmrGroupingMethod()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MmrGroupingMethod.




### `SetMmrGroupingMethod` <a id="structFRHAPI__MatchMakingTemplateV2_1ac3b2dc09cd3e913133e2ffc6b067b813"></a>

void SetMmrGroupingMethod(ERHAPI_MMRGroupingMethod NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_MMRGroupingMethod|NewValue|

#### Description

Sets the value of MmrGroupingMethod.




### `GetRuleset` <a id="structFRHAPI__MatchMakingTemplateV2_1acc840e02ad48aa18ba12f5f2e764021f"></a>

[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & GetRuleset()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Ruleset_Optional, regardless of it having been set.




### `GetRuleset` <a id="structFRHAPI__MatchMakingTemplateV2_1ae987dad7336e79143fe0a3935a57d860"></a>

const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & GetRuleset()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Ruleset_Optional, regardless of it having been set.




### `GetRuleset` <a id="structFRHAPI__MatchMakingTemplateV2_1ab8e6b978fdb6298e159afeb299bde5f1"></a>

const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & GetRuleset(const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) &|DefaultValue|

#### Description

Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRuleset` <a id="structFRHAPI__MatchMakingTemplateV2_1a1b146c33b32dd3a8accd80db9079a739"></a>

bool GetRuleset([FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) &|OutValue|

#### Description

Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.




### `GetRulesetOrNull` <a id="structFRHAPI__MatchMakingTemplateV2_1a16192932ce33cd91fa00dd29a61c6bbe"></a>

[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) * GetRulesetOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.




### `GetRulesetOrNull` <a id="structFRHAPI__MatchMakingTemplateV2_1a2f2665a9a1e142676d280de0988e0161"></a>

const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) * GetRulesetOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.




### `SetRuleset` <a id="structFRHAPI__MatchMakingTemplateV2_1a47645001717ba9ce9628c23dc5da55bb"></a>

void SetRuleset([FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset)|NewValue|

#### Description

Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.




### `ClearRuleset` <a id="structFRHAPI__MatchMakingTemplateV2_1a5bbf9a75a6693491ce2de9f6ec92a3b6"></a>

void ClearRuleset()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.




### `GetProfiles` <a id="structFRHAPI__MatchMakingTemplateV2_1aed66168c605aae3123ab7c7835e4bad9"></a>

TArray< [FRHAPI_MatchMakingProfileV2](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2) > & GetProfiles()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Profiles.




### `GetProfiles` <a id="structFRHAPI__MatchMakingTemplateV2_1a0d19cee62ef89941b197361270feae87"></a>

const TArray< [FRHAPI_MatchMakingProfileV2](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2) > & GetProfiles()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Profiles.




### `SetProfiles` <a id="structFRHAPI__MatchMakingTemplateV2_1af1fb3a4356072620d82518cc7b2c856a"></a>

void SetProfiles(TArray< [FRHAPI_MatchMakingProfileV2](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_MatchMakingProfileV2](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2) >|NewValue|

#### Description

Sets the value of Profiles.





