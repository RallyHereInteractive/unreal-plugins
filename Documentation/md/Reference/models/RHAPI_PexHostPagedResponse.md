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
`public inline FORCEINLINE TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1abdbf279d63c02dd49bdafbb426dd5043)`()` | Gets the value of Results_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1af0fb111e9d170a9025a98ebc45169893)`() const` | Gets the value of Results_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a4a22bbc9223adf0ccc5d1ddc606d0540)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & DefaultValue) const` | Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a2294c5a34e4d348c207f7cdc211e2278)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & OutValue) const` | Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1a8461dad02e1858fc89affb004518b9ee)`()` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1a2bef2859b9063102cfbe20ca5d75a424)`() const` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a279800a01391e48fbd2404019d0de06c)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true.
`public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a6321dca9f2635a35728ec6955602eac5)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > && NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.
`public inline void `[`ClearResults`](#structFRHAPI__PexHostPagedResponse_1a76c5916ef578c2b08c688d6bc9bed783)`()` | Clears the value of Results_Optional and sets Results_IsSet to false.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1ac83cc4b2460bcadda51cd41d49614b08)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a99894b2fbc2116866c85ab43e998bd77)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1abbff3236607fbff9de29a30884376001)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a1ea7ab16117f43948fb18921e43a8d49)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1a89bf12cad73bd9a85d20a83fda2a5f33)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1adb8bf956cf5c5d1cd0989dffe73f1958)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PexHostPagedResponse_1ad33268eb79aec6545c699abe7b328838)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PexHostPagedResponse_1a5470c38a6c7e80368635b0f00dfbe5b4)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PexHostPagedResponse_1a5f55b2be0ba82badefa0e296a8946000)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__PexHostPagedResponse_1af0c645aff53bc498b5d1d70560876d9e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__PexHostPagedResponse_1a3cfa41bef80540dea23b0f68d650ab91)`() const` | Checks whether Cursor_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1aadb3aaed87a6a2ab3188024eacdaa955)`()` | Gets the value of Filters_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1ae7d965fe6507c1118946c851d8b1b743)`() const` | Gets the value of Filters_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1adb650e7429e8028a25ac4961def6dbc3)`(const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & DefaultValue) const` | Gets the value of Filters_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a089af1d9b5babb0d7141488c478c6612)`(`[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & OutValue) const` | Fills OutValue with the value of Filters_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1a6fbe44c1a3623dd1597b02f1d0f5ca9f)`()` | Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1a6d7cc6e9f83a9b5ad12ca57bef7c67c7)`() const` | Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFilters`](#structFRHAPI__PexHostPagedResponse_1a202811bba025c2850a324b90eced3fb9)`(const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & NewValue)` | Sets the value of Filters_Optional and also sets Filters_IsSet to true.
`public inline FORCEINLINE void `[`SetFilters`](#structFRHAPI__PexHostPagedResponse_1a4ea91ad33959bbd5f5dd69c15467b45e)`(`[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` && NewValue)` | Sets the value of Filters_Optional and also sets Filters_IsSet to true using move semantics.
`public inline void `[`ClearFilters`](#structFRHAPI__PexHostPagedResponse_1a09d50fb591af30445c1fbc418e76121e)`()` | Clears the value of Filters_Optional and sets Filters_IsSet to false.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1abdbf279d63c02dd49bdafbb426dd5043)`()` <a id="structFRHAPI__PexHostPagedResponse_1abdbf279d63c02dd49bdafbb426dd5043"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1af0fb111e9d170a9025a98ebc45169893)`() const` <a id="structFRHAPI__PexHostPagedResponse_1af0fb111e9d170a9025a98ebc45169893"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a4a22bbc9223adf0ccc5d1ddc606d0540)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & DefaultValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a4a22bbc9223adf0ccc5d1ddc606d0540"></a>

Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a2294c5a34e4d348c207f7cdc211e2278)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & OutValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a2294c5a34e4d348c207f7cdc211e2278"></a>

Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1a8461dad02e1858fc89affb004518b9ee)`()` <a id="structFRHAPI__PexHostPagedResponse_1a8461dad02e1858fc89affb004518b9ee"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1a2bef2859b9063102cfbe20ca5d75a424)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a2bef2859b9063102cfbe20ca5d75a424"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a279800a01391e48fbd2404019d0de06c)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a279800a01391e48fbd2404019d0de06c"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true.

#### `public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a6321dca9f2635a35728ec6955602eac5)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > && NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a6321dca9f2635a35728ec6955602eac5"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.

