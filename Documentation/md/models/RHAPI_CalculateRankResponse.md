# group `RHAPI_CalculateRankResponse` <a id="group__RHAPI__CalculateRankResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CalculateRankResponse`](#structFRHAPI__CalculateRankResponse) | A response to recalculating players&#39; ranks.

## struct `FRHAPI_CalculateRankResponse` <a id="structFRHAPI__CalculateRankResponse"></a>

```
struct FRHAPI_CalculateRankResponse
  : public FRHAPI_Model
```

A response to recalculating players&#39; ranks.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > `[`UpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a63d2245aaf9f6f1f399a0aa7593fbf9f) | List of players and their updated ranks.
`public virtual bool `[`FromJson`](#structFRHAPI__CalculateRankResponse_1a77a5a28a9b45ec7c6d4f0bcd222a8033)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CalculateRankResponse_1abf3e5e75c87c5138ccf292cf18012958)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & `[`GetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1adacc1d08d692e54e615637a58e6e56c3)`()` | Gets the value of UpdatedPlayers.
`public inline const TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & `[`GetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1ac6c282f4b73c6f54f6a066c70500d2d4)`() const` | Gets the value of UpdatedPlayers.
`public inline void `[`SetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a871bc5b64aa0047ca6ccb7ec492e609c)`(const TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & NewValue)` | Sets the value of UpdatedPlayers.
`public inline void `[`SetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a237953ae0610b97b725406f4bd993040)`(TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > && NewValue)` | Sets the value of UpdatedPlayers using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > `[`UpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a63d2245aaf9f6f1f399a0aa7593fbf9f) <a id="structFRHAPI__CalculateRankResponse_1a63d2245aaf9f6f1f399a0aa7593fbf9f"></a>

List of players and their updated ranks.

#### `public virtual bool `[`FromJson`](#structFRHAPI__CalculateRankResponse_1a77a5a28a9b45ec7c6d4f0bcd222a8033)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CalculateRankResponse_1a77a5a28a9b45ec7c6d4f0bcd222a8033"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CalculateRankResponse_1abf3e5e75c87c5138ccf292cf18012958)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CalculateRankResponse_1abf3e5e75c87c5138ccf292cf18012958"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & `[`GetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1adacc1d08d692e54e615637a58e6e56c3)`()` <a id="structFRHAPI__CalculateRankResponse_1adacc1d08d692e54e615637a58e6e56c3"></a>

Gets the value of UpdatedPlayers.

#### `public inline const TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & `[`GetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1ac6c282f4b73c6f54f6a066c70500d2d4)`() const` <a id="structFRHAPI__CalculateRankResponse_1ac6c282f4b73c6f54f6a066c70500d2d4"></a>

Gets the value of UpdatedPlayers.

#### `public inline void `[`SetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a871bc5b64aa0047ca6ccb7ec492e609c)`(const TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & NewValue)` <a id="structFRHAPI__CalculateRankResponse_1a871bc5b64aa0047ca6ccb7ec492e609c"></a>

Sets the value of UpdatedPlayers.

#### `public inline void `[`SetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a237953ae0610b97b725406f4bd993040)`(TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > && NewValue)` <a id="structFRHAPI__CalculateRankResponse_1a237953ae0610b97b725406f4bd993040"></a>

Sets the value of UpdatedPlayers using move semantics.

