---
title: RHAPI_SearchGuideResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SearchGuideResponse`](#structFRHAPI__SearchGuideResponse) | 

## struct `FRHAPI_SearchGuideResponse` <a id="structFRHAPI__SearchGuideResponse"></a>

```
struct FRHAPI_SearchGuideResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > `[`Results_Optional`](#structFRHAPI__SearchGuideResponse_1a68b9aed023627f189c04fc6a321ebe0b) | 
`public bool `[`Results_IsSet`](#structFRHAPI__SearchGuideResponse_1ad75670d40a312f89b3272bfc3078ff97) | true if Results_Optional has been set to a value
`public FString `[`Cursor_Optional`](#structFRHAPI__SearchGuideResponse_1a7a5edfb0873f1297cd59ab79cc6e1baf) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__SearchGuideResponse_1ad93a3cf571e1a18a45026d0dd6347c39) | true if Cursor_Optional has been set to a value
`public bool `[`Cursor_IsNull`](#structFRHAPI__SearchGuideResponse_1a59dd3bf8dde6e86e8c0c4a89b4b86e79) | true if Cursor_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__SearchGuideResponse_1a38eff68232065c5a6b80f64660ca2540)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SearchGuideResponse_1a506c00bbd4d952b38cc34e0632cbd42d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1a688c738b1b939f05ca3df7237c12ca6f)`()` | Gets the value of Results_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1aa1cfa27d52b297dd05a50c2abfa5a165)`() const` | Gets the value of Results_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1aad34a78c65a71a2f7aa47748656bea11)`(const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & DefaultValue) const` | Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetResults`](#structFRHAPI__SearchGuideResponse_1aa5b3b2829d1cae77f75173337263ad6a)`(TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & OutValue) const` | Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > * `[`GetResultsOrNull`](#structFRHAPI__SearchGuideResponse_1a1ada8bdce4548dcb343c313c80e224ee)`()` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > * `[`GetResultsOrNull`](#structFRHAPI__SearchGuideResponse_1a58020e11e7246125f628e1b5c4b66517)`() const` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetResults`](#structFRHAPI__SearchGuideResponse_1a2ec68155cc46db433d6f26f75d5d5bc2)`(const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true.
`public inline void `[`SetResults`](#structFRHAPI__SearchGuideResponse_1ac26cb4a6bf2770920243d42b98253d15)`(TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > && NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.
`public inline void `[`ClearResults`](#structFRHAPI__SearchGuideResponse_1ac39e9cffea00c15896e3f76e3050e1b9)`()` | Clears the value of Results_Optional and sets Results_IsSet to false.
`public inline bool `[`IsResultsSet`](#structFRHAPI__SearchGuideResponse_1a417925dc0783e2b4b480323215c74772)`() const` | Checks whether Results_Optional has been set.
`public inline FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1a6afd4947259ccb3d9ac2bae69a552049)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1a7604844c3de7df07740352657ffb1028)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1a44b359b8d7f86855992ed3fd778a14f8)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1a1a5129039bc3dfc29d0f57e8b5007ab3)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__SearchGuideResponse_1a939dafb72fb64ef8634e9b875d0902e4)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__SearchGuideResponse_1af4c153662cc68778999775baa5d6b04c)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__SearchGuideResponse_1a3a9c80051da8ffb0076bc549f4c206ea)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__SearchGuideResponse_1a6819851e692204d0d056e5342f9952ad)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__SearchGuideResponse_1a153e4c50db618b9ba279f3ee05023b88)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline bool `[`IsCursorSet`](#structFRHAPI__SearchGuideResponse_1a7daf438c6d7cf1b2f67fd55d41a4ad9a)`() const` | Checks whether Cursor_Optional has been set.
`public inline void `[`SetCursorToNull`](#structFRHAPI__SearchGuideResponse_1ad640d1787378415df75a50c16abc0888)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCursorNull`](#structFRHAPI__SearchGuideResponse_1acdb390596d6bd9bda640e23fcdf65ef1)`() const` | Checks whether Cursor_Optional is set to null.

### Members

#### `public TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > `[`Results_Optional`](#structFRHAPI__SearchGuideResponse_1a68b9aed023627f189c04fc6a321ebe0b) <a id="structFRHAPI__SearchGuideResponse_1a68b9aed023627f189c04fc6a321ebe0b"></a>

#### `public bool `[`Results_IsSet`](#structFRHAPI__SearchGuideResponse_1ad75670d40a312f89b3272bfc3078ff97) <a id="structFRHAPI__SearchGuideResponse_1ad75670d40a312f89b3272bfc3078ff97"></a>

true if Results_Optional has been set to a value

#### `public FString `[`Cursor_Optional`](#structFRHAPI__SearchGuideResponse_1a7a5edfb0873f1297cd59ab79cc6e1baf) <a id="structFRHAPI__SearchGuideResponse_1a7a5edfb0873f1297cd59ab79cc6e1baf"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__SearchGuideResponse_1ad93a3cf571e1a18a45026d0dd6347c39) <a id="structFRHAPI__SearchGuideResponse_1ad93a3cf571e1a18a45026d0dd6347c39"></a>

true if Cursor_Optional has been set to a value

#### `public bool `[`Cursor_IsNull`](#structFRHAPI__SearchGuideResponse_1a59dd3bf8dde6e86e8c0c4a89b4b86e79) <a id="structFRHAPI__SearchGuideResponse_1a59dd3bf8dde6e86e8c0c4a89b4b86e79"></a>

true if Cursor_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__SearchGuideResponse_1a38eff68232065c5a6b80f64660ca2540)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SearchGuideResponse_1a38eff68232065c5a6b80f64660ca2540"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SearchGuideResponse_1a506c00bbd4d952b38cc34e0632cbd42d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SearchGuideResponse_1a506c00bbd4d952b38cc34e0632cbd42d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1a688c738b1b939f05ca3df7237c12ca6f)`()` <a id="structFRHAPI__SearchGuideResponse_1a688c738b1b939f05ca3df7237c12ca6f"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1aa1cfa27d52b297dd05a50c2abfa5a165)`() const` <a id="structFRHAPI__SearchGuideResponse_1aa1cfa27d52b297dd05a50c2abfa5a165"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1aad34a78c65a71a2f7aa47748656bea11)`(const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & DefaultValue) const` <a id="structFRHAPI__SearchGuideResponse_1aad34a78c65a71a2f7aa47748656bea11"></a>

Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetResults`](#structFRHAPI__SearchGuideResponse_1aa5b3b2829d1cae77f75173337263ad6a)`(TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & OutValue) const` <a id="structFRHAPI__SearchGuideResponse_1aa5b3b2829d1cae77f75173337263ad6a"></a>

Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > * `[`GetResultsOrNull`](#structFRHAPI__SearchGuideResponse_1a1ada8bdce4548dcb343c313c80e224ee)`()` <a id="structFRHAPI__SearchGuideResponse_1a1ada8bdce4548dcb343c313c80e224ee"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > * `[`GetResultsOrNull`](#structFRHAPI__SearchGuideResponse_1a58020e11e7246125f628e1b5c4b66517)`() const` <a id="structFRHAPI__SearchGuideResponse_1a58020e11e7246125f628e1b5c4b66517"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetResults`](#structFRHAPI__SearchGuideResponse_1a2ec68155cc46db433d6f26f75d5d5bc2)`(const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & NewValue)` <a id="structFRHAPI__SearchGuideResponse_1a2ec68155cc46db433d6f26f75d5d5bc2"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true.

#### `public inline void `[`SetResults`](#structFRHAPI__SearchGuideResponse_1ac26cb4a6bf2770920243d42b98253d15)`(TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > && NewValue)` <a id="structFRHAPI__SearchGuideResponse_1ac26cb4a6bf2770920243d42b98253d15"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.

#### `public inline void `[`ClearResults`](#structFRHAPI__SearchGuideResponse_1ac39e9cffea00c15896e3f76e3050e1b9)`()` <a id="structFRHAPI__SearchGuideResponse_1ac39e9cffea00c15896e3f76e3050e1b9"></a>

Clears the value of Results_Optional and sets Results_IsSet to false.

#### `public inline bool `[`IsResultsSet`](#structFRHAPI__SearchGuideResponse_1a417925dc0783e2b4b480323215c74772)`() const` <a id="structFRHAPI__SearchGuideResponse_1a417925dc0783e2b4b480323215c74772"></a>

Checks whether Results_Optional has been set.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1a6afd4947259ccb3d9ac2bae69a552049)`()` <a id="structFRHAPI__SearchGuideResponse_1a6afd4947259ccb3d9ac2bae69a552049"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1a7604844c3de7df07740352657ffb1028)`() const` <a id="structFRHAPI__SearchGuideResponse_1a7604844c3de7df07740352657ffb1028"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1a44b359b8d7f86855992ed3fd778a14f8)`(const FString & DefaultValue) const` <a id="structFRHAPI__SearchGuideResponse_1a44b359b8d7f86855992ed3fd778a14f8"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1a1a5129039bc3dfc29d0f57e8b5007ab3)`(FString & OutValue) const` <a id="structFRHAPI__SearchGuideResponse_1a1a5129039bc3dfc29d0f57e8b5007ab3"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__SearchGuideResponse_1a939dafb72fb64ef8634e9b875d0902e4)`()` <a id="structFRHAPI__SearchGuideResponse_1a939dafb72fb64ef8634e9b875d0902e4"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__SearchGuideResponse_1af4c153662cc68778999775baa5d6b04c)`() const` <a id="structFRHAPI__SearchGuideResponse_1af4c153662cc68778999775baa5d6b04c"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__SearchGuideResponse_1a3a9c80051da8ffb0076bc549f4c206ea)`(const FString & NewValue)` <a id="structFRHAPI__SearchGuideResponse_1a3a9c80051da8ffb0076bc549f4c206ea"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`SetCursor`](#structFRHAPI__SearchGuideResponse_1a6819851e692204d0d056e5342f9952ad)`(FString && NewValue)` <a id="structFRHAPI__SearchGuideResponse_1a6819851e692204d0d056e5342f9952ad"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__SearchGuideResponse_1a153e4c50db618b9ba279f3ee05023b88)`()` <a id="structFRHAPI__SearchGuideResponse_1a153e4c50db618b9ba279f3ee05023b88"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline bool `[`IsCursorSet`](#structFRHAPI__SearchGuideResponse_1a7daf438c6d7cf1b2f67fd55d41a4ad9a)`() const` <a id="structFRHAPI__SearchGuideResponse_1a7daf438c6d7cf1b2f67fd55d41a4ad9a"></a>

Checks whether Cursor_Optional has been set.

#### `public inline void `[`SetCursorToNull`](#structFRHAPI__SearchGuideResponse_1ad640d1787378415df75a50c16abc0888)`()` <a id="structFRHAPI__SearchGuideResponse_1ad640d1787378415df75a50c16abc0888"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCursorNull`](#structFRHAPI__SearchGuideResponse_1acdb390596d6bd9bda640e23fcdf65ef1)`() const` <a id="structFRHAPI__SearchGuideResponse_1acdb390596d6bd9bda640e23fcdf65ef1"></a>

Checks whether Cursor_Optional is set to null.

