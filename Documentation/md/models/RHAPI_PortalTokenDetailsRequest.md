# group `RHAPI_PortalTokenDetailsRequest` <a id="group__RHAPI__PortalTokenDetailsRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PortalTokenDetailsRequest`](#structFRHAPI__PortalTokenDetailsRequest) | 

---
title: FRHAPI_PortalTokenDetailsRequest
---

```
struct FRHAPI_PortalTokenDetailsRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PortalTokenDetailsGrantType `[`GrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a548d6c8ee9cc94951d52dad3126cf369) | 
`public FString `[`PortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a5f955bb90686ea2875c2fe02ea524a98) | Token or secret used to authenticate the provided grant type.
`public virtual bool `[`FromJson`](#structFRHAPI__PortalTokenDetailsRequest_1a19d4549a8b5e8247a9211a483b8b82da)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalTokenDetailsRequest_1ad1841db328a8a8552de393b9bc730b52)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a6ad035d7838790f6fbb5f880bb0bfee7)`()` | Gets the value of GrantType.
`public inline const ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a97be8803a8e6d79aa4879a1b10cf900e)`() const` | Gets the value of GrantType.
`public inline void `[`SetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a6a742769dc62a4b77c63fc4dcb8d6ece)`(const ERHAPI_PortalTokenDetailsGrantType & NewValue)` | Sets the value of GrantType.
`public inline void `[`SetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a026dca8a423de9cb90d5f9ed7652d238)`(ERHAPI_PortalTokenDetailsGrantType && NewValue)` | Sets the value of GrantType using move semantics.
`public inline FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a7bcd5829f00a691f006b54bd37074dd9)`()` | Gets the value of PortalAccessToken.
`public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1ae1acdc8fd0cc19806a085b2059dd6271)`() const` | Gets the value of PortalAccessToken.
`public inline void `[`SetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a23dddfeacb87b7f85290d6616685bb1c)`(const FString & NewValue)` | Sets the value of PortalAccessToken.
`public inline void `[`SetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a8b736356761517291a986bc56b7f34e3)`(FString && NewValue)` | Sets the value of PortalAccessToken using move semantics.

### Members

#### `public ERHAPI_PortalTokenDetailsGrantType `[`GrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a548d6c8ee9cc94951d52dad3126cf369) <a id="structFRHAPI__PortalTokenDetailsRequest_1a548d6c8ee9cc94951d52dad3126cf369"></a>

#### `public FString `[`PortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a5f955bb90686ea2875c2fe02ea524a98) <a id="structFRHAPI__PortalTokenDetailsRequest_1a5f955bb90686ea2875c2fe02ea524a98"></a>

Token or secret used to authenticate the provided grant type.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PortalTokenDetailsRequest_1a19d4549a8b5e8247a9211a483b8b82da)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1a19d4549a8b5e8247a9211a483b8b82da"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalTokenDetailsRequest_1ad1841db328a8a8552de393b9bc730b52)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PortalTokenDetailsRequest_1ad1841db328a8a8552de393b9bc730b52"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a6ad035d7838790f6fbb5f880bb0bfee7)`()` <a id="structFRHAPI__PortalTokenDetailsRequest_1a6ad035d7838790f6fbb5f880bb0bfee7"></a>

Gets the value of GrantType.

#### `public inline const ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a97be8803a8e6d79aa4879a1b10cf900e)`() const` <a id="structFRHAPI__PortalTokenDetailsRequest_1a97be8803a8e6d79aa4879a1b10cf900e"></a>

Gets the value of GrantType.

#### `public inline void `[`SetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a6a742769dc62a4b77c63fc4dcb8d6ece)`(const ERHAPI_PortalTokenDetailsGrantType & NewValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1a6a742769dc62a4b77c63fc4dcb8d6ece"></a>

Sets the value of GrantType.

#### `public inline void `[`SetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a026dca8a423de9cb90d5f9ed7652d238)`(ERHAPI_PortalTokenDetailsGrantType && NewValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1a026dca8a423de9cb90d5f9ed7652d238"></a>

Sets the value of GrantType using move semantics.

#### `public inline FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a7bcd5829f00a691f006b54bd37074dd9)`()` <a id="structFRHAPI__PortalTokenDetailsRequest_1a7bcd5829f00a691f006b54bd37074dd9"></a>

Gets the value of PortalAccessToken.

#### `public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1ae1acdc8fd0cc19806a085b2059dd6271)`() const` <a id="structFRHAPI__PortalTokenDetailsRequest_1ae1acdc8fd0cc19806a085b2059dd6271"></a>

Gets the value of PortalAccessToken.

#### `public inline void `[`SetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a23dddfeacb87b7f85290d6616685bb1c)`(const FString & NewValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1a23dddfeacb87b7f85290d6616685bb1c"></a>

Sets the value of PortalAccessToken.

#### `public inline void `[`SetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a8b736356761517291a986bc56b7f34e3)`(FString && NewValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1a8b736356761517291a986bc56b7f34e3"></a>

Sets the value of PortalAccessToken using move semantics.

