---
title: RHAPI_MatchMakingTemplateGroupV2
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingTemplateGroupV2`](#structFRHAPI__MatchMakingTemplateGroupV2) | A collection of MatchMakingTemplates that may be used when a session enters a queue. The first template that satisfies the necessary rules will be used.

## struct `FRHAPI_MatchMakingTemplateGroupV2` <a id="structFRHAPI__MatchMakingTemplateGroupV2"></a>

```
struct FRHAPI_MatchMakingTemplateGroupV2
  : public FRHAPI_Model
```

A collection of MatchMakingTemplates that may be used when a session enters a queue. The first template that satisfies the necessary rules will be used.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1ab6ac4a6cc076fa58e61f71f0b74c6da2) | ID for this set of potential matchmaking templates.
`public TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > `[`TemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a5f061f6b1728e5e91acbc50c8d0db1cb) | List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.
`public TSet< int32 > `[`RequiredItemIds_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a679dffab35167122874604eb826703bd) | DEPRECATED. Set of all the item ids that are required to validate every rule contained in this template group.
`public bool `[`RequiredItemIds_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1acf8e308da6fcec42032dd998a15284c3) | true if RequiredItemIds_Optional has been set to a value
`public bool `[`RequiresAllPlayersItems_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a8488674c91fc3cf5cfe7be4c51b89abb) | DEPRECATED. Whether or not the rulesets under this group will require us to query all players inventory, or just the leader's.
`public bool `[`RequiresAllPlayersItems_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa1ce654df8e332c2883087f691bd7503) | true if RequiresAllPlayersItems_Optional has been set to a value
`public bool `[`IncludesSessionRule_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a78e546039e5a79103050ebbeabbc8fe2) | DEPRECATED. Whether or not the rulesets under this group will require us to validate session data.
`public bool `[`IncludesSessionRule_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1ad85d849ab5f1dd72347a07ce5a706cbe) | true if IncludesSessionRule_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1ab2bd4c99d48b826ea841c97880c250a2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1a42572b3b37c4cce4a1c6fb35d43a34d7)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a8bc2d3a8d4f3c4cd3d8dcb5ec6c9870b)`()` | Gets the value of MatchMakingTemplateGroupId.
`public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1afbff4c47332a4de7d35cb484cdad171e)`() const` | Gets the value of MatchMakingTemplateGroupId.
`public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a094adccf60c562ee00ee715ce110e2f0)`(const FGuid & NewValue)` | Sets the value of MatchMakingTemplateGroupId.
`public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a3fec641bccfd13aa3600b515fa4995fa)`(FGuid && NewValue)` | Sets the value of MatchMakingTemplateGroupId using move semantics.
`public inline TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a9573657142ac3522908128ddaf7f8a8b)`()` | Gets the value of TemplateOptions.
`public inline const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7d96c94a98824c81f614ef874a162cb4)`() const` | Gets the value of TemplateOptions.
`public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1aabdb7abcf4c672d4fa88ab4a0c5e26a2)`(const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & NewValue)` | Sets the value of TemplateOptions.
`public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7eddf34d907c66543aa9dd139d5f137e)`(TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > && NewValue)` | Sets the value of TemplateOptions using move semantics.
`public inline TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a0bd9692c6972585e4db3fa597e6563e7)`()` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1ac3ffe6af66eb1fef9d408613665cf256)`() const` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a8ea10f0bdf13b3489dbe7f26c6c440f8)`(const TSet< int32 > & DefaultValue) const` | Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2502c85366c9867bc828b58e75b4771b)`(TSet< int32 > & OutValue) const` | Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2247144b37be05b91a6105192c62f68e)`()` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a68ddeccc31b7d700d506916a59664d39)`() const` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a6b7152abdcc6bc8f559c78276aaba2c1)`(const TSet< int32 > & NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.
`public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1acef58f4a11f6a0c69b8056554918b7cb)`(TSet< int32 > && NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true using move semantics.
`public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055)`()` | Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.
`public inline bool `[`IsRequiredItemIdsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1ec1af18752cde6ea5ffb197b32d5427)`() const` | Checks whether RequiredItemIds_Optional has been set.
`public inline bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a78e0168d02fa3d7035dfa92148d06f28)`()` | Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.
`public inline const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a74155a24257a5c7901c80b89d48aaef4)`() const` | Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.
`public inline const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a6d534317f8f4d3ee1d5c1d29729d5682)`(const bool & DefaultValue) const` | Gets the value of RequiresAllPlayersItems_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1afb54f8bbaf6febe4dac50a375ffeb4a1)`(bool & OutValue) const` | Fills OutValue with the value of RequiresAllPlayersItems_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a9b1602d3550a9b10962ad86468c7eb75)`()` | Returns a pointer to RequiresAllPlayersItems_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1ae7d13ebfbcb9790521405b5ae74eee44)`() const` | Returns a pointer to RequiresAllPlayersItems_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a113333608a253de1488967459a319592)`(const bool & NewValue)` | Sets the value of RequiresAllPlayersItems_Optional and also sets RequiresAllPlayersItems_IsSet to true.
`public inline void `[`SetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1c6c9ddc6263db8933ed72fa52af18b6)`(bool && NewValue)` | Sets the value of RequiresAllPlayersItems_Optional and also sets RequiresAllPlayersItems_IsSet to true using move semantics.
`public inline void `[`ClearRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a438d6d46a18dafa5a98aa7494af4d712)`()` | Clears the value of RequiresAllPlayersItems_Optional and sets RequiresAllPlayersItems_IsSet to false.
`public inline bool `[`IsRequiresAllPlayersItemsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1a442668f810897c3c52da93a512bb3335)`() const` | Checks whether RequiresAllPlayersItems_Optional has been set.
`public inline bool `[`IsRequiresAllPlayersItemsDefaultValue`](#structFRHAPI__MatchMakingTemplateGroupV2_1a630b53fea6154b63951c162e05197d59)`() const` | Returns true if RequiresAllPlayersItems_Optional is set and matches the default value.
`public inline void `[`SetRequiresAllPlayersItemsToDefault`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7a3a20244efffa3ce670adcbd1cce5a7)`()` | Sets the value of RequiresAllPlayersItems_Optional to its default and also sets RequiresAllPlayersItems_IsSet to true.
`public inline bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1ac1f99f2a6ec3116f370f69d1dd36311e)`()` | Gets the value of IncludesSessionRule_Optional, regardless of it having been set.
`public inline const bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a24a6ca33a84befec21d471e9051125df)`() const` | Gets the value of IncludesSessionRule_Optional, regardless of it having been set.
`public inline const bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a97bbc518f43a19d2a9aef946ed3340b3)`(const bool & DefaultValue) const` | Gets the value of IncludesSessionRule_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1af22836aa626672d2efa665c100ec462c)`(bool & OutValue) const` | Fills OutValue with the value of IncludesSessionRule_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIncludesSessionRuleOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1ac268b31b7c6ec624d4596fcb1df99163)`()` | Returns a pointer to IncludesSessionRule_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIncludesSessionRuleOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a5fa62c417aea75257767d93c884fe9e6)`() const` | Returns a pointer to IncludesSessionRule_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a4e56a48fcd09ae47beb71927aa5d1215)`(const bool & NewValue)` | Sets the value of IncludesSessionRule_Optional and also sets IncludesSessionRule_IsSet to true.
`public inline void `[`SetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a864b5238fc4f6b3066caf8aab1ebed96)`(bool && NewValue)` | Sets the value of IncludesSessionRule_Optional and also sets IncludesSessionRule_IsSet to true using move semantics.
`public inline void `[`ClearIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1afc0e2ee48c73d470d0715723b42efd0b)`()` | Clears the value of IncludesSessionRule_Optional and sets IncludesSessionRule_IsSet to false.
`public inline bool `[`IsIncludesSessionRuleSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1af0b67de34212a2fceed2d4cde8b6b268)`() const` | Checks whether IncludesSessionRule_Optional has been set.
`public inline bool `[`IsIncludesSessionRuleDefaultValue`](#structFRHAPI__MatchMakingTemplateGroupV2_1a4b7e04b99038b1c7fae4171cceacc1e0)`() const` | Returns true if IncludesSessionRule_Optional is set and matches the default value.
`public inline void `[`SetIncludesSessionRuleToDefault`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1195134b0e1935ca8ff997dd9bc5a3f9)`()` | Sets the value of IncludesSessionRule_Optional to its default and also sets IncludesSessionRule_IsSet to true.

### Members

#### `public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1ab6ac4a6cc076fa58e61f71f0b74c6da2) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ab6ac4a6cc076fa58e61f71f0b74c6da2"></a>

