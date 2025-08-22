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
`public bool `[`StartingPosition_IsNull`](#structFRHAPI__InventoryPageMeta_1a065ce42552eb3cb7853d6c17b833740b) | true if StartingPosition_Optional has been explicitly set to null
`public FString `[`Cursor_Optional`](#structFRHAPI__InventoryPageMeta_1ada7928fc445aae377affd92d42052538) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__InventoryPageMeta_1a3ecad8c0ecfa1b16362ee33524c96a2d) | true if Cursor_Optional has been set to a value
`public bool `[`Cursor_IsNull`](#structFRHAPI__InventoryPageMeta_1a09ed5ac4b995ae36c5cd1eef9f06629b) | true if Cursor_Optional has been explicitly set to null
`public ERHAPI_SortOrder `[`Sort_Optional`](#structFRHAPI__InventoryPageMeta_1a120cc9454bd79821a3bdd0d2d515ee78) | 
`public bool `[`Sort_IsSet`](#structFRHAPI__InventoryPageMeta_1a0e4d530492f5451fcae9bc53f4076d69) | true if Sort_Optional has been set to a value
`public bool `[`Sort_IsNull`](#structFRHAPI__InventoryPageMeta_1aff40ad4a7f0376caf867ff2e89442dc5) | true if Sort_Optional has been explicitly set to null
`public int32 `[`Limit_Optional`](#structFRHAPI__InventoryPageMeta_1a88140b3d3bb2565e9c18954ce18a16f8) | The number of Orders to return.
`public bool `[`Limit_IsSet`](#structFRHAPI__InventoryPageMeta_1a4f868e55bc1bbd8ad8d27291b0915c3f) | true if Limit_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryPageMeta_1a4603a99487ac0381e1b93544eb43ef34)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryPageMeta_1a4a62823b068c8da7cae64fef50d78af8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ad4dfd839880b3aaf6cc18a3846aa408f)`()` | Gets the value of StartingPosition_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a95aa25e6bd979364c164655e8e03f23f)`() const` | Gets the value of StartingPosition_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ae9af69f3fd24b7aaa9e5dace99333c12)`(const FDateTime & DefaultValue) const` | Gets the value of StartingPosition_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a3624093e346e0f4b2d05e35390d486f1)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartingPosition_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1a688bb03b079144b2c6e696d0b3661e69)`()` | Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1a85360d9c8a668dc7d688152e658b65f4)`() const` | Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1adc22d041a95d86245644aba3da500201)`(const FDateTime & NewValue)` | Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true.
`public inline FORCEINLINE void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a144201eb8a316d998ba7167eb8fbf20c)`(FDateTime && NewValue)` | Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true using move semantics.
`public inline void `[`ClearStartingPosition`](#structFRHAPI__InventoryPageMeta_1abfb03b02e3c6c7f02615855e59118477)`()` | Clears the value of StartingPosition_Optional and sets StartingPosition_IsSet to false.
`public inline FORCEINLINE void `[`SetStartingPositionToNull`](#structFRHAPI__InventoryPageMeta_1aa31a50bb0ba4021adddbd719ca44521e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStartingPositionNull`](#structFRHAPI__InventoryPageMeta_1a7904a49586a6ac0163f9f4a529d8e742)`() const` | Checks whether StartingPosition_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1ae481b7b987d44f9b17d02f1df898385b)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a4f06993990ad92cb65d7dab02844e133)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a6df3006b0ebae891b0b6784b5aceedd5)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1ad59cd6c883a19957aa55fc791ff963c3)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1aa2bbba1d64be6378103700d9a956c6e5)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1a18b5023e1bd7ce4296d3f71f5a6c80db)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1ab88b78f4718efe2ffe6ba8f34565c1db)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1a62c5ab3eac1b44f69d878e938d1ea8c6)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__InventoryPageMeta_1a5056003deeea2bf42834292fea815dc2)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__InventoryPageMeta_1abcef7db1e45e741aca7d6fa0f4c4a7d2)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__InventoryPageMeta_1a7a39a51f280f1c327bb1470a618f6130)`() const` | Checks whether Cursor_Optional is set to null.
`public inline FORCEINLINE ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a341fb829d6513428d42830b2929ca619)`()` | Gets the value of Sort_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a45941e833eaa0b787edfa0f943a71a09)`() const` | Gets the value of Sort_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a67716e80b7521a9a3a4aca5ddc4f28d1)`(const ERHAPI_SortOrder & DefaultValue) const` | Gets the value of Sort_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a2474c5cec9fadb802238015067bbcad9)`(ERHAPI_SortOrder & OutValue) const` | Fills OutValue with the value of Sort_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1a388f90b884f5121becf45b1b65aa960f)`()` | Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1a8b99921aaac54f947ba6e964384194e8)`() const` | Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1adf36a9b484d0e6ceb34245eb6b690732)`(const ERHAPI_SortOrder & NewValue)` | Sets the value of Sort_Optional and also sets Sort_IsSet to true.
`public inline FORCEINLINE void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1ab616a75f5deaef0373aa15ff5cd50bdf)`(ERHAPI_SortOrder && NewValue)` | Sets the value of Sort_Optional and also sets Sort_IsSet to true using move semantics.
`public inline void `[`ClearSort`](#structFRHAPI__InventoryPageMeta_1a9029662a8c55316d0971c5f259cc2b9f)`()` | Clears the value of Sort_Optional and sets Sort_IsSet to false.
`public inline FORCEINLINE void `[`SetSortToNull`](#structFRHAPI__InventoryPageMeta_1a43d18ca3270dc1ec5e366872890e71ed)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSortNull`](#structFRHAPI__InventoryPageMeta_1aeb295f6acb1f8ea80d73f778238796e3)`() const` | Checks whether Sort_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a764fe2ba12451aa8322380e571ae9b98)`()` | Gets the value of Limit_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1ae3382065b389668bba0dca0f956bc368)`() const` | Gets the value of Limit_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a0dd1254a6fd1c0edecf2421f5b355e3f)`(const int32 & DefaultValue) const` | Gets the value of Limit_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a1440c41c22b5d6d855d6a1b34f71a733)`(int32 & OutValue) const` | Fills OutValue with the value of Limit_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1a07b54330507be23bfe2ea8f8ffec6357)`()` | Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1a9af491c9bd75a39c1a25f7a428414ade)`() const` | Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a3aeaf708ae267f5fa7f2e1cac47bb898)`(const int32 & NewValue)` | Sets the value of Limit_Optional and also sets Limit_IsSet to true.
`public inline FORCEINLINE void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a558e3950da9d3635114c48bac1aa2ac7)`(int32 && NewValue)` | Sets the value of Limit_Optional and also sets Limit_IsSet to true using move semantics.
`public inline void `[`ClearLimit`](#structFRHAPI__InventoryPageMeta_1a2d163a9240ab964f999f5194a2ec6488)`()` | Clears the value of Limit_Optional and sets Limit_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Limit`](#structFRHAPI__InventoryPageMeta_1ac68975bc4df09a62999d28350fab0b60)`()` | Returns the default value of Limit.

### Members

#### `public FDateTime `[`StartingPosition_Optional`](#structFRHAPI__InventoryPageMeta_1a5002d57ce2e74d5bda5b2ed3a467318e) <a id="structFRHAPI__InventoryPageMeta_1a5002d57ce2e74d5bda5b2ed3a467318e"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartingPosition_IsSet`](#structFRHAPI__InventoryPageMeta_1a16532e060c3d9a35990d011037e26185) <a id="structFRHAPI__InventoryPageMeta_1a16532e060c3d9a35990d011037e26185"></a>

true if StartingPosition_Optional has been set to a value

#### `public bool `[`StartingPosition_IsNull`](#structFRHAPI__InventoryPageMeta_1a065ce42552eb3cb7853d6c17b833740b) <a id="structFRHAPI__InventoryPageMeta_1a065ce42552eb3cb7853d6c17b833740b"></a>

true if StartingPosition_Optional has been explicitly set to null

#### `public FString `[`Cursor_Optional`](#structFRHAPI__InventoryPageMeta_1ada7928fc445aae377affd92d42052538) <a id="structFRHAPI__InventoryPageMeta_1ada7928fc445aae377affd92d42052538"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__InventoryPageMeta_1a3ecad8c0ecfa1b16362ee33524c96a2d) <a id="structFRHAPI__InventoryPageMeta_1a3ecad8c0ecfa1b16362ee33524c96a2d"></a>

true if Cursor_Optional has been set to a value

#### `public bool `[`Cursor_IsNull`](#structFRHAPI__InventoryPageMeta_1a09ed5ac4b995ae36c5cd1eef9f06629b) <a id="structFRHAPI__InventoryPageMeta_1a09ed5ac4b995ae36c5cd1eef9f06629b"></a>

true if Cursor_Optional has been explicitly set to null

#### `public ERHAPI_SortOrder `[`Sort_Optional`](#structFRHAPI__InventoryPageMeta_1a120cc9454bd79821a3bdd0d2d515ee78) <a id="structFRHAPI__InventoryPageMeta_1a120cc9454bd79821a3bdd0d2d515ee78"></a>

#### `public bool `[`Sort_IsSet`](#structFRHAPI__InventoryPageMeta_1a0e4d530492f5451fcae9bc53f4076d69) <a id="structFRHAPI__InventoryPageMeta_1a0e4d530492f5451fcae9bc53f4076d69"></a>

true if Sort_Optional has been set to a value

#### `public bool `[`Sort_IsNull`](#structFRHAPI__InventoryPageMeta_1aff40ad4a7f0376caf867ff2e89442dc5) <a id="structFRHAPI__InventoryPageMeta_1aff40ad4a7f0376caf867ff2e89442dc5"></a>

true if Sort_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ad4dfd839880b3aaf6cc18a3846aa408f)`()` <a id="structFRHAPI__InventoryPageMeta_1ad4dfd839880b3aaf6cc18a3846aa408f"></a>

Gets the value of StartingPosition_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a95aa25e6bd979364c164655e8e03f23f)`() const` <a id="structFRHAPI__InventoryPageMeta_1a95aa25e6bd979364c164655e8e03f23f"></a>

Gets the value of StartingPosition_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1ae9af69f3fd24b7aaa9e5dace99333c12)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1ae9af69f3fd24b7aaa9e5dace99333c12"></a>

Gets the value of StartingPosition_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a3624093e346e0f4b2d05e35390d486f1)`(FDateTime & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1a3624093e346e0f4b2d05e35390d486f1"></a>

Fills OutValue with the value of StartingPosition_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1a688bb03b079144b2c6e696d0b3661e69)`()` <a id="structFRHAPI__InventoryPageMeta_1a688bb03b079144b2c6e696d0b3661e69"></a>

Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetStartingPositionOrNull`](#structFRHAPI__InventoryPageMeta_1a85360d9c8a668dc7d688152e658b65f4)`() const` <a id="structFRHAPI__InventoryPageMeta_1a85360d9c8a668dc7d688152e658b65f4"></a>

Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1adc22d041a95d86245644aba3da500201)`(const FDateTime & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1adc22d041a95d86245644aba3da500201"></a>

Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStartingPosition`](#structFRHAPI__InventoryPageMeta_1a144201eb8a316d998ba7167eb8fbf20c)`(FDateTime && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a144201eb8a316d998ba7167eb8fbf20c"></a>

Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true using move semantics.

#### `public inline void `[`ClearStartingPosition`](#structFRHAPI__InventoryPageMeta_1abfb03b02e3c6c7f02615855e59118477)`()` <a id="structFRHAPI__InventoryPageMeta_1abfb03b02e3c6c7f02615855e59118477"></a>

Clears the value of StartingPosition_Optional and sets StartingPosition_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStartingPositionToNull`](#structFRHAPI__InventoryPageMeta_1aa31a50bb0ba4021adddbd719ca44521e)`()` <a id="structFRHAPI__InventoryPageMeta_1aa31a50bb0ba4021adddbd719ca44521e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStartingPositionNull`](#structFRHAPI__InventoryPageMeta_1a7904a49586a6ac0163f9f4a529d8e742)`() const` <a id="structFRHAPI__InventoryPageMeta_1a7904a49586a6ac0163f9f4a529d8e742"></a>

Checks whether StartingPosition_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1ae481b7b987d44f9b17d02f1df898385b)`()` <a id="structFRHAPI__InventoryPageMeta_1ae481b7b987d44f9b17d02f1df898385b"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a4f06993990ad92cb65d7dab02844e133)`() const` <a id="structFRHAPI__InventoryPageMeta_1a4f06993990ad92cb65d7dab02844e133"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1a6df3006b0ebae891b0b6784b5aceedd5)`(const FString & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1a6df3006b0ebae891b0b6784b5aceedd5"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__InventoryPageMeta_1ad59cd6c883a19957aa55fc791ff963c3)`(FString & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1ad59cd6c883a19957aa55fc791ff963c3"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1aa2bbba1d64be6378103700d9a956c6e5)`()` <a id="structFRHAPI__InventoryPageMeta_1aa2bbba1d64be6378103700d9a956c6e5"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__InventoryPageMeta_1a18b5023e1bd7ce4296d3f71f5a6c80db)`() const` <a id="structFRHAPI__InventoryPageMeta_1a18b5023e1bd7ce4296d3f71f5a6c80db"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1ab88b78f4718efe2ffe6ba8f34565c1db)`(const FString & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1ab88b78f4718efe2ffe6ba8f34565c1db"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__InventoryPageMeta_1a62c5ab3eac1b44f69d878e938d1ea8c6)`(FString && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a62c5ab3eac1b44f69d878e938d1ea8c6"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__InventoryPageMeta_1a5056003deeea2bf42834292fea815dc2)`()` <a id="structFRHAPI__InventoryPageMeta_1a5056003deeea2bf42834292fea815dc2"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__InventoryPageMeta_1abcef7db1e45e741aca7d6fa0f4c4a7d2)`()` <a id="structFRHAPI__InventoryPageMeta_1abcef7db1e45e741aca7d6fa0f4c4a7d2"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__InventoryPageMeta_1a7a39a51f280f1c327bb1470a618f6130)`() const` <a id="structFRHAPI__InventoryPageMeta_1a7a39a51f280f1c327bb1470a618f6130"></a>

Checks whether Cursor_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a341fb829d6513428d42830b2929ca619)`()` <a id="structFRHAPI__InventoryPageMeta_1a341fb829d6513428d42830b2929ca619"></a>

Gets the value of Sort_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a45941e833eaa0b787edfa0f943a71a09)`() const` <a id="structFRHAPI__InventoryPageMeta_1a45941e833eaa0b787edfa0f943a71a09"></a>

Gets the value of Sort_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_SortOrder & `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a67716e80b7521a9a3a4aca5ddc4f28d1)`(const ERHAPI_SortOrder & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1a67716e80b7521a9a3a4aca5ddc4f28d1"></a>

Gets the value of Sort_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSort`](#structFRHAPI__InventoryPageMeta_1a2474c5cec9fadb802238015067bbcad9)`(ERHAPI_SortOrder & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1a2474c5cec9fadb802238015067bbcad9"></a>

Fills OutValue with the value of Sort_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1a388f90b884f5121becf45b1b65aa960f)`()` <a id="structFRHAPI__InventoryPageMeta_1a388f90b884f5121becf45b1b65aa960f"></a>

Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_SortOrder * `[`GetSortOrNull`](#structFRHAPI__InventoryPageMeta_1a8b99921aaac54f947ba6e964384194e8)`() const` <a id="structFRHAPI__InventoryPageMeta_1a8b99921aaac54f947ba6e964384194e8"></a>

Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1adf36a9b484d0e6ceb34245eb6b690732)`(const ERHAPI_SortOrder & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1adf36a9b484d0e6ceb34245eb6b690732"></a>

Sets the value of Sort_Optional and also sets Sort_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSort`](#structFRHAPI__InventoryPageMeta_1ab616a75f5deaef0373aa15ff5cd50bdf)`(ERHAPI_SortOrder && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1ab616a75f5deaef0373aa15ff5cd50bdf"></a>

Sets the value of Sort_Optional and also sets Sort_IsSet to true using move semantics.

#### `public inline void `[`ClearSort`](#structFRHAPI__InventoryPageMeta_1a9029662a8c55316d0971c5f259cc2b9f)`()` <a id="structFRHAPI__InventoryPageMeta_1a9029662a8c55316d0971c5f259cc2b9f"></a>

Clears the value of Sort_Optional and sets Sort_IsSet to false.

#### `public inline FORCEINLINE void `[`SetSortToNull`](#structFRHAPI__InventoryPageMeta_1a43d18ca3270dc1ec5e366872890e71ed)`()` <a id="structFRHAPI__InventoryPageMeta_1a43d18ca3270dc1ec5e366872890e71ed"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSortNull`](#structFRHAPI__InventoryPageMeta_1aeb295f6acb1f8ea80d73f778238796e3)`() const` <a id="structFRHAPI__InventoryPageMeta_1aeb295f6acb1f8ea80d73f778238796e3"></a>

Checks whether Sort_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a764fe2ba12451aa8322380e571ae9b98)`()` <a id="structFRHAPI__InventoryPageMeta_1a764fe2ba12451aa8322380e571ae9b98"></a>

Gets the value of Limit_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1ae3382065b389668bba0dca0f956bc368)`() const` <a id="structFRHAPI__InventoryPageMeta_1ae3382065b389668bba0dca0f956bc368"></a>

