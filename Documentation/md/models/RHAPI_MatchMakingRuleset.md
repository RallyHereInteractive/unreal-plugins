# group `RHAPI_MatchMakingRuleset` <a id="group__RHAPI__MatchMakingRuleset"></a>

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > `[`Rules_Optional`](#structFRHAPI__MatchMakingRuleset_1ae35cc55358ffea98b34afba1fcd07488) | A list of the rules to be checked for this ruleset.
`public bool `[`Rules_IsSet`](#structFRHAPI__MatchMakingRuleset_1af746f0c4dc26fa6709b576c533f88641) | true if Rules_Optional has been set to a value
`public ERHAPI_Determiner `[`Determiner_Optional`](#structFRHAPI__MatchMakingRuleset_1a74ca9855c1709e5bdd47954fe18db642) | Determiner of how many rules must be satisfied in this rulest (all, any, one, none)
`public bool `[`Determiner_IsSet`](#structFRHAPI__MatchMakingRuleset_1ab27952b6758121d98c6c193f996fae6e) | true if Determiner_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingRuleset_1a0f28034647f6b5adafd82a3549489c70)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingRuleset_1acb32bcfdfac306d329be3cdd71e40e4e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a02f9dfc75b2ceedb77dc171f93f29683)`()` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a30d5a11c789d4ca8a141fad42a84bcce)`() const` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a1c10b0c80b86e97a991c13c41ac74963)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & DefaultValue) const` | Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a45fa64772049608807364383ea381613)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & OutValue) const` | Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1a3f24556a7103da6e0d1ac3f27575f68e)`()` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1a53bcdce9aa2b2c583c0336950279a9ae)`() const` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a95dd984ce4623055d498de65234758f6)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true.
`public inline void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a6deb26d921c7b27c4f10e0934a8f4c79)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > && NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.
`public inline void `[`ClearRules`](#structFRHAPI__MatchMakingRuleset_1ac5e27b95f504890017e37f935c478838)`()` | Clears the value of Rules_Optional and sets Rules_IsSet to false.
`public inline ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a52023e14aad3971fb54eb804c09d5666)`()` | Gets the value of Determiner_Optional, regardless of it having been set.
`public inline const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1acf42a5782b5100020c053a91300768f6)`() const` | Gets the value of Determiner_Optional, regardless of it having been set.
`public inline const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a5538ca24eb8a3a5f688f737fb8abce7b)`(const ERHAPI_Determiner & DefaultValue) const` | Gets the value of Determiner_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a5ca48a4e38e8d9a4227c3dfd6d08c35f)`(ERHAPI_Determiner & OutValue) const` | Fills OutValue with the value of Determiner_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1a75e4e4b888c0118b8c724992f473c930)`()` | Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1aed30508ce30d948af980f1ed840d9f4e)`() const` | Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a8e545ca2611db722685e0b16abf014f3)`(const ERHAPI_Determiner & NewValue)` | Sets the value of Determiner_Optional and also sets Determiner_IsSet to true.
`public inline void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1acb0772787c71128b04e7e3ed9ce5000e)`(ERHAPI_Determiner && NewValue)` | Sets the value of Determiner_Optional and also sets Determiner_IsSet to true using move semantics.
`public inline void `[`ClearDeterminer`](#structFRHAPI__MatchMakingRuleset_1a48e9ee08c491fb294cc3167b406e7e41)`()` | Clears the value of Determiner_Optional and sets Determiner_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > `[`Rules_Optional`](#structFRHAPI__MatchMakingRuleset_1ae35cc55358ffea98b34afba1fcd07488) <a id="structFRHAPI__MatchMakingRuleset_1ae35cc55358ffea98b34afba1fcd07488"></a>

A list of the rules to be checked for this ruleset.

#### `public bool `[`Rules_IsSet`](#structFRHAPI__MatchMakingRuleset_1af746f0c4dc26fa6709b576c533f88641) <a id="structFRHAPI__MatchMakingRuleset_1af746f0c4dc26fa6709b576c533f88641"></a>

true if Rules_Optional has been set to a value

#### `public ERHAPI_Determiner `[`Determiner_Optional`](#structFRHAPI__MatchMakingRuleset_1a74ca9855c1709e5bdd47954fe18db642) <a id="structFRHAPI__MatchMakingRuleset_1a74ca9855c1709e5bdd47954fe18db642"></a>

Determiner of how many rules must be satisfied in this rulest (all, any, one, none)

#### `public bool `[`Determiner_IsSet`](#structFRHAPI__MatchMakingRuleset_1ab27952b6758121d98c6c193f996fae6e) <a id="structFRHAPI__MatchMakingRuleset_1ab27952b6758121d98c6c193f996fae6e"></a>

true if Determiner_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingRuleset_1a0f28034647f6b5adafd82a3549489c70)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingRuleset_1a0f28034647f6b5adafd82a3549489c70"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingRuleset_1acb32bcfdfac306d329be3cdd71e40e4e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingRuleset_1acb32bcfdfac306d329be3cdd71e40e4e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a02f9dfc75b2ceedb77dc171f93f29683)`()` <a id="structFRHAPI__MatchMakingRuleset_1a02f9dfc75b2ceedb77dc171f93f29683"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a30d5a11c789d4ca8a141fad42a84bcce)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a30d5a11c789d4ca8a141fad42a84bcce"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a1c10b0c80b86e97a991c13c41ac74963)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & DefaultValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a1c10b0c80b86e97a991c13c41ac74963"></a>

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a45fa64772049608807364383ea381613)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & OutValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a45fa64772049608807364383ea381613"></a>

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1a3f24556a7103da6e0d1ac3f27575f68e)`()` <a id="structFRHAPI__MatchMakingRuleset_1a3f24556a7103da6e0d1ac3f27575f68e"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1a53bcdce9aa2b2c583c0336950279a9ae)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a53bcdce9aa2b2c583c0336950279a9ae"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a95dd984ce4623055d498de65234758f6)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a95dd984ce4623055d498de65234758f6"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true.

