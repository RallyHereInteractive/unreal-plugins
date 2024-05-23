# group `RHAPI_PortalUserResponse` <a id="group__RHAPI__PortalUserResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PortalUserResponse`](#structFRHAPI__PortalUserResponse) | 

## struct `FRHAPI_PortalUserResponse` <a id="structFRHAPI__PortalUserResponse"></a>

```
struct FRHAPI_PortalUserResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`PortalUserId_Optional`](#structFRHAPI__PortalUserResponse_1aa4044be39cec42ef3d95b808606ca2ae) | Portal user ID.
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__PortalUserResponse_1ac7b290f0f2bbe598c77e652c134bdade) | true if PortalUserId_Optional has been set to a value
`public int32 `[`PortalId`](#structFRHAPI__PortalUserResponse_1a1e7b5c3a59e3c42f4818ea2597b99eb0) | Portal ID *DEPRECATED* use `platform` instead.
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__PortalUserResponse_1abc32c735669c374aca93d5acd7085d3f) | Platform.
`public FString `[`DisplayName_Optional`](#structFRHAPI__PortalUserResponse_1a77bbe891aceb9ccd53b8c053a9d57466) | Display name.
`public bool `[`DisplayName_IsSet`](#structFRHAPI__PortalUserResponse_1a758e573c69f5c1d4ad97895109cdcee0) | true if DisplayName_Optional has been set to a value
`public int32 `[`PlayerId`](#structFRHAPI__PortalUserResponse_1a2d6b6d603819120e125c82b880776263) | Player ID *DEPRECATED* use `player_uuid` instead.
`public FGuid `[`PlayerUuid`](#structFRHAPI__PortalUserResponse_1a66933b04170b4adc512d07ccf09d0ddf) | Player UUID.
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUserResponse_1a821a0e1dc1846b6cf1b53279a6a4e33e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUserResponse_1a3747cae157a78d0f9f59c85f4b2c9ddd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1ac1fff9577bf2fc695ee3575a632e3afb)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1a0ebda139397a335f7f3a9467219b361e)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1aec818741460136b9163e376d4d559e9d)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1a877ac3c4cf9bf2c8e9e7ab41b438cfb8)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1aa80fecda54b8fca9f51394ca5eed2898)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1aad4e8f5dc44ba1db2c9b8ebc219047e5)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1ad6fdc58828c183424840b570aa9d28e6)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1a6d73122f1ae011b7b7f4e38e0654bbb1)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PortalUserResponse_1aad55dab5c2f1d56b26e86181c1d70db8)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1a767b0f99979bca91fc8c0ca75e2378e8)`()` | Gets the value of PortalId.
`public inline const int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1ab082c8bae25684cdfc101f77c392387d)`() const` | Gets the value of PortalId.
`public inline void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a1ec1d1cd0b9b691a1ed96e58132ab109)`(const int32 & NewValue)` | Sets the value of PortalId.
`public inline void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a1a741727afaf51decd48354649b6b98e)`(int32 && NewValue)` | Sets the value of PortalId using move semantics.
`public inline bool `[`IsPortalIdDefaultValue`](#structFRHAPI__PortalUserResponse_1a8d2829c973692004a603fd7299fa7c4d)`() const` | Returns true if PortalId matches the default value.
`public inline void `[`SetPortalIdToDefault`](#structFRHAPI__PortalUserResponse_1ae9cb2b9863c716b32ed5ca3a96a51119)`()` | Sets the value of PortalId to its default
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1ae4dabc52732a3e9d3e23ee68e989a71a)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1aa25dc708f68d43f8266a575bbcf4534e)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a1c444841c69fc02cd3498cca7b483a4b)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a12c07caac3231bf453cd35e31b129c0b)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a0241cf3716bd64c11d1160a58e1a0374)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a5b2f3cb6cc3461cf503bf1287ad50774)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a9a1f375aa391cd23f3d1ff1f7fe7c630)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a940d3cae990ce7a780051795c6f0d1e8)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1a92d8258c04c7f5ce2f68e94daddbc21e)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1abe5a760b3f1fecc744b89991474f2ad7)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a59e660e6cfed61d0053287d5d5fdc767)`(const FString & NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a31be206bd1e6920254f7efbd692950c4)`(FString && NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.
`public inline void `[`ClearDisplayName`](#structFRHAPI__PortalUserResponse_1af3483949dd8f34604018d03fe5d13d06)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1aaf8ad51ca28a6327856a0ebc821218c6)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1a992fd8d6aecb941c99c1f8ee8343952c)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a95f1f44abbce2195f1bd52db1b499e6d)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a855b97caf1ca17a717f9005541e73139)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PortalUserResponse_1a2f80c742ea5fa5322befd7dba2231e3b)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PortalUserResponse_1a01b5af0434b8222fbe1dac080c09ba0b)`()` | Sets the value of PlayerId to its default
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1abc8c0dc9a99bdb3938084ca629623cb5)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a3a17830e9cc7e41204af3a10bf02605e)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a247e7bb7dc08da7c0cf5c42310fcb3a0)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a58f911fcdd0d5ebf88a622a47c28bc53)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.

