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
`public inline FORCEINLINE FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a42ad6c9722a98941c3ef39da2a5307d6)`()` | Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1ad900a215b778cd7328bd94d3ccd5adc3)`() const` | Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a3200090ca2f12a5803e2abca26e8f679)`(const FGuid & DefaultValue) const` | Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a2dd72bebfcf61615aba2ddf51f9e6422)`(FGuid & OutValue) const` | Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a61510ae32c6d9f0c82f5cc9c12198c71)`()` | Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a30cb0a22ba86527eb3dada6e53b1e0cd)`() const` | Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1addc9c676af1a26d55aa18882968be462)`(const FGuid & NewValue)` | Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1aa19aaf413201e9a20461bdda181a73cf)`(FGuid && NewValue)` | Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a5504349fe1028c681a85b8ca7f108bb0)`()` | Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.
`public inline FORCEINLINE ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1af51facfe69188f2d851a3a3aa589c571)`()` | Gets the value of MmrGroupingMethod.
`public inline FORCEINLINE const ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a38fe47ca28961dd550c28fed2c5dbceb)`() const` | Gets the value of MmrGroupingMethod.
`public inline FORCEINLINE void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1aae5527f722f9934db0797f250dee47b0)`(const ERHAPI_MMRGroupingMethod & NewValue)` | Sets the value of MmrGroupingMethod.
`public inline FORCEINLINE void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a4c31448905110eb060f8b660ecd15350)`(ERHAPI_MMRGroupingMethod && NewValue)` | Sets the value of MmrGroupingMethod using move semantics.
`public inline FORCEINLINE `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a12b95618a9307241c55d3b342a06f339)`()` | Gets the value of Ruleset_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a077973293ea7eb173389572d03bba0b8)`() const` | Gets the value of Ruleset_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a660de70cc835bc24babf43d6396a0722)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & DefaultValue) const` | Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1aa1eb7fe2dfacc68cc3582104515cb331)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & OutValue) const` | Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a16a403cf53b85b89d893fc3442a84a95)`()` | Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a49a37771cf8b8b6e5fe7fcf5c1847ef2)`() const` | Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a771ff885cb655687cf2afecd950a260b)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & NewValue)` | Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.
`public inline FORCEINLINE void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a729c22bdede403af23478b7a33d21c8b)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` && NewValue)` | Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true using move semantics.
`public inline void `[`ClearRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a5bbf9a75a6693491ce2de9f6ec92a3b6)`()` | Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a07d81325a777869f8954b35b04d5923f)`()` | Gets the value of Profiles.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a35bb7bfa5aebbb5bb7a1993eaf3b9ea4)`() const` | Gets the value of Profiles.
`public inline FORCEINLINE void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1ac6e145b0f1117059ded4bff9a6ef4202)`(const TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & NewValue)` | Sets the value of Profiles.
`public inline FORCEINLINE void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a8adef40f0f165eee63335b551ef31951)`(TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > && NewValue)` | Sets the value of Profiles using move semantics.

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

#### `public inline FORCEINLINE FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a42ad6c9722a98941c3ef39da2a5307d6)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a42ad6c9722a98941c3ef39da2a5307d6"></a>

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1ad900a215b778cd7328bd94d3ccd5adc3)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1ad900a215b778cd7328bd94d3ccd5adc3"></a>

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a3200090ca2f12a5803e2abca26e8f679)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1a3200090ca2f12a5803e2abca26e8f679"></a>

Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a2dd72bebfcf61615aba2ddf51f9e6422)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1a2dd72bebfcf61615aba2ddf51f9e6422"></a>

Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a61510ae32c6d9f0c82f5cc9c12198c71)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a61510ae32c6d9f0c82f5cc9c12198c71"></a>

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a30cb0a22ba86527eb3dada6e53b1e0cd)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a30cb0a22ba86527eb3dada6e53b1e0cd"></a>

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1addc9c676af1a26d55aa18882968be462)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1addc9c676af1a26d55aa18882968be462"></a>

Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1aa19aaf413201e9a20461bdda181a73cf)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1aa19aaf413201e9a20461bdda181a73cf"></a>

Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a5504349fe1028c681a85b8ca7f108bb0)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a5504349fe1028c681a85b8ca7f108bb0"></a>

Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1af51facfe69188f2d851a3a3aa589c571)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1af51facfe69188f2d851a3a3aa589c571"></a>

Gets the value of MmrGroupingMethod.

#### `public inline FORCEINLINE const ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a38fe47ca28961dd550c28fed2c5dbceb)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a38fe47ca28961dd550c28fed2c5dbceb"></a>

Gets the value of MmrGroupingMethod.

#### `public inline FORCEINLINE void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1aae5527f722f9934db0797f250dee47b0)`(const ERHAPI_MMRGroupingMethod & NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1aae5527f722f9934db0797f250dee47b0"></a>

Sets the value of MmrGroupingMethod.

#### `public inline FORCEINLINE void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a4c31448905110eb060f8b660ecd15350)`(ERHAPI_MMRGroupingMethod && NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1a4c31448905110eb060f8b660ecd15350"></a>

Sets the value of MmrGroupingMethod using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a12b95618a9307241c55d3b342a06f339)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a12b95618a9307241c55d3b342a06f339"></a>

Gets the value of Ruleset_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a077973293ea7eb173389572d03bba0b8)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a077973293ea7eb173389572d03bba0b8"></a>

Gets the value of Ruleset_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a660de70cc835bc24babf43d6396a0722)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1a660de70cc835bc24babf43d6396a0722"></a>

Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1aa1eb7fe2dfacc68cc3582104515cb331)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1aa1eb7fe2dfacc68cc3582104515cb331"></a>

Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a16a403cf53b85b89d893fc3442a84a95)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a16a403cf53b85b89d893fc3442a84a95"></a>

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a49a37771cf8b8b6e5fe7fcf5c1847ef2)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a49a37771cf8b8b6e5fe7fcf5c1847ef2"></a>

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a771ff885cb655687cf2afecd950a260b)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1a771ff885cb655687cf2afecd950a260b"></a>

Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a729c22bdede403af23478b7a33d21c8b)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` && NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1a729c22bdede403af23478b7a33d21c8b"></a>

Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true using move semantics.

#### `public inline void `[`ClearRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a5bbf9a75a6693491ce2de9f6ec92a3b6)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a5bbf9a75a6693491ce2de9f6ec92a3b6"></a>

Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a07d81325a777869f8954b35b04d5923f)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a07d81325a777869f8954b35b04d5923f"></a>

Gets the value of Profiles.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a35bb7bfa5aebbb5bb7a1993eaf3b9ea4)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a35bb7bfa5aebbb5bb7a1993eaf3b9ea4"></a>

Gets the value of Profiles.

#### `public inline FORCEINLINE void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1ac6e145b0f1117059ded4bff9a6ef4202)`(const TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1ac6e145b0f1117059ded4bff9a6ef4202"></a>

Sets the value of Profiles.

#### `public inline FORCEINLINE void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a8adef40f0f165eee63335b551ef31951)`(TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1a8adef40f0f165eee63335b551ef31951"></a>

Sets the value of Profiles using move semantics.

