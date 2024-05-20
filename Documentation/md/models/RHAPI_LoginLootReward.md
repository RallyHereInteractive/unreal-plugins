# group `RHAPI_LoginLootReward` <a id="group__RHAPI__LoginLootReward"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LoginLootReward`](#structFRHAPI__LoginLootReward) | Login loot reward.

## struct `FRHAPI_LoginLootReward` <a id="structFRHAPI__LoginLootReward"></a>

```
struct FRHAPI_LoginLootReward
  : public FRHAPI_Model
```

Login loot reward.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`LootId_Optional`](#structFRHAPI__LoginLootReward_1a3c7355b5ae7afadb19fd186467d9b659) | Loot ID.
`public bool `[`LootId_IsSet`](#structFRHAPI__LoginLootReward_1a505db80f34984d397003439ac4ef9ea1) | true if LootId_Optional has been set to a value
`public int32 `[`LegacyLootId`](#structFRHAPI__LoginLootReward_1a7ab376e7657f818e5d5abf6d6558b23c) | Legacy Loot ID.
`public virtual bool `[`FromJson`](#structFRHAPI__LoginLootReward_1acf6772e1819ef8d6678e94e9272a488d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LoginLootReward_1af3e59016910e6e47542c6ebd0e2ef028)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1a393aa7d31c39cd5b4a22ac94560ac52f)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1a53b7d6a8c4949adddd7f3287f82438dd)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1aa0c901d4df484781f626338ebe88c46d)`(const FString & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__LoginLootReward_1ae54a4264625caecbbd21b37fc250de4b)`(FString & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1ab4136af638ea92997191da0d5bf0ab35)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1ac15b233b9f508b3e96d5991fa7bfa2d8)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__LoginLootReward_1aeb8ccf9232c02ed2fd7e948ce389fc05)`(FString NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`ClearLootId`](#structFRHAPI__LoginLootReward_1a599ca6fce01c2ff467e8f87d54826046)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1a23e679876c96adc266d53bbca0e80689)`()` | Gets the value of LegacyLootId.
`public inline const int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1aaca54d418920f8ce674db0687045b798)`() const` | Gets the value of LegacyLootId.
`public inline void `[`SetLegacyLootId`](#structFRHAPI__LoginLootReward_1a09d4578a79ce66b7fd4b2f218614c252)`(int32 NewValue)` | Sets the value of LegacyLootId.
`public inline bool `[`IsLegacyLootIdDefaultValue`](#structFRHAPI__LoginLootReward_1a99d9388054b1d602c2ef9bcd3d622bc1)`() const` | Returns true if LegacyLootId matches the default value.
`public inline void `[`SetLegacyLootIdToDefault`](#structFRHAPI__LoginLootReward_1a40a3b736b38673701743f9da9423f553)`()` | Sets the value of LegacyLootId to its default

### Members

#### `public FString `[`LootId_Optional`](#structFRHAPI__LoginLootReward_1a3c7355b5ae7afadb19fd186467d9b659) <a id="structFRHAPI__LoginLootReward_1a3c7355b5ae7afadb19fd186467d9b659"></a>

Loot ID.

#### `public bool `[`LootId_IsSet`](#structFRHAPI__LoginLootReward_1a505db80f34984d397003439ac4ef9ea1) <a id="structFRHAPI__LoginLootReward_1a505db80f34984d397003439ac4ef9ea1"></a>

true if LootId_Optional has been set to a value

#### `public int32 `[`LegacyLootId`](#structFRHAPI__LoginLootReward_1a7ab376e7657f818e5d5abf6d6558b23c) <a id="structFRHAPI__LoginLootReward_1a7ab376e7657f818e5d5abf6d6558b23c"></a>

Legacy Loot ID.

#### `public virtual bool `[`FromJson`](#structFRHAPI__LoginLootReward_1acf6772e1819ef8d6678e94e9272a488d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LoginLootReward_1acf6772e1819ef8d6678e94e9272a488d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LoginLootReward_1af3e59016910e6e47542c6ebd0e2ef028)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LoginLootReward_1af3e59016910e6e47542c6ebd0e2ef028"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1a393aa7d31c39cd5b4a22ac94560ac52f)`()` <a id="structFRHAPI__LoginLootReward_1a393aa7d31c39cd5b4a22ac94560ac52f"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1a53b7d6a8c4949adddd7f3287f82438dd)`() const` <a id="structFRHAPI__LoginLootReward_1a53b7d6a8c4949adddd7f3287f82438dd"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1aa0c901d4df484781f626338ebe88c46d)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginLootReward_1aa0c901d4df484781f626338ebe88c46d"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootId`](#structFRHAPI__LoginLootReward_1ae54a4264625caecbbd21b37fc250de4b)`(FString & OutValue) const` <a id="structFRHAPI__LoginLootReward_1ae54a4264625caecbbd21b37fc250de4b"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1ab4136af638ea92997191da0d5bf0ab35)`()` <a id="structFRHAPI__LoginLootReward_1ab4136af638ea92997191da0d5bf0ab35"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1ac15b233b9f508b3e96d5991fa7bfa2d8)`() const` <a id="structFRHAPI__LoginLootReward_1ac15b233b9f508b3e96d5991fa7bfa2d8"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootId`](#structFRHAPI__LoginLootReward_1aeb8ccf9232c02ed2fd7e948ce389fc05)`(FString NewValue)` <a id="structFRHAPI__LoginLootReward_1aeb8ccf9232c02ed2fd7e948ce389fc05"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline void `[`ClearLootId`](#structFRHAPI__LoginLootReward_1a599ca6fce01c2ff467e8f87d54826046)`()` <a id="structFRHAPI__LoginLootReward_1a599ca6fce01c2ff467e8f87d54826046"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1a23e679876c96adc266d53bbca0e80689)`()` <a id="structFRHAPI__LoginLootReward_1a23e679876c96adc266d53bbca0e80689"></a>

Gets the value of LegacyLootId.

#### `public inline const int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1aaca54d418920f8ce674db0687045b798)`() const` <a id="structFRHAPI__LoginLootReward_1aaca54d418920f8ce674db0687045b798"></a>

Gets the value of LegacyLootId.

#### `public inline void `[`SetLegacyLootId`](#structFRHAPI__LoginLootReward_1a09d4578a79ce66b7fd4b2f218614c252)`(int32 NewValue)` <a id="structFRHAPI__LoginLootReward_1a09d4578a79ce66b7fd4b2f218614c252"></a>

Sets the value of LegacyLootId.

#### `public inline bool `[`IsLegacyLootIdDefaultValue`](#structFRHAPI__LoginLootReward_1a99d9388054b1d602c2ef9bcd3d622bc1)`() const` <a id="structFRHAPI__LoginLootReward_1a99d9388054b1d602c2ef9bcd3d622bc1"></a>

Returns true if LegacyLootId matches the default value.

#### `public inline void `[`SetLegacyLootIdToDefault`](#structFRHAPI__LoginLootReward_1a40a3b736b38673701743f9da9423f553)`()` <a id="structFRHAPI__LoginLootReward_1a40a3b736b38673701743f9da9423f553"></a>

Sets the value of LegacyLootId to its default

