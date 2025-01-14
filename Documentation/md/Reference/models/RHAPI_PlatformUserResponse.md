---
title: RHAPI_PlatformUserResponse
---

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

### Summary

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
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserResponse_1a44a8104467f51ee4e94b2f7f66de9f47)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserResponse_1a902f0a857b19b2b56d63c69250aa1b45)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a3b5ca4819052fcea11833bd52fa23b68)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a1699e43c1d4c662e5bf6b687a6b3502e)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserResponse_1a377377680ec35199220d84d7a21810b7)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserResponse_1a0743c0f85d816dd6bef7d8f5ec7560f4)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a69e40e2c3f172e04230b021e1e81481f)`()` | Gets the value of PlatformUserId.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1add35cd8a8f6f8e773217c8471d79cd6b)`() const` | Gets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a56fd1a79b6bafebd9d838cbda55fc999)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a64d15daf371f2088093e207a42b4f8b4)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1adbd07ad546ed5aa91d084408d139fda3)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1ae787607b0ff208f3be2516c6209a480a)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a726d087de18ba077c77344c899503711)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1ab219b827a34ff526c173b4d634dc0ad1)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1af13cb942123082a90258d9a2384e0835)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1ae9e8dcd135286f592f81184df0f6c467)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDisplayName`](#structFRHAPI__PlatformUserResponse_1a0556fddd45d01f91bac2a9d675880803)`(const FString & NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline void `[`SetDisplayName`](#structFRHAPI__PlatformUserResponse_1a15904ed9cd3cdb4668985956acb2d1ff)`(FString && NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.
`public inline void `[`ClearDisplayName`](#structFRHAPI__PlatformUserResponse_1a867c074fe63e383a69916ce2496f65ff)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.
`public inline bool `[`IsDisplayNameSet`](#structFRHAPI__PlatformUserResponse_1a1962dd4c078e1a49c952c804482618ad)`() const` | Checks whether DisplayName_Optional has been set.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1aeac0d17c8f02d7381ce773bc77867972)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1a0d63b9789c6a624aa370d02fd283ed20)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlatformUserResponse_1a412ddedf30aa8c550028bd3998cc0c0f)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlatformUserResponse_1ac471ca18ed83d0700ac27e3131e7c598)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlatformUserResponse_1a8f9c2131d18b305f4afe71b9c3857ca1)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlatformUserResponse_1a12c5723de977c41c19321ae97affe462)`()` | Sets the value of PlayerId to its default
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1aafa74d896a63cfd7cc2f715406ca6d38)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1ac651e104070748522e4602962ff7cf10)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1aa4aacd32d0267c27362088f2660d89cf)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1a0c1785c9218f1b284ad8e54c8882ddbd)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1a13d4031b2f8282d4563494759c2f2409)`()` | Gets the value of PersonId.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1a70acb89429435e351b48af13e32b162f)`() const` | Gets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__PlatformUserResponse_1a259f4f6142737fb1b98736fe471749bf)`(const FGuid & NewValue)` | Sets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__PlatformUserResponse_1a88afcdb5db760d524520634b2de50427)`(FGuid && NewValue)` | Sets the value of PersonId using move semantics.
`public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1aee149098f6d0c25427cc812b427142ad)`()` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a66bb15b48e46420013255db21768df7b)`() const` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a28a185d94ec5c7bfcfd3b51bbd535918)`(const int32 & DefaultValue) const` | Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1aab6b29ef919af2bc7f9ce25011e13c36)`(int32 & OutValue) const` | Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1a5833e81fd87c12cb653ec6c4e027b972)`()` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1ae5a8dc306f264a81bb49935a55c4fb78)`() const` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a6427703804c535344c327db6537a5aac)`(const int32 & NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a97447fcdcbd78156fa9bf077a1f30b3a)`(int32 && NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlatformUserResponse_1afb84ba974117532705d640d3f9d8eaf5)`()` | Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.
`public inline bool `[`IsActivePlayerIdSet`](#structFRHAPI__PlatformUserResponse_1aa27e5e8423387f1d0db6bc7791c359c7)`() const` | Checks whether ActivePlayerId_Optional has been set.
`public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PlatformUserResponse_1a96a8b8dee4552a4c297159ebd623ea33)`() const` | Returns true if ActivePlayerId_Optional is set and matches the default value.
`public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PlatformUserResponse_1aed7a5f7a1d8d9ebdb0b2eb1099a9d069)`()` | Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.
`public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a4527321f588205ce96e38b85b434edf4)`()` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a63b6229aac540872a865d4bf405aed5f)`() const` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a67871b113e96127a399692ce09c7a827)`(const FGuid & DefaultValue) const` | Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a70555e4f90391a3f31d355e5a4d7b0b7)`(FGuid & OutValue) const` | Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1a425bc38a04d121895ac989aa56bab829)`()` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1a3044f69325487c06ca12e61070415c8f)`() const` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1ae9880caf59ae92cd3bd3f0dd1de7d7e8)`(const FGuid & NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a6472ff0d766b92f19d45a6348a04bee0)`(FGuid && NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1ac732875511b55956fcd144638593c3f0)`()` | Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.
`public inline bool `[`IsActivePlayerUuidSet`](#structFRHAPI__PlatformUserResponse_1a2384ba3d2cb90392a5dbd83aa67db1fb)`() const` | Checks whether ActivePlayerUuid_Optional has been set.

### Members

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserResponse_1a44a8104467f51ee4e94b2f7f66de9f47)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformUserResponse_1a44a8104467f51ee4e94b2f7f66de9f47"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserResponse_1a902f0a857b19b2b56d63c69250aa1b45)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformUserResponse_1a902f0a857b19b2b56d63c69250aa1b45"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a3b5ca4819052fcea11833bd52fa23b68)`()` <a id="structFRHAPI__PlatformUserResponse_1a3b5ca4819052fcea11833bd52fa23b68"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a1699e43c1d4c662e5bf6b687a6b3502e)`() const` <a id="structFRHAPI__PlatformUserResponse_1a1699e43c1d4c662e5bf6b687a6b3502e"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserResponse_1a377377680ec35199220d84d7a21810b7)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a377377680ec35199220d84d7a21810b7"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformUserResponse_1a0743c0f85d816dd6bef7d8f5ec7560f4)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a0743c0f85d816dd6bef7d8f5ec7560f4"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a69e40e2c3f172e04230b021e1e81481f)`()` <a id="structFRHAPI__PlatformUserResponse_1a69e40e2c3f172e04230b021e1e81481f"></a>