#### `public inline void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a6deb26d921c7b27c4f10e0934a8f4c79)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > && NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a6deb26d921c7b27c4f10e0934a8f4c79"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.

#### `public inline void `[`ClearRules`](#structFRHAPI__MatchMakingRuleset_1ac5e27b95f504890017e37f935c478838)`()` <a id="structFRHAPI__MatchMakingRuleset_1ac5e27b95f504890017e37f935c478838"></a>

Clears the value of Rules_Optional and sets Rules_IsSet to false.

#### `public inline ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a52023e14aad3971fb54eb804c09d5666)`()` <a id="structFRHAPI__MatchMakingRuleset_1a52023e14aad3971fb54eb804c09d5666"></a>

Gets the value of Determiner_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1acf42a5782b5100020c053a91300768f6)`() const` <a id="structFRHAPI__MatchMakingRuleset_1acf42a5782b5100020c053a91300768f6"></a>

Gets the value of Determiner_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a5538ca24eb8a3a5f688f737fb8abce7b)`(const ERHAPI_Determiner & DefaultValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a5538ca24eb8a3a5f688f737fb8abce7b"></a>

Gets the value of Determiner_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a5ca48a4e38e8d9a4227c3dfd6d08c35f)`(ERHAPI_Determiner & OutValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a5ca48a4e38e8d9a4227c3dfd6d08c35f"></a>

Fills OutValue with the value of Determiner_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1a75e4e4b888c0118b8c724992f473c930)`()` <a id="structFRHAPI__MatchMakingRuleset_1a75e4e4b888c0118b8c724992f473c930"></a>

Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1aed30508ce30d948af980f1ed840d9f4e)`() const` <a id="structFRHAPI__MatchMakingRuleset_1aed30508ce30d948af980f1ed840d9f4e"></a>

Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a8e545ca2611db722685e0b16abf014f3)`(const ERHAPI_Determiner & NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a8e545ca2611db722685e0b16abf014f3"></a>

Sets the value of Determiner_Optional and also sets Determiner_IsSet to true.

#### `public inline void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1acb0772787c71128b04e7e3ed9ce5000e)`(ERHAPI_Determiner && NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1acb0772787c71128b04e7e3ed9ce5000e"></a>

Sets the value of Determiner_Optional and also sets Determiner_IsSet to true using move semantics.

#### `public inline void `[`ClearDeterminer`](#structFRHAPI__MatchMakingRuleset_1a48e9ee08c491fb294cc3167b406e7e41)`()` <a id="structFRHAPI__MatchMakingRuleset_1a48e9ee08c491fb294cc3167b406e7e41"></a>

Clears the value of Determiner_Optional and sets Determiner_IsSet to false.

