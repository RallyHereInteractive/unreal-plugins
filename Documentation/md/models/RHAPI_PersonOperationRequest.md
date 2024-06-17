# group `RHAPI_PersonOperationRequest` <a id="group__RHAPI__PersonOperationRequest"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PersonOperationRequest_1a1f4e311d3babf15f2faff1df3c798232)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PersonOperationRequest_1a876a0caf6010f3bf19f8b5bef04cc5b2)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1aa3a7a4118cd9a284530d9fdd42baac12)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a299415b9cb1cd476dd78fc60aa9d4a48)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1ab63abeed57719844488070474cc7cb64)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1af70465f93e2b970006c231eba739f1bb)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1a4596c143e7fae124c27f63ff20f6a741)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1a40ac5d5dc9f3af95e8d13dc757fb7bf7)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1a640a3e1a46e6a04b99b7fcd6c449f2fd)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1a420f28e6d8010b054b0094c1a1fdd896)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__PersonOperationRequest_1ac2c03e001d4f62bd0b981cdc7241dbc6)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1ac36216b6e7057d49f3f60b3f871b8b48)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1aa3a21f65d53736de908bc4c1df311a30)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a2bcaae5858d8c2f1631ad4589d3b2dbe)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1abecefb6a8eb603736cef3685bb7813e0)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1ad5e1d541bc690a045db7592879b91a21)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1ab5ff771d2207fde72ce75737370df9e3)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1a8bb77dd1ab8870ca11b8b4b551d88363)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1ac707312348451b3e4e1ff9ce31d96f87)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__PersonOperationRequest_1af12f90261c6b3e95b944e6b66a28200c)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a3e587eaac9a7dadd742a0c15b816134c)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a7574d5cbcf83e3b97eba74446b4be52f)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1aea305ac4c49eabbe6f3f3d25b53abb29)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a6cea5361413ac46d3437521111938867)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1a7d41e87c69fa225c651d8a204cf0fccd)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1a36b0f01a57cc40316ecde49d19e5cf44)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a72ae65cb129e1f7fd1fad8661dc5ee70)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1ac5bd9eef71ea7136ada6c128b6b59a3b)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
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

