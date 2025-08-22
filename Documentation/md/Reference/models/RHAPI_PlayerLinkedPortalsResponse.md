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
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerLinkedPortalsResponse_1a7873d4dfd1e1c0bceaf084d9597f1526)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a1abcb8c42308b2ae18808390cca258f0)`()` | Gets the value of Player.
`public inline FORCEINLINE const `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a377902d65bbcb43a6b78df72bd1bb27e)`() const` | Gets the value of Player.
`public inline FORCEINLINE void `[`SetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a563f21f39910cd7e01209ceb94d45c67)`(const `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & NewValue)` | Sets the value of Player.
`public inline FORCEINLINE void `[`SetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a23db8081c182e0e5f88d4a19a65d6d05)`(`[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` && NewValue)` | Sets the value of Player using move semantics.
`public inline FORCEINLINE TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a35cd9859698d3fa6a5ff62c205cf6378)`()` | Gets the value of LinkedPortals.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a99bc1cff11d12d188400ec5f60891721)`() const` | Gets the value of LinkedPortals.
`public inline FORCEINLINE void `[`SetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a34e8e9a69f21f87546b868b81af77b64)`(const TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & NewValue)` | Sets the value of LinkedPortals.
`public inline FORCEINLINE void `[`SetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a98bd4b947b0b69e135a0a7bee1c45c60)`(TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > && NewValue)` | Sets the value of LinkedPortals using move semantics.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerLinkedPortalsResponse_1a7873d4dfd1e1c0bceaf084d9597f1526)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a7873d4dfd1e1c0bceaf084d9597f1526"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a1abcb8c42308b2ae18808390cca258f0)`()` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a1abcb8c42308b2ae18808390cca258f0"></a>

Gets the value of Player.

#### `public inline FORCEINLINE const `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & `[`GetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a377902d65bbcb43a6b78df72bd1bb27e)`() const` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a377902d65bbcb43a6b78df72bd1bb27e"></a>

Gets the value of Player.

#### `public inline FORCEINLINE void `[`SetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a563f21f39910cd7e01209ceb94d45c67)`(const `[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` & NewValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a563f21f39910cd7e01209ceb94d45c67"></a>

Sets the value of Player.

#### `public inline FORCEINLINE void `[`SetPlayer`](#structFRHAPI__PlayerLinkedPortalsResponse_1a23db8081c182e0e5f88d4a19a65d6d05)`(`[`FRHAPI_PlayerPersonResponse`](RHAPI_PlayerPersonResponse.md#structFRHAPI__PlayerPersonResponse)` && NewValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a23db8081c182e0e5f88d4a19a65d6d05"></a>

Sets the value of Player using move semantics.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a35cd9859698d3fa6a5ff62c205cf6378)`()` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a35cd9859698d3fa6a5ff62c205cf6378"></a>

Gets the value of LinkedPortals.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & `[`GetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a99bc1cff11d12d188400ec5f60891721)`() const` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a99bc1cff11d12d188400ec5f60891721"></a>

Gets the value of LinkedPortals.

#### `public inline FORCEINLINE void `[`SetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a34e8e9a69f21f87546b868b81af77b64)`(const TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > & NewValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a34e8e9a69f21f87546b868b81af77b64"></a>

Sets the value of LinkedPortals.

#### `public inline FORCEINLINE void `[`SetLinkedPortals`](#structFRHAPI__PlayerLinkedPortalsResponse_1a98bd4b947b0b69e135a0a7bee1c45c60)`(TArray< `[`FRHAPI_PortalUserResponse`](RHAPI_PortalUserResponse.md#structFRHAPI__PortalUserResponse)` > && NewValue)` <a id="structFRHAPI__PlayerLinkedPortalsResponse_1a98bd4b947b0b69e135a0a7bee1c45c60"></a>

Sets the value of LinkedPortals using move semantics.

