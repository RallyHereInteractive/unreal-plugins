---
title: RHAPI_PlatformEntitlementsPrepared
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformEntitlementsPrepared`](#structFRHAPI__PlatformEntitlementsPrepared) | 

## struct `FRHAPI_PlatformEntitlementsPrepared` <a id="structFRHAPI__PlatformEntitlementsPrepared"></a>

```
struct FRHAPI_PlatformEntitlementsPrepared
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > `[`Entitlements_Optional`](#structFRHAPI__PlatformEntitlementsPrepared_1ada156bb981e57cd308e3c793edb3ca96) | 
`public bool `[`Entitlements_IsSet`](#structFRHAPI__PlatformEntitlementsPrepared_1ab9c649bb4f5e1a8207076c54ee656f78) | true if Entitlements_Optional has been set to a value
`public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlementsPrepared_1a381f21930e7ad241437f9af0d3f72a7c) | 
`public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlementsPrepared_1aed9ab9e506618f4659897c0a50835bec) | true if ErrorCode_Optional has been set to a value
`public bool `[`ErrorCode_IsNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a3c10df2d79a70049b12574cfbec21396) | true if ErrorCode_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementsPrepared_1a3b442caf33c2d592869169aa3850ea4c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementsPrepared_1aeff8d57952a2bf8e3646e9b3a3eb57ef)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1ab2feb00d8b6eeb5bef3b1ea3b44bee60)`()` | Gets the value of Entitlements_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1addc7e09dc1b5f14fb9f782e29fff33a9)`() const` | Gets the value of Entitlements_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1aef4ab47efc6ebfe2114ae1f4891fd4ca)`(const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & DefaultValue) const` | Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1ac46118aba86efbad8096a27c120b06a4)`(TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & OutValue) const` | Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a6dc99dcfca94e78aca6c199ac35718c2)`()` | Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a2292ac12062b8f86c1276222c1fffa01)`() const` | Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1afdd169d532679b45f9798c10d885883d)`(const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & NewValue)` | Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.
`public inline FORCEINLINE void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a80176c00698c84367406c887675c21b3)`(TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > && NewValue)` | Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true using move semantics.
`public inline void `[`ClearEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a2cf0f7e124844b6e08a424af8ebdd94f)`()` | Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.
`public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a66e4f36cb6befbdf2c9922de657b22f7)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1af68fd83812bb5b01d7cb382f800745a6)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a4c4c63b073f880c7bec4ab1b22758f48)`(const FString & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a4483be53107933e2d3cd8e778102e753)`(FString & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a34a8d487d9938aec9d37034468960381)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a7c0b75823253181174ebdb62b650e698)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1aafb1ceef30eb00dbcea426ed4a091e56)`(const FString & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a41eca74268fe0901cf51288b09151156)`(FString && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a414c3f05988811d3a6284728b9fed442)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline FORCEINLINE void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a3f93293ea21aafe2829444994da9c215)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a6ada1dc1c02e97dc69dbc0d87fc0b8d9)`() const` | Checks whether ErrorCode_Optional is set to null.

### Members

#### `public TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > `[`Entitlements_Optional`](#structFRHAPI__PlatformEntitlementsPrepared_1ada156bb981e57cd308e3c793edb3ca96) <a id="structFRHAPI__PlatformEntitlementsPrepared_1ada156bb981e57cd308e3c793edb3ca96"></a>

#### `public bool `[`Entitlements_IsSet`](#structFRHAPI__PlatformEntitlementsPrepared_1ab9c649bb4f5e1a8207076c54ee656f78) <a id="structFRHAPI__PlatformEntitlementsPrepared_1ab9c649bb4f5e1a8207076c54ee656f78"></a>

true if Entitlements_Optional has been set to a value

#### `public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlementsPrepared_1a381f21930e7ad241437f9af0d3f72a7c) <a id="structFRHAPI__PlatformEntitlementsPrepared_1a381f21930e7ad241437f9af0d3f72a7c"></a>

