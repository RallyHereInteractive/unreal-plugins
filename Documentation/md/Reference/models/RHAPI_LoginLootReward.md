---
title: RHAPI_LoginLootReward
---

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
`public virtual bool `[`FromJson`](#structFRHAPI__LoginLootReward_1a111983aef9ed55934b367e0a217ab245)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LoginLootReward_1a8fd1abcf8588b29eec7e86468394be27)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1aa5d55737ab6b498e5d169037cfda1461)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1aba9c55822961cfcb9d51012134bbc882)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1ab449c0724065e4d306da2fb1c84e2153)`(const FString & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__LoginLootReward_1ae54a4264625caecbbd21b37fc250de4b)`(FString & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1afa2cd897d26cdddc1599b99a208ec343)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1a0f489d34a5f682ecff22c41dac99b46d)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__LoginLootReward_1a2c74628775622824442d43b14a8323e0)`(const FString & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`SetLootId`](#structFRHAPI__LoginLootReward_1a31799f251da9efc5e249bbdc584ad7f7)`(FString && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__LoginLootReward_1a599ca6fce01c2ff467e8f87d54826046)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline bool `[`IsLootIdSet`](#structFRHAPI__LoginLootReward_1ac48dde4cbe606123df68fc4de4856d00)`() const` | Checks whether LootId_Optional has been set.
`public inline int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1ae302870e9caa9105031467adc8bae8ff)`()` | Gets the value of LegacyLootId.
`public inline const int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1ae2d9341eb57cef97116fe3e540b77618)`() const` | Gets the value of LegacyLootId.
`public inline void `[`SetLegacyLootId`](#structFRHAPI__LoginLootReward_1ac149a32f1007e60a1387fbd375bd20ef)`(const int32 & NewValue)` | Sets the value of LegacyLootId.
`public inline void `[`SetLegacyLootId`](#structFRHAPI__LoginLootReward_1a9d14468d66edf9e5f6b072184f47ac41)`(int32 && NewValue)` | Sets the value of LegacyLootId using move semantics.
`public inline bool `[`IsLegacyLootIdDefaultValue`](#structFRHAPI__LoginLootReward_1a99d9388054b1d602c2ef9bcd3d622bc1)`() const` | Returns true if LegacyLootId matches the default value.
`public inline void `[`SetLegacyLootIdToDefault`](#structFRHAPI__LoginLootReward_1a40a3b736b38673701743f9da9423f553)`()` | Sets the value of LegacyLootId to its default

### Members

#### `public FString `[`LootId_Optional`](#structFRHAPI__LoginLootReward_1a3c7355b5ae7afadb19fd186467d9b659) <a id="structFRHAPI__LoginLootReward_1a3c7355b5ae7afadb19fd186467d9b659"></a>

Loot ID.

#### `public bool `[`LootId_IsSet`](#structFRHAPI__LoginLootReward_1a505db80f34984d397003439ac4ef9ea1) <a id="structFRHAPI__LoginLootReward_1a505db80f34984d397003439ac4ef9ea1"></a>

true if LootId_Optional has been set to a value

#### `public int32 `[`LegacyLootId`](#structFRHAPI__LoginLootReward_1a7ab376e7657f818e5d5abf6d6558b23c) <a id="structFRHAPI__LoginLootReward_1a7ab376e7657f818e5d5abf6d6558b23c"></a>

Legacy Loot ID.

#### `public virtual bool `[`FromJson`](#structFRHAPI__LoginLootReward_1a111983aef9ed55934b367e0a217ab245)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LoginLootReward_1a111983aef9ed55934b367e0a217ab245"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LoginLootReward_1a8fd1abcf8588b29eec7e86468394be27)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LoginLootReward_1a8fd1abcf8588b29eec7e86468394be27"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1aa5d55737ab6b498e5d169037cfda1461)`()` <a id="structFRHAPI__LoginLootReward_1aa5d55737ab6b498e5d169037cfda1461"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1aba9c55822961cfcb9d51012134bbc882)`() const` <a id="structFRHAPI__LoginLootReward_1aba9c55822961cfcb9d51012134bbc882"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1ab449c0724065e4d306da2fb1c84e2153)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginLootReward_1ab449c0724065e4d306da2fb1c84e2153"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootId`](#structFRHAPI__LoginLootReward_1ae54a4264625caecbbd21b37fc250de4b)`(FString & OutValue) const` <a id="structFRHAPI__LoginLootReward_1ae54a4264625caecbbd21b37fc250de4b"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1afa2cd897d26cdddc1599b99a208ec343)`()` <a id="structFRHAPI__LoginLootReward_1afa2cd897d26cdddc1599b99a208ec343"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1a0f489d34a5f682ecff22c41dac99b46d)`() const` <a id="structFRHAPI__LoginLootReward_1a0f489d34a5f682ecff22c41dac99b46d"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootId`](#structFRHAPI__LoginLootReward_1a2c74628775622824442d43b14a8323e0)`(const FString & NewValue)` <a id="structFRHAPI__LoginLootReward_1a2c74628775622824442d43b14a8323e0"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootId`](#structFRHAPI__LoginLootReward_1a31799f251da9efc5e249bbdc584ad7f7)`(FString && NewValue)` <a id="structFRHAPI__LoginLootReward_1a31799f251da9efc5e249bbdc584ad7f7"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__LoginLootReward_1a599ca6fce01c2ff467e8f87d54826046)`()` <a id="structFRHAPI__LoginLootReward_1a599ca6fce01c2ff467e8f87d54826046"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline bool `[`IsLootIdSet`](#structFRHAPI__LoginLootReward_1ac48dde4cbe606123df68fc4de4856d00)`() const` <a id="structFRHAPI__LoginLootReward_1ac48dde4cbe606123df68fc4de4856d00"></a>

Checks whether LootId_Optional has been set.

#### `public inline int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1ae302870e9caa9105031467adc8bae8ff)`()` <a id="structFRHAPI__LoginLootReward_1ae302870e9caa9105031467adc8bae8ff"></a>

Gets the value of LegacyLootId.

#### `public inline const int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1ae2d9341eb57cef97116fe3e540b77618)`() const` <a id="structFRHAPI__LoginLootReward_1ae2d9341eb57cef97116fe3e540b77618"></a>

Gets the value of LegacyLootId.

#### `public inline void `[`SetLegacyLootId`](#structFRHAPI__LoginLootReward_1ac149a32f1007e60a1387fbd375bd20ef)`(const int32 & NewValue)` <a id="structFRHAPI__LoginLootReward_1ac149a32f1007e60a1387fbd375bd20ef"></a>

Sets the value of LegacyLootId.

#### `public inline void `[`SetLegacyLootId`](#structFRHAPI__LoginLootReward_1a9d14468d66edf9e5f6b072184f47ac41)`(int32 && NewValue)` <a id="structFRHAPI__LoginLootReward_1a9d14468d66edf9e5f6b072184f47ac41"></a>

Sets the value of LegacyLootId using move semantics.

#### `public inline bool `[`IsLegacyLootIdDefaultValue`](#structFRHAPI__LoginLootReward_1a99d9388054b1d602c2ef9bcd3d622bc1)`() const` <a id="structFRHAPI__LoginLootReward_1a99d9388054b1d602c2ef9bcd3d622bc1"></a>

Returns true if LegacyLootId matches the default value.

#### `public inline void `[`SetLegacyLootIdToDefault`](#structFRHAPI__LoginLootReward_1a40a3b736b38673701743f9da9423f553)`()` <a id="structFRHAPI__LoginLootReward_1a40a3b736b38673701743f9da9423f553"></a>

Sets the value of LegacyLootId to its default

