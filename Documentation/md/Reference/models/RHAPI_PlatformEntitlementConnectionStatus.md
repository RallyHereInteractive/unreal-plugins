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
`public inline FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a4fc19c1ccb8441a34b97966e8ee5909b)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1abccb6409eb1c5b578b6f609082db3b8f)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a6544ebb22b6b95f729c5e437f0b85c8d)`(const FString & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a3f9cbd5c7cfdc26fd1552be32de57bd9)`(FString & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a3f1fdff1984bea859ecc74e4e295ebd5)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a30d17007f38b1a54563399089244440b)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1ae8a18d6fc9311c81f08988e927e937fd)`(const FString & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1aa155b0d2524120e737b79aa94b2b2be5)`(FString && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1af7063855411d06bbbae9dc3153e006c2)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline bool `[`IsErrorCodeSet`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a64dfe96cfcb9acc8fae431539a954d3b)`() const` | Checks whether ErrorCode_Optional has been set.
`public inline void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1adc16d719e1ef7a260113e7109d76873b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a5f48e194d3b91ef921e15328ea4b486c)`() const` | Checks whether ErrorCode_Optional is set to null.

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

#### `public inline FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a4fc19c1ccb8441a34b97966e8ee5909b)`()` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a4fc19c1ccb8441a34b97966e8ee5909b"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1abccb6409eb1c5b578b6f609082db3b8f)`() const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1abccb6409eb1c5b578b6f609082db3b8f"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a6544ebb22b6b95f729c5e437f0b85c8d)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a6544ebb22b6b95f729c5e437f0b85c8d"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a3f9cbd5c7cfdc26fd1552be32de57bd9)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a3f9cbd5c7cfdc26fd1552be32de57bd9"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a3f1fdff1984bea859ecc74e4e295ebd5)`()` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a3f1fdff1984bea859ecc74e4e295ebd5"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a30d17007f38b1a54563399089244440b)`() const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a30d17007f38b1a54563399089244440b"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1ae8a18d6fc9311c81f08988e927e937fd)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1ae8a18d6fc9311c81f08988e927e937fd"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1aa155b0d2524120e737b79aa94b2b2be5)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1aa155b0d2524120e737b79aa94b2b2be5"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementConnectionStatus_1af7063855411d06bbbae9dc3153e006c2)`()` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1af7063855411d06bbbae9dc3153e006c2"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline bool `[`IsErrorCodeSet`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a64dfe96cfcb9acc8fae431539a954d3b)`() const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a64dfe96cfcb9acc8fae431539a954d3b"></a>

Checks whether ErrorCode_Optional has been set.

#### `public inline void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1adc16d719e1ef7a260113e7109d76873b)`()` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1adc16d719e1ef7a260113e7109d76873b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementConnectionStatus_1a5f48e194d3b91ef921e15328ea4b486c)`() const` <a id="structFRHAPI__PlatformEntitlementConnectionStatus_1a5f48e194d3b91ef921e15328ea4b486c"></a>

Checks whether ErrorCode_Optional is set to null.

