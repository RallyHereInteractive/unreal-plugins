---
title: RHAPI_JoinParams
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_JoinParams`](#structFRHAPI__JoinParams) | Parameters provided by the allocation system or an instance on how to connect.

## struct `FRHAPI_JoinParams` <a id="structFRHAPI__JoinParams"></a>

```
struct FRHAPI_JoinParams
  : public FRHAPI_Model
```

Parameters provided by the allocation system or an instance on how to connect.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`PublicConnStr`](#structFRHAPI__JoinParams_1ace1ac4405d1488da7611d0c6ee4dcc00) | Public connection string for instance.
`public FString `[`PrivateConnStr`](#structFRHAPI__JoinParams_1a9c469f021b97b98b3a193479771dd3a8) | Private connection string for instance.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__JoinParams_1aa1a3af1c48b41dc686ba9ac09ba84328) | Custom data to join a instance.
`public bool `[`CustomData_IsSet`](#structFRHAPI__JoinParams_1ad502760dd98a7e62abb7ec030f2c209f) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__JoinParams_1ad3621724eee0f43d0cebcc60d49b08dc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__JoinParams_1a774f72a84ffc95d6654d2ea28727f89e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetPublicConnStr`](#structFRHAPI__JoinParams_1a051a209b625f9769be83538660353857)`()` | Gets the value of PublicConnStr.
`public inline const FString & `[`GetPublicConnStr`](#structFRHAPI__JoinParams_1a53621f5bde57f8c9fea2d969d359adb3)`() const` | Gets the value of PublicConnStr.
`public inline void `[`SetPublicConnStr`](#structFRHAPI__JoinParams_1a58188052fcf7e77357f3c0d08e5e3321)`(const FString & NewValue)` | Sets the value of PublicConnStr.
`public inline void `[`SetPublicConnStr`](#structFRHAPI__JoinParams_1a896a18362ba3796b1f77d7e58a2aef15)`(FString && NewValue)` | Sets the value of PublicConnStr using move semantics.
`public inline FString & `[`GetPrivateConnStr`](#structFRHAPI__JoinParams_1a98fc341ed28b4134ec95ba27d38510c9)`()` | Gets the value of PrivateConnStr.
`public inline const FString & `[`GetPrivateConnStr`](#structFRHAPI__JoinParams_1ae34c2c69d70cbb9b6c17665922cdde3a)`() const` | Gets the value of PrivateConnStr.
`public inline void `[`SetPrivateConnStr`](#structFRHAPI__JoinParams_1a64d880def47b64744c2f20437b24abc6)`(const FString & NewValue)` | Sets the value of PrivateConnStr.
`public inline void `[`SetPrivateConnStr`](#structFRHAPI__JoinParams_1a4363e3a18bcf86315606c9349f0eacf6)`(FString && NewValue)` | Sets the value of PrivateConnStr using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1ad7191ebabbe7c157b1e62a813de50fc2)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1a09dc1a35203b8f2e4c2aa4b1dfdae576)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1a2d700d222c0a1be4a281e079c4755d35)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__JoinParams_1a24ccc3f4ff20cede248586da72d95514)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__JoinParams_1a327ebda820930355f5a7a080f8c8c0f6)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__JoinParams_1a78f8d07c0f6a058f488d5c24c5f635fa)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__JoinParams_1a6636bc8012fbb39f659d325d07c748dd)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__JoinParams_1aaf252e8d7923b668e36cf1e9b4351988)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__JoinParams_1acbe843cc9336e24b9b7ac3dbeac3bccb)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__JoinParams_1af1a2f7811ceb11e6e93c60c724855c4a)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public FString `[`PublicConnStr`](#structFRHAPI__JoinParams_1ace1ac4405d1488da7611d0c6ee4dcc00) <a id="structFRHAPI__JoinParams_1ace1ac4405d1488da7611d0c6ee4dcc00"></a>

Public connection string for instance.

#### `public FString `[`PrivateConnStr`](#structFRHAPI__JoinParams_1a9c469f021b97b98b3a193479771dd3a8) <a id="structFRHAPI__JoinParams_1a9c469f021b97b98b3a193479771dd3a8"></a>

Private connection string for instance.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__JoinParams_1aa1a3af1c48b41dc686ba9ac09ba84328) <a id="structFRHAPI__JoinParams_1aa1a3af1c48b41dc686ba9ac09ba84328"></a>

Custom data to join a instance.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__JoinParams_1ad502760dd98a7e62abb7ec030f2c209f) <a id="structFRHAPI__JoinParams_1ad502760dd98a7e62abb7ec030f2c209f"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__JoinParams_1ad3621724eee0f43d0cebcc60d49b08dc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__JoinParams_1ad3621724eee0f43d0cebcc60d49b08dc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__JoinParams_1a774f72a84ffc95d6654d2ea28727f89e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__JoinParams_1a774f72a84ffc95d6654d2ea28727f89e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetPublicConnStr`](#structFRHAPI__JoinParams_1a051a209b625f9769be83538660353857)`()` <a id="structFRHAPI__JoinParams_1a051a209b625f9769be83538660353857"></a>

Gets the value of PublicConnStr.

#### `public inline const FString & `[`GetPublicConnStr`](#structFRHAPI__JoinParams_1a53621f5bde57f8c9fea2d969d359adb3)`() const` <a id="structFRHAPI__JoinParams_1a53621f5bde57f8c9fea2d969d359adb3"></a>

Gets the value of PublicConnStr.

#### `public inline void `[`SetPublicConnStr`](#structFRHAPI__JoinParams_1a58188052fcf7e77357f3c0d08e5e3321)`(const FString & NewValue)` <a id="structFRHAPI__JoinParams_1a58188052fcf7e77357f3c0d08e5e3321"></a>

Sets the value of PublicConnStr.

#### `public inline void `[`SetPublicConnStr`](#structFRHAPI__JoinParams_1a896a18362ba3796b1f77d7e58a2aef15)`(FString && NewValue)` <a id="structFRHAPI__JoinParams_1a896a18362ba3796b1f77d7e58a2aef15"></a>

Sets the value of PublicConnStr using move semantics.

#### `public inline FString & `[`GetPrivateConnStr`](#structFRHAPI__JoinParams_1a98fc341ed28b4134ec95ba27d38510c9)`()` <a id="structFRHAPI__JoinParams_1a98fc341ed28b4134ec95ba27d38510c9"></a>

Gets the value of PrivateConnStr.

#### `public inline const FString & `[`GetPrivateConnStr`](#structFRHAPI__JoinParams_1ae34c2c69d70cbb9b6c17665922cdde3a)`() const` <a id="structFRHAPI__JoinParams_1ae34c2c69d70cbb9b6c17665922cdde3a"></a>

Gets the value of PrivateConnStr.

#### `public inline void `[`SetPrivateConnStr`](#structFRHAPI__JoinParams_1a64d880def47b64744c2f20437b24abc6)`(const FString & NewValue)` <a id="structFRHAPI__JoinParams_1a64d880def47b64744c2f20437b24abc6"></a>

Sets the value of PrivateConnStr.

#### `public inline void `[`SetPrivateConnStr`](#structFRHAPI__JoinParams_1a4363e3a18bcf86315606c9349f0eacf6)`(FString && NewValue)` <a id="structFRHAPI__JoinParams_1a4363e3a18bcf86315606c9349f0eacf6"></a>

Sets the value of PrivateConnStr using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1ad7191ebabbe7c157b1e62a813de50fc2)`()` <a id="structFRHAPI__JoinParams_1ad7191ebabbe7c157b1e62a813de50fc2"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1a09dc1a35203b8f2e4c2aa4b1dfdae576)`() const` <a id="structFRHAPI__JoinParams_1a09dc1a35203b8f2e4c2aa4b1dfdae576"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__JoinParams_1a2d700d222c0a1be4a281e079c4755d35)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__JoinParams_1a2d700d222c0a1be4a281e079c4755d35"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__JoinParams_1a24ccc3f4ff20cede248586da72d95514)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__JoinParams_1a24ccc3f4ff20cede248586da72d95514"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__JoinParams_1a327ebda820930355f5a7a080f8c8c0f6)`()` <a id="structFRHAPI__JoinParams_1a327ebda820930355f5a7a080f8c8c0f6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__JoinParams_1a78f8d07c0f6a058f488d5c24c5f635fa)`() const` <a id="structFRHAPI__JoinParams_1a78f8d07c0f6a058f488d5c24c5f635fa"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__JoinParams_1a6636bc8012fbb39f659d325d07c748dd)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__JoinParams_1a6636bc8012fbb39f659d325d07c748dd"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__JoinParams_1aaf252e8d7923b668e36cf1e9b4351988)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__JoinParams_1aaf252e8d7923b668e36cf1e9b4351988"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__JoinParams_1acbe843cc9336e24b9b7ac3dbeac3bccb)`()` <a id="structFRHAPI__JoinParams_1acbe843cc9336e24b9b7ac3dbeac3bccb"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__JoinParams_1af1a2f7811ceb11e6e93c60c724855c4a)`() const` <a id="structFRHAPI__JoinParams_1af1a2f7811ceb11e6e93c60c724855c4a"></a>

Checks whether CustomData_Optional has been set.

