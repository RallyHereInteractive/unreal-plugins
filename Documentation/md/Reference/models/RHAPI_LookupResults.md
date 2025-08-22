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
`public inline FORCEINLINE TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a078cf2c9f0c8e8842f8c569fad6ca7a6)`()` | Gets the value of DisplayNames_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a3e121292a4c7c4d374ca9e11297c2834)`() const` | Gets the value of DisplayNames_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a8fac4968dd4de0d266d65ca263414dd3)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & DefaultValue) const` | Gets the value of DisplayNames_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDisplayNames`](#structFRHAPI__LookupResults_1aed933120c42bd5b141f1855de1b9aa28)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & OutValue) const` | Fills OutValue with the value of DisplayNames_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1ad940627ffefeb2b94374cce974c30f3d)`()` | Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1ad1d8da82d89a1907d1bbf8ce88fb3628)`() const` | Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1aece09ad5b9e89b8a0f2b9f8389216ddf)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & NewValue)` | Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true.
`public inline FORCEINLINE void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1aea1c376678f21dfbc3c901ec1d7ef944)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > && NewValue)` | Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true using move semantics.
`public inline void `[`ClearDisplayNames`](#structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854)`()` | Clears the value of DisplayNames_Optional and sets DisplayNames_IsSet to false.
`public inline FORCEINLINE TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a4f0558203c4186b41aa5f32a86b1653b)`()` | Gets the value of IdentityPlatforms_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a0fb0329e8eef341354179829b82d50a5)`() const` | Gets the value of IdentityPlatforms_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1ac945160d3f4526ee0600b7ea97f00eda)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & DefaultValue) const` | Gets the value of IdentityPlatforms_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a2a5ce676499638864dfde3d2526adac2)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & OutValue) const` | Fills OutValue with the value of IdentityPlatforms_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1acc65e81c1714e29e1f2ce1e737a3a8cb)`()` | Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1a7ad4d44b604076cf776a75884af95fc0)`() const` | Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1add9e6026407004a0effbe2ff3f108bca)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & NewValue)` | Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true.
`public inline FORCEINLINE void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1ad04344e8f45a87e82285edb27e810f01)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > && NewValue)` | Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true using move semantics.
`public inline void `[`ClearIdentityPlatforms`](#structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed)`()` | Clears the value of IdentityPlatforms_Optional and sets IdentityPlatforms_IsSet to false.
`public inline FORCEINLINE TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a807cfb1d500a916f4ec72e5698506bcf)`()` | Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a4e71ac99c49fa80d862ec89445db458b)`() const` | Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ad23e597bfdf2e27476d5a7a71e1d8518)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & DefaultValue) const` | Gets the value of IdentityPlatformsByPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a66bcc63eaf13d0f46415e30f10d1e504)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & OutValue) const` | Fills OutValue with the value of IdentityPlatformsByPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a6be317afef0aed141a0d64d9555db4ff)`()` | Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a01e04f4cb6d7f10fee146cdc402c16ad)`() const` | Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a941fe2d3d193fdfaf9e944d090dd1838)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & NewValue)` | Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true.
`public inline FORCEINLINE void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a301c47aeddf097c352d3b7d53b387262)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > && NewValue)` | Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true using move semantics.
`public inline void `[`ClearIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929)`()` | Clears the value of IdentityPlatformsByPlatform_Optional and sets IdentityPlatformsByPlatform_IsSet to false.

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

#### `public inline FORCEINLINE TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a078cf2c9f0c8e8842f8c569fad6ca7a6)`()` <a id="structFRHAPI__LookupResults_1a078cf2c9f0c8e8842f8c569fad6ca7a6"></a>

Gets the value of DisplayNames_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a3e121292a4c7c4d374ca9e11297c2834)`() const` <a id="structFRHAPI__LookupResults_1a3e121292a4c7c4d374ca9e11297c2834"></a>

