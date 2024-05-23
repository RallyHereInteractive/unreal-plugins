# group `RHAPI_Vendors` <a id="group__RHAPI__Vendors"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__Vendors_1a1465ffa063760bb1158100efdb832951)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Vendors_1ad242669a09a05542227fd1b4ff2f1912)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1a889d5215cae0ecda378d2d2221fa6951)`()` | Gets the value of Vendors_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1a639b0e253c63a470c96873244e516ebf)`() const` | Gets the value of Vendors_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1aa2caf8513ae3b43c0329614b8c1dfc64)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & DefaultValue) const` | Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendors`](#structFRHAPI__Vendors_1a21ae98705597d7efaad06c370782b488)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & OutValue) const` | Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1ac86c11f25325fb7eae822d137a1f7bae)`()` | Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1a09cc0607623365d139c958bfca353e42)`() const` | Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendors`](#structFRHAPI__Vendors_1a8bdca23e7a0ced78140c8f72c3049209)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & NewValue)` | Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.
`public inline void `[`SetVendors`](#structFRHAPI__Vendors_1a0478ad525bf0c0da2639d6b2fe5247e8)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > && NewValue)` | Sets the value of Vendors_Optional and also sets Vendors_IsSet to true using move semantics.
`public inline void `[`ClearVendors`](#structFRHAPI__Vendors_1aba0ed2732c70584fa05e8abb0eb14855)`()` | Clears the value of Vendors_Optional and sets Vendors_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1ad06a6b0281def6dfb91da3879cda952f)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1af6bd7728ecb4fe616da14216b0e2d406)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1a3e049768dfa55187ff8e9f7a50312c80)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Vendors_1a566ae446763cd8784d96daadfd0d8693)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1a77e46209434a0e26c564ac1f6f14b6e2)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1ae925fc7ec39abd1e809daa3c7d7e5d7d)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Vendors_1aa3bf7d9f93b6c703f27ea549b948303e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Vendors_1aba10303b3e5b18cda189db7e83ecd125)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Vendors_1ae62d7b93e3f17f45b54c1d61b666a0c7)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

### Members

#### `public TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > `[`Vendors_Optional`](#structFRHAPI__Vendors_1aa0932323dd37de9240161ecfe54b90f7) <a id="structFRHAPI__Vendors_1aa0932323dd37de9240161ecfe54b90f7"></a>

#### `public bool `[`Vendors_IsSet`](#structFRHAPI__Vendors_1a8a31455ea201b24fee5c64979cb805c2) <a id="structFRHAPI__Vendors_1a8a31455ea201b24fee5c64979cb805c2"></a>

true if Vendors_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Vendors_1aee885d293125555b4b4b1d77f07c86c6) <a id="structFRHAPI__Vendors_1aee885d293125555b4b4b1d77f07c86c6"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Vendors_1aaec0407be12287e3c6c8b446eee6e835) <a id="structFRHAPI__Vendors_1aaec0407be12287e3c6c8b446eee6e835"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Vendors_1a1465ffa063760bb1158100efdb832951)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Vendors_1a1465ffa063760bb1158100efdb832951"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Vendors_1ad242669a09a05542227fd1b4ff2f1912)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Vendors_1ad242669a09a05542227fd1b4ff2f1912"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1a889d5215cae0ecda378d2d2221fa6951)`()` <a id="structFRHAPI__Vendors_1a889d5215cae0ecda378d2d2221fa6951"></a>

Gets the value of Vendors_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1a639b0e253c63a470c96873244e516ebf)`() const` <a id="structFRHAPI__Vendors_1a639b0e253c63a470c96873244e516ebf"></a>

Gets the value of Vendors_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1aa2caf8513ae3b43c0329614b8c1dfc64)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & DefaultValue) const` <a id="structFRHAPI__Vendors_1aa2caf8513ae3b43c0329614b8c1dfc64"></a>

Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendors`](#structFRHAPI__Vendors_1a21ae98705597d7efaad06c370782b488)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & OutValue) const` <a id="structFRHAPI__Vendors_1a21ae98705597d7efaad06c370782b488"></a>

Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1ac86c11f25325fb7eae822d137a1f7bae)`()` <a id="structFRHAPI__Vendors_1ac86c11f25325fb7eae822d137a1f7bae"></a>

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1a09cc0607623365d139c958bfca353e42)`() const` <a id="structFRHAPI__Vendors_1a09cc0607623365d139c958bfca353e42"></a>

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendors`](#structFRHAPI__Vendors_1a8bdca23e7a0ced78140c8f72c3049209)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & NewValue)` <a id="structFRHAPI__Vendors_1a8bdca23e7a0ced78140c8f72c3049209"></a>

Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.

#### `public inline void `[`SetVendors`](#structFRHAPI__Vendors_1a0478ad525bf0c0da2639d6b2fe5247e8)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > && NewValue)` <a id="structFRHAPI__Vendors_1a0478ad525bf0c0da2639d6b2fe5247e8"></a>

Sets the value of Vendors_Optional and also sets Vendors_IsSet to true using move semantics.

#### `public inline void `[`ClearVendors`](#structFRHAPI__Vendors_1aba0ed2732c70584fa05e8abb0eb14855)`()` <a id="structFRHAPI__Vendors_1aba0ed2732c70584fa05e8abb0eb14855"></a>

Clears the value of Vendors_Optional and sets Vendors_IsSet to false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1ad06a6b0281def6dfb91da3879cda952f)`()` <a id="structFRHAPI__Vendors_1ad06a6b0281def6dfb91da3879cda952f"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1af6bd7728ecb4fe616da14216b0e2d406)`() const` <a id="structFRHAPI__Vendors_1af6bd7728ecb4fe616da14216b0e2d406"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1a3e049768dfa55187ff8e9f7a50312c80)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Vendors_1a3e049768dfa55187ff8e9f7a50312c80"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Vendors_1a566ae446763cd8784d96daadfd0d8693)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Vendors_1a566ae446763cd8784d96daadfd0d8693"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1a77e46209434a0e26c564ac1f6f14b6e2)`()` <a id="structFRHAPI__Vendors_1a77e46209434a0e26c564ac1f6f14b6e2"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1ae925fc7ec39abd1e809daa3c7d7e5d7d)`() const` <a id="structFRHAPI__Vendors_1ae925fc7ec39abd1e809daa3c7d7e5d7d"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Vendors_1aa3bf7d9f93b6c703f27ea549b948303e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Vendors_1aa3bf7d9f93b6c703f27ea549b948303e"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Vendors_1aba10303b3e5b18cda189db7e83ecd125)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Vendors_1aba10303b3e5b18cda189db7e83ecd125"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Vendors_1ae62d7b93e3f17f45b54c1d61b666a0c7)`()` <a id="structFRHAPI__Vendors_1ae62d7b93e3f17f45b54c1d61b666a0c7"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

