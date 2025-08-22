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
`public inline FORCEINLINE TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a64800a80ba33d08ab2f735508c41311c)`()` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a5a58ae8dcf3f78d65db3f71b6b7ef576)`() const` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a6f56189da83a9c99298c5198ab3c784f)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & DefaultValue) const` | Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1ab25f9b33bace1931d06bf0c1764414f8)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & OutValue) const` | Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1a5138c0afab43306cab112f28d327136c)`()` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1ac23610059b785f18a66012db70f8e348)`() const` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1ab923ef5661002cd8c06b4707a7b39188)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true.
`public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a191ff21e4265811f61fd9229f2fc8253)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > && NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.
`public inline void `[`ClearRules`](#structFRHAPI__MatchMakingRuleset_1ac5e27b95f504890017e37f935c478838)`()` | Clears the value of Rules_Optional and sets Rules_IsSet to false.
`public inline FORCEINLINE ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1aa7dde6874d582f36e3b7709470770fce)`()` | Gets the value of Determiner_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a7959b7c3f9aad2e4185532b2d3beb150)`() const` | Gets the value of Determiner_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a1699643b424675aa9724cdd4e86730b7)`(const ERHAPI_Determiner & DefaultValue) const` | Gets the value of Determiner_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a8abfbeca4ad935be843d8a9d221bcb87)`(ERHAPI_Determiner & OutValue) const` | Fills OutValue with the value of Determiner_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1ab5c8a3464afc8643dfbc63d4d2a32048)`()` | Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1aa6b3b1461b00438ed5a8628db03cce7d)`() const` | Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a14ae6b058f667152454987fe42d0631d)`(const ERHAPI_Determiner & NewValue)` | Sets the value of Determiner_Optional and also sets Determiner_IsSet to true.
`public inline FORCEINLINE void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a910d17de6f5537d1d8d19a9b0940d4d6)`(ERHAPI_Determiner && NewValue)` | Sets the value of Determiner_Optional and also sets Determiner_IsSet to true using move semantics.
`public inline void `[`ClearDeterminer`](#structFRHAPI__MatchMakingRuleset_1a48e9ee08c491fb294cc3167b406e7e41)`()` | Clears the value of Determiner_Optional and sets Determiner_IsSet to false.
`public inline FORCEINLINE ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a495c40a730e20a7d96b3fc1d52750c3e)`()` | Gets the value of PlayersToValidate_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a4198a919e845a492433e96bbf06b83a1)`() const` | Gets the value of PlayersToValidate_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a1ba55481463e7b4a35a6d74a29e550c6)`(const ERHAPI_PlayersToValidate & DefaultValue) const` | Gets the value of PlayersToValidate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1af511e8df833f5fd1e893c005e0eb91e0)`(ERHAPI_PlayersToValidate & OutValue) const` | Fills OutValue with the value of PlayersToValidate_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_PlayersToValidate * `[`GetPlayersToValidateOrNull`](#structFRHAPI__MatchMakingRuleset_1a4bd6c3d3fa9e3768048a2a63b1de5b3b)`()` | Returns a pointer to PlayersToValidate_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_PlayersToValidate * `[`GetPlayersToValidateOrNull`](#structFRHAPI__MatchMakingRuleset_1afbb86f0160f69b87bd5b67b92951b4dc)`() const` | Returns a pointer to PlayersToValidate_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a357d0e2bcfc5e5cc5963b5e05499f9eb)`(const ERHAPI_PlayersToValidate & NewValue)` | Sets the value of PlayersToValidate_Optional and also sets PlayersToValidate_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a0548db521c67206612b9ae4e0d68d925)`(ERHAPI_PlayersToValidate && NewValue)` | Sets the value of PlayersToValidate_Optional and also sets PlayersToValidate_IsSet to true using move semantics.
`public inline void `[`ClearPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1ad5cffee37be4af621d5ed9ad4a9dea43)`()` | Clears the value of PlayersToValidate_Optional and sets PlayersToValidate_IsSet to false.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a64800a80ba33d08ab2f735508c41311c)`()` <a id="structFRHAPI__MatchMakingRuleset_1a64800a80ba33d08ab2f735508c41311c"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a5a58ae8dcf3f78d65db3f71b6b7ef576)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a5a58ae8dcf3f78d65db3f71b6b7ef576"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1a6f56189da83a9c99298c5198ab3c784f)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & DefaultValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a6f56189da83a9c99298c5198ab3c784f"></a>

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRules`](#structFRHAPI__MatchMakingRuleset_1ab25f9b33bace1931d06bf0c1764414f8)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & OutValue) const` <a id="structFRHAPI__MatchMakingRuleset_1ab25f9b33bace1931d06bf0c1764414f8"></a>

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1a5138c0afab43306cab112f28d327136c)`()` <a id="structFRHAPI__MatchMakingRuleset_1a5138c0afab43306cab112f28d327136c"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > * `[`GetRulesOrNull`](#structFRHAPI__MatchMakingRuleset_1ac23610059b785f18a66012db70f8e348)`() const` <a id="structFRHAPI__MatchMakingRuleset_1ac23610059b785f18a66012db70f8e348"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1ab923ef5661002cd8c06b4707a7b39188)`(const TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > & NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1ab923ef5661002cd8c06b4707a7b39188"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__MatchMakingRuleset_1a191ff21e4265811f61fd9229f2fc8253)`(TArray< `[`FRHAPI_Rule`](RHAPI_Rule.md#structFRHAPI__Rule)` > && NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a191ff21e4265811f61fd9229f2fc8253"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.

#### `public inline void `[`ClearRules`](#structFRHAPI__MatchMakingRuleset_1ac5e27b95f504890017e37f935c478838)`()` <a id="structFRHAPI__MatchMakingRuleset_1ac5e27b95f504890017e37f935c478838"></a>

Clears the value of Rules_Optional and sets Rules_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1aa7dde6874d582f36e3b7709470770fce)`()` <a id="structFRHAPI__MatchMakingRuleset_1aa7dde6874d582f36e3b7709470770fce"></a>

Gets the value of Determiner_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a7959b7c3f9aad2e4185532b2d3beb150)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a7959b7c3f9aad2e4185532b2d3beb150"></a>

Gets the value of Determiner_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Determiner & `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a1699643b424675aa9724cdd4e86730b7)`(const ERHAPI_Determiner & DefaultValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a1699643b424675aa9724cdd4e86730b7"></a>

Gets the value of Determiner_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a8abfbeca4ad935be843d8a9d221bcb87)`(ERHAPI_Determiner & OutValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a8abfbeca4ad935be843d8a9d221bcb87"></a>

Fills OutValue with the value of Determiner_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1ab5c8a3464afc8643dfbc63d4d2a32048)`()` <a id="structFRHAPI__MatchMakingRuleset_1ab5c8a3464afc8643dfbc63d4d2a32048"></a>

Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Determiner * `[`GetDeterminerOrNull`](#structFRHAPI__MatchMakingRuleset_1aa6b3b1461b00438ed5a8628db03cce7d)`() const` <a id="structFRHAPI__MatchMakingRuleset_1aa6b3b1461b00438ed5a8628db03cce7d"></a>

Returns a pointer to Determiner_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a14ae6b058f667152454987fe42d0631d)`(const ERHAPI_Determiner & NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a14ae6b058f667152454987fe42d0631d"></a>

Sets the value of Determiner_Optional and also sets Determiner_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDeterminer`](#structFRHAPI__MatchMakingRuleset_1a910d17de6f5537d1d8d19a9b0940d4d6)`(ERHAPI_Determiner && NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a910d17de6f5537d1d8d19a9b0940d4d6"></a>

Sets the value of Determiner_Optional and also sets Determiner_IsSet to true using move semantics.

#### `public inline void `[`ClearDeterminer`](#structFRHAPI__MatchMakingRuleset_1a48e9ee08c491fb294cc3167b406e7e41)`()` <a id="structFRHAPI__MatchMakingRuleset_1a48e9ee08c491fb294cc3167b406e7e41"></a>

Clears the value of Determiner_Optional and sets Determiner_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a495c40a730e20a7d96b3fc1d52750c3e)`()` <a id="structFRHAPI__MatchMakingRuleset_1a495c40a730e20a7d96b3fc1d52750c3e"></a>

