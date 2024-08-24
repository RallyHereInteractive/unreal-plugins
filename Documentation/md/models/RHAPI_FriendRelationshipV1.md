# group `RHAPI_FriendRelationshipV1` <a id="group__RHAPI__FriendRelationshipV1"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FriendRelationshipV1`](#structFRHAPI__FriendRelationshipV1) | Represents the relationship with a potential friend. V1 includes player_id and player_uuid.

---
title: FRHAPI_FriendRelationshipV1
---

```
struct FRHAPI_FriendRelationshipV1
  : public FRHAPI_Model
```

Represents the relationship with a potential friend. V1 includes player_id and player_uuid.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`FriendsPlayerUuid`](#structFRHAPI__FriendRelationshipV1_1a23b56a3672e1ad3d6a36754bab491c30) | 
`public int32 `[`FriendsPlayerId_Optional`](#structFRHAPI__FriendRelationshipV1_1a5b26fd42f238b4d79aacaf2ff0054d0f) | 
`public bool `[`FriendsPlayerId_IsSet`](#structFRHAPI__FriendRelationshipV1_1a889b41c1b2373be3ba93c20858de32f3) | true if FriendsPlayerId_Optional has been set to a value
`public ERHAPI_FriendshipStatus `[`Status`](#structFRHAPI__FriendRelationshipV1_1abff1f24fecc6eeb8be9be15c4d061195) | 
`public FString `[`Notes_Optional`](#structFRHAPI__FriendRelationshipV1_1a9fb229b7f12ae3cca981c92c6f7e7491) | 
`public bool `[`Notes_IsSet`](#structFRHAPI__FriendRelationshipV1_1a47248abcf13c7b15e3f0dedf35ed979e) | true if Notes_Optional has been set to a value
`public FDateTime `[`LastModifiedOn`](#structFRHAPI__FriendRelationshipV1_1a71e5b77ce982ad33be82daae3236b0f1) | 
`public virtual bool `[`FromJson`](#structFRHAPI__FriendRelationshipV1_1a5847b88fa897c71d07acf1d8b53890d4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FriendRelationshipV1_1a51f9b2a92ed9df7d64e5d77d688b236a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationshipV1_1ae09e5e5d3be8e29fd742d6b8fc0c976a)`()` | Gets the value of FriendsPlayerUuid.
`public inline const FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationshipV1_1a603c9200619c098479fd58b218dae130)`() const` | Gets the value of FriendsPlayerUuid.
`public inline void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationshipV1_1ade09ab75632bbe32fc0f1cd416327e72)`(const FGuid & NewValue)` | Sets the value of FriendsPlayerUuid.
`public inline void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationshipV1_1a5d9e723ff286d680e7fa8be2e34a2385)`(FGuid && NewValue)` | Sets the value of FriendsPlayerUuid using move semantics.
`public inline int32 & `[`GetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1ad28fcd121584ede5a8e2718de786079b)`()` | Gets the value of FriendsPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1abd50fd59f4842d6eca523058d245c571)`() const` | Gets the value of FriendsPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1a3f1d2c4c7bf309122114fe0e5567de94)`(const int32 & DefaultValue) const` | Gets the value of FriendsPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1af305d8f0d1bf9eb59150c24a386810b2)`(int32 & OutValue) const` | Fills OutValue with the value of FriendsPlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetFriendsPlayerIdOrNull`](#structFRHAPI__FriendRelationshipV1_1a02b618afd988f84c9970756faa5e7ace)`()` | Returns a pointer to FriendsPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetFriendsPlayerIdOrNull`](#structFRHAPI__FriendRelationshipV1_1ad6c45466f1d013786d1b37dc4e35dcc6)`() const` | Returns a pointer to FriendsPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1aa1876b5b82c67ecd77bc56f9e960da95)`(const int32 & NewValue)` | Sets the value of FriendsPlayerId_Optional and also sets FriendsPlayerId_IsSet to true.
`public inline void `[`SetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1a01ec81ba67013848f86934b31fac1a11)`(int32 && NewValue)` | Sets the value of FriendsPlayerId_Optional and also sets FriendsPlayerId_IsSet to true using move semantics.
`public inline void `[`ClearFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1a9f299a0d2c7c64960a44d6ee2d8f0c01)`()` | Clears the value of FriendsPlayerId_Optional and sets FriendsPlayerId_IsSet to false.
`public inline bool `[`IsFriendsPlayerIdSet`](#structFRHAPI__FriendRelationshipV1_1a7c835ed4bd31bb34f7fbf0662539a17a)`() const` | Checks whether FriendsPlayerId_Optional has been set.
`public inline bool `[`IsFriendsPlayerIdDefaultValue`](#structFRHAPI__FriendRelationshipV1_1af31f734d2234c4980bcfaa3818e6c959)`() const` | Returns true if FriendsPlayerId_Optional is set and matches the default value.
`public inline void `[`SetFriendsPlayerIdToDefault`](#structFRHAPI__FriendRelationshipV1_1a01513c503faa103f818bdb286631316a)`()` | Sets the value of FriendsPlayerId_Optional to its default and also sets FriendsPlayerId_IsSet to true.
`public inline ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationshipV1_1a50af0782f062afe2dfbbf1a54a54f1ea)`()` | Gets the value of Status.
`public inline const ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationshipV1_1af54a47a554d93246eec37a7d62c96017)`() const` | Gets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__FriendRelationshipV1_1afe6a74d11fe3755afdf725e71ff6fad4)`(const ERHAPI_FriendshipStatus & NewValue)` | Sets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__FriendRelationshipV1_1a2d60cee2e839b36d24059f915ce11816)`(ERHAPI_FriendshipStatus && NewValue)` | Sets the value of Status using move semantics.
`public inline FString & `[`GetNotes`](#structFRHAPI__FriendRelationshipV1_1a426ede96c1cb73b5af3d707ca176d84e)`()` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__FriendRelationshipV1_1abe77031a34d5f9497656f0960bd0fe4c)`() const` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__FriendRelationshipV1_1af4951327497ae0f632cc316693d0aa3d)`(const FString & DefaultValue) const` | Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNotes`](#structFRHAPI__FriendRelationshipV1_1aa3f8ddf6a3905e5b95aaa3f67b0cd754)`(FString & OutValue) const` | Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationshipV1_1a66db5c6c995abc966146efd7768f8919)`()` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationshipV1_1abb35587d475e3007ec3e635a43f4a1d0)`() const` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNotes`](#structFRHAPI__FriendRelationshipV1_1a9d1c5fe1eb7ae1ad6c9236fd6b914712)`(const FString & NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true.
`public inline void `[`SetNotes`](#structFRHAPI__FriendRelationshipV1_1a17b159f0ebfb201980fa197b6d2d88f7)`(FString && NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.
`public inline void `[`ClearNotes`](#structFRHAPI__FriendRelationshipV1_1a167ae4b14a2577434b585bbebc2a24c0)`()` | Clears the value of Notes_Optional and sets Notes_IsSet to false.
`public inline bool `[`IsNotesSet`](#structFRHAPI__FriendRelationshipV1_1a37496930c1e57ad29dede64a00f7951b)`() const` | Checks whether Notes_Optional has been set.
`public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationshipV1_1ad2056206ccb715fda25af81a14315d3d)`()` | Gets the value of LastModifiedOn.
`public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationshipV1_1a1e2082e0e74f07f05d5d201632b249f2)`() const` | Gets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationshipV1_1a7d233eeaef813489e235eb00b6ef8021)`(const FDateTime & NewValue)` | Sets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationshipV1_1abee4feab0ea2f093e9e5a5e41f176759)`(FDateTime && NewValue)` | Sets the value of LastModifiedOn using move semantics.

### Members

#### `public FGuid `[`FriendsPlayerUuid`](#structFRHAPI__FriendRelationshipV1_1a23b56a3672e1ad3d6a36754bab491c30) <a id="structFRHAPI__FriendRelationshipV1_1a23b56a3672e1ad3d6a36754bab491c30"></a>

#### `public int32 `[`FriendsPlayerId_Optional`](#structFRHAPI__FriendRelationshipV1_1a5b26fd42f238b4d79aacaf2ff0054d0f) <a id="structFRHAPI__FriendRelationshipV1_1a5b26fd42f238b4d79aacaf2ff0054d0f"></a>

#### `public bool `[`FriendsPlayerId_IsSet`](#structFRHAPI__FriendRelationshipV1_1a889b41c1b2373be3ba93c20858de32f3) <a id="structFRHAPI__FriendRelationshipV1_1a889b41c1b2373be3ba93c20858de32f3"></a>

true if FriendsPlayerId_Optional has been set to a value

#### `public ERHAPI_FriendshipStatus `[`Status`](#structFRHAPI__FriendRelationshipV1_1abff1f24fecc6eeb8be9be15c4d061195) <a id="structFRHAPI__FriendRelationshipV1_1abff1f24fecc6eeb8be9be15c4d061195"></a>

#### `public FString `[`Notes_Optional`](#structFRHAPI__FriendRelationshipV1_1a9fb229b7f12ae3cca981c92c6f7e7491) <a id="structFRHAPI__FriendRelationshipV1_1a9fb229b7f12ae3cca981c92c6f7e7491"></a>

#### `public bool `[`Notes_IsSet`](#structFRHAPI__FriendRelationshipV1_1a47248abcf13c7b15e3f0dedf35ed979e) <a id="structFRHAPI__FriendRelationshipV1_1a47248abcf13c7b15e3f0dedf35ed979e"></a>

true if Notes_Optional has been set to a value

#### `public FDateTime `[`LastModifiedOn`](#structFRHAPI__FriendRelationshipV1_1a71e5b77ce982ad33be82daae3236b0f1) <a id="structFRHAPI__FriendRelationshipV1_1a71e5b77ce982ad33be82daae3236b0f1"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__FriendRelationshipV1_1a5847b88fa897c71d07acf1d8b53890d4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FriendRelationshipV1_1a5847b88fa897c71d07acf1d8b53890d4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FriendRelationshipV1_1a51f9b2a92ed9df7d64e5d77d688b236a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__FriendRelationshipV1_1a51f9b2a92ed9df7d64e5d77d688b236a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationshipV1_1ae09e5e5d3be8e29fd742d6b8fc0c976a)`()` <a id="structFRHAPI__FriendRelationshipV1_1ae09e5e5d3be8e29fd742d6b8fc0c976a"></a>

Gets the value of FriendsPlayerUuid.

#### `public inline const FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationshipV1_1a603c9200619c098479fd58b218dae130)`() const` <a id="structFRHAPI__FriendRelationshipV1_1a603c9200619c098479fd58b218dae130"></a>

Gets the value of FriendsPlayerUuid.

#### `public inline void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationshipV1_1ade09ab75632bbe32fc0f1cd416327e72)`(const FGuid & NewValue)` <a id="structFRHAPI__FriendRelationshipV1_1ade09ab75632bbe32fc0f1cd416327e72"></a>

Sets the value of FriendsPlayerUuid.

#### `public inline void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationshipV1_1a5d9e723ff286d680e7fa8be2e34a2385)`(FGuid && NewValue)` <a id="structFRHAPI__FriendRelationshipV1_1a5d9e723ff286d680e7fa8be2e34a2385"></a>

Sets the value of FriendsPlayerUuid using move semantics.

#### `public inline int32 & `[`GetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1ad28fcd121584ede5a8e2718de786079b)`()` <a id="structFRHAPI__FriendRelationshipV1_1ad28fcd121584ede5a8e2718de786079b"></a>

Gets the value of FriendsPlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1abd50fd59f4842d6eca523058d245c571)`() const` <a id="structFRHAPI__FriendRelationshipV1_1abd50fd59f4842d6eca523058d245c571"></a>

Gets the value of FriendsPlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1a3f1d2c4c7bf309122114fe0e5567de94)`(const int32 & DefaultValue) const` <a id="structFRHAPI__FriendRelationshipV1_1a3f1d2c4c7bf309122114fe0e5567de94"></a>

Gets the value of FriendsPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1af305d8f0d1bf9eb59150c24a386810b2)`(int32 & OutValue) const` <a id="structFRHAPI__FriendRelationshipV1_1af305d8f0d1bf9eb59150c24a386810b2"></a>

Fills OutValue with the value of FriendsPlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetFriendsPlayerIdOrNull`](#structFRHAPI__FriendRelationshipV1_1a02b618afd988f84c9970756faa5e7ace)`()` <a id="structFRHAPI__FriendRelationshipV1_1a02b618afd988f84c9970756faa5e7ace"></a>

Returns a pointer to FriendsPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetFriendsPlayerIdOrNull`](#structFRHAPI__FriendRelationshipV1_1ad6c45466f1d013786d1b37dc4e35dcc6)`() const` <a id="structFRHAPI__FriendRelationshipV1_1ad6c45466f1d013786d1b37dc4e35dcc6"></a>

Returns a pointer to FriendsPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1aa1876b5b82c67ecd77bc56f9e960da95)`(const int32 & NewValue)` <a id="structFRHAPI__FriendRelationshipV1_1aa1876b5b82c67ecd77bc56f9e960da95"></a>

