# RHAPI_RegionsResponse <a id="group__RHAPI__RegionsResponse"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > `[`Regions`](#structFRHAPI__RegionsResponse_1a39c6be57dffa81805ce0548a912e5159) | List of all regions.
`public int32 `[`Cursor`](#structFRHAPI__RegionsResponse_1a3fdd3461ce10a95f444ce0f92c12df14) | Cursor to continue iterating through enabled regions. Non 0 cursor in the response means there are more regions. Pass the returned cursor up on a subsequent call to continue. A 0 cursor in the response means you have reached the end.
`public virtual bool `[`FromJson`](#structFRHAPI__RegionsResponse_1a005b1d05348dd42cce311c5a5e96266b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RegionsResponse_1ae5e1a61325c1ef40e956be575dd73d21)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1a73cb043968f010e0fb707c641d2d2ece)`()` | Gets the value of Regions.
`public inline const TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1a14b4e2795b3ef2224f4ea6731f3c895d)`() const` | Gets the value of Regions.
`public inline void `[`SetRegions`](#structFRHAPI__RegionsResponse_1ad105d1a2e9cb43976972a8e37cb7a65b)`(TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > NewValue)` | Sets the value of Regions.
`public inline int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1a4a4d7ca43dca64558748338627013d1b)`()` | Gets the value of Cursor.
`public inline const int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1afd77ebb324104e67f59ccc6111c8baa6)`() const` | Gets the value of Cursor.
`public inline void `[`SetCursor`](#structFRHAPI__RegionsResponse_1abb45eadfb06da13b2ffb40f6fd93d755)`(int32 NewValue)` | Sets the value of Cursor.
`public inline bool `[`IsCursorDefaultValue`](#structFRHAPI__RegionsResponse_1a1adf0f792485a9ab5e95f81fb7a104ad)`() const` | Returns true if Cursor matches the default value.
`public inline void `[`SetCursorToDefault`](#structFRHAPI__RegionsResponse_1a8aee19a22a6a8ec675ac7582cde78b49)`()` | Sets the value of Cursor to its default

#### Members

#### `public TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > `[`Regions`](#structFRHAPI__RegionsResponse_1a39c6be57dffa81805ce0548a912e5159) <a id="structFRHAPI__RegionsResponse_1a39c6be57dffa81805ce0548a912e5159"></a>

List of all regions.

<br>
#### `public int32 `[`Cursor`](#structFRHAPI__RegionsResponse_1a3fdd3461ce10a95f444ce0f92c12df14) <a id="structFRHAPI__RegionsResponse_1a3fdd3461ce10a95f444ce0f92c12df14"></a>

Cursor to continue iterating through enabled regions. Non 0 cursor in the response means there are more regions. Pass the returned cursor up on a subsequent call to continue. A 0 cursor in the response means you have reached the end.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__RegionsResponse_1a005b1d05348dd42cce311c5a5e96266b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RegionsResponse_1a005b1d05348dd42cce311c5a5e96266b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__RegionsResponse_1ae5e1a61325c1ef40e956be575dd73d21)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RegionsResponse_1ae5e1a61325c1ef40e956be575dd73d21"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1a73cb043968f010e0fb707c641d2d2ece)`()` <a id="structFRHAPI__RegionsResponse_1a73cb043968f010e0fb707c641d2d2ece"></a>

Gets the value of Regions.

<br>
#### `public inline const TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1a14b4e2795b3ef2224f4ea6731f3c895d)`() const` <a id="structFRHAPI__RegionsResponse_1a14b4e2795b3ef2224f4ea6731f3c895d"></a>

Gets the value of Regions.

<br>
#### `public inline void `[`SetRegions`](#structFRHAPI__RegionsResponse_1ad105d1a2e9cb43976972a8e37cb7a65b)`(TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > NewValue)` <a id="structFRHAPI__RegionsResponse_1ad105d1a2e9cb43976972a8e37cb7a65b"></a>

Sets the value of Regions.

<br>
#### `public inline int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1a4a4d7ca43dca64558748338627013d1b)`()` <a id="structFRHAPI__RegionsResponse_1a4a4d7ca43dca64558748338627013d1b"></a>

Gets the value of Cursor.

<br>
#### `public inline const int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1afd77ebb324104e67f59ccc6111c8baa6)`() const` <a id="structFRHAPI__RegionsResponse_1afd77ebb324104e67f59ccc6111c8baa6"></a>

Gets the value of Cursor.

<br>
#### `public inline void `[`SetCursor`](#structFRHAPI__RegionsResponse_1abb45eadfb06da13b2ffb40f6fd93d755)`(int32 NewValue)` <a id="structFRHAPI__RegionsResponse_1abb45eadfb06da13b2ffb40f6fd93d755"></a>

Sets the value of Cursor.

<br>
#### `public inline bool `[`IsCursorDefaultValue`](#structFRHAPI__RegionsResponse_1a1adf0f792485a9ab5e95f81fb7a104ad)`() const` <a id="structFRHAPI__RegionsResponse_1a1adf0f792485a9ab5e95f81fb7a104ad"></a>

Returns true if Cursor matches the default value.

<br>
#### `public inline void `[`SetCursorToDefault`](#structFRHAPI__RegionsResponse_1a8aee19a22a6a8ec675ac7582cde78b49)`()` <a id="structFRHAPI__RegionsResponse_1a8aee19a22a6a8ec675ac7582cde78b49"></a>

Sets the value of Cursor to its default

<br>
