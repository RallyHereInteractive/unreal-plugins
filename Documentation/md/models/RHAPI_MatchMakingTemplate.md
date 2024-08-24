# group `RHAPI_MatchMakingTemplate` <a id="group__RHAPI__MatchMakingTemplate"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingTemplate`](#structFRHAPI__MatchMakingTemplate) | DEPRECATED Configuration about what rules must be satisfied to use this template, and what matchmaking profiles the ticket will be a part of.

---
title: FRHAPI_MatchMakingTemplate
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplate_1a6e37df9fdb150c17bc3ea3e7dc16b025)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a78f50b9ef1dd8183cf5d69a8330b3a13)`()` | Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1ac8abf666e0b753c82e25db62ceccaef4)`() const` | Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a64469716151df452e49e2da4d60ca981)`(const FGuid & DefaultValue) const` | Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a90ce064e5d98f19c0fa39cba9ac0d142)`(FGuid & OutValue) const` | Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplate_1ad01d5418d126d1585b3dcad867f3f0b9)`()` | Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplate_1ad5cd37f04db42e29c91c09a04e87969f)`() const` | Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1ad7e2223324a83e01232f1bcadf0bc1a0)`(const FGuid & NewValue)` | Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.
`public inline void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1af81e1a364acbee6bf8b7e6f7e869fa6f)`(FGuid && NewValue)` | Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1aba6ed3458027f078405c957e54196f4f)`()` | Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.
`public inline bool `[`IsMatchMakingTemplateIdSet`](#structFRHAPI__MatchMakingTemplate_1adef7394a2259ed34da705895b0fc244e)`() const` | Checks whether MatchMakingTemplateId_Optional has been set.
`public inline ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1abf647090fae345e43e6269adf096a3f1)`()` | Gets the value of MmrGroupingMethod.
`public inline const ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a778c3a09e3f33d2f57ece24d086593df)`() const` | Gets the value of MmrGroupingMethod.
`public inline void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a98f24006fd1b941df0e507fdf2d8ba9f)`(const ERHAPI_MMRGroupingMethod & NewValue)` | Sets the value of MmrGroupingMethod.
`public inline void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a77d557f7915aa06c4324eeb268a97a6c)`(ERHAPI_MMRGroupingMethod && NewValue)` | Sets the value of MmrGroupingMethod using move semantics.
`public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1acd6e5b0ca5fb8cbb167e1b642cfe0bfb)`()` | Gets the value of Ruleset_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1a92dac10805e63875314b07de4b896ab1)`() const` | Gets the value of Ruleset_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1ad0b90512eaae2e1c44541b1e467c59ff)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & DefaultValue) const` | Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1aeab00f0f29a0f1dd77f920302e0e16c5)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & OutValue) const` | Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplate_1aa70205bfa6aee6aaed52112956169237)`()` | Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplate_1a098b5c4b0a448051f969029db4f1b846)`() const` | Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplate_1a161de86529e9aaafd56aa978635b7a5a)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & NewValue)` | Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.
`public inline void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplate_1a10fbcafed79d1355947f299b9704d087)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` && NewValue)` | Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true using move semantics.
`public inline void `[`ClearRuleset`](#structFRHAPI__MatchMakingTemplate_1add4f8053263cd740171a409700081376)`()` | Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.
`public inline bool `[`IsRulesetSet`](#structFRHAPI__MatchMakingTemplate_1a935e3fa56ea9825ab8cf91d899637706)`() const` | Checks whether Ruleset_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplate_1afb18252df2f9f997555a3a9888fa7731)`()` | Gets the value of Profiles.
`public inline const TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplate_1a20bb59793bbd9666efdd2574d62dfa3f)`() const` | Gets the value of Profiles.
`public inline void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplate_1a3a72b6a34d0b5e44eb0c03543bd896be)`(const TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & NewValue)` | Sets the value of Profiles.
`public inline void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplate_1af493f503422175f318ab966ed70f5488)`(TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > && NewValue)` | Sets the value of Profiles using move semantics.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplate_1a6e37df9fdb150c17bc3ea3e7dc16b025)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingTemplate_1a6e37df9fdb150c17bc3ea3e7dc16b025"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a78f50b9ef1dd8183cf5d69a8330b3a13)`()` <a id="structFRHAPI__MatchMakingTemplate_1a78f50b9ef1dd8183cf5d69a8330b3a13"></a>

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1ac8abf666e0b753c82e25db62ceccaef4)`() const` <a id="structFRHAPI__MatchMakingTemplate_1ac8abf666e0b753c82e25db62ceccaef4"></a>

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a64469716151df452e49e2da4d60ca981)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplate_1a64469716151df452e49e2da4d60ca981"></a>

Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1a90ce064e5d98f19c0fa39cba9ac0d142)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingTemplate_1a90ce064e5d98f19c0fa39cba9ac0d142"></a>

Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplate_1ad01d5418d126d1585b3dcad867f3f0b9)`()` <a id="structFRHAPI__MatchMakingTemplate_1ad01d5418d126d1585b3dcad867f3f0b9"></a>

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplate_1ad5cd37f04db42e29c91c09a04e87969f)`() const` <a id="structFRHAPI__MatchMakingTemplate_1ad5cd37f04db42e29c91c09a04e87969f"></a>

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1ad7e2223324a83e01232f1bcadf0bc1a0)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1ad7e2223324a83e01232f1bcadf0bc1a0"></a>

Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.

#### `public inline void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1af81e1a364acbee6bf8b7e6f7e869fa6f)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1af81e1a364acbee6bf8b7e6f7e869fa6f"></a>

Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplate_1aba6ed3458027f078405c957e54196f4f)`()` <a id="structFRHAPI__MatchMakingTemplate_1aba6ed3458027f078405c957e54196f4f"></a>

Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.

