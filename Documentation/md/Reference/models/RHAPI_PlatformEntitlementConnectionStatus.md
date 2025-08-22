---
title: RHAPI_PlatformEntitlementConnectionStatus
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformEntitlementConnectionStatus`](#structFRHAPI__PlatformEntitlementConnectionStatus) | 

## struct `FRHAPI_PlatformEntitlementConnectionStatus` <a id="structFRHAPI__PlatformEntitlementConnectionStatus"></a>

```
struct FRHAPI_PlatformEntitlementConnectionStatus
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a74898055de39aa06e9b3c309e27e2806) | 
`public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlementConnectionStatus_1aa731f1fb411477a424576b2cd02bfd5f) | true if ErrorCode_Optional has been set to a value
`public bool `[`ErrorCode_IsNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1afe7812aa508fdbde844b6c394f9befb2) | true if ErrorCode_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a174896ae1530a5d34d23590a9798ec48)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a84fdd7d90a0624c115c3c49e532763b0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a7061b7feecf64c928dd83a75cd49336e)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a7e8c74be9d2ff137342766533610d836)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1af17336b0eb2114a8c5aba071e8ec2c5a)`(const FString & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a1b678f37a2df4852ed01786333b731c8)`(FString & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1aa03c494bf7d91d236208c48eea5cd2f4)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a72a47885a790543f580a93b4f0efda0e)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a39adf9b4fad2da8e5996d46e51fe088a)`(const FString & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a43588c0ae0e7ced486c569f30a598ea7)`(FString && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1af7063855411d06bbbae9dc3153e006c2)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline FORCEINLINE void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a1eac8c1b09e6aa60037b8eaf1c5e44f6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a609e49351f355aa819fdc86752d229ab)`() const` | Checks whether ErrorCode_Optional is set to null.

### Members

#### `public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a74898055de39aa06e9b3c309e27e2806) <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a74898055de39aa06e9b3c309e27e2806"></a>

#### `public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlementConnectionStatus_1aa731f1fb411477a424576b2cd02bfd5f) <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1aa731f1fb411477a424576b2cd02bfd5f"></a>

true if ErrorCode_Optional has been set to a value

#### `public bool `[`ErrorCode_IsNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1afe7812aa508fdbde844b6c394f9befb2) <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1afe7812aa508fdbde844b6c394f9befb2"></a>

true if ErrorCode_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a174896ae1530a5d34d23590a9798ec48)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a174896ae1530a5d34d23590a9798ec48"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a84fdd7d90a0624c115c3c49e532763b0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a84fdd7d90a0624c115c3c49e532763b0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a7061b7feecf64c928dd83a75cd49336e)`()` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a7061b7feecf64c928dd83a75cd49336e"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a7e8c74be9d2ff137342766533610d836)`() const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a7e8c74be9d2ff137342766533610d836"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1af17336b0eb2114a8c5aba071e8ec2c5a)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1af17336b0eb2114a8c5aba071e8ec2c5a"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a1b678f37a2df4852ed01786333b731c8)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a1b678f37a2df4852ed01786333b731c8"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1aa03c494bf7d91d236208c48eea5cd2f4)`()` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1aa03c494bf7d91d236208c48eea5cd2f4"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a72a47885a790543f580a93b4f0efda0e)`() const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a72a47885a790543f580a93b4f0efda0e"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a39adf9b4fad2da8e5996d46e51fe088a)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a39adf9b4fad2da8e5996d46e51fe088a"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a43588c0ae0e7ced486c569f30a598ea7)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a43588c0ae0e7ced486c569f30a598ea7"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1af7063855411d06bbbae9dc3153e006c2)`()` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1af7063855411d06bbbae9dc3153e006c2"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline FORCEINLINE void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a1eac8c1b09e6aa60037b8eaf1c5e44f6)`()` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a1eac8c1b09e6aa60037b8eaf1c5e44f6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a609e49351f355aa819fdc86752d229ab)`() const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a609e49351f355aa819fdc86752d229ab"></a>

Checks whether ErrorCode_Optional is set to null.