### Members

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__PortalUserResponse_1aa4044be39cec42ef3d95b808606ca2ae) <a id="structFRHAPI__PortalUserResponse_1aa4044be39cec42ef3d95b808606ca2ae"></a>

Portal user ID.

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__PortalUserResponse_1ac7b290f0f2bbe598c77e652c134bdade) <a id="structFRHAPI__PortalUserResponse_1ac7b290f0f2bbe598c77e652c134bdade"></a>

true if PortalUserId_Optional has been set to a value

#### `public int32 `[`PortalId`](#structFRHAPI__PortalUserResponse_1a1e7b5c3a59e3c42f4818ea2597b99eb0) <a id="structFRHAPI__PortalUserResponse_1a1e7b5c3a59e3c42f4818ea2597b99eb0"></a>

Portal ID *DEPRECATED* use `platform` instead.

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__PortalUserResponse_1abc32c735669c374aca93d5acd7085d3f) <a id="structFRHAPI__PortalUserResponse_1abc32c735669c374aca93d5acd7085d3f"></a>

Platform.

#### `public FString `[`DisplayName_Optional`](#structFRHAPI__PortalUserResponse_1a77bbe891aceb9ccd53b8c053a9d57466) <a id="structFRHAPI__PortalUserResponse_1a77bbe891aceb9ccd53b8c053a9d57466"></a>

Display name.

#### `public bool `[`DisplayName_IsSet`](#structFRHAPI__PortalUserResponse_1a758e573c69f5c1d4ad97895109cdcee0) <a id="structFRHAPI__PortalUserResponse_1a758e573c69f5c1d4ad97895109cdcee0"></a>

true if DisplayName_Optional has been set to a value

#### `public int32 `[`PlayerId`](#structFRHAPI__PortalUserResponse_1a2d6b6d603819120e125c82b880776263) <a id="structFRHAPI__PortalUserResponse_1a2d6b6d603819120e125c82b880776263"></a>

Player ID *DEPRECATED* use `player_uuid` instead.

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PortalUserResponse_1a66933b04170b4adc512d07ccf09d0ddf) <a id="structFRHAPI__PortalUserResponse_1a66933b04170b4adc512d07ccf09d0ddf"></a>

Player UUID.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PortalUserResponse_1a821a0e1dc1846b6cf1b53279a6a4e33e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PortalUserResponse_1a821a0e1dc1846b6cf1b53279a6a4e33e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUserResponse_1a3747cae157a78d0f9f59c85f4b2c9ddd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PortalUserResponse_1a3747cae157a78d0f9f59c85f4b2c9ddd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1ac1fff9577bf2fc695ee3575a632e3afb)`()` <a id="structFRHAPI__PortalUserResponse_1ac1fff9577bf2fc695ee3575a632e3afb"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1a0ebda139397a335f7f3a9467219b361e)`() const` <a id="structFRHAPI__PortalUserResponse_1a0ebda139397a335f7f3a9467219b361e"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1aec818741460136b9163e376d4d559e9d)`(const FString & DefaultValue) const` <a id="structFRHAPI__PortalUserResponse_1aec818741460136b9163e376d4d559e9d"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1a877ac3c4cf9bf2c8e9e7ab41b438cfb8)`(FString & OutValue) const` <a id="structFRHAPI__PortalUserResponse_1a877ac3c4cf9bf2c8e9e7ab41b438cfb8"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1aa80fecda54b8fca9f51394ca5eed2898)`()` <a id="structFRHAPI__PortalUserResponse_1aa80fecda54b8fca9f51394ca5eed2898"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1aad4e8f5dc44ba1db2c9b8ebc219047e5)`() const` <a id="structFRHAPI__PortalUserResponse_1aad4e8f5dc44ba1db2c9b8ebc219047e5"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1ad6fdc58828c183424840b570aa9d28e6)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserResponse_1ad6fdc58828c183424840b570aa9d28e6"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1a6d73122f1ae011b7b7f4e38e0654bbb1)`(FString && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a6d73122f1ae011b7b7f4e38e0654bbb1"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PortalUserResponse_1aad55dab5c2f1d56b26e86181c1d70db8)`()` <a id="structFRHAPI__PortalUserResponse_1aad55dab5c2f1d56b26e86181c1d70db8"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1a767b0f99979bca91fc8c0ca75e2378e8)`()` <a id="structFRHAPI__PortalUserResponse_1a767b0f99979bca91fc8c0ca75e2378e8"></a>

Gets the value of PortalId.

#### `public inline const int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1ab082c8bae25684cdfc101f77c392387d)`() const` <a id="structFRHAPI__PortalUserResponse_1ab082c8bae25684cdfc101f77c392387d"></a>

