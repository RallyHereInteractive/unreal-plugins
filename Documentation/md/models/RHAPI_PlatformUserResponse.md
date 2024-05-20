# RHAPI_PlatformUserResponse <a id="group__RHAPI__PlatformUserResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformUserResponse`](#structFRHAPI__PlatformUserResponse) | Response for successfully creating a platform user.

## struct `FRHAPI_PlatformUserResponse` <a id="structFRHAPI__PlatformUserResponse"></a>

```
struct FRHAPI_PlatformUserResponse
  : public FRHAPI_Model
```

Response for successfully creating a platform user.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformUserResponse_1a726f48e174bf6a68a8540489134b9d94) | Platform to search/create with.
`public FString `[`PlatformUserId`](#structFRHAPI__PlatformUserResponse_1a55f1404bd69e29874fc645d89c6176f7) | Platform user ID to search/create with.
`public FString `[`DisplayName_Optional`](#structFRHAPI__PlatformUserResponse_1a3f16e07fab354e8a5ba7dcd51c29a5f7) | Platform Display name.
`public bool `[`DisplayName_IsSet`](#structFRHAPI__PlatformUserResponse_1a4868cecc8bcb5b886c8ff732d1cb2cb2) | true if DisplayName_Optional has been set to a value
`public int32 `[`PlayerId`](#structFRHAPI__PlatformUserResponse_1aabf7a11cd8f9ed3ea446bba465afacfe) | Player ID *DEPRECATED* use `player_uuid` instead.
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlatformUserResponse_1af7980a903417502d4689d106ea3763d1) | Player UUID.
`public FGuid `[`PersonId`](#structFRHAPI__PlatformUserResponse_1a2a03597a3a43e59ff7f32ace9d82aaa2) | Person ID.
`public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PlatformUserResponse_1a884999cb95f6c5600b08ddd7bb10f9fd) | *DEPRECATED* use `active_player_uuid` instead. Active player ID, if the player has an active player.
`public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PlatformUserResponse_1a9c034f207e9f821bab3bb304121dc759) | true if ActivePlayerId_Optional has been set to a value
`public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__PlatformUserResponse_1a3c1b8038c0d17def6ed1b427052a5f59) | Active player UUID, if the player has an active player.
`public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__PlatformUserResponse_1a968d6667a7ba19495696a298e831abda) | true if ActivePlayerUuid_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserResponse_1a072ec067006e040f7236458dc680a296)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserResponse_1aa60153a7d3b65c767195ba78782f192c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a6054701d552a69f01655b651084810da)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a55a4b8ee113e898cfe7d377347d5965a)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserResponse_1ab3022f12a53102bf6f50983ae8fd52b1)`(ERHAPI_Platform NewValue)` | Sets the value of Platform.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1aff27c387818dac595cb1a9d71b078063)`()` | Gets the value of PlatformUserId.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a5df801664295316361acac2b79dc0652)`() const` | Gets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a527f66d1d87849e3de62ea7f8bfbd4b0)`(FString NewValue)` | Sets the value of PlatformUserId.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a38a90ab710e758ccf6a18b3931351d64)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a49ac38717d2b6fb363e27af80208925c)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a1cd59e049a8d0bbe66023397ad1faf2c)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1ab219b827a34ff526c173b4d634dc0ad1)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1a0c166e280d52ec61d1e98224a20e68a6)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1a00752170afe85711e6adcfd0a48b45bc)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDisplayName`](#structFRHAPI__PlatformUserResponse_1a961cf8152974cdd5eb1329c6b6a5daf2)`(FString NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline void `[`ClearDisplayName`](#structFRHAPI__PlatformUserResponse_1a867c074fe63e383a69916ce2496f65ff)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1a8ec2981c26d30ee9b369680b1d413d76)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1a947bb37b608bd05320eee4265a8c5be4)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlatformUserResponse_1ae54eeef43e118a8d6aed173906b3e71b)`(int32 NewValue)` | Sets the value of PlayerId.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlatformUserResponse_1a8f9c2131d18b305f4afe71b9c3857ca1)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlatformUserResponse_1a12c5723de977c41c19321ae97affe462)`()` | Sets the value of PlayerId to its default
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1ad7b012618e119e2047dde5616aed98ad)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1ad2733355b8148213f8c2b917f89d065c)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1a7e9d894f254a006cbef1b311282ec5d5)`(FGuid NewValue)` | Sets the value of PlayerUuid.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1a6a639dbaccf9b951bd56743de2d92081)`()` | Gets the value of PersonId.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1ab799e70c414170b1e52e321de2b09691)`() const` | Gets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__PlatformUserResponse_1ab5f01f96a138a4e3d41cce03ea1f5871)`(FGuid NewValue)` | Sets the value of PersonId.
`public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1aaea183b953bb304d95d68ec45f285162)`()` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a1787805881f51f5a3c8c11f54bc1f1e8)`() const` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1ad4e0f17bafaf29feebadc2a1e095ebde)`(const int32 & DefaultValue) const` | Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1aab6b29ef919af2bc7f9ce25011e13c36)`(int32 & OutValue) const` | Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1a43090e0a7a3bef6c4f82224b2ec87caa)`()` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1a3afe446b18ae123b0cc5f34d75ce195e)`() const` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1ab1617e0766be9435abc42f9405ef0d30)`(int32 NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.
`public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlatformUserResponse_1afb84ba974117532705d640d3f9d8eaf5)`()` | Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.
`public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PlatformUserResponse_1a96a8b8dee4552a4c297159ebd623ea33)`() const` | Returns true if ActivePlayerId_Optional is set and matches the default value.
`public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PlatformUserResponse_1aed7a5f7a1d8d9ebdb0b2eb1099a9d069)`()` | Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.
`public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1ae6b0c1cd02488434af4c3cf70e21efb4)`()` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a413aa342a85438eee06aa09daa28c94a)`() const` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1afec8edf5f68e4c70cd517d3390cd2c85)`(const FGuid & DefaultValue) const` | Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a70555e4f90391a3f31d355e5a4d7b0b7)`(FGuid & OutValue) const` | Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1ae2417d7b7226050c1946a7e03c56d3a2)`()` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1a08fca4f21a840a84f4a1b2ab925f4fa0)`() const` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a4d2e69c1d2dedb90e5f033b6d1671a75)`(FGuid NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.
`public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1ac732875511b55956fcd144638593c3f0)`()` | Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

#### Members

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformUserResponse_1a726f48e174bf6a68a8540489134b9d94) <a id="structFRHAPI__PlatformUserResponse_1a726f48e174bf6a68a8540489134b9d94"></a>

Platform to search/create with.

#### `public FString `[`PlatformUserId`](#structFRHAPI__PlatformUserResponse_1a55f1404bd69e29874fc645d89c6176f7) <a id="structFRHAPI__PlatformUserResponse_1a55f1404bd69e29874fc645d89c6176f7"></a>

Platform user ID to search/create with.

#### `public FString `[`DisplayName_Optional`](#structFRHAPI__PlatformUserResponse_1a3f16e07fab354e8a5ba7dcd51c29a5f7) <a id="structFRHAPI__PlatformUserResponse_1a3f16e07fab354e8a5ba7dcd51c29a5f7"></a>

Platform Display name.

#### `public bool `[`DisplayName_IsSet`](#structFRHAPI__PlatformUserResponse_1a4868cecc8bcb5b886c8ff732d1cb2cb2) <a id="structFRHAPI__PlatformUserResponse_1a4868cecc8bcb5b886c8ff732d1cb2cb2"></a>

true if DisplayName_Optional has been set to a value

#### `public int32 `[`PlayerId`](#structFRHAPI__PlatformUserResponse_1aabf7a11cd8f9ed3ea446bba465afacfe) <a id="structFRHAPI__PlatformUserResponse_1aabf7a11cd8f9ed3ea446bba465afacfe"></a>

Player ID *DEPRECATED* use `player_uuid` instead.

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlatformUserResponse_1af7980a903417502d4689d106ea3763d1) <a id="structFRHAPI__PlatformUserResponse_1af7980a903417502d4689d106ea3763d1"></a>

Player UUID.

#### `public FGuid `[`PersonId`](#structFRHAPI__PlatformUserResponse_1a2a03597a3a43e59ff7f32ace9d82aaa2) <a id="structFRHAPI__PlatformUserResponse_1a2a03597a3a43e59ff7f32ace9d82aaa2"></a>

Person ID.

#### `public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PlatformUserResponse_1a884999cb95f6c5600b08ddd7bb10f9fd) <a id="structFRHAPI__PlatformUserResponse_1a884999cb95f6c5600b08ddd7bb10f9fd"></a>

