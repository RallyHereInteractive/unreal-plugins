---
title: RHAPI_Vendors
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Vendors`](#structFRHAPI__Vendors) | A collection of Vendors by Vendor ID.

## struct `FRHAPI_Vendors` <a id="structFRHAPI__Vendors"></a>

```
struct FRHAPI_Vendors
  : public FRHAPI_Model
```

A collection of Vendors by Vendor ID.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > `[`Vendors_Optional`](#structFRHAPI__Vendors_1aa0932323dd37de9240161ecfe54b90f7) | 
`public bool `[`Vendors_IsSet`](#structFRHAPI__Vendors_1a8a31455ea201b24fee5c64979cb805c2) | true if Vendors_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Vendors_1aee885d293125555b4b4b1d77f07c86c6) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Vendors_1aaec0407be12287e3c6c8b446eee6e835) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__Vendors_1a7ce8bd7a0a04a24b75afc56787821708) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__Vendors_1a478fd25380182393b2547a4b9ffcc806)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Vendors_1a3b89a6865d85c56c322e3e9f7e36ff0d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1a3190f9fb97b26acabf5c40e7b5878d4e)`()` | Gets the value of Vendors_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1a69635c8254582f79b8882503900a5c32)`() const` | Gets the value of Vendors_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1aa841738641a1f748cfcf4e9118d988c3)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & DefaultValue) const` | Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVendors`](#structFRHAPI__Vendors_1a0e92dd84b924dff2a416ad21d931fb0b)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & OutValue) const` | Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1a64a606f1c85b2e16f0fbec8ea1e5f937)`()` | Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1a19d631f0cc672476d44bf2f0f9b5484b)`() const` | Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVendors`](#structFRHAPI__Vendors_1a7df33ea15251bd0fb4eea8c8dd1f36e7)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & NewValue)` | Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.
`public inline FORCEINLINE void `[`SetVendors`](#structFRHAPI__Vendors_1aedd0ccc44612b34c4b29d1d3e18e6a6d)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > && NewValue)` | Sets the value of Vendors_Optional and also sets Vendors_IsSet to true using move semantics.
`public inline void `[`ClearVendors`](#structFRHAPI__Vendors_1aba0ed2732c70584fa05e8abb0eb14855)`()` | Clears the value of Vendors_Optional and sets Vendors_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1ab29894dc805a70d0621cceefd5b21368)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1a6049e044ee3f52bee247bdd710feacfa)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1ac59610401786e5f62b3833060d3537a1)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Vendors_1a64808b8bacb61852985011efb9c16287)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1abdba623f5b2e3de926e4ca5e838af6e1)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1ae1347ba720fe8bc094038aa90b8a328a)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Vendors_1a085dcad9709f5549fa99295eaab0a258)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Vendors_1a2e960f3b2e14608972c4831476ec7581)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Vendors_1ae62d7b93e3f17f45b54c1d61b666a0c7)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Vendors_1a7276095f02ac65f1f8bb559f2a849f66)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Vendors_1a3e0c832c62f9c1a2991d8696b30d3de4)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > `[`Vendors_Optional`](#structFRHAPI__Vendors_1aa0932323dd37de9240161ecfe54b90f7) <a id="structFRHAPI__Vendors_1aa0932323dd37de9240161ecfe54b90f7"></a>

#### `public bool `[`Vendors_IsSet`](#structFRHAPI__Vendors_1a8a31455ea201b24fee5c64979cb805c2) <a id="structFRHAPI__Vendors_1a8a31455ea201b24fee5c64979cb805c2"></a>

true if Vendors_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Vendors_1aee885d293125555b4b4b1d77f07c86c6) <a id="structFRHAPI__Vendors_1aee885d293125555b4b4b1d77f07c86c6"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Vendors_1aaec0407be12287e3c6c8b446eee6e835) <a id="structFRHAPI__Vendors_1aaec0407be12287e3c6c8b446eee6e835"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__Vendors_1a7ce8bd7a0a04a24b75afc56787821708) <a id="structFRHAPI__Vendors_1a7ce8bd7a0a04a24b75afc56787821708"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__Vendors_1a478fd25380182393b2547a4b9ffcc806)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Vendors_1a478fd25380182393b2547a4b9ffcc806"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Vendors_1a3b89a6865d85c56c322e3e9f7e36ff0d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Vendors_1a3b89a6865d85c56c322e3e9f7e36ff0d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1a3190f9fb97b26acabf5c40e7b5878d4e)`()` <a id="structFRHAPI__Vendors_1a3190f9fb97b26acabf5c40e7b5878d4e"></a>

