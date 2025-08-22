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
`public inline FORCEINLINE TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1aaf1f9a49c0310590951a83d0fd4eb322)`()` | Gets the value of Regions.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1a5563d4b65504222f657af1f27116b9db)`() const` | Gets the value of Regions.
`public inline FORCEINLINE void `[`SetRegions`](#structFRHAPI__RegionsResponse_1a81f93c1ea407022f91602167d9460e28)`(const TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & NewValue)` | Sets the value of Regions.
`public inline FORCEINLINE void `[`SetRegions`](#structFRHAPI__RegionsResponse_1aa99b394a206175d6f5598d823b24309f)`(TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > && NewValue)` | Sets the value of Regions using move semantics.
`public inline FORCEINLINE int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1af1aaa17fed01fda11a353b9da6db7f39)`()` | Gets the value of Cursor.
`public inline FORCEINLINE const int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1acdd4b5e0fdd00a83aa3356ed6c68b8d2)`() const` | Gets the value of Cursor.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__RegionsResponse_1a8e648bf5d4d9cb62a4cf1700ec84234a)`(const int32 & NewValue)` | Sets the value of Cursor.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__RegionsResponse_1a1311646f54910b71b295370ce5087074)`(int32 && NewValue)` | Sets the value of Cursor using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Cursor`](#structFRHAPI__RegionsResponse_1a56e90f8bf5da55f5201011a3c2bd939e)`()` | Returns the default value of Cursor.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1aaf1f9a49c0310590951a83d0fd4eb322)`()` <a id="structFRHAPI__RegionsResponse_1aaf1f9a49c0310590951a83d0fd4eb322"></a>

Gets the value of Regions.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & `[`GetRegions`](#structFRHAPI__RegionsResponse_1a5563d4b65504222f657af1f27116b9db)`() const` <a id="structFRHAPI__RegionsResponse_1a5563d4b65504222f657af1f27116b9db"></a>

Gets the value of Regions.

#### `public inline FORCEINLINE void `[`SetRegions`](#structFRHAPI__RegionsResponse_1a81f93c1ea407022f91602167d9460e28)`(const TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > & NewValue)` <a id="structFRHAPI__RegionsResponse_1a81f93c1ea407022f91602167d9460e28"></a>

Sets the value of Regions.

#### `public inline FORCEINLINE void `[`SetRegions`](#structFRHAPI__RegionsResponse_1aa99b394a206175d6f5598d823b24309f)`(TArray< `[`FRHAPI_Region`](RHAPI_Region.md#structFRHAPI__Region)` > && NewValue)` <a id="structFRHAPI__RegionsResponse_1aa99b394a206175d6f5598d823b24309f"></a>

Sets the value of Regions using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1af1aaa17fed01fda11a353b9da6db7f39)`()` <a id="structFRHAPI__RegionsResponse_1af1aaa17fed01fda11a353b9da6db7f39"></a>

Gets the value of Cursor.

#### `public inline FORCEINLINE const int32 & `[`GetCursor`](#structFRHAPI__RegionsResponse_1acdd4b5e0fdd00a83aa3356ed6c68b8d2)`() const` <a id="structFRHAPI__RegionsResponse_1acdd4b5e0fdd00a83aa3356ed6c68b8d2"></a>

Gets the value of Cursor.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__RegionsResponse_1a8e648bf5d4d9cb62a4cf1700ec84234a)`(const int32 & NewValue)` <a id="structFRHAPI__RegionsResponse_1a8e648bf5d4d9cb62a4cf1700ec84234a"></a>

Sets the value of Cursor.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__RegionsResponse_1a1311646f54910b71b295370ce5087074)`(int32 && NewValue)` <a id="structFRHAPI__RegionsResponse_1a1311646f54910b71b295370ce5087074"></a>

Sets the value of Cursor using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Cursor`](#structFRHAPI__RegionsResponse_1a56e90f8bf5da55f5201011a3c2bd939e)`()` <a id="structFRHAPI__RegionsResponse_1a56e90f8bf5da55f5201011a3c2bd939e"></a>

Returns the default value of Cursor.

