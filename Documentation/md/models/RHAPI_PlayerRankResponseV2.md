# group `RHAPI_PlayerRankResponseV2` <a id="group__RHAPI__PlayerRankResponseV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankResponseV2`](#structFRHAPI__PlayerRankResponseV2) | Response to successfully requesting a player&#39;s rank.

---
title: FRHAPI_PlayerRankResponseV2
---

```
struct FRHAPI_PlayerRankResponseV2
  : public FRHAPI_Model
```

Response to successfully requesting a player&#39;s rank.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a10fe34359412aef124eaf028e9f318e6) | UUID for this specific player.
`public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__PlayerRankResponseV2_1adf07ad32c8f17803efc173c7c9ac1da5) | Current rank info about player.
`public FString `[`RankId`](#structFRHAPI__PlayerRankResponseV2_1a1c0a9730b764c6c249de4a58491f0967) | ID for this rank.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankResponseV2_1afe9b05036a4cb8d8b2e9e7cd31c9b1e4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponseV2_1ae09261dea312c0a5606af638d74afd69)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a174222cd630849b99fbed5f94a53cd82)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a4a3a7f6b1ee199dc903b3ba903223293)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a65abd7fea423eafb98ffa229eee4b200)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a336e96c5c566ff1ec1615adf2d6698fc)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1ac0bf2c0e32e464eabb65775162e0d9ba)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1a9294cfa6ceca4a2f6732ec959326190a)`() const` | Gets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1a545cd7af57eb91ca805194fa5ec4d442)`(const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & NewValue)` | Sets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1a8b410f673005c43991406e2efa78f626)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` && NewValue)` | Sets the value of Rank using move semantics.
`public inline FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1a38609090cb20fc2bda2591c6b184dc8f)`()` | Gets the value of RankId.
`public inline const FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1ac8ae609b8dfc814936a2805c65d6a2b7)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1ad47e1518ad570b8a475ac03eaeaaf161)`(const FString & NewValue)` | Sets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1a609851ff9476e9878f223b6b08d847bf)`(FString && NewValue)` | Sets the value of RankId using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a10fe34359412aef124eaf028e9f318e6) <a id="structFRHAPI__PlayerRankResponseV2_1a10fe34359412aef124eaf028e9f318e6"></a>

UUID for this specific player.

#### `public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__PlayerRankResponseV2_1adf07ad32c8f17803efc173c7c9ac1da5) <a id="structFRHAPI__PlayerRankResponseV2_1adf07ad32c8f17803efc173c7c9ac1da5"></a>

Current rank info about player.

#### `public FString `[`RankId`](#structFRHAPI__PlayerRankResponseV2_1a1c0a9730b764c6c249de4a58491f0967) <a id="structFRHAPI__PlayerRankResponseV2_1a1c0a9730b764c6c249de4a58491f0967"></a>

ID for this rank.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankResponseV2_1afe9b05036a4cb8d8b2e9e7cd31c9b1e4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankResponseV2_1afe9b05036a4cb8d8b2e9e7cd31c9b1e4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponseV2_1ae09261dea312c0a5606af638d74afd69)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerRankResponseV2_1ae09261dea312c0a5606af638d74afd69"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a174222cd630849b99fbed5f94a53cd82)`()` <a id="structFRHAPI__PlayerRankResponseV2_1a174222cd630849b99fbed5f94a53cd82"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a4a3a7f6b1ee199dc903b3ba903223293)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1a4a3a7f6b1ee199dc903b3ba903223293"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a65abd7fea423eafb98ffa229eee4b200)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a65abd7fea423eafb98ffa229eee4b200"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a336e96c5c566ff1ec1615adf2d6698fc)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a336e96c5c566ff1ec1615adf2d6698fc"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1ac0bf2c0e32e464eabb65775162e0d9ba)`()` <a id="structFRHAPI__PlayerRankResponseV2_1ac0bf2c0e32e464eabb65775162e0d9ba"></a>

Gets the value of Rank.

#### `public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1a9294cfa6ceca4a2f6732ec959326190a)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1a9294cfa6ceca4a2f6732ec959326190a"></a>

Gets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1a545cd7af57eb91ca805194fa5ec4d442)`(const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a545cd7af57eb91ca805194fa5ec4d442"></a>

Sets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1a8b410f673005c43991406e2efa78f626)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` && NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a8b410f673005c43991406e2efa78f626"></a>

Sets the value of Rank using move semantics.

#### `public inline FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1a38609090cb20fc2bda2591c6b184dc8f)`()` <a id="structFRHAPI__PlayerRankResponseV2_1a38609090cb20fc2bda2591c6b184dc8f"></a>

Gets the value of RankId.

#### `public inline const FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1ac8ae609b8dfc814936a2805c65d6a2b7)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1ac8ae609b8dfc814936a2805c65d6a2b7"></a>

Gets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1ad47e1518ad570b8a475ac03eaeaaf161)`(const FString & NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1ad47e1518ad570b8a475ac03eaeaaf161"></a>

Sets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1a609851ff9476e9878f223b6b08d847bf)`(FString && NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a609851ff9476e9878f223b6b08d847bf"></a>

Sets the value of RankId using move semantics.

