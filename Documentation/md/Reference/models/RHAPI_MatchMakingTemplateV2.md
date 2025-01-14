---
title: RHAPI_MatchMakingTemplateV2
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingTemplateV2`](#structFRHAPI__MatchMakingTemplateV2) | Configuration about what rules must be satisfied to use this template, and what matchmaking profiles the ticket will be a part of.

## struct `FRHAPI_MatchMakingTemplateV2` <a id="structFRHAPI__MatchMakingTemplateV2"></a>

```
struct FRHAPI_MatchMakingTemplateV2
  : public FRHAPI_Model
```

Configuration about what rules must be satisfied to use this template, and what matchmaking profiles the ticket will be a part of.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`MatchMakingTemplateId_Optional`](#structFRHAPI__MatchMakingTemplateV2_1a3295d654d889fe7043ad146896039b4b) | ID for this unique MatchMakingTemplate.
`public bool `[`MatchMakingTemplateId_IsSet`](#structFRHAPI__MatchMakingTemplateV2_1a6c386f1d13fd054ed3af35f140eea282) | true if MatchMakingTemplateId_Optional has been set to a value
`public ERHAPI_MMRGroupingMethod `[`MmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a6851769d87be8fa66eed7673454e6a3e) | What method should be used to calculate a group's MMR based on the individual player's ranks.
`public `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` `[`Ruleset_Optional`](#structFRHAPI__MatchMakingTemplateV2_1a85ff3e95e6d7eca87856477431951e12) | A set of rules that determine whether or not this matchmaking config should be used.
`public bool `[`Ruleset_IsSet`](#structFRHAPI__MatchMakingTemplateV2_1a9de7f5bcdf3afa3e10a05380d1f5caf2) | true if Ruleset_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > `[`Profiles`](#structFRHAPI__MatchMakingTemplateV2_1abd9787ccfc61fbbce96bd078274122c6) | A list of which match making profiles are going to be created on the ticket.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateV2_1ab69be714668bed35f351e10b0c9c0f84)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateV2_1a93a6caaac531d883e6d57579fcf10d33)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a9a647c482cf4ccb219b5b09b119373e2)`()` | Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a6b09a86ff02bc7098502519cd26540c3)`() const` | Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a89bfb82d0bb3b6d62af0a8a60842f13d)`(const FGuid & DefaultValue) const` | Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a7b085305b6e53e783f0d3aadf22c6cb7)`(FGuid & OutValue) const` | Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a0e1469b34c58137029b3a9584a9ac07a)`()` | Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a48fc072cb81c4216a685a3b772451478)`() const` | Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1aad680b576cde7051199df27ef764b46a)`(const FGuid & NewValue)` | Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.
`public inline void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a0a57ddabf74336ed7da801f5419379a8)`(FGuid && NewValue)` | Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a5504349fe1028c681a85b8ca7f108bb0)`()` | Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.
`public inline bool `[`IsMatchMakingTemplateIdSet`](#structFRHAPI__MatchMakingTemplateV2_1ad66023820682dbbdaf8a585de815981d)`() const` | Checks whether MatchMakingTemplateId_Optional has been set.
`public inline ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1aee912becd21b650d905d10572f417580)`()` | Gets the value of MmrGroupingMethod.
`public inline const ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1af0a85c97d54bf92fbe2ef18d62b9b611)`() const` | Gets the value of MmrGroupingMethod.
`public inline void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a43038bc018cf22db76f68dc6d6d2b651)`(const ERHAPI_MMRGroupingMethod & NewValue)` | Sets the value of MmrGroupingMethod.
`public inline void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1ad93492b44065dcc162c40d90abdba1d5)`(ERHAPI_MMRGroupingMethod && NewValue)` | Sets the value of MmrGroupingMethod using move semantics.
`public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1aad81a8944c13b33646fa91b5b14dd691)`()` | Gets the value of Ruleset_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a0bb90e9d0675382402cb5966f95a6a59)`() const` | Gets the value of Ruleset_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a74bc72a6649f043acff569c1c732ee82)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & DefaultValue) const` | Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a1b146c33b32dd3a8accd80db9079a739)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & OutValue) const` | Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a084665f9a564cc7306e9207a09df6117)`()` | Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a2ac6db3db45597ba449a48767f61d4b4)`() const` | Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a60904e9e4338cb4f655b90efce9eccfc)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & NewValue)` | Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.
`public inline void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1af376997bc703bd406cda888da02cb83d)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` && NewValue)` | Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true using move semantics.
`public inline void `[`ClearRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a5bbf9a75a6693491ce2de9f6ec92a3b6)`()` | Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.
`public inline bool `[`IsRulesetSet`](#structFRHAPI__MatchMakingTemplateV2_1ae2bcd4a4857b4d49f9fc4dc81d378ddc)`() const` | Checks whether Ruleset_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1ab3812cea6a652848aa7ce9b619c8f7b4)`()` | Gets the value of Profiles.
`public inline const TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a102f8dc64f8ae448c8b28ccd9efc59f9)`() const` | Gets the value of Profiles.
`public inline void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1acfd40a15fc8fb93481da6878485f345d)`(const TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & NewValue)` | Sets the value of Profiles.
`public inline void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a4eceb012974d45a074d04671ab650144)`(TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > && NewValue)` | Sets the value of Profiles using move semantics.

