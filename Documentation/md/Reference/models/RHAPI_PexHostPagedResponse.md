---
title: RHAPI_PexHostPagedResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PexHostPagedResponse`](#structFRHAPI__PexHostPagedResponse) | 

## struct `FRHAPI_PexHostPagedResponse` <a id="structFRHAPI__PexHostPagedResponse"></a>

```
struct FRHAPI_PexHostPagedResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > `[`Results_Optional`](#structFRHAPI__PexHostPagedResponse_1ab8b116c61d2962b0f6b9d7c19aa13c0c) | List of PEX reports for this match.
`public bool `[`Results_IsSet`](#structFRHAPI__PexHostPagedResponse_1afd9388f8dfac042ca9b696beabd6df8e) | true if Results_Optional has been set to a value
`public FString `[`Cursor_Optional`](#structFRHAPI__PexHostPagedResponse_1a2bfb3d0424b68440e87db5b7254c8832) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__PexHostPagedResponse_1a6d55030fec35fb06d04b9836692ede0d) | true if Cursor_Optional has been set to a value
`public bool `[`Cursor_IsNull`](#structFRHAPI__PexHostPagedResponse_1a149272d4745a497b52f7308a2c778d39) | true if Cursor_Optional has been explicitly set to null
`public `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` `[`Filters_Optional`](#structFRHAPI__PexHostPagedResponse_1a7793a9bbb547ca1a1ccda958a8a80435) | 
`public bool `[`Filters_IsSet`](#structFRHAPI__PexHostPagedResponse_1a08d5cf657800c4f21477c14778fa5a8c) | true if Filters_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PexHostPagedResponse_1acc45180d9708acd55e86215b0da8d5c6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PexHostPagedResponse_1abcf85baa4de673bc08f20a39cc9ad1e2)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a43b951732171e1248b9c7371e65a2d99)`()` | Gets the value of Results_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a048b13c0af4659c041a50da38e2ef737)`() const` | Gets the value of Results_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a5f7e55724c02bf7b0f1308ebaf5af844)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & DefaultValue) const` | Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a8d4d900a9e55b60dac9c8f23c9b53ea9)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & OutValue) const` | Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1aa6f2411b26b8366c171812bf43ab631c)`()` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1af7aff27b9e21a78ef3936d36f467033a)`() const` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a9d7fe7a2f5802b86f39ab6362c721771)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true.
`public inline void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a7ea7dc79c2bf68ce65d137f46056d2dd)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > && NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.
`public inline void `[`ClearResults`](#structFRHAPI__PexHostPagedResponse_1a76c5916ef578c2b08c688d6bc9bed783)`()` | Clears the value of Results_Optional and sets Results_IsSet to false.
`public inline bool `[`IsResultsSet`](#structFRHAPI__PexHostPagedResponse_1a3ca91a1bbea9d18d05f7ffda68a94eb2)`() const` | Checks whether Results_Optional has been set.
`public inline FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1ab47c0c0787d1a13947a4ab612abea671)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1abf1d03b679138cc69cb53d6548b4e49a)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a0c2315fa2b1b00f5af7793495635a154)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a64f425ccc919d89d7efdc9744eddb74c)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1ade7fb8376a1b6bf9a1da8cfe37563de2)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1a465a4a12fdce1c8b5646a5140d582b63)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__PexHostPagedResponse_1a35493c851b4af57d70dadacdbdbd9d59)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__PexHostPagedResponse_1a62a026175027611449bbba2345028e13)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PexHostPagedResponse_1a5f55b2be0ba82badefa0e296a8946000)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline bool `[`IsCursorSet`](#structFRHAPI__PexHostPagedResponse_1ad69aded73753981af37100cccf5a094e)`() const` | Checks whether Cursor_Optional has been set.
`public inline void `[`SetCursorToNull`](#structFRHAPI__PexHostPagedResponse_1a76ab1bafcfefa81ddb2566d885831d5c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCursorNull`](#structFRHAPI__PexHostPagedResponse_1abcda3cab0fd0b6791cc0fa3803f96e85)`() const` | Checks whether Cursor_Optional is set to null.
`public inline `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1aa754016ff1458b5d4f9e0d94cdaf1d44)`()` | Gets the value of Filters_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a1147a44c4683aa7e10d4a0c8c6b197e2)`() const` | Gets the value of Filters_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a86cc4fe50e048c4be7b63647c1e756c3)`(const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & DefaultValue) const` | Gets the value of Filters_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a40805b04765878b416d1b04d47dd9cc0)`(`[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & OutValue) const` | Fills OutValue with the value of Filters_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1a515104749a6423873d6e9285c3e884e7)`()` | Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1ae50a0595f040f3dfc251ca9fb1e4794a)`() const` | Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFilters`](#structFRHAPI__PexHostPagedResponse_1aca97f972883913e14a1cc4f3e3b9af6a)`(const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & NewValue)` | Sets the value of Filters_Optional and also sets Filters_IsSet to true.
`public inline void `[`SetFilters`](#structFRHAPI__PexHostPagedResponse_1a75559ba4b39459fe673d2d565ed0c888)`(`[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` && NewValue)` | Sets the value of Filters_Optional and also sets Filters_IsSet to true using move semantics.
`public inline void `[`ClearFilters`](#structFRHAPI__PexHostPagedResponse_1a09d50fb591af30445c1fbc418e76121e)`()` | Clears the value of Filters_Optional and sets Filters_IsSet to false.
`public inline bool `[`IsFiltersSet`](#structFRHAPI__PexHostPagedResponse_1a9bb73828c9bb95465464bb0f0f405134)`() const` | Checks whether Filters_Optional has been set.

### Members

#### `public TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > `[`Results_Optional`](#structFRHAPI__PexHostPagedResponse_1ab8b116c61d2962b0f6b9d7c19aa13c0c) <a id="structFRHAPI__PexHostPagedResponse_1ab8b116c61d2962b0f6b9d7c19aa13c0c"></a>

List of PEX reports for this match.

#### `public bool `[`Results_IsSet`](#structFRHAPI__PexHostPagedResponse_1afd9388f8dfac042ca9b696beabd6df8e) <a id="structFRHAPI__PexHostPagedResponse_1afd9388f8dfac042ca9b696beabd6df8e"></a>

true if Results_Optional has been set to a value

#### `public FString `[`Cursor_Optional`](#structFRHAPI__PexHostPagedResponse_1a2bfb3d0424b68440e87db5b7254c8832) <a id="structFRHAPI__PexHostPagedResponse_1a2bfb3d0424b68440e87db5b7254c8832"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__PexHostPagedResponse_1a6d55030fec35fb06d04b9836692ede0d) <a id="structFRHAPI__PexHostPagedResponse_1a6d55030fec35fb06d04b9836692ede0d"></a>

true if Cursor_Optional has been set to a value

#### `public bool `[`Cursor_IsNull`](#structFRHAPI__PexHostPagedResponse_1a149272d4745a497b52f7308a2c778d39) <a id="structFRHAPI__PexHostPagedResponse_1a149272d4745a497b52f7308a2c778d39"></a>

true if Cursor_Optional has been explicitly set to null

#### `public `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` `[`Filters_Optional`](#structFRHAPI__PexHostPagedResponse_1a7793a9bbb547ca1a1ccda958a8a80435) <a id="structFRHAPI__PexHostPagedResponse_1a7793a9bbb547ca1a1ccda958a8a80435"></a>

#### `public bool `[`Filters_IsSet`](#structFRHAPI__PexHostPagedResponse_1a08d5cf657800c4f21477c14778fa5a8c) <a id="structFRHAPI__PexHostPagedResponse_1a08d5cf657800c4f21477c14778fa5a8c"></a>

true if Filters_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PexHostPagedResponse_1acc45180d9708acd55e86215b0da8d5c6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PexHostPagedResponse_1acc45180d9708acd55e86215b0da8d5c6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PexHostPagedResponse_1abcf85baa4de673bc08f20a39cc9ad1e2)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PexHostPagedResponse_1abcf85baa4de673bc08f20a39cc9ad1e2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a43b951732171e1248b9c7371e65a2d99)`()` <a id="structFRHAPI__PexHostPagedResponse_1a43b951732171e1248b9c7371e65a2d99"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a048b13c0af4659c041a50da38e2ef737)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a048b13c0af4659c041a50da38e2ef737"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a5f7e55724c02bf7b0f1308ebaf5af844)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & DefaultValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a5f7e55724c02bf7b0f1308ebaf5af844"></a>

Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a8d4d900a9e55b60dac9c8f23c9b53ea9)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & OutValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a8d4d900a9e55b60dac9c8f23c9b53ea9"></a>

Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1aa6f2411b26b8366c171812bf43ab631c)`()` <a id="structFRHAPI__PexHostPagedResponse_1aa6f2411b26b8366c171812bf43ab631c"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1af7aff27b9e21a78ef3936d36f467033a)`() const` <a id="structFRHAPI__PexHostPagedResponse_1af7aff27b9e21a78ef3936d36f467033a"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a9d7fe7a2f5802b86f39ab6362c721771)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a9d7fe7a2f5802b86f39ab6362c721771"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true.

