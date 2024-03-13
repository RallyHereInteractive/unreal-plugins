---
title: FRHAPI_MatchMakingRuleset Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of rules that are used to determine whether a MatchMakingTemplate should be used.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_Rule](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule) >|[Rules](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset_1a0af2817935346ffb9855da1f5618e851)|A list of the rules to be checked for this ruleset.|
|ERHAPI_Determiner|[Determiner](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset_1ae21936845d6a21da46aeff8ee7c99ef0)|Determiner of how many rules must be satisfied in this rulest (all, any, one, none)|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset_1a0f28034647f6b5adafd82a3549489c70)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset_1acb32bcfdfac306d329be3cdd71e40e4e)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_Rule](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule) > &|[GetRules](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset_1a02f9dfc75b2ceedb77dc171f93f29683)()|Gets the value of Rules.|
|const TArray< [FRHAPI_Rule](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule) > &|[GetRules](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset_1a30d5a11c789d4ca8a141fad42a84bcce)()|Gets the value of Rules.|
|void|[SetRules](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset_1a1ecb757823284accdc8f0277c345dc49)(TArray< [FRHAPI_Rule](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule) > NewValue)|Sets the value of Rules.|
|ERHAPI_Determiner &|[GetDeterminer](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset_1a52023e14aad3971fb54eb804c09d5666)()|Gets the value of Determiner.|
|const ERHAPI_Determiner &|[GetDeterminer](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset_1acf42a5782b5100020c053a91300768f6)()|Gets the value of Determiner.|
|void|[SetDeterminer](/unreal-plugins/all/structfrhapi__matchmakingruleset/#structFRHAPI__MatchMakingRuleset_1a30489b3b244e528dd7ec8ffefe49e1b7)(ERHAPI_Determiner NewValue)|Sets the value of Determiner.|
## Public Attributes



### `Rules` <a id="structFRHAPI__MatchMakingRuleset_1a0af2817935346ffb9855da1f5618e851"></a>

`TArray<FRHAPI_Rule> FRHAPI_MatchMakingRuleset::Rules`

A list of the rules to be checked for this ruleset.




### `Determiner` <a id="structFRHAPI__MatchMakingRuleset_1ae21936845d6a21da46aeff8ee7c99ef0"></a>

`ERHAPI_Determiner FRHAPI_MatchMakingRuleset::Determiner`

Determiner of how many rules must be satisfied in this rulest (all, any, one, none)





## Public Functions



### `FromJson` <a id="structFRHAPI__MatchMakingRuleset_1a0f28034647f6b5adafd82a3549489c70"></a>

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



### `WriteJson` <a id="structFRHAPI__MatchMakingRuleset_1acb32bcfdfac306d329be3cdd71e40e4e"></a>

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



### `GetRules` <a id="structFRHAPI__MatchMakingRuleset_1a02f9dfc75b2ceedb77dc171f93f29683"></a>

TArray< [FRHAPI_Rule](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule) > & GetRules()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rules.




### `GetRules` <a id="structFRHAPI__MatchMakingRuleset_1a30d5a11c789d4ca8a141fad42a84bcce"></a>

const TArray< [FRHAPI_Rule](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule) > & GetRules()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rules.




### `SetRules` <a id="structFRHAPI__MatchMakingRuleset_1a1ecb757823284accdc8f0277c345dc49"></a>

void SetRules(TArray< [FRHAPI_Rule](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_Rule](/unreal-plugins/all/structfrhapi__rule/#structFRHAPI__Rule) >|NewValue|

#### Description

Sets the value of Rules.




### `GetDeterminer` <a id="structFRHAPI__MatchMakingRuleset_1a52023e14aad3971fb54eb804c09d5666"></a>

ERHAPI_Determiner & GetDeterminer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Determiner.




### `GetDeterminer` <a id="structFRHAPI__MatchMakingRuleset_1acf42a5782b5100020c053a91300768f6"></a>

const ERHAPI_Determiner & GetDeterminer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Determiner.




### `SetDeterminer` <a id="structFRHAPI__MatchMakingRuleset_1a30489b3b244e528dd7ec8ffefe49e1b7"></a>

void SetDeterminer(ERHAPI_Determiner NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Determiner|NewValue|

#### Description

Sets the value of Determiner.





