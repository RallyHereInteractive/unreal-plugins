---
title: RHAPI_UnionCCU
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UnionCCU`](#structFRHAPI__UnionCCU) | 

## struct `FRHAPI_UnionCCU` <a id="structFRHAPI__UnionCCU"></a>

```
struct FRHAPI_UnionCCU
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`Count`](#structFRHAPI__UnionCCU_1a69841a2e7517f0c6b3eb9fc740b06c1e) | 
`public TArray< FDateTime > `[`Timestamps`](#structFRHAPI__UnionCCU_1abae451775e33a1d06d69f056efe9e7bf) | 
`public virtual bool `[`FromJson`](#structFRHAPI__UnionCCU_1a66a76451586d7b68a0068c691e4dcfc0)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UnionCCU_1a76e91e0287ec2fafeffcfbfc8c8af6c0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__UnionCCU_1aa28db3cf39a58b5cb2c0a3c3c0bf4b4d)`()` | Gets the value of Count.
`public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__UnionCCU_1af4e9bc3a19d023e09a4cf7edb60d27ef)`() const` | Gets the value of Count.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UnionCCU_1ad5446ef3c976e231bbe210f836d91630)`(const int32 & NewValue)` | Sets the value of Count.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UnionCCU_1a797df5b8c93d1dfd2fd71456825b3f7b)`(int32 && NewValue)` | Sets the value of Count using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__UnionCCU_1ad0fdf8fae2eec252fd923beb4cdb746a)`()` | Returns the default value of Count.
`public inline FORCEINLINE TArray< FDateTime > & `[`GetTimestamps`](#structFRHAPI__UnionCCU_1a341457c542861e270e29cfe680c0ea6c)`()` | Gets the value of Timestamps.
`public inline FORCEINLINE const TArray< FDateTime > & `[`GetTimestamps`](#structFRHAPI__UnionCCU_1a8f925e77f7ca0b9812500a6a47807261)`() const` | Gets the value of Timestamps.
`public inline FORCEINLINE void `[`SetTimestamps`](#structFRHAPI__UnionCCU_1a8b6de4a04e0317b66d8aa253ec851810)`(const TArray< FDateTime > & NewValue)` | Sets the value of Timestamps.
`public inline FORCEINLINE void `[`SetTimestamps`](#structFRHAPI__UnionCCU_1aed64d0cac73e5e0084db72d6ba578af3)`(TArray< FDateTime > && NewValue)` | Sets the value of Timestamps using move semantics.

### Members

#### `public int32 `[`Count`](#structFRHAPI__UnionCCU_1a69841a2e7517f0c6b3eb9fc740b06c1e) <a id="structFRHAPI__UnionCCU_1a69841a2e7517f0c6b3eb9fc740b06c1e"></a>

#### `public TArray< FDateTime > `[`Timestamps`](#structFRHAPI__UnionCCU_1abae451775e33a1d06d69f056efe9e7bf) <a id="structFRHAPI__UnionCCU_1abae451775e33a1d06d69f056efe9e7bf"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__UnionCCU_1a66a76451586d7b68a0068c691e4dcfc0)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UnionCCU_1a66a76451586d7b68a0068c691e4dcfc0"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UnionCCU_1a76e91e0287ec2fafeffcfbfc8c8af6c0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__UnionCCU_1a76e91e0287ec2fafeffcfbfc8c8af6c0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__UnionCCU_1aa28db3cf39a58b5cb2c0a3c3c0bf4b4d)`()` <a id="structFRHAPI__UnionCCU_1aa28db3cf39a58b5cb2c0a3c3c0bf4b4d"></a>

Gets the value of Count.

#### `public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__UnionCCU_1af4e9bc3a19d023e09a4cf7edb60d27ef)`() const` <a id="structFRHAPI__UnionCCU_1af4e9bc3a19d023e09a4cf7edb60d27ef"></a>

Gets the value of Count.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UnionCCU_1ad5446ef3c976e231bbe210f836d91630)`(const int32 & NewValue)` <a id="structFRHAPI__UnionCCU_1ad5446ef3c976e231bbe210f836d91630"></a>

Sets the value of Count.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UnionCCU_1a797df5b8c93d1dfd2fd71456825b3f7b)`(int32 && NewValue)` <a id="structFRHAPI__UnionCCU_1a797df5b8c93d1dfd2fd71456825b3f7b"></a>

Sets the value of Count using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__UnionCCU_1ad0fdf8fae2eec252fd923beb4cdb746a)`()` <a id="structFRHAPI__UnionCCU_1ad0fdf8fae2eec252fd923beb4cdb746a"></a>

Returns the default value of Count.

#### `public inline FORCEINLINE TArray< FDateTime > & `[`GetTimestamps`](#structFRHAPI__UnionCCU_1a341457c542861e270e29cfe680c0ea6c)`()` <a id="structFRHAPI__UnionCCU_1a341457c542861e270e29cfe680c0ea6c"></a>

Gets the value of Timestamps.

#### `public inline FORCEINLINE const TArray< FDateTime > & `[`GetTimestamps`](#structFRHAPI__UnionCCU_1a8f925e77f7ca0b9812500a6a47807261)`() const` <a id="structFRHAPI__UnionCCU_1a8f925e77f7ca0b9812500a6a47807261"></a>

Gets the value of Timestamps.

#### `public inline FORCEINLINE void `[`SetTimestamps`](#structFRHAPI__UnionCCU_1a8b6de4a04e0317b66d8aa253ec851810)`(const TArray< FDateTime > & NewValue)` <a id="structFRHAPI__UnionCCU_1a8b6de4a04e0317b66d8aa253ec851810"></a>

Sets the value of Timestamps.

#### `public inline FORCEINLINE void `[`SetTimestamps`](#structFRHAPI__UnionCCU_1aed64d0cac73e5e0084db72d6ba578af3)`(TArray< FDateTime > && NewValue)` <a id="structFRHAPI__UnionCCU_1aed64d0cac73e5e0084db72d6ba578af3"></a>

Sets the value of Timestamps using move semantics.

