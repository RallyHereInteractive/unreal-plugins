---
title: RHAPI_PlayerLinkedPortalsResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerLinkedPortalsResponse`](#structFRHAPI__PlayerLinkedPortalsResponse) | Response for getting a player&#39;s linked portals.

## struct `FRHAPI_PlayerLinkedPortalsResponse` <a id="structFRHAPI__PlayerLinkedPortalsResponse"></a>

```
struct FRHAPI_PlayerLinkedPortalsResponse
  : public FRHAPI_Model
```

Response for getting a player&#39;s linked portals.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` `[`Player`](#structFRHAPI__PlayerLinkedPortalsResponse_1acac06fcdbf166e78fa8fe536a4c55708) | Player info.
`public TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > `[`LinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1ac1f8f019c04222056b61d97b54d8272f) | List of linked portals.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerLinkedPortalsResponse_1ab764e0b7811ac62d2a24823d7e02837f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerLinkedPortalsResponse_1a49f27aea6a327fa8231c13ad292bc7a7)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1ab4f03673760a8590bb5e4a3538d12e91)`()` | Gets the value of Player.
`public inline const `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1aba984aeda927da00cc0a451d9de3aed5)`() const` | Gets the value of Player.
`public inline void `[`SetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a61e0919c31cfd378c94cc3b4b68d48b0)`(const `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & NewValue)` | Sets the value of Player.
`public inline void `[`SetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a1ea214389b211d3febaacbd34dd4e56e)`(`[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` && NewValue)` | Sets the value of Player using move semantics.
`public inline TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a196d15c210a1a5307ffc1da73603233f)`()` | Gets the value of LinkedPortals.
`public inline const TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1aee0bbbacb0df667a9e2e819eace01a64)`() const` | Gets the value of LinkedPortals.
`public inline void `[`SetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a8d6278e838d019bee0007359dd0ad15f)`(const TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & NewValue)` | Sets the value of LinkedPortals.
`public inline void `[`SetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a52038c68a28669f795dc240252448b76)`(TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > && NewValue)` | Sets the value of LinkedPortals using move semantics.

### Members

#### `public `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` `[`Player`](#structFRHAPI__PlayerLinkedPortalsResponse_1acac06fcdbf166e78fa8fe536a4c55708) <a id="structFRHAPI__PlayerLinkedPortalsResponse_1acac06fcdbf166e78fa8fe536a4c55708"></a>

Player info.

#### `public TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > `[`LinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1ac1f8f019c04222056b61d97b54d8272f) <a id="structFRHAPI__PlayerLinkedPortalsResponse_1ac1f8f019c04222056b61d97b54d8272f"></a>

List of linked portals.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerLinkedPortalsResponse_1ab764e0b7811ac62d2a24823d7e02837f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1ab764e0b7811ac62d2a24823d7e02837f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerLinkedPortalsResponse_1a49f27aea6a327fa8231c13ad292bc7a7)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a49f27aea6a327fa8231c13ad292bc7a7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1ab4f03673760a8590bb5e4a3538d12e91)`()` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1ab4f03673760a8590bb5e4a3538d12e91"></a>

Gets the value of Player.

#### `public inline const `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1aba984aeda927da00cc0a451d9de3aed5)`() const` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1aba984aeda927da00cc0a451d9de3aed5"></a>

Gets the value of Player.

#### `public inline void `[`SetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a61e0919c31cfd378c94cc3b4b68d48b0)`(const `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & NewValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a61e0919c31cfd378c94cc3b4b68d48b0"></a>

Sets the value of Player.

#### `public inline void `[`SetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a1ea214389b211d3febaacbd34dd4e56e)`(`[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` && NewValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a1ea214389b211d3febaacbd34dd4e56e"></a>

Sets the value of Player using move semantics.

#### `public inline TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a196d15c210a1a5307ffc1da73603233f)`()` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a196d15c210a1a5307ffc1da73603233f"></a>

Gets the value of LinkedPortals.

#### `public inline const TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1aee0bbbacb0df667a9e2e819eace01a64)`() const` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1aee0bbbacb0df667a9e2e819eace01a64"></a>

Gets the value of LinkedPortals.

#### `public inline void `[`SetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a8d6278e838d019bee0007359dd0ad15f)`(const TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & NewValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a8d6278e838d019bee0007359dd0ad15f"></a>

Sets the value of LinkedPortals.

#### `public inline void `[`SetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a52038c68a28669f795dc240252448b76)`(TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > && NewValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a52038c68a28669f795dc240252448b76"></a>

Sets the value of LinkedPortals using move semantics.

