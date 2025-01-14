---
title: RHAPI_MatchMakingRuleset
---

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
`public ERHAPI_PlayersToValidate `[`PlayersToValidate_Optional`](#structFRHAPI__MatchMakingRuleset_1a9db76d41578657d24931f256156a45dd) | Which members of a session must be validated to satisfy this ruleset.
`public bool `[`PlayersToValidate_IsSet`](#structFRHAPI__MatchMakingRuleset_1a1053ee76fe29e4c034cab3cdb72fac5d) | true if PlayersToValidate_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingRuleset_1a80c858c052b7546f24642994b2faaa1e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingRuleset_1ab308ea6ef9b131c7be23d9cd575f9f00)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a8c5503c31c4a3c33cdaa19b5a319ea28)`()` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1aea32bc5d6df31869f64e95e3cfc65f62)`() const` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a9b13b6f6172f42f9a12e574799692293)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & DefaultValue) const` | Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a45fa64772049608807364383ea381613)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & OutValue) const` | Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1a0a5d3ea0898603e4abe706fea905d9b7)`()` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1a24b88ef3f2c8be5b0d370ec85e4644eb)`() const` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a95dd984ce4623055d498de65234758f6)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true.
`public inline void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a6deb26d921c7b27c4f10e0934a8f4c79)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > && NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.
`public inline void `[`ClearRules`](#structFRHAPI__MatchMakingRuleset_1ac5e27b95f504890017e37f935c478838)`()` | Clears the value of Rules_Optional and sets Rules_IsSet to false.
`public inline bool `[`IsRulesSet`](#structFRHAPI__MatchMakingRuleset_1a9d65d46ab0baaaab3135042d64b8e8f3)`() const` | Checks whether Rules_Optional has been set.
`public inline ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a8ed56b52a92cc80d0bc197d2660658c2)`()` | Gets the value of Determiner_Optional, regardless of it having been set.
`public inline const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1af037b1bba74bfe2a6a7233fd7ecf57f1)`() const` | Gets the value of Determiner_Optional, regardless of it having been set.
`public inline const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a18d3ddb88e6b3fbea1a5d570f809dab4)`(const ERHAPI_Determiner & DefaultValue) const` | Gets the value of Determiner_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a5ca48a4e38e8d9a4227c3dfd6d08c35f)`(ERHAPI_Determiner & OutValue) const` | Fills OutValue with the value of Determiner_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1a729a3f38a78cc5b309d5de5aa2f344d4)`()` | Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1a143e7446ea873242e47965c4ba5282fc)`() const` | Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a8e545ca2611db722685e0b16abf014f3)`(const ERHAPI_Determiner & NewValue)` | Sets the value of Determiner_Optional and also sets Determiner_IsSet to true.
`public inline void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1acb0772787c71128b04e7e3ed9ce5000e)`(ERHAPI_Determiner && NewValue)` | Sets the value of Determiner_Optional and also sets Determiner_IsSet to true using move semantics.
`public inline void `[`ClearDeterminer`](#structFRHAPI__MatchMakingRuleset_1a48e9ee08c491fb294cc3167b406e7e41)`()` | Clears the value of Determiner_Optional and sets Determiner_IsSet to false.
`public inline bool `[`IsDeterminerSet`](#structFRHAPI__MatchMakingRuleset_1a0b587aaf95d39915d0cc5904a363d7b1)`() const` | Checks whether Determiner_Optional has been set.
`public inline ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a73680b2f101e1a847f6084c5f2262c77)`()` | Gets the value of PlayersToValidate_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a0a86d41ed5c5e6e304a9beea3c168c43)`() const` | Gets the value of PlayersToValidate_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a73e710996abeec0a307594efb92a4e45)`(const ERHAPI_PlayersToValidate & DefaultValue) const` | Gets the value of PlayersToValidate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a79c3db09ef2374b1ee420e8fe3e9410e)`(ERHAPI_PlayersToValidate & OutValue) const` | Fills OutValue with the value of PlayersToValidate_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_PlayersToValidate * `[`GetPlayersToValidateOrNull`](#structFRHAPI__MatchMakingRuleset_1a3875832c6e871a554b01d0d8d277a4db)`()` | Returns a pointer to PlayersToValidate_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_PlayersToValidate * `[`GetPlayersToValidateOrNull`](#structFRHAPI__MatchMakingRuleset_1ad50ed507367a6894eeaf6ec6f0e3e3c7)`() const` | Returns a pointer to PlayersToValidate_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a26ba7671713585ceac3513a4d1e31a74)`(const ERHAPI_PlayersToValidate & NewValue)` | Sets the value of PlayersToValidate_Optional and also sets PlayersToValidate_IsSet to true.
`public inline void `[`SetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a434c2821b9d39572c45f0d78ee36ea20)`(ERHAPI_PlayersToValidate && NewValue)` | Sets the value of PlayersToValidate_Optional and also sets PlayersToValidate_IsSet to true using move semantics.
`public inline void `[`ClearPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1ad5cffee37be4af621d5ed9ad4a9dea43)`()` | Clears the value of PlayersToValidate_Optional and sets PlayersToValidate_IsSet to false.
`public inline bool `[`IsPlayersToValidateSet`](#structFRHAPI__MatchMakingRuleset_1a860db2163fa0feb40a636444c355558a)`() const` | Checks whether PlayersToValidate_Optional has been set.

### Members

#### `public TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > `[`Rules_Optional`](#structFRHAPI__MatchMakingRuleset_1ae35cc55358ffea98b34afba1fcd07488) <a id="structFRHAPI__MatchMakingRuleset_1ae35cc55358ffea98b34afba1fcd07488"></a>

A list of the rules to be checked for this ruleset.

#### `public bool `[`Rules_IsSet`](#structFRHAPI__MatchMakingRuleset_1af746f0c4dc26fa6709b576c533f88641) <a id="structFRHAPI__MatchMakingRuleset_1af746f0c4dc26fa6709b576c533f88641"></a>

true if Rules_Optional has been set to a value

#### `public ERHAPI_Determiner `[`Determiner_Optional`](#structFRHAPI__MatchMakingRuleset_1a74ca9855c1709e5bdd47954fe18db642) <a id="structFRHAPI__MatchMakingRuleset_1a74ca9855c1709e5bdd47954fe18db642"></a>

Determiner of how many rules must be satisfied in this rulest (all, any, one, none)

#### `public bool `[`Determiner_IsSet`](#structFRHAPI__MatchMakingRuleset_1ab27952b6758121d98c6c193f996fae6e) <a id="structFRHAPI__MatchMakingRuleset_1ab27952b6758121d98c6c193f996fae6e"></a>

true if Determiner_Optional has been set to a value

#### `public ERHAPI_PlayersToValidate `[`PlayersToValidate_Optional`](#structFRHAPI__MatchMakingRuleset_1a9db76d41578657d24931f256156a45dd) <a id="structFRHAPI__MatchMakingRuleset_1a9db76d41578657d24931f256156a45dd"></a>

Which members of a session must be validated to satisfy this ruleset.

#### `public bool `[`PlayersToValidate_IsSet`](#structFRHAPI__MatchMakingRuleset_1a1053ee76fe29e4c034cab3cdb72fac5d) <a id="structFRHAPI__MatchMakingRuleset_1a1053ee76fe29e4c034cab3cdb72fac5d"></a>

true if PlayersToValidate_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingRuleset_1a80c858c052b7546f24642994b2faaa1e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingRuleset_1a80c858c052b7546f24642994b2faaa1e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingRuleset_1ab308ea6ef9b131c7be23d9cd575f9f00)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchMakingRuleset_1ab308ea6ef9b131c7be23d9cd575f9f00"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a8c5503c31c4a3c33cdaa19b5a319ea28)`()` <a id="structFRHAPI__MatchMakingRuleset_1a8c5503c31c4a3c33cdaa19b5a319ea28"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1aea32bc5d6df31869f64e95e3cfc65f62)`() const` <a id="structFRHAPI__MatchMakingRuleset_1aea32bc5d6df31869f64e95e3cfc65f62"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a9b13b6f6172f42f9a12e574799692293)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & DefaultValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a9b13b6f6172f42f9a12e574799692293"></a>

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a45fa64772049608807364383ea381613)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & OutValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a45fa64772049608807364383ea381613"></a>

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1a0a5d3ea0898603e4abe706fea905d9b7)`()` <a id="structFRHAPI__MatchMakingRuleset_1a0a5d3ea0898603e4abe706fea905d9b7"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1a24b88ef3f2c8be5b0d370ec85e4644eb)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a24b88ef3f2c8be5b0d370ec85e4644eb"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a95dd984ce4623055d498de65234758f6)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a95dd984ce4623055d498de65234758f6"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true.

