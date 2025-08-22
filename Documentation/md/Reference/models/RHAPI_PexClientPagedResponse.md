---
title: RHAPI_PexClientPagedResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PexClientPagedResponse`](#structFRHAPI__PexClientPagedResponse) | 

## struct `FRHAPI_PexClientPagedResponse` <a id="structFRHAPI__PexClientPagedResponse"></a>

```
struct FRHAPI_PexClientPagedResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > `[`Results_Optional`](#structFRHAPI__PexClientPagedResponse_1adad47f8bed21a4ae239f87f17c6d995f) | List of PEX reports for this match.
`public bool `[`Results_IsSet`](#structFRHAPI__PexClientPagedResponse_1ad2860220052c79c8bd663d2552c5356a) | true if Results_Optional has been set to a value
`public FString `[`Cursor_Optional`](#structFRHAPI__PexClientPagedResponse_1ae98a62c93ed61bea927f23ed7b3267ac) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__PexClientPagedResponse_1a520b3c1c0b03311b5c74e09a5fdde2d9) | true if Cursor_Optional has been set to a value
`public bool `[`Cursor_IsNull`](#structFRHAPI__PexClientPagedResponse_1abb88fc05ab34683e4122f862682700b9) | true if Cursor_Optional has been explicitly set to null
`public `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` `[`Filters_Optional`](#structFRHAPI__PexClientPagedResponse_1a70a2f02deee5d82ec2a902eb9f9edcbd) | 
`public bool `[`Filters_IsSet`](#structFRHAPI__PexClientPagedResponse_1ab94b2e8681290b3a40ed40d6f201fc56) | true if Filters_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PexClientPagedResponse_1a241138d9dd5b7bb529760e66a1289729)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PexClientPagedResponse_1a2b8a81fecd20ba524569e367f3607989)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1ae344759ae4259a583ab11f6e3f6bfd12)`()` | Gets the value of Results_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1ae1315b2bfb6afbd1f2872c97ad5b88a5)`() const` | Gets the value of Results_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1a83a540fcf870422ba7ada3416171adbc)`(const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & DefaultValue) const` | Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1ac81d8dd99e3efd827c5e0971bfae1f1f)`(TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & OutValue) const` | Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexClientPagedResponse_1a41b5fd1fa83c9331a13eef6568151b10)`()` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexClientPagedResponse_1a0deaf8138f49ae608e6b8ce874fe134a)`() const` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__PexClientPagedResponse_1ade8a47a87e1824dee093f8228dd1b359)`(const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true.
`public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__PexClientPagedResponse_1a9575776040ddba834c6a6cac3775abdc)`(TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > && NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.
`public inline void `[`ClearResults`](#structFRHAPI__PexClientPagedResponse_1afef41ea10dc074cd8227daaf1679a28c)`()` | Clears the value of Results_Optional and sets Results_IsSet to false.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1abafc353267654a158ccbbb8ac97a0548)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1aa1deaf51240fe184b5bd3c1a4f4f2c78)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1a7a3eba75e93b2a9c7b84d39009e0202b)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1a89cce42ca29b93b3ebbccb3171147e25)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__PexClientPagedResponse_1a98e73874ddc265558ff4c9b81970f95a)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__PexClientPagedResponse_1a46553c99a060f4bbf7cc93eedcbbeb58)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PexClientPagedResponse_1aeb277396a014ef32bab98f85c5dce512)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PexClientPagedResponse_1aec810b725f45bdc2d81b0dbb9b51b382)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PexClientPagedResponse_1a8f801d75747c90bdea767648f86446d9)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__PexClientPagedResponse_1a931eb5eac6640c3c51cecc07a9bda5ee)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__PexClientPagedResponse_1aab830ccac9063f838ab27b3d850215d8)`() const` | Checks whether Cursor_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1a860bf24fddd138efef02db3be4caf33f)`()` | Gets the value of Filters_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1a914dbed50ba09d6a29e045895a7fc980)`() const` | Gets the value of Filters_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1a55c564fe1e6a8dcb3700b83da30bbc87)`(const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & DefaultValue) const` | Gets the value of Filters_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1ab76d1238b0ae250ed5380eabdd755860)`(`[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & OutValue) const` | Fills OutValue with the value of Filters_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexClientPagedResponse_1a68149d95a8b66eb6e15f26e283d6d49b)`()` | Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexClientPagedResponse_1a9a4408fe41059dc995e3c1055432feb6)`() const` | Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFilters`](#structFRHAPI__PexClientPagedResponse_1a15684243cc4415e96b8f3725118cd132)`(const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & NewValue)` | Sets the value of Filters_Optional and also sets Filters_IsSet to true.
`public inline FORCEINLINE void `[`SetFilters`](#structFRHAPI__PexClientPagedResponse_1a1f9a2dbdba0a985add4152a3029cf905)`(`[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` && NewValue)` | Sets the value of Filters_Optional and also sets Filters_IsSet to true using move semantics.
`public inline void `[`ClearFilters`](#structFRHAPI__PexClientPagedResponse_1a4b428256793bec82e14173ad92e0e483)`()` | Clears the value of Filters_Optional and sets Filters_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > `[`Results_Optional`](#structFRHAPI__PexClientPagedResponse_1adad47f8bed21a4ae239f87f17c6d995f) <a id="structFRHAPI__PexClientPagedResponse_1adad47f8bed21a4ae239f87f17c6d995f"></a>

List of PEX reports for this match.

#### `public bool `[`Results_IsSet`](#structFRHAPI__PexClientPagedResponse_1ad2860220052c79c8bd663d2552c5356a) <a id="structFRHAPI__PexClientPagedResponse_1ad2860220052c79c8bd663d2552c5356a"></a>

true if Results_Optional has been set to a value

#### `public FString `[`Cursor_Optional`](#structFRHAPI__PexClientPagedResponse_1ae98a62c93ed61bea927f23ed7b3267ac) <a id="structFRHAPI__PexClientPagedResponse_1ae98a62c93ed61bea927f23ed7b3267ac"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__PexClientPagedResponse_1a520b3c1c0b03311b5c74e09a5fdde2d9) <a id="structFRHAPI__PexClientPagedResponse_1a520b3c1c0b03311b5c74e09a5fdde2d9"></a>

true if Cursor_Optional has been set to a value

#### `public bool `[`Cursor_IsNull`](#structFRHAPI__PexClientPagedResponse_1abb88fc05ab34683e4122f862682700b9) <a id="structFRHAPI__PexClientPagedResponse_1abb88fc05ab34683e4122f862682700b9"></a>

true if Cursor_Optional has been explicitly set to null

#### `public `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` `[`Filters_Optional`](#structFRHAPI__PexClientPagedResponse_1a70a2f02deee5d82ec2a902eb9f9edcbd) <a id="structFRHAPI__PexClientPagedResponse_1a70a2f02deee5d82ec2a902eb9f9edcbd"></a>

#### `public bool `[`Filters_IsSet`](#structFRHAPI__PexClientPagedResponse_1ab94b2e8681290b3a40ed40d6f201fc56) <a id="structFRHAPI__PexClientPagedResponse_1ab94b2e8681290b3a40ed40d6f201fc56"></a>

true if Filters_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PexClientPagedResponse_1a241138d9dd5b7bb529760e66a1289729)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PexClientPagedResponse_1a241138d9dd5b7bb529760e66a1289729"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PexClientPagedResponse_1a2b8a81fecd20ba524569e367f3607989)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PexClientPagedResponse_1a2b8a81fecd20ba524569e367f3607989"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1ae344759ae4259a583ab11f6e3f6bfd12)`()` <a id="structFRHAPI__PexClientPagedResponse_1ae344759ae4259a583ab11f6e3f6bfd12"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1ae1315b2bfb6afbd1f2872c97ad5b88a5)`() const` <a id="structFRHAPI__PexClientPagedResponse_1ae1315b2bfb6afbd1f2872c97ad5b88a5"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1a83a540fcf870422ba7ada3416171adbc)`(const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & DefaultValue) const` <a id="structFRHAPI__PexClientPagedResponse_1a83a540fcf870422ba7ada3416171adbc"></a>

Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetResults`](#structFRHAPI__PexClientPagedResponse_1ac81d8dd99e3efd827c5e0971bfae1f1f)`(TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & OutValue) const` <a id="structFRHAPI__PexClientPagedResponse_1ac81d8dd99e3efd827c5e0971bfae1f1f"></a>

Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexClientPagedResponse_1a41b5fd1fa83c9331a13eef6568151b10)`()` <a id="structFRHAPI__PexClientPagedResponse_1a41b5fd1fa83c9331a13eef6568151b10"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > * `[`GetResultsOrNull`](#structFRHAPI__PexClientPagedResponse_1a0deaf8138f49ae608e6b8ce874fe134a)`() const` <a id="structFRHAPI__PexClientPagedResponse_1a0deaf8138f49ae608e6b8ce874fe134a"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__PexClientPagedResponse_1ade8a47a87e1824dee093f8228dd1b359)`(const TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > & NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1ade8a47a87e1824dee093f8228dd1b359"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true.

#### `public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__PexClientPagedResponse_1a9575776040ddba834c6a6cac3775abdc)`(TArray< `[`FRHAPI_PexClientResponse`](RHAPI_PexClientResponse.md#structFRHAPI__PexClientResponse)` > && NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1a9575776040ddba834c6a6cac3775abdc"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.

#### `public inline void `[`ClearResults`](#structFRHAPI__PexClientPagedResponse_1afef41ea10dc074cd8227daaf1679a28c)`()` <a id="structFRHAPI__PexClientPagedResponse_1afef41ea10dc074cd8227daaf1679a28c"></a>

Clears the value of Results_Optional and sets Results_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1abafc353267654a158ccbbb8ac97a0548)`()` <a id="structFRHAPI__PexClientPagedResponse_1abafc353267654a158ccbbb8ac97a0548"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1aa1deaf51240fe184b5bd3c1a4f4f2c78)`() const` <a id="structFRHAPI__PexClientPagedResponse_1aa1deaf51240fe184b5bd3c1a4f4f2c78"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1a7a3eba75e93b2a9c7b84d39009e0202b)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientPagedResponse_1a7a3eba75e93b2a9c7b84d39009e0202b"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__PexClientPagedResponse_1a89cce42ca29b93b3ebbccb3171147e25)`(FString & OutValue) const` <a id="structFRHAPI__PexClientPagedResponse_1a89cce42ca29b93b3ebbccb3171147e25"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__PexClientPagedResponse_1a98e73874ddc265558ff4c9b81970f95a)`()` <a id="structFRHAPI__PexClientPagedResponse_1a98e73874ddc265558ff4c9b81970f95a"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__PexClientPagedResponse_1a46553c99a060f4bbf7cc93eedcbbeb58)`() const` <a id="structFRHAPI__PexClientPagedResponse_1a46553c99a060f4bbf7cc93eedcbbeb58"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PexClientPagedResponse_1aeb277396a014ef32bab98f85c5dce512)`(const FString & NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1aeb277396a014ef32bab98f85c5dce512"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PexClientPagedResponse_1aec810b725f45bdc2d81b0dbb9b51b382)`(FString && NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1aec810b725f45bdc2d81b0dbb9b51b382"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PexClientPagedResponse_1a8f801d75747c90bdea767648f86446d9)`()` <a id="structFRHAPI__PexClientPagedResponse_1a8f801d75747c90bdea767648f86446d9"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__PexClientPagedResponse_1a931eb5eac6640c3c51cecc07a9bda5ee)`()` <a id="structFRHAPI__PexClientPagedResponse_1a931eb5eac6640c3c51cecc07a9bda5ee"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__PexClientPagedResponse_1aab830ccac9063f838ab27b3d850215d8)`() const` <a id="structFRHAPI__PexClientPagedResponse_1aab830ccac9063f838ab27b3d850215d8"></a>

Checks whether Cursor_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1a860bf24fddd138efef02db3be4caf33f)`()` <a id="structFRHAPI__PexClientPagedResponse_1a860bf24fddd138efef02db3be4caf33f"></a>

Gets the value of Filters_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1a914dbed50ba09d6a29e045895a7fc980)`() const` <a id="structFRHAPI__PexClientPagedResponse_1a914dbed50ba09d6a29e045895a7fc980"></a>

Gets the value of Filters_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1a55c564fe1e6a8dcb3700b83da30bbc87)`(const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & DefaultValue) const` <a id="structFRHAPI__PexClientPagedResponse_1a55c564fe1e6a8dcb3700b83da30bbc87"></a>

Gets the value of Filters_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFilters`](#structFRHAPI__PexClientPagedResponse_1ab76d1238b0ae250ed5380eabdd755860)`(`[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & OutValue) const` <a id="structFRHAPI__PexClientPagedResponse_1ab76d1238b0ae250ed5380eabdd755860"></a>

Fills OutValue with the value of Filters_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexClientPagedResponse_1a68149d95a8b66eb6e15f26e283d6d49b)`()` <a id="structFRHAPI__PexClientPagedResponse_1a68149d95a8b66eb6e15f26e283d6d49b"></a>

Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` * `[`GetFiltersOrNull`](#structFRHAPI__PexClientPagedResponse_1a9a4408fe41059dc995e3c1055432feb6)`() const` <a id="structFRHAPI__PexClientPagedResponse_1a9a4408fe41059dc995e3c1055432feb6"></a>

Returns a pointer to Filters_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFilters`](#structFRHAPI__PexClientPagedResponse_1a15684243cc4415e96b8f3725118cd132)`(const `[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` & NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1a15684243cc4415e96b8f3725118cd132"></a>

Sets the value of Filters_Optional and also sets Filters_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFilters`](#structFRHAPI__PexClientPagedResponse_1a1f9a2dbdba0a985add4152a3029cf905)`(`[`FRHAPI_PexClientQueryParams`](RHAPI_PexClientQueryParams.md#structFRHAPI__PexClientQueryParams)` && NewValue)` <a id="structFRHAPI__PexClientPagedResponse_1a1f9a2dbdba0a985add4152a3029cf905"></a>

Sets the value of Filters_Optional and also sets Filters_IsSet to true using move semantics.

#### `public inline void `[`ClearFilters`](#structFRHAPI__PexClientPagedResponse_1a4b428256793bec82e14173ad92e0e483)`()` <a id="structFRHAPI__PexClientPagedResponse_1a4b428256793bec82e14173ad92e0e483"></a>

Clears the value of Filters_Optional and sets Filters_IsSet to false.

