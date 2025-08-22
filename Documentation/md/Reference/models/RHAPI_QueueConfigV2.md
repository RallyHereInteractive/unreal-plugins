---
title: RHAPI_QueueConfigV2
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_QueueConfigV2`](#structFRHAPI__QueueConfigV2) | V2 Configuration about a specific queue.

## struct `FRHAPI_QueueConfigV2` <a id="structFRHAPI__QueueConfigV2"></a>

```
struct FRHAPI_QueueConfigV2
  : public FRHAPI_Model
```

V2 Configuration about a specific queue.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`QueueId`](#structFRHAPI__QueueConfigV2_1a8b7df88e8e7e78f9829f996390f23c0c) | ID to uniquely identify this queue.
`public bool `[`Active`](#structFRHAPI__QueueConfigV2_1ac1f81b437fcc3cde8dee5c8e2493d592) | Flag for whether or not the queue is active, and can be joined or sessions created from it.
`public int32 `[`MaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab9652b284e9f5428cbbb2ea1a908224d) | The maximum size of a group that can join this queue.
`public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a0be73f8340379fb7cad237a4cf682a2b) | ID for which group of matchmaking templates/rules will be used when joining this queue.
`public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__QueueConfigV2_1a68defea48ff0db94ca1a0d1c28250829) | Legacy config to help migrate clients.
`public bool `[`LegacyConfig_IsSet`](#structFRHAPI__QueueConfigV2_1aac347be9c34c03117f2c1344f07ca866) | true if LegacyConfig_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__QueueConfigV2_1a5420042c67c41721cc92042d7f677b04)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__QueueConfigV2_1a98c3be1541f7ec9148a14eb84e888222)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1a10c2bcc4ce345b40312dbec3eb2c7c28)`()` | Gets the value of QueueId.
`public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1a648844382f7c0eab3874869eaea4c478)`() const` | Gets the value of QueueId.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueConfigV2_1a348cb2b79a70ddbe08edb93c04e3a2eb)`(const FString & NewValue)` | Sets the value of QueueId.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueConfigV2_1aede7f0ab1283a4a66a615bda37555ea8)`(FString && NewValue)` | Sets the value of QueueId using move semantics.
`public inline FORCEINLINE bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1a91ab89cdf924b429d9f933880d818af2)`()` | Gets the value of Active.
`public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1a7b80a37140fb3c02f14ce2b668800ead)`() const` | Gets the value of Active.
`public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__QueueConfigV2_1a7b5f725ffd88ad94dc57e5bd135f2e52)`(const bool & NewValue)` | Sets the value of Active.
`public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__QueueConfigV2_1afe3e4834073dd7ead058f7bdef61829f)`(bool && NewValue)` | Sets the value of Active using move semantics.
`public inline FORCEINLINE bool `[`GetDefaultValue_Active`](#structFRHAPI__QueueConfigV2_1a537d8b1e7a405a4d6fb8c995c7ae4e4f)`()` | Returns the default value of Active.
`public inline FORCEINLINE int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1a692a45a5f01c94f4c02121c48b796509)`()` | Gets the value of MaxQueueGroupSize.
`public inline FORCEINLINE const int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ac9b32acf5a4891b14649a78d38b876ce)`() const` | Gets the value of MaxQueueGroupSize.
`public inline FORCEINLINE void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1acedfa374f478741baca79c57e778c537)`(const int32 & NewValue)` | Sets the value of MaxQueueGroupSize.
`public inline FORCEINLINE void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ac02bb6e65b5a46dcaec3fb092d3fc0a5)`(int32 && NewValue)` | Sets the value of MaxQueueGroupSize using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1a5788663fe16340bd0e41525877e64a12)`()` | Returns the default value of MaxQueueGroupSize.
`public inline FORCEINLINE FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a68bf7ef27cb149b8a89ed8bd814e7db4)`()` | Gets the value of MatchMakingTemplateGroupId.
`public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a4f270d88ee6532ff0685dea24821e8d0)`() const` | Gets the value of MatchMakingTemplateGroupId.
`public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a400a1f78952552f6423fef00ad8d4352)`(const FGuid & NewValue)` | Sets the value of MatchMakingTemplateGroupId.
`public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a6118fc886d8062f7e271e9e791d43540)`(FGuid && NewValue)` | Sets the value of MatchMakingTemplateGroupId using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a93e1ce5519b9f228c392c532be386759)`()` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a6e57fad7e7bb8b260487832880df9bea)`() const` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a1a4a8c93c39ef38565e01bfcf4ccabf7)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1ab29fcf55c4a3d6693e832bef781d61c4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1ad66e85481c8f0d7b8d67047870fed299)`()` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1a05b3feddf84bf3fa045a8ad6edc47f4f)`() const` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a8d3431920d7cbdb353562f30a73eca01)`(const TMap< FString, FString > & NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a92c65b00e12a172ad949cecec0def39b)`(TMap< FString, FString > && NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.
`public inline void `[`ClearLegacyConfig`](#structFRHAPI__QueueConfigV2_1a704de45777e119ee8c297892b3bfdc32)`()` | Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

### Members

#### `public FString `[`QueueId`](#structFRHAPI__QueueConfigV2_1a8b7df88e8e7e78f9829f996390f23c0c) <a id="structFRHAPI__QueueConfigV2_1a8b7df88e8e7e78f9829f996390f23c0c"></a>

ID to uniquely identify this queue.

#### `public bool `[`Active`](#structFRHAPI__QueueConfigV2_1ac1f81b437fcc3cde8dee5c8e2493d592) <a id="structFRHAPI__QueueConfigV2_1ac1f81b437fcc3cde8dee5c8e2493d592"></a>

Flag for whether or not the queue is active, and can be joined or sessions created from it.

#### `public int32 `[`MaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab9652b284e9f5428cbbb2ea1a908224d) <a id="structFRHAPI__QueueConfigV2_1ab9652b284e9f5428cbbb2ea1a908224d"></a>

