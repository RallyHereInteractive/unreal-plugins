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
`public inline TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1ad05ca4319f3cf8574bd6a9d965110687)`()` | Gets the value of Vendors_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1a5fc61724f6ea0d9a29157d5bea5eaa4e)`() const` | Gets the value of Vendors_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1aa8a6fc08970c65ef9c6bc63a504ff98c)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & DefaultValue) const` | Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendors`](#structFRHAPI__Vendors_1a21ae98705597d7efaad06c370782b488)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & OutValue) const` | Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1ab70c709484b85c7deb58f5f598eab5f7)`()` | Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1a21a9b897228b473e2133bbdc34548bd2)`() const` | Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendors`](#structFRHAPI__Vendors_1a8bdca23e7a0ced78140c8f72c3049209)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & NewValue)` | Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.
`public inline void `[`SetVendors`](#structFRHAPI__Vendors_1a0478ad525bf0c0da2639d6b2fe5247e8)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > && NewValue)` | Sets the value of Vendors_Optional and also sets Vendors_IsSet to true using move semantics.
`public inline void `[`ClearVendors`](#structFRHAPI__Vendors_1aba0ed2732c70584fa05e8abb0eb14855)`()` | Clears the value of Vendors_Optional and sets Vendors_IsSet to false.
`public inline bool `[`IsVendorsSet`](#structFRHAPI__Vendors_1a13df8f57ff533ea92ad16bee5d0b1b47)`() const` | Checks whether Vendors_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1ac0bc2f1150f4bfd30e32b019f77797b2)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1af00851ca1e4ee4b432004e60b969c29c)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1a4f8cf5ee185cc55d71f621cc65ef50ee)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Vendors_1a566ae446763cd8784d96daadfd0d8693)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1a68f87c3ba9e36f564a40adada2e153fe)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1aade22d1185797c23ba0eb3861f24ab09)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Vendors_1aa3bf7d9f93b6c703f27ea549b948303e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Vendors_1aba10303b3e5b18cda189db7e83ecd125)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Vendors_1ae62d7b93e3f17f45b54c1d61b666a0c7)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Vendors_1a2ddafe285c25e26f4b00c24462eacde2)`() const` | Checks whether CacheInfo_Optional has been set.
`public inline void `[`SetCacheInfoToNull`](#structFRHAPI__Vendors_1a0640d192422bf13a80b069a36aa69b29)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCacheInfoNull`](#structFRHAPI__Vendors_1a83a5c987fc7ea548455ea87a41b47bab)`() const` | Checks whether CacheInfo_Optional is set to null.

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

#### `public inline TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1ad05ca4319f3cf8574bd6a9d965110687)`()` <a id="structFRHAPI__Vendors_1ad05ca4319f3cf8574bd6a9d965110687"></a>

Gets the value of Vendors_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1a5fc61724f6ea0d9a29157d5bea5eaa4e)`() const` <a id="structFRHAPI__Vendors_1a5fc61724f6ea0d9a29157d5bea5eaa4e"></a>

Gets the value of Vendors_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#structFRHAPI__Vendors_1aa8a6fc08970c65ef9c6bc63a504ff98c)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & DefaultValue) const` <a id="structFRHAPI__Vendors_1aa8a6fc08970c65ef9c6bc63a504ff98c"></a>

Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendors`](#structFRHAPI__Vendors_1a21ae98705597d7efaad06c370782b488)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & OutValue) const` <a id="structFRHAPI__Vendors_1a21ae98705597d7efaad06c370782b488"></a>

Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1ab70c709484b85c7deb58f5f598eab5f7)`()` <a id="structFRHAPI__Vendors_1ab70c709484b85c7deb58f5f598eab5f7"></a>

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > * `[`GetVendorsOrNull`](#structFRHAPI__Vendors_1a21a9b897228b473e2133bbdc34548bd2)`() const` <a id="structFRHAPI__Vendors_1a21a9b897228b473e2133bbdc34548bd2"></a>

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendors`](#structFRHAPI__Vendors_1a8bdca23e7a0ced78140c8f72c3049209)`(const TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & NewValue)` <a id="structFRHAPI__Vendors_1a8bdca23e7a0ced78140c8f72c3049209"></a>

Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.

#### `public inline void `[`SetVendors`](#structFRHAPI__Vendors_1a0478ad525bf0c0da2639d6b2fe5247e8)`(TMap< FString, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > && NewValue)` <a id="structFRHAPI__Vendors_1a0478ad525bf0c0da2639d6b2fe5247e8"></a>

Sets the value of Vendors_Optional and also sets Vendors_IsSet to true using move semantics.

#### `public inline void `[`ClearVendors`](#structFRHAPI__Vendors_1aba0ed2732c70584fa05e8abb0eb14855)`()` <a id="structFRHAPI__Vendors_1aba0ed2732c70584fa05e8abb0eb14855"></a>

Clears the value of Vendors_Optional and sets Vendors_IsSet to false.

#### `public inline bool `[`IsVendorsSet`](#structFRHAPI__Vendors_1a13df8f57ff533ea92ad16bee5d0b1b47)`() const` <a id="structFRHAPI__Vendors_1a13df8f57ff533ea92ad16bee5d0b1b47"></a>

Checks whether Vendors_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1ac0bc2f1150f4bfd30e32b019f77797b2)`()` <a id="structFRHAPI__Vendors_1ac0bc2f1150f4bfd30e32b019f77797b2"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1af00851ca1e4ee4b432004e60b969c29c)`() const` <a id="structFRHAPI__Vendors_1af00851ca1e4ee4b432004e60b969c29c"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendors_1a4f8cf5ee185cc55d71f621cc65ef50ee)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Vendors_1a4f8cf5ee185cc55d71f621cc65ef50ee"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Vendors_1a566ae446763cd8784d96daadfd0d8693)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Vendors_1a566ae446763cd8784d96daadfd0d8693"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1a68f87c3ba9e36f564a40adada2e153fe)`()` <a id="structFRHAPI__Vendors_1a68f87c3ba9e36f564a40adada2e153fe"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendors_1aade22d1185797c23ba0eb3861f24ab09)`() const` <a id="structFRHAPI__Vendors_1aade22d1185797c23ba0eb3861f24ab09"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Vendors_1aa3bf7d9f93b6c703f27ea549b948303e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Vendors_1aa3bf7d9f93b6c703f27ea549b948303e"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Vendors_1aba10303b3e5b18cda189db7e83ecd125)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Vendors_1aba10303b3e5b18cda189db7e83ecd125"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Vendors_1ae62d7b93e3f17f45b54c1d61b666a0c7)`()` <a id="structFRHAPI__Vendors_1ae62d7b93e3f17f45b54c1d61b666a0c7"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Vendors_1a2ddafe285c25e26f4b00c24462eacde2)`() const` <a id="structFRHAPI__Vendors_1a2ddafe285c25e26f4b00c24462eacde2"></a>

Checks whether CacheInfo_Optional has been set.

#### `public inline void `[`SetCacheInfoToNull`](#structFRHAPI__Vendors_1a0640d192422bf13a80b069a36aa69b29)`()` <a id="structFRHAPI__Vendors_1a0640d192422bf13a80b069a36aa69b29"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCacheInfoNull`](#structFRHAPI__Vendors_1a83a5c987fc7ea548455ea87a41b47bab)`() const` <a id="structFRHAPI__Vendors_1a83a5c987fc7ea548455ea87a41b47bab"></a>

Checks whether CacheInfo_Optional is set to null.