Gets the value of Vendors_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1a69635c8254582f79b8882503900a5c32)`() const` <a id="structFRHAPI__Vendors_1a69635c8254582f79b8882503900a5c32"></a>

Gets the value of Vendors_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1aa841738641a1f748cfcf4e9118d988c3)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & DefaultValue) const` <a id="structFRHAPI__Vendors_1aa841738641a1f748cfcf4e9118d988c3"></a>

Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVendors`](#structFRHAPI__Vendors_1a0e92dd84b924dff2a416ad21d931fb0b)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & OutValue) const` <a id="structFRHAPI__Vendors_1a0e92dd84b924dff2a416ad21d931fb0b"></a>

Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1a64a606f1c85b2e16f0fbec8ea1e5f937)`()` <a id="structFRHAPI__Vendors_1a64a606f1c85b2e16f0fbec8ea1e5f937"></a>

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1a19d631f0cc672476d44bf2f0f9b5484b)`() const` <a id="structFRHAPI__Vendors_1a19d631f0cc672476d44bf2f0f9b5484b"></a>

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVendors`](#structFRHAPI__Vendors_1a7df33ea15251bd0fb4eea8c8dd1f36e7)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & NewValue)` <a id="structFRHAPI__Vendors_1a7df33ea15251bd0fb4eea8c8dd1f36e7"></a>

Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVendors`](#structFRHAPI__Vendors_1aedd0ccc44612b34c4b29d1d3e18e6a6d)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > && NewValue)` <a id="structFRHAPI__Vendors_1aedd0ccc44612b34c4b29d1d3e18e6a6d"></a>

Sets the value of Vendors_Optional and also sets Vendors_IsSet to true using move semantics.

#### `public inline void `[`ClearVendors`](#structFRHAPI__Vendors_1aba0ed2732c70584fa05e8abb0eb14855)`()` <a id="structFRHAPI__Vendors_1aba0ed2732c70584fa05e8abb0eb14855"></a>

Clears the value of Vendors_Optional and sets Vendors_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1ab29894dc805a70d0621cceefd5b21368)`()` <a id="structFRHAPI__Vendors_1ab29894dc805a70d0621cceefd5b21368"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1a6049e044ee3f52bee247bdd710feacfa)`() const` <a id="structFRHAPI__Vendors_1a6049e044ee3f52bee247bdd710feacfa"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1ac59610401786e5f62b3833060d3537a1)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Vendors_1ac59610401786e5f62b3833060d3537a1"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Vendors_1a64808b8bacb61852985011efb9c16287)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Vendors_1a64808b8bacb61852985011efb9c16287"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1abdba623f5b2e3de926e4ca5e838af6e1)`()` <a id="structFRHAPI__Vendors_1abdba623f5b2e3de926e4ca5e838af6e1"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1ae1347ba720fe8bc094038aa90b8a328a)`() const` <a id="structFRHAPI__Vendors_1ae1347ba720fe8bc094038aa90b8a328a"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Vendors_1a085dcad9709f5549fa99295eaab0a258)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Vendors_1a085dcad9709f5549fa99295eaab0a258"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Vendors_1a2e960f3b2e14608972c4831476ec7581)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Vendors_1a2e960f3b2e14608972c4831476ec7581"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Vendors_1ae62d7b93e3f17f45b54c1d61b666a0c7)`()` <a id="structFRHAPI__Vendors_1ae62d7b93e3f17f45b54c1d61b666a0c7"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Vendors_1a7276095f02ac65f1f8bb559f2a849f66)`()` <a id="structFRHAPI__Vendors_1a7276095f02ac65f1f8bb559f2a849f66"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Vendors_1a3e0c832c62f9c1a2991d8696b30d3de4)`() const` <a id="structFRHAPI__Vendors_1a3e0c832c62f9c1a2991d8696b30d3de4"></a>

Checks whether CacheInfo_Optional is set to null.