#### `public inline bool `[`IsMatchMakingTemplateIdSet`](#structFRHAPI__MatchMakingTemplate_1adef7394a2259ed34da705895b0fc244e)`() const` <a id="structFRHAPI__MatchMakingTemplate_1adef7394a2259ed34da705895b0fc244e"></a>

Checks whether MatchMakingTemplateId_Optional has been set.

#### `public inline ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1abf647090fae345e43e6269adf096a3f1)`()` <a id="structFRHAPI__MatchMakingTemplate_1abf647090fae345e43e6269adf096a3f1"></a>

Gets the value of MmrGroupingMethod.

#### `public inline const ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a778c3a09e3f33d2f57ece24d086593df)`() const` <a id="structFRHAPI__MatchMakingTemplate_1a778c3a09e3f33d2f57ece24d086593df"></a>

Gets the value of MmrGroupingMethod.

#### `public inline void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a98f24006fd1b941df0e507fdf2d8ba9f)`(const ERHAPI_MMRGroupingMethod & NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1a98f24006fd1b941df0e507fdf2d8ba9f"></a>

Sets the value of MmrGroupingMethod.

#### `public inline void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplate_1a77d557f7915aa06c4324eeb268a97a6c)`(ERHAPI_MMRGroupingMethod && NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1a77d557f7915aa06c4324eeb268a97a6c"></a>

Sets the value of MmrGroupingMethod using move semantics.

#### `public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1acd6e5b0ca5fb8cbb167e1b642cfe0bfb)`()` <a id="structFRHAPI__MatchMakingTemplate_1acd6e5b0ca5fb8cbb167e1b642cfe0bfb"></a>

Gets the value of Ruleset_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1a92dac10805e63875314b07de4b896ab1)`() const` <a id="structFRHAPI__MatchMakingTemplate_1a92dac10805e63875314b07de4b896ab1"></a>

Gets the value of Ruleset_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1ad0b90512eaae2e1c44541b1e467c59ff)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplate_1ad0b90512eaae2e1c44541b1e467c59ff"></a>

Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRuleset`](#structFRHAPI__MatchMakingTemplate_1aeab00f0f29a0f1dd77f920302e0e16c5)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & OutValue) const` <a id="structFRHAPI__MatchMakingTemplate_1aeab00f0f29a0f1dd77f920302e0e16c5"></a>

Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplate_1aa70205bfa6aee6aaed52112956169237)`()` <a id="structFRHAPI__MatchMakingTemplate_1aa70205bfa6aee6aaed52112956169237"></a>

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplate_1a098b5c4b0a448051f969029db4f1b846)`() const` <a id="structFRHAPI__MatchMakingTemplate_1a098b5c4b0a448051f969029db4f1b846"></a>

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplate_1a161de86529e9aaafd56aa978635b7a5a)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1a161de86529e9aaafd56aa978635b7a5a"></a>

Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.

#### `public inline void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplate_1a10fbcafed79d1355947f299b9704d087)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` && NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1a10fbcafed79d1355947f299b9704d087"></a>

Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true using move semantics.

#### `public inline void `[`ClearRuleset`](#structFRHAPI__MatchMakingTemplate_1add4f8053263cd740171a409700081376)`()` <a id="structFRHAPI__MatchMakingTemplate_1add4f8053263cd740171a409700081376"></a>

Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.

#### `public inline bool `[`IsRulesetSet`](#structFRHAPI__MatchMakingTemplate_1a935e3fa56ea9825ab8cf91d899637706)`() const` <a id="structFRHAPI__MatchMakingTemplate_1a935e3fa56ea9825ab8cf91d899637706"></a>

Checks whether Ruleset_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplate_1afb18252df2f9f997555a3a9888fa7731)`()` <a id="structFRHAPI__MatchMakingTemplate_1afb18252df2f9f997555a3a9888fa7731"></a>

Gets the value of Profiles.

#### `public inline const TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplate_1a20bb59793bbd9666efdd2574d62dfa3f)`() const` <a id="structFRHAPI__MatchMakingTemplate_1a20bb59793bbd9666efdd2574d62dfa3f"></a>

Gets the value of Profiles.

#### `public inline void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplate_1a3a72b6a34d0b5e44eb0c03543bd896be)`(const TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > & NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1a3a72b6a34d0b5e44eb0c03543bd896be"></a>

Sets the value of Profiles.

#### `public inline void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplate_1af493f503422175f318ab966ed70f5488)`(TArray< `[`FRHAPI_MatchMakingProfile`](RHAPI_MatchMakingProfile.md#structFRHAPI__MatchMakingProfile)` > && NewValue)` <a id="structFRHAPI__MatchMakingTemplate_1af493f503422175f318ab966ed70f5488"></a>

Sets the value of Profiles using move semantics.

