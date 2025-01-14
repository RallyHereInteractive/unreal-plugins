---
title: RHAPI_PortalUserResponse
---

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
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUserResponse_1afaef0cb3b0e9eb074dfd1989b82567f8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUserResponse_1a6cf2cea2759638d67b5352bdce4fba20)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1ab6fdd2b4c9dee1b955115259f5258925)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1aeb8f375d6e8fd9c5f40b93460f358144)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1abc8bf3236f1dec94814f2fea3bf39122)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1a877ac3c4cf9bf2c8e9e7ab41b438cfb8)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1aca1d753695aba5627fd500ada130577f)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1a590ac5e54c3911bc7b6507ca6e4a78aa)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1ad6fdc58828c183424840b570aa9d28e6)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1a6d73122f1ae011b7b7f4e38e0654bbb1)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PortalUserResponse_1aad55dab5c2f1d56b26e86181c1d70db8)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PortalUserResponse_1a434609ce6c94d3a3426e376bf7572496)`() const` | Checks whether PortalUserId_Optional has been set.
`public inline int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1a4862ca7289105044a5eb34f1b19db754)`()` | Gets the value of PortalId.
`public inline const int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1ac076371af48f788d054ccda11295f3c9)`() const` | Gets the value of PortalId.
`public inline void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a1ec1d1cd0b9b691a1ed96e58132ab109)`(const int32 & NewValue)` | Sets the value of PortalId.
`public inline void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a1a741727afaf51decd48354649b6b98e)`(int32 && NewValue)` | Sets the value of PortalId using move semantics.
`public inline bool `[`IsPortalIdDefaultValue`](#structFRHAPI__PortalUserResponse_1a8d2829c973692004a603fd7299fa7c4d)`() const` | Returns true if PortalId matches the default value.
`public inline void `[`SetPortalIdToDefault`](#structFRHAPI__PortalUserResponse_1ae9cb2b9863c716b32ed5ca3a96a51119)`()` | Sets the value of PortalId to its default
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1a8fc852139d61ca406832b4585882526b)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1aa6dde3ebcc18cce15e82634d7074a624)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a1c444841c69fc02cd3498cca7b483a4b)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a12c07caac3231bf453cd35e31b129c0b)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a425e7af7c1d38d0eba146cc9a4ec9604)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1afb3e47fff587218bdc404ef1c4487994)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a16a95b4651c98030dc8bdedccbe5dfa9)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a940d3cae990ce7a780051795c6f0d1e8)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1a06823eafc914999d8693b29675d850a1)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1ac12f716724635aafd30b515106d0e60e)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a59e660e6cfed61d0053287d5d5fdc767)`(const FString & NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a31be206bd1e6920254f7efbd692950c4)`(FString && NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.
`public inline void `[`ClearDisplayName`](#structFRHAPI__PortalUserResponse_1af3483949dd8f34604018d03fe5d13d06)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.
`public inline bool `[`IsDisplayNameSet`](#structFRHAPI__PortalUserResponse_1a3dd504143f64417f4ef5b9b2a441d614)`() const` | Checks whether DisplayName_Optional has been set.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1a055655ec616f69c3a2c85e2bed7d32a2)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1adb9b0d493362d083af69342c9de18fba)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a95f1f44abbce2195f1bd52db1b499e6d)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a855b97caf1ca17a717f9005541e73139)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PortalUserResponse_1a2f80c742ea5fa5322befd7dba2231e3b)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PortalUserResponse_1a01b5af0434b8222fbe1dac080c09ba0b)`()` | Sets the value of PlayerId to its default
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a9bf267a60d1a34a0c4fb39665ea37860)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a70caec7c98f9ace50f232d8b317e672c)`() const` | Gets the value of PlayerUuid.
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

#### `public virtual bool `[`FromJson`](#structFRHAPI__PortalUserResponse_1afaef0cb3b0e9eb074dfd1989b82567f8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PortalUserResponse_1afaef0cb3b0e9eb074dfd1989b82567f8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUserResponse_1a6cf2cea2759638d67b5352bdce4fba20)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PortalUserResponse_1a6cf2cea2759638d67b5352bdce4fba20"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1ab6fdd2b4c9dee1b955115259f5258925)`()` <a id="structFRHAPI__PortalUserResponse_1ab6fdd2b4c9dee1b955115259f5258925"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1aeb8f375d6e8fd9c5f40b93460f358144)`() const` <a id="structFRHAPI__PortalUserResponse_1aeb8f375d6e8fd9c5f40b93460f358144"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1abc8bf3236f1dec94814f2fea3bf39122)`(const FString & DefaultValue) const` <a id="structFRHAPI__PortalUserResponse_1abc8bf3236f1dec94814f2fea3bf39122"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1a877ac3c4cf9bf2c8e9e7ab41b438cfb8)`(FString & OutValue) const` <a id="structFRHAPI__PortalUserResponse_1a877ac3c4cf9bf2c8e9e7ab41b438cfb8"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1aca1d753695aba5627fd500ada130577f)`()` <a id="structFRHAPI__PortalUserResponse_1aca1d753695aba5627fd500ada130577f"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1a590ac5e54c3911bc7b6507ca6e4a78aa)`() const` <a id="structFRHAPI__PortalUserResponse_1a590ac5e54c3911bc7b6507ca6e4a78aa"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1ad6fdc58828c183424840b570aa9d28e6)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserResponse_1ad6fdc58828c183424840b570aa9d28e6"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1a6d73122f1ae011b7b7f4e38e0654bbb1)`(FString && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a6d73122f1ae011b7b7f4e38e0654bbb1"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PortalUserResponse_1aad55dab5c2f1d56b26e86181c1d70db8)`()` <a id="structFRHAPI__PortalUserResponse_1aad55dab5c2f1d56b26e86181c1d70db8"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PortalUserResponse_1a434609ce6c94d3a3426e376bf7572496)`() const` <a id="structFRHAPI__PortalUserResponse_1a434609ce6c94d3a3426e376bf7572496"></a>

Checks whether PortalUserId_Optional has been set.

#### `public inline int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1a4862ca7289105044a5eb34f1b19db754)`()` <a id="structFRHAPI__PortalUserResponse_1a4862ca7289105044a5eb34f1b19db754"></a>

Gets the value of PortalId.

#### `public inline const int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1ac076371af48f788d054ccda11295f3c9)`() const` <a id="structFRHAPI__PortalUserResponse_1ac076371af48f788d054ccda11295f3c9"></a>

Gets the value of PortalId.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a1ec1d1cd0b9b691a1ed96e58132ab109)`(const int32 & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a1ec1d1cd0b9b691a1ed96e58132ab109"></a>

Sets the value of PortalId.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a1a741727afaf51decd48354649b6b98e)`(int32 && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a1a741727afaf51decd48354649b6b98e"></a>

Sets the value of PortalId using move semantics.

#### `public inline bool `[`IsPortalIdDefaultValue`](#structFRHAPI__PortalUserResponse_1a8d2829c973692004a603fd7299fa7c4d)`() const` <a id="structFRHAPI__PortalUserResponse_1a8d2829c973692004a603fd7299fa7c4d"></a>

Returns true if PortalId matches the default value.

#### `public inline void `[`SetPortalIdToDefault`](#structFRHAPI__PortalUserResponse_1ae9cb2b9863c716b32ed5ca3a96a51119)`()` <a id="structFRHAPI__PortalUserResponse_1ae9cb2b9863c716b32ed5ca3a96a51119"></a>

Sets the value of PortalId to its default

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1a8fc852139d61ca406832b4585882526b)`()` <a id="structFRHAPI__PortalUserResponse_1a8fc852139d61ca406832b4585882526b"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1aa6dde3ebcc18cce15e82634d7074a624)`() const` <a id="structFRHAPI__PortalUserResponse_1aa6dde3ebcc18cce15e82634d7074a624"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a1c444841c69fc02cd3498cca7b483a4b)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a1c444841c69fc02cd3498cca7b483a4b"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a12c07caac3231bf453cd35e31b129c0b)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a12c07caac3231bf453cd35e31b129c0b"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a425e7af7c1d38d0eba146cc9a4ec9604)`()` <a id="structFRHAPI__PortalUserResponse_1a425e7af7c1d38d0eba146cc9a4ec9604"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1afb3e47fff587218bdc404ef1c4487994)`() const` <a id="structFRHAPI__PortalUserResponse_1afb3e47fff587218bdc404ef1c4487994"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a16a95b4651c98030dc8bdedccbe5dfa9)`(const FString & DefaultValue) const` <a id="structFRHAPI__PortalUserResponse_1a16a95b4651c98030dc8bdedccbe5dfa9"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a940d3cae990ce7a780051795c6f0d1e8)`(FString & OutValue) const` <a id="structFRHAPI__PortalUserResponse_1a940d3cae990ce7a780051795c6f0d1e8"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1a06823eafc914999d8693b29675d850a1)`()` <a id="structFRHAPI__PortalUserResponse_1a06823eafc914999d8693b29675d850a1"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1ac12f716724635aafd30b515106d0e60e)`() const` <a id="structFRHAPI__PortalUserResponse_1ac12f716724635aafd30b515106d0e60e"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a59e660e6cfed61d0053287d5d5fdc767)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a59e660e6cfed61d0053287d5d5fdc767"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a31be206bd1e6920254f7efbd692950c4)`(FString && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a31be206bd1e6920254f7efbd692950c4"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__PortalUserResponse_1af3483949dd8f34604018d03fe5d13d06)`()` <a id="structFRHAPI__PortalUserResponse_1af3483949dd8f34604018d03fe5d13d06"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline bool `[`IsDisplayNameSet`](#structFRHAPI__PortalUserResponse_1a3dd504143f64417f4ef5b9b2a441d614)`() const` <a id="structFRHAPI__PortalUserResponse_1a3dd504143f64417f4ef5b9b2a441d614"></a>

Checks whether DisplayName_Optional has been set.

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1a055655ec616f69c3a2c85e2bed7d32a2)`()` <a id="structFRHAPI__PortalUserResponse_1a055655ec616f69c3a2c85e2bed7d32a2"></a>

Gets the value of PlayerId.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1adb9b0d493362d083af69342c9de18fba)`() const` <a id="structFRHAPI__PortalUserResponse_1adb9b0d493362d083af69342c9de18fba"></a>

Gets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a95f1f44abbce2195f1bd52db1b499e6d)`(const int32 & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a95f1f44abbce2195f1bd52db1b499e6d"></a>

Sets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a855b97caf1ca17a717f9005541e73139)`(int32 && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a855b97caf1ca17a717f9005541e73139"></a>

Sets the value of PlayerId using move semantics.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PortalUserResponse_1a2f80c742ea5fa5322befd7dba2231e3b)`() const` <a id="structFRHAPI__PortalUserResponse_1a2f80c742ea5fa5322befd7dba2231e3b"></a>

Returns true if PlayerId matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PortalUserResponse_1a01b5af0434b8222fbe1dac080c09ba0b)`()` <a id="structFRHAPI__PortalUserResponse_1a01b5af0434b8222fbe1dac080c09ba0b"></a>

Sets the value of PlayerId to its default

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a9bf267a60d1a34a0c4fb39665ea37860)`()` <a id="structFRHAPI__PortalUserResponse_1a9bf267a60d1a34a0c4fb39665ea37860"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a70caec7c98f9ace50f232d8b317e672c)`() const` <a id="structFRHAPI__PortalUserResponse_1a70caec7c98f9ace50f232d8b317e672c"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a247e7bb7dc08da7c0cf5c42310fcb3a0)`(const FGuid & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a247e7bb7dc08da7c0cf5c42310fcb3a0"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a58f911fcdd0d5ebf88a622a47c28bc53)`(FGuid && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a58f911fcdd0d5ebf88a622a47c28bc53"></a>

Sets the value of PlayerUuid using move semantics.

