---
title: RHAPI_PlayerRank
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRank`](#structFRHAPI__PlayerRank) | Rank data about a specific player.

## struct `FRHAPI_PlayerRank` <a id="structFRHAPI__PlayerRank"></a>

```
struct FRHAPI_PlayerRank
  : public FRHAPI_Model
```

Rank data about a specific player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRank_1ab72b12eb85107f8acdc0bef6fa927144) | UUID for this specific player.
`public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__PlayerRank_1acabd2ad132e2e6f72dff283fa1683b48) | Current rank info about player.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRank_1a7804638d8c814d9315f5b2f9dc82f930)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRank_1aa9ee4688bc07602509dacff13c089190)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRank_1a43de4ab158fc92a81966c6462c1249eb)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRank_1a433ccd4857aaefeb557f04b2b962686a)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRank_1ada4db72f041f401947962d5cb98a2e90)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRank_1a3042b30b32d07b6f381a472d8470de24)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRank_1a9230157ac76c8fdfc5d9631a18ff9918)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRank_1af41af24314272663b3cafb7ef4b75637)`() const` | Gets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRank_1a47d7fe4e76c58d674f2af96024c964de)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` | Sets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRank_1a85720f982be14651176d1eb6a727361f)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` | Sets the value of Rank using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRank_1ab72b12eb85107f8acdc0bef6fa927144) <a id="structFRHAPI__PlayerRank_1ab72b12eb85107f8acdc0bef6fa927144"></a>

UUID for this specific player.

#### `public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__PlayerRank_1acabd2ad132e2e6f72dff283fa1683b48) <a id="structFRHAPI__PlayerRank_1acabd2ad132e2e6f72dff283fa1683b48"></a>

Current rank info about player.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRank_1a7804638d8c814d9315f5b2f9dc82f930)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRank_1a7804638d8c814d9315f5b2f9dc82f930"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRank_1aa9ee4688bc07602509dacff13c089190)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerRank_1aa9ee4688bc07602509dacff13c089190"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRank_1a43de4ab158fc92a81966c6462c1249eb)`()` <a id="structFRHAPI__PlayerRank_1a43de4ab158fc92a81966c6462c1249eb"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRank_1a433ccd4857aaefeb557f04b2b962686a)`() const` <a id="structFRHAPI__PlayerRank_1a433ccd4857aaefeb557f04b2b962686a"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRank_1ada4db72f041f401947962d5cb98a2e90)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerRank_1ada4db72f041f401947962d5cb98a2e90"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRank_1a3042b30b32d07b6f381a472d8470de24)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerRank_1a3042b30b32d07b6f381a472d8470de24"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRank_1a9230157ac76c8fdfc5d9631a18ff9918)`()` <a id="structFRHAPI__PlayerRank_1a9230157ac76c8fdfc5d9631a18ff9918"></a>

Gets the value of Rank.

#### `public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRank_1af41af24314272663b3cafb7ef4b75637)`() const` <a id="structFRHAPI__PlayerRank_1af41af24314272663b3cafb7ef4b75637"></a>

Gets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRank_1a47d7fe4e76c58d674f2af96024c964de)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` <a id="structFRHAPI__PlayerRank_1a47d7fe4e76c58d674f2af96024c964de"></a>

Sets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRank_1a85720f982be14651176d1eb6a727361f)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` <a id="structFRHAPI__PlayerRank_1a85720f982be14651176d1eb6a727361f"></a>

Sets the value of Rank using move semantics.

