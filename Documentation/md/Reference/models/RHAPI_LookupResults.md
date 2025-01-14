---
title: RHAPI_LookupResults
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LookupResults`](#structFRHAPI__LookupResults) | Lookup results for a player query.

## struct `FRHAPI_LookupResults` <a id="structFRHAPI__LookupResults"></a>

```
struct FRHAPI_LookupResults
  : public FRHAPI_Model
```

Lookup results for a player query.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > `[`DisplayNames_Optional`](#structFRHAPI__LookupResults_1a2792e7ea1c67e9bc83be3cc6f8d8f160) | List of display names and the players that match that display name.
`public bool `[`DisplayNames_IsSet`](#structFRHAPI__LookupResults_1a2dd1caa9fe26b2aaa70966f118305219) | true if DisplayNames_Optional has been set to a value
`public TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > `[`IdentityPlatforms_Optional`](#structFRHAPI__LookupResults_1a9b38e82b534a20dd79def5df5af49cec) | *DEPRECATED* Use `identity_platforms_by_platform` instead. List of platforms and the players that match that platform user id
`public bool `[`IdentityPlatforms_IsSet`](#structFRHAPI__LookupResults_1a7916bca0eb141f565ec7062291c9d8d1) | true if IdentityPlatforms_Optional has been set to a value
`public TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > `[`IdentityPlatformsByPlatform_Optional`](#structFRHAPI__LookupResults_1a3c33f2087e0f5524231bdf41ad7b1627) | List of platforms and the players that match that platform user id.
`public bool `[`IdentityPlatformsByPlatform_IsSet`](#structFRHAPI__LookupResults_1a52b71e32ef449b8d56b700674005b0ce) | true if IdentityPlatformsByPlatform_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LookupResults_1a573ce7d34618aaff348fe3cb2da786fc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LookupResults_1a6dca43717784d3e523d85604c7513b74)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1af13fa855b55426dd0b098accec9c0f50)`()` | Gets the value of DisplayNames_Optional, regardless of it having been set.
`public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a24ed9966f95447b707977f8b48bf0042)`() const` | Gets the value of DisplayNames_Optional, regardless of it having been set.
`public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a5b0afb496c30de72c755acfc7eda7719)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & DefaultValue) const` | Gets the value of DisplayNames_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDisplayNames`](#structFRHAPI__LookupResults_1ad198b3a55ea75ff5faac138c5d2a1b62)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & OutValue) const` | Fills OutValue with the value of DisplayNames_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1ab89ed4574274ce4654011ee1873f6bfb)`()` | Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1ad74cafe4abd2961686d0dae0776b8c6e)`() const` | Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1a4c204c8cfc076473b98afd1a41c567f0)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & NewValue)` | Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true.
`public inline void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1a9b86419bafdd29dfeb457ae275546e0e)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > && NewValue)` | Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true using move semantics.
`public inline void `[`ClearDisplayNames`](#structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854)`()` | Clears the value of DisplayNames_Optional and sets DisplayNames_IsSet to false.
`public inline bool `[`IsDisplayNamesSet`](#structFRHAPI__LookupResults_1a4ac729c8504e70ea52c4b63ab96dd07a)`() const` | Checks whether DisplayNames_Optional has been set.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1afa6fe6d1a79d4bca6479c8cb3aa5f20e)`()` | Gets the value of IdentityPlatforms_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1adf7979d3ac74a8f1f868e84171e2e261)`() const` | Gets the value of IdentityPlatforms_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1ac44c4a38cd91bbb08837e069848bb05f)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & DefaultValue) const` | Gets the value of IdentityPlatforms_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1afa9f1301c5ca56025bc06ae10fbbf1ca)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & OutValue) const` | Fills OutValue with the value of IdentityPlatforms_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1add250a65391adf40bcc1999862efb40c)`()` | Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1ab2cc4d77a29af5b0eddece84b0e0a25e)`() const` | Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1afa9559e623eef2fa6efab807b392b7d4)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & NewValue)` | Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true.
`public inline void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1a694f57c7241353ca439f5c35427a11a9)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > && NewValue)` | Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true using move semantics.
`public inline void `[`ClearIdentityPlatforms`](#structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed)`()` | Clears the value of IdentityPlatforms_Optional and sets IdentityPlatforms_IsSet to false.
`public inline bool `[`IsIdentityPlatformsSet`](#structFRHAPI__LookupResults_1a95e4e4c2f111309f088fc65c7d7ebc54)`() const` | Checks whether IdentityPlatforms_Optional has been set.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a825c2792af3a140d816cef9c0c71cb34)`()` | Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1aed887674a0ea0090de41055667bcd3ad)`() const` | Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a2046146e2cb77b00f579c05f002a1b24)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & DefaultValue) const` | Gets the value of IdentityPlatformsByPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1afc85d265d2af370f67c209429d0c8c8d)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & OutValue) const` | Fills OutValue with the value of IdentityPlatformsByPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a0f17178fc5b806e62330d4ec1417c9d3)`()` | Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1ae1ebd9d03d136cfed744a9fad68aad67)`() const` | Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a53368bb2b02ae151ba589b034b244618)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & NewValue)` | Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true.
`public inline void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ad7df0abfc662df1fa567a4787386022c)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > && NewValue)` | Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true using move semantics.
`public inline void `[`ClearIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929)`()` | Clears the value of IdentityPlatformsByPlatform_Optional and sets IdentityPlatformsByPlatform_IsSet to false.
`public inline bool `[`IsIdentityPlatformsByPlatformSet`](#structFRHAPI__LookupResults_1a4e8239214d15bf897605af8020056420)`() const` | Checks whether IdentityPlatformsByPlatform_Optional has been set.

### Members

#### `public TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > `[`DisplayNames_Optional`](#structFRHAPI__LookupResults_1a2792e7ea1c67e9bc83be3cc6f8d8f160) <a id="structFRHAPI__LookupResults_1a2792e7ea1c67e9bc83be3cc6f8d8f160"></a>

List of display names and the players that match that display name.

#### `public bool `[`DisplayNames_IsSet`](#structFRHAPI__LookupResults_1a2dd1caa9fe26b2aaa70966f118305219) <a id="structFRHAPI__LookupResults_1a2dd1caa9fe26b2aaa70966f118305219"></a>

true if DisplayNames_Optional has been set to a value

#### `public TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > `[`IdentityPlatforms_Optional`](#structFRHAPI__LookupResults_1a9b38e82b534a20dd79def5df5af49cec) <a id="structFRHAPI__LookupResults_1a9b38e82b534a20dd79def5df5af49cec"></a>

*DEPRECATED* Use `identity_platforms_by_platform` instead. List of platforms and the players that match that platform user id

#### `public bool `[`IdentityPlatforms_IsSet`](#structFRHAPI__LookupResults_1a7916bca0eb141f565ec7062291c9d8d1) <a id="structFRHAPI__LookupResults_1a7916bca0eb141f565ec7062291c9d8d1"></a>

true if IdentityPlatforms_Optional has been set to a value

#### `public TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > `[`IdentityPlatformsByPlatform_Optional`](#structFRHAPI__LookupResults_1a3c33f2087e0f5524231bdf41ad7b1627) <a id="structFRHAPI__LookupResults_1a3c33f2087e0f5524231bdf41ad7b1627"></a>

List of platforms and the players that match that platform user id.

#### `public bool `[`IdentityPlatformsByPlatform_IsSet`](#structFRHAPI__LookupResults_1a52b71e32ef449b8d56b700674005b0ce) <a id="structFRHAPI__LookupResults_1a52b71e32ef449b8d56b700674005b0ce"></a>

true if IdentityPlatformsByPlatform_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__LookupResults_1a573ce7d34618aaff348fe3cb2da786fc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LookupResults_1a573ce7d34618aaff348fe3cb2da786fc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LookupResults_1a6dca43717784d3e523d85604c7513b74)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LookupResults_1a6dca43717784d3e523d85604c7513b74"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1af13fa855b55426dd0b098accec9c0f50)`()` <a id="structFRHAPI__LookupResults_1af13fa855b55426dd0b098accec9c0f50"></a>

Gets the value of DisplayNames_Optional, regardless of it having been set.

#### `public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a24ed9966f95447b707977f8b48bf0042)`() const` <a id="structFRHAPI__LookupResults_1a24ed9966f95447b707977f8b48bf0042"></a>

Gets the value of DisplayNames_Optional, regardless of it having been set.

#### `public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a5b0afb496c30de72c755acfc7eda7719)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & DefaultValue) const` <a id="structFRHAPI__LookupResults_1a5b0afb496c30de72c755acfc7eda7719"></a>

Gets the value of DisplayNames_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDisplayNames`](#structFRHAPI__LookupResults_1ad198b3a55ea75ff5faac138c5d2a1b62)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & OutValue) const` <a id="structFRHAPI__LookupResults_1ad198b3a55ea75ff5faac138c5d2a1b62"></a>

Fills OutValue with the value of DisplayNames_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1ab89ed4574274ce4654011ee1873f6bfb)`()` <a id="structFRHAPI__LookupResults_1ab89ed4574274ce4654011ee1873f6bfb"></a>

Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1ad74cafe4abd2961686d0dae0776b8c6e)`() const` <a id="structFRHAPI__LookupResults_1ad74cafe4abd2961686d0dae0776b8c6e"></a>

Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1a4c204c8cfc076473b98afd1a41c567f0)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & NewValue)` <a id="structFRHAPI__LookupResults_1a4c204c8cfc076473b98afd1a41c567f0"></a>

Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true.

#### `public inline void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1a9b86419bafdd29dfeb457ae275546e0e)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > && NewValue)` <a id="structFRHAPI__LookupResults_1a9b86419bafdd29dfeb457ae275546e0e"></a>

Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayNames`](#structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854)`()` <a id="structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854"></a>

Clears the value of DisplayNames_Optional and sets DisplayNames_IsSet to false.

#### `public inline bool `[`IsDisplayNamesSet`](#structFRHAPI__LookupResults_1a4ac729c8504e70ea52c4b63ab96dd07a)`() const` <a id="structFRHAPI__LookupResults_1a4ac729c8504e70ea52c4b63ab96dd07a"></a>

Checks whether DisplayNames_Optional has been set.

#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1afa6fe6d1a79d4bca6479c8cb3aa5f20e)`()` <a id="structFRHAPI__LookupResults_1afa6fe6d1a79d4bca6479c8cb3aa5f20e"></a>

Gets the value of IdentityPlatforms_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1adf7979d3ac74a8f1f868e84171e2e261)`() const` <a id="structFRHAPI__LookupResults_1adf7979d3ac74a8f1f868e84171e2e261"></a>

Gets the value of IdentityPlatforms_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1ac44c4a38cd91bbb08837e069848bb05f)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & DefaultValue) const` <a id="structFRHAPI__LookupResults_1ac44c4a38cd91bbb08837e069848bb05f"></a>

Gets the value of IdentityPlatforms_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1afa9f1301c5ca56025bc06ae10fbbf1ca)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & OutValue) const` <a id="structFRHAPI__LookupResults_1afa9f1301c5ca56025bc06ae10fbbf1ca"></a>

