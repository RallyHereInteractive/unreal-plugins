---
title: RHAPI_SessionPlayersUpdateResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionPlayersUpdateResponse`](#structFRHAPI__SessionPlayersUpdateResponse) | 

## struct `FRHAPI_SessionPlayersUpdateResponse` <a id="structFRHAPI__SessionPlayersUpdateResponse"></a>

```
struct FRHAPI_SessionPlayersUpdateResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > `[`Players`](#structFRHAPI__SessionPlayersUpdateResponse_1afdd7fe58fbf433d8e2380463ae0e8de2) | List of updated players.
`public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayersUpdateResponse_1ab0d969444267704771488508e28f311c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayersUpdateResponse_1a95f5b72641dbc3a8e99869b6c02d5416)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1ab462b2b5349373a2154a4464d7ed991c)`()` | Gets the value of Players.
`public inline FORCEINLINE const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1ab98b50319d71c37e748b8a1a3123ef51)`() const` | Gets the value of Players.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1a099173e0c4b60a5c48121a38d0e4425b)`(const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & NewValue)` | Sets the value of Players.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1ae5fcc08be85c0abaea93f6e3bd82b9a8)`(TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > && NewValue)` | Sets the value of Players using move semantics.

### Members

#### `public TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > `[`Players`](#structFRHAPI__SessionPlayersUpdateResponse_1afdd7fe58fbf433d8e2380463ae0e8de2) <a id="structFRHAPI__SessionPlayersUpdateResponse_1afdd7fe58fbf433d8e2380463ae0e8de2"></a>

List of updated players.

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayersUpdateResponse_1ab0d969444267704771488508e28f311c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionPlayersUpdateResponse_1ab0d969444267704771488508e28f311c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayersUpdateResponse_1a95f5b72641dbc3a8e99869b6c02d5416)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionPlayersUpdateResponse_1a95f5b72641dbc3a8e99869b6c02d5416"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1ab462b2b5349373a2154a4464d7ed991c)`()` <a id="structFRHAPI__SessionPlayersUpdateResponse_1ab462b2b5349373a2154a4464d7ed991c"></a>

Gets the value of Players.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1ab98b50319d71c37e748b8a1a3123ef51)`() const` <a id="structFRHAPI__SessionPlayersUpdateResponse_1ab98b50319d71c37e748b8a1a3123ef51"></a>

Gets the value of Players.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1a099173e0c4b60a5c48121a38d0e4425b)`(const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & NewValue)` <a id="structFRHAPI__SessionPlayersUpdateResponse_1a099173e0c4b60a5c48121a38d0e4425b"></a>

Sets the value of Players.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1ae5fcc08be85c0abaea93f6e3bd82b9a8)`(TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > && NewValue)` <a id="structFRHAPI__SessionPlayersUpdateResponse_1ae5fcc08be85c0abaea93f6e3bd82b9a8"></a>

Sets the value of Players using move semantics.

