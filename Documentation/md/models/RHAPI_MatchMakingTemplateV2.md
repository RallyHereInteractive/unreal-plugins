# RHAPI_MatchMakingTemplateV2 <a id="group__RHAPI__MatchMakingTemplateV2"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`MatchMakingTemplateId_Optional`](#structFRHAPI__MatchMakingTemplateV2_1a3295d654d889fe7043ad146896039b4b) | ID for this unique MatchMakingTemplate.
`public bool `[`MatchMakingTemplateId_IsSet`](#structFRHAPI__MatchMakingTemplateV2_1a6c386f1d13fd054ed3af35f140eea282) | true if MatchMakingTemplateId_Optional has been set to a value
`public ERHAPI_MMRGroupingMethod `[`MmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a6851769d87be8fa66eed7673454e6a3e) | What method should be used to calculate a group's MMR based on the individual player's ranks.
`public `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` `[`Ruleset_Optional`](#structFRHAPI__MatchMakingTemplateV2_1a85ff3e95e6d7eca87856477431951e12) | 
`public bool `[`Ruleset_IsSet`](#structFRHAPI__MatchMakingTemplateV2_1a9de7f5bcdf3afa3e10a05380d1f5caf2) | true if Ruleset_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > `[`Profiles`](#structFRHAPI__MatchMakingTemplateV2_1abd9787ccfc61fbbce96bd078274122c6) | A list of which match making profiles are going to be created on the ticket.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateV2_1a09913cfeba8e84397ee528f2b90b6278)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateV2_1ada7b0f8337d314195687e2723873c9b5)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a8dd4261eb599b8a6bd5d08c7e25669bd)`()` | Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1ac3880a7ea2a987e26230d3a6717ec3de)`() const` | Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1abe89b532da1f20915138f712b527ffbc)`(const FGuid & DefaultValue) const` | Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a7b085305b6e53e783f0d3aadf22c6cb7)`(FGuid & OutValue) const` | Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a0ab3c67e565f452e9e0a1cf900bc3e4a)`()` | Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1aa635721c585310969cc7b069e4407d20)`() const` | Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a3b030e9e1bb451664236e0424f683b6f)`(FGuid NewValue)` | Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.
`public inline void `[`ClearMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a5504349fe1028c681a85b8ca7f108bb0)`()` | Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.
`public inline ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a5c7579f8bee79294e6f468d9a5657213)`()` | Gets the value of MmrGroupingMethod.
`public inline const ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1aa34861b6db1685a94a5a04914848b47b)`() const` | Gets the value of MmrGroupingMethod.
`public inline void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1ac3b2dc09cd3e913133e2ffc6b067b813)`(ERHAPI_MMRGroupingMethod NewValue)` | Sets the value of MmrGroupingMethod.
`public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1acc840e02ad48aa18ba12f5f2e764021f)`()` | Gets the value of Ruleset_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1ae987dad7336e79143fe0a3935a57d860)`() const` | Gets the value of Ruleset_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1ab8e6b978fdb6298e159afeb299bde5f1)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & DefaultValue) const` | Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a1b146c33b32dd3a8accd80db9079a739)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & OutValue) const` | Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a16192932ce33cd91fa00dd29a61c6bbe)`()` | Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a2f2665a9a1e142676d280de0988e0161)`() const` | Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a47645001717ba9ce9628c23dc5da55bb)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` NewValue)` | Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.
`public inline void `[`ClearRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a5bbf9a75a6693491ce2de9f6ec92a3b6)`()` | Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1aed66168c605aae3123ab7c7835e4bad9)`()` | Gets the value of Profiles.
`public inline const TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a0d19cee62ef89941b197361270feae87)`() const` | Gets the value of Profiles.
`public inline void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1af1fb3a4356072620d82518cc7b2c856a)`(TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > NewValue)` | Sets the value of Profiles.

#### Members

#### `public FGuid `[`MatchMakingTemplateId_Optional`](#structFRHAPI__MatchMakingTemplateV2_1a3295d654d889fe7043ad146896039b4b) <a id="structFRHAPI__MatchMakingTemplateV2_1a3295d654d889fe7043ad146896039b4b"></a>

ID for this unique MatchMakingTemplate.

<br>
#### `public bool `[`MatchMakingTemplateId_IsSet`](#structFRHAPI__MatchMakingTemplateV2_1a6c386f1d13fd054ed3af35f140eea282) <a id="structFRHAPI__MatchMakingTemplateV2_1a6c386f1d13fd054ed3af35f140eea282"></a>

true if MatchMakingTemplateId_Optional has been set to a value

<br>
#### `public ERHAPI_MMRGroupingMethod `[`MmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a6851769d87be8fa66eed7673454e6a3e) <a id="structFRHAPI__MatchMakingTemplateV2_1a6851769d87be8fa66eed7673454e6a3e"></a>

What method should be used to calculate a group's MMR based on the individual player's ranks.

<br>
#### `public `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` `[`Ruleset_Optional`](#structFRHAPI__MatchMakingTemplateV2_1a85ff3e95e6d7eca87856477431951e12) <a id="structFRHAPI__MatchMakingTemplateV2_1a85ff3e95e6d7eca87856477431951e12"></a>

<br>
#### `public bool `[`Ruleset_IsSet`](#structFRHAPI__MatchMakingTemplateV2_1a9de7f5bcdf3afa3e10a05380d1f5caf2) <a id="structFRHAPI__MatchMakingTemplateV2_1a9de7f5bcdf3afa3e10a05380d1f5caf2"></a>

