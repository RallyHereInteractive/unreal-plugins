# RHAPI_CalculatedRank <a id="group__RHAPI__CalculatedRank"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CalculatedRank`](#structFRHAPI__CalculatedRank) | Additional data about a specific player&#39;s rank and previous match in order to make rank calculations.

## struct `FRHAPI_CalculatedRank` <a id="structFRHAPI__CalculatedRank"></a>

```
struct FRHAPI_CalculatedRank
  : public FRHAPI_Model
```

Additional data about a specific player&#39;s rank and previous match in order to make rank calculations.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__CalculatedRank_1a825e0de2c44b5e14f630f275e013a71c) | UUID for this specific player.
`public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__CalculatedRank_1aa1931e3cc305f5c2d372305826dc04dc) | 
`public int32 `[`SecondsInMatch`](#structFRHAPI__CalculatedRank_1ada5c0579a48d3d9c965490f8d3477cce) | How many seconds this player was in the match.
`public virtual bool `[`FromJson`](#structFRHAPI__CalculatedRank_1affaf91e3fc2b877b364eaf3c4a274c2b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CalculatedRank_1a23ab24b5e3c357c469aa9c5a2431340e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1a23eb6f9a81ec5b67b9c33f91ffc09d38)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1a4c07334df92f32db94bb54e96363000a)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__CalculatedRank_1a1e004ae576d40deb233e908987e94683)`(FGuid NewValue)` | Sets the value of PlayerUuid.
`public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1a01d752790234a0f2fe2240c0c8eb6935)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1aeb5293ed0c9b95577eea91d64d7e04fc)`() const` | Gets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__CalculatedRank_1a23d3420a263f8cf96600e7003ea68434)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` NewValue)` | Sets the value of Rank.
`public inline int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1ab7c748a2fb5aeec687fee19377f8a193)`()` | Gets the value of SecondsInMatch.
`public inline const int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a1e007b264b40f43b370b89f5fb62803a)`() const` | Gets the value of SecondsInMatch.
`public inline void `[`SetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a0c2a3bfc583d803bd801355a4342e2aa)`(int32 NewValue)` | Sets the value of SecondsInMatch.
`public inline bool `[`IsSecondsInMatchDefaultValue`](#structFRHAPI__CalculatedRank_1a0420e2969a5244a9f0d698845ba1e8ac)`() const` | Returns true if SecondsInMatch matches the default value.
`public inline void `[`SetSecondsInMatchToDefault`](#structFRHAPI__CalculatedRank_1a2e12a2273c581b7a43eaef6c5bb197d2)`()` | Sets the value of SecondsInMatch to its default

#### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__CalculatedRank_1a825e0de2c44b5e14f630f275e013a71c) <a id="structFRHAPI__CalculatedRank_1a825e0de2c44b5e14f630f275e013a71c"></a>

UUID for this specific player.

<br>
#### `public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__CalculatedRank_1aa1931e3cc305f5c2d372305826dc04dc) <a id="structFRHAPI__CalculatedRank_1aa1931e3cc305f5c2d372305826dc04dc"></a>

<br>
#### `public int32 `[`SecondsInMatch`](#structFRHAPI__CalculatedRank_1ada5c0579a48d3d9c965490f8d3477cce) <a id="structFRHAPI__CalculatedRank_1ada5c0579a48d3d9c965490f8d3477cce"></a>

How many seconds this player was in the match.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__CalculatedRank_1affaf91e3fc2b877b364eaf3c4a274c2b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CalculatedRank_1affaf91e3fc2b877b364eaf3c4a274c2b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__CalculatedRank_1a23ab24b5e3c357c469aa9c5a2431340e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CalculatedRank_1a23ab24b5e3c357c469aa9c5a2431340e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1a23eb6f9a81ec5b67b9c33f91ffc09d38)`()` <a id="structFRHAPI__CalculatedRank_1a23eb6f9a81ec5b67b9c33f91ffc09d38"></a>

Gets the value of PlayerUuid.

<br>
#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1a4c07334df92f32db94bb54e96363000a)`() const` <a id="structFRHAPI__CalculatedRank_1a4c07334df92f32db94bb54e96363000a"></a>

Gets the value of PlayerUuid.

<br>
#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__CalculatedRank_1a1e004ae576d40deb233e908987e94683)`(FGuid NewValue)` <a id="structFRHAPI__CalculatedRank_1a1e004ae576d40deb233e908987e94683"></a>

Sets the value of PlayerUuid.

<br>
#### `public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1a01d752790234a0f2fe2240c0c8eb6935)`()` <a id="structFRHAPI__CalculatedRank_1a01d752790234a0f2fe2240c0c8eb6935"></a>

Gets the value of Rank.

<br>
#### `public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1aeb5293ed0c9b95577eea91d64d7e04fc)`() const` <a id="structFRHAPI__CalculatedRank_1aeb5293ed0c9b95577eea91d64d7e04fc"></a>

Gets the value of Rank.

<br>
#### `public inline void `[`SetRank`](#structFRHAPI__CalculatedRank_1a23d3420a263f8cf96600e7003ea68434)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` NewValue)` <a id="structFRHAPI__CalculatedRank_1a23d3420a263f8cf96600e7003ea68434"></a>

Sets the value of Rank.

<br>
#### `public inline int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1ab7c748a2fb5aeec687fee19377f8a193)`()` <a id="structFRHAPI__CalculatedRank_1ab7c748a2fb5aeec687fee19377f8a193"></a>

Gets the value of SecondsInMatch.

<br>
#### `public inline const int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a1e007b264b40f43b370b89f5fb62803a)`() const` <a id="structFRHAPI__CalculatedRank_1a1e007b264b40f43b370b89f5fb62803a"></a>

Gets the value of SecondsInMatch.

<br>
#### `public inline void `[`SetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a0c2a3bfc583d803bd801355a4342e2aa)`(int32 NewValue)` <a id="structFRHAPI__CalculatedRank_1a0c2a3bfc583d803bd801355a4342e2aa"></a>

Sets the value of SecondsInMatch.

<br>
#### `public inline bool `[`IsSecondsInMatchDefaultValue`](#structFRHAPI__CalculatedRank_1a0420e2969a5244a9f0d698845ba1e8ac)`() const` <a id="structFRHAPI__CalculatedRank_1a0420e2969a5244a9f0d698845ba1e8ac"></a>

Returns true if SecondsInMatch matches the default value.

<br>
#### `public inline void `[`SetSecondsInMatchToDefault`](#structFRHAPI__CalculatedRank_1a2e12a2273c581b7a43eaef6c5bb197d2)`()` <a id="structFRHAPI__CalculatedRank_1a2e12a2273c581b7a43eaef6c5bb197d2"></a>

Sets the value of SecondsInMatch to its default

<br>