### Members

#### `public FGuid `[`MatchMakingTemplateId_Optional`](#structFRHAPI__MatchMakingTemplateV2_1a3295d654d889fe7043ad146896039b4b) <a id="structFRHAPI__MatchMakingTemplateV2_1a3295d654d889fe7043ad146896039b4b"></a>

ID for this unique MatchMakingTemplate.

#### `public bool `[`MatchMakingTemplateId_IsSet`](#structFRHAPI__MatchMakingTemplateV2_1a6c386f1d13fd054ed3af35f140eea282) <a id="structFRHAPI__MatchMakingTemplateV2_1a6c386f1d13fd054ed3af35f140eea282"></a>

true if MatchMakingTemplateId_Optional has been set to a value

#### `public ERHAPI_MMRGroupingMethod `[`MmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a6851769d87be8fa66eed7673454e6a3e) <a id="structFRHAPI__MatchMakingTemplateV2_1a6851769d87be8fa66eed7673454e6a3e"></a>

What method should be used to calculate a group's MMR based on the individual player's ranks.

#### `public `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` `[`Ruleset_Optional`](#structFRHAPI__MatchMakingTemplateV2_1a85ff3e95e6d7eca87856477431951e12) <a id="structFRHAPI__MatchMakingTemplateV2_1a85ff3e95e6d7eca87856477431951e12"></a>

A set of rules that determine whether or not this matchmaking config should be used.

#### `public bool `[`Ruleset_IsSet`](#structFRHAPI__MatchMakingTemplateV2_1a9de7f5bcdf3afa3e10a05380d1f5caf2) <a id="structFRHAPI__MatchMakingTemplateV2_1a9de7f5bcdf3afa3e10a05380d1f5caf2"></a>

true if Ruleset_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > `[`Profiles`](#structFRHAPI__MatchMakingTemplateV2_1abd9787ccfc61fbbce96bd078274122c6) <a id="structFRHAPI__MatchMakingTemplateV2_1abd9787ccfc61fbbce96bd078274122c6"></a>

A list of which match making profiles are going to be created on the ticket.

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateV2_1ab69be714668bed35f351e10b0c9c0f84)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1ab69be714668bed35f351e10b0c9c0f84"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateV2_1a93a6caaac531d883e6d57579fcf10d33)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchMakingTemplateV2_1a93a6caaac531d883e6d57579fcf10d33"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a9a647c482cf4ccb219b5b09b119373e2)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a9a647c482cf4ccb219b5b09b119373e2"></a>

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a6b09a86ff02bc7098502519cd26540c3)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a6b09a86ff02bc7098502519cd26540c3"></a>

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a89bfb82d0bb3b6d62af0a8a60842f13d)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1a89bfb82d0bb3b6d62af0a8a60842f13d"></a>

Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a7b085305b6e53e783f0d3aadf22c6cb7)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1a7b085305b6e53e783f0d3aadf22c6cb7"></a>

Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a0e1469b34c58137029b3a9584a9ac07a)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a0e1469b34c58137029b3a9584a9ac07a"></a>

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a48fc072cb81c4216a685a3b772451478)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a48fc072cb81c4216a685a3b772451478"></a>

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1aad680b576cde7051199df27ef764b46a)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1aad680b576cde7051199df27ef764b46a"></a>

Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.

#### `public inline void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a0a57ddabf74336ed7da801f5419379a8)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1a0a57ddabf74336ed7da801f5419379a8"></a>

Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a5504349fe1028c681a85b8ca7f108bb0)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a5504349fe1028c681a85b8ca7f108bb0"></a>

Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.

