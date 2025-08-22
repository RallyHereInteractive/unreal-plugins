---
title: RHAPI_PortalTokenDetailsRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PortalTokenDetailsRequest`](#structFRHAPI__PortalTokenDetailsRequest) | 

## struct `FRHAPI_PortalTokenDetailsRequest` <a id="structFRHAPI__PortalTokenDetailsRequest"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__PortalTokenDetailsRequest_1a5c59dadf4f3d6a428fad912c853e9657)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a0cceb363420e68ce38f6ffcdc2c3639d)`()` | Gets the value of GrantType.
`public inline FORCEINLINE const ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a0b8f95bdb0ba57b0fa0c928926b9fbc2)`() const` | Gets the value of GrantType.
`public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1aacc8ddfcdef74bc188791419d8707fea)`(const ERHAPI_PortalTokenDetailsGrantType & NewValue)` | Sets the value of GrantType.
`public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a3c63afbc698278a00a7ae6223b0cb74a)`(ERHAPI_PortalTokenDetailsGrantType && NewValue)` | Sets the value of GrantType using move semantics.
`public inline FORCEINLINE FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1aae1135d30316e32fd43521aa0c188a53)`()` | Gets the value of PortalAccessToken.
`public inline FORCEINLINE const FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1ab9b04b25331be0e7e4d7e73d1dbba979)`() const` | Gets the value of PortalAccessToken.
`public inline FORCEINLINE void `[`SetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1afe1b33941ad35a2a80a43b0662419896)`(const FString & NewValue)` | Sets the value of PortalAccessToken.
`public inline FORCEINLINE void `[`SetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1ae33bf67c3d9b6990ffc19f27da75e70b)`(FString && NewValue)` | Sets the value of PortalAccessToken using move semantics.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalTokenDetailsRequest_1a5c59dadf4f3d6a428fad912c853e9657)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PortalTokenDetailsRequest_1a5c59dadf4f3d6a428fad912c853e9657"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a0cceb363420e68ce38f6ffcdc2c3639d)`()` <a id="structFRHAPI__PortalTokenDetailsRequest_1a0cceb363420e68ce38f6ffcdc2c3639d"></a>

Gets the value of GrantType.

#### `public inline FORCEINLINE const ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a0b8f95bdb0ba57b0fa0c928926b9fbc2)`() const` <a id="structFRHAPI__PortalTokenDetailsRequest_1a0b8f95bdb0ba57b0fa0c928926b9fbc2"></a>

Gets the value of GrantType.

#### `public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1aacc8ddfcdef74bc188791419d8707fea)`(const ERHAPI_PortalTokenDetailsGrantType & NewValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1aacc8ddfcdef74bc188791419d8707fea"></a>

Sets the value of GrantType.

#### `public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a3c63afbc698278a00a7ae6223b0cb74a)`(ERHAPI_PortalTokenDetailsGrantType && NewValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1a3c63afbc698278a00a7ae6223b0cb74a"></a>

Sets the value of GrantType using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1aae1135d30316e32fd43521aa0c188a53)`()` <a id="structFRHAPI__PortalTokenDetailsRequest_1aae1135d30316e32fd43521aa0c188a53"></a>

Gets the value of PortalAccessToken.

#### `public inline FORCEINLINE const FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1ab9b04b25331be0e7e4d7e73d1dbba979)`() const` <a id="structFRHAPI__PortalTokenDetailsRequest_1ab9b04b25331be0e7e4d7e73d1dbba979"></a>

Gets the value of PortalAccessToken.

#### `public inline FORCEINLINE void `[`SetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1afe1b33941ad35a2a80a43b0662419896)`(const FString & NewValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1afe1b33941ad35a2a80a43b0662419896"></a>

Sets the value of PortalAccessToken.

#### `public inline FORCEINLINE void `[`SetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1ae33bf67c3d9b6990ffc19f27da75e70b)`(FString && NewValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1ae33bf67c3d9b6990ffc19f27da75e70b"></a>

Sets the value of PortalAccessToken using move semantics.

