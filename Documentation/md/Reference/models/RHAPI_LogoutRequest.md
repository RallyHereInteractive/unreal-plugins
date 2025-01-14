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
`public inline FString & `[`GetRefreshToken`](#structFRHAPI__LogoutRequest_1a4164f3d279010ad374fb92606a373536)`()` | Gets the value of RefreshToken.
`public inline const FString & `[`GetRefreshToken`](#structFRHAPI__LogoutRequest_1ad1218bd3609efe74242d45f6076bc609)`() const` | Gets the value of RefreshToken.
`public inline void `[`SetRefreshToken`](#structFRHAPI__LogoutRequest_1a906473df51492d591b0996bc599e346b)`(const FString & NewValue)` | Sets the value of RefreshToken.
`public inline void `[`SetRefreshToken`](#structFRHAPI__LogoutRequest_1ad589c35d8652a9f7b17a295dd28da9dd)`(FString && NewValue)` | Sets the value of RefreshToken using move semantics.

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

#### `public inline FString & `[`GetRefreshToken`](#structFRHAPI__LogoutRequest_1a4164f3d279010ad374fb92606a373536)`()` <a id="structFRHAPI__LogoutRequest_1a4164f3d279010ad374fb92606a373536"></a>

Gets the value of RefreshToken.

#### `public inline const FString & `[`GetRefreshToken`](#structFRHAPI__LogoutRequest_1ad1218bd3609efe74242d45f6076bc609)`() const` <a id="structFRHAPI__LogoutRequest_1ad1218bd3609efe74242d45f6076bc609"></a>

Gets the value of RefreshToken.

#### `public inline void `[`SetRefreshToken`](#structFRHAPI__LogoutRequest_1a906473df51492d591b0996bc599e346b)`(const FString & NewValue)` <a id="structFRHAPI__LogoutRequest_1a906473df51492d591b0996bc599e346b"></a>

Sets the value of RefreshToken.

#### `public inline void `[`SetRefreshToken`](#structFRHAPI__LogoutRequest_1ad589c35d8652a9f7b17a295dd28da9dd)`(FString && NewValue)` <a id="structFRHAPI__LogoutRequest_1ad589c35d8652a9f7b17a295dd28da9dd"></a>

Sets the value of RefreshToken using move semantics.

