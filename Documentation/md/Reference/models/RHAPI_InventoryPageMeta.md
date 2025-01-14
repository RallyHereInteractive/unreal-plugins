---
title: RHAPI_InventoryPageMeta
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InventoryPageMeta`](#structFRHAPI__InventoryPageMeta) | Metadata about the page of results.

## struct `FRHAPI_InventoryPageMeta` <a id="structFRHAPI__InventoryPageMeta"></a>

```
struct FRHAPI_InventoryPageMeta
  : public FRHAPI_Model
```

Metadata about the page of results.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`StartingPosition_Optional`](#structFRHAPI__InventoryPageMeta_1a5002d57ce2e74d5bda5b2ed3a467318e) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartingPosition_IsSet`](#structFRHAPI__InventoryPageMeta_1a16532e060c3d9a35990d011037e26185) | true if StartingPosition_Optional has been set to a value
`public FString `[`Cursor_Optional`](#structFRHAPI__InventoryPageMeta_1ada7928fc445aae377affd92d42052538) | The cursor value pointing to the next page of results. If cursor is provided, starting_position is ignored.
`public bool `[`Cursor_IsSet`](#structFRHAPI__InventoryPageMeta_1a3ecad8c0ecfa1b16362ee33524c96a2d) | true if Cursor_Optional has been set to a value
`public ERHAPI_SortOrder `[`Sort_Optional`](#structFRHAPI__InventoryPageMeta_1a120cc9454bd79821a3bdd0d2d515ee78) | The direction to search.
`public bool `[`Sort_IsSet`](#structFRHAPI__InventoryPageMeta_1a0e4d530492f5451fcae9bc53f4076d69) | true if Sort_Optional has been set to a value
`public int32 `[`Limit_Optional`](#structFRHAPI__InventoryPageMeta_1a88140b3d3bb2565e9c18954ce18a16f8) | The number of Orders to return.
`public bool `[`Limit_IsSet`](#structFRHAPI__InventoryPageMeta_1a4f868e55bc1bbd8ad8d27291b0915c3f) | true if Limit_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryPageMeta_1a4603a99487ac0381e1b93544eb43ef34)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryPageMeta_1a4a62823b068c8da7cae64fef50d78af8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a011b95746516d1789968186a157cfae7)`()` | Gets the value of StartingPosition_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ab81c345008fd8291ccb25a52c7073b2a)`() const` | Gets the value of StartingPosition_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ac54e686bfc12e56cea4b02d0c8bcafc7)`(const FDateTime & DefaultValue) const` | Gets the value of StartingPosition_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a393af4453b04315df0cf6056b116d3e5)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartingPosition_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1ae28d3f98e3fe728f0742c979e1812c1b)`()` | Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1a157cb306457e24417e76e8b6068030b0)`() const` | Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ab1a283ce630bd943d58da3c886f8228c)`(const FDateTime & NewValue)` | Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true.
`public inline void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1afa4c29ce11d07622cbdfb3afe801ad6d)`(FDateTime && NewValue)` | Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true using move semantics.
`public inline void `[`ClearStartingPosition`](#structFRHAPI__InventoryPageMeta_1abfb03b02e3c6c7f02615855e59118477)`()` | Clears the value of StartingPosition_Optional and sets StartingPosition_IsSet to false.
`public inline bool `[`IsStartingPositionSet`](#structFRHAPI__InventoryPageMeta_1a65d40cdcf7e8016dff6eb38111f0444d)`() const` | Checks whether StartingPosition_Optional has been set.
`public inline FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1aa9409be6ce2b3b6b975d18eb206b9dcc)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a777b9a47b4dd0cba78fadd1a2c3d500e)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a6e0a22b035d0d236f74817c3b799a531)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1ad94c8e9662fb0b77a3704b4dbabd8b3b)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1acfb3a4539fdcd30674533551a9dff564)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1ad836798f6325e59277e878393fcdadee)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1a86851f55d0ed96232212f21fea94aae2)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1a23b9b4272a337d5ea8cac6706329c5fe)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__InventoryPageMeta_1a5056003deeea2bf42834292fea815dc2)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline bool `[`IsCursorSet`](#structFRHAPI__InventoryPageMeta_1abc36b2c80f5218fb88b9ee232f41013f)`() const` | Checks whether Cursor_Optional has been set.
`public inline ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a9550c7b103595e9a237a9bdadc7382e2)`()` | Gets the value of Sort_Optional, regardless of it having been set.
`public inline const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1addf6ec80d3d73296473da21100c07e21)`() const` | Gets the value of Sort_Optional, regardless of it having been set.
`public inline const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1abdfc53784978e51ac31663c92cf233bf)`(const ERHAPI_SortOrder & DefaultValue) const` | Gets the value of Sort_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a5d70b32be762609e2458024e3f4304a3)`(ERHAPI_SortOrder & OutValue) const` | Fills OutValue with the value of Sort_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1ab46b9f486eeb0674bb957b179e05d973)`()` | Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1ad17bc10c6ebf306fc47dccf222f26fce)`() const` | Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1a3522714731282927592b8ec996a0f629)`(const ERHAPI_SortOrder & NewValue)` | Sets the value of Sort_Optional and also sets Sort_IsSet to true.
`public inline void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1a3f716ea913e3fd751b109cfa24d13330)`(ERHAPI_SortOrder && NewValue)` | Sets the value of Sort_Optional and also sets Sort_IsSet to true using move semantics.
`public inline void `[`ClearSort`](#structFRHAPI__InventoryPageMeta_1a9029662a8c55316d0971c5f259cc2b9f)`()` | Clears the value of Sort_Optional and sets Sort_IsSet to false.
`public inline bool `[`IsSortSet`](#structFRHAPI__InventoryPageMeta_1a9febeeddc554678c523dc3240fbdbb07)`() const` | Checks whether Sort_Optional has been set.
`public inline int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a3e2c53416dd001d4dfd2e25a6b21ee86)`()` | Gets the value of Limit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a8befe049cc17bcf7ddeff8e51fb6b6db)`() const` | Gets the value of Limit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a46df727afc0375e1ed275db6f26acec4)`(const int32 & DefaultValue) const` | Gets the value of Limit_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1af5cd327e6b96ec65c8e24b6d9695cc64)`(int32 & OutValue) const` | Fills OutValue with the value of Limit_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1a0d28bedae488e8ecac925adc4f4a7f31)`()` | Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1a85a509076534c4006857cd1b2f542a0d)`() const` | Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a61698daa87518ee9dc89d80d45929b37)`(const int32 & NewValue)` | Sets the value of Limit_Optional and also sets Limit_IsSet to true.
`public inline void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a76d69b65ad461898beb65c8bc983d173)`(int32 && NewValue)` | Sets the value of Limit_Optional and also sets Limit_IsSet to true using move semantics.
`public inline void `[`ClearLimit`](#structFRHAPI__InventoryPageMeta_1a2d163a9240ab964f999f5194a2ec6488)`()` | Clears the value of Limit_Optional and sets Limit_IsSet to false.
`public inline bool `[`IsLimitSet`](#structFRHAPI__InventoryPageMeta_1ae50cf1447efb391c005d245c5c1f764c)`() const` | Checks whether Limit_Optional has been set.
`public inline bool `[`IsLimitDefaultValue`](#structFRHAPI__InventoryPageMeta_1a529f359142657cfc2dce6b0abf17667c)`() const` | Returns true if Limit_Optional is set and matches the default value.
`public inline void `[`SetLimitToDefault`](#structFRHAPI__InventoryPageMeta_1a45a9cf3b2aa4fe2d80eb0d41c0a913d8)`()` | Sets the value of Limit_Optional to its default and also sets Limit_IsSet to true.

### Members

#### `public FDateTime `[`StartingPosition_Optional`](#structFRHAPI__InventoryPageMeta_1a5002d57ce2e74d5bda5b2ed3a467318e) <a id="structFRHAPI__InventoryPageMeta_1a5002d57ce2e74d5bda5b2ed3a467318e"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartingPosition_IsSet`](#structFRHAPI__InventoryPageMeta_1a16532e060c3d9a35990d011037e26185) <a id="structFRHAPI__InventoryPageMeta_1a16532e060c3d9a35990d011037e26185"></a>

true if StartingPosition_Optional has been set to a value

#### `public FString `[`Cursor_Optional`](#structFRHAPI__InventoryPageMeta_1ada7928fc445aae377affd92d42052538) <a id="structFRHAPI__InventoryPageMeta_1ada7928fc445aae377affd92d42052538"></a>

The cursor value pointing to the next page of results. If cursor is provided, starting_position is ignored.

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__InventoryPageMeta_1a3ecad8c0ecfa1b16362ee33524c96a2d) <a id="structFRHAPI__InventoryPageMeta_1a3ecad8c0ecfa1b16362ee33524c96a2d"></a>

