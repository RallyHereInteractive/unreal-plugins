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
`public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__PlayerRankUpdateRequest_1a2bc65f5b21cbd31a5aa56cb3ad11381b) | Current rank info about player.
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
`public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1adcf57f5bc660d6e33c228e92031b2d6d)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1aea27448b12b90f63f81a75da57a130bb)`() const` | Gets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a91d5b36a848c936d08c5482b9e5d72ae)`(const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & NewValue)` | Sets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a07ee64def7b9b07ad5e87cdfc1947997)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` && NewValue)` | Sets the value of Rank using move semantics.

### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerRankUpdateRequest_1af38fcda3794f6b94dd00fba499d1360b) <a id="structFRHAPI__PlayerRankUpdateRequest_1af38fcda3794f6b94dd00fba499d1360b"></a>

ID for the instance the match took place on.

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerRankUpdateRequest_1a40d06b2cf100c0b0b2e47ad7d7853b68) <a id="structFRHAPI__PlayerRankUpdateRequest_1a40d06b2cf100c0b0b2e47ad7d7853b68"></a>

true if InstanceId_Optional has been set to a value

#### `public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__PlayerRankUpdateRequest_1a2bc65f5b21cbd31a5aa56cb3ad11381b) <a id="structFRHAPI__PlayerRankUpdateRequest_1a2bc65f5b21cbd31a5aa56cb3ad11381b"></a>

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

#### `public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1adcf57f5bc660d6e33c228e92031b2d6d)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1adcf57f5bc660d6e33c228e92031b2d6d"></a>

Gets the value of Rank.

#### `public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1aea27448b12b90f63f81a75da57a130bb)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1aea27448b12b90f63f81a75da57a130bb"></a>

Gets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a91d5b36a848c936d08c5482b9e5d72ae)`(const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1a91d5b36a848c936d08c5482b9e5d72ae"></a>

Sets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a07ee64def7b9b07ad5e87cdfc1947997)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` && NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1a07ee64def7b9b07ad5e87cdfc1947997"></a>

Sets the value of Rank using move semantics.

