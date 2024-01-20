---
title: FRHAPI_MatchMakingTemplate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED Configuration about what rules must be satisfied to use this template, and what matchmaking profiles the ticket will be a part of.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[MatchMakingTemplateId_Optional](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a539211b581dd829c7da8cdf8d1ce3b74)|ID for this unique MatchMakingTemplate.|
|bool|[MatchMakingTemplateId_IsSet](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1ac60686c72b7f4dc54dd12eb32f136fa6)|true if MatchMakingTemplateId_Optional has been set to a value|
|ERHAPI_MMRGroupingMethod|[MmrGroupingMethod](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a37fff33e677e4189d392d126acd9061c)|What method should be used to calculate a group's MMR based on the individual player's ranks.|
|[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset)|[Ruleset_Optional](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a0b293cb53335e80111e6df54a1ff4736)||
|bool|[Ruleset_IsSet](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a24039c6b4464bf378c9f33b925e153e6)|true if Ruleset_Optional has been set to a value|
|TArray< [FRHAPI_MatchMakingProfile](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile) >|[Profiles](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a6a4d26ec5cd90fc3171de3feefcab0b9)|A list of which match making profiles are going to be created on the ticket.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1ab94633abc15dee303084618701d41edf)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a9436dbe2260f0473d685c56fce6c9bdd)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a78f50b9ef1dd8183cf5d69a8330b3a13)()|Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.|
|const FGuid &|[GetMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1ac8abf666e0b753c82e25db62ceccaef4)()|Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.|
|const FGuid &|[GetMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a64469716151df452e49e2da4d60ca981)(const FGuid & DefaultValue)|Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a90ce064e5d98f19c0fa39cba9ac0d142)(FGuid & OutValue)|Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetMatchMakingTemplateIdOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1ad01d5418d126d1585b3dcad867f3f0b9)()|Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetMatchMakingTemplateIdOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1ad5cd37f04db42e29c91c09a04e87969f)()|Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1add24dd13400dfdfaede58416ae09daec)(FGuid NewValue)|Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.|
|void|[ClearMatchMakingTemplateId](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1aba6ed3458027f078405c957e54196f4f)()|Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.|
|ERHAPI_MMRGroupingMethod &|[GetMmrGroupingMethod](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1abf647090fae345e43e6269adf096a3f1)()|Gets the value of MmrGroupingMethod.|
|const ERHAPI_MMRGroupingMethod &|[GetMmrGroupingMethod](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a778c3a09e3f33d2f57ece24d086593df)()|Gets the value of MmrGroupingMethod.|
|void|[SetMmrGroupingMethod](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a92b303d5d1ac668de44e8e6aa9d48e8d)(ERHAPI_MMRGroupingMethod NewValue)|Sets the value of MmrGroupingMethod.|
|[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) &|[GetRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1acd6e5b0ca5fb8cbb167e1b642cfe0bfb)()|Gets the value of Ruleset_Optional, regardless of it having been set.|
|const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) &|[GetRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a92dac10805e63875314b07de4b896ab1)()|Gets the value of Ruleset_Optional, regardless of it having been set.|
|const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) &|[GetRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1ad0b90512eaae2e1c44541b1e467c59ff)(const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & DefaultValue)|Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1aeab00f0f29a0f1dd77f920302e0e16c5)([FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & OutValue)|Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) *|[GetRulesetOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1aa70205bfa6aee6aaed52112956169237)()|Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) *|[GetRulesetOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a098b5c4b0a448051f969029db4f1b846)()|Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a448ec940989b4195fee980b8a91a5553)([FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) NewValue)|Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.|
|void|[ClearRuleset](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1add4f8053263cd740171a409700081376)()|Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.|
|TArray< [FRHAPI_MatchMakingProfile](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile) > &|[GetProfiles](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1afb18252df2f9f997555a3a9888fa7731)()|Gets the value of Profiles.|
|const TArray< [FRHAPI_MatchMakingProfile](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile) > &|[GetProfiles](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a20bb59793bbd9666efdd2574d62dfa3f)()|Gets the value of Profiles.|
|void|[SetProfiles](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate_1a6c2430e5b2ab7e5bb9e514a540cf599c)(TArray< [FRHAPI_MatchMakingProfile](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile) > NewValue)|Sets the value of Profiles.|
## Public Attributes



### `MatchMakingTemplateId_Optional` <a id="structFRHAPI__MatchMakingTemplate_1a539211b581dd829c7da8cdf8d1ce3b74"></a>

`FGuid FRHAPI_MatchMakingTemplate::MatchMakingTemplateId_Optional`

ID for this unique MatchMakingTemplate.




### `MatchMakingTemplateId_IsSet` <a id="structFRHAPI__MatchMakingTemplate_1ac60686c72b7f4dc54dd12eb32f136fa6"></a>

`bool FRHAPI_MatchMakingTemplate::MatchMakingTemplateId_IsSet`

true if MatchMakingTemplateId_Optional has been set to a value




### `MmrGroupingMethod` <a id="structFRHAPI__MatchMakingTemplate_1a37fff33e677e4189d392d126acd9061c"></a>

`ERHAPI_MMRGroupingMethod FRHAPI_MatchMakingTemplate::MmrGroupingMethod`

What method should be used to calculate a group's MMR based on the individual player's ranks.




### `Ruleset_Optional` <a id="structFRHAPI__MatchMakingTemplate_1a0b293cb53335e80111e6df54a1ff4736"></a>

`FRHAPI_MatchMakingRuleset FRHAPI_MatchMakingTemplate::Ruleset_Optional`






### `Ruleset_IsSet` <a id="structFRHAPI__MatchMakingTemplate_1a24039c6b4464bf378c9f33b925e153e6"></a>