true if Ruleset_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > `[`Profiles`](#structFRHAPI__MatchMakingTemplateV2_1abd9787ccfc61fbbce96bd078274122c6) <a id="structFRHAPI__MatchMakingTemplateV2_1abd9787ccfc61fbbce96bd078274122c6"></a>

A list of which match making profiles are going to be created on the ticket.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateV2_1a09913cfeba8e84397ee528f2b90b6278)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1a09913cfeba8e84397ee528f2b90b6278"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateV2_1ada7b0f8337d314195687e2723873c9b5)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingTemplateV2_1ada7b0f8337d314195687e2723873c9b5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a8dd4261eb599b8a6bd5d08c7e25669bd)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a8dd4261eb599b8a6bd5d08c7e25669bd"></a>

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1ac3880a7ea2a987e26230d3a6717ec3de)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1ac3880a7ea2a987e26230d3a6717ec3de"></a>

Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1abe89b532da1f20915138f712b527ffbc)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1abe89b532da1f20915138f712b527ffbc"></a>

Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a7b085305b6e53e783f0d3aadf22c6cb7)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1a7b085305b6e53e783f0d3aadf22c6cb7"></a>

Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a0ab3c67e565f452e9e0a1cf900bc3e4a)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a0ab3c67e565f452e9e0a1cf900bc3e4a"></a>

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetMatchMakingTemplateIdOrNull`](#structFRHAPI__MatchMakingTemplateV2_1aa635721c585310969cc7b069e4407d20)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1aa635721c585310969cc7b069e4407d20"></a>

Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a3b030e9e1bb451664236e0424f683b6f)`(FGuid NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1a3b030e9e1bb451664236e0424f683b6f"></a>

Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true.

<br>
#### `public inline void `[`ClearMatchMakingTemplateId`](#structFRHAPI__MatchMakingTemplateV2_1a5504349fe1028c681a85b8ca7f108bb0)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a5504349fe1028c681a85b8ca7f108bb0"></a>

Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false.

<br>
#### `public inline ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1a5c7579f8bee79294e6f468d9a5657213)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a5c7579f8bee79294e6f468d9a5657213"></a>

Gets the value of MmrGroupingMethod.

<br>
#### `public inline const ERHAPI_MMRGroupingMethod & `[`GetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1aa34861b6db1685a94a5a04914848b47b)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1aa34861b6db1685a94a5a04914848b47b"></a>

Gets the value of MmrGroupingMethod.

<br>
#### `public inline void `[`SetMmrGroupingMethod`](#structFRHAPI__MatchMakingTemplateV2_1ac3b2dc09cd3e913133e2ffc6b067b813)`(ERHAPI_MMRGroupingMethod NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1ac3b2dc09cd3e913133e2ffc6b067b813"></a>

Sets the value of MmrGroupingMethod.

<br>
#### `public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1acc840e02ad48aa18ba12f5f2e764021f)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1acc840e02ad48aa18ba12f5f2e764021f"></a>

Gets the value of Ruleset_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1ae987dad7336e79143fe0a3935a57d860)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1ae987dad7336e79143fe0a3935a57d860"></a>

Gets the value of Ruleset_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1ab8e6b978fdb6298e159afeb299bde5f1)`(const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1ab8e6b978fdb6298e159afeb299bde5f1"></a>

Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a1b146c33b32dd3a8accd80db9079a739)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateV2_1a1b146c33b32dd3a8accd80db9079a739"></a>

Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a16192932ce33cd91fa00dd29a61c6bbe)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a16192932ce33cd91fa00dd29a61c6bbe"></a>

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` * `[`GetRulesetOrNull`](#structFRHAPI__MatchMakingTemplateV2_1a2f2665a9a1e142676d280de0988e0161)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a2f2665a9a1e142676d280de0988e0161"></a>

Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a47645001717ba9ce9628c23dc5da55bb)`(`[`FRHAPI_MatchMakingRuleset`](RHAPI_MatchMakingRuleset.md#structFRHAPI__MatchMakingRuleset)` NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1a47645001717ba9ce9628c23dc5da55bb"></a>

Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true.

<br>
#### `public inline void `[`ClearRuleset`](#structFRHAPI__MatchMakingTemplateV2_1a5bbf9a75a6693491ce2de9f6ec92a3b6)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1a5bbf9a75a6693491ce2de9f6ec92a3b6"></a>

Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1aed66168c605aae3123ab7c7835e4bad9)`()` <a id="structFRHAPI__MatchMakingTemplateV2_1aed66168c605aae3123ab7c7835e4bad9"></a>

Gets the value of Profiles.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > & `[`GetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1a0d19cee62ef89941b197361270feae87)`() const` <a id="structFRHAPI__MatchMakingTemplateV2_1a0d19cee62ef89941b197361270feae87"></a>

Gets the value of Profiles.

<br>
#### `public inline void `[`SetProfiles`](#structFRHAPI__MatchMakingTemplateV2_1af1fb3a4356072620d82518cc7b2c856a)`(TArray< `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` > NewValue)` <a id="structFRHAPI__MatchMakingTemplateV2_1af1fb3a4356072620d82518cc7b2c856a"></a>

Sets the value of Profiles.

<br>
