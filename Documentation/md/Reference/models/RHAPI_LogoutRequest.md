---
title: RHAPI_LogoutRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LogoutRequest`](#structFRHAPI__LogoutRequest) | Logout request.

## struct `FRHAPI_LogoutRequest` <a id="structFRHAPI__LogoutRequest"></a>

```
struct FRHAPI_LogoutRequest
  : public FRHAPI_Model
```

Logout request.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RefreshToken`](#structFRHAPI__LogoutRequest_1abc7366e4cbef7e9714bad37ee03609ff) | Refresh token to be invalidated.
`public virtual bool `[`FromJson`](#structFRHAPI__LogoutRequest_1a04508049d11bf756abfdb93d850a13d2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LogoutRequest_1af81f02fcf851b9af74ec9472a6eb6745)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetRefreshToken`](#structFRHAPI__LogoutRequest_1a5c691a595f594556bff22034cbee026c)`()` | Gets the value of RefreshToken.
`public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__LogoutRequest_1a14e3242f54b83c0abb8c56d9d1c7ce2d)`() const` | Gets the value of RefreshToken.
`public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__LogoutRequest_1ab3b9eb55fef20fcfbeef8eac3f092c85)`(const FString & NewValue)` | Sets the value of RefreshToken.
`public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__LogoutRequest_1a9a7d781c4973ed7c177b5db52fd24acb)`(FString && NewValue)` | Sets the value of RefreshToken using move semantics.

### Members

#### `public FString `[`RefreshToken`](#structFRHAPI__LogoutRequest_1abc7366e4cbef7e9714bad37ee03609ff) <a id="structFRHAPI__LogoutRequest_1abc7366e4cbef7e9714bad37ee03609ff"></a>

Refresh token to be invalidated.

#### `public virtual bool `[`FromJson`](#structFRHAPI__LogoutRequest_1a04508049d11bf756abfdb93d850a13d2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LogoutRequest_1a04508049d11bf756abfdb93d850a13d2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LogoutRequest_1af81f02fcf851b9af74ec9472a6eb6745)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LogoutRequest_1af81f02fcf851b9af74ec9472a6eb6745"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetRefreshToken`](#structFRHAPI__LogoutRequest_1a5c691a595f594556bff22034cbee026c)`()` <a id="structFRHAPI__LogoutRequest_1a5c691a595f594556bff22034cbee026c"></a>

Gets the value of RefreshToken.

#### `public inline FORCEINLINE const FString & `[`GetRefreshToken`](#structFRHAPI__LogoutRequest_1a14e3242f54b83c0abb8c56d9d1c7ce2d)`() const` <a id="structFRHAPI__LogoutRequest_1a14e3242f54b83c0abb8c56d9d1c7ce2d"></a>

Gets the value of RefreshToken.

#### `public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__LogoutRequest_1ab3b9eb55fef20fcfbeef8eac3f092c85)`(const FString & NewValue)` <a id="structFRHAPI__LogoutRequest_1ab3b9eb55fef20fcfbeef8eac3f092c85"></a>

Sets the value of RefreshToken.

#### `public inline FORCEINLINE void `[`SetRefreshToken`](#structFRHAPI__LogoutRequest_1a9a7d781c4973ed7c177b5db52fd24acb)`(FString && NewValue)` <a id="structFRHAPI__LogoutRequest_1a9a7d781c4973ed7c177b5db52fd24acb"></a>

Sets the value of RefreshToken using move semantics.