The maximum size of a group that can join this queue.

#### `public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a0be73f8340379fb7cad237a4cf682a2b) <a id="structFRHAPI__QueueConfigV2_1a0be73f8340379fb7cad237a4cf682a2b"></a>

ID for which group of matchmaking templates/rules will be used when joining this queue.

#### `public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__QueueConfigV2_1a68defea48ff0db94ca1a0d1c28250829) <a id="structFRHAPI__QueueConfigV2_1a68defea48ff0db94ca1a0d1c28250829"></a>

Legacy config to help migrate clients.

#### `public bool `[`LegacyConfig_IsSet`](#structFRHAPI__QueueConfigV2_1aac347be9c34c03117f2c1344f07ca866) <a id="structFRHAPI__QueueConfigV2_1aac347be9c34c03117f2c1344f07ca866"></a>

true if LegacyConfig_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__QueueConfigV2_1a5420042c67c41721cc92042d7f677b04)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueueConfigV2_1a5420042c67c41721cc92042d7f677b04"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__QueueConfigV2_1a98c3be1541f7ec9148a14eb84e888222)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__QueueConfigV2_1a98c3be1541f7ec9148a14eb84e888222"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1a10c2bcc4ce345b40312dbec3eb2c7c28)`()` <a id="structFRHAPI__QueueConfigV2_1a10c2bcc4ce345b40312dbec3eb2c7c28"></a>

Gets the value of QueueId.

#### `public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1a648844382f7c0eab3874869eaea4c478)`() const` <a id="structFRHAPI__QueueConfigV2_1a648844382f7c0eab3874869eaea4c478"></a>

Gets the value of QueueId.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueConfigV2_1a348cb2b79a70ddbe08edb93c04e3a2eb)`(const FString & NewValue)` <a id="structFRHAPI__QueueConfigV2_1a348cb2b79a70ddbe08edb93c04e3a2eb"></a>

Sets the value of QueueId.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueConfigV2_1aede7f0ab1283a4a66a615bda37555ea8)`(FString && NewValue)` <a id="structFRHAPI__QueueConfigV2_1aede7f0ab1283a4a66a615bda37555ea8"></a>

Sets the value of QueueId using move semantics.

#### `public inline FORCEINLINE bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1a91ab89cdf924b429d9f933880d818af2)`()` <a id="structFRHAPI__QueueConfigV2_1a91ab89cdf924b429d9f933880d818af2"></a>

Gets the value of Active.

#### `public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1a7b80a37140fb3c02f14ce2b668800ead)`() const` <a id="structFRHAPI__QueueConfigV2_1a7b80a37140fb3c02f14ce2b668800ead"></a>

Gets the value of Active.

#### `public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__QueueConfigV2_1a7b5f725ffd88ad94dc57e5bd135f2e52)`(const bool & NewValue)` <a id="structFRHAPI__QueueConfigV2_1a7b5f725ffd88ad94dc57e5bd135f2e52"></a>

