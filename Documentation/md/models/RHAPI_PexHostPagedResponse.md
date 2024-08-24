# group `RHAPI_PexHostPagedResponse` <a id="group__RHAPI__PexHostPagedResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PexHostPagedResponse`](#structFRHAPI__PexHostPagedResponse) | 

---
title: FRHAPI_PexHostPagedResponse
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__PexHostPagedResponse_1a43121b6525f4015cd6fbd9ef55b5229d)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a751e603f1b276e96bf822be4b03e10c8)`()` | Gets the value of Results_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a725cce6be91bda6d61adcaea2cf292c2)`() const` | Gets the value of Results_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1ab15dea866a35fdb642fb2f0d76f86fd3)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & DefaultValue) const` | Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a8d4d900a9e55b60dac9c8f23c9b53ea9)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & OutValue) const` | Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1afd8fd84e93e07fccde2de24a53b0fcfe)`()` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1a11b97d17c3786ffa13885fd87a52c3c8)`() const` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a9d7fe7a2f5802b86f39ab6362c721771)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true.
`public inline void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a7ea7dc79c2bf68ce65d137f46056d2dd)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > && NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.
`public inline void `[`ClearResults`](#structFRHAPI__PexHostPagedResponse_1a76c5916ef578c2b08c688d6bc9bed783)`()` | Clears the value of Results_Optional and sets Results_IsSet to false.
`public inline bool `[`IsResultsSet`](#structFRHAPI__PexHostPagedResponse_1a3ca91a1bbea9d18d05f7ffda68a94eb2)`() const` | Checks whether Results_Optional has been set.
`public inline FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a317fedb67a1e49150764e4b4e1fa3260)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1aead3714b39282d12a96ca4862a719569)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1ad023c53e13cd071bfa255d57bc6d9b80)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a64f425ccc919d89d7efdc9744eddb74c)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1abbc7e85ca55f99e090ff2d9a98636bad)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1a98a5a1d313db932cefeeed4766b05f4c)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__PexHostPagedResponse_1a35493c851b4af57d70dadacdbdbd9d59)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__PexHostPagedResponse_1a62a026175027611449bbba2345028e13)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PexHostPagedResponse_1a5f55b2be0ba82badefa0e296a8946000)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline bool `[`IsCursorSet`](#structFRHAPI__PexHostPagedResponse_1ad69aded73753981af37100cccf5a094e)`() const` | Checks whether Cursor_Optional has been set.
`public inline void `[`SetCursorToNull`](#structFRHAPI__PexHostPagedResponse_1a76ab1bafcfefa81ddb2566d885831d5c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCursorNull`](#structFRHAPI__PexHostPagedResponse_1abcda3cab0fd0b6791cc0fa3803f96e85)`() const` | Checks whether Cursor_Optional is set to null.
`public inline `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1ac8b75e8ea8380d84f41535ee70e643c1)`()` | Gets the value of Filters_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a4b91255a8bdebc1b1bff04adffd6a2b3)`() const` | Gets the value of Filters_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a082a569b464c079efe252183c4b5cefb)`(const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & DefaultValue) const` | Gets the value of Filters_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a40805b04765878b416d1b04d47dd9cc0)`(`[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & OutValue) const` | Fills OutValue with the value of Filters_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1ac61870ffabf2af5b286b0bc88d403524)`()` | Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1a798096cf05049cdde477b1aec184a83b)`() const` | Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PexHostPagedResponse_1a43121b6525f4015cd6fbd9ef55b5229d)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PexHostPagedResponse_1a43121b6525f4015cd6fbd9ef55b5229d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a751e603f1b276e96bf822be4b03e10c8)`()` <a id="structFRHAPI__PexHostPagedResponse_1a751e603f1b276e96bf822be4b03e10c8"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a725cce6be91bda6d61adcaea2cf292c2)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a725cce6be91bda6d61adcaea2cf292c2"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1ab15dea866a35fdb642fb2f0d76f86fd3)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & DefaultValue) const` <a id="structFRHAPI__PexHostPagedResponse_1ab15dea866a35fdb642fb2f0d76f86fd3"></a>

Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetResults`](#structFRHAPI__PexHostPagedResponse_1a8d4d900a9e55b60dac9c8f23c9b53ea9)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & OutValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a8d4d900a9e55b60dac9c8f23c9b53ea9"></a>

Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1afd8fd84e93e07fccde2de24a53b0fcfe)`()` <a id="structFRHAPI__PexHostPagedResponse_1afd8fd84e93e07fccde2de24a53b0fcfe"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexHostPagedResponse_1a11b97d17c3786ffa13885fd87a52c3c8)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a11b97d17c3786ffa13885fd87a52c3c8"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a9d7fe7a2f5802b86f39ab6362c721771)`(const TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > & NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a9d7fe7a2f5802b86f39ab6362c721771"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true.

#### `public inline void `[`SetResults`](#structFRHAPI__PexHostPagedResponse_1a7ea7dc79c2bf68ce65d137f46056d2dd)`(TArray< `[`FRHAPI_PexHostResponse`](RHAPI_PexHostResponse.md#structFRHAPI__PexHostResponse)` > && NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a7ea7dc79c2bf68ce65d137f46056d2dd"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.

#### `public inline void `[`ClearResults`](#structFRHAPI__PexHostPagedResponse_1a76c5916ef578c2b08c688d6bc9bed783)`()` <a id="structFRHAPI__PexHostPagedResponse_1a76c5916ef578c2b08c688d6bc9bed783"></a>

Clears the value of Results_Optional and sets Results_IsSet to false.

#### `public inline bool `[`IsResultsSet`](#structFRHAPI__PexHostPagedResponse_1a3ca91a1bbea9d18d05f7ffda68a94eb2)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a3ca91a1bbea9d18d05f7ffda68a94eb2"></a>

Checks whether Results_Optional has been set.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a317fedb67a1e49150764e4b4e1fa3260)`()` <a id="structFRHAPI__PexHostPagedResponse_1a317fedb67a1e49150764e4b4e1fa3260"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1aead3714b39282d12a96ca4862a719569)`() const` <a id="structFRHAPI__PexHostPagedResponse_1aead3714b39282d12a96ca4862a719569"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1ad023c53e13cd071bfa255d57bc6d9b80)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostPagedResponse_1ad023c53e13cd071bfa255d57bc6d9b80"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__PexHostPagedResponse_1a64f425ccc919d89d7efdc9744eddb74c)`(FString & OutValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a64f425ccc919d89d7efdc9744eddb74c"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1abbc7e85ca55f99e090ff2d9a98636bad)`()` <a id="structFRHAPI__PexHostPagedResponse_1abbc7e85ca55f99e090ff2d9a98636bad"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PexHostPagedResponse_1a98a5a1d313db932cefeeed4766b05f4c)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a98a5a1d313db932cefeeed4766b05f4c"></a>

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

