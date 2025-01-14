---
title: RHAPI_MapSelectionListV2
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MapSelectionListV2`](#structFRHAPI__MapSelectionListV2) | 

## struct `FRHAPI_MapSelectionListV2` <a id="structFRHAPI__MapSelectionListV2"></a>

```
struct FRHAPI_MapSelectionListV2
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MapSelectionListId`](#structFRHAPI__MapSelectionListV2_1a14dc8c0be8f15c5611dbf79087b0599e) | ID to uniquely identify this map selection list.
`public TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > `[`Maps`](#structFRHAPI__MapSelectionListV2_1ac98cad728a16cb2c742629671a17b010) | List of maps that can be chosen in this selection list.
`public virtual bool `[`FromJson`](#structFRHAPI__MapSelectionListV2_1a07a70f446f40c48c5b56b65bf4f91f34)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MapSelectionListV2_1ae06ae9c2ab0d297a4b9dc013814823f5)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1a8e5f4f9b16d6a28a1c088df2458f0529)`()` | Gets the value of MapSelectionListId.
`public inline const FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1a9c86885dc760f2c155c6f9286061b2ef)`() const` | Gets the value of MapSelectionListId.
`public inline void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1ae15bc147a01794d32ce87ce80a631ead)`(const FString & NewValue)` | Sets the value of MapSelectionListId.
`public inline void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1a71b0924cfc1e5f3fa096c2fb2b3e9637)`(FString && NewValue)` | Sets the value of MapSelectionListId using move semantics.
`public inline TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & `[`GetMaps`](#structFRHAPI__MapSelectionListV2_1a6bcea3131f8accf621011ef72eeeabda)`()` | Gets the value of Maps.
`public inline const TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & `[`GetMaps`](#structFRHAPI__MapSelectionListV2_1a474a8c232117eea5d0f046b6d7e03f4b)`() const` | Gets the value of Maps.
`public inline void `[`SetMaps`](#structFRHAPI__MapSelectionListV2_1ae7b1dcfce553e88503dbde5b52e98119)`(const TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & NewValue)` | Sets the value of Maps.
`public inline void `[`SetMaps`](#structFRHAPI__MapSelectionListV2_1addf2c34379fa25f9f80f14c07bfa42d0)`(TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > && NewValue)` | Sets the value of Maps using move semantics.

### Members

#### `public FString `[`MapSelectionListId`](#structFRHAPI__MapSelectionListV2_1a14dc8c0be8f15c5611dbf79087b0599e) <a id="structFRHAPI__MapSelectionListV2_1a14dc8c0be8f15c5611dbf79087b0599e"></a>

ID to uniquely identify this map selection list.

#### `public TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > `[`Maps`](#structFRHAPI__MapSelectionListV2_1ac98cad728a16cb2c742629671a17b010) <a id="structFRHAPI__MapSelectionListV2_1ac98cad728a16cb2c742629671a17b010"></a>

List of maps that can be chosen in this selection list.

#### `public virtual bool `[`FromJson`](#structFRHAPI__MapSelectionListV2_1a07a70f446f40c48c5b56b65bf4f91f34)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MapSelectionListV2_1a07a70f446f40c48c5b56b65bf4f91f34"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MapSelectionListV2_1ae06ae9c2ab0d297a4b9dc013814823f5)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MapSelectionListV2_1ae06ae9c2ab0d297a4b9dc013814823f5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1a8e5f4f9b16d6a28a1c088df2458f0529)`()` <a id="structFRHAPI__MapSelectionListV2_1a8e5f4f9b16d6a28a1c088df2458f0529"></a>

Gets the value of MapSelectionListId.

#### `public inline const FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1a9c86885dc760f2c155c6f9286061b2ef)`() const` <a id="structFRHAPI__MapSelectionListV2_1a9c86885dc760f2c155c6f9286061b2ef"></a>

Gets the value of MapSelectionListId.

#### `public inline void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1ae15bc147a01794d32ce87ce80a631ead)`(const FString & NewValue)` <a id="structFRHAPI__MapSelectionListV2_1ae15bc147a01794d32ce87ce80a631ead"></a>

Sets the value of MapSelectionListId.

#### `public inline void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1a71b0924cfc1e5f3fa096c2fb2b3e9637)`(FString && NewValue)` <a id="structFRHAPI__MapSelectionListV2_1a71b0924cfc1e5f3fa096c2fb2b3e9637"></a>

Sets the value of MapSelectionListId using move semantics.

#### `public inline TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & `[`GetMaps`](#structFRHAPI__MapSelectionListV2_1a6bcea3131f8accf621011ef72eeeabda)`()` <a id="structFRHAPI__MapSelectionListV2_1a6bcea3131f8accf621011ef72eeeabda"></a>

Gets the value of Maps.

#### `public inline const TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & `[`GetMaps`](#structFRHAPI__MapSelectionListV2_1a474a8c232117eea5d0f046b6d7e03f4b)`() const` <a id="structFRHAPI__MapSelectionListV2_1a474a8c232117eea5d0f046b6d7e03f4b"></a>

Gets the value of Maps.

#### `public inline void `[`SetMaps`](#structFRHAPI__MapSelectionListV2_1ae7b1dcfce553e88503dbde5b52e98119)`(const TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & NewValue)` <a id="structFRHAPI__MapSelectionListV2_1ae7b1dcfce553e88503dbde5b52e98119"></a>

Sets the value of Maps.

#### `public inline void `[`SetMaps`](#structFRHAPI__MapSelectionListV2_1addf2c34379fa25f9f80f14c07bfa42d0)`(TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > && NewValue)` <a id="structFRHAPI__MapSelectionListV2_1addf2c34379fa25f9f80f14c07bfa42d0"></a>

Sets the value of Maps using move semantics.