*DEPRECATED* use `active_player_uuid` instead. Active player ID, if the player has an active player.

#### `public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PlatformUserResponse_1a9c034f207e9f821bab3bb304121dc759) <a id="structFRHAPI__PlatformUserResponse_1a9c034f207e9f821bab3bb304121dc759"></a>

true if ActivePlayerId_Optional has been set to a value

#### `public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__PlatformUserResponse_1a3c1b8038c0d17def6ed1b427052a5f59) <a id="structFRHAPI__PlatformUserResponse_1a3c1b8038c0d17def6ed1b427052a5f59"></a>

Active player UUID, if the player has an active player.

#### `public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__PlatformUserResponse_1a968d6667a7ba19495696a298e831abda) <a id="structFRHAPI__PlatformUserResponse_1a968d6667a7ba19495696a298e831abda"></a>

true if ActivePlayerUuid_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserResponse_1a072ec067006e040f7236458dc680a296)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformUserResponse_1a072ec067006e040f7236458dc680a296"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserResponse_1aa60153a7d3b65c767195ba78782f192c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformUserResponse_1aa60153a7d3b65c767195ba78782f192c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a6054701d552a69f01655b651084810da)`()` <a id="structFRHAPI__PlatformUserResponse_1a6054701d552a69f01655b651084810da"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a55a4b8ee113e898cfe7d377347d5965a)`() const` <a id="structFRHAPI__PlatformUserResponse_1a55a4b8ee113e898cfe7d377347d5965a"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserResponse_1ab3022f12a53102bf6f50983ae8fd52b1)`(ERHAPI_Platform NewValue)` <a id="structFRHAPI__PlatformUserResponse_1ab3022f12a53102bf6f50983ae8fd52b1"></a>