Gets the value of PlatformUserId.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1add35cd8a8f6f8e773217c8471d79cd6b)`() const` <a id="structFRHAPI__PlatformUserResponse_1add35cd8a8f6f8e773217c8471d79cd6b"></a>

Gets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a56fd1a79b6bafebd9d838cbda55fc999)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a56fd1a79b6bafebd9d838cbda55fc999"></a>

Sets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a64d15daf371f2088093e207a42b4f8b4)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a64d15daf371f2088093e207a42b4f8b4"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1adbd07ad546ed5aa91d084408d139fda3)`()` <a id="structFRHAPI__PlatformUserResponse_1adbd07ad546ed5aa91d084408d139fda3"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1ae787607b0ff208f3be2516c6209a480a)`() const` <a id="structFRHAPI__PlatformUserResponse_1ae787607b0ff208f3be2516c6209a480a"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a726d087de18ba077c77344c899503711)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserResponse_1a726d087de18ba077c77344c899503711"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1ab219b827a34ff526c173b4d634dc0ad1)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserResponse_1ab219b827a34ff526c173b4d634dc0ad1"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1af13cb942123082a90258d9a2384e0835)`()` <a id="structFRHAPI__PlatformUserResponse_1af13cb942123082a90258d9a2384e0835"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1ae9e8dcd135286f592f81184df0f6c467)`() const` <a id="structFRHAPI__PlatformUserResponse_1ae9e8dcd135286f592f81184df0f6c467"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PlatformUserResponse_1a0556fddd45d01f91bac2a9d675880803)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a0556fddd45d01f91bac2a9d675880803"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PlatformUserResponse_1a15904ed9cd3cdb4668985956acb2d1ff)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a15904ed9cd3cdb4668985956acb2d1ff"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__PlatformUserResponse_1a867c074fe63e383a69916ce2496f65ff)`()` <a id="structFRHAPI__PlatformUserResponse_1a867c074fe63e383a69916ce2496f65ff"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline bool `[`IsDisplayNameSet`](#structFRHAPI__PlatformUserResponse_1a1962dd4c078e1a49c952c804482618ad)`() const` <a id="structFRHAPI__PlatformUserResponse_1a1962dd4c078e1a49c952c804482618ad"></a>