#### `public virtual bool `[`FromJson`](#structFRHAPI__PersonOperationRequest_1a1f4e311d3babf15f2faff1df3c798232)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PersonOperationRequest_1a1f4e311d3babf15f2faff1df3c798232"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PersonOperationRequest_1a876a0caf6010f3bf19f8b5bef04cc5b2)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PersonOperationRequest_1a876a0caf6010f3bf19f8b5bef04cc5b2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1aa3a7a4118cd9a284530d9fdd42baac12)`()` <a id="structFRHAPI__PersonOperationRequest_1aa3a7a4118cd9a284530d9fdd42baac12"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a299415b9cb1cd476dd78fc60aa9d4a48)`() const` <a id="structFRHAPI__PersonOperationRequest_1a299415b9cb1cd476dd78fc60aa9d4a48"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1ab63abeed57719844488070474cc7cb64)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PersonOperationRequest_1ab63abeed57719844488070474cc7cb64"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1af70465f93e2b970006c231eba739f1bb)`(FGuid & OutValue) const` <a id="structFRHAPI__PersonOperationRequest_1af70465f93e2b970006c231eba739f1bb"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1a4596c143e7fae124c27f63ff20f6a741)`()` <a id="structFRHAPI__PersonOperationRequest_1a4596c143e7fae124c27f63ff20f6a741"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1a40ac5d5dc9f3af95e8d13dc757fb7bf7)`() const` <a id="structFRHAPI__PersonOperationRequest_1a40ac5d5dc9f3af95e8d13dc757fb7bf7"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1a640a3e1a46e6a04b99b7fcd6c449f2fd)`(const FGuid & NewValue)` <a id="structFRHAPI__PersonOperationRequest_1a640a3e1a46e6a04b99b7fcd6c449f2fd"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1a420f28e6d8010b054b0094c1a1fdd896)`(FGuid && NewValue)` <a id="structFRHAPI__PersonOperationRequest_1a420f28e6d8010b054b0094c1a1fdd896"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__PersonOperationRequest_1ac2c03e001d4f62bd0b981cdc7241dbc6)`()` <a id="structFRHAPI__PersonOperationRequest_1ac2c03e001d4f62bd0b981cdc7241dbc6"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1ac36216b6e7057d49f3f60b3f871b8b48)`()` <a id="structFRHAPI__PersonOperationRequest_1ac36216b6e7057d49f3f60b3f871b8b48"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1aa3a21f65d53736de908bc4c1df311a30)`() const` <a id="structFRHAPI__PersonOperationRequest_1aa3a21f65d53736de908bc4c1df311a30"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a2bcaae5858d8c2f1631ad4589d3b2dbe)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PersonOperationRequest_1a2bcaae5858d8c2f1631ad4589d3b2dbe"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1abecefb6a8eb603736cef3685bb7813e0)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PersonOperationRequest_1abecefb6a8eb603736cef3685bb7813e0"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1ad5e1d541bc690a045db7592879b91a21)`()` <a id="structFRHAPI__PersonOperationRequest_1ad5e1d541bc690a045db7592879b91a21"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1ab5ff771d2207fde72ce75737370df9e3)`() const` <a id="structFRHAPI__PersonOperationRequest_1ab5ff771d2207fde72ce75737370df9e3"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1a8bb77dd1ab8870ca11b8b4b551d88363)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PersonOperationRequest_1a8bb77dd1ab8870ca11b8b4b551d88363"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1ac707312348451b3e4e1ff9ce31d96f87)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PersonOperationRequest_1ac707312348451b3e4e1ff9ce31d96f87"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__PersonOperationRequest_1af12f90261c6b3e95b944e6b66a28200c)`()` <a id="structFRHAPI__PersonOperationRequest_1af12f90261c6b3e95b944e6b66a28200c"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a3e587eaac9a7dadd742a0c15b816134c)`()` <a id="structFRHAPI__PersonOperationRequest_1a3e587eaac9a7dadd742a0c15b816134c"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a7574d5cbcf83e3b97eba74446b4be52f)`() const` <a id="structFRHAPI__PersonOperationRequest_1a7574d5cbcf83e3b97eba74446b4be52f"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1aea305ac4c49eabbe6f3f3d25b53abb29)`(const FString & DefaultValue) const` <a id="structFRHAPI__PersonOperationRequest_1aea305ac4c49eabbe6f3f3d25b53abb29"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a6cea5361413ac46d3437521111938867)`(FString & OutValue) const` <a id="structFRHAPI__PersonOperationRequest_1a6cea5361413ac46d3437521111938867"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1a7d41e87c69fa225c651d8a204cf0fccd)`()` <a id="structFRHAPI__PersonOperationRequest_1a7d41e87c69fa225c651d8a204cf0fccd"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1a36b0f01a57cc40316ecde49d19e5cf44)`() const` <a id="structFRHAPI__PersonOperationRequest_1a36b0f01a57cc40316ecde49d19e5cf44"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a72ae65cb129e1f7fd1fad8661dc5ee70)`(const FString & NewValue)` <a id="structFRHAPI__PersonOperationRequest_1a72ae65cb129e1f7fd1fad8661dc5ee70"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1ac5bd9eef71ea7136ada6c128b6b59a3b)`(FString && NewValue)` <a id="structFRHAPI__PersonOperationRequest_1ac5bd9eef71ea7136ada6c128b6b59a3b"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a5cd8c5bb1cbb37055ff311f9392523c3)`()` <a id="structFRHAPI__PersonOperationRequest_1a5cd8c5bb1cbb37055ff311f9392523c3"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