true if Cursor_Optional has been set to a value

#### `public ERHAPI_SortOrder `[`Sort_Optional`](#structFRHAPI__InventoryPageMeta_1a120cc9454bd79821a3bdd0d2d515ee78) <a id="structFRHAPI__InventoryPageMeta_1a120cc9454bd79821a3bdd0d2d515ee78"></a>

The direction to search.

#### `public bool `[`Sort_IsSet`](#structFRHAPI__InventoryPageMeta_1a0e4d530492f5451fcae9bc53f4076d69) <a id="structFRHAPI__InventoryPageMeta_1a0e4d530492f5451fcae9bc53f4076d69"></a>

true if Sort_Optional has been set to a value

#### `public int32 `[`Limit_Optional`](#structFRHAPI__InventoryPageMeta_1a88140b3d3bb2565e9c18954ce18a16f8) <a id="structFRHAPI__InventoryPageMeta_1a88140b3d3bb2565e9c18954ce18a16f8"></a>

The number of Orders to return.

#### `public bool `[`Limit_IsSet`](#structFRHAPI__InventoryPageMeta_1a4f868e55bc1bbd8ad8d27291b0915c3f) <a id="structFRHAPI__InventoryPageMeta_1a4f868e55bc1bbd8ad8d27291b0915c3f"></a>

