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
`public inline TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1ac1f97891445fd4b729c1df2df97a103d)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1a3f4301a5c517e7a4218e1099078b7f64)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1ade825e5816ac582cd78aef9cdffe8781)`(const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1a8e877384640317b5bcf283f6fbd34267)`(TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > * `[`GetPlayersOrNull`](#structFRHAPI__RecentlyPlayedWithResponse_1a4799304499d14719f858d2261b6b109a)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > * `[`GetPlayersOrNull`](#structFRHAPI__RecentlyPlayedWithResponse_1a8c91f7cdf7b7bc9a797d3ee513aa1525)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1aa7ede4bfb8dbe8219bee42e97ec778e6)`(const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`SetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1a0afb4683d838f22a9e1aebf94c6491df)`(TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1ad7afce42fd45f94a1964e169d9be6bab)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline bool `[`IsPlayersSet`](#structFRHAPI__RecentlyPlayedWithResponse_1a9df821236934272227ac67aa59b4eae4)`() const` | Checks whether Players_Optional has been set.

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

#### `public inline TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1ac1f97891445fd4b729c1df2df97a103d)`()` <a id="structFRHAPI__RecentlyPlayedWithResponse_1ac1f97891445fd4b729c1df2df97a103d"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1a3f4301a5c517e7a4218e1099078b7f64)`() const` <a id="structFRHAPI__RecentlyPlayedWithResponse_1a3f4301a5c517e7a4218e1099078b7f64"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1ade825e5816ac582cd78aef9cdffe8781)`(const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & DefaultValue) const` <a id="structFRHAPI__RecentlyPlayedWithResponse_1ade825e5816ac582cd78aef9cdffe8781"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1a8e877384640317b5bcf283f6fbd34267)`(TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & OutValue) const` <a id="structFRHAPI__RecentlyPlayedWithResponse_1a8e877384640317b5bcf283f6fbd34267"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > * `[`GetPlayersOrNull`](#structFRHAPI__RecentlyPlayedWithResponse_1a4799304499d14719f858d2261b6b109a)`()` <a id="structFRHAPI__RecentlyPlayedWithResponse_1a4799304499d14719f858d2261b6b109a"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > * `[`GetPlayersOrNull`](#structFRHAPI__RecentlyPlayedWithResponse_1a8c91f7cdf7b7bc9a797d3ee513aa1525)`() const` <a id="structFRHAPI__RecentlyPlayedWithResponse_1a8c91f7cdf7b7bc9a797d3ee513aa1525"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1aa7ede4bfb8dbe8219bee42e97ec778e6)`(const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & NewValue)` <a id="structFRHAPI__RecentlyPlayedWithResponse_1aa7ede4bfb8dbe8219bee42e97ec778e6"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline void `[`SetPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1a0afb4683d838f22a9e1aebf94c6491df)`(TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > && NewValue)` <a id="structFRHAPI__RecentlyPlayedWithResponse_1a0afb4683d838f22a9e1aebf94c6491df"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__RecentlyPlayedWithResponse_1ad7afce42fd45f94a1964e169d9be6bab)`()` <a id="structFRHAPI__RecentlyPlayedWithResponse_1ad7afce42fd45f94a1964e169d9be6bab"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

#### `public inline bool `[`IsPlayersSet`](#structFRHAPI__RecentlyPlayedWithResponse_1a9df821236934272227ac67aa59b4eae4)`() const` <a id="structFRHAPI__RecentlyPlayedWithResponse_1a9df821236934272227ac67aa59b4eae4"></a>

Checks whether Players_Optional has been set.

