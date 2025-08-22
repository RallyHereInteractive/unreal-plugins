---
title: RHAPI_MatchMakingTemplate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingTemplate`](#structFRHAPI__MatchMakingTemplate) | DEPRECATED Configuration about what rules must be satisfied to use this template, and what matchmaking profiles the ticket will be a part of.

## struct `FRHAPI_MatchMakingTemplate` <a id="structFRHAPI__MatchMakingTemplate"></a>

```
struct FRHAPI_MatchMakingTemplate
  : public FRHAPI_Model
```

DEPRECATED Configuration about what rules must be satisfied to use this template, and what matchmaking profiles the ticket will be a part of.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`MatchMakingTemplateId_Optional`](#structFRHAPI__MatchMakingTemplate_1a539211b581dd829c7da8cdf8d1ce3b74) | ID for this unique MatchMakingTemplate.
`public bool `[`MatchMakingTemplateId_IsSet`](#structFRHAPI__MatchMakingTemplate_1ac60686c72b7f4dc54dd12eb32f136fa6) | true if MatchMakingTemplateId_Optional has been set to a value
`public ERHAPI_MMRGroupingMethod `[`MmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a37fff33e677e4189d392d126acd9061c) | What method should be used to calculate a group's MMR based on the individual player's ranks.
`public `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` `[`Ruleset_Optional`](#structFRHAPI__MatchMakingTemplate_1a0b293cb53335e80111e6df54a1ff4736) | A set of rules that determine whether or not this matchmaking config should be used.
`public bool `[`Ruleset_IsSet`](#structFRHAPI__MatchMakingTemplate_1a24039c6b4464bf378c9f33b925e153e6) | true if Ruleset_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > `[`Profiles`](#structFRHAPI__MatchMakingTemplate_1a6a4d26ec5cd90fc3171de3feefcab0b9) | A list of which match making profiles are going to be created on the ticket.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplate_1a175d9b3636a34d419565ed2ee5161e5a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplate_1aa76da1fbf7f6b289f156dc6091793aed)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1ac2e0aff74761e32bd2de56915f0f2aba)`()` | Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a3842ee25ac1c0eb5f5214b04e59e8f42)`() const` | Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a3853bc67ccd62a964b1b6b8902ef3b63)`(const FGuid & DefaultValue) const` | Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a56f725cb2b9059fe0d916095a93fca8d)`(FGuid & OutValue) const` | Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplate_1a12919ce2080e84d0387c24afc6fb3c38)`()` | Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplate_1ad6c9ba43adae9ae064b32c5435b4cab4)`() const` | Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a487a9b90a53666ec7acd5ccfa39230a9)`(const FGuid & NewValue)` | Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a391409a613360f1283397e43ffefd3d1)`(FGuid && NewValue)` | Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1aba6ed3458027f078405c957e54196f4f)`()` | Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.
`public inline FORCEINLINE ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a455bd3217d0940ecf23d1139fda216b2)`()` | Gets the value of MmrGroupingMethod.
`public inline FORCEINLINE const ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a76c5eff6b41697290ff1bdd41554f799)`() const` | Gets the value of MmrGroupingMethod.
`public inline FORCEINLINE void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1ac73c0bdaaff5f9890f4c04c561db81f7)`(const ERHAPI_MMRGroupingMethod & NewValue)` | Sets the value of MmrGroupingMethod.
`public inline FORCEINLINE void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a82bf3e15f4b8a4fdf9da4654c88eed0d)`(ERHAPI_MMRGroupingMethod && NewValue)` | Sets the value of MmrGroupingMethod using move semantics.
`public inline FORCEINLINE `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1aafe4543cb46f16938ab6cf62412d8ad5)`()` | Gets the value of Ruleset_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1a55fc32c7d569464c961c9456e6090a20)`() const` | Gets the value of Ruleset_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1a801c27a672ec3ea7b6f5d583c8e32563)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & DefaultValue) const` | Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1af494a8e47d30f9782e39761ff8be48ee)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & OutValue) const` | Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplate_1aab7623bd10d82ee3fec6c2394ee78f44)`()` | Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplate_1a62220854862e6aa308a83cfd9ddced6e)`() const` | Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplate_1aa8f99fcf6c5f1303a6027f94d320a573)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & NewValue)` | Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.
`public inline FORCEINLINE void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplate_1a9fa12b5d998e92753292d5900f7b2514)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` && NewValue)` | Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true using move semantics.
`public inline void `[`ClearRuleset`](#structFRHAPI__MatchMakingTemplate_1add4f8053263cd740171a409700081376)`()` | Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplate_1ae0c39499d1c81a39a6ab56246fbd2e68)`()` | Gets the value of Profiles.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplate_1a171ab32d76bbdc837e2c49f0bcaa1e42)`() const` | Gets the value of Profiles.
`public inline FORCEINLINE void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplate_1a8e57373e8518807739878b8ccfbde070)`(const TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & NewValue)` | Sets the value of Profiles.
`public inline FORCEINLINE void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplate_1ad6d74bdd461e50cbdf2df17cae38da17)`(TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > && NewValue)` | Sets the value of Profiles using move semantics.

