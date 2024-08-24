# group `RHAPI_LookupResults` <a id="group__RHAPI__LookupResults"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LookupResults`](#structFRHAPI__LookupResults) | Lookup results for a player query.

---
title: FRHAPI_LookupResults
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__LookupResults_1a381e4e759ab4edb45ae320b13c65e768)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a147b3e25f8345fd9705b72080132cbcc)`()` | Gets the value of DisplayNames_Optional, regardless of it having been set.
`public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a127df10f92296e00e545fb610d54a976)`() const` | Gets the value of DisplayNames_Optional, regardless of it having been set.
`public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1abb89998ff9dbf27792d210b427e777f7)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> & DefaultValue) const` | Gets the value of DisplayNames_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a837bb8420ea712949908e7eebfeede65)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> & OutValue) const` | Fills OutValue with the value of DisplayNames_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1a16c6face42908516dbde7bb33af14ad4)`()` | Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1a96610b089e26e13d568b575368dfe737)`() const` | Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1a77168fc0a12a9cb0a49ba43c51c4064c)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> & NewValue)` | Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true.
`public inline void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1a317e2cd82ab8e820bd8c1eed16673f74)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> && NewValue)` | Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true using move semantics.
`public inline void `[`ClearDisplayNames`](#structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854)`()` | Clears the value of DisplayNames_Optional and sets DisplayNames_IsSet to false.
`public inline bool `[`IsDisplayNamesSet`](#structFRHAPI__LookupResults_1a4ac729c8504e70ea52c4b63ab96dd07a)`() const` | Checks whether DisplayNames_Optional has been set.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a692d445f337bba6baf76f8aedfe3a290)`()` | Gets the value of IdentityPlatforms_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a83b50f1fa62f967258d9b6dfaffc84eb)`() const` | Gets the value of IdentityPlatforms_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a584052e88b95321abc48547891d01ef8)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & DefaultValue) const` | Gets the value of IdentityPlatforms_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1add656e8cc4e8a8f7d8e8db602f9e35d6)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & OutValue) const` | Fills OutValue with the value of IdentityPlatforms_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1ae670b2adf832a4afd8cc9859dcff7a10)`()` | Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1a57078bff20eb941ced0a180b744fa94a)`() const` | Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1abc6fb5105e221619e1f7ee56616588c6)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & NewValue)` | Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true.
`public inline void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1a28845552d59b4934ac92a7dc9a6cb3e7)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> && NewValue)` | Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true using move semantics.
`public inline void `[`ClearIdentityPlatforms`](#structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed)`()` | Clears the value of IdentityPlatforms_Optional and sets IdentityPlatforms_IsSet to false.
`public inline bool `[`IsIdentityPlatformsSet`](#structFRHAPI__LookupResults_1a95e4e4c2f111309f088fc65c7d7ebc54)`() const` | Checks whether IdentityPlatforms_Optional has been set.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a2daecfd02a8952b011172997eb28bce4)`()` | Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ada78797f64d870728f6cb9348271d85b)`() const` | Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a8aa734579893de72d37efef7ef0e7897)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & DefaultValue) const` | Gets the value of IdentityPlatformsByPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1abf4538232a31004a9c984f0f7e643f45)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & OutValue) const` | Fills OutValue with the value of IdentityPlatformsByPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a22a3e2b00f5c8f1c831d34830a812b9b)`()` | Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a5d41c4ace1c4c955a0555ced609d4797)`() const` | Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ac52e9413420a4650483690a8ba26223c)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & NewValue)` | Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true.
`public inline void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ad3c43d842667c8c32db7085c285ebd9f)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> && NewValue)` | Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true using move semantics.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__LookupResults_1a381e4e759ab4edb45ae320b13c65e768)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LookupResults_1a381e4e759ab4edb45ae320b13c65e768"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a147b3e25f8345fd9705b72080132cbcc)`()` <a id="structFRHAPI__LookupResults_1a147b3e25f8345fd9705b72080132cbcc"></a>

Gets the value of DisplayNames_Optional, regardless of it having been set.

#### `public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a127df10f92296e00e545fb610d54a976)`() const` <a id="structFRHAPI__LookupResults_1a127df10f92296e00e545fb610d54a976"></a>

Gets the value of DisplayNames_Optional, regardless of it having been set.

#### `public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1abb89998ff9dbf27792d210b427e777f7)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> & DefaultValue) const` <a id="structFRHAPI__LookupResults_1abb89998ff9dbf27792d210b427e777f7"></a>

Gets the value of DisplayNames_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a837bb8420ea712949908e7eebfeede65)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> & OutValue) const` <a id="structFRHAPI__LookupResults_1a837bb8420ea712949908e7eebfeede65"></a>

Fills OutValue with the value of DisplayNames_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1a16c6face42908516dbde7bb33af14ad4)`()` <a id="structFRHAPI__LookupResults_1a16c6face42908516dbde7bb33af14ad4"></a>

Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1a96610b089e26e13d568b575368dfe737)`() const` <a id="structFRHAPI__LookupResults_1a96610b089e26e13d568b575368dfe737"></a>

Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1a77168fc0a12a9cb0a49ba43c51c4064c)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> & NewValue)` <a id="structFRHAPI__LookupResults_1a77168fc0a12a9cb0a49ba43c51c4064c"></a>

Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true.

