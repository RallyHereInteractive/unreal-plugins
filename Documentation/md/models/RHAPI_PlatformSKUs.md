# group `RHAPI_PlatformSKUs` <a id="group__RHAPI__PlatformSKUs"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformSKUs`](#structFRHAPI__PlatformSKUs) | A collection of SKUs.

## struct `FRHAPI_PlatformSKUs` <a id="structFRHAPI__PlatformSKUs"></a>

```
struct FRHAPI_PlatformSKUs
  : public FRHAPI_Model
```

A collection of SKUs.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > `[`Skus_Optional`](#structFRHAPI__PlatformSKUs_1a0a8a66e63cd86b4aa4a6ceead1affbc9) | A collection of SKUs.
`public bool `[`Skus_IsSet`](#structFRHAPI__PlatformSKUs_1ad02e809536bac106a826d6475e4bd4c5) | true if Skus_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PlatformSKUs_1a246d0a0bc4366646fbaef51ea057a45e) | Cache info for the Platform SKUs.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__PlatformSKUs_1aae1ce5ef5205e6d7c5414b1640f2b18f) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformSKUs_1a0c31881ff04e6dc80325b6838d5ae507)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformSKUs_1ae29eff36cc4eb8e6379ef2e2d7a8de8b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a02994490ad10f069d161ba708dbc0f5b)`()` | Gets the value of Skus_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a8d5984c92fa7f4a621eba67741d0db94)`() const` | Gets the value of Skus_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a87bf4265665d140d4d2a765d2ef87be5)`(const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & DefaultValue) const` | Gets the value of Skus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a62141f4469ac477b36799bb984e16bb8)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & OutValue) const` | Fills OutValue with the value of Skus_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1ac4890aab945e1de80feef258c209fda3)`()` | Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1aa9cf1cdb6bb6ebd5ed1c340d88ba9dcd)`() const` | Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSkus`](#structFRHAPI__PlatformSKUs_1a5940deee89f4e82a7308de336dc3b7a4)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > NewValue)` | Sets the value of Skus_Optional and also sets Skus_IsSet to true.
`public inline void `[`ClearSkus`](#structFRHAPI__PlatformSKUs_1a08ca18a31302856e16bd7c639613c6bb)`()` | Clears the value of Skus_Optional and sets Skus_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a318445d1f3dc40ce6b3077a9749b4486)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a7097729d60085c51e126b384414bf48b)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a51004cde9674f61262c3f0bf07cfa93a)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a886a5b9d4d09655191ac22fa2829f049)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1a815a34c44515d5b5cda7186287507ca4)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1a392ad3242cba87ca9b7af8277b758df7)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKUs_1a927ec923274add3e7377274d0e9486c4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKUs_1ab850ddbfa9a2c1ea59ff31d5c08825e3)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > `[`Skus_Optional`](#structFRHAPI__PlatformSKUs_1a0a8a66e63cd86b4aa4a6ceead1affbc9) <a id="structFRHAPI__PlatformSKUs_1a0a8a66e63cd86b4aa4a6ceead1affbc9"></a>

A collection of SKUs.

#### `public bool `[`Skus_IsSet`](#structFRHAPI__PlatformSKUs_1ad02e809536bac106a826d6475e4bd4c5) <a id="structFRHAPI__PlatformSKUs_1ad02e809536bac106a826d6475e4bd4c5"></a>

true if Skus_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PlatformSKUs_1a246d0a0bc4366646fbaef51ea057a45e) <a id="structFRHAPI__PlatformSKUs_1a246d0a0bc4366646fbaef51ea057a45e"></a>

Cache info for the Platform SKUs.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PlatformSKUs_1aae1ce5ef5205e6d7c5414b1640f2b18f) <a id="structFRHAPI__PlatformSKUs_1aae1ce5ef5205e6d7c5414b1640f2b18f"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformSKUs_1a0c31881ff04e6dc80325b6838d5ae507)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformSKUs_1a0c31881ff04e6dc80325b6838d5ae507"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformSKUs_1ae29eff36cc4eb8e6379ef2e2d7a8de8b)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformSKUs_1ae29eff36cc4eb8e6379ef2e2d7a8de8b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a02994490ad10f069d161ba708dbc0f5b)`()` <a id="structFRHAPI__PlatformSKUs_1a02994490ad10f069d161ba708dbc0f5b"></a>

Gets the value of Skus_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a8d5984c92fa7f4a621eba67741d0db94)`() const` <a id="structFRHAPI__PlatformSKUs_1a8d5984c92fa7f4a621eba67741d0db94"></a>

Gets the value of Skus_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a87bf4265665d140d4d2a765d2ef87be5)`(const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & DefaultValue) const` <a id="structFRHAPI__PlatformSKUs_1a87bf4265665d140d4d2a765d2ef87be5"></a>

Gets the value of Skus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a62141f4469ac477b36799bb984e16bb8)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & OutValue) const` <a id="structFRHAPI__PlatformSKUs_1a62141f4469ac477b36799bb984e16bb8"></a>

Fills OutValue with the value of Skus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1ac4890aab945e1de80feef258c209fda3)`()` <a id="structFRHAPI__PlatformSKUs_1ac4890aab945e1de80feef258c209fda3"></a>

Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1aa9cf1cdb6bb6ebd5ed1c340d88ba9dcd)`() const` <a id="structFRHAPI__PlatformSKUs_1aa9cf1cdb6bb6ebd5ed1c340d88ba9dcd"></a>

Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSkus`](#structFRHAPI__PlatformSKUs_1a5940deee89f4e82a7308de336dc3b7a4)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > NewValue)` <a id="structFRHAPI__PlatformSKUs_1a5940deee89f4e82a7308de336dc3b7a4"></a>

Sets the value of Skus_Optional and also sets Skus_IsSet to true.

#### `public inline void `[`ClearSkus`](#structFRHAPI__PlatformSKUs_1a08ca18a31302856e16bd7c639613c6bb)`()` <a id="structFRHAPI__PlatformSKUs_1a08ca18a31302856e16bd7c639613c6bb"></a>

Clears the value of Skus_Optional and sets Skus_IsSet to false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a318445d1f3dc40ce6b3077a9749b4486)`()` <a id="structFRHAPI__PlatformSKUs_1a318445d1f3dc40ce6b3077a9749b4486"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a7097729d60085c51e126b384414bf48b)`() const` <a id="structFRHAPI__PlatformSKUs_1a7097729d60085c51e126b384414bf48b"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a51004cde9674f61262c3f0bf07cfa93a)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKUs_1a51004cde9674f61262c3f0bf07cfa93a"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a886a5b9d4d09655191ac22fa2829f049)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PlatformSKUs_1a886a5b9d4d09655191ac22fa2829f049"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1a815a34c44515d5b5cda7186287507ca4)`()` <a id="structFRHAPI__PlatformSKUs_1a815a34c44515d5b5cda7186287507ca4"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1a392ad3242cba87ca9b7af8277b758df7)`() const` <a id="structFRHAPI__PlatformSKUs_1a392ad3242cba87ca9b7af8277b758df7"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKUs_1a927ec923274add3e7377274d0e9486c4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__PlatformSKUs_1a927ec923274add3e7377274d0e9486c4"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKUs_1ab850ddbfa9a2c1ea59ff31d5c08825e3)`()` <a id="structFRHAPI__PlatformSKUs_1ab850ddbfa9a2c1ea59ff31d5c08825e3"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

