# RHAPI_LookupResults <a id="group__RHAPI__LookupResults"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LookupResults`](#structFRHAPI__LookupResults) | 

## struct `FRHAPI_LookupResults` <a id="structFRHAPI__LookupResults"></a>

```
struct FRHAPI_LookupResults
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > `[`DisplayNames_Optional`](#structFRHAPI__LookupResults_1a2792e7ea1c67e9bc83be3cc6f8d8f160) | 
`public bool `[`DisplayNames_IsSet`](#structFRHAPI__LookupResults_1a2dd1caa9fe26b2aaa70966f118305219) | true if DisplayNames_Optional has been set to a value
`public TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > `[`IdentityPlatforms_Optional`](#structFRHAPI__LookupResults_1a9b38e82b534a20dd79def5df5af49cec) | 
`public bool `[`IdentityPlatforms_IsSet`](#structFRHAPI__LookupResults_1a7916bca0eb141f565ec7062291c9d8d1) | true if IdentityPlatforms_Optional has been set to a value
`public TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > `[`IdentityPlatformsByPlatform_Optional`](#structFRHAPI__LookupResults_1a3c33f2087e0f5524231bdf41ad7b1627) | 
`public bool `[`IdentityPlatformsByPlatform_IsSet`](#structFRHAPI__LookupResults_1a52b71e32ef449b8d56b700674005b0ce) | true if IdentityPlatformsByPlatform_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LookupResults_1acd0574081cdfebd31f70443f17a3977c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LookupResults_1aeb52b89da73d14f90f831f2cf343f66e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a147b3e25f8345fd9705b72080132cbcc)`()` | Gets the value of DisplayNames_Optional, regardless of it having been set.
`public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a127df10f92296e00e545fb610d54a976)`() const` | Gets the value of DisplayNames_Optional, regardless of it having been set.
`public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1abb89998ff9dbf27792d210b427e777f7)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> & DefaultValue) const` | Gets the value of DisplayNames_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a837bb8420ea712949908e7eebfeede65)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> & OutValue) const` | Fills OutValue with the value of DisplayNames_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1a16c6face42908516dbde7bb33af14ad4)`()` | Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1a96610b089e26e13d568b575368dfe737)`() const` | Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1a6460bc29bfc3ccd660283462e60e1099)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> NewValue)` | Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true.
`public inline void `[`ClearDisplayNames`](#structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854)`()` | Clears the value of DisplayNames_Optional and sets DisplayNames_IsSet to false.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a692d445f337bba6baf76f8aedfe3a290)`()` | Gets the value of IdentityPlatforms_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a83b50f1fa62f967258d9b6dfaffc84eb)`() const` | Gets the value of IdentityPlatforms_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a584052e88b95321abc48547891d01ef8)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & DefaultValue) const` | Gets the value of IdentityPlatforms_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1add656e8cc4e8a8f7d8e8db602f9e35d6)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & OutValue) const` | Fills OutValue with the value of IdentityPlatforms_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1ae670b2adf832a4afd8cc9859dcff7a10)`()` | Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1a57078bff20eb941ced0a180b744fa94a)`() const` | Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1a78f1e8592bfe33c0fff3d9f282a8cb31)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> NewValue)` | Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true.
`public inline void `[`ClearIdentityPlatforms`](#structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed)`()` | Clears the value of IdentityPlatforms_Optional and sets IdentityPlatforms_IsSet to false.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a2daecfd02a8952b011172997eb28bce4)`()` | Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ada78797f64d870728f6cb9348271d85b)`() const` | Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a8aa734579893de72d37efef7ef0e7897)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & DefaultValue) const` | Gets the value of IdentityPlatformsByPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1abf4538232a31004a9c984f0f7e643f45)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & OutValue) const` | Fills OutValue with the value of IdentityPlatformsByPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a22a3e2b00f5c8f1c831d34830a812b9b)`()` | Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a5d41c4ace1c4c955a0555ced609d4797)`() const` | Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a2640d5921ef0f91c9ef47f263c247236)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> NewValue)` | Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true.
`public inline void `[`ClearIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929)`()` | Clears the value of IdentityPlatformsByPlatform_Optional and sets IdentityPlatformsByPlatform_IsSet to false.

#### Members

#### `public TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > `[`DisplayNames_Optional`](#structFRHAPI__LookupResults_1a2792e7ea1c67e9bc83be3cc6f8d8f160) <a id="structFRHAPI__LookupResults_1a2792e7ea1c67e9bc83be3cc6f8d8f160"></a>

<br>
#### `public bool `[`DisplayNames_IsSet`](#structFRHAPI__LookupResults_1a2dd1caa9fe26b2aaa70966f118305219) <a id="structFRHAPI__LookupResults_1a2dd1caa9fe26b2aaa70966f118305219"></a>

true if DisplayNames_Optional has been set to a value

<br>
#### `public TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > `[`IdentityPlatforms_Optional`](#structFRHAPI__LookupResults_1a9b38e82b534a20dd79def5df5af49cec) <a id="structFRHAPI__LookupResults_1a9b38e82b534a20dd79def5df5af49cec"></a>

<br>
#### `public bool `[`IdentityPlatforms_IsSet`](#structFRHAPI__LookupResults_1a7916bca0eb141f565ec7062291c9d8d1) <a id="structFRHAPI__LookupResults_1a7916bca0eb141f565ec7062291c9d8d1"></a>

true if IdentityPlatforms_Optional has been set to a value

<br>
#### `public TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > `[`IdentityPlatformsByPlatform_Optional`](#structFRHAPI__LookupResults_1a3c33f2087e0f5524231bdf41ad7b1627) <a id="structFRHAPI__LookupResults_1a3c33f2087e0f5524231bdf41ad7b1627"></a>

<br>
#### `public bool `[`IdentityPlatformsByPlatform_IsSet`](#structFRHAPI__LookupResults_1a52b71e32ef449b8d56b700674005b0ce) <a id="structFRHAPI__LookupResults_1a52b71e32ef449b8d56b700674005b0ce"></a>

true if IdentityPlatformsByPlatform_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__LookupResults_1acd0574081cdfebd31f70443f17a3977c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LookupResults_1acd0574081cdfebd31f70443f17a3977c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__LookupResults_1aeb52b89da73d14f90f831f2cf343f66e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LookupResults_1aeb52b89da73d14f90f831f2cf343f66e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a147b3e25f8345fd9705b72080132cbcc)`()` <a id="structFRHAPI__LookupResults_1a147b3e25f8345fd9705b72080132cbcc"></a>

Gets the value of DisplayNames_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a127df10f92296e00e545fb610d54a976)`() const` <a id="structFRHAPI__LookupResults_1a127df10f92296e00e545fb610d54a976"></a>

Gets the value of DisplayNames_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > & `[`GetDisplayNames`](#structFRHAPI__LookupResults_1abb89998ff9dbf27792d210b427e777f7)`(const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> & DefaultValue) const` <a id="structFRHAPI__LookupResults_1abb89998ff9dbf27792d210b427e777f7"></a>

Gets the value of DisplayNames_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDisplayNames`](#structFRHAPI__LookupResults_1a837bb8420ea712949908e7eebfeede65)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> & OutValue) const` <a id="structFRHAPI__LookupResults_1a837bb8420ea712949908e7eebfeede65"></a>

Fills OutValue with the value of DisplayNames_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1a16c6face42908516dbde7bb33af14ad4)`()` <a id="structFRHAPI__LookupResults_1a16c6face42908516dbde7bb33af14ad4"></a>

Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > > > * `[`GetDisplayNamesOrNull`](#structFRHAPI__LookupResults_1a96610b089e26e13d568b575368dfe737)`() const` <a id="structFRHAPI__LookupResults_1a96610b089e26e13d568b575368dfe737"></a>

Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDisplayNames`](#structFRHAPI__LookupResults_1a6460bc29bfc3ccd660283462e60e1099)`(TArray< TMap< FString, TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` >>> NewValue)` <a id="structFRHAPI__LookupResults_1a6460bc29bfc3ccd660283462e60e1099"></a>

Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true.

<br>
#### `public inline void `[`ClearDisplayNames`](#structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854)`()` <a id="structFRHAPI__LookupResults_1aeec72e245eb415cb70601a086fe7c854"></a>

Clears the value of DisplayNames_Optional and sets DisplayNames_IsSet to false.

<br>
#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a692d445f337bba6baf76f8aedfe3a290)`()` <a id="structFRHAPI__LookupResults_1a692d445f337bba6baf76f8aedfe3a290"></a>

Gets the value of IdentityPlatforms_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a83b50f1fa62f967258d9b6dfaffc84eb)`() const` <a id="structFRHAPI__LookupResults_1a83b50f1fa62f967258d9b6dfaffc84eb"></a>

Gets the value of IdentityPlatforms_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1a584052e88b95321abc48547891d01ef8)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & DefaultValue) const` <a id="structFRHAPI__LookupResults_1a584052e88b95321abc48547891d01ef8"></a>

Gets the value of IdentityPlatforms_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetIdentityPlatforms`](#structFRHAPI__LookupResults_1add656e8cc4e8a8f7d8e8db602f9e35d6)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & OutValue) const` <a id="structFRHAPI__LookupResults_1add656e8cc4e8a8f7d8e8db602f9e35d6"></a>

Fills OutValue with the value of IdentityPlatforms_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1ae670b2adf832a4afd8cc9859dcff7a10)`()` <a id="structFRHAPI__LookupResults_1ae670b2adf832a4afd8cc9859dcff7a10"></a>

Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsOrNull`](#structFRHAPI__LookupResults_1a57078bff20eb941ced0a180b744fa94a)`() const` <a id="structFRHAPI__LookupResults_1a57078bff20eb941ced0a180b744fa94a"></a>

Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetIdentityPlatforms`](#structFRHAPI__LookupResults_1a78f1e8592bfe33c0fff3d9f282a8cb31)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> NewValue)` <a id="structFRHAPI__LookupResults_1a78f1e8592bfe33c0fff3d9f282a8cb31"></a>

Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true.

<br>
#### `public inline void `[`ClearIdentityPlatforms`](#structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed)`()` <a id="structFRHAPI__LookupResults_1af11a22a343f43d035ceb4bc0e48ae3ed"></a>

Clears the value of IdentityPlatforms_Optional and sets IdentityPlatforms_IsSet to false.

<br>
#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a2daecfd02a8952b011172997eb28bce4)`()` <a id="structFRHAPI__LookupResults_1a2daecfd02a8952b011172997eb28bce4"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1ada78797f64d870728f6cb9348271d85b)`() const` <a id="structFRHAPI__LookupResults_1ada78797f64d870728f6cb9348271d85b"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > & `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a8aa734579893de72d37efef7ef0e7897)`(const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & DefaultValue) const` <a id="structFRHAPI__LookupResults_1a8aa734579893de72d37efef7ef0e7897"></a>

Gets the value of IdentityPlatformsByPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1abf4538232a31004a9c984f0f7e643f45)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> & OutValue) const` <a id="structFRHAPI__LookupResults_1abf4538232a31004a9c984f0f7e643f45"></a>

Fills OutValue with the value of IdentityPlatformsByPlatform_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a22a3e2b00f5c8f1c831d34830a812b9b)`()` <a id="structFRHAPI__LookupResults_1a22a3e2b00f5c8f1c831d34830a812b9b"></a>

Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` > > * `[`GetIdentityPlatformsByPlatformOrNull`](#structFRHAPI__LookupResults_1a5d41c4ace1c4c955a0555ced609d4797)`() const` <a id="structFRHAPI__LookupResults_1a5d41c4ace1c4c955a0555ced609d4797"></a>

Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a2640d5921ef0f91c9ef47f263c247236)`(TMap< FString, TArray< `[`FRHAPI_PlatformIdentityLookupResults`](RHAPI_PlatformIdentityLookupResults.md#structFRHAPI__PlatformIdentityLookupResults)` >> NewValue)` <a id="structFRHAPI__LookupResults_1a2640d5921ef0f91c9ef47f263c247236"></a>

Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true.

<br>
#### `public inline void `[`ClearIdentityPlatformsByPlatform`](#structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929)`()` <a id="structFRHAPI__LookupResults_1a519fd549d39056274491c78a5a4bb929"></a>

Clears the value of IdentityPlatformsByPlatform_Optional and sets IdentityPlatformsByPlatform_IsSet to false.

<br>