ID for this set of potential matchmaking templates.

#### `public TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > `[`TemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a5f061f6b1728e5e91acbc50c8d0db1cb) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a5f061f6b1728e5e91acbc50c8d0db1cb"></a>

List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.

#### `public TSet< int32 > `[`RequiredItemIds_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a679dffab35167122874604eb826703bd) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a679dffab35167122874604eb826703bd"></a>

DEPRECATED. Set of all the item ids that are required to validate every rule contained in this template group.

#### `public bool `[`RequiredItemIds_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1acf8e308da6fcec42032dd998a15284c3) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1acf8e308da6fcec42032dd998a15284c3"></a>

true if RequiredItemIds_Optional has been set to a value

#### `public bool `[`RequiresAllPlayersItems_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a8488674c91fc3cf5cfe7be4c51b89abb) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a8488674c91fc3cf5cfe7be4c51b89abb"></a>

DEPRECATED. Whether or not the rulesets under this group will require us to query all players inventory, or just the leader's.

#### `public bool `[`RequiresAllPlayersItems_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa1ce654df8e332c2883087f691bd7503) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aa1ce654df8e332c2883087f691bd7503"></a>

true if RequiresAllPlayersItems_Optional has been set to a value

#### `public bool `[`IncludesSessionRule_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a78e546039e5a79103050ebbeabbc8fe2) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a78e546039e5a79103050ebbeabbc8fe2"></a>

