---
title: RHAPI_CreatePlatformUserRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CreatePlatformUserRequest`](#structFRHAPI__CreatePlatformUserRequest) | Request parameters to create a user exists.

## struct `FRHAPI_CreatePlatformUserRequest` <a id="structFRHAPI__CreatePlatformUserRequest"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__CreatePlatformUserRequest_1ad73e92f2984b87bec6527652d9f2fba0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a6ce3744862724973bce496539b2c338e)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a8f15674a8b2873a70e835b0fe817f627)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1ac5e8919daaa182d7a79053d768fea731)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a4de7ede139109c5ddc69df87d797235a)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1af00687ed28c6b05eac1e834249d3babd)`()` | Gets the value of PlatformUserId.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1ac9d3cff102da541e98f8dc5f1ee10673)`() const` | Gets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a5690c9b886416dca25d5c3728b9f8d4e)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1aaa4a6df44a020221e4c03cfa7a9cdd27)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a844043568e6f65d6570f746244969064)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a6bef0264ff6256d01df28ac5d8baaad7)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a33c49341d8973154046a8cb0f29bf428)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a8a13b80603e9fc05cc5dedabc9c98f43)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1a85275b1957ae2330137380aa3692d1a9)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1a5cdc30971a36e022d5b79707569baebe)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreatePlatformUserRequest_1ad73e92f2984b87bec6527652d9f2fba0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CreatePlatformUserRequest_1ad73e92f2984b87bec6527652d9f2fba0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a6ce3744862724973bce496539b2c338e)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1a6ce3744862724973bce496539b2c338e"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a8f15674a8b2873a70e835b0fe817f627)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1a8f15674a8b2873a70e835b0fe817f627"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1ac5e8919daaa182d7a79053d768fea731)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1ac5e8919daaa182d7a79053d768fea731"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a4de7ede139109c5ddc69df87d797235a)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1a4de7ede139109c5ddc69df87d797235a"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1af00687ed28c6b05eac1e834249d3babd)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1af00687ed28c6b05eac1e834249d3babd"></a>

Gets the value of PlatformUserId.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1ac9d3cff102da541e98f8dc5f1ee10673)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1ac9d3cff102da541e98f8dc5f1ee10673"></a>

Gets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a5690c9b886416dca25d5c3728b9f8d4e)`(const FString & NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1a5690c9b886416dca25d5c3728b9f8d4e"></a>

Sets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1aaa4a6df44a020221e4c03cfa7a9cdd27)`(FString && NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1aaa4a6df44a020221e4c03cfa7a9cdd27"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a844043568e6f65d6570f746244969064)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1a844043568e6f65d6570f746244969064"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a6bef0264ff6256d01df28ac5d8baaad7)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1a6bef0264ff6256d01df28ac5d8baaad7"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a33c49341d8973154046a8cb0f29bf428)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreatePlatformUserRequest_1a33c49341d8973154046a8cb0f29bf428"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a8a13b80603e9fc05cc5dedabc9c98f43)`(FString & OutValue) const` <a id="structFRHAPI__CreatePlatformUserRequest_1a8a13b80603e9fc05cc5dedabc9c98f43"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1a85275b1957ae2330137380aa3692d1a9)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1a85275b1957ae2330137380aa3692d1a9"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1a5cdc30971a36e022d5b79707569baebe)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1a5cdc30971a36e022d5b79707569baebe"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1aa58fd4fdd6802b095f6e750c9693f928)`(const FString & NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1aa58fd4fdd6802b095f6e750c9693f928"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1ac39c49b4ae1b9538292b1bfd0b806418)`(FString && NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1ac39c49b4ae1b9538292b1bfd0b806418"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a83baecca1ac4b53502cb573269d0aae2)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1a83baecca1ac4b53502cb573269d0aae2"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline bool `[`IsDisplayNameSet`](#structFRHAPI__CreatePlatformUserRequest_1aef466ca31855d29fddaa12cb1c8e9652)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1aef466ca31855d29fddaa12cb1c8e9652"></a>

Checks whether DisplayName_Optional has been set.

