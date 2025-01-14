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
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a2fe966173b441f299dffe296768718a1)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1ad5acbb858ce08cbb4dbf776ba9660ec7)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a94ea3e6320ecc537fd0347918029cc53)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1af70465f93e2b970006c231eba739f1bb)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1af7dba6eeb049d3f504c3dab6ac9825b2)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1a889ed106459652deb18564bcf9b3e87c)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1a640a3e1a46e6a04b99b7fcd6c449f2fd)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1a420f28e6d8010b054b0094c1a1fdd896)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__PersonOperationRequest_1ac2c03e001d4f62bd0b981cdc7241dbc6)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline bool `[`IsPersonIdSet`](#structFRHAPI__PersonOperationRequest_1ac885419990d53ad8aa5d44acf98e0fbf)`() const` | Checks whether PersonId_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a18fe752cc10a07c5a31c84ef4bfe612a)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1ad7b24f602c235c9050eafd11dd90df9c)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a06eabb7b6c133bee7105df5a46a9d2c4)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1abecefb6a8eb603736cef3685bb7813e0)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1a90eb1502f803c02951d0f222d48ca798)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1a5f676d95f92d33d1a6f989fd0e3a167c)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1a8bb77dd1ab8870ca11b8b4b551d88363)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1ac707312348451b3e4e1ff9ce31d96f87)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__PersonOperationRequest_1af12f90261c6b3e95b944e6b66a28200c)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__PersonOperationRequest_1a4d60bdca1ebef717eb4e5a543fe1c818)`() const` | Checks whether Platform_Optional has been set.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a2df9bb8362f6edfa8f67cec37e27edc9)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a0db55c1d6e14a7e5a7ded311041586a3)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a699c263e1ea3d66599c06b781490a5cd)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a6cea5361413ac46d3437521111938867)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1a42793b8f197515e9c94cf0a552a7c2c7)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1a644d8a1aa24a44f7eee7381edea9f1d8)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a72ae65cb129e1f7fd1fad8661dc5ee70)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1ac5bd9eef71ea7136ada6c128b6b59a3b)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a5cd8c5bb1cbb37055ff311f9392523c3)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.
`public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__PersonOperationRequest_1afebb5e8a330e8138f89dd3bedf0dca30)`() const` | Checks whether PlatformUserId_Optional has been set.

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

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a2fe966173b441f299dffe296768718a1)`()` <a id="structFRHAPI__PersonOperationRequest_1a2fe966173b441f299dffe296768718a1"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1ad5acbb858ce08cbb4dbf776ba9660ec7)`() const` <a id="structFRHAPI__PersonOperationRequest_1ad5acbb858ce08cbb4dbf776ba9660ec7"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1a94ea3e6320ecc537fd0347918029cc53)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PersonOperationRequest_1a94ea3e6320ecc537fd0347918029cc53"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPersonId`](#structFRHAPI__PersonOperationRequest_1af70465f93e2b970006c231eba739f1bb)`(FGuid & OutValue) const` <a id="structFRHAPI__PersonOperationRequest_1af70465f93e2b970006c231eba739f1bb"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1af7dba6eeb049d3f504c3dab6ac9825b2)`()` <a id="structFRHAPI__PersonOperationRequest_1af7dba6eeb049d3f504c3dab6ac9825b2"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonOperationRequest_1a889ed106459652deb18564bcf9b3e87c)`() const` <a id="structFRHAPI__PersonOperationRequest_1a889ed106459652deb18564bcf9b3e87c"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1a640a3e1a46e6a04b99b7fcd6c449f2fd)`(const FGuid & NewValue)` <a id="structFRHAPI__PersonOperationRequest_1a640a3e1a46e6a04b99b7fcd6c449f2fd"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PersonOperationRequest_1a420f28e6d8010b054b0094c1a1fdd896)`(FGuid && NewValue)` <a id="structFRHAPI__PersonOperationRequest_1a420f28e6d8010b054b0094c1a1fdd896"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__PersonOperationRequest_1ac2c03e001d4f62bd0b981cdc7241dbc6)`()` <a id="structFRHAPI__PersonOperationRequest_1ac2c03e001d4f62bd0b981cdc7241dbc6"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline bool `[`IsPersonIdSet`](#structFRHAPI__PersonOperationRequest_1ac885419990d53ad8aa5d44acf98e0fbf)`() const` <a id="structFRHAPI__PersonOperationRequest_1ac885419990d53ad8aa5d44acf98e0fbf"></a>

