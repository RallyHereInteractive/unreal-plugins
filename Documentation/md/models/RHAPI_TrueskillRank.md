# RHAPI_TrueskillRank <a id="group__RHAPI__TrueskillRank"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_TrueskillRank`](#structFRHAPI__TrueskillRank) | Additional data about a specific player&#39;s rank and previous match in order to make trueskill calculations.

## struct `FRHAPI_TrueskillRank` <a id="structFRHAPI__TrueskillRank"></a>

```
struct FRHAPI_TrueskillRank
  : public FRHAPI_Model
```

Additional data about a specific player&#39;s rank and previous match in order to make trueskill calculations.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__TrueskillRank_1aedadea66bbdcec5f82b8a349283d068c) | UUID for this specific player.
`public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__TrueskillRank_1af39b2ae881ae0ffdf4dd6836677f48a5) | 
`public int32 `[`SecondsInMatch`](#structFRHAPI__TrueskillRank_1a68c349e909efe6f7fd18d28c1b4b8e51) | How many seconds this player was in the match.
`public virtual bool `[`FromJson`](#structFRHAPI__TrueskillRank_1ac22894eb357464b911aca49770507e5e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TrueskillRank_1a5714d0abce9d473dc0a14d097634e90f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__TrueskillRank_1a8ec1d7e23e97d4afa52e9e620e66b80f)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__TrueskillRank_1a6ad598cc0a624bd29bbe5f8ec8ba2ee9)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__TrueskillRank_1a7377bccba2509ac98fea81d2eb2735b3)`(FGuid NewValue)` | Sets the value of PlayerUuid.
`public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__TrueskillRank_1af016b1248a10ffba74cac73c34b1cc37)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__TrueskillRank_1a8c754d61c93043a10e12531923a91c52)`() const` | Gets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__TrueskillRank_1ab51a53bb2327adfacc4299e1c3d7a63b)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` NewValue)` | Sets the value of Rank.
`public inline int32 & `[`GetSecondsInMatch`](#structFRHAPI__TrueskillRank_1a20b1960e0c1d51d01eeed21ebafe2195)`()` | Gets the value of SecondsInMatch.
`public inline const int32 & `[`GetSecondsInMatch`](#structFRHAPI__TrueskillRank_1a2ec97a2e674ea48254803db5cb3b8752)`() const` | Gets the value of SecondsInMatch.
`public inline void `[`SetSecondsInMatch`](#structFRHAPI__TrueskillRank_1a86bf34b25badc628eb021aa9c9412b2a)`(int32 NewValue)` | Sets the value of SecondsInMatch.
`public inline bool `[`IsSecondsInMatchDefaultValue`](#structFRHAPI__TrueskillRank_1a16ddaad664bcb8338928f1c56a3bf8c2)`() const` | Returns true if SecondsInMatch matches the default value.
`public inline void `[`SetSecondsInMatchToDefault`](#structFRHAPI__TrueskillRank_1aeb08477ff2f0cbdecd7c4f954bdaa0d9)`()` | Sets the value of SecondsInMatch to its default

#### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__TrueskillRank_1aedadea66bbdcec5f82b8a349283d068c) <a id="structFRHAPI__TrueskillRank_1aedadea66bbdcec5f82b8a349283d068c"></a>

UUID for this specific player.

<br>
#### `public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__TrueskillRank_1af39b2ae881ae0ffdf4dd6836677f48a5) <a id="structFRHAPI__TrueskillRank_1af39b2ae881ae0ffdf4dd6836677f48a5"></a>

<br>
#### `public int32 `[`SecondsInMatch`](#structFRHAPI__TrueskillRank_1a68c349e909efe6f7fd18d28c1b4b8e51) <a id="structFRHAPI__TrueskillRank_1a68c349e909efe6f7fd18d28c1b4b8e51"></a>

How many seconds this player was in the match.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__TrueskillRank_1ac22894eb357464b911aca49770507e5e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TrueskillRank_1ac22894eb357464b911aca49770507e5e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__TrueskillRank_1a5714d0abce9d473dc0a14d097634e90f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__TrueskillRank_1a5714d0abce9d473dc0a14d097634e90f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__TrueskillRank_1a8ec1d7e23e97d4afa52e9e620e66b80f)`()` <a id="structFRHAPI__TrueskillRank_1a8ec1d7e23e97d4afa52e9e620e66b80f"></a>

Gets the value of PlayerUuid.

<br>
#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__TrueskillRank_1a6ad598cc0a624bd29bbe5f8ec8ba2ee9)`() const` <a id="structFRHAPI__TrueskillRank_1a6ad598cc0a624bd29bbe5f8ec8ba2ee9"></a>

Gets the value of PlayerUuid.

<br>
#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__TrueskillRank_1a7377bccba2509ac98fea81d2eb2735b3)`(FGuid NewValue)` <a id="structFRHAPI__TrueskillRank_1a7377bccba2509ac98fea81d2eb2735b3"></a>

Sets the value of PlayerUuid.

<br>
#### `public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__TrueskillRank_1af016b1248a10ffba74cac73c34b1cc37)`()` <a id="structFRHAPI__TrueskillRank_1af016b1248a10ffba74cac73c34b1cc37"></a>

Gets the value of Rank.

<br>
#### `public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__TrueskillRank_1a8c754d61c93043a10e12531923a91c52)`() const` <a id="structFRHAPI__TrueskillRank_1a8c754d61c93043a10e12531923a91c52"></a>

Gets the value of Rank.

<br>
#### `public inline void `[`SetRank`](#structFRHAPI__TrueskillRank_1ab51a53bb2327adfacc4299e1c3d7a63b)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` NewValue)` <a id="structFRHAPI__TrueskillRank_1ab51a53bb2327adfacc4299e1c3d7a63b"></a>

Sets the value of Rank.

<br>
#### `public inline int32 & `[`GetSecondsInMatch`](#structFRHAPI__TrueskillRank_1a20b1960e0c1d51d01eeed21ebafe2195)`()` <a id="structFRHAPI__TrueskillRank_1a20b1960e0c1d51d01eeed21ebafe2195"></a>

Gets the value of SecondsInMatch.

<br>
#### `public inline const int32 & `[`GetSecondsInMatch`](#structFRHAPI__TrueskillRank_1a2ec97a2e674ea48254803db5cb3b8752)`() const` <a id="structFRHAPI__TrueskillRank_1a2ec97a2e674ea48254803db5cb3b8752"></a>

Gets the value of SecondsInMatch.

<br>
#### `public inline void `[`SetSecondsInMatch`](#structFRHAPI__TrueskillRank_1a86bf34b25badc628eb021aa9c9412b2a)`(int32 NewValue)` <a id="structFRHAPI__TrueskillRank_1a86bf34b25badc628eb021aa9c9412b2a"></a>

Sets the value of SecondsInMatch.

<br>
#### `public inline bool `[`IsSecondsInMatchDefaultValue`](#structFRHAPI__TrueskillRank_1a16ddaad664bcb8338928f1c56a3bf8c2)`() const` <a id="structFRHAPI__TrueskillRank_1a16ddaad664bcb8338928f1c56a3bf8c2"></a>

Returns true if SecondsInMatch matches the default value.

<br>
#### `public inline void `[`SetSecondsInMatchToDefault`](#structFRHAPI__TrueskillRank_1aeb08477ff2f0cbdecd7c4f954bdaa0d9)`()` <a id="structFRHAPI__TrueskillRank_1aeb08477ff2f0cbdecd7c4f954bdaa0d9"></a>

Sets the value of SecondsInMatch to its default

<br>
