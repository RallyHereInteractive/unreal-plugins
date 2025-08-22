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
`public inline FORCEINLINE FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1acc9141b559df1d0bab879711a6f999c8)`()` | Gets the value of MatchMakingTemplateGroupId.
`public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a04aff27a3f0de3ca9f8c7286cc1ac024)`() const` | Gets the value of MatchMakingTemplateGroupId.
`public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a55799cca5ec95dbfd4c92b8ccbb7c75f)`(const FGuid & NewValue)` | Sets the value of MatchMakingTemplateGroupId.
`public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a4ac09a16c5a44c688dc2360a35c19985)`(FGuid && NewValue)` | Sets the value of MatchMakingTemplateGroupId using move semantics.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1ae9aee2f88d31a57c24662d3cb4157e4a)`()` | Gets the value of TemplateOptions.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1ad6048f15451018c9e7c55d9c0e6d1e98)`() const` | Gets the value of TemplateOptions.
`public inline FORCEINLINE void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1ade5d707ac3efa7bae8e579815bb44f05)`(const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & NewValue)` | Sets the value of TemplateOptions.
`public inline FORCEINLINE void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a81a9c8c104f1f4bd4369680fe9504d54)`(TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > && NewValue)` | Sets the value of TemplateOptions using move semantics.
`public inline FORCEINLINE TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a4d01755a704f13df6e74660857d6ad51)`()` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa44d397336a9ad0c9e3e4dd39ccbcadf)`() const` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1abcbebdca1509a24429be9503a46bf392)`(const TSet< int32 > & DefaultValue) const` | Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1abe73df1d2d829a379cb87d83e883ac14)`(TSet< int32 > & OutValue) const` | Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a63a7ed0247ba33352482a69d32d8d64a)`()` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a6dc8de9baa636da089aef3e1e5e1afe9)`() const` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1ad7c32e9375597e417db45560416d5890)`(const TSet< int32 > & NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.
`public inline FORCEINLINE void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a792ebf024317a826fb4b375386ee8a52)`(TSet< int32 > && NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true using move semantics.
`public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055)`()` | Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.
`public inline FORCEINLINE bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a08c7fdc59d3051c68b43cdd2757a4274)`()` | Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1c0f56352c942cc5f1d27def5e6749e1)`() const` | Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a242cd5efbab091dd2792d16e6b210cbf)`(const bool & DefaultValue) const` | Gets the value of RequiresAllPlayersItems_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a491bd4269ed33161bdfd687461fce419)`(bool & OutValue) const` | Fills OutValue with the value of RequiresAllPlayersItems_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1aec82ade0a5f8fe9ceb29c80fe58b162d)`()` | Returns a pointer to RequiresAllPlayersItems_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1adbe5354f5c84a48541642cf048021b50)`() const` | Returns a pointer to RequiresAllPlayersItems_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a15c4a3aed06e037c08e21dc6654f2ddb)`(const bool & NewValue)` | Sets the value of RequiresAllPlayersItems_Optional and also sets RequiresAllPlayersItems_IsSet to true.
`public inline FORCEINLINE void `[`SetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1adb9f5762652e775c8f03662293f9926c)`(bool && NewValue)` | Sets the value of RequiresAllPlayersItems_Optional and also sets RequiresAllPlayersItems_IsSet to true using move semantics.
`public inline void `[`ClearRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a438d6d46a18dafa5a98aa7494af4d712)`()` | Clears the value of RequiresAllPlayersItems_Optional and sets RequiresAllPlayersItems_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_RequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1aabd880a1694b4b527b42fe7c19f342a0)`()` | Returns the default value of RequiresAllPlayersItems.
`public inline FORCEINLINE bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1fe412d86967a04c107af9028a30d379)`()` | Gets the value of IncludesSessionRule_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2e5131daba6be9447b0263f6ff737b47)`() const` | Gets the value of IncludesSessionRule_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1aec192da3387a8c52c272179a9ff7e39d)`(const bool & DefaultValue) const` | Gets the value of IncludesSessionRule_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1aaa6f34f7e8c308d5fa387eef2a22fdec)`(bool & OutValue) const` | Fills OutValue with the value of IncludesSessionRule_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetIncludesSessionRuleOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7abb0dcccf987f07ea8c43db5e1925a8)`()` | Returns a pointer to IncludesSessionRule_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetIncludesSessionRuleOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa43161e9ff4504262ace42005814fa11)`() const` | Returns a pointer to IncludesSessionRule_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1af89034b2fdb234d46048d36791fc6b06)`(const bool & NewValue)` | Sets the value of IncludesSessionRule_Optional and also sets IncludesSessionRule_IsSet to true.
`public inline FORCEINLINE void `[`SetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1aba83f5d085d0d776ac5bc281bb6a1735)`(bool && NewValue)` | Sets the value of IncludesSessionRule_Optional and also sets IncludesSessionRule_IsSet to true using move semantics.
`public inline void `[`ClearIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1afc0e2ee48c73d470d0715723b42efd0b)`()` | Clears the value of IncludesSessionRule_Optional and sets IncludesSessionRule_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_IncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7ccdcf32ed0dacabe6a76f76fb44dde0)`()` | Returns the default value of IncludesSessionRule.

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

#### `public inline FORCEINLINE FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1acc9141b559df1d0bab879711a6f999c8)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1acc9141b559df1d0bab879711a6f999c8"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a04aff27a3f0de3ca9f8c7286cc1ac024)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a04aff27a3f0de3ca9f8c7286cc1ac024"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a55799cca5ec95dbfd4c92b8ccbb7c75f)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a55799cca5ec95dbfd4c92b8ccbb7c75f"></a>

