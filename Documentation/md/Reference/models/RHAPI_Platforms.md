---
title: RHAPI_Platforms
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Platforms`](#structFRHAPI__Platforms) | 

## struct `FRHAPI_Platforms` <a id="structFRHAPI__Platforms"></a>

```
struct FRHAPI_Platforms
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< FString > `[`Platforms`](#structFRHAPI__Platforms_1ae4374248bbbde6844cb94ef9f12a4e93) | 
`public virtual bool `[`FromJson`](#structFRHAPI__Platforms_1abd3881f21a4476efadb31f7dadd23d8c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Platforms_1abada538e7309c926061685e463405c24)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1a88e4d99e7376ee7ef9873104a9041192)`()` | Gets the value of Platforms.
`public inline const TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1ab3d5d3d8ddcb4a1d3486c0706fffaf4a)`() const` | Gets the value of Platforms.
`public inline void `[`SetPlatforms`](#structFRHAPI__Platforms_1ad6bc004022947fe42230560f31742688)`(const TArray< FString > & NewValue)` | Sets the value of Platforms.
`public inline void `[`SetPlatforms`](#structFRHAPI__Platforms_1aea379b333439a8cf682ccc1f2d004e31)`(TArray< FString > && NewValue)` | Sets the value of Platforms using move semantics.

### Members

#### `public TArray< FString > `[`Platforms`](#structFRHAPI__Platforms_1ae4374248bbbde6844cb94ef9f12a4e93) <a id="structFRHAPI__Platforms_1ae4374248bbbde6844cb94ef9f12a4e93"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__Platforms_1abd3881f21a4476efadb31f7dadd23d8c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Platforms_1abd3881f21a4476efadb31f7dadd23d8c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Platforms_1abada538e7309c926061685e463405c24)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Platforms_1abada538e7309c926061685e463405c24"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1a88e4d99e7376ee7ef9873104a9041192)`()` <a id="structFRHAPI__Platforms_1a88e4d99e7376ee7ef9873104a9041192"></a>

Gets the value of Platforms.

#### `public inline const TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1ab3d5d3d8ddcb4a1d3486c0706fffaf4a)`() const` <a id="structFRHAPI__Platforms_1ab3d5d3d8ddcb4a1d3486c0706fffaf4a"></a>

Gets the value of Platforms.

#### `public inline void `[`SetPlatforms`](#structFRHAPI__Platforms_1ad6bc004022947fe42230560f31742688)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__Platforms_1ad6bc004022947fe42230560f31742688"></a>

Sets the value of Platforms.

#### `public inline void `[`SetPlatforms`](#structFRHAPI__Platforms_1aea379b333439a8cf682ccc1f2d004e31)`(TArray< FString > && NewValue)` <a id="structFRHAPI__Platforms_1aea379b333439a8cf682ccc1f2d004e31"></a>

Sets the value of Platforms using move semantics.