Checks whether DisplayName_Optional has been set.

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1aeac0d17c8f02d7381ce773bc77867972)`()` <a id="structFRHAPI__PlatformUserResponse_1aeac0d17c8f02d7381ce773bc77867972"></a>

Gets the value of PlayerId.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1a0d63b9789c6a624aa370d02fd283ed20)`() const` <a id="structFRHAPI__PlatformUserResponse_1a0d63b9789c6a624aa370d02fd283ed20"></a>

Gets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlatformUserResponse_1a412ddedf30aa8c550028bd3998cc0c0f)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a412ddedf30aa8c550028bd3998cc0c0f"></a>

Sets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlatformUserResponse_1ac471ca18ed83d0700ac27e3131e7c598)`(int32 && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1ac471ca18ed83d0700ac27e3131e7c598"></a>

Sets the value of PlayerId using move semantics.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlatformUserResponse_1a8f9c2131d18b305f4afe71b9c3857ca1)`() const` <a id="structFRHAPI__PlatformUserResponse_1a8f9c2131d18b305f4afe71b9c3857ca1"></a>

Returns true if PlayerId matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlatformUserResponse_1a12c5723de977c41c19321ae97affe462)`()` <a id="structFRHAPI__PlatformUserResponse_1a12c5723de977c41c19321ae97affe462"></a>

Sets the value of PlayerId to its default

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1aafa74d896a63cfd7cc2f715406ca6d38)`()` <a id="structFRHAPI__PlatformUserResponse_1aafa74d896a63cfd7cc2f715406ca6d38"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1ac651e104070748522e4602962ff7cf10)`() const` <a id="structFRHAPI__PlatformUserResponse_1ac651e104070748522e4602962ff7cf10"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1aa4aacd32d0267c27362088f2660d89cf)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1aa4aacd32d0267c27362088f2660d89cf"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1a0c1785c9218f1b284ad8e54c8882ddbd)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a0c1785c9218f1b284ad8e54c8882ddbd"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1a13d4031b2f8282d4563494759c2f2409)`()` <a id="structFRHAPI__PlatformUserResponse_1a13d4031b2f8282d4563494759c2f2409"></a>

Gets the value of PersonId.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1a70acb89429435e351b48af13e32b162f)`() const` <a id="structFRHAPI__PlatformUserResponse_1a70acb89429435e351b48af13e32b162f"></a>

Gets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PlatformUserResponse_1a259f4f6142737fb1b98736fe471749bf)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a259f4f6142737fb1b98736fe471749bf"></a>

Sets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PlatformUserResponse_1a88afcdb5db760d524520634b2de50427)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a88afcdb5db760d524520634b2de50427"></a>

Sets the value of PersonId using move semantics.

#### `public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1aee149098f6d0c25427cc812b427142ad)`()` <a id="structFRHAPI__PlatformUserResponse_1aee149098f6d0c25427cc812b427142ad"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a66bb15b48e46420013255db21768df7b)`() const` <a id="structFRHAPI__PlatformUserResponse_1a66bb15b48e46420013255db21768df7b"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a28a185d94ec5c7bfcfd3b51bbd535918)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformUserResponse_1a28a185d94ec5c7bfcfd3b51bbd535918"></a>

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1aab6b29ef919af2bc7f9ce25011e13c36)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformUserResponse_1aab6b29ef919af2bc7f9ce25011e13c36"></a>

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1a5833e81fd87c12cb653ec6c4e027b972)`()` <a id="structFRHAPI__PlatformUserResponse_1a5833e81fd87c12cb653ec6c4e027b972"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1ae5a8dc306f264a81bb49935a55c4fb78)`() const` <a id="structFRHAPI__PlatformUserResponse_1ae5a8dc306f264a81bb49935a55c4fb78"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a6427703804c535344c327db6537a5aac)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a6427703804c535344c327db6537a5aac"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.