DEPRECATED. Whether or not the rulesets under this group will require us to validate session data.

#### `public bool `[`IncludesSessionRule_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1ad85d849ab5f1dd72347a07ce5a706cbe) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ad85d849ab5f1dd72347a07ce5a706cbe"></a>

true if IncludesSessionRule_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1ab2bd4c99d48b826ea841c97880c250a2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ab2bd4c99d48b826ea841c97880c250a2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1a42572b3b37c4cce4a1c6fb35d43a34d7)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a42572b3b37c4cce4a1c6fb35d43a34d7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a8bc2d3a8d4f3c4cd3d8dcb5ec6c9870b)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a8bc2d3a8d4f3c4cd3d8dcb5ec6c9870b"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1afbff4c47332a4de7d35cb484cdad171e)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1afbff4c47332a4de7d35cb484cdad171e"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a094adccf60c562ee00ee715ce110e2f0)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a094adccf60c562ee00ee715ce110e2f0"></a>

Sets the value of MatchMakingTemplateGroupId.

#### `public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a3fec641bccfd13aa3600b515fa4995fa)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a3fec641bccfd13aa3600b515fa4995fa"></a>

Sets the value of MatchMakingTemplateGroupId using move semantics.

#### `public inline TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a9573657142ac3522908128ddaf7f8a8b)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a9573657142ac3522908128ddaf7f8a8b"></a>

Gets the value of TemplateOptions.

#### `public inline const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7d96c94a98824c81f614ef874a162cb4)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a7d96c94a98824c81f614ef874a162cb4"></a>

Gets the value of TemplateOptions.

#### `public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1aabdb7abcf4c672d4fa88ab4a0c5e26a2)`(const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aabdb7abcf4c672d4fa88ab4a0c5e26a2"></a>

Sets the value of TemplateOptions.

#### `public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7eddf34d907c66543aa9dd139d5f137e)`(TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a7eddf34d907c66543aa9dd139d5f137e"></a>

Sets the value of TemplateOptions using move semantics.

#### `public inline TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a0bd9692c6972585e4db3fa597e6563e7)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a0bd9692c6972585e4db3fa597e6563e7"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

#### `public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1ac3ffe6af66eb1fef9d408613665cf256)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ac3ffe6af66eb1fef9d408613665cf256"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

#### `public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a8ea10f0bdf13b3489dbe7f26c6c440f8)`(const TSet< int32 > & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a8ea10f0bdf13b3489dbe7f26c6c440f8"></a>

Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2502c85366c9867bc828b58e75b4771b)`(TSet< int32 > & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2502c85366c9867bc828b58e75b4771b"></a>

Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2247144b37be05b91a6105192c62f68e)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2247144b37be05b91a6105192c62f68e"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a68ddeccc31b7d700d506916a59664d39)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a68ddeccc31b7d700d506916a59664d39"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a6b7152abdcc6bc8f559c78276aaba2c1)`(const TSet< int32 > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a6b7152abdcc6bc8f559c78276aaba2c1"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.

#### `public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1acef58f4a11f6a0c69b8056554918b7cb)`(TSet< int32 > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1acef58f4a11f6a0c69b8056554918b7cb"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055"></a>

Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.

#### `public inline bool `[`IsRequiredItemIdsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1ec1af18752cde6ea5ffb197b32d5427)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a1ec1af18752cde6ea5ffb197b32d5427"></a>

Checks whether RequiredItemIds_Optional has been set.

#### `public inline bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a78e0168d02fa3d7035dfa92148d06f28)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a78e0168d02fa3d7035dfa92148d06f28"></a>

Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a74155a24257a5c7901c80b89d48aaef4)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a74155a24257a5c7901c80b89d48aaef4"></a>

Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a6d534317f8f4d3ee1d5c1d29729d5682)`(const bool & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a6d534317f8f4d3ee1d5c1d29729d5682"></a>

Gets the value of RequiresAllPlayersItems_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1afb54f8bbaf6febe4dac50a375ffeb4a1)`(bool & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1afb54f8bbaf6febe4dac50a375ffeb4a1"></a>

Fills OutValue with the value of RequiresAllPlayersItems_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a9b1602d3550a9b10962ad86468c7eb75)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a9b1602d3550a9b10962ad86468c7eb75"></a>

