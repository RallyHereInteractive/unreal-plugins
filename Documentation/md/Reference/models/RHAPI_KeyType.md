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
`public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__KeyType_1a5df0513c1b9f88408f3feb345870b094)`()` | Gets the value of Type.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__KeyType_1a8304200e68cf3f4814c8173dd12bd492)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__KeyType_1ab4f4d1db956654e0f8fd6a1b148e2577)`(const FString & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__KeyType_1a68b5e421068c1f6429c49cbbc5a79cc1)`(FString && NewValue)` | Sets the value of Type using move semantics.

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

#### `public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__KeyType_1a5df0513c1b9f88408f3feb345870b094)`()` <a id="structFRHAPI__KeyType_1a5df0513c1b9f88408f3feb345870b094"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__KeyType_1a8304200e68cf3f4814c8173dd12bd492)`() const` <a id="structFRHAPI__KeyType_1a8304200e68cf3f4814c8173dd12bd492"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__KeyType_1ab4f4d1db956654e0f8fd6a1b148e2577)`(const FString & NewValue)` <a id="structFRHAPI__KeyType_1ab4f4d1db956654e0f8fd6a1b148e2577"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__KeyType_1a68b5e421068c1f6429c49cbbc5a79cc1)`(FString && NewValue)` <a id="structFRHAPI__KeyType_1a68b5e421068c1f6429c49cbbc5a79cc1"></a>

Sets the value of Type using move semantics.

