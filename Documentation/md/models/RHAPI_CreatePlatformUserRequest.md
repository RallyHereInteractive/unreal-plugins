# group `RHAPI_CreatePlatformUserRequest` <a id="group__RHAPI__CreatePlatformUserRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CreatePlatformUserRequest`](#structFRHAPI__CreatePlatformUserRequest) | Request parameters to create a user exists.

---
title: FRHAPI_CreatePlatformUserRequest
---

```
struct FRHAPI_CreatePlatformUserRequest
  : public FRHAPI_Model
```

Request parameters to create a user exists.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__CreatePlatformUserRequest_1aa6e466a9fd3fd5f601e125c155efec21) | Platform to create with.
`public FString `[`PlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a587e36370f0cc58af050da8bed32e05f) | Platform user ID to create with.
`public FString `[`DisplayName_Optional`](#structFRHAPI__CreatePlatformUserRequest_1a2e3f3d7ea15d34d542c8110a19d0a3e3) | Display name used when creating a new player.
`public bool `[`DisplayName_IsSet`](#structFRHAPI__CreatePlatformUserRequest_1a7a0f7f33a973df6fb788118229369731) | true if DisplayName_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__CreatePlatformUserRequest_1a43546c9efb5116b3d17be7ca1d72d8f5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreatePlatformUserRequest_1a03a2c62a188a608e60a2807a032a4b7a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1abe0ddacb7c3cd1b903f426306e81ab20)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a532a49e83fc22a3827d4d2f9dac83ff9)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1ac5e8919daaa182d7a79053d768fea731)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a4de7ede139109c5ddc69df87d797235a)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a9ad2bfe5a284b59ea2f763d48d5184a4)`()` | Gets the value of PlatformUserId.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a841ce28db2e8d459de231d302b140d35)`() const` | Gets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a5690c9b886416dca25d5c3728b9f8d4e)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1aaa4a6df44a020221e4c03cfa7a9cdd27)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a375d2bf3510033e4361761841c9bf140)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a711da1d2c6c2af0763fe0b99fa3d740d)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1adfbfde046ac074d78c64437bfc2a6d47)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a8a13b80603e9fc05cc5dedabc9c98f43)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1adea66f07e133320b42e4e51d48808820)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1a5bc140a8a7aee2d4a7d88c5864b3dfe1)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1aa58fd4fdd6802b095f6e750c9693f928)`(const FString & NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline void `[`SetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1ac39c49b4ae1b9538292b1bfd0b806418)`(FString && NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.
`public inline void `[`ClearDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a83baecca1ac4b53502cb573269d0aae2)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.
`public inline bool `[`IsDisplayNameSet`](#structFRHAPI__CreatePlatformUserRequest_1aef466ca31855d29fddaa12cb1c8e9652)`() const` | Checks whether DisplayName_Optional has been set.

### Members

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__CreatePlatformUserRequest_1aa6e466a9fd3fd5f601e125c155efec21) <a id="structFRHAPI__CreatePlatformUserRequest_1aa6e466a9fd3fd5f601e125c155efec21"></a>

Platform to create with.

#### `public FString `[`PlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a587e36370f0cc58af050da8bed32e05f) <a id="structFRHAPI__CreatePlatformUserRequest_1a587e36370f0cc58af050da8bed32e05f"></a>

Platform user ID to create with.

#### `public FString `[`DisplayName_Optional`](#structFRHAPI__CreatePlatformUserRequest_1a2e3f3d7ea15d34d542c8110a19d0a3e3) <a id="structFRHAPI__CreatePlatformUserRequest_1a2e3f3d7ea15d34d542c8110a19d0a3e3"></a>

Display name used when creating a new player.

#### `public bool `[`DisplayName_IsSet`](#structFRHAPI__CreatePlatformUserRequest_1a7a0f7f33a973df6fb788118229369731) <a id="structFRHAPI__CreatePlatformUserRequest_1a7a0f7f33a973df6fb788118229369731"></a>

true if DisplayName_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__CreatePlatformUserRequest_1a43546c9efb5116b3d17be7ca1d72d8f5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1a43546c9efb5116b3d17be7ca1d72d8f5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreatePlatformUserRequest_1a03a2c62a188a608e60a2807a032a4b7a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CreatePlatformUserRequest_1a03a2c62a188a608e60a2807a032a4b7a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1abe0ddacb7c3cd1b903f426306e81ab20)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1abe0ddacb7c3cd1b903f426306e81ab20"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a532a49e83fc22a3827d4d2f9dac83ff9)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1a532a49e83fc22a3827d4d2f9dac83ff9"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1ac5e8919daaa182d7a79053d768fea731)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1ac5e8919daaa182d7a79053d768fea731"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a4de7ede139109c5ddc69df87d797235a)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1a4de7ede139109c5ddc69df87d797235a"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a9ad2bfe5a284b59ea2f763d48d5184a4)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1a9ad2bfe5a284b59ea2f763d48d5184a4"></a>

Gets the value of PlatformUserId.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a841ce28db2e8d459de231d302b140d35)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1a841ce28db2e8d459de231d302b140d35"></a>

Gets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a5690c9b886416dca25d5c3728b9f8d4e)`(const FString & NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1a5690c9b886416dca25d5c3728b9f8d4e"></a>

Sets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1aaa4a6df44a020221e4c03cfa7a9cdd27)`(FString && NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1aaa4a6df44a020221e4c03cfa7a9cdd27"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a375d2bf3510033e4361761841c9bf140)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1a375d2bf3510033e4361761841c9bf140"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a711da1d2c6c2af0763fe0b99fa3d740d)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1a711da1d2c6c2af0763fe0b99fa3d740d"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1adfbfde046ac074d78c64437bfc2a6d47)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreatePlatformUserRequest_1adfbfde046ac074d78c64437bfc2a6d47"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a8a13b80603e9fc05cc5dedabc9c98f43)`(FString & OutValue) const` <a id="structFRHAPI__CreatePlatformUserRequest_1a8a13b80603e9fc05cc5dedabc9c98f43"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1adea66f07e133320b42e4e51d48808820)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1adea66f07e133320b42e4e51d48808820"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1a5bc140a8a7aee2d4a7d88c5864b3dfe1)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1a5bc140a8a7aee2d4a7d88c5864b3dfe1"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1aa58fd4fdd6802b095f6e750c9693f928)`(const FString & NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1aa58fd4fdd6802b095f6e750c9693f928"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1ac39c49b4ae1b9538292b1bfd0b806418)`(FString && NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1ac39c49b4ae1b9538292b1bfd0b806418"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a83baecca1ac4b53502cb573269d0aae2)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1a83baecca1ac4b53502cb573269d0aae2"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline bool `[`IsDisplayNameSet`](#structFRHAPI__CreatePlatformUserRequest_1aef466ca31855d29fddaa12cb1c8e9652)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1aef466ca31855d29fddaa12cb1c8e9652"></a>

Checks whether DisplayName_Optional has been set.