`bool FRHAPI_MatchMakingTemplate::Ruleset_IsSet`

true if Ruleset_Optional has been set to a value




### `Profiles` <a id="structFRHAPI__MatchMakingTemplate_1a6a4d26ec5cd90fc3171de3feefcab0b9"></a>

`TArray<FRHAPI_MatchMakingProfile> FRHAPI_MatchMakingTemplate::Profiles`

A list of which match making profiles are going to be created on the ticket.





## Public Functions



### `FromJson` <a id="structFRHAPI__MatchMakingTemplate_1ab94633abc15dee303084618701d41edf"></a>

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



### `WriteJson` <a id="structFRHAPI__MatchMakingTemplate_1a9436dbe2260f0473d685c56fce6c9bdd"></a>

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



### `GetMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplate_1a78f50b9ef1dd8183cf5d69a8330b3a13"></a>

FGuid & GetMatchMakingTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.




### `GetMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplate_1ac8abf666e0b753c82e25db62ceccaef4"></a>

const FGuid & GetMatchMakingTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.




### `GetMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplate_1a64469716151df452e49e2da4d60ca981"></a>

const FGuid & GetMatchMakingTemplateId(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplate_1a90ce064e5d98f19c0fa39cba9ac0d142"></a>

bool GetMatchMakingTemplateId(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.




### `GetMatchMakingTemplateIdOrNull` <a id="structFRHAPI__MatchMakingTemplate_1ad01d5418d126d1585b3dcad867f3f0b9"></a>

FGuid * GetMatchMakingTemplateIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.




### `GetMatchMakingTemplateIdOrNull` <a id="structFRHAPI__MatchMakingTemplate_1ad5cd37f04db42e29c91c09a04e87969f"></a>

const FGuid * GetMatchMakingTemplateIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.




### `SetMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplate_1add24dd13400dfdfaede58416ae09daec"></a>

void SetMatchMakingTemplateId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.




### `ClearMatchMakingTemplateId` <a id="structFRHAPI__MatchMakingTemplate_1aba6ed3458027f078405c957e54196f4f"></a>

void ClearMatchMakingTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.




### `GetMmrGroupingMethod` <a id="structFRHAPI__MatchMakingTemplate_1abf647090fae345e43e6269adf096a3f1"></a>

ERHAPI_MMRGroupingMethod & GetMmrGroupingMethod()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MmrGroupingMethod.




### `GetMmrGroupingMethod` <a id="structFRHAPI__MatchMakingTemplate_1a778c3a09e3f33d2f57ece24d086593df"></a>

const ERHAPI_MMRGroupingMethod & GetMmrGroupingMethod()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MmrGroupingMethod.




### `SetMmrGroupingMethod` <a id="structFRHAPI__MatchMakingTemplate_1a92b303d5d1ac668de44e8e6aa9d48e8d"></a>

void SetMmrGroupingMethod(ERHAPI_MMRGroupingMethod NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_MMRGroupingMethod|NewValue|

#### Description

Sets the value of MmrGroupingMethod.




### `GetRuleset` <a id="structFRHAPI__MatchMakingTemplate_1acd6e5b0ca5fb8cbb167e1b642cfe0bfb"></a>

[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & GetRuleset()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Ruleset_Optional, regardless of it having been set.




### `GetRuleset` <a id="structFRHAPI__MatchMakingTemplate_1a92dac10805e63875314b07de4b896ab1"></a>

const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & GetRuleset()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Ruleset_Optional, regardless of it having been set.




### `GetRuleset` <a id="structFRHAPI__MatchMakingTemplate_1ad0b90512eaae2e1c44541b1e467c59ff"></a>

const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & GetRuleset(const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) &|DefaultValue|

#### Description

Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRuleset` <a id="structFRHAPI__MatchMakingTemplate_1aeab00f0f29a0f1dd77f920302e0e16c5"></a>

bool GetRuleset([FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) &|OutValue|

#### Description

Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.




### `GetRulesetOrNull` <a id="structFRHAPI__MatchMakingTemplate_1aa70205bfa6aee6aaed52112956169237"></a>

[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) * GetRulesetOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.




### `GetRulesetOrNull` <a id="structFRHAPI__MatchMakingTemplate_1a098b5c4b0a448051f969029db4f1b846"></a>

const [FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) * GetRulesetOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.




### `SetRuleset` <a id="structFRHAPI__MatchMakingTemplate_1a448ec940989b4195fee980b8a91a5553"></a>

void SetRuleset([FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_MatchMakingRuleset](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset)|NewValue|

#### Description

Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.




### `ClearRuleset` <a id="structFRHAPI__MatchMakingTemplate_1add4f8053263cd740171a409700081376"></a>

void ClearRuleset()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.




### `GetProfiles` <a id="structFRHAPI__MatchMakingTemplate_1afb18252df2f9f997555a3a9888fa7731"></a>

TArray< [FRHAPI_MatchMakingProfile](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile) > & GetProfiles()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Profiles.




### `GetProfiles` <a id="structFRHAPI__MatchMakingTemplate_1a20bb59793bbd9666efdd2574d62dfa3f"></a>

const TArray< [FRHAPI_MatchMakingProfile](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile) > & GetProfiles()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Profiles.




### `SetProfiles` <a id="structFRHAPI__MatchMakingTemplate_1a6c2430e5b2ab7e5bb9e514a540cf599c"></a>

void SetProfiles(TArray< [FRHAPI_MatchMakingProfile](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_MatchMakingProfile](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile) >|NewValue|

#### Description

Sets the value of Profiles.





