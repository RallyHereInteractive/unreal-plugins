---
title: RHAPI_SessionShortCodeResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionShortCodeResponse`](#structFRHAPI__SessionShortCodeResponse) | 

## struct `FRHAPI_SessionShortCodeResponse` <a id="structFRHAPI__SessionShortCodeResponse"></a>

```
struct FRHAPI_SessionShortCodeResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ShortCode`](#structFRHAPI__SessionShortCodeResponse_1a3608d8f6ba0f1f20f3e2ddefd98bc724) | Generated short code for session.
`public virtual bool `[`FromJson`](#structFRHAPI__SessionShortCodeResponse_1a15c3dcd31d2af188a3638a21121141fe)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionShortCodeResponse_1ae14c98fd08795c0db132924fb50a70f5)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetShortCode`](#structFRHAPI__SessionShortCodeResponse_1a234c9f00b9a82b8393e0661b98d9db16)`()` | Gets the value of ShortCode.
`public inline FORCEINLINE const FString & `[`GetShortCode`](#structFRHAPI__SessionShortCodeResponse_1ad2644e41b1326b7a593ca6bb7da48404)`() const` | Gets the value of ShortCode.
`public inline FORCEINLINE void `[`SetShortCode`](#structFRHAPI__SessionShortCodeResponse_1a7a5e187a0bd4d6ff82294bc1e4b09ad3)`(const FString & NewValue)` | Sets the value of ShortCode.
`public inline FORCEINLINE void `[`SetShortCode`](#structFRHAPI__SessionShortCodeResponse_1ad326c729548dec371f54c85dd04a9c50)`(FString && NewValue)` | Sets the value of ShortCode using move semantics.

### Members

#### `public FString `[`ShortCode`](#structFRHAPI__SessionShortCodeResponse_1a3608d8f6ba0f1f20f3e2ddefd98bc724) <a id="structFRHAPI__SessionShortCodeResponse_1a3608d8f6ba0f1f20f3e2ddefd98bc724"></a>

Generated short code for session.

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionShortCodeResponse_1a15c3dcd31d2af188a3638a21121141fe)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionShortCodeResponse_1a15c3dcd31d2af188a3638a21121141fe"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionShortCodeResponse_1ae14c98fd08795c0db132924fb50a70f5)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionShortCodeResponse_1ae14c98fd08795c0db132924fb50a70f5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetShortCode`](#structFRHAPI__SessionShortCodeResponse_1a234c9f00b9a82b8393e0661b98d9db16)`()` <a id="structFRHAPI__SessionShortCodeResponse_1a234c9f00b9a82b8393e0661b98d9db16"></a>

Gets the value of ShortCode.

#### `public inline FORCEINLINE const FString & `[`GetShortCode`](#structFRHAPI__SessionShortCodeResponse_1ad2644e41b1326b7a593ca6bb7da48404)`() const` <a id="structFRHAPI__SessionShortCodeResponse_1ad2644e41b1326b7a593ca6bb7da48404"></a>

Gets the value of ShortCode.

#### `public inline FORCEINLINE void `[`SetShortCode`](#structFRHAPI__SessionShortCodeResponse_1a7a5e187a0bd4d6ff82294bc1e4b09ad3)`(const FString & NewValue)` <a id="structFRHAPI__SessionShortCodeResponse_1a7a5e187a0bd4d6ff82294bc1e4b09ad3"></a>

Sets the value of ShortCode.

#### `public inline FORCEINLINE void `[`SetShortCode`](#structFRHAPI__SessionShortCodeResponse_1ad326c729548dec371f54c85dd04a9c50)`(FString && NewValue)` <a id="structFRHAPI__SessionShortCodeResponse_1ad326c729548dec371f54c85dd04a9c50"></a>

Sets the value of ShortCode using move semantics.