Sets the value of FriendsPlayerId_Optional and also sets FriendsPlayerId_IsSet to true.

#### `public inline void `[`SetFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1a01ec81ba67013848f86934b31fac1a11)`(int32 && NewValue)` <a id="structFRHAPI__FriendRelationshipV1_1a01ec81ba67013848f86934b31fac1a11"></a>

Sets the value of FriendsPlayerId_Optional and also sets FriendsPlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearFriendsPlayerId`](#structFRHAPI__FriendRelationshipV1_1a9f299a0d2c7c64960a44d6ee2d8f0c01)`()` <a id="structFRHAPI__FriendRelationshipV1_1a9f299a0d2c7c64960a44d6ee2d8f0c01"></a>

Clears the value of FriendsPlayerId_Optional and sets FriendsPlayerId_IsSet to false.

#### `public inline bool `[`IsFriendsPlayerIdSet`](#structFRHAPI__FriendRelationshipV1_1a7c835ed4bd31bb34f7fbf0662539a17a)`() const` <a id="structFRHAPI__FriendRelationshipV1_1a7c835ed4bd31bb34f7fbf0662539a17a"></a>

Checks whether FriendsPlayerId_Optional has been set.

#### `public inline bool `[`IsFriendsPlayerIdDefaultValue`](#structFRHAPI__FriendRelationshipV1_1af31f734d2234c4980bcfaa3818e6c959)`() const` <a id="structFRHAPI__FriendRelationshipV1_1af31f734d2234c4980bcfaa3818e6c959"></a>

Returns true if FriendsPlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetFriendsPlayerIdToDefault`](#structFRHAPI__FriendRelationshipV1_1a01513c503faa103f818bdb286631316a)`()` <a id="structFRHAPI__FriendRelationshipV1_1a01513c503faa103f818bdb286631316a"></a>

Sets the value of FriendsPlayerId_Optional to its default and also sets FriendsPlayerId_IsSet to true.

#### `public inline ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationshipV1_1a50af0782f062afe2dfbbf1a54a54f1ea)`()` <a id="structFRHAPI__FriendRelationshipV1_1a50af0782f062afe2dfbbf1a54a54f1ea"></a>

Gets the value of Status.

#### `public inline const ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationshipV1_1af54a47a554d93246eec37a7d62c96017)`() const` <a id="structFRHAPI__FriendRelationshipV1_1af54a47a554d93246eec37a7d62c96017"></a>

Gets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__FriendRelationshipV1_1afe6a74d11fe3755afdf725e71ff6fad4)`(const ERHAPI_FriendshipStatus & NewValue)` <a id="structFRHAPI__FriendRelationshipV1_1afe6a74d11fe3755afdf725e71ff6fad4"></a>