Gets the value of PortalId.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a1ec1d1cd0b9b691a1ed96e58132ab109)`(const int32 & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a1ec1d1cd0b9b691a1ed96e58132ab109"></a>

Sets the value of PortalId.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a1a741727afaf51decd48354649b6b98e)`(int32 && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a1a741727afaf51decd48354649b6b98e"></a>

Sets the value of PortalId using move semantics.

#### `public inline bool `[`IsPortalIdDefaultValue`](#structFRHAPI__PortalUserResponse_1a8d2829c973692004a603fd7299fa7c4d)`() const` <a id="structFRHAPI__PortalUserResponse_1a8d2829c973692004a603fd7299fa7c4d"></a>

Returns true if PortalId matches the default value.

#### `public inline void `[`SetPortalIdToDefault`](#structFRHAPI__PortalUserResponse_1ae9cb2b9863c716b32ed5ca3a96a51119)`()` <a id="structFRHAPI__PortalUserResponse_1ae9cb2b9863c716b32ed5ca3a96a51119"></a>

Sets the value of PortalId to its default

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1ae4dabc52732a3e9d3e23ee68e989a71a)`()` <a id="structFRHAPI__PortalUserResponse_1ae4dabc52732a3e9d3e23ee68e989a71a"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1aa25dc708f68d43f8266a575bbcf4534e)`() const` <a id="structFRHAPI__PortalUserResponse_1aa25dc708f68d43f8266a575bbcf4534e"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a1c444841c69fc02cd3498cca7b483a4b)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a1c444841c69fc02cd3498cca7b483a4b"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a12c07caac3231bf453cd35e31b129c0b)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a12c07caac3231bf453cd35e31b129c0b"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a0241cf3716bd64c11d1160a58e1a0374)`()` <a id="structFRHAPI__PortalUserResponse_1a0241cf3716bd64c11d1160a58e1a0374"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a5b2f3cb6cc3461cf503bf1287ad50774)`() const` <a id="structFRHAPI__PortalUserResponse_1a5b2f3cb6cc3461cf503bf1287ad50774"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a9a1f375aa391cd23f3d1ff1f7fe7c630)`(const FString & DefaultValue) const` <a id="structFRHAPI__PortalUserResponse_1a9a1f375aa391cd23f3d1ff1f7fe7c630"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a940d3cae990ce7a780051795c6f0d1e8)`(FString & OutValue) const` <a id="structFRHAPI__PortalUserResponse_1a940d3cae990ce7a780051795c6f0d1e8"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1a92d8258c04c7f5ce2f68e94daddbc21e)`()` <a id="structFRHAPI__PortalUserResponse_1a92d8258c04c7f5ce2f68e94daddbc21e"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1abe5a760b3f1fecc744b89991474f2ad7)`() const` <a id="structFRHAPI__PortalUserResponse_1abe5a760b3f1fecc744b89991474f2ad7"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a59e660e6cfed61d0053287d5d5fdc767)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a59e660e6cfed61d0053287d5d5fdc767"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a31be206bd1e6920254f7efbd692950c4)`(FString && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a31be206bd1e6920254f7efbd692950c4"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__PortalUserResponse_1af3483949dd8f34604018d03fe5d13d06)`()` <a id="structFRHAPI__PortalUserResponse_1af3483949dd8f34604018d03fe5d13d06"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1aaf8ad51ca28a6327856a0ebc821218c6)`()` <a id="structFRHAPI__PortalUserResponse_1aaf8ad51ca28a6327856a0ebc821218c6"></a>

Gets the value of PlayerId.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1a992fd8d6aecb941c99c1f8ee8343952c)`() const` <a id="structFRHAPI__PortalUserResponse_1a992fd8d6aecb941c99c1f8ee8343952c"></a>

Gets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a95f1f44abbce2195f1bd52db1b499e6d)`(const int32 & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a95f1f44abbce2195f1bd52db1b499e6d"></a>

Sets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a855b97caf1ca17a717f9005541e73139)`(int32 && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a855b97caf1ca17a717f9005541e73139"></a>

Sets the value of PlayerId using move semantics.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PortalUserResponse_1a2f80c742ea5fa5322befd7dba2231e3b)`() const` <a id="structFRHAPI__PortalUserResponse_1a2f80c742ea5fa5322befd7dba2231e3b"></a>

Returns true if PlayerId matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PortalUserResponse_1a01b5af0434b8222fbe1dac080c09ba0b)`()` <a id="structFRHAPI__PortalUserResponse_1a01b5af0434b8222fbe1dac080c09ba0b"></a>

Sets the value of PlayerId to its default

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1abc8c0dc9a99bdb3938084ca629623cb5)`()` <a id="structFRHAPI__PortalUserResponse_1abc8c0dc9a99bdb3938084ca629623cb5"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a3a17830e9cc7e41204af3a10bf02605e)`() const` <a id="structFRHAPI__PortalUserResponse_1a3a17830e9cc7e41204af3a10bf02605e"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a247e7bb7dc08da7c0cf5c42310fcb3a0)`(const FGuid & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a247e7bb7dc08da7c0cf5c42310fcb3a0"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a58f911fcdd0d5ebf88a622a47c28bc53)`(FGuid && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a58f911fcdd0d5ebf88a622a47c28bc53"></a>

Sets the value of PlayerUuid using move semantics.

