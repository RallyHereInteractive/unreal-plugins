---
title: RHAPI_PlayerRankUpdateRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankUpdateRequest`](#structFRHAPI__PlayerRankUpdateRequest) | Request body to update generic rank data.

## struct `FRHAPI_PlayerRankUpdateRequest` <a id="structFRHAPI__PlayerRankUpdateRequest"></a>

```
struct FRHAPI_PlayerRankUpdateRequest
  : public FRHAPI_Model
```

Request body to update generic rank data.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerRankUpdateRequest_1af38fcda3794f6b94dd00fba499d1360b) | ID for the instance the match took place on.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerRankUpdateRequest_1a40d06b2cf100c0b0b2e47ad7d7853b68) | true if InstanceId_Optional has been set to a value
`public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__PlayerRankUpdateRequest_1a1f30d3e8c798aa12df14a5e9ba5ec620) | Current rank info about player.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankUpdateRequest_1abc8a2321b107727ec602620d5853cc9b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankUpdateRequest_1a895fdae115305a44b2754b6dba463b66)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1af596c88e505317d5634ae885d0f19fc1)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a9f502faae51cc8bb65095e0a9907840a)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a9b8c712ff7b8966e1a9a0ac99eee703c)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a77bd2cd58b54b0336faf0bf98e422658)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1a084537f27ac0c6fe6fc18dbfdcfade1b)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1ab373471f9581f2872e41f1cd35b1a5e7)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a03ed7f7b0de9b8e1ce69672d4670ae15)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a5219e673e683e99e7e55b4fb8fd73679)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a6ed6ba4c13c1d481737f6ad718caa77b)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerRankUpdateRequest_1a1210ea3e178567d426909af46620ce01)`() const` | Checks whether InstanceId_Optional has been set.
`public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a0c9dc694afa66fb8fa3ff9aee5356127)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a03fa577f6653a08ffe3770fb62d3e66a)`() const` | Gets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1aee6f884e97ead068c7169ae0a607a4e7)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` | Sets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1aa1f1762fe3c10a4597dd006313300165)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` | Sets the value of Rank using move semantics.

### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerRankUpdateRequest_1af38fcda3794f6b94dd00fba499d1360b) <a id="structFRHAPI__PlayerRankUpdateRequest_1af38fcda3794f6b94dd00fba499d1360b"></a>

ID for the instance the match took place on.

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerRankUpdateRequest_1a40d06b2cf100c0b0b2e47ad7d7853b68) <a id="structFRHAPI__PlayerRankUpdateRequest_1a40d06b2cf100c0b0b2e47ad7d7853b68"></a>

true if InstanceId_Optional has been set to a value

#### `public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__PlayerRankUpdateRequest_1a1f30d3e8c798aa12df14a5e9ba5ec620) <a id="structFRHAPI__PlayerRankUpdateRequest_1a1f30d3e8c798aa12df14a5e9ba5ec620"></a>

Current rank info about player.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankUpdateRequest_1abc8a2321b107727ec602620d5853cc9b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1abc8a2321b107727ec602620d5853cc9b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankUpdateRequest_1a895fdae115305a44b2754b6dba463b66)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a895fdae115305a44b2754b6dba463b66"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1af596c88e505317d5634ae885d0f19fc1)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1af596c88e505317d5634ae885d0f19fc1"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a9f502faae51cc8bb65095e0a9907840a)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a9f502faae51cc8bb65095e0a9907840a"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a9b8c712ff7b8966e1a9a0ac99eee703c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a9b8c712ff7b8966e1a9a0ac99eee703c"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a77bd2cd58b54b0336faf0bf98e422658)`(FString & OutValue) const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a77bd2cd58b54b0336faf0bf98e422658"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1a084537f27ac0c6fe6fc18dbfdcfade1b)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1a084537f27ac0c6fe6fc18dbfdcfade1b"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1ab373471f9581f2872e41f1cd35b1a5e7)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1ab373471f9581f2872e41f1cd35b1a5e7"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a03ed7f7b0de9b8e1ce69672d4670ae15)`(const FString & NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1a03ed7f7b0de9b8e1ce69672d4670ae15"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a5219e673e683e99e7e55b4fb8fd73679)`(FString && NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1a5219e673e683e99e7e55b4fb8fd73679"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a6ed6ba4c13c1d481737f6ad718caa77b)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1a6ed6ba4c13c1d481737f6ad718caa77b"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerRankUpdateRequest_1a1210ea3e178567d426909af46620ce01)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a1210ea3e178567d426909af46620ce01"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a0c9dc694afa66fb8fa3ff9aee5356127)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1a0c9dc694afa66fb8fa3ff9aee5356127"></a>

Gets the value of Rank.

#### `public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a03fa577f6653a08ffe3770fb62d3e66a)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a03fa577f6653a08ffe3770fb62d3e66a"></a>

Gets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1aee6f884e97ead068c7169ae0a607a4e7)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1aee6f884e97ead068c7169ae0a607a4e7"></a>

Sets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1aa1f1762fe3c10a4597dd006313300165)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1aa1f1762fe3c10a4597dd006313300165"></a>

Sets the value of Rank using move semantics.

