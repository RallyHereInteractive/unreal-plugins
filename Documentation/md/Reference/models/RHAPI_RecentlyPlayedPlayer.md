---
title: RHAPI_RecentlyPlayedPlayer
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RecentlyPlayedPlayer`](#structFRHAPI__RecentlyPlayedPlayer) | Player that was recently played with.

## struct `FRHAPI_RecentlyPlayedPlayer` <a id="structFRHAPI__RecentlyPlayedPlayer"></a>

```
struct FRHAPI_RecentlyPlayedPlayer
  : public FRHAPI_Model
```

Player that was recently played with.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__RecentlyPlayedPlayer_1a37bcff1e77c0de2cb22ba028b3315e30) | Player UUID.
`public virtual bool `[`FromJson`](#structFRHAPI__RecentlyPlayedPlayer_1a68d3fbe0c72231baee0fb426ab2ad2d7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RecentlyPlayedPlayer_1a3e11ab63b833c40f14821b08053cbc7a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__RecentlyPlayedPlayer_1a51b325a04f28d829391e149960226a7f)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__RecentlyPlayedPlayer_1a17c45ee53a3fd7a7c5b38f381f812295)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__RecentlyPlayedPlayer_1a2c2f9f15308a0d53c8bba60a08d3a041)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__RecentlyPlayedPlayer_1a63b11755a9e13c988b5dec74bd81dbe3)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__RecentlyPlayedPlayer_1a37bcff1e77c0de2cb22ba028b3315e30) <a id="structFRHAPI__RecentlyPlayedPlayer_1a37bcff1e77c0de2cb22ba028b3315e30"></a>

Player UUID.

#### `public virtual bool `[`FromJson`](#structFRHAPI__RecentlyPlayedPlayer_1a68d3fbe0c72231baee0fb426ab2ad2d7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RecentlyPlayedPlayer_1a68d3fbe0c72231baee0fb426ab2ad2d7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RecentlyPlayedPlayer_1a3e11ab63b833c40f14821b08053cbc7a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RecentlyPlayedPlayer_1a3e11ab63b833c40f14821b08053cbc7a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__RecentlyPlayedPlayer_1a51b325a04f28d829391e149960226a7f)`()` <a id="structFRHAPI__RecentlyPlayedPlayer_1a51b325a04f28d829391e149960226a7f"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__RecentlyPlayedPlayer_1a17c45ee53a3fd7a7c5b38f381f812295)`() const` <a id="structFRHAPI__RecentlyPlayedPlayer_1a17c45ee53a3fd7a7c5b38f381f812295"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__RecentlyPlayedPlayer_1a2c2f9f15308a0d53c8bba60a08d3a041)`(const FGuid & NewValue)` <a id="structFRHAPI__RecentlyPlayedPlayer_1a2c2f9f15308a0d53c8bba60a08d3a041"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__RecentlyPlayedPlayer_1a63b11755a9e13c988b5dec74bd81dbe3)`(FGuid && NewValue)` <a id="structFRHAPI__RecentlyPlayedPlayer_1a63b11755a9e13c988b5dec74bd81dbe3"></a>

Sets the value of PlayerUuid using move semantics.