#### `public inline void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a6deb26d921c7b27c4f10e0934a8f4c79)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > && NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a6deb26d921c7b27c4f10e0934a8f4c79"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.

#### `public inline void `[`ClearRules`](#structFRHAPI__MatchMakingRuleset_1ac5e27b95f504890017e37f935c478838)`()` <a id="structFRHAPI__MatchMakingRuleset_1ac5e27b95f504890017e37f935c478838"></a>

Clears the value of Rules_Optional and sets Rules_IsSet to false.

#### `public inline bool `[`IsRulesSet`](#structFRHAPI__MatchMakingRuleset_1a9d65d46ab0baaaab3135042d64b8e8f3)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a9d65d46ab0baaaab3135042d64b8e8f3"></a>

Checks whether Rules_Optional has been set.

#### `public inline ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a8ed56b52a92cc80d0bc197d2660658c2)`()` <a id="structFRHAPI__MatchMakingRuleset_1a8ed56b52a92cc80d0bc197d2660658c2"></a>

Gets the value of Determiner_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1af037b1bba74bfe2a6a7233fd7ecf57f1)`() const` <a id="structFRHAPI__MatchMakingRuleset_1af037b1bba74bfe2a6a7233fd7ecf57f1"></a>

Gets the value of Determiner_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a18d3ddb88e6b3fbea1a5d570f809dab4)`(const ERHAPI_Determiner & DefaultValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a18d3ddb88e6b3fbea1a5d570f809dab4"></a>

Gets the value of Determiner_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a5ca48a4e38e8d9a4227c3dfd6d08c35f)`(ERHAPI_Determiner & OutValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a5ca48a4e38e8d9a4227c3dfd6d08c35f"></a>

Fills OutValue with the value of Determiner_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1a729a3f38a78cc5b309d5de5aa2f344d4)`()` <a id="structFRHAPI__MatchMakingRuleset_1a729a3f38a78cc5b309d5de5aa2f344d4"></a>

Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1a143e7446ea873242e47965c4ba5282fc)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a143e7446ea873242e47965c4ba5282fc"></a>

Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a8e545ca2611db722685e0b16abf014f3)`(const ERHAPI_Determiner & NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a8e545ca2611db722685e0b16abf014f3"></a>

Sets the value of Determiner_Optional and also sets Determiner_IsSet to true.

#### `public inline void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1acb0772787c71128b04e7e3ed9ce5000e)`(ERHAPI_Determiner && NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1acb0772787c71128b04e7e3ed9ce5000e"></a>

Sets the value of Determiner_Optional and also sets Determiner_IsSet to true using move semantics.

#### `public inline void `[`ClearDeterminer`](#structFRHAPI__MatchMakingRuleset_1a48e9ee08c491fb294cc3167b406e7e41)`()` <a id="structFRHAPI__MatchMakingRuleset_1a48e9ee08c491fb294cc3167b406e7e41"></a>

Clears the value of Determiner_Optional and sets Determiner_IsSet to false.

#### `public inline bool `[`IsDeterminerSet`](#structFRHAPI__MatchMakingRuleset_1a0b587aaf95d39915d0cc5904a363d7b1)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a0b587aaf95d39915d0cc5904a363d7b1"></a>

Checks whether Determiner_Optional has been set.

#### `public inline ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a73680b2f101e1a847f6084c5f2262c77)`()` <a id="structFRHAPI__MatchMakingRuleset_1a73680b2f101e1a847f6084c5f2262c77"></a>