#### `public inline void `[`ClearResults`](#structFRHAPI__PexHostPagedResponse_1a76c5916ef578c2b08c688d6bc9bed783)`()` <a id="structFRHAPI__PexHostPagedResponse_1a76c5916ef578c2b08c688d6bc9bed783"></a>

Clears the value of Results_Optional and sets Results_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1ac83cc4b2460bcadda51cd41d49614b08)`()` <a id="structFRHAPI__PexHostPagedResponse_1ac83cc4b2460bcadda51cd41d49614b08"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a99894b2fbc2116866c85ab43e998bd77)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a99894b2fbc2116866c85ab43e998bd77"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1abbff3236607fbff9de29a30884376001)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostPagedResponse_1abbff3236607fbff9de29a30884376001"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a1ea7ab16117f43948fb18921e43a8d49)`(FString & OutValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a1ea7ab16117f43948fb18921e43a8d49"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1a89bf12cad73bd9a85d20a83fda2a5f33)`()` <a id="structFRHAPI__PexHostPagedResponse_1a89bf12cad73bd9a85d20a83fda2a5f33"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1adb8bf956cf5c5d1cd0989dffe73f1958)`() const` <a id="structFRHAPI__PexHostPagedResponse_1adb8bf956cf5c5d1cd0989dffe73f1958"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PexHostPagedResponse_1ad33268eb79aec6545c699abe7b328838)`(const FString & NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1ad33268eb79aec6545c699abe7b328838"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PexHostPagedResponse_1a5470c38a6c7e80368635b0f00dfbe5b4)`(FString && NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a5470c38a6c7e80368635b0f00dfbe5b4"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PexHostPagedResponse_1a5f55b2be0ba82badefa0e296a8946000)`()` <a id="structFRHAPI__PexHostPagedResponse_1a5f55b2be0ba82badefa0e296a8946000"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__PexHostPagedResponse_1af0c645aff53bc498b5d1d70560876d9e)`()` <a id="structFRHAPI__PexHostPagedResponse_1af0c645aff53bc498b5d1d70560876d9e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__PexHostPagedResponse_1a3cfa41bef80540dea23b0f68d650ab91)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a3cfa41bef80540dea23b0f68d650ab91"></a>

Checks whether Cursor_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1aadb3aaed87a6a2ab3188024eacdaa955)`()` <a id="structFRHAPI__PexHostPagedResponse_1aadb3aaed87a6a2ab3188024eacdaa955"></a>

Gets the value of Filters_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1ae7d965fe6507c1118946c851d8b1b743)`() const` <a id="structFRHAPI__PexHostPagedResponse_1ae7d965fe6507c1118946c851d8b1b743"></a>

Gets the value of Filters_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1adb650e7429e8028a25ac4961def6dbc3)`(const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & DefaultValue) const` <a id="structFRHAPI__PexHostPagedResponse_1adb650e7429e8028a25ac4961def6dbc3"></a>

Gets the value of Filters_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a089af1d9b5babb0d7141488c478c6612)`(`[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & OutValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a089af1d9b5babb0d7141488c478c6612"></a>

Fills OutValue with the value of Filters_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1a6fbe44c1a3623dd1597b02f1d0f5ca9f)`()` <a id="structFRHAPI__PexHostPagedResponse_1a6fbe44c1a3623dd1597b02f1d0f5ca9f"></a>

Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1a6d7cc6e9f83a9b5ad12ca57bef7c67c7)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a6d7cc6e9f83a9b5ad12ca57bef7c67c7"></a>

Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFilters`](#structFRHAPI__PexHostPagedResponse_1a202811bba025c2850a324b90eced3fb9)`(const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a202811bba025c2850a324b90eced3fb9"></a>

Sets the value of Filters_Optional and also sets Filters_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFilters`](#structFRHAPI__PexHostPagedResponse_1a4ea91ad33959bbd5f5dd69c15467b45e)`(`[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` && NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a4ea91ad33959bbd5f5dd69c15467b45e"></a>

Sets the value of Filters_Optional and also sets Filters_IsSet to true using move semantics.

#### `public inline void `[`ClearFilters`](#structFRHAPI__PexHostPagedResponse_1a09d50fb591af30445c1fbc418e76121e)`()` <a id="structFRHAPI__PexHostPagedResponse_1a09d50fb591af30445c1fbc418e76121e"></a>

Clears the value of Filters_Optional and sets Filters_IsSet to false.

