---
title: RHAPI_KeyType
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_KeyType`](#structFRHAPI__KeyType) | A Key Type is a type of key that can be claimed from a Marketing Campaign.

## struct `FRHAPI_KeyType` <a id="structFRHAPI__KeyType"></a>

```
struct FRHAPI_KeyType
  : public FRHAPI_Model
```

A Key Type is a type of key that can be claimed from a Marketing Campaign.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Type`](#structFRHAPI__KeyType_1a2651c7c2d1777a2fc76694ce1d194fde) | The type of key.
`public virtual bool `[`FromJson`](#structFRHAPI__KeyType_1a5633335230c27b84a37bd61f7d099f14)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KeyType_1a266d1108d679777c2331d9b967158628)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetType`](#structFRHAPI__KeyType_1a8caaf8ae0c02ecd06c74bb6fc143a992)`()` | Gets the value of Type.
`public inline const FString & `[`GetType`](#structFRHAPI__KeyType_1ab0f271496f7f3e3726645abf97c92f74)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__KeyType_1a226dd08eb7860a5039e68572698f852b)`(const FString & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__KeyType_1a191abc9192c5780495c18c204b83cdf6)`(FString && NewValue)` | Sets the value of Type using move semantics.

### Members

#### `public FString `[`Type`](#structFRHAPI__KeyType_1a2651c7c2d1777a2fc76694ce1d194fde) <a id="structFRHAPI__KeyType_1a2651c7c2d1777a2fc76694ce1d194fde"></a>

The type of key.

#### `public virtual bool `[`FromJson`](#structFRHAPI__KeyType_1a5633335230c27b84a37bd61f7d099f14)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KeyType_1a5633335230c27b84a37bd61f7d099f14"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__KeyType_1a266d1108d679777c2331d9b967158628)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__KeyType_1a266d1108d679777c2331d9b967158628"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetType`](#structFRHAPI__KeyType_1a8caaf8ae0c02ecd06c74bb6fc143a992)`()` <a id="structFRHAPI__KeyType_1a8caaf8ae0c02ecd06c74bb6fc143a992"></a>

Gets the value of Type.

#### `public inline const FString & `[`GetType`](#structFRHAPI__KeyType_1ab0f271496f7f3e3726645abf97c92f74)`() const` <a id="structFRHAPI__KeyType_1ab0f271496f7f3e3726645abf97c92f74"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__KeyType_1a226dd08eb7860a5039e68572698f852b)`(const FString & NewValue)` <a id="structFRHAPI__KeyType_1a226dd08eb7860a5039e68572698f852b"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__KeyType_1a191abc9192c5780495c18c204b83cdf6)`(FString && NewValue)` <a id="structFRHAPI__KeyType_1a191abc9192c5780495c18c204b83cdf6"></a>

Sets the value of Type using move semantics.

