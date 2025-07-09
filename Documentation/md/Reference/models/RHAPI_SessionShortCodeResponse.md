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
`public inline FString & `[`GetShortCode`](#structFRHAPI__SessionShortCodeResponse_1a6abd54f4bd1671a18e05539504611366)`()` | Gets the value of ShortCode.
`public inline const FString & `[`GetShortCode`](#structFRHAPI__SessionShortCodeResponse_1afa5b842f63abfcbf14decd19f1919f98)`() const` | Gets the value of ShortCode.
`public inline void `[`SetShortCode`](#structFRHAPI__SessionShortCodeResponse_1a628732f84bb40a58073d7ff2840d9f30)`(const FString & NewValue)` | Sets the value of ShortCode.
`public inline void `[`SetShortCode`](#structFRHAPI__SessionShortCodeResponse_1a2a27e9540fbab19afec50a2eb87d4191)`(FString && NewValue)` | Sets the value of ShortCode using move semantics.

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

#### `public inline FString & `[`GetShortCode`](#structFRHAPI__SessionShortCodeResponse_1a6abd54f4bd1671a18e05539504611366)`()` <a id="structFRHAPI__SessionShortCodeResponse_1a6abd54f4bd1671a18e05539504611366"></a>

Gets the value of ShortCode.

#### `public inline const FString & `[`GetShortCode`](#structFRHAPI__SessionShortCodeResponse_1afa5b842f63abfcbf14decd19f1919f98)`() const` <a id="structFRHAPI__SessionShortCodeResponse_1afa5b842f63abfcbf14decd19f1919f98"></a>

Gets the value of ShortCode.

#### `public inline void `[`SetShortCode`](#structFRHAPI__SessionShortCodeResponse_1a628732f84bb40a58073d7ff2840d9f30)`(const FString & NewValue)` <a id="structFRHAPI__SessionShortCodeResponse_1a628732f84bb40a58073d7ff2840d9f30"></a>

Sets the value of ShortCode.

#### `public inline void `[`SetShortCode`](#structFRHAPI__SessionShortCodeResponse_1a2a27e9540fbab19afec50a2eb87d4191)`(FString && NewValue)` <a id="structFRHAPI__SessionShortCodeResponse_1a2a27e9540fbab19afec50a2eb87d4191"></a>

Sets the value of ShortCode using move semantics.