#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a97447fcdcbd78156fa9bf077a1f30b3a)`(int32 && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a97447fcdcbd78156fa9bf077a1f30b3a"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlatformUserResponse_1afb84ba974117532705d640d3f9d8eaf5)`()` <a id="structFRHAPI__PlatformUserResponse_1afb84ba974117532705d640d3f9d8eaf5"></a>

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.

#### `public inline bool `[`IsActivePlayerIdSet`](#structFRHAPI__PlatformUserResponse_1aa27e5e8423387f1d0db6bc7791c359c7)`() const` <a id="structFRHAPI__PlatformUserResponse_1aa27e5e8423387f1d0db6bc7791c359c7"></a>

Checks whether ActivePlayerId_Optional has been set.

#### `public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PlatformUserResponse_1a96a8b8dee4552a4c297159ebd623ea33)`() const` <a id="structFRHAPI__PlatformUserResponse_1a96a8b8dee4552a4c297159ebd623ea33"></a>

Returns true if ActivePlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PlatformUserResponse_1aed7a5f7a1d8d9ebdb0b2eb1099a9d069)`()` <a id="structFRHAPI__PlatformUserResponse_1aed7a5f7a1d8d9ebdb0b2eb1099a9d069"></a>

Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.

#### `public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a4527321f588205ce96e38b85b434edf4)`()` <a id="structFRHAPI__PlatformUserResponse_1a4527321f588205ce96e38b85b434edf4"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a63b6229aac540872a865d4bf405aed5f)`() const` <a id="structFRHAPI__PlatformUserResponse_1a63b6229aac540872a865d4bf405aed5f"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a67871b113e96127a399692ce09c7a827)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlatformUserResponse_1a67871b113e96127a399692ce09c7a827"></a>

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a70555e4f90391a3f31d355e5a4d7b0b7)`(FGuid & OutValue) const` <a id="structFRHAPI__PlatformUserResponse_1a70555e4f90391a3f31d355e5a4d7b0b7"></a>

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1a425bc38a04d121895ac989aa56bab829)`()` <a id="structFRHAPI__PlatformUserResponse_1a425bc38a04d121895ac989aa56bab829"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1a3044f69325487c06ca12e61070415c8f)`() const` <a id="structFRHAPI__PlatformUserResponse_1a3044f69325487c06ca12e61070415c8f"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1ae9880caf59ae92cd3bd3f0dd1de7d7e8)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1ae9880caf59ae92cd3bd3f0dd1de7d7e8"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.

#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a6472ff0d766b92f19d45a6348a04bee0)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a6472ff0d766b92f19d45a6348a04bee0"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1ac732875511b55956fcd144638593c3f0)`()` <a id="structFRHAPI__PlatformUserResponse_1ac732875511b55956fcd144638593c3f0"></a>

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

#### `public inline bool `[`IsActivePlayerUuidSet`](#structFRHAPI__PlatformUserResponse_1a2384ba3d2cb90392a5dbd83aa67db1fb)`() const` <a id="structFRHAPI__PlatformUserResponse_1a2384ba3d2cb90392a5dbd83aa67db1fb"></a>

Checks whether ActivePlayerUuid_Optional has been set.

