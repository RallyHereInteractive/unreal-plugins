---
title: RHAPI_PlayerRankResponseV2
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankResponseV2`](#structFRHAPI__PlayerRankResponseV2) | Response to successfully requesting a player&#39;s rank.

## struct `FRHAPI_PlayerRankResponseV2` <a id="structFRHAPI__PlayerRankResponseV2"></a>

```
struct FRHAPI_PlayerRankResponseV2
  : public FRHAPI_Model
```

Response to successfully requesting a player&#39;s rank.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a10fe34359412aef124eaf028e9f318e6) | UUID for this specific player.
`public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__PlayerRankResponseV2_1a6bc6b65d2d9e5a347cd970c7cd6a275b) | Current rank info about player.
`public FString `[`RankId`](#structFRHAPI__PlayerRankResponseV2_1a1c0a9730b764c6c249de4a58491f0967) | ID for this rank.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankResponseV2_1afe9b05036a4cb8d8b2e9e7cd31c9b1e4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponseV2_1afd524b73ee8dde88972c6230ba0cade8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1ae17ca43b695ec08feb9d0bd69725ae11)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1af6e6f3b31ef9ac02132bf9ea0f1346e1)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1ad0acddba40760cca92baca3c7ee917ed)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a91cd80702e08ab497dfb9dc2ab8da08a)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1ac5ba70de0cde01aa2c0044aaf18f1a42)`()` | Gets the value of Rank.
`public inline FORCEINLINE const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1ac05d42d657e0c7ff6f5ff1c2c6e03949)`() const` | Gets the value of Rank.
`public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1a5073038ded0733529a4018428dadb043)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` | Sets the value of Rank.
`public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1a277a87b8074ce3108d61a867a18e5fd3)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` | Sets the value of Rank using move semantics.
`public inline FORCEINLINE FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1afa12d0c1de6e7fb9a23395fecc88461a)`()` | Gets the value of RankId.
`public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1a9554c66b02d09447b644b52ddcd8f78e)`() const` | Gets the value of RankId.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1ae2be1a1af74703a90aaf6b700dc647f5)`(const FString & NewValue)` | Sets the value of RankId.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1a66b9b8e97dda45050c07ffbcd7a0a1e6)`(FString && NewValue)` | Sets the value of RankId using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a10fe34359412aef124eaf028e9f318e6) <a id="structFRHAPI__PlayerRankResponseV2_1a10fe34359412aef124eaf028e9f318e6"></a>

UUID for this specific player.

#### `public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__PlayerRankResponseV2_1a6bc6b65d2d9e5a347cd970c7cd6a275b) <a id="structFRHAPI__PlayerRankResponseV2_1a6bc6b65d2d9e5a347cd970c7cd6a275b"></a>

Current rank info about player.

#### `public FString `[`RankId`](#structFRHAPI__PlayerRankResponseV2_1a1c0a9730b764c6c249de4a58491f0967) <a id="structFRHAPI__PlayerRankResponseV2_1a1c0a9730b764c6c249de4a58491f0967"></a>

ID for this rank.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankResponseV2_1afe9b05036a4cb8d8b2e9e7cd31c9b1e4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankResponseV2_1afe9b05036a4cb8d8b2e9e7cd31c9b1e4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponseV2_1afd524b73ee8dde88972c6230ba0cade8)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerRankResponseV2_1afd524b73ee8dde88972c6230ba0cade8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1ae17ca43b695ec08feb9d0bd69725ae11)`()` <a id="structFRHAPI__PlayerRankResponseV2_1ae17ca43b695ec08feb9d0bd69725ae11"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1af6e6f3b31ef9ac02132bf9ea0f1346e1)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1af6e6f3b31ef9ac02132bf9ea0f1346e1"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1ad0acddba40760cca92baca3c7ee917ed)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1ad0acddba40760cca92baca3c7ee917ed"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a91cd80702e08ab497dfb9dc2ab8da08a)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a91cd80702e08ab497dfb9dc2ab8da08a"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1ac5ba70de0cde01aa2c0044aaf18f1a42)`()` <a id="structFRHAPI__PlayerRankResponseV2_1ac5ba70de0cde01aa2c0044aaf18f1a42"></a>

Gets the value of Rank.

#### `public inline FORCEINLINE const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1ac05d42d657e0c7ff6f5ff1c2c6e03949)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1ac05d42d657e0c7ff6f5ff1c2c6e03949"></a>

Gets the value of Rank.

#### `public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1a5073038ded0733529a4018428dadb043)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a5073038ded0733529a4018428dadb043"></a>

Sets the value of Rank.

#### `public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1a277a87b8074ce3108d61a867a18e5fd3)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a277a87b8074ce3108d61a867a18e5fd3"></a>

Sets the value of Rank using move semantics.

#### `public inline FORCEINLINE FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1afa12d0c1de6e7fb9a23395fecc88461a)`()` <a id="structFRHAPI__PlayerRankResponseV2_1afa12d0c1de6e7fb9a23395fecc88461a"></a>

Gets the value of RankId.

#### `public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1a9554c66b02d09447b644b52ddcd8f78e)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1a9554c66b02d09447b644b52ddcd8f78e"></a>

Gets the value of RankId.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1ae2be1a1af74703a90aaf6b700dc647f5)`(const FString & NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1ae2be1a1af74703a90aaf6b700dc647f5"></a>

Sets the value of RankId.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1a66b9b8e97dda45050c07ffbcd7a0a1e6)`(FString && NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a66b9b8e97dda45050c07ffbcd7a0a1e6"></a>

Sets the value of RankId using move semantics.

