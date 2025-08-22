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
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1ae6b8b465e48379bef757bb93ba59cfa7)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a009573cf639d4137403a062d8ad4d224)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a3a5d92dd2779387a32c2d4aa6c3e7e69)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a31a3e4e3d09e52f836188607c9732e40)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1a6d55ae903cebe37983d7e87b571d1501)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1a402636b144191d7beb64c37cbd4d0292)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a7d971380a7e4138fdb839c2a9e88d1f4)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a0a496097aa3bebd7fecdb2a40b4f1920)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a6ed6ba4c13c1d481737f6ad718caa77b)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1af0a09d9f5b69fcd102c140acab58fba3)`()` | Gets the value of Rank.
`public inline FORCEINLINE const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a133bee1d45fd5d952c589ec9d6a58c46)`() const` | Gets the value of Rank.
`public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a76205423edb0e9fffaf2af26221665e8)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` | Sets the value of Rank.
`public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a6230f887455fb3801d9af10e707eff6c)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` | Sets the value of Rank using move semantics.

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

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1ae6b8b465e48379bef757bb93ba59cfa7)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1ae6b8b465e48379bef757bb93ba59cfa7"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a009573cf639d4137403a062d8ad4d224)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a009573cf639d4137403a062d8ad4d224"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a3a5d92dd2779387a32c2d4aa6c3e7e69)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a3a5d92dd2779387a32c2d4aa6c3e7e69"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a31a3e4e3d09e52f836188607c9732e40)`(FString & OutValue) const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a31a3e4e3d09e52f836188607c9732e40"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1a6d55ae903cebe37983d7e87b571d1501)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1a6d55ae903cebe37983d7e87b571d1501"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerRankUpdateRequest_1a402636b144191d7beb64c37cbd4d0292)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a402636b144191d7beb64c37cbd4d0292"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a7d971380a7e4138fdb839c2a9e88d1f4)`(const FString & NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1a7d971380a7e4138fdb839c2a9e88d1f4"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a0a496097aa3bebd7fecdb2a40b4f1920)`(FString && NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1a0a496097aa3bebd7fecdb2a40b4f1920"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerRankUpdateRequest_1a6ed6ba4c13c1d481737f6ad718caa77b)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1a6ed6ba4c13c1d481737f6ad718caa77b"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1af0a09d9f5b69fcd102c140acab58fba3)`()` <a id="structFRHAPI__PlayerRankUpdateRequest_1af0a09d9f5b69fcd102c140acab58fba3"></a>

Gets the value of Rank.

#### `public inline FORCEINLINE const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a133bee1d45fd5d952c589ec9d6a58c46)`() const` <a id="structFRHAPI__PlayerRankUpdateRequest_1a133bee1d45fd5d952c589ec9d6a58c46"></a>

Gets the value of Rank.

#### `public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a76205423edb0e9fffaf2af26221665e8)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1a76205423edb0e9fffaf2af26221665e8"></a>

Sets the value of Rank.

#### `public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankUpdateRequest_1a6230f887455fb3801d9af10e707eff6c)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` <a id="structFRHAPI__PlayerRankUpdateRequest_1a6230f887455fb3801d9af10e707eff6c"></a>

Sets the value of Rank using move semantics.

