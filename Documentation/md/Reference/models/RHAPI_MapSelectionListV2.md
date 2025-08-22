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
`public inline FORCEINLINE FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1a33aca86c6bb69fff5efc1392baea4672)`()` | Gets the value of MapSelectionListId.
`public inline FORCEINLINE const FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1aaf2c00c554685d279df76b967172ef15)`() const` | Gets the value of MapSelectionListId.
`public inline FORCEINLINE void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1ab8953922245787e0bafdf5fbbd7e1122)`(const FString & NewValue)` | Sets the value of MapSelectionListId.
`public inline FORCEINLINE void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1abff77747fa731f6eec215dec3d3c7118)`(FString && NewValue)` | Sets the value of MapSelectionListId using move semantics.
`public inline FORCEINLINE TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & `[`GetMaps`](#structFRHAPI__MapSelectionListV2_1aeb115d0c5f9921af21381be9aab2dc04)`()` | Gets the value of Maps.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & `[`GetMaps`](#structFRHAPI__MapSelectionListV2_1a64c7a9f2f6b6c5e637e680e614519fd1)`() const` | Gets the value of Maps.
`public inline FORCEINLINE void `[`SetMaps`](#structFRHAPI__MapSelectionListV2_1a5528d0f227499e628f2109dead53e40f)`(const TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & NewValue)` | Sets the value of Maps.
`public inline FORCEINLINE void `[`SetMaps`](#structFRHAPI__MapSelectionListV2_1a74adaa35eb627bfc931a4067eda47ebe)`(TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > && NewValue)` | Sets the value of Maps using move semantics.

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

#### `public inline FORCEINLINE FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1a33aca86c6bb69fff5efc1392baea4672)`()` <a id="structFRHAPI__MapSelectionListV2_1a33aca86c6bb69fff5efc1392baea4672"></a>

Gets the value of MapSelectionListId.

#### `public inline FORCEINLINE const FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1aaf2c00c554685d279df76b967172ef15)`() const` <a id="structFRHAPI__MapSelectionListV2_1aaf2c00c554685d279df76b967172ef15"></a>

Gets the value of MapSelectionListId.

#### `public inline FORCEINLINE void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1ab8953922245787e0bafdf5fbbd7e1122)`(const FString & NewValue)` <a id="structFRHAPI__MapSelectionListV2_1ab8953922245787e0bafdf5fbbd7e1122"></a>

Sets the value of MapSelectionListId.

#### `public inline FORCEINLINE void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionListV2_1abff77747fa731f6eec215dec3d3c7118)`(FString && NewValue)` <a id="structFRHAPI__MapSelectionListV2_1abff77747fa731f6eec215dec3d3c7118"></a>

Sets the value of MapSelectionListId using move semantics.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & `[`GetMaps`](#structFRHAPI__MapSelectionListV2_1aeb115d0c5f9921af21381be9aab2dc04)`()` <a id="structFRHAPI__MapSelectionListV2_1aeb115d0c5f9921af21381be9aab2dc04"></a>

Gets the value of Maps.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & `[`GetMaps`](#structFRHAPI__MapSelectionListV2_1a64c7a9f2f6b6c5e637e680e614519fd1)`() const` <a id="structFRHAPI__MapSelectionListV2_1a64c7a9f2f6b6c5e637e680e614519fd1"></a>

Gets the value of Maps.

#### `public inline FORCEINLINE void `[`SetMaps`](#structFRHAPI__MapSelectionListV2_1a5528d0f227499e628f2109dead53e40f)`(const TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > & NewValue)` <a id="structFRHAPI__MapSelectionListV2_1a5528d0f227499e628f2109dead53e40f"></a>

Sets the value of Maps.

#### `public inline FORCEINLINE void `[`SetMaps`](#structFRHAPI__MapSelectionListV2_1a74adaa35eb627bfc931a4067eda47ebe)`(TArray< `[`FRHAPI_MapConfigV2`](RHAPI_MapConfigV2.md#structFRHAPI__MapConfigV2)` > && NewValue)` <a id="structFRHAPI__MapSelectionListV2_1a74adaa35eb627bfc931a4067eda47ebe"></a>

Sets the value of Maps using move semantics.

