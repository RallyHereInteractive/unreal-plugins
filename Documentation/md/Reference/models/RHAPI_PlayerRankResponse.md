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
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponse_1af2758ca4444d94c3cbd2e633e1060b60)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a37a12f54ec8c1eb9283000dda9ad7db5)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1ac3f34219b0fdd8f1e3e60212d286c139)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a17697164d08373b0bca7596b0de389da)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1af36d61f819949b19b653f7b8e13d5d34)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1a011829424b3351f388b660ed8d37b42c)`()` | Gets the value of Rank.
`public inline FORCEINLINE const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1a43d37c58950f80d47c79865d63ec496c)`() const` | Gets the value of Rank.
`public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankResponse_1a2a4ca8fd442fc4991924e998a96999a2)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` | Sets the value of Rank.
`public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankResponse_1a934312a9b9e0be68d8152f88a5373a41)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` | Sets the value of Rank using move semantics.
`public inline FORCEINLINE int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1a0543bb45a0223d6952a98b3f8dc293bc)`()` | Gets the value of RankId.
`public inline FORCEINLINE const int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1a22782745a76fc5460c83130af470017c)`() const` | Gets the value of RankId.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__PlayerRankResponse_1afded1ce2a9d6f82f04aa3a97a86bc817)`(const int32 & NewValue)` | Sets the value of RankId.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__PlayerRankResponse_1a317e402cc5b4d5f797877cf0b296efce)`(int32 && NewValue)` | Sets the value of RankId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_RankId`](#structFRHAPI__PlayerRankResponse_1a6cb06d6394cb62f1742967db5f597b54)`()` | Returns the default value of RankId.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponse_1af2758ca4444d94c3cbd2e633e1060b60)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerRankResponse_1af2758ca4444d94c3cbd2e633e1060b60"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a37a12f54ec8c1eb9283000dda9ad7db5)`()` <a id="structFRHAPI__PlayerRankResponse_1a37a12f54ec8c1eb9283000dda9ad7db5"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1ac3f34219b0fdd8f1e3e60212d286c139)`() const` <a id="structFRHAPI__PlayerRankResponse_1ac3f34219b0fdd8f1e3e60212d286c139"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a17697164d08373b0bca7596b0de389da)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerRankResponse_1a17697164d08373b0bca7596b0de389da"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1af36d61f819949b19b653f7b8e13d5d34)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerRankResponse_1af36d61f819949b19b653f7b8e13d5d34"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1a011829424b3351f388b660ed8d37b42c)`()` <a id="structFRHAPI__PlayerRankResponse_1a011829424b3351f388b660ed8d37b42c"></a>

Gets the value of Rank.

#### `public inline FORCEINLINE const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1a43d37c58950f80d47c79865d63ec496c)`() const` <a id="structFRHAPI__PlayerRankResponse_1a43d37c58950f80d47c79865d63ec496c"></a>

Gets the value of Rank.

#### `public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankResponse_1a2a4ca8fd442fc4991924e998a96999a2)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` <a id="structFRHAPI__PlayerRankResponse_1a2a4ca8fd442fc4991924e998a96999a2"></a>

Sets the value of Rank.

#### `public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRankResponse_1a934312a9b9e0be68d8152f88a5373a41)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` <a id="structFRHAPI__PlayerRankResponse_1a934312a9b9e0be68d8152f88a5373a41"></a>

Sets the value of Rank using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1a0543bb45a0223d6952a98b3f8dc293bc)`()` <a id="structFRHAPI__PlayerRankResponse_1a0543bb45a0223d6952a98b3f8dc293bc"></a>

Gets the value of RankId.

#### `public inline FORCEINLINE const int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1a22782745a76fc5460c83130af470017c)`() const` <a id="structFRHAPI__PlayerRankResponse_1a22782745a76fc5460c83130af470017c"></a>

Gets the value of RankId.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__PlayerRankResponse_1afded1ce2a9d6f82f04aa3a97a86bc817)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerRankResponse_1afded1ce2a9d6f82f04aa3a97a86bc817"></a>

Sets the value of RankId.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__PlayerRankResponse_1a317e402cc5b4d5f797877cf0b296efce)`(int32 && NewValue)` <a id="structFRHAPI__PlayerRankResponse_1a317e402cc5b4d5f797877cf0b296efce"></a>

Sets the value of RankId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_RankId`](#structFRHAPI__PlayerRankResponse_1a6cb06d6394cb62f1742967db5f597b54)`()` <a id="structFRHAPI__PlayerRankResponse_1a6cb06d6394cb62f1742967db5f597b54"></a>

Returns the default value of RankId.