Sets the value of Platform.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1aff27c387818dac595cb1a9d71b078063)`()` <a id="structFRHAPI__PlatformUserResponse_1aff27c387818dac595cb1a9d71b078063"></a>

Gets the value of PlatformUserId.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a5df801664295316361acac2b79dc0652)`() const` <a id="structFRHAPI__PlatformUserResponse_1a5df801664295316361acac2b79dc0652"></a>

Gets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a527f66d1d87849e3de62ea7f8bfbd4b0)`(FString NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a527f66d1d87849e3de62ea7f8bfbd4b0"></a>

Sets the value of PlatformUserId.

#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a38a90ab710e758ccf6a18b3931351d64)`()` <a id="structFRHAPI__PlatformUserResponse_1a38a90ab710e758ccf6a18b3931351d64"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a49ac38717d2b6fb363e27af80208925c)`() const` <a id="structFRHAPI__PlatformUserResponse_1a49ac38717d2b6fb363e27af80208925c"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a1cd59e049a8d0bbe66023397ad1faf2c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserResponse_1a1cd59e049a8d0bbe66023397ad1faf2c"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1ab219b827a34ff526c173b4d634dc0ad1)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserResponse_1ab219b827a34ff526c173b4d634dc0ad1"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1a0c166e280d52ec61d1e98224a20e68a6)`()` <a id="structFRHAPI__PlatformUserResponse_1a0c166e280d52ec61d1e98224a20e68a6"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1a00752170afe85711e6adcfd0a48b45bc)`() const` <a id="structFRHAPI__PlatformUserResponse_1a00752170afe85711e6adcfd0a48b45bc"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PlatformUserResponse_1a961cf8152974cdd5eb1329c6b6a5daf2)`(FString NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a961cf8152974cdd5eb1329c6b6a5daf2"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__PlatformUserResponse_1a867c074fe63e383a69916ce2496f65ff)`()` <a id="structFRHAPI__PlatformUserResponse_1a867c074fe63e383a69916ce2496f65ff"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1a8ec2981c26d30ee9b369680b1d413d76)`()` <a id="structFRHAPI__PlatformUserResponse_1a8ec2981c26d30ee9b369680b1d413d76"></a>

Gets the value of PlayerId.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1a947bb37b608bd05320eee4265a8c5be4)`() const` <a id="structFRHAPI__PlatformUserResponse_1a947bb37b608bd05320eee4265a8c5be4"></a>

Gets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlatformUserResponse_1ae54eeef43e118a8d6aed173906b3e71b)`(int32 NewValue)` <a id="structFRHAPI__PlatformUserResponse_1ae54eeef43e118a8d6aed173906b3e71b"></a>

Sets the value of PlayerId.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlatformUserResponse_1a8f9c2131d18b305f4afe71b9c3857ca1)`() const` <a id="structFRHAPI__PlatformUserResponse_1a8f9c2131d18b305f4afe71b9c3857ca1"></a>

Returns true if PlayerId matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlatformUserResponse_1a12c5723de977c41c19321ae97affe462)`()` <a id="structFRHAPI__PlatformUserResponse_1a12c5723de977c41c19321ae97affe462"></a>