#### `public inline void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a7ea7dc79c2bf68ce65d137f46056d2dd)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > && NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a7ea7dc79c2bf68ce65d137f46056d2dd"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.

#### `public inline void `[`ClearResults`](#structFRHAPI__PexHostPagedResponse_1a76c5916ef578c2b08c688d6bc9bed783)`()` <a id="structFRHAPI__PexHostPagedResponse_1a76c5916ef578c2b08c688d6bc9bed783"></a>

Clears the value of Results_Optional and sets Results_IsSet to false.

#### `public inline bool `[`IsResultsSet`](#structFRHAPI__PexHostPagedResponse_1a3ca91a1bbea9d18d05f7ffda68a94eb2)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a3ca91a1bbea9d18d05f7ffda68a94eb2"></a>

Checks whether Results_Optional has been set.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1ab47c0c0787d1a13947a4ab612abea671)`()` <a id="structFRHAPI__PexHostPagedResponse_1ab47c0c0787d1a13947a4ab612abea671"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1abf1d03b679138cc69cb53d6548b4e49a)`() const` <a id="structFRHAPI__PexHostPagedResponse_1abf1d03b679138cc69cb53d6548b4e49a"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a0c2315fa2b1b00f5af7793495635a154)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a0c2315fa2b1b00f5af7793495635a154"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a64f425ccc919d89d7efdc9744eddb74c)`(FString & OutValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a64f425ccc919d89d7efdc9744eddb74c"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1ade7fb8376a1b6bf9a1da8cfe37563de2)`()` <a id="structFRHAPI__PexHostPagedResponse_1ade7fb8376a1b6bf9a1da8cfe37563de2"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1a465a4a12fdce1c8b5646a5140d582b63)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a465a4a12fdce1c8b5646a5140d582b63"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__PexHostPagedResponse_1a35493c851b4af57d70dadacdbdbd9d59)`(const FString & NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a35493c851b4af57d70dadacdbdbd9d59"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`SetCursor`](#structFRHAPI__PexHostPagedResponse_1a62a026175027611449bbba2345028e13)`(FString && NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a62a026175027611449bbba2345028e13"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PexHostPagedResponse_1a5f55b2be0ba82badefa0e296a8946000)`()` <a id="structFRHAPI__PexHostPagedResponse_1a5f55b2be0ba82badefa0e296a8946000"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline bool `[`IsCursorSet`](#structFRHAPI__PexHostPagedResponse_1ad69aded73753981af37100cccf5a094e)`() const` <a id="structFRHAPI__PexHostPagedResponse_1ad69aded73753981af37100cccf5a094e"></a>

Checks whether Cursor_Optional has been set.

#### `public inline void `[`SetCursorToNull`](#structFRHAPI__PexHostPagedResponse_1a76ab1bafcfefa81ddb2566d885831d5c)`()` <a id="structFRHAPI__PexHostPagedResponse_1a76ab1bafcfefa81ddb2566d885831d5c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCursorNull`](#structFRHAPI__PexHostPagedResponse_1abcda3cab0fd0b6791cc0fa3803f96e85)`() const` <a id="structFRHAPI__PexHostPagedResponse_1abcda3cab0fd0b6791cc0fa3803f96e85"></a>

Checks whether Cursor_Optional is set to null.

#### `public inline `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1aa754016ff1458b5d4f9e0d94cdaf1d44)`()` <a id="structFRHAPI__PexHostPagedResponse_1aa754016ff1458b5d4f9e0d94cdaf1d44"></a>

Gets the value of Filters_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a1147a44c4683aa7e10d4a0c8c6b197e2)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a1147a44c4683aa7e10d4a0c8c6b197e2"></a>

