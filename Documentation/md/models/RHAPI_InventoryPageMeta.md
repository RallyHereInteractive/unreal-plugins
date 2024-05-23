# group `RHAPI_InventoryPageMeta` <a id="group__RHAPI__InventoryPageMeta"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryPageMeta_1a38427182d79116dd40b2d1ccf18a59c4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryPageMeta_1a65ca19121d156d635b6810ec4dcfc17b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a3c44fda7651fc115a74c592999664d09)`()` | Gets the value of StartingPosition_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a48fa02aa3e866f131b893a6be2819e64)`() const` | Gets the value of StartingPosition_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a2a697943ae549cf1b5e2a3f61c745b89)`(const FDateTime & DefaultValue) const` | Gets the value of StartingPosition_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a393af4453b04315df0cf6056b116d3e5)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartingPosition_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1a648fa26e7238b29e334bb7f65ee1e5be)`()` | Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1afca1a33a512d2f3b6d6ed6f27dd31333)`() const` | Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ab1a283ce630bd943d58da3c886f8228c)`(const FDateTime & NewValue)` | Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true.
`public inline void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1afa4c29ce11d07622cbdfb3afe801ad6d)`(FDateTime && NewValue)` | Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true using move semantics.
`public inline void `[`ClearStartingPosition`](#structFRHAPI__InventoryPageMeta_1abfb03b02e3c6c7f02615855e59118477)`()` | Clears the value of StartingPosition_Optional and sets StartingPosition_IsSet to false.
`public inline FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a87d855b3da18995a74d5e2e494a3e465)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a91f48b809ff6f89d817d0c4b7d65324c)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a34f2dfdd667d2b555b07f25d58989590)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1ad94c8e9662fb0b77a3704b4dbabd8b3b)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1a903d41d5ec2acc673fa56d0030a9630e)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1ade0d94c0a4dcd930ba8f7187a3f20526)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1a86851f55d0ed96232212f21fea94aae2)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1a23b9b4272a337d5ea8cac6706329c5fe)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__InventoryPageMeta_1a5056003deeea2bf42834292fea815dc2)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1afd74d1967b31907de123080537b6597b)`()` | Gets the value of Sort_Optional, regardless of it having been set.
`public inline const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1ab7587a292ff20c81dfe1f48b1448fb98)`() const` | Gets the value of Sort_Optional, regardless of it having been set.
`public inline const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1aee1e3a4dc443711031ddeb6852b2be5c)`(const ERHAPI_SortOrder & DefaultValue) const` | Gets the value of Sort_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a5d70b32be762609e2458024e3f4304a3)`(ERHAPI_SortOrder & OutValue) const` | Fills OutValue with the value of Sort_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1ae12efc3540a1820a90d23c40196d63a5)`()` | Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1ad5129dbfcde84799a5906fa22274f4fd)`() const` | Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1a3522714731282927592b8ec996a0f629)`(const ERHAPI_SortOrder & NewValue)` | Sets the value of Sort_Optional and also sets Sort_IsSet to true.
`public inline void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1a3f716ea913e3fd751b109cfa24d13330)`(ERHAPI_SortOrder && NewValue)` | Sets the value of Sort_Optional and also sets Sort_IsSet to true using move semantics.
`public inline void `[`ClearSort`](#structFRHAPI__InventoryPageMeta_1a9029662a8c55316d0971c5f259cc2b9f)`()` | Clears the value of Sort_Optional and sets Sort_IsSet to false.
`public inline int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1ab206adec9b57dd83cf3b74733c006124)`()` | Gets the value of Limit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a1898a672f357922da383e9b26cbb40ab)`() const` | Gets the value of Limit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a491742e8dcef1239d77491bdd019a728)`(const int32 & DefaultValue) const` | Gets the value of Limit_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1af5cd327e6b96ec65c8e24b6d9695cc64)`(int32 & OutValue) const` | Fills OutValue with the value of Limit_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1aebac7a1def32ee784c1efb027479bfea)`()` | Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1addb26599f5bf58ad993c62af6cd61ba6)`() const` | Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a61698daa87518ee9dc89d80d45929b37)`(const int32 & NewValue)` | Sets the value of Limit_Optional and also sets Limit_IsSet to true.
`public inline void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a76d69b65ad461898beb65c8bc983d173)`(int32 && NewValue)` | Sets the value of Limit_Optional and also sets Limit_IsSet to true using move semantics.
`public inline void `[`ClearLimit`](#structFRHAPI__InventoryPageMeta_1a2d163a9240ab964f999f5194a2ec6488)`()` | Clears the value of Limit_Optional and sets Limit_IsSet to false.
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

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryPageMeta_1a38427182d79116dd40b2d1ccf18a59c4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryPageMeta_1a38427182d79116dd40b2d1ccf18a59c4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryPageMeta_1a65ca19121d156d635b6810ec4dcfc17b)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InventoryPageMeta_1a65ca19121d156d635b6810ec4dcfc17b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a3c44fda7651fc115a74c592999664d09)`()` <a id="structFRHAPI__InventoryPageMeta_1a3c44fda7651fc115a74c592999664d09"></a>

Gets the value of StartingPosition_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a48fa02aa3e866f131b893a6be2819e64)`() const` <a id="structFRHAPI__InventoryPageMeta_1a48fa02aa3e866f131b893a6be2819e64"></a>

Gets the value of StartingPosition_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a2a697943ae549cf1b5e2a3f61c745b89)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1a2a697943ae549cf1b5e2a3f61c745b89"></a>

Gets the value of StartingPosition_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a393af4453b04315df0cf6056b116d3e5)`(FDateTime & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1a393af4453b04315df0cf6056b116d3e5"></a>

Fills OutValue with the value of StartingPosition_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1a648fa26e7238b29e334bb7f65ee1e5be)`()` <a id="structFRHAPI__InventoryPageMeta_1a648fa26e7238b29e334bb7f65ee1e5be"></a>

Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1afca1a33a512d2f3b6d6ed6f27dd31333)`() const` <a id="structFRHAPI__InventoryPageMeta_1afca1a33a512d2f3b6d6ed6f27dd31333"></a>

Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ab1a283ce630bd943d58da3c886f8228c)`(const FDateTime & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1ab1a283ce630bd943d58da3c886f8228c"></a>

Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true.

#### `public inline void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1afa4c29ce11d07622cbdfb3afe801ad6d)`(FDateTime && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1afa4c29ce11d07622cbdfb3afe801ad6d"></a>

Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true using move semantics.

#### `public inline void `[`ClearStartingPosition`](#structFRHAPI__InventoryPageMeta_1abfb03b02e3c6c7f02615855e59118477)`()` <a id="structFRHAPI__InventoryPageMeta_1abfb03b02e3c6c7f02615855e59118477"></a>

Clears the value of StartingPosition_Optional and sets StartingPosition_IsSet to false.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a87d855b3da18995a74d5e2e494a3e465)`()` <a id="structFRHAPI__InventoryPageMeta_1a87d855b3da18995a74d5e2e494a3e465"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a91f48b809ff6f89d817d0c4b7d65324c)`() const` <a id="structFRHAPI__InventoryPageMeta_1a91f48b809ff6f89d817d0c4b7d65324c"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a34f2dfdd667d2b555b07f25d58989590)`(const FString & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1a34f2dfdd667d2b555b07f25d58989590"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1ad94c8e9662fb0b77a3704b4dbabd8b3b)`(FString & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1ad94c8e9662fb0b77a3704b4dbabd8b3b"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1a903d41d5ec2acc673fa56d0030a9630e)`()` <a id="structFRHAPI__InventoryPageMeta_1a903d41d5ec2acc673fa56d0030a9630e"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1ade0d94c0a4dcd930ba8f7187a3f20526)`() const` <a id="structFRHAPI__InventoryPageMeta_1ade0d94c0a4dcd930ba8f7187a3f20526"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1a86851f55d0ed96232212f21fea94aae2)`(const FString & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a86851f55d0ed96232212f21fea94aae2"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1a23b9b4272a337d5ea8cac6706329c5fe)`(FString && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a23b9b4272a337d5ea8cac6706329c5fe"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__InventoryPageMeta_1a5056003deeea2bf42834292fea815dc2)`()` <a id="structFRHAPI__InventoryPageMeta_1a5056003deeea2bf42834292fea815dc2"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1afd74d1967b31907de123080537b6597b)`()` <a id="structFRHAPI__InventoryPageMeta_1afd74d1967b31907de123080537b6597b"></a>

Gets the value of Sort_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1ab7587a292ff20c81dfe1f48b1448fb98)`() const` <a id="structFRHAPI__InventoryPageMeta_1ab7587a292ff20c81dfe1f48b1448fb98"></a>

