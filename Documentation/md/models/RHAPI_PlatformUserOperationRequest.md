# group `RHAPI_PlatformUserOperationRequest` <a id="group__RHAPI__PlatformUserOperationRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformUserOperationRequest`](#structFRHAPI__PlatformUserOperationRequest) | Model for doing operations on a specific platform user. If platform/userid information is not provided, the information from the token claims will be used instead.

## struct `FRHAPI_PlatformUserOperationRequest` <a id="structFRHAPI__PlatformUserOperationRequest"></a>

```
struct FRHAPI_PlatformUserOperationRequest
  : public FRHAPI_Model
```

Model for doing operations on a specific platform user. If platform/userid information is not provided, the information from the token claims will be used instead.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__PlatformUserOperationRequest_1a0f83cbd5cb765ffb0f64d11a87b3a58c) | Platform ID.
`public bool `[`Platform_IsSet`](#structFRHAPI__PlatformUserOperationRequest_1a63f68d7903acc453e2ef4af5c156a902) | true if Platform_Optional has been set to a value
`public FString `[`PlatformUserId_Optional`](#structFRHAPI__PlatformUserOperationRequest_1a7e642749f5441f29b0b99520bcd12b2a) | Platform User ID.
`public bool `[`PlatformUserId_IsSet`](#structFRHAPI__PlatformUserOperationRequest_1ae0c03e1258fe59f18d49f7533eee5360) | true if PlatformUserId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserOperationRequest_1a2464f4f981d9b58dd483c4044e5bb7ea)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserOperationRequest_1af70ac79429bfe15f2e5356cc8fb60a34)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a019c70301f036657a3697939ca617c2c)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a064744a5b48d6bf66f2ec5a8ede5570d)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a94ac8e16a779493e1b5b1f90e1633522)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a9bf2a927dda0d2af151fd64ca8fb40dd)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1aa1425a4b6040d0e3bc41df0364719f4d)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1a1749ce0d187d38d931cae29459873215)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1ab24aa534463b3caffa6b8099f217b2a7)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a384b5ae673362c231d8edf55baa150d1)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__PlatformUserOperationRequest_1ab78ae8564fcc602af3671ebe1ec3e311)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__PlatformUserOperationRequest_1a7b4c4e529bdae03c046fb5fda2ff2bc0)`() const` | Checks whether Platform_Optional has been set.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ad7cedfbf103c00428b59019ba53c70c1)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a760f509392fc731f3fc80727c4043bcf)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a72cbd71d6553d0d03721d45ab047f248)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a292cb9caba70f6c0bed5d653be9b25ec)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1abdc7b2b071a89e3f2d2db19d1958cbc5)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1ab299e8ef026be2b515c33fab8f751f7f)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ad631a35b27f2f4943cc8642953a097db)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ae2cf3888d8bd049f626c021356c1fc9f)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1af6e3622db661283db2adef3cf98b231d)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.
`public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__PlatformUserOperationRequest_1abc765bdbae6c7964603bddc42a52a57c)`() const` | Checks whether PlatformUserId_Optional has been set.

### Members

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__PlatformUserOperationRequest_1a0f83cbd5cb765ffb0f64d11a87b3a58c) <a id="structFRHAPI__PlatformUserOperationRequest_1a0f83cbd5cb765ffb0f64d11a87b3a58c"></a>

Platform ID.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__PlatformUserOperationRequest_1a63f68d7903acc453e2ef4af5c156a902) <a id="structFRHAPI__PlatformUserOperationRequest_1a63f68d7903acc453e2ef4af5c156a902"></a>

true if Platform_Optional has been set to a value

#### `public FString `[`PlatformUserId_Optional`](#structFRHAPI__PlatformUserOperationRequest_1a7e642749f5441f29b0b99520bcd12b2a) <a id="structFRHAPI__PlatformUserOperationRequest_1a7e642749f5441f29b0b99520bcd12b2a"></a>

Platform User ID.

#### `public bool `[`PlatformUserId_IsSet`](#structFRHAPI__PlatformUserOperationRequest_1ae0c03e1258fe59f18d49f7533eee5360) <a id="structFRHAPI__PlatformUserOperationRequest_1ae0c03e1258fe59f18d49f7533eee5360"></a>

true if PlatformUserId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserOperationRequest_1a2464f4f981d9b58dd483c4044e5bb7ea)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1a2464f4f981d9b58dd483c4044e5bb7ea"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserOperationRequest_1af70ac79429bfe15f2e5356cc8fb60a34)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformUserOperationRequest_1af70ac79429bfe15f2e5356cc8fb60a34"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a019c70301f036657a3697939ca617c2c)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1a019c70301f036657a3697939ca617c2c"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a064744a5b48d6bf66f2ec5a8ede5570d)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1a064744a5b48d6bf66f2ec5a8ede5570d"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a94ac8e16a779493e1b5b1f90e1633522)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1a94ac8e16a779493e1b5b1f90e1633522"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a9bf2a927dda0d2af151fd64ca8fb40dd)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1a9bf2a927dda0d2af151fd64ca8fb40dd"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1aa1425a4b6040d0e3bc41df0364719f4d)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1aa1425a4b6040d0e3bc41df0364719f4d"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PlatformUserOperationRequest_1a1749ce0d187d38d931cae29459873215)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1a1749ce0d187d38d931cae29459873215"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1ab24aa534463b3caffa6b8099f217b2a7)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1ab24aa534463b3caffa6b8099f217b2a7"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserOperationRequest_1a384b5ae673362c231d8edf55baa150d1)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1a384b5ae673362c231d8edf55baa150d1"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__PlatformUserOperationRequest_1ab78ae8564fcc602af3671ebe1ec3e311)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1ab78ae8564fcc602af3671ebe1ec3e311"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__PlatformUserOperationRequest_1a7b4c4e529bdae03c046fb5fda2ff2bc0)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1a7b4c4e529bdae03c046fb5fda2ff2bc0"></a>

Checks whether Platform_Optional has been set.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ad7cedfbf103c00428b59019ba53c70c1)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1ad7cedfbf103c00428b59019ba53c70c1"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a760f509392fc731f3fc80727c4043bcf)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1a760f509392fc731f3fc80727c4043bcf"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a72cbd71d6553d0d03721d45ab047f248)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1a72cbd71d6553d0d03721d45ab047f248"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1a292cb9caba70f6c0bed5d653be9b25ec)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserOperationRequest_1a292cb9caba70f6c0bed5d653be9b25ec"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1abdc7b2b071a89e3f2d2db19d1958cbc5)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1abdc7b2b071a89e3f2d2db19d1958cbc5"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PlatformUserOperationRequest_1ab299e8ef026be2b515c33fab8f751f7f)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1ab299e8ef026be2b515c33fab8f751f7f"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ad631a35b27f2f4943cc8642953a097db)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1ad631a35b27f2f4943cc8642953a097db"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1ae2cf3888d8bd049f626c021356c1fc9f)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserOperationRequest_1ae2cf3888d8bd049f626c021356c1fc9f"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__PlatformUserOperationRequest_1af6e3622db661283db2adef3cf98b231d)`()` <a id="structFRHAPI__PlatformUserOperationRequest_1af6e3622db661283db2adef3cf98b231d"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

#### `public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__PlatformUserOperationRequest_1abc765bdbae6c7964603bddc42a52a57c)`() const` <a id="structFRHAPI__PlatformUserOperationRequest_1abc765bdbae6c7964603bddc42a52a57c"></a>

Checks whether PlatformUserId_Optional has been set.

