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
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a007aa8fbe0abfb982ff56eb65c674f5f)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a7ca9eaf11f66dd18baab373aeb7730a5)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a65abd7fea423eafb98ffa229eee4b200)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a336e96c5c566ff1ec1615adf2d6698fc)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1aa09decbef1e754e09f4fd0f949631c05)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1a9d9ac675d48089964240f4f24c0d1d02)`() const` | Gets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1ab50b0165d32f7fc4f2a85cb1007e7d0e)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` | Sets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1ab94c980277f01d3d09fee45aca76de26)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` | Sets the value of Rank using move semantics.
`public inline FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1a933415320e41897332c306a7dbd3437e)`()` | Gets the value of RankId.
`public inline const FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1a6567e6bb349c8bfd38718c72a422951f)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1ad47e1518ad570b8a475ac03eaeaaf161)`(const FString & NewValue)` | Sets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1a609851ff9476e9878f223b6b08d847bf)`(FString && NewValue)` | Sets the value of RankId using move semantics.

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

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a007aa8fbe0abfb982ff56eb65c674f5f)`()` <a id="structFRHAPI__PlayerRankResponseV2_1a007aa8fbe0abfb982ff56eb65c674f5f"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a7ca9eaf11f66dd18baab373aeb7730a5)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1a7ca9eaf11f66dd18baab373aeb7730a5"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a65abd7fea423eafb98ffa229eee4b200)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a65abd7fea423eafb98ffa229eee4b200"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a336e96c5c566ff1ec1615adf2d6698fc)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a336e96c5c566ff1ec1615adf2d6698fc"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1aa09decbef1e754e09f4fd0f949631c05)`()` <a id="structFRHAPI__PlayerRankResponseV2_1aa09decbef1e754e09f4fd0f949631c05"></a>

Gets the value of Rank.

#### `public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1a9d9ac675d48089964240f4f24c0d1d02)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1a9d9ac675d48089964240f4f24c0d1d02"></a>

Gets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1ab50b0165d32f7fc4f2a85cb1007e7d0e)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1ab50b0165d32f7fc4f2a85cb1007e7d0e"></a>

Sets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1ab94c980277f01d3d09fee45aca76de26)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1ab94c980277f01d3d09fee45aca76de26"></a>

Sets the value of Rank using move semantics.

#### `public inline FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1a933415320e41897332c306a7dbd3437e)`()` <a id="structFRHAPI__PlayerRankResponseV2_1a933415320e41897332c306a7dbd3437e"></a>

Gets the value of RankId.

#### `public inline const FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1a6567e6bb349c8bfd38718c72a422951f)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1a6567e6bb349c8bfd38718c72a422951f"></a>

Gets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1ad47e1518ad570b8a475ac03eaeaaf161)`(const FString & NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1ad47e1518ad570b8a475ac03eaeaaf161"></a>

Sets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1a609851ff9476e9878f223b6b08d847bf)`(FString && NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a609851ff9476e9878f223b6b08d847bf"></a>

Sets the value of RankId using move semantics.