Sets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__FriendRelationshipV1_1a2d60cee2e839b36d24059f915ce11816)`(ERHAPI_FriendshipStatus && NewValue)` <a id="structFRHAPI__FriendRelationshipV1_1a2d60cee2e839b36d24059f915ce11816"></a>

Sets the value of Status using move semantics.

#### `public inline FString & `[`GetNotes`](#structFRHAPI__FriendRelationshipV1_1a426ede96c1cb73b5af3d707ca176d84e)`()` <a id="structFRHAPI__FriendRelationshipV1_1a426ede96c1cb73b5af3d707ca176d84e"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNotes`](#structFRHAPI__FriendRelationshipV1_1abe77031a34d5f9497656f0960bd0fe4c)`() const` <a id="structFRHAPI__FriendRelationshipV1_1abe77031a34d5f9497656f0960bd0fe4c"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNotes`](#structFRHAPI__FriendRelationshipV1_1af4951327497ae0f632cc316693d0aa3d)`(const FString & DefaultValue) const` <a id="structFRHAPI__FriendRelationshipV1_1af4951327497ae0f632cc316693d0aa3d"></a>

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNotes`](#structFRHAPI__FriendRelationshipV1_1aa3f8ddf6a3905e5b95aaa3f67b0cd754)`(FString & OutValue) const` <a id="structFRHAPI__FriendRelationshipV1_1aa3f8ddf6a3905e5b95aaa3f67b0cd754"></a>

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationshipV1_1a66db5c6c995abc966146efd7768f8919)`()` <a id="structFRHAPI__FriendRelationshipV1_1a66db5c6c995abc966146efd7768f8919"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationshipV1_1abb35587d475e3007ec3e635a43f4a1d0)`() const` <a id="structFRHAPI__FriendRelationshipV1_1abb35587d475e3007ec3e635a43f4a1d0"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNotes`](#structFRHAPI__FriendRelationshipV1_1a9d1c5fe1eb7ae1ad6c9236fd6b914712)`(const FString & NewValue)` <a id="structFRHAPI__FriendRelationshipV1_1a9d1c5fe1eb7ae1ad6c9236fd6b914712"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true.

#### `public inline void `[`SetNotes`](#structFRHAPI__FriendRelationshipV1_1a17b159f0ebfb201980fa197b6d2d88f7)`(FString && NewValue)` <a id="structFRHAPI__FriendRelationshipV1_1a17b159f0ebfb201980fa197b6d2d88f7"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.

#### `public inline void `[`ClearNotes`](#structFRHAPI__FriendRelationshipV1_1a167ae4b14a2577434b585bbebc2a24c0)`()` <a id="structFRHAPI__FriendRelationshipV1_1a167ae4b14a2577434b585bbebc2a24c0"></a>

Clears the value of Notes_Optional and sets Notes_IsSet to false.

#### `public inline bool `[`IsNotesSet`](#structFRHAPI__FriendRelationshipV1_1a37496930c1e57ad29dede64a00f7951b)`() const` <a id="structFRHAPI__FriendRelationshipV1_1a37496930c1e57ad29dede64a00f7951b"></a>

Checks whether Notes_Optional has been set.

#### `public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationshipV1_1ad2056206ccb715fda25af81a14315d3d)`()` <a id="structFRHAPI__FriendRelationshipV1_1ad2056206ccb715fda25af81a14315d3d"></a>

Gets the value of LastModifiedOn.

#### `public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationshipV1_1a1e2082e0e74f07f05d5d201632b249f2)`() const` <a id="structFRHAPI__FriendRelationshipV1_1a1e2082e0e74f07f05d5d201632b249f2"></a>

Gets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationshipV1_1a7d233eeaef813489e235eb00b6ef8021)`(const FDateTime & NewValue)` <a id="structFRHAPI__FriendRelationshipV1_1a7d233eeaef813489e235eb00b6ef8021"></a>

Sets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationshipV1_1abee4feab0ea2f093e9e5a5e41f176759)`(FDateTime && NewValue)` <a id="structFRHAPI__FriendRelationshipV1_1abee4feab0ea2f093e9e5a5e41f176759"></a>

Sets the value of LastModifiedOn using move semantics.