Gets the value of Limit_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a0dd1254a6fd1c0edecf2421f5b355e3f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__InventoryPageMeta_1a0dd1254a6fd1c0edecf2421f5b355e3f"></a>

Gets the value of Limit_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLimit`](#structFRHAPI__InventoryPageMeta_1a1440c41c22b5d6d855d6a1b34f71a733)`(int32 & OutValue) const` <a id="structFRHAPI__InventoryPageMeta_1a1440c41c22b5d6d855d6a1b34f71a733"></a>

Fills OutValue with the value of Limit_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1a07b54330507be23bfe2ea8f8ffec6357)`()` <a id="structFRHAPI__InventoryPageMeta_1a07b54330507be23bfe2ea8f8ffec6357"></a>

Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLimitOrNull`](#structFRHAPI__InventoryPageMeta_1a9af491c9bd75a39c1a25f7a428414ade)`() const` <a id="structFRHAPI__InventoryPageMeta_1a9af491c9bd75a39c1a25f7a428414ade"></a>

Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a3aeaf708ae267f5fa7f2e1cac47bb898)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a3aeaf708ae267f5fa7f2e1cac47bb898"></a>

Sets the value of Limit_Optional and also sets Limit_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLimit`](#structFRHAPI__InventoryPageMeta_1a558e3950da9d3635114c48bac1aa2ac7)`(int32 && NewValue)` <a id="structFRHAPI__InventoryPageMeta_1a558e3950da9d3635114c48bac1aa2ac7"></a>

Sets the value of Limit_Optional and also sets Limit_IsSet to true using move semantics.

#### `public inline void `[`ClearLimit`](#structFRHAPI__InventoryPageMeta_1a2d163a9240ab964f999f5194a2ec6488)`()` <a id="structFRHAPI__InventoryPageMeta_1a2d163a9240ab964f999f5194a2ec6488"></a>

Clears the value of Limit_Optional and sets Limit_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Limit`](#structFRHAPI__InventoryPageMeta_1ac68975bc4df09a62999d28350fab0b60)`()` <a id="structFRHAPI__InventoryPageMeta_1ac68975bc4df09a62999d28350fab0b60"></a>

Returns the default value of Limit.

