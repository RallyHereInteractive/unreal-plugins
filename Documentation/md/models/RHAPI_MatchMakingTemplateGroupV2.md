# group `RHAPI_MatchMakingTemplateGroupV2` <a id="group__RHAPI__MatchMakingTemplateGroupV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingTemplateGroupV2`](#structFRHAPI__MatchMakingTemplateGroupV2) | A collection of MatchMakingTemplates that may be used when a session enters a queue. The first template that satisfies the necessary rules will be used.

---
title: FRHAPI_MatchMakingTemplateGroupV2
---

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
`public TSet< int32 > `[`RequiredItemIds_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a679dffab35167122874604eb826703bd) | Set of all the item ids that are required to validate every rule contained in this template group.
`public bool `[`RequiredItemIds_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1acf8e308da6fcec42032dd998a15284c3) | true if RequiredItemIds_Optional has been set to a value
`public bool `[`RequiresAllPlayersItems_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a8488674c91fc3cf5cfe7be4c51b89abb) | Whether or not the rulesets under this group will require us to query all players inventory, or just the leader's.
`public bool `[`RequiresAllPlayersItems_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa1ce654df8e332c2883087f691bd7503) | true if RequiresAllPlayersItems_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1ab2bd4c99d48b826ea841c97880c250a2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1a9909abfe12210b32cd90427daa2bd70a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a01e8f3d3b4d2a717e193aed171c0d40c)`()` | Gets the value of MatchMakingTemplateGroupId.
`public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa0748064b7da8fe6a9be9e0d7c02c438)`() const` | Gets the value of MatchMakingTemplateGroupId.
`public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a094adccf60c562ee00ee715ce110e2f0)`(const FGuid & NewValue)` | Sets the value of MatchMakingTemplateGroupId.
`public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a3fec641bccfd13aa3600b515fa4995fa)`(FGuid && NewValue)` | Sets the value of MatchMakingTemplateGroupId using move semantics.
`public inline TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1ae7ac396d71d72df8dfd497619e5b5e16)`()` | Gets the value of TemplateOptions.
`public inline const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a78820cdf045398fec485c4ac12d50316)`() const` | Gets the value of TemplateOptions.
`public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1aabdb7abcf4c672d4fa88ab4a0c5e26a2)`(const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & NewValue)` | Sets the value of TemplateOptions.
`public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7eddf34d907c66543aa9dd139d5f137e)`(TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > && NewValue)` | Sets the value of TemplateOptions using move semantics.
`public inline TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1aae74151bbae2476c5dd9e69b5c8619c2)`()` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1ad7c46a9636d5fd68fae7f62341db2731)`() const` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a29b9c106297cec5cc94f9bf5d4b8c7cd)`(const TSet< int32 > & DefaultValue) const` | Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2502c85366c9867bc828b58e75b4771b)`(TSet< int32 > & OutValue) const` | Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cc6f2377ab9ba029a272d88bb50b483)`()` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a12ee516297ac458faf9eda375bf3e138)`() const` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a6b7152abdcc6bc8f559c78276aaba2c1)`(const TSet< int32 > & NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.
`public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1acef58f4a11f6a0c69b8056554918b7cb)`(TSet< int32 > && NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true using move semantics.
`public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055)`()` | Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.
`public inline bool `[`IsRequiredItemIdsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1ec1af18752cde6ea5ffb197b32d5427)`() const` | Checks whether RequiredItemIds_Optional has been set.
`public inline bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a246a17ce9a4879981499f53ad51a1771)`()` | Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.
`public inline const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a4f412da2a00abe6a487e4ef33188c7d4)`() const` | Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.
`public inline const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a9d78f37c8943b6a8e3e8e7dc32f336be)`(const bool & DefaultValue) const` | Gets the value of RequiresAllPlayersItems_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1afb54f8bbaf6febe4dac50a375ffeb4a1)`(bool & OutValue) const` | Fills OutValue with the value of RequiresAllPlayersItems_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa7c0aab0474f76f170b546bd72fac16f)`()` | Returns a pointer to RequiresAllPlayersItems_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a36ac79bcbf8f0a5f08c494e2d345a9c5)`() const` | Returns a pointer to RequiresAllPlayersItems_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a113333608a253de1488967459a319592)`(const bool & NewValue)` | Sets the value of RequiresAllPlayersItems_Optional and also sets RequiresAllPlayersItems_IsSet to true.
`public inline void `[`SetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1c6c9ddc6263db8933ed72fa52af18b6)`(bool && NewValue)` | Sets the value of RequiresAllPlayersItems_Optional and also sets RequiresAllPlayersItems_IsSet to true using move semantics.
`public inline void `[`ClearRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a438d6d46a18dafa5a98aa7494af4d712)`()` | Clears the value of RequiresAllPlayersItems_Optional and sets RequiresAllPlayersItems_IsSet to false.
`public inline bool `[`IsRequiresAllPlayersItemsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1a442668f810897c3c52da93a512bb3335)`() const` | Checks whether RequiresAllPlayersItems_Optional has been set.
`public inline bool `[`IsRequiresAllPlayersItemsDefaultValue`](#structFRHAPI__MatchMakingTemplateGroupV2_1a630b53fea6154b63951c162e05197d59)`() const` | Returns true if RequiresAllPlayersItems_Optional is set and matches the default value.
`public inline void `[`SetRequiresAllPlayersItemsToDefault`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7a3a20244efffa3ce670adcbd1cce5a7)`()` | Sets the value of RequiresAllPlayersItems_Optional to its default and also sets RequiresAllPlayersItems_IsSet to true.

### Members

#### `public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1ab6ac4a6cc076fa58e61f71f0b74c6da2) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ab6ac4a6cc076fa58e61f71f0b74c6da2"></a>