true if Limit_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryPageMeta_1a4603a99487ac0381e1b93544eb43ef34)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryPageMeta_1a4603a99487ac0381e1b93544eb43ef34"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryPageMeta_1a4a62823b068c8da7cae64fef50d78af8)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InventoryPageMeta_1a4a62823b068c8da7cae64fef50d78af8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a011b95746516d1789968186a157cfae7)`()` <a id="structFRHAPI__InventoryPageMeta_1a011b95746516d1789968186a157cfae7"></a>

Gets the value of StartingPosition_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ab81c345008fd8291ccb25a52c7073b2a)`() const` <a id="structFRHAPI__InventoryPageMeta_1ab81c345008fd8291ccb25a52c7073b2a"></a>

Gets the value of StartingPosition_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ac54e686bfc12e56cea4b02d0c8bcafc7)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1ac54e686bfc12e56cea4b02d0c8bcafc7"></a>

Gets the value of StartingPosition_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a393af4453b04315df0cf6056b116d3e5)`(FDateTime & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1a393af4453b04315df0cf6056b116d3e5"></a>

Fills OutValue with the value of StartingPosition_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1ae28d3f98e3fe728f0742c979e1812c1b)`()` <a id="structFRHAPI__InventoryPageMeta_1ae28d3f98e3fe728f0742c979e1812c1b"></a>

Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1a157cb306457e24417e76e8b6068030b0)`() const` <a id="structFRHAPI__InventoryPageMeta_1a157cb306457e24417e76e8b6068030b0"></a>

Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ab1a283ce630bd943d58da3c886f8228c)`(const FDateTime & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1ab1a283ce630bd943d58da3c886f8228c"></a>

Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true.

#### `public inline void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1afa4c29ce11d07622cbdfb3afe801ad6d)`(FDateTime && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1afa4c29ce11d07622cbdfb3afe801ad6d"></a>

Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true using move semantics.

#### `public inline void `[`ClearStartingPosition`](#structFRHAPI__InventoryPageMeta_1abfb03b02e3c6c7f02615855e59118477)`()` <a id="structFRHAPI__InventoryPageMeta_1abfb03b02e3c6c7f02615855e59118477"></a>

Clears the value of StartingPosition_Optional and sets StartingPosition_IsSet to false.

#### `public inline bool `[`IsStartingPositionSet`](#structFRHAPI__InventoryPageMeta_1a65d40cdcf7e8016dff6eb38111f0444d)`() const` <a id="structFRHAPI__InventoryPageMeta_1a65d40cdcf7e8016dff6eb38111f0444d"></a>

Checks whether StartingPosition_Optional has been set.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1aa9409be6ce2b3b6b975d18eb206b9dcc)`()` <a id="structFRHAPI__InventoryPageMeta_1aa9409be6ce2b3b6b975d18eb206b9dcc"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a777b9a47b4dd0cba78fadd1a2c3d500e)`() const` <a id="structFRHAPI__InventoryPageMeta_1a777b9a47b4dd0cba78fadd1a2c3d500e"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a6e0a22b035d0d236f74817c3b799a531)`(const FString & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1a6e0a22b035d0d236f74817c3b799a531"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1ad94c8e9662fb0b77a3704b4dbabd8b3b)`(FString & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1ad94c8e9662fb0b77a3704b4dbabd8b3b"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1acfb3a4539fdcd30674533551a9dff564)`()` <a id="structFRHAPI__InventoryPageMeta_1acfb3a4539fdcd30674533551a9dff564"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1ad836798f6325e59277e878393fcdadee)`() const` <a id="structFRHAPI__InventoryPageMeta_1ad836798f6325e59277e878393fcdadee"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1a86851f55d0ed96232212f21fea94aae2)`(const FString & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a86851f55d0ed96232212f21fea94aae2"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1a23b9b4272a337d5ea8cac6706329c5fe)`(FString && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a23b9b4272a337d5ea8cac6706329c5fe"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__InventoryPageMeta_1a5056003deeea2bf42834292fea815dc2)`()` <a id="structFRHAPI__InventoryPageMeta_1a5056003deeea2bf42834292fea815dc2"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline bool `[`IsCursorSet`](#structFRHAPI__InventoryPageMeta_1abc36b2c80f5218fb88b9ee232f41013f)`() const` <a id="structFRHAPI__InventoryPageMeta_1abc36b2c80f5218fb88b9ee232f41013f"></a>

Checks whether Cursor_Optional has been set.

#### `public inline ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a9550c7b103595e9a237a9bdadc7382e2)`()` <a id="structFRHAPI__InventoryPageMeta_1a9550c7b103595e9a237a9bdadc7382e2"></a>

Gets the value of Sort_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1addf6ec80d3d73296473da21100c07e21)`() const` <a id="structFRHAPI__InventoryPageMeta_1addf6ec80d3d73296473da21100c07e21"></a>