#### `public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlementsPrepared_1aed9ab9e506618f4659897c0a50835bec) <a id="structFRHAPI__PlatformEntitlementsPrepared_1aed9ab9e506618f4659897c0a50835bec"></a>

true if ErrorCode_Optional has been set to a value

#### `public bool `[`ErrorCode_IsNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a3c10df2d79a70049b12574cfbec21396) <a id="structFRHAPI__PlatformEntitlementsPrepared_1a3c10df2d79a70049b12574cfbec21396"></a>

true if ErrorCode_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementsPrepared_1a3b442caf33c2d592869169aa3850ea4c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a3b442caf33c2d592869169aa3850ea4c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementsPrepared_1aeff8d57952a2bf8e3646e9b3a3eb57ef)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1aeff8d57952a2bf8e3646e9b3a3eb57ef"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1ab2feb00d8b6eeb5bef3b1ea3b44bee60)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1ab2feb00d8b6eeb5bef3b1ea3b44bee60"></a>

Gets the value of Entitlements_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1addc7e09dc1b5f14fb9f782e29fff33a9)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1addc7e09dc1b5f14fb9f782e29fff33a9"></a>

Gets the value of Entitlements_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1aef4ab47efc6ebfe2114ae1f4891fd4ca)`(const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1aef4ab47efc6ebfe2114ae1f4891fd4ca"></a>

Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1ac46118aba86efbad8096a27c120b06a4)`(TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1ac46118aba86efbad8096a27c120b06a4"></a>

Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a6dc99dcfca94e78aca6c199ac35718c2)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a6dc99dcfca94e78aca6c199ac35718c2"></a>

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a2292ac12062b8f86c1276222c1fffa01)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a2292ac12062b8f86c1276222c1fffa01"></a>

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1afdd169d532679b45f9798c10d885883d)`(const TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementsPrepared_1afdd169d532679b45f9798c10d885883d"></a>

Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a80176c00698c84367406c887675c21b3)`(TArray< `[`FRHAPI_PlatformEntitlementPrepared`](RHAPI_PlatformEntitlementPrepared.md#structFRHAPI__PlatformEntitlementPrepared)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a80176c00698c84367406c887675c21b3"></a>

Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitlements`](#structFRHAPI__PlatformEntitlementsPrepared_1a2cf0f7e124844b6e08a424af8ebdd94f)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a2cf0f7e124844b6e08a424af8ebdd94f"></a>

Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a66e4f36cb6befbdf2c9922de657b22f7)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a66e4f36cb6befbdf2c9922de657b22f7"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1af68fd83812bb5b01d7cb382f800745a6)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1af68fd83812bb5b01d7cb382f800745a6"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a4c4c63b073f880c7bec4ab1b22758f48)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a4c4c63b073f880c7bec4ab1b22758f48"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a4483be53107933e2d3cd8e778102e753)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a4483be53107933e2d3cd8e778102e753"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a34a8d487d9938aec9d37034468960381)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a34a8d487d9938aec9d37034468960381"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a7c0b75823253181174ebdb62b650e698)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a7c0b75823253181174ebdb62b650e698"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1aafb1ceef30eb00dbcea426ed4a091e56)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementsPrepared_1aafb1ceef30eb00dbcea426ed4a091e56"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a41eca74268fe0901cf51288b09151156)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a41eca74268fe0901cf51288b09151156"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementsPrepared_1a414c3f05988811d3a6284728b9fed442)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a414c3f05988811d3a6284728b9fed442"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline FORCEINLINE void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a3f93293ea21aafe2829444994da9c215)`()` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a3f93293ea21aafe2829444994da9c215"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementsPrepared_1a6ada1dc1c02e97dc69dbc0d87fc0b8d9)`() const` <a id="structFRHAPI__PlatformEntitlementsPrepared_1a6ada1dc1c02e97dc69dbc0d87fc0b8d9"></a>

Checks whether ErrorCode_Optional is set to null.

