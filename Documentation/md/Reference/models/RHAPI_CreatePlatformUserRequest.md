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
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a2b25eac06e68f49cb3fc43fc8c779021)`()` | Gets the value of Platform.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a6eeecfc29011aaa2f4a65904f41e3357)`() const` | Gets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1ae209806305752caca881c70f5e589b0a)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a5ecddcab8216b40a7ddda76d62767259)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a0218edfbfcc0d131e2cbb6940df7bc17)`()` | Gets the value of PlatformUserId.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a924652eee4aef137d82c26c89840271f)`() const` | Gets the value of PlatformUserId.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a15e40fa78770227ce473aeac97306c59)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a013a4688e0236c01dd23545e312d6c29)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1ae233fb56394bc5466f6392a83f37ab5c)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1aa9ea6608f57317b9394770d883fd1dec)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1ab097a17c6b54f98132cd91e087e977f8)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1aa8533c2a65c5055ed2ae0cfd3f9a00a4)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1a9a773ede8a6ca35dd04e45c823220a7b)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1a191bdcbe5a82e4fcaeda94bf0521f078)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a18caeb5022a061ba71e4dd01b7abb49b)`(const FString & NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a1e9470479893e4e3234400b2a1cca2e4)`(FString && NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.
`public inline void `[`ClearDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a83baecca1ac4b53502cb573269d0aae2)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

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

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a2b25eac06e68f49cb3fc43fc8c779021)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1a2b25eac06e68f49cb3fc43fc8c779021"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a6eeecfc29011aaa2f4a65904f41e3357)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1a6eeecfc29011aaa2f4a65904f41e3357"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1ae209806305752caca881c70f5e589b0a)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1ae209806305752caca881c70f5e589b0a"></a>

Sets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreatePlatformUserRequest_1a5ecddcab8216b40a7ddda76d62767259)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1a5ecddcab8216b40a7ddda76d62767259"></a>

Sets the value of Platform using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a0218edfbfcc0d131e2cbb6940df7bc17)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1a0218edfbfcc0d131e2cbb6940df7bc17"></a>

Gets the value of PlatformUserId.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a924652eee4aef137d82c26c89840271f)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1a924652eee4aef137d82c26c89840271f"></a>

Gets the value of PlatformUserId.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a15e40fa78770227ce473aeac97306c59)`(const FString & NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1a15e40fa78770227ce473aeac97306c59"></a>

Sets the value of PlatformUserId.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__CreatePlatformUserRequest_1a013a4688e0236c01dd23545e312d6c29)`(FString && NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1a013a4688e0236c01dd23545e312d6c29"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1ae233fb56394bc5466f6392a83f37ab5c)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1ae233fb56394bc5466f6392a83f37ab5c"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1aa9ea6608f57317b9394770d883fd1dec)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1aa9ea6608f57317b9394770d883fd1dec"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1ab097a17c6b54f98132cd91e087e977f8)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreatePlatformUserRequest_1ab097a17c6b54f98132cd91e087e977f8"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1aa8533c2a65c5055ed2ae0cfd3f9a00a4)`(FString & OutValue) const` <a id="structFRHAPI__CreatePlatformUserRequest_1aa8533c2a65c5055ed2ae0cfd3f9a00a4"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1a9a773ede8a6ca35dd04e45c823220a7b)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1a9a773ede8a6ca35dd04e45c823220a7b"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__CreatePlatformUserRequest_1a191bdcbe5a82e4fcaeda94bf0521f078)`() const` <a id="structFRHAPI__CreatePlatformUserRequest_1a191bdcbe5a82e4fcaeda94bf0521f078"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a18caeb5022a061ba71e4dd01b7abb49b)`(const FString & NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1a18caeb5022a061ba71e4dd01b7abb49b"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a1e9470479893e4e3234400b2a1cca2e4)`(FString && NewValue)` <a id="structFRHAPI__CreatePlatformUserRequest_1a1e9470479893e4e3234400b2a1cca2e4"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__CreatePlatformUserRequest_1a83baecca1ac4b53502cb573269d0aae2)`()` <a id="structFRHAPI__CreatePlatformUserRequest_1a83baecca1ac4b53502cb573269d0aae2"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

