# group `RHAPI_PlatformUnionCCUs` <a id="group__RHAPI__PlatformUnionCCUs"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformUnionCCUs`](#structFRHAPI__PlatformUnionCCUs) | 

## struct `FRHAPI_PlatformUnionCCUs` <a id="structFRHAPI__PlatformUnionCCUs"></a>

```
struct FRHAPI_PlatformUnionCCUs
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_UnionCCU`](RHAPI_UnionCCU.md#structFRHAPI__UnionCCU)` > `[`PlatformCounts`](#structFRHAPI__PlatformUnionCCUs_1a62e425b3d1d4ca7d76d931f6f7b8ab92) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformUnionCCUs_1a6ff8147ad87d7bf6d0afe9635dd2c7b1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformUnionCCUs_1ae8474245ee70e50cd042277a95d4461b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_UnionCCU`](RHAPI_UnionCCU.md#structFRHAPI__UnionCCU)` > & `[`GetPlatformCounts`](#structFRHAPI__PlatformUnionCCUs_1a8e1eac4923e330654565c2bda41d6eec)`()` | Gets the value of PlatformCounts.
`public inline const TMap< FString, `[`FRHAPI_UnionCCU`](RHAPI_UnionCCU.md#structFRHAPI__UnionCCU)` > & `[`GetPlatformCounts`](#structFRHAPI__PlatformUnionCCUs_1ac19c7ffd66e610bd0e90e39007f06bc8)`() const` | Gets the value of PlatformCounts.
`public inline void `[`SetPlatformCounts`](#structFRHAPI__PlatformUnionCCUs_1a0d3449b5852b2930074613d8ae0bfe51)`(const TMap< FString, `[`FRHAPI_UnionCCU`](RHAPI_UnionCCU.md#structFRHAPI__UnionCCU)` > & NewValue)` | Sets the value of PlatformCounts.
`public inline void `[`SetPlatformCounts`](#structFRHAPI__PlatformUnionCCUs_1aa6f158575563b0f334872f707e46b3b7)`(TMap< FString, `[`FRHAPI_UnionCCU`](RHAPI_UnionCCU.md#structFRHAPI__UnionCCU)` > && NewValue)` | Sets the value of PlatformCounts using move semantics.

### Members

#### `public TMap< FString, `[`FRHAPI_UnionCCU`](RHAPI_UnionCCU.md#structFRHAPI__UnionCCU)` > `[`PlatformCounts`](#structFRHAPI__PlatformUnionCCUs_1a62e425b3d1d4ca7d76d931f6f7b8ab92) <a id="structFRHAPI__PlatformUnionCCUs_1a62e425b3d1d4ca7d76d931f6f7b8ab92"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformUnionCCUs_1a6ff8147ad87d7bf6d0afe9635dd2c7b1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformUnionCCUs_1a6ff8147ad87d7bf6d0afe9635dd2c7b1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformUnionCCUs_1ae8474245ee70e50cd042277a95d4461b)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformUnionCCUs_1ae8474245ee70e50cd042277a95d4461b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_UnionCCU`](RHAPI_UnionCCU.md#structFRHAPI__UnionCCU)` > & `[`GetPlatformCounts`](#structFRHAPI__PlatformUnionCCUs_1a8e1eac4923e330654565c2bda41d6eec)`()` <a id="structFRHAPI__PlatformUnionCCUs_1a8e1eac4923e330654565c2bda41d6eec"></a>

Gets the value of PlatformCounts.

#### `public inline const TMap< FString, `[`FRHAPI_UnionCCU`](RHAPI_UnionCCU.md#structFRHAPI__UnionCCU)` > & `[`GetPlatformCounts`](#structFRHAPI__PlatformUnionCCUs_1ac19c7ffd66e610bd0e90e39007f06bc8)`() const` <a id="structFRHAPI__PlatformUnionCCUs_1ac19c7ffd66e610bd0e90e39007f06bc8"></a>

Gets the value of PlatformCounts.

#### `public inline void `[`SetPlatformCounts`](#structFRHAPI__PlatformUnionCCUs_1a0d3449b5852b2930074613d8ae0bfe51)`(const TMap< FString, `[`FRHAPI_UnionCCU`](RHAPI_UnionCCU.md#structFRHAPI__UnionCCU)` > & NewValue)` <a id="structFRHAPI__PlatformUnionCCUs_1a0d3449b5852b2930074613d8ae0bfe51"></a>

Sets the value of PlatformCounts.

#### `public inline void `[`SetPlatformCounts`](#structFRHAPI__PlatformUnionCCUs_1aa6f158575563b0f334872f707e46b3b7)`(TMap< FString, `[`FRHAPI_UnionCCU`](RHAPI_UnionCCU.md#structFRHAPI__UnionCCU)` > && NewValue)` <a id="structFRHAPI__PlatformUnionCCUs_1aa6f158575563b0f334872f707e46b3b7"></a>

Sets the value of PlatformCounts using move semantics.