Fills OutValue with the value of IdentityPlatforms_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1add250a65391adf40bcc1999862efb40c)`()` <a id="structFRHAPI__LookupResults_1add250a65391adf40bcc1999862efb40c"></a>

Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1ab2cc4d77a29af5b0eddece84b0e0a25e)`() const` <a id="structFRHAPI__LookupResults_1ab2cc4d77a29af5b0eddece84b0e0a25e"></a>

Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1afa9559e623eef2fa6efab807b392b7d4)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & NewValue)` <a id="structFRHAPI__LookupResults_1afa9559e623eef2fa6efab807b392b7d4"></a>

Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true.

#### `public inline void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1a694f57c7241353ca439f5c35427a11a9)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > && NewValue)` <a id="structFRHAPI__LookupResults_1a694f57c7241353ca439f5c35427a11a9"></a>

Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true using move semantics.

#### `public inline void `[`ClearIdentityPlatforms`](#structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed)`()` <a id="structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed"></a>

Clears the value of IdentityPlatforms_Optional and sets IdentityPlatforms_IsSet to false.

#### `public inline bool `[`IsIdentityPlatformsSet`](#structFRHAPI__LookupResults_1a95e4e4c2f111309f088fc65c7d7ebc54)`() const` <a id="structFRHAPI__LookupResults_1a95e4e4c2f111309f088fc65c7d7ebc54"></a>

Checks whether IdentityPlatforms_Optional has been set.

#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a825c2792af3a140d816cef9c0c71cb34)`()` <a id="structFRHAPI__LookupResults_1a825c2792af3a140d816cef9c0c71cb34"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1aed887674a0ea0090de41055667bcd3ad)`() const` <a id="structFRHAPI__LookupResults_1aed887674a0ea0090de41055667bcd3ad"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a2046146e2cb77b00f579c05f002a1b24)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & DefaultValue) const` <a id="structFRHAPI__LookupResults_1a2046146e2cb77b00f579c05f002a1b24"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1afc85d265d2af370f67c209429d0c8c8d)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & OutValue) const` <a id="structFRHAPI__LookupResults_1afc85d265d2af370f67c209429d0c8c8d"></a>

Fills OutValue with the value of IdentityPlatformsByPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a0f17178fc5b806e62330d4ec1417c9d3)`()` <a id="structFRHAPI__LookupResults_1a0f17178fc5b806e62330d4ec1417c9d3"></a>

Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1ae1ebd9d03d136cfed744a9fad68aad67)`() const` <a id="structFRHAPI__LookupResults_1ae1ebd9d03d136cfed744a9fad68aad67"></a>

Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a53368bb2b02ae151ba589b034b244618)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & NewValue)` <a id="structFRHAPI__LookupResults_1a53368bb2b02ae151ba589b034b244618"></a>

Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true.

#### `public inline void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ad7df0abfc662df1fa567a4787386022c)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > && NewValue)` <a id="structFRHAPI__LookupResults_1ad7df0abfc662df1fa567a4787386022c"></a>

Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929)`()` <a id="structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929"></a>

Clears the value of IdentityPlatformsByPlatform_Optional and sets IdentityPlatformsByPlatform_IsSet to false.

#### `public inline bool `[`IsIdentityPlatformsByPlatformSet`](#structFRHAPI__LookupResults_1a4e8239214d15bf897605af8020056420)`() const` <a id="structFRHAPI__LookupResults_1a4e8239214d15bf897605af8020056420"></a>

Checks whether IdentityPlatformsByPlatform_Optional has been set.