Sets the value of MatchMakingTemplateGroupId.

#### `public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a4ac09a16c5a44c688dc2360a35c19985)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a4ac09a16c5a44c688dc2360a35c19985"></a>

Sets the value of MatchMakingTemplateGroupId using move semantics.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1ae9aee2f88d31a57c24662d3cb4157e4a)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ae9aee2f88d31a57c24662d3cb4157e4a"></a>

Gets the value of TemplateOptions.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1ad6048f15451018c9e7c55d9c0e6d1e98)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ad6048f15451018c9e7c55d9c0e6d1e98"></a>

Gets the value of TemplateOptions.

#### `public inline FORCEINLINE void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1ade5d707ac3efa7bae8e579815bb44f05)`(const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ade5d707ac3efa7bae8e579815bb44f05"></a>

Sets the value of TemplateOptions.

#### `public inline FORCEINLINE void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a81a9c8c104f1f4bd4369680fe9504d54)`(TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a81a9c8c104f1f4bd4369680fe9504d54"></a>

Sets the value of TemplateOptions using move semantics.

#### `public inline FORCEINLINE TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a4d01755a704f13df6e74660857d6ad51)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a4d01755a704f13df6e74660857d6ad51"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa44d397336a9ad0c9e3e4dd39ccbcadf)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aa44d397336a9ad0c9e3e4dd39ccbcadf"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1abcbebdca1509a24429be9503a46bf392)`(const TSet< int32 > & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1abcbebdca1509a24429be9503a46bf392"></a>

Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1abe73df1d2d829a379cb87d83e883ac14)`(TSet< int32 > & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1abe73df1d2d829a379cb87d83e883ac14"></a>

Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a63a7ed0247ba33352482a69d32d8d64a)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a63a7ed0247ba33352482a69d32d8d64a"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a6dc8de9baa636da089aef3e1e5e1afe9)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a6dc8de9baa636da089aef3e1e5e1afe9"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1ad7c32e9375597e417db45560416d5890)`(const TSet< int32 > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ad7c32e9375597e417db45560416d5890"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a792ebf024317a826fb4b375386ee8a52)`(TSet< int32 > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a792ebf024317a826fb4b375386ee8a52"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055"></a>

Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a08c7fdc59d3051c68b43cdd2757a4274)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a08c7fdc59d3051c68b43cdd2757a4274"></a>

Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1c0f56352c942cc5f1d27def5e6749e1)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a1c0f56352c942cc5f1d27def5e6749e1"></a>

Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a242cd5efbab091dd2792d16e6b210cbf)`(const bool & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a242cd5efbab091dd2792d16e6b210cbf"></a>

Gets the value of RequiresAllPlayersItems_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a491bd4269ed33161bdfd687461fce419)`(bool & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a491bd4269ed33161bdfd687461fce419"></a>

Fills OutValue with the value of RequiresAllPlayersItems_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1aec82ade0a5f8fe9ceb29c80fe58b162d)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aec82ade0a5f8fe9ceb29c80fe58b162d"></a>

