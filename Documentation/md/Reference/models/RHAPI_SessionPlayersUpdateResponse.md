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
`public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayersUpdateResponse_1a99a3cafae8cf16f761f423ec5fccee04)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1a796ea0d0e60972c483dffbcf70e1f8c0)`()` | Gets the value of Players.
`public inline const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1a7a351d6b661862572e6ec22f55ea97bb)`() const` | Gets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1ac7b0d70904269e919abdf1e8abdf06f8)`(const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & NewValue)` | Sets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1ab9d02c90014bc2e6e9e43300da16404c)`(TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > && NewValue)` | Sets the value of Players using move semantics.

### Members

#### `public TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > `[`Players`](#structFRHAPI__SessionPlayersUpdateResponse_1afdd7fe58fbf433d8e2380463ae0e8de2) <a id="structFRHAPI__SessionPlayersUpdateResponse_1afdd7fe58fbf433d8e2380463ae0e8de2"></a>

List of updated players.

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayersUpdateResponse_1ab0d969444267704771488508e28f311c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionPlayersUpdateResponse_1ab0d969444267704771488508e28f311c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayersUpdateResponse_1a99a3cafae8cf16f761f423ec5fccee04)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionPlayersUpdateResponse_1a99a3cafae8cf16f761f423ec5fccee04"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1a796ea0d0e60972c483dffbcf70e1f8c0)`()` <a id="structFRHAPI__SessionPlayersUpdateResponse_1a796ea0d0e60972c483dffbcf70e1f8c0"></a>

Gets the value of Players.

#### `public inline const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1a7a351d6b661862572e6ec22f55ea97bb)`() const` <a id="structFRHAPI__SessionPlayersUpdateResponse_1a7a351d6b661862572e6ec22f55ea97bb"></a>

Gets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1ac7b0d70904269e919abdf1e8abdf06f8)`(const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & NewValue)` <a id="structFRHAPI__SessionPlayersUpdateResponse_1ac7b0d70904269e919abdf1e8abdf06f8"></a>

Sets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__SessionPlayersUpdateResponse_1ab9d02c90014bc2e6e9e43300da16404c)`(TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > && NewValue)` <a id="structFRHAPI__SessionPlayersUpdateResponse_1ab9d02c90014bc2e6e9e43300da16404c"></a>

Sets the value of Players using move semantics.
