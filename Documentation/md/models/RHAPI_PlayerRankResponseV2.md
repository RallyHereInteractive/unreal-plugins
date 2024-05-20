# RHAPI_PlayerRankResponseV2 <a id="group__RHAPI__PlayerRankResponseV2"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a10fe34359412aef124eaf028e9f318e6) | UUID for this specific player.
`public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__PlayerRankResponseV2_1adf07ad32c8f17803efc173c7c9ac1da5) | Current rank info about player.
`public FString `[`RankId`](#structFRHAPI__PlayerRankResponseV2_1a1c0a9730b764c6c249de4a58491f0967) | ID for this rank.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankResponseV2_1a02bc6e94b724096091a0caa8caa9cbdd)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponseV2_1a757f9ea037f1eceb84f3d68201898bd1)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a174222cd630849b99fbed5f94a53cd82)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a4a3a7f6b1ee199dc903b3ba903223293)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a3d1d4732d4120a4737aaff48e76b7127)`(FGuid NewValue)` | Sets the value of PlayerUuid.
`public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1ac0bf2c0e32e464eabb65775162e0d9ba)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1a9294cfa6ceca4a2f6732ec959326190a)`() const` | Gets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1a78609598c4b8aa825012e70d10986b84)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` NewValue)` | Sets the value of Rank.
`public inline FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1a38609090cb20fc2bda2591c6b184dc8f)`()` | Gets the value of RankId.
`public inline const FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1ac8ae609b8dfc814936a2805c65d6a2b7)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1a0101d12f93802b6057f0996fb60e08aa)`(FString NewValue)` | Sets the value of RankId.

#### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a10fe34359412aef124eaf028e9f318e6) <a id="structFRHAPI__PlayerRankResponseV2_1a10fe34359412aef124eaf028e9f318e6"></a>

UUID for this specific player.

#### `public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__PlayerRankResponseV2_1adf07ad32c8f17803efc173c7c9ac1da5) <a id="structFRHAPI__PlayerRankResponseV2_1adf07ad32c8f17803efc173c7c9ac1da5"></a>

Current rank info about player.

#### `public FString `[`RankId`](#structFRHAPI__PlayerRankResponseV2_1a1c0a9730b764c6c249de4a58491f0967) <a id="structFRHAPI__PlayerRankResponseV2_1a1c0a9730b764c6c249de4a58491f0967"></a>

ID for this rank.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankResponseV2_1a02bc6e94b724096091a0caa8caa9cbdd)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a02bc6e94b724096091a0caa8caa9cbdd"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponseV2_1a757f9ea037f1eceb84f3d68201898bd1)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerRankResponseV2_1a757f9ea037f1eceb84f3d68201898bd1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a174222cd630849b99fbed5f94a53cd82)`()` <a id="structFRHAPI__PlayerRankResponseV2_1a174222cd630849b99fbed5f94a53cd82"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a4a3a7f6b1ee199dc903b3ba903223293)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1a4a3a7f6b1ee199dc903b3ba903223293"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponseV2_1a3d1d4732d4120a4737aaff48e76b7127)`(FGuid NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a3d1d4732d4120a4737aaff48e76b7127"></a>

Sets the value of PlayerUuid.

#### `public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1ac0bf2c0e32e464eabb65775162e0d9ba)`()` <a id="structFRHAPI__PlayerRankResponseV2_1ac0bf2c0e32e464eabb65775162e0d9ba"></a>

Gets the value of Rank.

#### `public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponseV2_1a9294cfa6ceca4a2f6732ec959326190a)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1a9294cfa6ceca4a2f6732ec959326190a"></a>

Gets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponseV2_1a78609598c4b8aa825012e70d10986b84)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a78609598c4b8aa825012e70d10986b84"></a>

Sets the value of Rank.

#### `public inline FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1a38609090cb20fc2bda2591c6b184dc8f)`()` <a id="structFRHAPI__PlayerRankResponseV2_1a38609090cb20fc2bda2591c6b184dc8f"></a>

Gets the value of RankId.

#### `public inline const FString & `[`GetRankId`](#structFRHAPI__PlayerRankResponseV2_1ac8ae609b8dfc814936a2805c65d6a2b7)`() const` <a id="structFRHAPI__PlayerRankResponseV2_1ac8ae609b8dfc814936a2805c65d6a2b7"></a>

Gets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponseV2_1a0101d12f93802b6057f0996fb60e08aa)`(FString NewValue)` <a id="structFRHAPI__PlayerRankResponseV2_1a0101d12f93802b6057f0996fb60e08aa"></a>

Sets the value of RankId.

