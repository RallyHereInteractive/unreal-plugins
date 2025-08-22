---
title: RHAPI_BlockedPlayer
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BlockedPlayer`](#structFRHAPI__BlockedPlayer) | The player that is being blocked.

## struct `FRHAPI_BlockedPlayer` <a id="structFRHAPI__BlockedPlayer"></a>

```
struct FRHAPI_BlockedPlayer
  : public FRHAPI_Model
```

The player that is being blocked.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`BlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a25926c09c253b77621025b03a36ddaa3) | 
`public FDateTime `[`LastModifiedOn`](#structFRHAPI__BlockedPlayer_1aae4cca6fd2693a52cd56e666dd06e6f0) | 
`public virtual bool `[`FromJson`](#structFRHAPI__BlockedPlayer_1ae9476290a0e78b218e37aa5d70e521a8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BlockedPlayer_1ae941d260a3ca145999003bd7c32fe59d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1abfded4b8aaaed4a6857cc4a0713925db)`()` | Gets the value of BlockedPlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a9b688779d20c016de0c0eb12a5c6ab3e)`() const` | Gets the value of BlockedPlayerUuid.
`public inline FORCEINLINE void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1ad4356f5fb5d5ffaf797a6198f6c62465)`(const FGuid & NewValue)` | Sets the value of BlockedPlayerUuid.
`public inline FORCEINLINE void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1ab75b372e61f29e4d139ef16add1b27e2)`(FGuid && NewValue)` | Sets the value of BlockedPlayerUuid using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a7ea14ef70a094bb040c2561a04b183bb)`()` | Gets the value of LastModifiedOn.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a577941bede783b397b0d67958e010494)`() const` | Gets the value of LastModifiedOn.
`public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1aa374e2211a66c7fa0b9bdde9e3db9358)`(const FDateTime & NewValue)` | Sets the value of LastModifiedOn.
`public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1af5d72fef2df0165c4a5ac72f48db4b66)`(FDateTime && NewValue)` | Sets the value of LastModifiedOn using move semantics.

### Members

#### `public FGuid `[`BlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a25926c09c253b77621025b03a36ddaa3) <a id="structFRHAPI__BlockedPlayer_1a25926c09c253b77621025b03a36ddaa3"></a>

#### `public FDateTime `[`LastModifiedOn`](#structFRHAPI__BlockedPlayer_1aae4cca6fd2693a52cd56e666dd06e6f0) <a id="structFRHAPI__BlockedPlayer_1aae4cca6fd2693a52cd56e666dd06e6f0"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__BlockedPlayer_1ae9476290a0e78b218e37aa5d70e521a8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BlockedPlayer_1ae9476290a0e78b218e37aa5d70e521a8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BlockedPlayer_1ae941d260a3ca145999003bd7c32fe59d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BlockedPlayer_1ae941d260a3ca145999003bd7c32fe59d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1abfded4b8aaaed4a6857cc4a0713925db)`()` <a id="structFRHAPI__BlockedPlayer_1abfded4b8aaaed4a6857cc4a0713925db"></a>

Gets the value of BlockedPlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a9b688779d20c016de0c0eb12a5c6ab3e)`() const` <a id="structFRHAPI__BlockedPlayer_1a9b688779d20c016de0c0eb12a5c6ab3e"></a>

Gets the value of BlockedPlayerUuid.

#### `public inline FORCEINLINE void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1ad4356f5fb5d5ffaf797a6198f6c62465)`(const FGuid & NewValue)` <a id="structFRHAPI__BlockedPlayer_1ad4356f5fb5d5ffaf797a6198f6c62465"></a>

Sets the value of BlockedPlayerUuid.

#### `public inline FORCEINLINE void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1ab75b372e61f29e4d139ef16add1b27e2)`(FGuid && NewValue)` <a id="structFRHAPI__BlockedPlayer_1ab75b372e61f29e4d139ef16add1b27e2"></a>

Sets the value of BlockedPlayerUuid using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a7ea14ef70a094bb040c2561a04b183bb)`()` <a id="structFRHAPI__BlockedPlayer_1a7ea14ef70a094bb040c2561a04b183bb"></a>

Gets the value of LastModifiedOn.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a577941bede783b397b0d67958e010494)`() const` <a id="structFRHAPI__BlockedPlayer_1a577941bede783b397b0d67958e010494"></a>

Gets the value of LastModifiedOn.

#### `public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1aa374e2211a66c7fa0b9bdde9e3db9358)`(const FDateTime & NewValue)` <a id="structFRHAPI__BlockedPlayer_1aa374e2211a66c7fa0b9bdde9e3db9358"></a>

Sets the value of LastModifiedOn.

#### `public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1af5d72fef2df0165c4a5ac72f48db4b66)`(FDateTime && NewValue)` <a id="structFRHAPI__BlockedPlayer_1af5d72fef2df0165c4a5ac72f48db4b66"></a>

Sets the value of LastModifiedOn using move semantics.