Gets the value of DisplayNames_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a8fac4968dd4de0d266d65ca263414dd3)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & DefaultValue) const` <a id="structFRHAPI__LookupResults_1a8fac4968dd4de0d266d65ca263414dd3"></a>

Gets the value of DisplayNames_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDisplayNames`](#structFRHAPI__LookupResults_1aed933120c42bd5b141f1855de1b9aa28)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & OutValue) const` <a id="structFRHAPI__LookupResults_1aed933120c42bd5b141f1855de1b9aa28"></a>

Fills OutValue with the value of DisplayNames_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1ad940627ffefeb2b94374cce974c30f3d)`()` <a id="structFRHAPI__LookupResults_1ad940627ffefeb2b94374cce974c30f3d"></a>

Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1ad1d8da82d89a1907d1bbf8ce88fb3628)`() const` <a id="structFRHAPI__LookupResults_1ad1d8da82d89a1907d1bbf8ce88fb3628"></a>

Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1aece09ad5b9e89b8a0f2b9f8389216ddf)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & NewValue)` <a id="structFRHAPI__LookupResults_1aece09ad5b9e89b8a0f2b9f8389216ddf"></a>

Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1aea1c376678f21dfbc3c901ec1d7ef944)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > && NewValue)` <a id="structFRHAPI__LookupResults_1aea1c376678f21dfbc3c901ec1d7ef944"></a>

Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayNames`](#structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854)`()` <a id="structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854"></a>

Clears the value of DisplayNames_Optional and sets DisplayNames_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a4f0558203c4186b41aa5f32a86b1653b)`()` <a id="structFRHAPI__LookupResults_1a4f0558203c4186b41aa5f32a86b1653b"></a>

Gets the value of IdentityPlatforms_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a0fb0329e8eef341354179829b82d50a5)`() const` <a id="structFRHAPI__LookupResults_1a0fb0329e8eef341354179829b82d50a5"></a>

Gets the value of IdentityPlatforms_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1ac945160d3f4526ee0600b7ea97f00eda)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & DefaultValue) const` <a id="structFRHAPI__LookupResults_1ac945160d3f4526ee0600b7ea97f00eda"></a>

Gets the value of IdentityPlatforms_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a2a5ce676499638864dfde3d2526adac2)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & OutValue) const` <a id="structFRHAPI__LookupResults_1a2a5ce676499638864dfde3d2526adac2"></a>

Fills OutValue with the value of IdentityPlatforms_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1acc65e81c1714e29e1f2ce1e737a3a8cb)`()` <a id="structFRHAPI__LookupResults_1acc65e81c1714e29e1f2ce1e737a3a8cb"></a>

Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1a7ad4d44b604076cf776a75884af95fc0)`() const` <a id="structFRHAPI__LookupResults_1a7ad4d44b604076cf776a75884af95fc0"></a>

Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1add9e6026407004a0effbe2ff3f108bca)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & NewValue)` <a id="structFRHAPI__LookupResults_1add9e6026407004a0effbe2ff3f108bca"></a>

Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1ad04344e8f45a87e82285edb27e810f01)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > && NewValue)` <a id="structFRHAPI__LookupResults_1ad04344e8f45a87e82285edb27e810f01"></a>

Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true using move semantics.

#### `public inline void `[`ClearIdentityPlatforms`](#structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed)`()` <a id="structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed"></a>

Clears the value of IdentityPlatforms_Optional and sets IdentityPlatforms_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a807cfb1d500a916f4ec72e5698506bcf)`()` <a id="structFRHAPI__LookupResults_1a807cfb1d500a916f4ec72e5698506bcf"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a4e71ac99c49fa80d862ec89445db458b)`() const` <a id="structFRHAPI__LookupResults_1a4e71ac99c49fa80d862ec89445db458b"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ad23e597bfdf2e27476d5a7a71e1d8518)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & DefaultValue) const` <a id="structFRHAPI__LookupResults_1ad23e597bfdf2e27476d5a7a71e1d8518"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a66bcc63eaf13d0f46415e30f10d1e504)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & OutValue) const` <a id="structFRHAPI__LookupResults_1a66bcc63eaf13d0f46415e30f10d1e504"></a>

Fills OutValue with the value of IdentityPlatformsByPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a6be317afef0aed141a0d64d9555db4ff)`()` <a id="structFRHAPI__LookupResults_1a6be317afef0aed141a0d64d9555db4ff"></a>

Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a01e04f4cb6d7f10fee146cdc402c16ad)`() const` <a id="structFRHAPI__LookupResults_1a01e04f4cb6d7f10fee146cdc402c16ad"></a>

Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a941fe2d3d193fdfaf9e944d090dd1838)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & NewValue)` <a id="structFRHAPI__LookupResults_1a941fe2d3d193fdfaf9e944d090dd1838"></a>

Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a301c47aeddf097c352d3b7d53b387262)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > && NewValue)` <a id="structFRHAPI__LookupResults_1a301c47aeddf097c352d3b7d53b387262"></a>

Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929)`()` <a id="structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929"></a>

Clears the value of IdentityPlatformsByPlatform_Optional and sets IdentityPlatformsByPlatform_IsSet to false.