### Members

#### `public FGuid `[`MatchMakingTemplateId_Optional`](#structFRHAPI__MatchMakingTemplate_1a539211b581dd829c7da8cdf8d1ce3b74) <a id="structFRHAPI__MatchMakingTemplate_1a539211b581dd829c7da8cdf8d1ce3b74"></a>

ID for this unique MatchMakingTemplate.

#### `public bool `[`MatchMakingTemplateId_IsSet`](#structFRHAPI__MatchMakingTemplate_1ac60686c72b7f4dc54dd12eb32f136fa6) <a id="structFRHAPI__MatchMakingTemplate_1ac60686c72b7f4dc54dd12eb32f136fa6"></a>

true if MatchMakingTemplateId_Optional has been set to a value

#### `public ERHAPI_MMRGroupingMethod `[`MmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a37fff33e677e4189d392d126acd9061c) <a id="structFRHAPI__MatchMakingTemplate_1a37fff33e677e4189d392d126acd9061c"></a>

What method should be used to calculate a group's MMR based on the individual player's ranks.

#### `public `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` `[`Ruleset_Optional`](#structFRHAPI__MatchMakingTemplate_1a0b293cb53335e80111e6df54a1ff4736) <a id="structFRHAPI__MatchMakingTemplate_1a0b293cb53335e80111e6df54a1ff4736"></a>

A set of rules that determine whether or not this matchmaking config should be used.

#### `public bool `[`Ruleset_IsSet`](#structFRHAPI__MatchMakingTemplate_1a24039c6b4464bf378c9f33b925e153e6) <a id="structFRHAPI__MatchMakingTemplate_1a24039c6b4464bf378c9f33b925e153e6"></a>

true if Ruleset_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > `[`Profiles`](#structFRHAPI__MatchMakingTemplate_1a6a4d26ec5cd90fc3171de3feefcab0b9) <a id="structFRHAPI__MatchMakingTemplate_1a6a4d26ec5cd90fc3171de3feefcab0b9"></a>

A list of which match making profiles are going to be created on the ticket.

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplate_1a175d9b3636a34d419565ed2ee5161e5a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingTemplate_1a175d9b3636a34d419565ed2ee5161e5a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplate_1aa76da1fbf7f6b289f156dc6091793aed)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchMakingTemplate_1aa76da1fbf7f6b289f156dc6091793aed"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1ac2e0aff74761e32bd2de56915f0f2aba)`()` <a id="structFRHAPI__MatchMakingTemplate_1ac2e0aff74761e32bd2de56915f0f2aba"></a>

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a3842ee25ac1c0eb5f5214b04e59e8f42)`() const` <a id="structFRHAPI__MatchMakingTemplate_1a3842ee25ac1c0eb5f5214b04e59e8f42"></a>

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a3853bc67ccd62a964b1b6b8902ef3b63)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplate_1a3853bc67ccd62a964b1b6b8902ef3b63"></a>

Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a56f725cb2b9059fe0d916095a93fca8d)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingTemplate_1a56f725cb2b9059fe0d916095a93fca8d"></a>

Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplate_1a12919ce2080e84d0387c24afc6fb3c38)`()` <a id="structFRHAPI__MatchMakingTemplate_1a12919ce2080e84d0387c24afc6fb3c38"></a>

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplate_1ad6c9ba43adae9ae064b32c5435b4cab4)`() const` <a id="structFRHAPI__MatchMakingTemplate_1ad6c9ba43adae9ae064b32c5435b4cab4"></a>

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a487a9b90a53666ec7acd5ccfa39230a9)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1a487a9b90a53666ec7acd5ccfa39230a9"></a>

Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a391409a613360f1283397e43ffefd3d1)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1a391409a613360f1283397e43ffefd3d1"></a>

Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1aba6ed3458027f078405c957e54196f4f)`()` <a id="structFRHAPI__MatchMakingTemplate_1aba6ed3458027f078405c957e54196f4f"></a>

Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a455bd3217d0940ecf23d1139fda216b2)`()` <a id="structFRHAPI__MatchMakingTemplate_1a455bd3217d0940ecf23d1139fda216b2"></a>

Gets the value of MmrGroupingMethod.

#### `public inline FORCEINLINE const ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a76c5eff6b41697290ff1bdd41554f799)`() const` <a id="structFRHAPI__MatchMakingTemplate_1a76c5eff6b41697290ff1bdd41554f799"></a>