Returns a pointer to RequiresAllPlayersItems_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1adbe5354f5c84a48541642cf048021b50)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1adbe5354f5c84a48541642cf048021b50"></a>

Returns a pointer to RequiresAllPlayersItems_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a15c4a3aed06e037c08e21dc6654f2ddb)`(const bool & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a15c4a3aed06e037c08e21dc6654f2ddb"></a>

Sets the value of RequiresAllPlayersItems_Optional and also sets RequiresAllPlayersItems_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1adb9f5762652e775c8f03662293f9926c)`(bool && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1adb9f5762652e775c8f03662293f9926c"></a>

Sets the value of RequiresAllPlayersItems_Optional and also sets RequiresAllPlayersItems_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a438d6d46a18dafa5a98aa7494af4d712)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a438d6d46a18dafa5a98aa7494af4d712"></a>

Clears the value of RequiresAllPlayersItems_Optional and sets RequiresAllPlayersItems_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_RequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1aabd880a1694b4b527b42fe7c19f342a0)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aabd880a1694b4b527b42fe7c19f342a0"></a>

Returns the default value of RequiresAllPlayersItems.

#### `public inline FORCEINLINE bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1fe412d86967a04c107af9028a30d379)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a1fe412d86967a04c107af9028a30d379"></a>

Gets the value of IncludesSessionRule_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2e5131daba6be9447b0263f6ff737b47)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2e5131daba6be9447b0263f6ff737b47"></a>

Gets the value of IncludesSessionRule_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1aec192da3387a8c52c272179a9ff7e39d)`(const bool & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aec192da3387a8c52c272179a9ff7e39d"></a>

Gets the value of IncludesSessionRule_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1aaa6f34f7e8c308d5fa387eef2a22fdec)`(bool & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aaa6f34f7e8c308d5fa387eef2a22fdec"></a>

Fills OutValue with the value of IncludesSessionRule_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetIncludesSessionRuleOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7abb0dcccf987f07ea8c43db5e1925a8)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a7abb0dcccf987f07ea8c43db5e1925a8"></a>

Returns a pointer to IncludesSessionRule_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetIncludesSessionRuleOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa43161e9ff4504262ace42005814fa11)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aa43161e9ff4504262ace42005814fa11"></a>

Returns a pointer to IncludesSessionRule_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1af89034b2fdb234d46048d36791fc6b06)`(const bool & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1af89034b2fdb234d46048d36791fc6b06"></a>

Sets the value of IncludesSessionRule_Optional and also sets IncludesSessionRule_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1aba83f5d085d0d776ac5bc281bb6a1735)`(bool && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aba83f5d085d0d776ac5bc281bb6a1735"></a>

Sets the value of IncludesSessionRule_Optional and also sets IncludesSessionRule_IsSet to true using move semantics.

#### `public inline void `[`ClearIncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1afc0e2ee48c73d470d0715723b42efd0b)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1afc0e2ee48c73d470d0715723b42efd0b"></a>

Clears the value of IncludesSessionRule_Optional and sets IncludesSessionRule_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_IncludesSessionRule`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7ccdcf32ed0dacabe6a76f76fb44dde0)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a7ccdcf32ed0dacabe6a76f76fb44dde0"></a>

Returns the default value of IncludesSessionRule.