Checks whether PersonId_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a18fe752cc10a07c5a31c84ef4bfe612a)`()` <a id="structFRHAPI__PersonOperationRequest_1a18fe752cc10a07c5a31c84ef4bfe612a"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1ad7b24f602c235c9050eafd11dd90df9c)`() const` <a id="structFRHAPI__PersonOperationRequest_1ad7b24f602c235c9050eafd11dd90df9c"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1a06eabb7b6c133bee7105df5a46a9d2c4)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PersonOperationRequest_1a06eabb7b6c133bee7105df5a46a9d2c4"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__PersonOperationRequest_1abecefb6a8eb603736cef3685bb7813e0)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PersonOperationRequest_1abecefb6a8eb603736cef3685bb7813e0"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1a90eb1502f803c02951d0f222d48ca798)`()` <a id="structFRHAPI__PersonOperationRequest_1a90eb1502f803c02951d0f222d48ca798"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__PersonOperationRequest_1a5f676d95f92d33d1a6f989fd0e3a167c)`() const` <a id="structFRHAPI__PersonOperationRequest_1a5f676d95f92d33d1a6f989fd0e3a167c"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1a8bb77dd1ab8870ca11b8b4b551d88363)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PersonOperationRequest_1a8bb77dd1ab8870ca11b8b4b551d88363"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PersonOperationRequest_1ac707312348451b3e4e1ff9ce31d96f87)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PersonOperationRequest_1ac707312348451b3e4e1ff9ce31d96f87"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__PersonOperationRequest_1af12f90261c6b3e95b944e6b66a28200c)`()` <a id="structFRHAPI__PersonOperationRequest_1af12f90261c6b3e95b944e6b66a28200c"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__PersonOperationRequest_1a4d60bdca1ebef717eb4e5a543fe1c818)`() const` <a id="structFRHAPI__PersonOperationRequest_1a4d60bdca1ebef717eb4e5a543fe1c818"></a>

Checks whether Platform_Optional has been set.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a2df9bb8362f6edfa8f67cec37e27edc9)`()` <a id="structFRHAPI__PersonOperationRequest_1a2df9bb8362f6edfa8f67cec37e27edc9"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a0db55c1d6e14a7e5a7ded311041586a3)`() const` <a id="structFRHAPI__PersonOperationRequest_1a0db55c1d6e14a7e5a7ded311041586a3"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a699c263e1ea3d66599c06b781490a5cd)`(const FString & DefaultValue) const` <a id="structFRHAPI__PersonOperationRequest_1a699c263e1ea3d66599c06b781490a5cd"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a6cea5361413ac46d3437521111938867)`(FString & OutValue) const` <a id="structFRHAPI__PersonOperationRequest_1a6cea5361413ac46d3437521111938867"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1a42793b8f197515e9c94cf0a552a7c2c7)`()` <a id="structFRHAPI__PersonOperationRequest_1a42793b8f197515e9c94cf0a552a7c2c7"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__PersonOperationRequest_1a644d8a1aa24a44f7eee7381edea9f1d8)`() const` <a id="structFRHAPI__PersonOperationRequest_1a644d8a1aa24a44f7eee7381edea9f1d8"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a72ae65cb129e1f7fd1fad8661dc5ee70)`(const FString & NewValue)` <a id="structFRHAPI__PersonOperationRequest_1a72ae65cb129e1f7fd1fad8661dc5ee70"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PersonOperationRequest_1ac5bd9eef71ea7136ada6c128b6b59a3b)`(FString && NewValue)` <a id="structFRHAPI__PersonOperationRequest_1ac5bd9eef71ea7136ada6c128b6b59a3b"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__PersonOperationRequest_1a5cd8c5bb1cbb37055ff311f9392523c3)`()` <a id="structFRHAPI__PersonOperationRequest_1a5cd8c5bb1cbb37055ff311f9392523c3"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

#### `public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__PersonOperationRequest_1afebb5e8a330e8138f89dd3bedf0dca30)`() const` <a id="structFRHAPI__PersonOperationRequest_1afebb5e8a330e8138f89dd3bedf0dca30"></a>

Checks whether PlatformUserId_Optional has been set.