Gets the value of PlayersToValidate_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a0a86d41ed5c5e6e304a9beea3c168c43)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a0a86d41ed5c5e6e304a9beea3c168c43"></a>

Gets the value of PlayersToValidate_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a73e710996abeec0a307594efb92a4e45)`(const ERHAPI_PlayersToValidate & DefaultValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a73e710996abeec0a307594efb92a4e45"></a>

Gets the value of PlayersToValidate_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a79c3db09ef2374b1ee420e8fe3e9410e)`(ERHAPI_PlayersToValidate & OutValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a79c3db09ef2374b1ee420e8fe3e9410e"></a>

Fills OutValue with the value of PlayersToValidate_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_PlayersToValidate * `[`GetPlayersToValidateOrNull`](#structFRHAPI__MatchMakingRuleset_1a3875832c6e871a554b01d0d8d277a4db)`()` <a id="structFRHAPI__MatchMakingRuleset_1a3875832c6e871a554b01d0d8d277a4db"></a>

Returns a pointer to PlayersToValidate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_PlayersToValidate * `[`GetPlayersToValidateOrNull`](#structFRHAPI__MatchMakingRuleset_1ad50ed507367a6894eeaf6ec6f0e3e3c7)`() const` <a id="structFRHAPI__MatchMakingRuleset_1ad50ed507367a6894eeaf6ec6f0e3e3c7"></a>

Returns a pointer to PlayersToValidate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a26ba7671713585ceac3513a4d1e31a74)`(const ERHAPI_PlayersToValidate & NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a26ba7671713585ceac3513a4d1e31a74"></a>

Sets the value of PlayersToValidate_Optional and also sets PlayersToValidate_IsSet to true.

#### `public inline void `[`SetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a434c2821b9d39572c45f0d78ee36ea20)`(ERHAPI_PlayersToValidate && NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a434c2821b9d39572c45f0d78ee36ea20"></a>

Sets the value of PlayersToValidate_Optional and also sets PlayersToValidate_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1ad5cffee37be4af621d5ed9ad4a9dea43)`()` <a id="structFRHAPI__MatchMakingRuleset_1ad5cffee37be4af621d5ed9ad4a9dea43"></a>

Clears the value of PlayersToValidate_Optional and sets PlayersToValidate_IsSet to false.

#### `public inline bool `[`IsPlayersToValidateSet`](#structFRHAPI__MatchMakingRuleset_1a860db2163fa0feb40a636444c355558a)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a860db2163fa0feb40a636444c355558a"></a>

Checks whether PlayersToValidate_Optional has been set.