#### `public inline void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1a317e2cd82ab8e820bd8c1eed16673f74)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> && NewValue)` <a id="structFRHAPI__LookupResults_1a317e2cd82ab8e820bd8c1eed16673f74"></a>

Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayNames`](#structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854)`()` <a id="structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854"></a>

Clears the value of DisplayNames_Optional and sets DisplayNames_IsSet to false.

#### `public inline bool `[`IsDisplayNamesSet`](#structFRHAPI__LookupResults_1a4ac729c8504e70ea52c4b63ab96dd07a)`() const` <a id="structFRHAPI__LookupResults_1a4ac729c8504e70ea52c4b63ab96dd07a"></a>

Checks whether DisplayNames_Optional has been set.

#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a692d445f337bba6baf76f8aedfe3a290)`()` <a id="structFRHAPI__LookupResults_1a692d445f337bba6baf76f8aedfe3a290"></a>

Gets the value of IdentityPlatforms_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a83b50f1fa62f967258d9b6dfaffc84eb)`() const` <a id="structFRHAPI__LookupResults_1a83b50f1fa62f967258d9b6dfaffc84eb"></a>

Gets the value of IdentityPlatforms_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a584052e88b95321abc48547891d01ef8)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & DefaultValue) const` <a id="structFRHAPI__LookupResults_1a584052e88b95321abc48547891d01ef8"></a>

Gets the value of IdentityPlatforms_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1add656e8cc4e8a8f7d8e8db602f9e35d6)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & OutValue) const` <a id="structFRHAPI__LookupResults_1add656e8cc4e8a8f7d8e8db602f9e35d6"></a>

Fills OutValue with the value of IdentityPlatforms_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1ae670b2adf832a4afd8cc9859dcff7a10)`()` <a id="structFRHAPI__LookupResults_1ae670b2adf832a4afd8cc9859dcff7a10"></a>

Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1a57078bff20eb941ced0a180b744fa94a)`() const` <a id="structFRHAPI__LookupResults_1a57078bff20eb941ced0a180b744fa94a"></a>

Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1abc6fb5105e221619e1f7ee56616588c6)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & NewValue)` <a id="structFRHAPI__LookupResults_1abc6fb5105e221619e1f7ee56616588c6"></a>

Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true.

#### `public inline void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1a28845552d59b4934ac92a7dc9a6cb3e7)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> && NewValue)` <a id="structFRHAPI__LookupResults_1a28845552d59b4934ac92a7dc9a6cb3e7"></a>

Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true using move semantics.

#### `public inline void `[`ClearIdentityPlatforms`](#structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed)`()` <a id="structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed"></a>

Clears the value of IdentityPlatforms_Optional and sets IdentityPlatforms_IsSet to false.

#### `public inline bool `[`IsIdentityPlatformsSet`](#structFRHAPI__LookupResults_1a95e4e4c2f111309f088fc65c7d7ebc54)`() const` <a id="structFRHAPI__LookupResults_1a95e4e4c2f111309f088fc65c7d7ebc54"></a>

Checks whether IdentityPlatforms_Optional has been set.

#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a2daecfd02a8952b011172997eb28bce4)`()` <a id="structFRHAPI__LookupResults_1a2daecfd02a8952b011172997eb28bce4"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ada78797f64d870728f6cb9348271d85b)`() const` <a id="structFRHAPI__LookupResults_1ada78797f64d870728f6cb9348271d85b"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a8aa734579893de72d37efef7ef0e7897)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & DefaultValue) const` <a id="structFRHAPI__LookupResults_1a8aa734579893de72d37efef7ef0e7897"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1abf4538232a31004a9c984f0f7e643f45)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & OutValue) const` <a id="structFRHAPI__LookupResults_1abf4538232a31004a9c984f0f7e643f45"></a>

Fills OutValue with the value of IdentityPlatformsByPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a22a3e2b00f5c8f1c831d34830a812b9b)`()` <a id="structFRHAPI__LookupResults_1a22a3e2b00f5c8f1c831d34830a812b9b"></a>

Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a5d41c4ace1c4c955a0555ced609d4797)`() const` <a id="structFRHAPI__LookupResults_1a5d41c4ace1c4c955a0555ced609d4797"></a>

Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ac52e9413420a4650483690a8ba26223c)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & NewValue)` <a id="structFRHAPI__LookupResults_1ac52e9413420a4650483690a8ba26223c"></a>

Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true.

#### `public inline void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ad3c43d842667c8c32db7085c285ebd9f)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> && NewValue)` <a id="structFRHAPI__LookupResults_1ad3c43d842667c8c32db7085c285ebd9f"></a>

Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929)`()` <a id="structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929"></a>

Clears the value of IdentityPlatformsByPlatform_Optional and sets IdentityPlatformsByPlatform_IsSet to false.

#### `public inline bool `[`IsIdentityPlatformsByPlatformSet`](#structFRHAPI__LookupResults_1a4e8239214d15bf897605af8020056420)`() const` <a id="structFRHAPI__LookupResults_1a4e8239214d15bf897605af8020056420"></a>

Checks whether IdentityPlatformsByPlatform_Optional has been set.

