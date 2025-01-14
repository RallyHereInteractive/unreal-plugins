---
title: RHAPI_SessionInviteResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionInviteResponse`](#structFRHAPI__SessionInviteResponse) | Response to a request to update a session cohort.

## struct `FRHAPI_SessionInviteResponse` <a id="structFRHAPI__SessionInviteResponse"></a>

```
struct FRHAPI_SessionInviteResponse
  : public FRHAPI_Model
```

Response to a request to update a session cohort.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > `[`Players`](#structFRHAPI__SessionInviteResponse_1a54175b9a9824d8ad9049525d36f6d928) | List of players that were updated.
`public virtual bool `[`FromJson`](#structFRHAPI__SessionInviteResponse_1ada00a7b57a6e5f50351ce4b9b88ef697)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionInviteResponse_1abd6a6e933739c4d78da65e30a4c3e0df)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionInviteResponse_1a617e68f043e506849657a717f97fa635)`()` | Gets the value of Players.
`public inline const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionInviteResponse_1ac9a438bf465d49478330836b9f5898b5)`() const` | Gets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__SessionInviteResponse_1a3782ffb56de3077103b48c53df3c6200)`(const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & NewValue)` | Sets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__SessionInviteResponse_1aef1838cdd0275dd80670886a4688780b)`(TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > && NewValue)` | Sets the value of Players using move semantics.

### Members

#### `public TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > `[`Players`](#structFRHAPI__SessionInviteResponse_1a54175b9a9824d8ad9049525d36f6d928) <a id="structFRHAPI__SessionInviteResponse_1a54175b9a9824d8ad9049525d36f6d928"></a>

List of players that were updated.

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionInviteResponse_1ada00a7b57a6e5f50351ce4b9b88ef697)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionInviteResponse_1ada00a7b57a6e5f50351ce4b9b88ef697"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionInviteResponse_1abd6a6e933739c4d78da65e30a4c3e0df)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionInviteResponse_1abd6a6e933739c4d78da65e30a4c3e0df"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionInviteResponse_1a617e68f043e506849657a717f97fa635)`()` <a id="structFRHAPI__SessionInviteResponse_1a617e68f043e506849657a717f97fa635"></a>

Gets the value of Players.

#### `public inline const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & `[`GetPlayers`](#structFRHAPI__SessionInviteResponse_1ac9a438bf465d49478330836b9f5898b5)`() const` <a id="structFRHAPI__SessionInviteResponse_1ac9a438bf465d49478330836b9f5898b5"></a>

Gets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__SessionInviteResponse_1a3782ffb56de3077103b48c53df3c6200)`(const TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > & NewValue)` <a id="structFRHAPI__SessionInviteResponse_1a3782ffb56de3077103b48c53df3c6200"></a>

Sets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__SessionInviteResponse_1aef1838cdd0275dd80670886a4688780b)`(TArray< `[`FRHAPI_SessionPlayerUpdateResponse`](RHAPI_SessionPlayerUpdateResponse.md#structFRHAPI__SessionPlayerUpdateResponse)` > && NewValue)` <a id="structFRHAPI__SessionInviteResponse_1aef1838cdd0275dd80670886a4688780b"></a>

Sets the value of Players using move semantics.

