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
`public inline FORCEINLINE TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1a3709bf1228cd35a1aec00c678485db19)`()` | Gets the value of Results_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1a9389aaf441183092fefcfb0d1438b57d)`() const` | Gets the value of Results_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1ad9356bc8f0b27d4aee22b85783fa9cae)`(const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & DefaultValue) const` | Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetResults`](#structFRHAPI__SearchGuideResponse_1a2548d6549321478bdab5c296ad6a8fd7)`(TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & OutValue) const` | Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > * `[`GetResultsOrNull`](#structFRHAPI__SearchGuideResponse_1a5721b02d71c9df6794c8d611f93e38d2)`()` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > * `[`GetResultsOrNull`](#structFRHAPI__SearchGuideResponse_1a5cdff8f322cbe6b2e346135cc88ba449)`() const` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__SearchGuideResponse_1a4fd453e6ea256c341bdb2f4bfaa0eb1d)`(const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true.
`public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__SearchGuideResponse_1a085eda4855d536a825f31c217dc2aaea)`(TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > && NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.
`public inline void `[`ClearResults`](#structFRHAPI__SearchGuideResponse_1ac39e9cffea00c15896e3f76e3050e1b9)`()` | Clears the value of Results_Optional and sets Results_IsSet to false.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1aa84e5305a50935a03f82d3f7c8531cf7)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1af1a60e2f83059c0b5b4b8c2afacc7302)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1acdea5412e31acbd0d01d74a2c0cba2c3)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1ae8730ee11e845ffea6a7b213bffc9898)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__SearchGuideResponse_1a294f2e6a443940006fc4d73d76c41a4e)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__SearchGuideResponse_1a8198de4094c057c70e78e9d8855d77e5)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__SearchGuideResponse_1a5c3459f8dfe4bd3a92544f5eb83594b3)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__SearchGuideResponse_1a7b2b16a8d9018df4e16f5dc3502970ac)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__SearchGuideResponse_1a153e4c50db618b9ba279f3ee05023b88)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__SearchGuideResponse_1ae064b814012504cbdca78e053714071b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__SearchGuideResponse_1a748375dd86e6738944416d66502c731a)`() const` | Checks whether Cursor_Optional is set to null.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1a3709bf1228cd35a1aec00c678485db19)`()` <a id="structFRHAPI__SearchGuideResponse_1a3709bf1228cd35a1aec00c678485db19"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1a9389aaf441183092fefcfb0d1438b57d)`() const` <a id="structFRHAPI__SearchGuideResponse_1a9389aaf441183092fefcfb0d1438b57d"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & `[`GetResults`](#structFRHAPI__SearchGuideResponse_1ad9356bc8f0b27d4aee22b85783fa9cae)`(const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & DefaultValue) const` <a id="structFRHAPI__SearchGuideResponse_1ad9356bc8f0b27d4aee22b85783fa9cae"></a>

Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetResults`](#structFRHAPI__SearchGuideResponse_1a2548d6549321478bdab5c296ad6a8fd7)`(TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & OutValue) const` <a id="structFRHAPI__SearchGuideResponse_1a2548d6549321478bdab5c296ad6a8fd7"></a>

Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > * `[`GetResultsOrNull`](#structFRHAPI__SearchGuideResponse_1a5721b02d71c9df6794c8d611f93e38d2)`()` <a id="structFRHAPI__SearchGuideResponse_1a5721b02d71c9df6794c8d611f93e38d2"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > * `[`GetResultsOrNull`](#structFRHAPI__SearchGuideResponse_1a5cdff8f322cbe6b2e346135cc88ba449)`() const` <a id="structFRHAPI__SearchGuideResponse_1a5cdff8f322cbe6b2e346135cc88ba449"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__SearchGuideResponse_1a4fd453e6ea256c341bdb2f4bfaa0eb1d)`(const TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > & NewValue)` <a id="structFRHAPI__SearchGuideResponse_1a4fd453e6ea256c341bdb2f4bfaa0eb1d"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true.

#### `public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__SearchGuideResponse_1a085eda4855d536a825f31c217dc2aaea)`(TArray< `[`FRHAPI_GuideSearchResult`](RHAPI_GuideSearchResult.md#structFRHAPI__GuideSearchResult)` > && NewValue)` <a id="structFRHAPI__SearchGuideResponse_1a085eda4855d536a825f31c217dc2aaea"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.

#### `public inline void `[`ClearResults`](#structFRHAPI__SearchGuideResponse_1ac39e9cffea00c15896e3f76e3050e1b9)`()` <a id="structFRHAPI__SearchGuideResponse_1ac39e9cffea00c15896e3f76e3050e1b9"></a>

Clears the value of Results_Optional and sets Results_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1aa84e5305a50935a03f82d3f7c8531cf7)`()` <a id="structFRHAPI__SearchGuideResponse_1aa84e5305a50935a03f82d3f7c8531cf7"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1af1a60e2f83059c0b5b4b8c2afacc7302)`() const` <a id="structFRHAPI__SearchGuideResponse_1af1a60e2f83059c0b5b4b8c2afacc7302"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1acdea5412e31acbd0d01d74a2c0cba2c3)`(const FString & DefaultValue) const` <a id="structFRHAPI__SearchGuideResponse_1acdea5412e31acbd0d01d74a2c0cba2c3"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__SearchGuideResponse_1ae8730ee11e845ffea6a7b213bffc9898)`(FString & OutValue) const` <a id="structFRHAPI__SearchGuideResponse_1ae8730ee11e845ffea6a7b213bffc9898"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__SearchGuideResponse_1a294f2e6a443940006fc4d73d76c41a4e)`()` <a id="structFRHAPI__SearchGuideResponse_1a294f2e6a443940006fc4d73d76c41a4e"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__SearchGuideResponse_1a8198de4094c057c70e78e9d8855d77e5)`() const` <a id="structFRHAPI__SearchGuideResponse_1a8198de4094c057c70e78e9d8855d77e5"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__SearchGuideResponse_1a5c3459f8dfe4bd3a92544f5eb83594b3)`(const FString & NewValue)` <a id="structFRHAPI__SearchGuideResponse_1a5c3459f8dfe4bd3a92544f5eb83594b3"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__SearchGuideResponse_1a7b2b16a8d9018df4e16f5dc3502970ac)`(FString && NewValue)` <a id="structFRHAPI__SearchGuideResponse_1a7b2b16a8d9018df4e16f5dc3502970ac"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__SearchGuideResponse_1a153e4c50db618b9ba279f3ee05023b88)`()` <a id="structFRHAPI__SearchGuideResponse_1a153e4c50db618b9ba279f3ee05023b88"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__SearchGuideResponse_1ae064b814012504cbdca78e053714071b)`()` <a id="structFRHAPI__SearchGuideResponse_1ae064b814012504cbdca78e053714071b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__SearchGuideResponse_1a748375dd86e6738944416d66502c731a)`() const` <a id="structFRHAPI__SearchGuideResponse_1a748375dd86e6738944416d66502c731a"></a>

Checks whether Cursor_Optional is set to null.

