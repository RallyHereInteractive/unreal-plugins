---
title: RHAPI_PersonOperationRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PersonOperationRequest`](#structFRHAPI__PersonOperationRequest) | Model for doing operations on a specific person. If person information is not provided, the information from the token claims will be used instead. Priority for finding the person ID: 1. If the &#x60;person_id&#x60; is provided directly 2. If the &#x60;platform&#x60; and &#x60;platform_user_id&#x60; are provided, the &#x60;person_id&#x60; of that platform user is used. 3. If the Authorization header contains a user token, the platform and platform user id from the token are used to find the &#x60;person_id&#x60;.

## struct `FRHAPI_PersonOperationRequest` <a id="structFRHAPI__PersonOperationRequest"></a>

```
struct FRHAPI_PersonOperationRequest
  : public FRHAPI_Model
```

Model for doing operations on a specific person. If person information is not provided, the information from the token claims will be used instead. Priority for finding the person ID: 1. If the &#x60;person_id&#x60; is provided directly 2. If the &#x60;platform&#x60; and &#x60;platform_user_id&#x60; are provided, the &#x60;person_id&#x60; of that platform user is used. 3. If the Authorization header contains a user token, the platform and platform user id from the token are used to find the &#x60;person_id&#x60;.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PersonId_Optional`](#structFRHAPI__PersonOperationRequest_1a5435c67ec0a83ace5a3a2207d681a379) | Person ID.
`public bool `[`PersonId_IsSet`](#structFRHAPI__PersonOperationRequest_1a9fd079b537d2bda095b81acbfba4da39) | true if PersonId_Optional has been set to a value
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__PersonOperationRequest_1a5afdfcabcf52844bbb88c6723fc42090) | Platform ID.
`public bool `[`Platform_IsSet`](#structFRHAPI__PersonOperationRequest_1a0ab555aed5036700085d230c86afa53e) | true if Platform_Optional has been set to a value
`public FString `[`PlatformUserId_Optional`](#structFRHAPI__PersonOperationRequest_1af4f1a5779f29fe1eda9997044899a999) | Platform User ID.
`public bool `[`PlatformUserId_IsSet`](#structFRHAPI__PersonOperationRequest_1adb1d529a865b26be08d6556d6fc1f5ea) | true if PlatformUserId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PersonOperationRequest_1a508e7f112d7fa40f785c30f1fe4adae8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PersonOperationRequest_1abc901c8c248f5c67e9ad244cb004b85a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a26f7b8ff0979858a83de7af42d2d92e8)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a8fbf74383a7bd2bc0babfc27e8a5b76c)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a9c63338f4c26cd14e9cba70897a89123)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a7b8ff9661743c8103b0307e3adc6b22c)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1a650fda549f2d60e8ce8746a6888f1af6)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1acb7d2a7f01441335dc010f8491c69c88)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1aaeadf40134bd6ce9804ba1c1365273cb)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1afa2408378296b25b0b731f67c6dc0339)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__PersonOperationRequest_1ac2c03e001d4f62bd0b981cdc7241dbc6)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a5de8310a40bd34a53bb516362c5a9136)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a3c5457cf29f534f54f995c4ce6c867dc)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a68d675d0f84b9fa049be001b0a6d9c4c)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1afc6c1dbb97f58da792e02f012003a8dd)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1a74f24697896e424f102cbd034d86952a)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1a297cc947286732de12709935a2012ee8)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1a9a28510b396862a910671c925b504471)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1a14ec41b9d6cc50c2833427a44f3dfdb0)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__PersonOperationRequest_1af12f90261c6b3e95b944e6b66a28200c)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a2c97b027990ebdb47d65f96212a7b738)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1aee38d77d165967300678085d9929ff77)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1ae8c20d53d03d87a5e2e840eeb468124b)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1ab8e10487c18c7ac4c554907c6e7b9e27)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1ac213b04c367818c0e357a6f60996f0d0)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1a2c2ae7e1d1a014421ecd519947cfcf22)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a9843c782d5dc3e6ace14dcfd7b792e56)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1aafc3a9f9a34050817fbe9bbe7c30a56e)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a5cd8c5bb1cbb37055ff311f9392523c3)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

### Members

#### `public FGuid `[`PersonId_Optional`](#structFRHAPI__PersonOperationRequest_1a5435c67ec0a83ace5a3a2207d681a379) <a id="structFRHAPI__PersonOperationRequest_1a5435c67ec0a83ace5a3a2207d681a379"></a>

Person ID.

#### `public bool `[`PersonId_IsSet`](#structFRHAPI__PersonOperationRequest_1a9fd079b537d2bda095b81acbfba4da39) <a id="structFRHAPI__PersonOperationRequest_1a9fd079b537d2bda095b81acbfba4da39"></a>

true if PersonId_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__PersonOperationRequest_1a5afdfcabcf52844bbb88c6723fc42090) <a id="structFRHAPI__PersonOperationRequest_1a5afdfcabcf52844bbb88c6723fc42090"></a>

Platform ID.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__PersonOperationRequest_1a0ab555aed5036700085d230c86afa53e) <a id="structFRHAPI__PersonOperationRequest_1a0ab555aed5036700085d230c86afa53e"></a>

true if Platform_Optional has been set to a value

#### `public FString `[`PlatformUserId_Optional`](#structFRHAPI__PersonOperationRequest_1af4f1a5779f29fe1eda9997044899a999) <a id="structFRHAPI__PersonOperationRequest_1af4f1a5779f29fe1eda9997044899a999"></a>

Platform User ID.

#### `public bool `[`PlatformUserId_IsSet`](#structFRHAPI__PersonOperationRequest_1adb1d529a865b26be08d6556d6fc1f5ea) <a id="structFRHAPI__PersonOperationRequest_1adb1d529a865b26be08d6556d6fc1f5ea"></a>

true if PlatformUserId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PersonOperationRequest_1a508e7f112d7fa40f785c30f1fe4adae8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PersonOperationRequest_1a508e7f112d7fa40f785c30f1fe4adae8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PersonOperationRequest_1abc901c8c248f5c67e9ad244cb004b85a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PersonOperationRequest_1abc901c8c248f5c67e9ad244cb004b85a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a26f7b8ff0979858a83de7af42d2d92e8)`()` <a id="structFRHAPI__PersonOperationRequest_1a26f7b8ff0979858a83de7af42d2d92e8"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a8fbf74383a7bd2bc0babfc27e8a5b76c)`() const` <a id="structFRHAPI__PersonOperationRequest_1a8fbf74383a7bd2bc0babfc27e8a5b76c"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a9c63338f4c26cd14e9cba70897a89123)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PersonOperationRequest_1a9c63338f4c26cd14e9cba70897a89123"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a7b8ff9661743c8103b0307e3adc6b22c)`(FGuid & OutValue) const` <a id="structFRHAPI__PersonOperationRequest_1a7b8ff9661743c8103b0307e3adc6b22c"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1a650fda549f2d60e8ce8746a6888f1af6)`()` <a id="structFRHAPI__PersonOperationRequest_1a650fda549f2d60e8ce8746a6888f1af6"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1acb7d2a7f01441335dc010f8491c69c88)`() const` <a id="structFRHAPI__PersonOperationRequest_1acb7d2a7f01441335dc010f8491c69c88"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1aaeadf40134bd6ce9804ba1c1365273cb)`(const FGuid & NewValue)` <a id="structFRHAPI__PersonOperationRequest_1aaeadf40134bd6ce9804ba1c1365273cb"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1afa2408378296b25b0b731f67c6dc0339)`(FGuid && NewValue)` <a id="structFRHAPI__PersonOperationRequest_1afa2408378296b25b0b731f67c6dc0339"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__PersonOperationRequest_1ac2c03e001d4f62bd0b981cdc7241dbc6)`()` <a id="structFRHAPI__PersonOperationRequest_1ac2c03e001d4f62bd0b981cdc7241dbc6"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a5de8310a40bd34a53bb516362c5a9136)`()` <a id="structFRHAPI__PersonOperationRequest_1a5de8310a40bd34a53bb516362c5a9136"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a3c5457cf29f534f54f995c4ce6c867dc)`() const` <a id="structFRHAPI__PersonOperationRequest_1a3c5457cf29f534f54f995c4ce6c867dc"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a68d675d0f84b9fa049be001b0a6d9c4c)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PersonOperationRequest_1a68d675d0f84b9fa049be001b0a6d9c4c"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1afc6c1dbb97f58da792e02f012003a8dd)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PersonOperationRequest_1afc6c1dbb97f58da792e02f012003a8dd"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1a74f24697896e424f102cbd034d86952a)`()` <a id="structFRHAPI__PersonOperationRequest_1a74f24697896e424f102cbd034d86952a"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1a297cc947286732de12709935a2012ee8)`() const` <a id="structFRHAPI__PersonOperationRequest_1a297cc947286732de12709935a2012ee8"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1a9a28510b396862a910671c925b504471)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PersonOperationRequest_1a9a28510b396862a910671c925b504471"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1a14ec41b9d6cc50c2833427a44f3dfdb0)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PersonOperationRequest_1a14ec41b9d6cc50c2833427a44f3dfdb0"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__PersonOperationRequest_1af12f90261c6b3e95b944e6b66a28200c)`()` <a id="structFRHAPI__PersonOperationRequest_1af12f90261c6b3e95b944e6b66a28200c"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a2c97b027990ebdb47d65f96212a7b738)`()` <a id="structFRHAPI__PersonOperationRequest_1a2c97b027990ebdb47d65f96212a7b738"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1aee38d77d165967300678085d9929ff77)`() const` <a id="structFRHAPI__PersonOperationRequest_1aee38d77d165967300678085d9929ff77"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1ae8c20d53d03d87a5e2e840eeb468124b)`(const FString & DefaultValue) const` <a id="structFRHAPI__PersonOperationRequest_1ae8c20d53d03d87a5e2e840eeb468124b"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1ab8e10487c18c7ac4c554907c6e7b9e27)`(FString & OutValue) const` <a id="structFRHAPI__PersonOperationRequest_1ab8e10487c18c7ac4c554907c6e7b9e27"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1ac213b04c367818c0e357a6f60996f0d0)`()` <a id="structFRHAPI__PersonOperationRequest_1ac213b04c367818c0e357a6f60996f0d0"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1a2c2ae7e1d1a014421ecd519947cfcf22)`() const` <a id="structFRHAPI__PersonOperationRequest_1a2c2ae7e1d1a014421ecd519947cfcf22"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a9843c782d5dc3e6ace14dcfd7b792e56)`(const FString & NewValue)` <a id="structFRHAPI__PersonOperationRequest_1a9843c782d5dc3e6ace14dcfd7b792e56"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1aafc3a9f9a34050817fbe9bbe7c30a56e)`(FString && NewValue)` <a id="structFRHAPI__PersonOperationRequest_1aafc3a9f9a34050817fbe9bbe7c30a56e"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a5cd8c5bb1cbb37055ff311f9392523c3)`()` <a id="structFRHAPI__PersonOperationRequest_1a5cd8c5bb1cbb37055ff311f9392523c3"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

