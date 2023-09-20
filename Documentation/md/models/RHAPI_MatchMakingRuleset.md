# RHAPI_MatchMakingRuleset <a id="group__RHAPI__MatchMakingRuleset"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingRuleset`](#structFRHAPI__MatchMakingRuleset) | A collection of rules that are used to determine whether a MatchMakingTemplate should be used.

## struct `FRHAPI_MatchMakingRuleset` <a id="structFRHAPI__MatchMakingRuleset"></a>

```
struct FRHAPI_MatchMakingRuleset
  : public FRHAPI_Model
```

A collection of rules that are used to determine whether a MatchMakingTemplate should be used.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > `[`Rules`](#structFRHAPI__MatchMakingRuleset_1a0af2817935346ffb9855da1f5618e851) | A list of the rules to be checked for this ruleset.
`public ERHAPI_Determiner `[`Determiner`](#structFRHAPI__MatchMakingRuleset_1ae21936845d6a21da46aeff8ee7c99ef0) | Determiner of how many rules must be satisfied in this rulest (all, any, one, none)
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingRuleset_1a0f28034647f6b5adafd82a3549489c70)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingRuleset_1acb32bcfdfac306d329be3cdd71e40e4e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a02f9dfc75b2ceedb77dc171f93f29683)`()` | Gets the value of Rules.
`public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a30d5a11c789d4ca8a141fad42a84bcce)`() const` | Gets the value of Rules.
`public inline void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a1ecb757823284accdc8f0277c345dc49)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > NewValue)` | Sets the value of Rules.
`public inline ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a52023e14aad3971fb54eb804c09d5666)`()` | Gets the value of Determiner.
`public inline const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1acf42a5782b5100020c053a91300768f6)`() const` | Gets the value of Determiner.
`public inline void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a30489b3b244e528dd7ec8ffefe49e1b7)`(ERHAPI_Determiner NewValue)` | Sets the value of Determiner.

#### Members

#### `public TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > `[`Rules`](#structFRHAPI__MatchMakingRuleset_1a0af2817935346ffb9855da1f5618e851) <a id="structFRHAPI__MatchMakingRuleset_1a0af2817935346ffb9855da1f5618e851"></a>

A list of the rules to be checked for this ruleset.

<br>
#### `public ERHAPI_Determiner `[`Determiner`](#structFRHAPI__MatchMakingRuleset_1ae21936845d6a21da46aeff8ee7c99ef0) <a id="structFRHAPI__MatchMakingRuleset_1ae21936845d6a21da46aeff8ee7c99ef0"></a>

Determiner of how many rules must be satisfied in this rulest (all, any, one, none)

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingRuleset_1a0f28034647f6b5adafd82a3549489c70)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingRuleset_1a0f28034647f6b5adafd82a3549489c70"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingRuleset_1acb32bcfdfac306d329be3cdd71e40e4e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingRuleset_1acb32bcfdfac306d329be3cdd71e40e4e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a02f9dfc75b2ceedb77dc171f93f29683)`()` <a id="structFRHAPI__MatchMakingRuleset_1a02f9dfc75b2ceedb77dc171f93f29683"></a>

Gets the value of Rules.

<br>
#### `public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a30d5a11c789d4ca8a141fad42a84bcce)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a30d5a11c789d4ca8a141fad42a84bcce"></a>

Gets the value of Rules.

<br>
#### `public inline void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a1ecb757823284accdc8f0277c345dc49)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a1ecb757823284accdc8f0277c345dc49"></a>

Sets the value of Rules.

<br>
#### `public inline ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a52023e14aad3971fb54eb804c09d5666)`()` <a id="structFRHAPI__MatchMakingRuleset_1a52023e14aad3971fb54eb804c09d5666"></a>

Gets the value of Determiner.

<br>
#### `public inline const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1acf42a5782b5100020c053a91300768f6)`() const` <a id="structFRHAPI__MatchMakingRuleset_1acf42a5782b5100020c053a91300768f6"></a>

Gets the value of Determiner.

<br>
#### `public inline void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a30489b3b244e528dd7ec8ffefe49e1b7)`(ERHAPI_Determiner NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a30489b3b244e528dd7ec8ffefe49e1b7"></a>

Sets the value of Determiner.

<br>