#### `public inline `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1ac8b75e8ea8380d84f41535ee70e643c1)`()` <a id="structFRHAPI__PexHostPagedResponse_1ac8b75e8ea8380d84f41535ee70e643c1"></a>

Gets the value of Filters_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a4b91255a8bdebc1b1bff04adffd6a2b3)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a4b91255a8bdebc1b1bff04adffd6a2b3"></a>

Gets the value of Filters_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a082a569b464c079efe252183c4b5cefb)`(const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & DefaultValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a082a569b464c079efe252183c4b5cefb"></a>

Gets the value of Filters_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFilters`](#structFRHAPI__PexHostPagedResponse_1a40805b04765878b416d1b04d47dd9cc0)`(`[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & OutValue) const` <a id="structFRHAPI__PexHostPagedResponse_1a40805b04765878b416d1b04d47dd9cc0"></a>

Fills OutValue with the value of Filters_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1ac61870ffabf2af5b286b0bc88d403524)`()` <a id="structFRHAPI__PexHostPagedResponse_1ac61870ffabf2af5b286b0bc88d403524"></a>

Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexHostPagedResponse_1a798096cf05049cdde477b1aec184a83b)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a798096cf05049cdde477b1aec184a83b"></a>

Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFilters`](#structFRHAPI__PexHostPagedResponse_1aca97f972883913e14a1cc4f3e3b9af6a)`(const `[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` & NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1aca97f972883913e14a1cc4f3e3b9af6a"></a>

Sets the value of Filters_Optional and also sets Filters_IsSet to true.

#### `public inline void `[`SetFilters`](#structFRHAPI__PexHostPagedResponse_1a75559ba4b39459fe673d2d565ed0c888)`(`[`FRHAPI_PexHostQueryParams`](RHAPI_PexHostQueryParams.md#structFRHAPI__PexHostQueryParams)` && NewValue)` <a id="structFRHAPI__PexHostPagedResponse_1a75559ba4b39459fe673d2d565ed0c888"></a>

Sets the value of Filters_Optional and also sets Filters_IsSet to true using move semantics.

#### `public inline void `[`ClearFilters`](#structFRHAPI__PexHostPagedResponse_1a09d50fb591af30445c1fbc418e76121e)`()` <a id="structFRHAPI__PexHostPagedResponse_1a09d50fb591af30445c1fbc418e76121e"></a>

Clears the value of Filters_Optional and sets Filters_IsSet to false.

#### `public inline bool `[`IsFiltersSet`](#structFRHAPI__PexHostPagedResponse_1a9bb73828c9bb95465464bb0f0f405134)`() const` <a id="structFRHAPI__PexHostPagedResponse_1a9bb73828c9bb95465464bb0f0f405134"></a>

Checks whether Filters_Optional has been set.