Gets the value of MmrGroupingMethod.

#### `public inline FORCEINLINE void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1ac73c0bdaaff5f9890f4c04c561db81f7)`(const ERHAPI_MMRGroupingMethod & NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1ac73c0bdaaff5f9890f4c04c561db81f7"></a>

Sets the value of MmrGroupingMethod.

#### `public inline FORCEINLINE void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a82bf3e15f4b8a4fdf9da4654c88eed0d)`(ERHAPI_MMRGroupingMethod && NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1a82bf3e15f4b8a4fdf9da4654c88eed0d"></a>

Sets the value of MmrGroupingMethod using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1aafe4543cb46f16938ab6cf62412d8ad5)`()` <a id="structFRHAPI__MatchMakingTemplate_1aafe4543cb46f16938ab6cf62412d8ad5"></a>

Gets the value of Ruleset_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1a55fc32c7d569464c961c9456e6090a20)`() const` <a id="structFRHAPI__MatchMakingTemplate_1a55fc32c7d569464c961c9456e6090a20"></a>

Gets the value of Ruleset_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1a801c27a672ec3ea7b6f5d583c8e32563)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplate_1a801c27a672ec3ea7b6f5d583c8e32563"></a>

Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1af494a8e47d30f9782e39761ff8be48ee)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & OutValue) const` <a id="structFRHAPI__MatchMakingTemplate_1af494a8e47d30f9782e39761ff8be48ee"></a>

Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplate_1aab7623bd10d82ee3fec6c2394ee78f44)`()` <a id="structFRHAPI__MatchMakingTemplate_1aab7623bd10d82ee3fec6c2394ee78f44"></a>

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplate_1a62220854862e6aa308a83cfd9ddced6e)`() const` <a id="structFRHAPI__MatchMakingTemplate_1a62220854862e6aa308a83cfd9ddced6e"></a>

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplate_1aa8f99fcf6c5f1303a6027f94d320a573)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1aa8f99fcf6c5f1303a6027f94d320a573"></a>

Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplate_1a9fa12b5d998e92753292d5900f7b2514)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` && NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1a9fa12b5d998e92753292d5900f7b2514"></a>

Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true using move semantics.

#### `public inline void `[`ClearRuleset`](#structFRHAPI__MatchMakingTemplate_1add4f8053263cd740171a409700081376)`()` <a id="structFRHAPI__MatchMakingTemplate_1add4f8053263cd740171a409700081376"></a>

Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplate_1ae0c39499d1c81a39a6ab56246fbd2e68)`()` <a id="structFRHAPI__MatchMakingTemplate_1ae0c39499d1c81a39a6ab56246fbd2e68"></a>

Gets the value of Profiles.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplate_1a171ab32d76bbdc837e2c49f0bcaa1e42)`() const` <a id="structFRHAPI__MatchMakingTemplate_1a171ab32d76bbdc837e2c49f0bcaa1e42"></a>

Gets the value of Profiles.

#### `public inline FORCEINLINE void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplate_1a8e57373e8518807739878b8ccfbde070)`(const TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1a8e57373e8518807739878b8ccfbde070"></a>

Sets the value of Profiles.

#### `public inline FORCEINLINE void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplate_1ad6d74bdd461e50cbdf2df17cae38da17)`(TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > && NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1ad6d74bdd461e50cbdf2df17cae38da17"></a>

Sets the value of Profiles using move semantics.