Gets the value of Sort_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1abdfc53784978e51ac31663c92cf233bf)`(const ERHAPI_SortOrder & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1abdfc53784978e51ac31663c92cf233bf"></a>

Gets the value of Sort_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a5d70b32be762609e2458024e3f4304a3)`(ERHAPI_SortOrder & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1a5d70b32be762609e2458024e3f4304a3"></a>

Fills OutValue with the value of Sort_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1ab46b9f486eeb0674bb957b179e05d973)`()` <a id="structFRHAPI__InventoryPageMeta_1ab46b9f486eeb0674bb957b179e05d973"></a>

Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1ad17bc10c6ebf306fc47dccf222f26fce)`() const` <a id="structFRHAPI__InventoryPageMeta_1ad17bc10c6ebf306fc47dccf222f26fce"></a>

Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1a3522714731282927592b8ec996a0f629)`(const ERHAPI_SortOrder & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a3522714731282927592b8ec996a0f629"></a>

Sets the value of Sort_Optional and also sets Sort_IsSet to true.

#### `public inline void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1a3f716ea913e3fd751b109cfa24d13330)`(ERHAPI_SortOrder && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a3f716ea913e3fd751b109cfa24d13330"></a>

Sets the value of Sort_Optional and also sets Sort_IsSet to true using move semantics.

#### `public inline void `[`ClearSort`](#structFRHAPI__InventoryPageMeta_1a9029662a8c55316d0971c5f259cc2b9f)`()` <a id="structFRHAPI__InventoryPageMeta_1a9029662a8c55316d0971c5f259cc2b9f"></a>

Clears the value of Sort_Optional and sets Sort_IsSet to false.

#### `public inline bool `[`IsSortSet`](#structFRHAPI__InventoryPageMeta_1a9febeeddc554678c523dc3240fbdbb07)`() const` <a id="structFRHAPI__InventoryPageMeta_1a9febeeddc554678c523dc3240fbdbb07"></a>

Checks whether Sort_Optional has been set.

#### `public inline int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a3e2c53416dd001d4dfd2e25a6b21ee86)`()` <a id="structFRHAPI__InventoryPageMeta_1a3e2c53416dd001d4dfd2e25a6b21ee86"></a>