Gets the value of Sort_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1aee1e3a4dc443711031ddeb6852b2be5c)`(const ERHAPI_SortOrder & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1aee1e3a4dc443711031ddeb6852b2be5c"></a>

Gets the value of Sort_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a5d70b32be762609e2458024e3f4304a3)`(ERHAPI_SortOrder & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1a5d70b32be762609e2458024e3f4304a3"></a>

Fills OutValue with the value of Sort_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1ae12efc3540a1820a90d23c40196d63a5)`()` <a id="structFRHAPI__InventoryPageMeta_1ae12efc3540a1820a90d23c40196d63a5"></a>

Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1ad5129dbfcde84799a5906fa22274f4fd)`() const` <a id="structFRHAPI__InventoryPageMeta_1ad5129dbfcde84799a5906fa22274f4fd"></a>

Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1a3522714731282927592b8ec996a0f629)`(const ERHAPI_SortOrder & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a3522714731282927592b8ec996a0f629"></a>

Sets the value of Sort_Optional and also sets Sort_IsSet to true.

#### `public inline void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1a3f716ea913e3fd751b109cfa24d13330)`(ERHAPI_SortOrder && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a3f716ea913e3fd751b109cfa24d13330"></a>

Sets the value of Sort_Optional and also sets Sort_IsSet to true using move semantics.

#### `public inline void `[`ClearSort`](#structFRHAPI__InventoryPageMeta_1a9029662a8c55316d0971c5f259cc2b9f)`()` <a id="structFRHAPI__InventoryPageMeta_1a9029662a8c55316d0971c5f259cc2b9f"></a>

Clears the value of Sort_Optional and sets Sort_IsSet to false.

#### `public inline int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1ab206adec9b57dd83cf3b74733c006124)`()` <a id="structFRHAPI__InventoryPageMeta_1ab206adec9b57dd83cf3b74733c006124"></a>

