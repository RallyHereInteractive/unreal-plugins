---
title: RHAPI_PlayerRankResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankResponse`](#structFRHAPI__PlayerRankResponse) | DEPRECATED Response to successfully requesting a player&#39;s rank.

## struct `FRHAPI_PlayerRankResponse` <a id="structFRHAPI__PlayerRankResponse"></a>

```
struct FRHAPI_PlayerRankResponse
  : public FRHAPI_Model
```

DEPRECATED Response to successfully requesting a player&#39;s rank.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRankResponse_1ad515f738c5f7ba86c3cc1cbc7aabb511) | UUID for this specific player.
`public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__PlayerRankResponse_1a49800ec10e721703e0c900505859a4fc) | Current rank info about player.
`public int32 `[`RankId`](#structFRHAPI__PlayerRankResponse_1a8200a6af92b552e2e7976f8bc6b0356c) | ID for this rank.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankResponse_1a0db3f100bbafbfcc6004509fa3568e66)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponse_1ab6cdc5dcaa1a7dafb21570355943a5cc)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a857484d63bbcf814e50c28724260c4fe)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a4e9ebe28e42d96f00e27a7429635e380)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a7d0f885871e9380b82622bb66e1e1adc)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a016f32c43c883078fdbf6d1c7e48288a)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1ac29fd3a4fad77278b42468a6f9bbd725)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1ad1c38756678aef97508f533839a30d4e)`() const` | Gets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponse_1a6ff7ae7262a1498a787e490b000eeea6)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` | Sets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponse_1a138430efed35616132690ed9dc11c49e)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` | Sets the value of Rank using move semantics.
`public inline int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1aabbbbb4a9a91e91f8733f8f9188a31f7)`()` | Gets the value of RankId.
`public inline const int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1a918c6bbbd69cd6c14ec05ae0b364948a)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponse_1a8e6959f71587a0339d440e42640b2960)`(const int32 & NewValue)` | Sets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponse_1a2113ef739621fe5daa5874566e3d1bf5)`(int32 && NewValue)` | Sets the value of RankId using move semantics.
`public inline bool `[`IsRankIdDefaultValue`](#structFRHAPI__PlayerRankResponse_1a876bc1f29e317513febb2030029f4b67)`() const` | Returns true if RankId matches the default value.
`public inline void `[`SetRankIdToDefault`](#structFRHAPI__PlayerRankResponse_1a33d6cc9d2f0c07f8b349991d2319ab7a)`()` | Sets the value of RankId to its default

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRankResponse_1ad515f738c5f7ba86c3cc1cbc7aabb511) <a id="structFRHAPI__PlayerRankResponse_1ad515f738c5f7ba86c3cc1cbc7aabb511"></a>

UUID for this specific player.

#### `public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__PlayerRankResponse_1a49800ec10e721703e0c900505859a4fc) <a id="structFRHAPI__PlayerRankResponse_1a49800ec10e721703e0c900505859a4fc"></a>

Current rank info about player.

#### `public int32 `[`RankId`](#structFRHAPI__PlayerRankResponse_1a8200a6af92b552e2e7976f8bc6b0356c) <a id="structFRHAPI__PlayerRankResponse_1a8200a6af92b552e2e7976f8bc6b0356c"></a>

ID for this rank.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankResponse_1a0db3f100bbafbfcc6004509fa3568e66)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankResponse_1a0db3f100bbafbfcc6004509fa3568e66"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponse_1ab6cdc5dcaa1a7dafb21570355943a5cc)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerRankResponse_1ab6cdc5dcaa1a7dafb21570355943a5cc"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a857484d63bbcf814e50c28724260c4fe)`()` <a id="structFRHAPI__PlayerRankResponse_1a857484d63bbcf814e50c28724260c4fe"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a4e9ebe28e42d96f00e27a7429635e380)`() const` <a id="structFRHAPI__PlayerRankResponse_1a4e9ebe28e42d96f00e27a7429635e380"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a7d0f885871e9380b82622bb66e1e1adc)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerRankResponse_1a7d0f885871e9380b82622bb66e1e1adc"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a016f32c43c883078fdbf6d1c7e48288a)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerRankResponse_1a016f32c43c883078fdbf6d1c7e48288a"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1ac29fd3a4fad77278b42468a6f9bbd725)`()` <a id="structFRHAPI__PlayerRankResponse_1ac29fd3a4fad77278b42468a6f9bbd725"></a>

Gets the value of Rank.

#### `public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1ad1c38756678aef97508f533839a30d4e)`() const` <a id="structFRHAPI__PlayerRankResponse_1ad1c38756678aef97508f533839a30d4e"></a>

Gets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponse_1a6ff7ae7262a1498a787e490b000eeea6)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` <a id="structFRHAPI__PlayerRankResponse_1a6ff7ae7262a1498a787e490b000eeea6"></a>

Sets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponse_1a138430efed35616132690ed9dc11c49e)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` <a id="structFRHAPI__PlayerRankResponse_1a138430efed35616132690ed9dc11c49e"></a>

Sets the value of Rank using move semantics.

#### `public inline int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1aabbbbb4a9a91e91f8733f8f9188a31f7)`()` <a id="structFRHAPI__PlayerRankResponse_1aabbbbb4a9a91e91f8733f8f9188a31f7"></a>

Gets the value of RankId.

#### `public inline const int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1a918c6bbbd69cd6c14ec05ae0b364948a)`() const` <a id="structFRHAPI__PlayerRankResponse_1a918c6bbbd69cd6c14ec05ae0b364948a"></a>

Gets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponse_1a8e6959f71587a0339d440e42640b2960)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerRankResponse_1a8e6959f71587a0339d440e42640b2960"></a>

Sets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponse_1a2113ef739621fe5daa5874566e3d1bf5)`(int32 && NewValue)` <a id="structFRHAPI__PlayerRankResponse_1a2113ef739621fe5daa5874566e3d1bf5"></a>

Sets the value of RankId using move semantics.

#### `public inline bool `[`IsRankIdDefaultValue`](#structFRHAPI__PlayerRankResponse_1a876bc1f29e317513febb2030029f4b67)`() const` <a id="structFRHAPI__PlayerRankResponse_1a876bc1f29e317513febb2030029f4b67"></a>

Returns true if RankId matches the default value.

#### `public inline void `[`SetRankIdToDefault`](#structFRHAPI__PlayerRankResponse_1a33d6cc9d2f0c07f8b349991d2319ab7a)`()` <a id="structFRHAPI__PlayerRankResponse_1a33d6cc9d2f0c07f8b349991d2319ab7a"></a>

Sets the value of RankId to its default
