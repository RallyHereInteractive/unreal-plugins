---
title: RHAPI_PlatformUserOperationRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformUserOperationRequest`](#structFRHAPI__PlatformUserOperationRequest) | Model for doing operations on a specific platform user. If platform/userid information is not provided, the information from the token claims will be used instead.

## struct `FRHAPI_PlatformUserOperationRequest` <a id="structFRHAPI__PlatformUserOperationRequest"></a>

```
struct FRHAPI_PlatformUserOperationRequest
  : public FRHAPI_Model
```

Model for doing operations on a specific platform user. If platform/userid information is not provided, the information from the token claims will be used instead.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__PlatformUserOperationRequest_1a0f83cbd5cb765ffb0f64d11a87b3a58c) | Platform ID.
`public bool `[`Platform_IsSet`](#structFRHAPI__PlatformUserOperationRequest_1a63f68d7903acc453e2ef4af5c156a902) | true if Platform_Optional has been set to a value
`public FString `[`PlatformUserId_Optional`](#structFRHAPI__PlatformUserOperationRequest_1a7e642749f5441f29b0b99520bcd12b2a) | Platform User ID.
`public bool `[`PlatformUserId_IsSet`](#structFRHAPI__PlatformUserOperationRequest_1ae0c03e1258fe59f18d49f7533eee5360) | true if PlatformUserId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserOperationRequest_1a2464f4f981d9b58dd483c4044e5bb7ea)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserOperationRequest_1a15ac4c5ea2e417257e14ccc20349722e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a40ae9927fdd8d0d5ca8ddb911829502b)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a1f27709793e27304375cf86e511e8b05)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a153bf8c2c2859e14095b8e023cbf4b76)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a5c27acdae8cb01ce433f7db3d48f7323)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1a6194a4572f9aa0d32b8d961d88ac23b4)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1ab1dcc252ba616629af6ba545486f1c36)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a9790ad130fd7d91fe31dc9943d2dc726)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a17f5ed413bc4b962464d9d3262305c9a)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__PlatformUserOperationRequest_1ab78ae8564fcc602af3671ebe1ec3e311)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1aa91cbd701cf66be340827b5c07dac5d3)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1aefa81e429ceca6002805f02d22d8811c)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1aadebef1c524324e1ba16341b37929fde)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a365ff258669952df52876cc6f05e2272)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1aaeb86394adce190e90ae934fa3517adf)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1a31f1d996656bf9fb455ed9f80eff47a8)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ab3d0885be107647f6deebaab8b0ab2ae)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a4ee768a7c900379e6d0b6bd07be930f1)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1af6e3622db661283db2adef3cf98b231d)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

### Members

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__PlatformUserOperationRequest_1a0f83cbd5cb765ffb0f64d11a87b3a58c) <a id="structFRHAPI__PlatformUserOperationRequest_1a0f83cbd5cb765ffb0f64d11a87b3a58c"></a>

Platform ID.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__PlatformUserOperationRequest_1a63f68d7903acc453e2ef4af5c156a902) <a id="structFRHAPI__PlatformUserOperationRequest_1a63f68d7903acc453e2ef4af5c156a902"></a>

true if Platform_Optional has been set to a value

#### `public FString `[`PlatformUserId_Optional`](#structFRHAPI__PlatformUserOperationRequest_1a7e642749f5441f29b0b99520bcd12b2a) <a id="structFRHAPI__PlatformUserOperationRequest_1a7e642749f5441f29b0b99520bcd12b2a"></a>

Platform User ID.

#### `public bool `[`PlatformUserId_IsSet`](#structFRHAPI__PlatformUserOperationRequest_1ae0c03e1258fe59f18d49f7533eee5360) <a id="structFRHAPI__PlatformUserOperationRequest_1ae0c03e1258fe59f18d49f7533eee5360"></a>

true if PlatformUserId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserOperationRequest_1a2464f4f981d9b58dd483c4044e5bb7ea)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1a2464f4f981d9b58dd483c4044e5bb7ea"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserOperationRequest_1a15ac4c5ea2e417257e14ccc20349722e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformUserOperationRequest_1a15ac4c5ea2e417257e14ccc20349722e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a40ae9927fdd8d0d5ca8ddb911829502b)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1a40ae9927fdd8d0d5ca8ddb911829502b"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a1f27709793e27304375cf86e511e8b05)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1a1f27709793e27304375cf86e511e8b05"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a153bf8c2c2859e14095b8e023cbf4b76)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1a153bf8c2c2859e14095b8e023cbf4b76"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a5c27acdae8cb01ce433f7db3d48f7323)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1a5c27acdae8cb01ce433f7db3d48f7323"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1a6194a4572f9aa0d32b8d961d88ac23b4)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1a6194a4572f9aa0d32b8d961d88ac23b4"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1ab1dcc252ba616629af6ba545486f1c36)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1ab1dcc252ba616629af6ba545486f1c36"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a9790ad130fd7d91fe31dc9943d2dc726)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1a9790ad130fd7d91fe31dc9943d2dc726"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a17f5ed413bc4b962464d9d3262305c9a)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1a17f5ed413bc4b962464d9d3262305c9a"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__PlatformUserOperationRequest_1ab78ae8564fcc602af3671ebe1ec3e311)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1ab78ae8564fcc602af3671ebe1ec3e311"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1aa91cbd701cf66be340827b5c07dac5d3)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1aa91cbd701cf66be340827b5c07dac5d3"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1aefa81e429ceca6002805f02d22d8811c)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1aefa81e429ceca6002805f02d22d8811c"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1aadebef1c524324e1ba16341b37929fde)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1aadebef1c524324e1ba16341b37929fde"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a365ff258669952df52876cc6f05e2272)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1a365ff258669952df52876cc6f05e2272"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1aaeb86394adce190e90ae934fa3517adf)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1aaeb86394adce190e90ae934fa3517adf"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1a31f1d996656bf9fb455ed9f80eff47a8)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1a31f1d996656bf9fb455ed9f80eff47a8"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ab3d0885be107647f6deebaab8b0ab2ae)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1ab3d0885be107647f6deebaab8b0ab2ae"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a4ee768a7c900379e6d0b6bd07be930f1)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1a4ee768a7c900379e6d0b6bd07be930f1"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1af6e3622db661283db2adef3cf98b231d)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1af6e3622db661283db2adef3cf98b231d"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

