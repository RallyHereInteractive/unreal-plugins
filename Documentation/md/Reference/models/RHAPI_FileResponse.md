---
title: RHAPI_FileResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FileResponse`](#structFRHAPI__FileResponse) | 

## struct `FRHAPI_FileResponse` <a id="structFRHAPI__FileResponse"></a>

```
struct FRHAPI_FileResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Name`](#structFRHAPI__FileResponse_1a435d253c1dedbfea366457c8eee9aca9) | 
`public int32 `[`Size`](#structFRHAPI__FileResponse_1a5bad6f39bc7893caf0eb5e7b834bcef3) | 
`public FString `[`ContentType`](#structFRHAPI__FileResponse_1a5a3fc5a9ae9529bcec5a87b01178bd3e) | 
`public FDateTime `[`CreatedTimestamp`](#structFRHAPI__FileResponse_1ae862f97e31ca9b769a5b3b1c1e104fdd) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public virtual bool `[`FromJson`](#structFRHAPI__FileResponse_1a0e24bb57749f3c550d17c9711324bd93)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FileResponse_1a34592519bfb52c8c3cb0181c03b88247)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__FileResponse_1afa4e6b7522acec77a711707b650e4ca5)`()` | Gets the value of Name.
`public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__FileResponse_1a1a946df10aa6428e6ec9c868aee2b6ed)`() const` | Gets the value of Name.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__FileResponse_1a3cc1a8b3cc6b550c1f215c729ca8397a)`(const FString & NewValue)` | Sets the value of Name.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__FileResponse_1ad1fb028b465e25e310ed719db6ff5a39)`(FString && NewValue)` | Sets the value of Name using move semantics.
`public inline FORCEINLINE int32 & `[`GetSize`](#structFRHAPI__FileResponse_1a7976f6987a87f301771aba81a7bf6584)`()` | Gets the value of Size.
`public inline FORCEINLINE const int32 & `[`GetSize`](#structFRHAPI__FileResponse_1a95cadfdc27dd0cef8d3a03da06990629)`() const` | Gets the value of Size.
`public inline FORCEINLINE void `[`SetSize`](#structFRHAPI__FileResponse_1a5124a19f8b94825247c9315d3660fc4f)`(const int32 & NewValue)` | Sets the value of Size.
`public inline FORCEINLINE void `[`SetSize`](#structFRHAPI__FileResponse_1adcbc0f15d6148ba09afbdf8b4654cb78)`(int32 && NewValue)` | Sets the value of Size using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Size`](#structFRHAPI__FileResponse_1a9b1456c916d859e19b81f4c2f2acf454)`()` | Returns the default value of Size.
`public inline FORCEINLINE FString & `[`GetContentType`](#structFRHAPI__FileResponse_1a3a427f4523a5a12270c9aa5b0c20a10a)`()` | Gets the value of ContentType.
`public inline FORCEINLINE const FString & `[`GetContentType`](#structFRHAPI__FileResponse_1a656c3b475963d6a33192b0b303985458)`() const` | Gets the value of ContentType.
`public inline FORCEINLINE void `[`SetContentType`](#structFRHAPI__FileResponse_1aa4c0b9a9e9cffd73898ca1dabc7201de)`(const FString & NewValue)` | Sets the value of ContentType.
`public inline FORCEINLINE void `[`SetContentType`](#structFRHAPI__FileResponse_1aaaebb04dac18c1f838692d2cbe95e617)`(FString && NewValue)` | Sets the value of ContentType using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1aeaa3cd2c11af688e1d52a7b99ec533c0)`()` | Gets the value of CreatedTimestamp.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1a09b5bc6c50498f99cdae12df30ae4d83)`() const` | Gets the value of CreatedTimestamp.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__FileResponse_1acaf263e855f946baabf768128deb62dc)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__FileResponse_1a9e47445784a1bf6176bf87947f09f547)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp using move semantics.

### Members

#### `public FString `[`Name`](#structFRHAPI__FileResponse_1a435d253c1dedbfea366457c8eee9aca9) <a id="structFRHAPI__FileResponse_1a435d253c1dedbfea366457c8eee9aca9"></a>

#### `public int32 `[`Size`](#structFRHAPI__FileResponse_1a5bad6f39bc7893caf0eb5e7b834bcef3) <a id="structFRHAPI__FileResponse_1a5bad6f39bc7893caf0eb5e7b834bcef3"></a>

#### `public FString `[`ContentType`](#structFRHAPI__FileResponse_1a5a3fc5a9ae9529bcec5a87b01178bd3e) <a id="structFRHAPI__FileResponse_1a5a3fc5a9ae9529bcec5a87b01178bd3e"></a>

#### `public FDateTime `[`CreatedTimestamp`](#structFRHAPI__FileResponse_1ae862f97e31ca9b769a5b3b1c1e104fdd) <a id="structFRHAPI__FileResponse_1ae862f97e31ca9b769a5b3b1c1e104fdd"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public virtual bool `[`FromJson`](#structFRHAPI__FileResponse_1a0e24bb57749f3c550d17c9711324bd93)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FileResponse_1a0e24bb57749f3c550d17c9711324bd93"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FileResponse_1a34592519bfb52c8c3cb0181c03b88247)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__FileResponse_1a34592519bfb52c8c3cb0181c03b88247"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__FileResponse_1afa4e6b7522acec77a711707b650e4ca5)`()` <a id="structFRHAPI__FileResponse_1afa4e6b7522acec77a711707b650e4ca5"></a>

Gets the value of Name.

#### `public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__FileResponse_1a1a946df10aa6428e6ec9c868aee2b6ed)`() const` <a id="structFRHAPI__FileResponse_1a1a946df10aa6428e6ec9c868aee2b6ed"></a>

Gets the value of Name.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__FileResponse_1a3cc1a8b3cc6b550c1f215c729ca8397a)`(const FString & NewValue)` <a id="structFRHAPI__FileResponse_1a3cc1a8b3cc6b550c1f215c729ca8397a"></a>

Sets the value of Name.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__FileResponse_1ad1fb028b465e25e310ed719db6ff5a39)`(FString && NewValue)` <a id="structFRHAPI__FileResponse_1ad1fb028b465e25e310ed719db6ff5a39"></a>

Sets the value of Name using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetSize`](#structFRHAPI__FileResponse_1a7976f6987a87f301771aba81a7bf6584)`()` <a id="structFRHAPI__FileResponse_1a7976f6987a87f301771aba81a7bf6584"></a>

Gets the value of Size.

#### `public inline FORCEINLINE const int32 & `[`GetSize`](#structFRHAPI__FileResponse_1a95cadfdc27dd0cef8d3a03da06990629)`() const` <a id="structFRHAPI__FileResponse_1a95cadfdc27dd0cef8d3a03da06990629"></a>

Gets the value of Size.

#### `public inline FORCEINLINE void `[`SetSize`](#structFRHAPI__FileResponse_1a5124a19f8b94825247c9315d3660fc4f)`(const int32 & NewValue)` <a id="structFRHAPI__FileResponse_1a5124a19f8b94825247c9315d3660fc4f"></a>

Sets the value of Size.

#### `public inline FORCEINLINE void `[`SetSize`](#structFRHAPI__FileResponse_1adcbc0f15d6148ba09afbdf8b4654cb78)`(int32 && NewValue)` <a id="structFRHAPI__FileResponse_1adcbc0f15d6148ba09afbdf8b4654cb78"></a>

Sets the value of Size using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Size`](#structFRHAPI__FileResponse_1a9b1456c916d859e19b81f4c2f2acf454)`()` <a id="structFRHAPI__FileResponse_1a9b1456c916d859e19b81f4c2f2acf454"></a>

Returns the default value of Size.

#### `public inline FORCEINLINE FString & `[`GetContentType`](#structFRHAPI__FileResponse_1a3a427f4523a5a12270c9aa5b0c20a10a)`()` <a id="structFRHAPI__FileResponse_1a3a427f4523a5a12270c9aa5b0c20a10a"></a>

Gets the value of ContentType.

#### `public inline FORCEINLINE const FString & `[`GetContentType`](#structFRHAPI__FileResponse_1a656c3b475963d6a33192b0b303985458)`() const` <a id="structFRHAPI__FileResponse_1a656c3b475963d6a33192b0b303985458"></a>

Gets the value of ContentType.

#### `public inline FORCEINLINE void `[`SetContentType`](#structFRHAPI__FileResponse_1aa4c0b9a9e9cffd73898ca1dabc7201de)`(const FString & NewValue)` <a id="structFRHAPI__FileResponse_1aa4c0b9a9e9cffd73898ca1dabc7201de"></a>

Sets the value of ContentType.

#### `public inline FORCEINLINE void `[`SetContentType`](#structFRHAPI__FileResponse_1aaaebb04dac18c1f838692d2cbe95e617)`(FString && NewValue)` <a id="structFRHAPI__FileResponse_1aaaebb04dac18c1f838692d2cbe95e617"></a>

Sets the value of ContentType using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1aeaa3cd2c11af688e1d52a7b99ec533c0)`()` <a id="structFRHAPI__FileResponse_1aeaa3cd2c11af688e1d52a7b99ec533c0"></a>

Gets the value of CreatedTimestamp.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1a09b5bc6c50498f99cdae12df30ae4d83)`() const` <a id="structFRHAPI__FileResponse_1a09b5bc6c50498f99cdae12df30ae4d83"></a>

Gets the value of CreatedTimestamp.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__FileResponse_1acaf263e855f946baabf768128deb62dc)`(const FDateTime & NewValue)` <a id="structFRHAPI__FileResponse_1acaf263e855f946baabf768128deb62dc"></a>

Sets the value of CreatedTimestamp.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__FileResponse_1a9e47445784a1bf6176bf87947f09f547)`(FDateTime && NewValue)` <a id="structFRHAPI__FileResponse_1a9e47445784a1bf6176bf87947f09f547"></a>

Sets the value of CreatedTimestamp using move semantics.