Gets the value of PlayersToValidate_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a4198a919e845a492433e96bbf06b83a1)`() const` <a id="structFRHAPI__MatchMakingRuleset_1a4198a919e845a492433e96bbf06b83a1"></a>

Gets the value of PlayersToValidate_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayersToValidate & `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a1ba55481463e7b4a35a6d74a29e550c6)`(const ERHAPI_PlayersToValidate & DefaultValue) const` <a id="structFRHAPI__MatchMakingRuleset_1a1ba55481463e7b4a35a6d74a29e550c6"></a>

Gets the value of PlayersToValidate_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1af511e8df833f5fd1e893c005e0eb91e0)`(ERHAPI_PlayersToValidate & OutValue) const` <a id="structFRHAPI__MatchMakingRuleset_1af511e8df833f5fd1e893c005e0eb91e0"></a>

Fills OutValue with the value of PlayersToValidate_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_PlayersToValidate * `[`GetPlayersToValidateOrNull`](#structFRHAPI__MatchMakingRuleset_1a4bd6c3d3fa9e3768048a2a63b1de5b3b)`()` <a id="structFRHAPI__MatchMakingRuleset_1a4bd6c3d3fa9e3768048a2a63b1de5b3b"></a>

Returns a pointer to PlayersToValidate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_PlayersToValidate * `[`GetPlayersToValidateOrNull`](#structFRHAPI__MatchMakingRuleset_1afbb86f0160f69b87bd5b67b92951b4dc)`() const` <a id="structFRHAPI__MatchMakingRuleset_1afbb86f0160f69b87bd5b67b92951b4dc"></a>

Returns a pointer to PlayersToValidate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a357d0e2bcfc5e5cc5963b5e05499f9eb)`(const ERHAPI_PlayersToValidate & NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a357d0e2bcfc5e5cc5963b5e05499f9eb"></a>

Sets the value of PlayersToValidate_Optional and also sets PlayersToValidate_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1a0548db521c67206612b9ae4e0d68d925)`(ERHAPI_PlayersToValidate && NewValue)` <a id="structFRHAPI__MatchMakingRuleset_1a0548db521c67206612b9ae4e0d68d925"></a>

Sets the value of PlayersToValidate_Optional and also sets PlayersToValidate_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayersToValidate`](#structFRHAPI__MatchMakingRuleset_1ad5cffee37be4af621d5ed9ad4a9dea43)`()` <a id="structFRHAPI__MatchMakingRuleset_1ad5cffee37be4af621d5ed9ad4a9dea43"></a>

Clears the value of PlayersToValidate_Optional and sets PlayersToValidate_IsSet to false.

