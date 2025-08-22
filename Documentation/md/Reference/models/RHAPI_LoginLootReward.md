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
`public inline FORCEINLINE FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1adc614155fef3ea009a41a03fff9fbfdf)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1a2fa607481ee54b851bd0a307e24e8e6e)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1a303fadefb6e411edb00c7179a6271c38)`(const FString & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__LoginLootReward_1a06c86c30d4e610b75c7c7955c9c8ff86)`(FString & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1ade5ea82817b3be4599e34799a272f35e)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1a3bfbdc12aed52f6d42afa4b7693a8aad)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__LoginLootReward_1a510b1e2bccab5b3c436dee3e9c20d38d)`(const FString & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__LoginLootReward_1abc0a8d02b6559aefad64e8103a7dae51)`(FString && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__LoginLootReward_1a599ca6fce01c2ff467e8f87d54826046)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1a0a55e4a6085e24b4a92a31085028fd2f)`()` | Gets the value of LegacyLootId.
`public inline FORCEINLINE const int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1a07e34bd06367e27a9943191d0e456cf2)`() const` | Gets the value of LegacyLootId.
`public inline FORCEINLINE void `[`SetLegacyLootId`](#structFRHAPI__LoginLootReward_1ac17f8bd2685543b7a3b9240c6a8e98cb)`(const int32 & NewValue)` | Sets the value of LegacyLootId.
`public inline FORCEINLINE void `[`SetLegacyLootId`](#structFRHAPI__LoginLootReward_1a5aad4903f797dc57f5f87f8a73b8b2bb)`(int32 && NewValue)` | Sets the value of LegacyLootId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyLootId`](#structFRHAPI__LoginLootReward_1a48e6c38f470c42d4552d06233f770f64)`()` | Returns the default value of LegacyLootId.

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

#### `public inline FORCEINLINE FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1adc614155fef3ea009a41a03fff9fbfdf)`()` <a id="structFRHAPI__LoginLootReward_1adc614155fef3ea009a41a03fff9fbfdf"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1a2fa607481ee54b851bd0a307e24e8e6e)`() const` <a id="structFRHAPI__LoginLootReward_1a2fa607481ee54b851bd0a307e24e8e6e"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetLootId`](#structFRHAPI__LoginLootReward_1a303fadefb6e411edb00c7179a6271c38)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginLootReward_1a303fadefb6e411edb00c7179a6271c38"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__LoginLootReward_1a06c86c30d4e610b75c7c7955c9c8ff86)`(FString & OutValue) const` <a id="structFRHAPI__LoginLootReward_1a06c86c30d4e610b75c7c7955c9c8ff86"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1ade5ea82817b3be4599e34799a272f35e)`()` <a id="structFRHAPI__LoginLootReward_1ade5ea82817b3be4599e34799a272f35e"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetLootIdOrNull`](#structFRHAPI__LoginLootReward_1a3bfbdc12aed52f6d42afa4b7693a8aad)`() const` <a id="structFRHAPI__LoginLootReward_1a3bfbdc12aed52f6d42afa4b7693a8aad"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__LoginLootReward_1a510b1e2bccab5b3c436dee3e9c20d38d)`(const FString & NewValue)` <a id="structFRHAPI__LoginLootReward_1a510b1e2bccab5b3c436dee3e9c20d38d"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__LoginLootReward_1abc0a8d02b6559aefad64e8103a7dae51)`(FString && NewValue)` <a id="structFRHAPI__LoginLootReward_1abc0a8d02b6559aefad64e8103a7dae51"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__LoginLootReward_1a599ca6fce01c2ff467e8f87d54826046)`()` <a id="structFRHAPI__LoginLootReward_1a599ca6fce01c2ff467e8f87d54826046"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1a0a55e4a6085e24b4a92a31085028fd2f)`()` <a id="structFRHAPI__LoginLootReward_1a0a55e4a6085e24b4a92a31085028fd2f"></a>

Gets the value of LegacyLootId.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyLootId`](#structFRHAPI__LoginLootReward_1a07e34bd06367e27a9943191d0e456cf2)`() const` <a id="structFRHAPI__LoginLootReward_1a07e34bd06367e27a9943191d0e456cf2"></a>

Gets the value of LegacyLootId.

#### `public inline FORCEINLINE void `[`SetLegacyLootId`](#structFRHAPI__LoginLootReward_1ac17f8bd2685543b7a3b9240c6a8e98cb)`(const int32 & NewValue)` <a id="structFRHAPI__LoginLootReward_1ac17f8bd2685543b7a3b9240c6a8e98cb"></a>

Sets the value of LegacyLootId.

#### `public inline FORCEINLINE void `[`SetLegacyLootId`](#structFRHAPI__LoginLootReward_1a5aad4903f797dc57f5f87f8a73b8b2bb)`(int32 && NewValue)` <a id="structFRHAPI__LoginLootReward_1a5aad4903f797dc57f5f87f8a73b8b2bb"></a>

Sets the value of LegacyLootId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyLootId`](#structFRHAPI__LoginLootReward_1a48e6c38f470c42d4552d06233f770f64)`()` <a id="structFRHAPI__LoginLootReward_1a48e6c38f470c42d4552d06233f770f64"></a>

Returns the default value of LegacyLootId.