Sets the value of PlayerId to its default

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1ad7b012618e119e2047dde5616aed98ad)`()` <a id="structFRHAPI__PlatformUserResponse_1ad7b012618e119e2047dde5616aed98ad"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1ad2733355b8148213f8c2b917f89d065c)`() const` <a id="structFRHAPI__PlatformUserResponse_1ad2733355b8148213f8c2b917f89d065c"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1a7e9d894f254a006cbef1b311282ec5d5)`(FGuid NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a7e9d894f254a006cbef1b311282ec5d5"></a>

Sets the value of PlayerUuid.

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1a6a639dbaccf9b951bd56743de2d92081)`()` <a id="structFRHAPI__PlatformUserResponse_1a6a639dbaccf9b951bd56743de2d92081"></a>

Gets the value of PersonId.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1ab799e70c414170b1e52e321de2b09691)`() const` <a id="structFRHAPI__PlatformUserResponse_1ab799e70c414170b1e52e321de2b09691"></a>

Gets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PlatformUserResponse_1ab5f01f96a138a4e3d41cce03ea1f5871)`(FGuid NewValue)` <a id="structFRHAPI__PlatformUserResponse_1ab5f01f96a138a4e3d41cce03ea1f5871"></a>

Sets the value of PersonId.

#### `public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1aaea183b953bb304d95d68ec45f285162)`()` <a id="structFRHAPI__PlatformUserResponse_1aaea183b953bb304d95d68ec45f285162"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a1787805881f51f5a3c8c11f54bc1f1e8)`() const` <a id="structFRHAPI__PlatformUserResponse_1a1787805881f51f5a3c8c11f54bc1f1e8"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1ad4e0f17bafaf29feebadc2a1e095ebde)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformUserResponse_1ad4e0f17bafaf29feebadc2a1e095ebde"></a>

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1aab6b29ef919af2bc7f9ce25011e13c36)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformUserResponse_1aab6b29ef919af2bc7f9ce25011e13c36"></a>

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1a43090e0a7a3bef6c4f82224b2ec87caa)`()` <a id="structFRHAPI__PlatformUserResponse_1a43090e0a7a3bef6c4f82224b2ec87caa"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1a3afe446b18ae123b0cc5f34d75ce195e)`() const` <a id="structFRHAPI__PlatformUserResponse_1a3afe446b18ae123b0cc5f34d75ce195e"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1ab1617e0766be9435abc42f9405ef0d30)`(int32 NewValue)` <a id="structFRHAPI__PlatformUserResponse_1ab1617e0766be9435abc42f9405ef0d30"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.

#### `public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlatformUserResponse_1afb84ba974117532705d640d3f9d8eaf5)`()` <a id="structFRHAPI__PlatformUserResponse_1afb84ba974117532705d640d3f9d8eaf5"></a>

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.

#### `public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PlatformUserResponse_1a96a8b8dee4552a4c297159ebd623ea33)`() const` <a id="structFRHAPI__PlatformUserResponse_1a96a8b8dee4552a4c297159ebd623ea33"></a>

Returns true if ActivePlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PlatformUserResponse_1aed7a5f7a1d8d9ebdb0b2eb1099a9d069)`()` <a id="structFRHAPI__PlatformUserResponse_1aed7a5f7a1d8d9ebdb0b2eb1099a9d069"></a>

Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.

#### `public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1ae6b0c1cd02488434af4c3cf70e21efb4)`()` <a id="structFRHAPI__PlatformUserResponse_1ae6b0c1cd02488434af4c3cf70e21efb4"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a413aa342a85438eee06aa09daa28c94a)`() const` <a id="structFRHAPI__PlatformUserResponse_1a413aa342a85438eee06aa09daa28c94a"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1afec8edf5f68e4c70cd517d3390cd2c85)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlatformUserResponse_1afec8edf5f68e4c70cd517d3390cd2c85"></a>

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a70555e4f90391a3f31d355e5a4d7b0b7)`(FGuid & OutValue) const` <a id="structFRHAPI__PlatformUserResponse_1a70555e4f90391a3f31d355e5a4d7b0b7"></a>

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1ae2417d7b7226050c1946a7e03c56d3a2)`()` <a id="structFRHAPI__PlatformUserResponse_1ae2417d7b7226050c1946a7e03c56d3a2"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1a08fca4f21a840a84f4a1b2ab925f4fa0)`() const` <a id="structFRHAPI__PlatformUserResponse_1a08fca4f21a840a84f4a1b2ab925f4fa0"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a4d2e69c1d2dedb90e5f033b6d1671a75)`(FGuid NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a4d2e69c1d2dedb90e5f033b6d1671a75"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.

#### `public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1ac732875511b55956fcd144638593c3f0)`()` <a id="structFRHAPI__PlatformUserResponse_1ac732875511b55956fcd144638593c3f0"></a>

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