ID for this set of potential matchmaking templates.

#### `public TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > `[`TemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a5f061f6b1728e5e91acbc50c8d0db1cb) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a5f061f6b1728e5e91acbc50c8d0db1cb"></a>

List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.

#### `public TSet< int32 > `[`RequiredItemIds_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a679dffab35167122874604eb826703bd) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a679dffab35167122874604eb826703bd"></a>

Set of all the item ids that are required to validate every rule contained in this template group.

#### `public bool `[`RequiredItemIds_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1acf8e308da6fcec42032dd998a15284c3) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1acf8e308da6fcec42032dd998a15284c3"></a>

true if RequiredItemIds_Optional has been set to a value

#### `public bool `[`RequiresAllPlayersItems_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a8488674c91fc3cf5cfe7be4c51b89abb) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a8488674c91fc3cf5cfe7be4c51b89abb"></a>

Whether or not the rulesets under this group will require us to query all players inventory, or just the leader's.

#### `public bool `[`RequiresAllPlayersItems_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa1ce654df8e332c2883087f691bd7503) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aa1ce654df8e332c2883087f691bd7503"></a>

true if RequiresAllPlayersItems_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1ab2bd4c99d48b826ea841c97880c250a2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ab2bd4c99d48b826ea841c97880c250a2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1a9909abfe12210b32cd90427daa2bd70a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a9909abfe12210b32cd90427daa2bd70a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a01e8f3d3b4d2a717e193aed171c0d40c)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a01e8f3d3b4d2a717e193aed171c0d40c"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa0748064b7da8fe6a9be9e0d7c02c438)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aa0748064b7da8fe6a9be9e0d7c02c438"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a094adccf60c562ee00ee715ce110e2f0)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a094adccf60c562ee00ee715ce110e2f0"></a>

Sets the value of MatchMakingTemplateGroupId.

#### `public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a3fec641bccfd13aa3600b515fa4995fa)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a3fec641bccfd13aa3600b515fa4995fa"></a>

Sets the value of MatchMakingTemplateGroupId using move semantics.

#### `public inline TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1ae7ac396d71d72df8dfd497619e5b5e16)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ae7ac396d71d72df8dfd497619e5b5e16"></a>

Gets the value of TemplateOptions.

#### `public inline const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a78820cdf045398fec485c4ac12d50316)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a78820cdf045398fec485c4ac12d50316"></a>

Gets the value of TemplateOptions.

#### `public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1aabdb7abcf4c672d4fa88ab4a0c5e26a2)`(const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aabdb7abcf4c672d4fa88ab4a0c5e26a2"></a>

Sets the value of TemplateOptions.

#### `public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a7eddf34d907c66543aa9dd139d5f137e)`(TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a7eddf34d907c66543aa9dd139d5f137e"></a>

Sets the value of TemplateOptions using move semantics.

#### `public inline TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1aae74151bbae2476c5dd9e69b5c8619c2)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aae74151bbae2476c5dd9e69b5c8619c2"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

#### `public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1ad7c46a9636d5fd68fae7f62341db2731)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ad7c46a9636d5fd68fae7f62341db2731"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

#### `public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a29b9c106297cec5cc94f9bf5d4b8c7cd)`(const TSet< int32 > & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a29b9c106297cec5cc94f9bf5d4b8c7cd"></a>

Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2502c85366c9867bc828b58e75b4771b)`(TSet< int32 > & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2502c85366c9867bc828b58e75b4771b"></a>

Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cc6f2377ab9ba029a272d88bb50b483)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2cc6f2377ab9ba029a272d88bb50b483"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a12ee516297ac458faf9eda375bf3e138)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a12ee516297ac458faf9eda375bf3e138"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a6b7152abdcc6bc8f559c78276aaba2c1)`(const TSet< int32 > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a6b7152abdcc6bc8f559c78276aaba2c1"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.

#### `public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1acef58f4a11f6a0c69b8056554918b7cb)`(TSet< int32 > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1acef58f4a11f6a0c69b8056554918b7cb"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055"></a>

Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.

#### `public inline bool `[`IsRequiredItemIdsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1ec1af18752cde6ea5ffb197b32d5427)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a1ec1af18752cde6ea5ffb197b32d5427"></a>

Checks whether RequiredItemIds_Optional has been set.

#### `public inline bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a246a17ce9a4879981499f53ad51a1771)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a246a17ce9a4879981499f53ad51a1771"></a>

Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a4f412da2a00abe6a487e4ef33188c7d4)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a4f412da2a00abe6a487e4ef33188c7d4"></a>

Gets the value of RequiresAllPlayersItems_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1a9d78f37c8943b6a8e3e8e7dc32f336be)`(const bool & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a9d78f37c8943b6a8e3e8e7dc32f336be"></a>

Gets the value of RequiresAllPlayersItems_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRequiresAllPlayersItems`](#structFRHAPI__MatchMakingTemplateGroupV2_1afb54f8bbaf6febe4dac50a375ffeb4a1)`(bool & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1afb54f8bbaf6febe4dac50a375ffeb4a1"></a>

Fills OutValue with the value of RequiresAllPlayersItems_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa7c0aab0474f76f170b546bd72fac16f)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aa7c0aab0474f76f170b546bd72fac16f"></a>

Returns a pointer to RequiresAllPlayersItems_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetRequiresAllPlayersItemsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a36ac79bcbf8f0a5f08c494e2d345a9c5)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a36ac79bcbf8f0a5f08c494e2d345a9c5"></a>

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

