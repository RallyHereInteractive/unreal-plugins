---
title: RHAPI_RegionsResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RegionsResponse`](#structFRHAPI__RegionsResponse) | A list of regions and a cursor to continue iterating.

## struct `FRHAPI_RegionsResponse` <a id="structFRHAPI__RegionsResponse"></a>

```
struct FRHAPI_RegionsResponse
  : public FRHAPI_Model
```

A list of regions and a cursor to continue iterating.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > `[`Regions`](#structFRHAPI__RegionsResponse_1a39c6be57dffa81805ce0548a912e5159) | List of all regions.
`public int32 `[`Cursor`](#structFRHAPI__RegionsResponse_1a3fdd3461ce10a95f444ce0f92c12df14) | Cursor to continue iterating through enabled regions. Non 0 cursor in the response means there are more regions. Pass the returned cursor up on a subsequent call to continue. A 0 cursor in the response means you have reached the end.
`public virtual bool `[`FromJson`](#structFRHAPI__RegionsResponse_1adb8cd803d29f83cf24468d0577abf000)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RegionsResponse_1a126a9c4bd7b096ddfc1082046ec01f50)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1a8f673608d0e9120e0d122ee2c5f85430)`()` | Gets the value of Regions.
`public inline const TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1afa67ad89d15232f6d38daac0fde00d99)`() const` | Gets the value of Regions.
`public inline void `[`SetRegions`](#structFRHAPI__RegionsResponse_1a71ad65aa13b453fba693727a4ac9bccb)`(const TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & NewValue)` | Sets the value of Regions.
`public inline void `[`SetRegions`](#structFRHAPI__RegionsResponse_1ad10e4b6016040d0c8a0f2712ec4fdfb8)`(TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > && NewValue)` | Sets the value of Regions using move semantics.
`public inline int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1ad41fc4216297e6537ddf0edc8cbdb829)`()` | Gets the value of Cursor.
`public inline const int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1a0e1636e14f14c7054ac8c1f04f06f7a5)`() const` | Gets the value of Cursor.
`public inline void `[`SetCursor`](#structFRHAPI__RegionsResponse_1ad57569e69c973aa882441b4c4d954b21)`(const int32 & NewValue)` | Sets the value of Cursor.
`public inline void `[`SetCursor`](#structFRHAPI__RegionsResponse_1ab4f5d6f7b736204110dec9d680724056)`(int32 && NewValue)` | Sets the value of Cursor using move semantics.
`public inline bool `[`IsCursorDefaultValue`](#structFRHAPI__RegionsResponse_1a1adf0f792485a9ab5e95f81fb7a104ad)`() const` | Returns true if Cursor matches the default value.
`public inline void `[`SetCursorToDefault`](#structFRHAPI__RegionsResponse_1a8aee19a22a6a8ec675ac7582cde78b49)`()` | Sets the value of Cursor to its default

### Members

#### `public TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > `[`Regions`](#structFRHAPI__RegionsResponse_1a39c6be57dffa81805ce0548a912e5159) <a id="structFRHAPI__RegionsResponse_1a39c6be57dffa81805ce0548a912e5159"></a>

List of all regions.

#### `public int32 `[`Cursor`](#structFRHAPI__RegionsResponse_1a3fdd3461ce10a95f444ce0f92c12df14) <a id="structFRHAPI__RegionsResponse_1a3fdd3461ce10a95f444ce0f92c12df14"></a>

Cursor to continue iterating through enabled regions. Non 0 cursor in the response means there are more regions. Pass the returned cursor up on a subsequent call to continue. A 0 cursor in the response means you have reached the end.

#### `public virtual bool `[`FromJson`](#structFRHAPI__RegionsResponse_1adb8cd803d29f83cf24468d0577abf000)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RegionsResponse_1adb8cd803d29f83cf24468d0577abf000"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RegionsResponse_1a126a9c4bd7b096ddfc1082046ec01f50)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RegionsResponse_1a126a9c4bd7b096ddfc1082046ec01f50"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1a8f673608d0e9120e0d122ee2c5f85430)`()` <a id="structFRHAPI__RegionsResponse_1a8f673608d0e9120e0d122ee2c5f85430"></a>

Gets the value of Regions.

#### `public inline const TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1afa67ad89d15232f6d38daac0fde00d99)`() const` <a id="structFRHAPI__RegionsResponse_1afa67ad89d15232f6d38daac0fde00d99"></a>

Gets the value of Regions.

#### `public inline void `[`SetRegions`](#structFRHAPI__RegionsResponse_1a71ad65aa13b453fba693727a4ac9bccb)`(const TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & NewValue)` <a id="structFRHAPI__RegionsResponse_1a71ad65aa13b453fba693727a4ac9bccb"></a>

Sets the value of Regions.

#### `public inline void `[`SetRegions`](#structFRHAPI__RegionsResponse_1ad10e4b6016040d0c8a0f2712ec4fdfb8)`(TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > && NewValue)` <a id="structFRHAPI__RegionsResponse_1ad10e4b6016040d0c8a0f2712ec4fdfb8"></a>

Sets the value of Regions using move semantics.

#### `public inline int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1ad41fc4216297e6537ddf0edc8cbdb829)`()` <a id="structFRHAPI__RegionsResponse_1ad41fc4216297e6537ddf0edc8cbdb829"></a>

Gets the value of Cursor.

#### `public inline const int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1a0e1636e14f14c7054ac8c1f04f06f7a5)`() const` <a id="structFRHAPI__RegionsResponse_1a0e1636e14f14c7054ac8c1f04f06f7a5"></a>

Gets the value of Cursor.

#### `public inline void `[`SetCursor`](#structFRHAPI__RegionsResponse_1ad57569e69c973aa882441b4c4d954b21)`(const int32 & NewValue)` <a id="structFRHAPI__RegionsResponse_1ad57569e69c973aa882441b4c4d954b21"></a>

Sets the value of Cursor.

#### `public inline void `[`SetCursor`](#structFRHAPI__RegionsResponse_1ab4f5d6f7b736204110dec9d680724056)`(int32 && NewValue)` <a id="structFRHAPI__RegionsResponse_1ab4f5d6f7b736204110dec9d680724056"></a>

Sets the value of Cursor using move semantics.

#### `public inline bool `[`IsCursorDefaultValue`](#structFRHAPI__RegionsResponse_1a1adf0f792485a9ab5e95f81fb7a104ad)`() const` <a id="structFRHAPI__RegionsResponse_1a1adf0f792485a9ab5e95f81fb7a104ad"></a>

Returns true if Cursor matches the default value.

#### `public inline void `[`SetCursorToDefault`](#structFRHAPI__RegionsResponse_1a8aee19a22a6a8ec675ac7582cde78b49)`()` <a id="structFRHAPI__RegionsResponse_1a8aee19a22a6a8ec675ac7582cde78b49"></a>

Sets the value of Cursor to its default