Gets the value of Limit_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a1898a672f357922da383e9b26cbb40ab)`() const` <a id="structFRHAPI__InventoryPageMeta_1a1898a672f357922da383e9b26cbb40ab"></a>

Gets the value of Limit_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a491742e8dcef1239d77491bdd019a728)`(const int32 & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1a491742e8dcef1239d77491bdd019a728"></a>

Gets the value of Limit_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1af5cd327e6b96ec65c8e24b6d9695cc64)`(int32 & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1af5cd327e6b96ec65c8e24b6d9695cc64"></a>

Fills OutValue with the value of Limit_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1aebac7a1def32ee784c1efb027479bfea)`()` <a id="structFRHAPI__InventoryPageMeta_1aebac7a1def32ee784c1efb027479bfea"></a>

Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1addb26599f5bf58ad993c62af6cd61ba6)`() const` <a id="structFRHAPI__InventoryPageMeta_1addb26599f5bf58ad993c62af6cd61ba6"></a>

Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a61698daa87518ee9dc89d80d45929b37)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a61698daa87518ee9dc89d80d45929b37"></a>

Sets the value of Limit_Optional and also sets Limit_IsSet to true.

#### `public inline void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a76d69b65ad461898beb65c8bc983d173)`(int32 && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a76d69b65ad461898beb65c8bc983d173"></a>

Sets the value of Limit_Optional and also sets Limit_IsSet to true using move semantics.

#### `public inline void `[`ClearLimit`](#structFRHAPI__InventoryPageMeta_1a2d163a9240ab964f999f5194a2ec6488)`()` <a id="structFRHAPI__InventoryPageMeta_1a2d163a9240ab964f999f5194a2ec6488"></a>

Clears the value of Limit_Optional and sets Limit_IsSet to false.

#### `public inline bool `[`IsLimitDefaultValue`](#structFRHAPI__InventoryPageMeta_1a529f359142657cfc2dce6b0abf17667c)`() const` <a id="structFRHAPI__InventoryPageMeta_1a529f359142657cfc2dce6b0abf17667c"></a>

Returns true if Limit_Optional is set and matches the default value.

#### `public inline void `[`SetLimitToDefault`](#structFRHAPI__InventoryPageMeta_1a45a9cf3b2aa4fe2d80eb0d41c0a913d8)`()` <a id="structFRHAPI__InventoryPageMeta_1a45a9cf3b2aa4fe2d80eb0d41c0a913d8"></a>

Sets the value of Limit_Optional to its default and also sets Limit_IsSet to true.