Returns a pointer to RequiresAllPlayersItems_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1ae7d13ebfbcb9790521405b5ae74eee44)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ae7d13ebfbcb9790521405b5ae74eee44"></a>

Returns a pointer to RequiresAllPlayersItems_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a113333608a253de1488967459a319592)`(const bool & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a113333608a253de1488967459a319592"></a>

Sets the value of RequiresAllPlayersItems_Optional and also sets RequiresAllPlayersItems_IsSet to true.

#### `public inline void `[`SetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1c6c9ddc6263db8933ed72fa52af18b6)`(bool && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a1c6c9ddc6263db8933ed72fa52af18b6"></a>

Sets the value of RequiresAllPlayersItems_Optional and also sets RequiresAllPlayersItems_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a438d6d46a18dafa5a98aa7494af4d712)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a438d6d46a18dafa5a98aa7494af4d712"></a>

Clears the value of RequiresAllPlayersItems_Optional and sets RequiresAllPlayersItems_IsSet to false.

#### `public inline bool `[`IsRequiresAllPlayersItemsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1a442668f810897c3c52da93a512bb3335)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a442668f810897c3c52da93a512bb3335"></a>

Checks whether RequiresAllPlayersItems_Optional has been set.

#### `public inline bool `[`IsRequiresAllPlayersItemsDefaultValue`](#structFRHAPI__MatchMakingTemplateGroupV2_1a630b53fea6154b63951c162e05197d59)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a630b53fea6154b63951c162e05197d59"></a>

Returns true if RequiresAllPlayersItems_Optional is set and matches the default value.

#### `public inline void `[`SetRequiresAllPlayersItemsToDefault`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7a3a20244efffa3ce670adcbd1cce5a7)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a7a3a20244efffa3ce670adcbd1cce5a7"></a>

Sets the value of RequiresAllPlayersItems_Optional to its default and also sets RequiresAllPlayersItems_IsSet to true.

#### `public inline bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1ac1f99f2a6ec3116f370f69d1dd36311e)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ac1f99f2a6ec3116f370f69d1dd36311e"></a>

Gets the value of IncludesSessionRule_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a24a6ca33a84befec21d471e9051125df)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a24a6ca33a84befec21d471e9051125df"></a>

Gets the value of IncludesSessionRule_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a97bbc518f43a19d2a9aef946ed3340b3)`(const bool & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a97bbc518f43a19d2a9aef946ed3340b3"></a>

Gets the value of IncludesSessionRule_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1af22836aa626672d2efa665c100ec462c)`(bool & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1af22836aa626672d2efa665c100ec462c"></a>

Fills OutValue with the value of IncludesSessionRule_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetIncludesSessionRuleOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1ac268b31b7c6ec624d4596fcb1df99163)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ac268b31b7c6ec624d4596fcb1df99163"></a>

Returns a pointer to IncludesSessionRule_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetIncludesSessionRuleOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a5fa62c417aea75257767d93c884fe9e6)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a5fa62c417aea75257767d93c884fe9e6"></a>

Returns a pointer to IncludesSessionRule_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a4e56a48fcd09ae47beb71927aa5d1215)`(const bool & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a4e56a48fcd09ae47beb71927aa5d1215"></a>

Sets the value of IncludesSessionRule_Optional and also sets IncludesSessionRule_IsSet to true.

#### `public inline void `[`SetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a864b5238fc4f6b3066caf8aab1ebed96)`(bool && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a864b5238fc4f6b3066caf8aab1ebed96"></a>

Sets the value of IncludesSessionRule_Optional and also sets IncludesSessionRule_IsSet to true using move semantics.

#### `public inline void `[`ClearIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1afc0e2ee48c73d470d0715723b42efd0b)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1afc0e2ee48c73d470d0715723b42efd0b"></a>

Clears the value of IncludesSessionRule_Optional and sets IncludesSessionRule_IsSet to false.

#### `public inline bool `[`IsIncludesSessionRuleSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1af0b67de34212a2fceed2d4cde8b6b268)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1af0b67de34212a2fceed2d4cde8b6b268"></a>

Checks whether IncludesSessionRule_Optional has been set.

#### `public inline bool `[`IsIncludesSessionRuleDefaultValue`](#structFRHAPI__MatchMakingTemplateGroupV2_1a4b7e04b99038b1c7fae4171cceacc1e0)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a4b7e04b99038b1c7fae4171cceacc1e0"></a>

Returns true if IncludesSessionRule_Optional is set and matches the default value.

#### `public inline void `[`SetIncludesSessionRuleToDefault`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1195134b0e1935ca8ff997dd9bc5a3f9)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a1195134b0e1935ca8ff997dd9bc5a3f9"></a>

Sets the value of IncludesSessionRule_Optional to its default and also sets IncludesSessionRule_IsSet to true.

