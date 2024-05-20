# RHAPI_PlayerRankRequestResponse <a id="group__RHAPI__PlayerRankRequestResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankRequestResponse`](#structFRHAPI__PlayerRankRequestResponse) | DEPRECATED Response to successfully requesting all of a player&#39;s ranks.

## struct `FRHAPI_PlayerRankRequestResponse` <a id="structFRHAPI__PlayerRankRequestResponse"></a>

```
struct FRHAPI_PlayerRankRequestResponse
  : public FRHAPI_Model
```

DEPRECATED Response to successfully requesting all of a player&#39;s ranks.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > `[`PlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1ac818b287026b56e3dd2346a1cdf1bb6d) | List of player's ranks.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankRequestResponse_1ab201b6de11c6c8d4274b4c0d2f6514e8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankRequestResponse_1a39c12de11a6042ed0bac431b60dfe1d2)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a187a105bbbfac3f43e9c3197eecb0c17)`()` | Gets the value of PlayerRanks.
`public inline const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a3fb706b2dea3a1c89b950a12f302c931)`() const` | Gets the value of PlayerRanks.
`public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a77a941882973e2e64e17a12ee00389d6)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > NewValue)` | Sets the value of PlayerRanks.

#### Members

#### `public TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > `[`PlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1ac818b287026b56e3dd2346a1cdf1bb6d) <a id="structFRHAPI__PlayerRankRequestResponse_1ac818b287026b56e3dd2346a1cdf1bb6d"></a>

List of player's ranks.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankRequestResponse_1ab201b6de11c6c8d4274b4c0d2f6514e8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankRequestResponse_1ab201b6de11c6c8d4274b4c0d2f6514e8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankRequestResponse_1a39c12de11a6042ed0bac431b60dfe1d2)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerRankRequestResponse_1a39c12de11a6042ed0bac431b60dfe1d2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a187a105bbbfac3f43e9c3197eecb0c17)`()` <a id="structFRHAPI__PlayerRankRequestResponse_1a187a105bbbfac3f43e9c3197eecb0c17"></a>

Gets the value of PlayerRanks.

#### `public inline const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a3fb706b2dea3a1c89b950a12f302c931)`() const` <a id="structFRHAPI__PlayerRankRequestResponse_1a3fb706b2dea3a1c89b950a12f302c931"></a>

Gets the value of PlayerRanks.

#### `public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a77a941882973e2e64e17a12ee00389d6)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > NewValue)` <a id="structFRHAPI__PlayerRankRequestResponse_1a77a941882973e2e64e17a12ee00389d6"></a>

Sets the value of PlayerRanks.