#### `public inline bool `[`IsMatchMakingTemplateIdSet`](#structFRHAPI__MatchMakingTemplateV2_1ad66023820682dbbdaf8a585de815981d)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1ad66023820682dbbdaf8a585de815981d"></a>

Checks whether MatchMakingTemplateId_Optional has been set.

#### `public inline ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1aee912becd21b650d905d10572f417580)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1aee912becd21b650d905d10572f417580"></a>

Gets the value of MmrGroupingMethod.

#### `public inline const ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1af0a85c97d54bf92fbe2ef18d62b9b611)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1af0a85c97d54bf92fbe2ef18d62b9b611"></a>

Gets the value of MmrGroupingMethod.

#### `public inline void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a43038bc018cf22db76f68dc6d6d2b651)`(const ERHAPI_MMRGroupingMethod & NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1a43038bc018cf22db76f68dc6d6d2b651"></a>

Sets the value of MmrGroupingMethod.

#### `public inline void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1ad93492b44065dcc162c40d90abdba1d5)`(ERHAPI_MMRGroupingMethod && NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1ad93492b44065dcc162c40d90abdba1d5"></a>

Sets the value of MmrGroupingMethod using move semantics.

#### `public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1aad81a8944c13b33646fa91b5b14dd691)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1aad81a8944c13b33646fa91b5b14dd691"></a>

Gets the value of Ruleset_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a0bb90e9d0675382402cb5966f95a6a59)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a0bb90e9d0675382402cb5966f95a6a59"></a>

Gets the value of Ruleset_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a74bc72a6649f043acff569c1c732ee82)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1a74bc72a6649f043acff569c1c732ee82"></a>

Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a1b146c33b32dd3a8accd80db9079a739)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1a1b146c33b32dd3a8accd80db9079a739"></a>

Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a084665f9a564cc7306e9207a09df6117)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a084665f9a564cc7306e9207a09df6117"></a>

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a2ac6db3db45597ba449a48767f61d4b4)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a2ac6db3db45597ba449a48767f61d4b4"></a>

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a60904e9e4338cb4f655b90efce9eccfc)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1a60904e9e4338cb4f655b90efce9eccfc"></a>

Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.

#### `public inline void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1af376997bc703bd406cda888da02cb83d)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` && NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1af376997bc703bd406cda888da02cb83d"></a>

Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true using move semantics.

#### `public inline void `[`ClearRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a5bbf9a75a6693491ce2de9f6ec92a3b6)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a5bbf9a75a6693491ce2de9f6ec92a3b6"></a>

Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.

#### `public inline bool `[`IsRulesetSet`](#structFRHAPI__MatchMakingTemplateV2_1ae2bcd4a4857b4d49f9fc4dc81d378ddc)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1ae2bcd4a4857b4d49f9fc4dc81d378ddc"></a>

Checks whether Ruleset_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1ab3812cea6a652848aa7ce9b619c8f7b4)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1ab3812cea6a652848aa7ce9b619c8f7b4"></a>

Gets the value of Profiles.

#### `public inline const TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a102f8dc64f8ae448c8b28ccd9efc59f9)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a102f8dc64f8ae448c8b28ccd9efc59f9"></a>

Gets the value of Profiles.

#### `public inline void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1acfd40a15fc8fb93481da6878485f345d)`(const TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1acfd40a15fc8fb93481da6878485f345d"></a>

Sets the value of Profiles.

#### `public inline void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a4eceb012974d45a074d04671ab650144)`(TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1a4eceb012974d45a074d04671ab650144"></a>

Sets the value of Profiles using move semantics.

