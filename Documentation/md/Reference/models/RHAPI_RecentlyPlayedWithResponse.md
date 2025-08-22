---
title: RHAPI_RecentlyPlayedWithResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RecentlyPlayedWithResponse`](#structFRHAPI__RecentlyPlayedWithResponse) | List of players that this user recently played with.

## struct `FRHAPI_RecentlyPlayedWithResponse` <a id="structFRHAPI__RecentlyPlayedWithResponse"></a>

```
struct FRHAPI_RecentlyPlayedWithResponse
  : public FRHAPI_Model
```

List of players that this user recently played with.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > `[`Players_Optional`](#structFRHAPI__RecentlyPlayedWithResponse_1a58c6727b0a88fd238f08b3f475f52e6c) | List of players.
`public bool `[`Players_IsSet`](#structFRHAPI__RecentlyPlayedWithResponse_1af122b7674609b13a0edf25d99f33fdfe) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RecentlyPlayedWithResponse_1afb7e8e3317e3cf92f993d1cd5139a271)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RecentlyPlayedWithResponse_1a1b8e33f7a9984045ababddbf7f9cfb8e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1af559c4acfcff9ab55d6fdfb60fa1e4b3)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1ab09baf4cbc5fd9841f4044083a210d6b)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1aca25926e765ef0a9b821fb373dc8468a)`(const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1a4358e937e19f05034c1b7c1ecddaaa23)`(TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > * `[`GetPlayersOrNull`](#structFRHAPI__RecentlyPlayedWithResponse_1a6e19e0a064112fe9fdd0c252fcd48143)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > * `[`GetPlayersOrNull`](#structFRHAPI__RecentlyPlayedWithResponse_1a2fbec55e19b6fb54371890086e3663bd)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1afc5c152b4c2dedebf61d507a3ff019d8)`(const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1a24dc1b7a2d953fc4b98a75fd094d04dd)`(TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1ad7afce42fd45f94a1964e169d9be6bab)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > `[`Players_Optional`](#structFRHAPI__RecentlyPlayedWithResponse_1a58c6727b0a88fd238f08b3f475f52e6c) <a id="structFRHAPI__RecentlyPlayedWithResponse_1a58c6727b0a88fd238f08b3f475f52e6c"></a>

List of players.

#### `public bool `[`Players_IsSet`](#structFRHAPI__RecentlyPlayedWithResponse_1af122b7674609b13a0edf25d99f33fdfe) <a id="structFRHAPI__RecentlyPlayedWithResponse_1af122b7674609b13a0edf25d99f33fdfe"></a>

true if Players_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__RecentlyPlayedWithResponse_1afb7e8e3317e3cf92f993d1cd5139a271)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RecentlyPlayedWithResponse_1afb7e8e3317e3cf92f993d1cd5139a271"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RecentlyPlayedWithResponse_1a1b8e33f7a9984045ababddbf7f9cfb8e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RecentlyPlayedWithResponse_1a1b8e33f7a9984045ababddbf7f9cfb8e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1af559c4acfcff9ab55d6fdfb60fa1e4b3)`()` <a id="structFRHAPI__RecentlyPlayedWithResponse_1af559c4acfcff9ab55d6fdfb60fa1e4b3"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1ab09baf4cbc5fd9841f4044083a210d6b)`() const` <a id="structFRHAPI__RecentlyPlayedWithResponse_1ab09baf4cbc5fd9841f4044083a210d6b"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1aca25926e765ef0a9b821fb373dc8468a)`(const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & DefaultValue) const` <a id="structFRHAPI__RecentlyPlayedWithResponse_1aca25926e765ef0a9b821fb373dc8468a"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1a4358e937e19f05034c1b7c1ecddaaa23)`(TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & OutValue) const` <a id="structFRHAPI__RecentlyPlayedWithResponse_1a4358e937e19f05034c1b7c1ecddaaa23"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > * `[`GetPlayersOrNull`](#structFRHAPI__RecentlyPlayedWithResponse_1a6e19e0a064112fe9fdd0c252fcd48143)`()` <a id="structFRHAPI__RecentlyPlayedWithResponse_1a6e19e0a064112fe9fdd0c252fcd48143"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > * `[`GetPlayersOrNull`](#structFRHAPI__RecentlyPlayedWithResponse_1a2fbec55e19b6fb54371890086e3663bd)`() const` <a id="structFRHAPI__RecentlyPlayedWithResponse_1a2fbec55e19b6fb54371890086e3663bd"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1afc5c152b4c2dedebf61d507a3ff019d8)`(const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & NewValue)` <a id="structFRHAPI__RecentlyPlayedWithResponse_1afc5c152b4c2dedebf61d507a3ff019d8"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1a24dc1b7a2d953fc4b98a75fd094d04dd)`(TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > && NewValue)` <a id="structFRHAPI__RecentlyPlayedWithResponse_1a24dc1b7a2d953fc4b98a75fd094d04dd"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1ad7afce42fd45f94a1964e169d9be6bab)`()` <a id="structFRHAPI__RecentlyPlayedWithResponse_1ad7afce42fd45f94a1964e169d9be6bab"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