Gets the value of Filters_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a86cc4fe50e048c4be7b63647c1e756c3)`(const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & DefaultValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a86cc4fe50e048c4be7b63647c1e756c3"></a>

Gets the value of Filters_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a40805b04765878b416d1b04d47dd9cc0)`(`[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & OutValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a40805b04765878b416d1b04d47dd9cc0"></a>

Fills OutValue with the value of Filters_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1a515104749a6423873d6e9285c3e884e7)`()` <a id="structFRHAPI__PexHostPagedResponse_1a515104749a6423873d6e9285c3e884e7"></a>

Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1ae50a0595f040f3dfc251ca9fb1e4794a)`() const` <a id="structFRHAPI__PexHostPagedResponse_1ae50a0595f040f3dfc251ca9fb1e4794a"></a>

Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFilters`](#structFRHAPI__PexHostPagedResponse_1aca97f972883913e14a1cc4f3e3b9af6a)`(const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1aca97f972883913e14a1cc4f3e3b9af6a"></a>

Sets the value of Filters_Optional and also sets Filters_IsSet to true.

#### `public inline void `[`SetFilters`](#structFRHAPI__PexHostPagedResponse_1a75559ba4b39459fe673d2d565ed0c888)`(`[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` && NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a75559ba4b39459fe673d2d565ed0c888"></a>

Sets the value of Filters_Optional and also sets Filters_IsSet to true using move semantics.

#### `public inline void `[`ClearFilters`](#structFRHAPI__PexHostPagedResponse_1a09d50fb591af30445c1fbc418e76121e)`()` <a id="structFRHAPI__PexHostPagedResponse_1a09d50fb591af30445c1fbc418e76121e"></a>

Clears the value of Filters_Optional and sets Filters_IsSet to false.

#### `public inline bool `[`IsFiltersSet`](#structFRHAPI__PexHostPagedResponse_1a9bb73828c9bb95465464bb0f0f405134)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a9bb73828c9bb95465464bb0f0f405134"></a>

Checks whether Filters_Optional has been set.

