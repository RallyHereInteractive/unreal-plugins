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
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a0b2f0d788dc900f1a8d032fc35923e9f)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a8413049ac988410ddde906df26305396)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a567f4b0958a520f84cc3d5816287f0df)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a9bf2a927dda0d2af151fd64ca8fb40dd)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1aa257b56c0e9757ca417360b0603f7eb3)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1a7bff600f5ac849a5559f0889899a7a3d)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1ab24aa534463b3caffa6b8099f217b2a7)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a384b5ae673362c231d8edf55baa150d1)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__PlatformUserOperationRequest_1ab78ae8564fcc602af3671ebe1ec3e311)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__PlatformUserOperationRequest_1a7b4c4e529bdae03c046fb5fda2ff2bc0)`() const` | Checks whether Platform_Optional has been set.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a61f0ffdc03c99619ebefd357e860ed04)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a61e68e8f69087abe583f3a8d9dcadf98)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1af13b0eb41f9600226cd834603bc72edc)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a292cb9caba70f6c0bed5d653be9b25ec)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1a78f20552306bab1401f61891423b76d0)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1ae88056b6a3de757f0d31da70175fe439)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ad631a35b27f2f4943cc8642953a097db)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ae2cf3888d8bd049f626c021356c1fc9f)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1af6e3622db661283db2adef3cf98b231d)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.
`public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__PlatformUserOperationRequest_1abc765bdbae6c7964603bddc42a52a57c)`() const` | Checks whether PlatformUserId_Optional has been set.

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

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a0b2f0d788dc900f1a8d032fc35923e9f)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1a0b2f0d788dc900f1a8d032fc35923e9f"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a8413049ac988410ddde906df26305396)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1a8413049ac988410ddde906df26305396"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a567f4b0958a520f84cc3d5816287f0df)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1a567f4b0958a520f84cc3d5816287f0df"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a9bf2a927dda0d2af151fd64ca8fb40dd)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1a9bf2a927dda0d2af151fd64ca8fb40dd"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1aa257b56c0e9757ca417360b0603f7eb3)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1aa257b56c0e9757ca417360b0603f7eb3"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1a7bff600f5ac849a5559f0889899a7a3d)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1a7bff600f5ac849a5559f0889899a7a3d"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1ab24aa534463b3caffa6b8099f217b2a7)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1ab24aa534463b3caffa6b8099f217b2a7"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a384b5ae673362c231d8edf55baa150d1)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1a384b5ae673362c231d8edf55baa150d1"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__PlatformUserOperationRequest_1ab78ae8564fcc602af3671ebe1ec3e311)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1ab78ae8564fcc602af3671ebe1ec3e311"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__PlatformUserOperationRequest_1a7b4c4e529bdae03c046fb5fda2ff2bc0)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1a7b4c4e529bdae03c046fb5fda2ff2bc0"></a>

Checks whether Platform_Optional has been set.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a61f0ffdc03c99619ebefd357e860ed04)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1a61f0ffdc03c99619ebefd357e860ed04"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a61e68e8f69087abe583f3a8d9dcadf98)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1a61e68e8f69087abe583f3a8d9dcadf98"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1af13b0eb41f9600226cd834603bc72edc)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1af13b0eb41f9600226cd834603bc72edc"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a292cb9caba70f6c0bed5d653be9b25ec)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1a292cb9caba70f6c0bed5d653be9b25ec"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1a78f20552306bab1401f61891423b76d0)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1a78f20552306bab1401f61891423b76d0"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1ae88056b6a3de757f0d31da70175fe439)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1ae88056b6a3de757f0d31da70175fe439"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ad631a35b27f2f4943cc8642953a097db)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1ad631a35b27f2f4943cc8642953a097db"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ae2cf3888d8bd049f626c021356c1fc9f)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1ae2cf3888d8bd049f626c021356c1fc9f"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1af6e3622db661283db2adef3cf98b231d)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1af6e3622db661283db2adef3cf98b231d"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

#### `public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__PlatformUserOperationRequest_1abc765bdbae6c7964603bddc42a52a57c)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1abc765bdbae6c7964603bddc42a52a57c"></a>

Checks whether PlatformUserId_Optional has been set.

