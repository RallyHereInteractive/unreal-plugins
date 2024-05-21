# group `RHAPI_PlayerLinkedPortalsResponse` <a id="group__RHAPI__PlayerLinkedPortalsResponse"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerLinkedPortalsResponse_1a76e7a20aec8cefbb1a980050c7695338)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerLinkedPortalsResponse_1aeba5999e8c3c9ea6e5bb1db98bebffb6)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1ab4f03673760a8590bb5e4a3538d12e91)`()` | Gets the value of Player.
`public inline const `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1aba984aeda927da00cc0a451d9de3aed5)`() const` | Gets the value of Player.
`public inline void `[`SetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a08acab14a0dc5a937831282fe5f5411a)`(`[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` NewValue)` | Sets the value of Player.
`public inline TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a196d15c210a1a5307ffc1da73603233f)`()` | Gets the value of LinkedPortals.
`public inline const TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1aee0bbbacb0df667a9e2e819eace01a64)`() const` | Gets the value of LinkedPortals.
`public inline void `[`SetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a686c98afb13ebd719d23e4383f92de5c)`(TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > NewValue)` | Sets the value of LinkedPortals.

### Members

#### `public `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` `[`Player`](#structFRHAPI__PlayerLinkedPortalsResponse_1acac06fcdbf166e78fa8fe536a4c55708) <a id="structFRHAPI__PlayerLinkedPortalsResponse_1acac06fcdbf166e78fa8fe536a4c55708"></a>

Player info.

#### `public TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > `[`LinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1ac1f8f019c04222056b61d97b54d8272f) <a id="structFRHAPI__PlayerLinkedPortalsResponse_1ac1f8f019c04222056b61d97b54d8272f"></a>

List of linked portals.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerLinkedPortalsResponse_1a76e7a20aec8cefbb1a980050c7695338)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a76e7a20aec8cefbb1a980050c7695338"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerLinkedPortalsResponse_1aeba5999e8c3c9ea6e5bb1db98bebffb6)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1aeba5999e8c3c9ea6e5bb1db98bebffb6"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1ab4f03673760a8590bb5e4a3538d12e91)`()` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1ab4f03673760a8590bb5e4a3538d12e91"></a>

Gets the value of Player.

#### `public inline const `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1aba984aeda927da00cc0a451d9de3aed5)`() const` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1aba984aeda927da00cc0a451d9de3aed5"></a>

Gets the value of Player.

#### `public inline void `[`SetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a08acab14a0dc5a937831282fe5f5411a)`(`[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` NewValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a08acab14a0dc5a937831282fe5f5411a"></a>

Sets the value of Player.

#### `public inline TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a196d15c210a1a5307ffc1da73603233f)`()` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a196d15c210a1a5307ffc1da73603233f"></a>

Gets the value of LinkedPortals.

#### `public inline const TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1aee0bbbacb0df667a9e2e819eace01a64)`() const` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1aee0bbbacb0df667a9e2e819eace01a64"></a>

Gets the value of LinkedPortals.

#### `public inline void `[`SetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a686c98afb13ebd719d23e4383f92de5c)`(TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > NewValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a686c98afb13ebd719d23e4383f92de5c"></a>

Sets the value of LinkedPortals.

