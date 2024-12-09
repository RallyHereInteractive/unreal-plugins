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
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankUpdateRequest_1ad74f32dc185868248c493327b08ea8d8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1ad1cf60fa86e710efd0b046dada4e3c59)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a21010161b9f74a09a0f1ffc0eb05560f)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1abaf0629c5e89f214428157d2cb7e4ea3)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a77bd2cd58b54b0336faf0bf98e422658)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1a5842aca4a8311ee0ca42163ccf7b38ea)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1afbc936802367071d0637ea2a76874862)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a03ed7f7b0de9b8e1ce69672d4670ae15)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a5219e673e683e99e7e55b4fb8fd73679)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a6ed6ba4c13c1d481737f6ad718caa77b)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerRankUpdateRequest_1a1210ea3e178567d426909af46620ce01)`() const` | Checks whether InstanceId_Optional has been set.
`public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a533df68b0ae653e7f025493e687ca4cd)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a5464b9717b7bb91f96c212bef3c9bd81)`() const` | Gets the value of Rank.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankUpdateRequest_1ad74f32dc185868248c493327b08ea8d8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerRankUpdateRequest_1ad74f32dc185868248c493327b08ea8d8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1ad1cf60fa86e710efd0b046dada4e3c59)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1ad1cf60fa86e710efd0b046dada4e3c59"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a21010161b9f74a09a0f1ffc0eb05560f)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a21010161b9f74a09a0f1ffc0eb05560f"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1abaf0629c5e89f214428157d2cb7e4ea3)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerRankUpdateRequest_1abaf0629c5e89f214428157d2cb7e4ea3"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a77bd2cd58b54b0336faf0bf98e422658)`(FString & OutValue) const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a77bd2cd58b54b0336faf0bf98e422658"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1a5842aca4a8311ee0ca42163ccf7b38ea)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1a5842aca4a8311ee0ca42163ccf7b38ea"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1afbc936802367071d0637ea2a76874862)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1afbc936802367071d0637ea2a76874862"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a03ed7f7b0de9b8e1ce69672d4670ae15)`(const FString & NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1a03ed7f7b0de9b8e1ce69672d4670ae15"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a5219e673e683e99e7e55b4fb8fd73679)`(FString && NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1a5219e673e683e99e7e55b4fb8fd73679"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a6ed6ba4c13c1d481737f6ad718caa77b)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1a6ed6ba4c13c1d481737f6ad718caa77b"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerRankUpdateRequest_1a1210ea3e178567d426909af46620ce01)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a1210ea3e178567d426909af46620ce01"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a533df68b0ae653e7f025493e687ca4cd)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1a533df68b0ae653e7f025493e687ca4cd"></a>

Gets the value of Rank.

#### `public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a5464b9717b7bb91f96c212bef3c9bd81)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a5464b9717b7bb91f96c212bef3c9bd81"></a>

Gets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1aee6f884e97ead068c7169ae0a607a4e7)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1aee6f884e97ead068c7169ae0a607a4e7"></a>

Sets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1aa1f1762fe3c10a4597dd006313300165)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1aa1f1762fe3c10a4597dd006313300165"></a>

Sets the value of Rank using move semantics.