Gets the value of Limit_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a8befe049cc17bcf7ddeff8e51fb6b6db)`() const` <a id="structFRHAPI__InventoryPageMeta_1a8befe049cc17bcf7ddeff8e51fb6b6db"></a>

Gets the value of Limit_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a46df727afc0375e1ed275db6f26acec4)`(const int32 & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1a46df727afc0375e1ed275db6f26acec4"></a>

Gets the value of Limit_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1af5cd327e6b96ec65c8e24b6d9695cc64)`(int32 & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1af5cd327e6b96ec65c8e24b6d9695cc64"></a>

Fills OutValue with the value of Limit_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1a0d28bedae488e8ecac925adc4f4a7f31)`()` <a id="structFRHAPI__InventoryPageMeta_1a0d28bedae488e8ecac925adc4f4a7f31"></a>

Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1a85a509076534c4006857cd1b2f542a0d)`() const` <a id="structFRHAPI__InventoryPageMeta_1a85a509076534c4006857cd1b2f542a0d"></a>

Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a61698daa87518ee9dc89d80d45929b37)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a61698daa87518ee9dc89d80d45929b37"></a>

Sets the value of Limit_Optional and also sets Limit_IsSet to true.

#### `public inline void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a76d69b65ad461898beb65c8bc983d173)`(int32 && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a76d69b65ad461898beb65c8bc983d173"></a>

Sets the value of Limit_Optional and also sets Limit_IsSet to true using move semantics.

#### `public inline void `[`ClearLimit`](#structFRHAPI__InventoryPageMeta_1a2d163a9240ab964f999f5194a2ec6488)`()` <a id="structFRHAPI__InventoryPageMeta_1a2d163a9240ab964f999f5194a2ec6488"></a>

Clears the value of Limit_Optional and sets Limit_IsSet to false.

#### `public inline bool `[`IsLimitSet`](#structFRHAPI__InventoryPageMeta_1ae50cf1447efb391c005d245c5c1f764c)`() const` <a id="structFRHAPI__InventoryPageMeta_1ae50cf1447efb391c005d245c5c1f764c"></a>

Checks whether Limit_Optional has been set.

#### `public inline bool `[`IsLimitDefaultValue`](#structFRHAPI__InventoryPageMeta_1a529f359142657cfc2dce6b0abf17667c)`() const` <a id="structFRHAPI__InventoryPageMeta_1a529f359142657cfc2dce6b0abf17667c"></a>

Returns true if Limit_Optional is set and matches the default value.

#### `public inline void `[`SetLimitToDefault`](#structFRHAPI__InventoryPageMeta_1a45a9cf3b2aa4fe2d80eb0d41c0a913d8)`()` <a id="structFRHAPI__InventoryPageMeta_1a45a9cf3b2aa4fe2d80eb0d41c0a913d8"></a>

Sets the value of Limit_Optional to its default and also sets Limit_IsSet to true.