Sets the value of Active.

#### `public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__QueueConfigV2_1afe3e4834073dd7ead058f7bdef61829f)`(bool && NewValue)` <a id="structFRHAPI__QueueConfigV2_1afe3e4834073dd7ead058f7bdef61829f"></a>

Sets the value of Active using move semantics.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Active`](#structFRHAPI__QueueConfigV2_1a537d8b1e7a405a4d6fb8c995c7ae4e4f)`()` <a id="structFRHAPI__QueueConfigV2_1a537d8b1e7a405a4d6fb8c995c7ae4e4f"></a>

Returns the default value of Active.

#### `public inline FORCEINLINE int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1a692a45a5f01c94f4c02121c48b796509)`()` <a id="structFRHAPI__QueueConfigV2_1a692a45a5f01c94f4c02121c48b796509"></a>

Gets the value of MaxQueueGroupSize.

#### `public inline FORCEINLINE const int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ac9b32acf5a4891b14649a78d38b876ce)`() const` <a id="structFRHAPI__QueueConfigV2_1ac9b32acf5a4891b14649a78d38b876ce"></a>

Gets the value of MaxQueueGroupSize.

#### `public inline FORCEINLINE void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1acedfa374f478741baca79c57e778c537)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfigV2_1acedfa374f478741baca79c57e778c537"></a>

Sets the value of MaxQueueGroupSize.

#### `public inline FORCEINLINE void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ac02bb6e65b5a46dcaec3fb092d3fc0a5)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfigV2_1ac02bb6e65b5a46dcaec3fb092d3fc0a5"></a>

Sets the value of MaxQueueGroupSize using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1a5788663fe16340bd0e41525877e64a12)`()` <a id="structFRHAPI__QueueConfigV2_1a5788663fe16340bd0e41525877e64a12"></a>

Returns the default value of MaxQueueGroupSize.

#### `public inline FORCEINLINE FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a68bf7ef27cb149b8a89ed8bd814e7db4)`()` <a id="structFRHAPI__QueueConfigV2_1a68bf7ef27cb149b8a89ed8bd814e7db4"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a4f270d88ee6532ff0685dea24821e8d0)`() const` <a id="structFRHAPI__QueueConfigV2_1a4f270d88ee6532ff0685dea24821e8d0"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a400a1f78952552f6423fef00ad8d4352)`(const FGuid & NewValue)` <a id="structFRHAPI__QueueConfigV2_1a400a1f78952552f6423fef00ad8d4352"></a>

Sets the value of MatchMakingTemplateGroupId.

#### `public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a6118fc886d8062f7e271e9e791d43540)`(FGuid && NewValue)` <a id="structFRHAPI__QueueConfigV2_1a6118fc886d8062f7e271e9e791d43540"></a>

Sets the value of MatchMakingTemplateGroupId using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a93e1ce5519b9f228c392c532be386759)`()` <a id="structFRHAPI__QueueConfigV2_1a93e1ce5519b9f228c392c532be386759"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a6e57fad7e7bb8b260487832880df9bea)`() const` <a id="structFRHAPI__QueueConfigV2_1a6e57fad7e7bb8b260487832880df9bea"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a1a4a8c93c39ef38565e01bfcf4ccabf7)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__QueueConfigV2_1a1a4a8c93c39ef38565e01bfcf4ccabf7"></a>

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1ab29fcf55c4a3d6693e832bef781d61c4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__QueueConfigV2_1ab29fcf55c4a3d6693e832bef781d61c4"></a>

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1ad66e85481c8f0d7b8d67047870fed299)`()` <a id="structFRHAPI__QueueConfigV2_1ad66e85481c8f0d7b8d67047870fed299"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1a05b3feddf84bf3fa045a8ad6edc47f4f)`() const` <a id="structFRHAPI__QueueConfigV2_1a05b3feddf84bf3fa045a8ad6edc47f4f"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a8d3431920d7cbdb353562f30a73eca01)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__QueueConfigV2_1a8d3431920d7cbdb353562f30a73eca01"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a92c65b00e12a172ad949cecec0def39b)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__QueueConfigV2_1a92c65b00e12a172ad949cecec0def39b"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyConfig`](#structFRHAPI__QueueConfigV2_1a704de45777e119ee8c297892b3bfdc32)`()` <a id="structFRHAPI__QueueConfigV2_1a704de45777e119ee8c297892b3bfdc32"></a>

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

