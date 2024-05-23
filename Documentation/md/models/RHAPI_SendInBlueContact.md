# group `RHAPI_SendInBlueContact` <a id="group__RHAPI__SendInBlueContact"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SendInBlueContact`](#structFRHAPI__SendInBlueContact) | SendInBlue contact.

## struct `FRHAPI_SendInBlueContact` <a id="structFRHAPI__SendInBlueContact"></a>

```
struct FRHAPI_SendInBlueContact
  : public FRHAPI_Model
```

SendInBlue contact.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Email`](#structFRHAPI__SendInBlueContact_1aa5f9c11c8565c4f5de86c3296bd82ec5) | Email address.
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`Attributes_Optional`](#structFRHAPI__SendInBlueContact_1a768398f30f35727e97ae0553e80fdccb) | Attributes.
`public bool `[`Attributes_IsSet`](#structFRHAPI__SendInBlueContact_1ad2a67f41968390d4cf2677aa34479667) | true if Attributes_Optional has been set to a value
`public bool `[`EmailBlacklisted_Optional`](#structFRHAPI__SendInBlueContact_1a4eb54281e103d49aa7a401f1a4380843) | Email blacklisted.
`public bool `[`EmailBlacklisted_IsSet`](#structFRHAPI__SendInBlueContact_1adb78d96f39655a66f12d5e76393649ab) | true if EmailBlacklisted_Optional has been set to a value
`public TArray< int32 > `[`ListIds_Optional`](#structFRHAPI__SendInBlueContact_1afd9ccd77f63a9a86a39a8cf17ed4667c) | List IDs.
`public bool `[`ListIds_IsSet`](#structFRHAPI__SendInBlueContact_1ac9547f84f1829532edee0b6ff99ed08c) | true if ListIds_Optional has been set to a value
`public TArray< int32 > `[`UnlinkListIds_Optional`](#structFRHAPI__SendInBlueContact_1a1faa2eb247b45d3fe26774ec02aad67f) | Unlink list IDs.
`public bool `[`UnlinkListIds_IsSet`](#structFRHAPI__SendInBlueContact_1a229c851fe9bc2c4e48ae3249962279fc) | true if UnlinkListIds_Optional has been set to a value
`public bool `[`UpdateEnabled_Optional`](#structFRHAPI__SendInBlueContact_1a227fe444e6106d9b8ed68078776f8fb0) | Update enabled.
`public bool `[`UpdateEnabled_IsSet`](#structFRHAPI__SendInBlueContact_1a4479e2d747f83edd483a4864a864fd1b) | true if UpdateEnabled_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SendInBlueContact_1afd153a9f368a76d84691a109a842129a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SendInBlueContact_1afee18ef1912e56f08af2f4acab2559f8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEmail`](#structFRHAPI__SendInBlueContact_1a9101c7cf39e127ff7279718c6b55cc57)`()` | Gets the value of Email.
`public inline const FString & `[`GetEmail`](#structFRHAPI__SendInBlueContact_1a36347ad9d5cdbc08cb7ee81effa148f2)`() const` | Gets the value of Email.
`public inline void `[`SetEmail`](#structFRHAPI__SendInBlueContact_1a7ee0f172c9a2d456ace7df0e8aec93d5)`(const FString & NewValue)` | Sets the value of Email.
`public inline void `[`SetEmail`](#structFRHAPI__SendInBlueContact_1a5e91bbf4d1ac868f74f06361028a4771)`(FString && NewValue)` | Sets the value of Email using move semantics.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetAttributes`](#structFRHAPI__SendInBlueContact_1a963748048eef99851bc2f10fa9bda3df)`()` | Gets the value of Attributes_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetAttributes`](#structFRHAPI__SendInBlueContact_1ac90c7a20159c2e7de6f889d060851cf7)`() const` | Gets the value of Attributes_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetAttributes`](#structFRHAPI__SendInBlueContact_1af81a592a0dff653eccfad6582ea4968e)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of Attributes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAttributes`](#structFRHAPI__SendInBlueContact_1a4a327da48c9aa4cca9e11806011aa91d)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of Attributes_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetAttributesOrNull`](#structFRHAPI__SendInBlueContact_1adeb0c804608c728b4dc05084e9af205f)`()` | Returns a pointer to Attributes_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetAttributesOrNull`](#structFRHAPI__SendInBlueContact_1aad5a7574fde383d1bc926d3aa388525f)`() const` | Returns a pointer to Attributes_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAttributes`](#structFRHAPI__SendInBlueContact_1acfc6ea6eac649755e6e073b0f7790b6a)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of Attributes_Optional and also sets Attributes_IsSet to true.
`public inline void `[`SetAttributes`](#structFRHAPI__SendInBlueContact_1ad3a2f530398472138c022a08ba54936e)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of Attributes_Optional and also sets Attributes_IsSet to true using move semantics.
`public inline void `[`ClearAttributes`](#structFRHAPI__SendInBlueContact_1aef4f44a54a0b4ecb45e5c5c22a7c132d)`()` | Clears the value of Attributes_Optional and sets Attributes_IsSet to false.
`public inline bool & `[`GetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1a4cb2b041c5c82ad304fa0617a75ba47a)`()` | Gets the value of EmailBlacklisted_Optional, regardless of it having been set.
`public inline const bool & `[`GetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1af01e694637fd7f5638ae5778d343e056)`() const` | Gets the value of EmailBlacklisted_Optional, regardless of it having been set.
`public inline const bool & `[`GetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1a2eb8dc9f868b0e9e172b47d079ab9eb0)`(const bool & DefaultValue) const` | Gets the value of EmailBlacklisted_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1aa5cdc0ad2170d230d1047b8cbe7778db)`(bool & OutValue) const` | Fills OutValue with the value of EmailBlacklisted_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetEmailBlacklistedOrNull`](#structFRHAPI__SendInBlueContact_1a660a937eaa756a2d71fff735c3aa9436)`()` | Returns a pointer to EmailBlacklisted_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetEmailBlacklistedOrNull`](#structFRHAPI__SendInBlueContact_1a34a3540d16ac26b8e488a4fb349516a6)`() const` | Returns a pointer to EmailBlacklisted_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1affe6f004db21d47a38a850f47f917325)`(const bool & NewValue)` | Sets the value of EmailBlacklisted_Optional and also sets EmailBlacklisted_IsSet to true.
`public inline void `[`SetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1aa6d53f049c27af253a5eb57ccb037983)`(bool && NewValue)` | Sets the value of EmailBlacklisted_Optional and also sets EmailBlacklisted_IsSet to true using move semantics.
`public inline void `[`ClearEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1aa51a7edca5560903b8acb968619ecd99)`()` | Clears the value of EmailBlacklisted_Optional and sets EmailBlacklisted_IsSet to false.
`public inline bool `[`IsEmailBlacklistedDefaultValue`](#structFRHAPI__SendInBlueContact_1a4a2a76b3853bf3854b476494dac95097)`() const` | Returns true if EmailBlacklisted_Optional is set and matches the default value.
`public inline void `[`SetEmailBlacklistedToDefault`](#structFRHAPI__SendInBlueContact_1a3faf237e0b96ef466a21fcae40d5559d)`()` | Sets the value of EmailBlacklisted_Optional to its default and also sets EmailBlacklisted_IsSet to true.
`public inline TArray< int32 > & `[`GetListIds`](#structFRHAPI__SendInBlueContact_1a32996960334b43550b6df9697b90b0a4)`()` | Gets the value of ListIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetListIds`](#structFRHAPI__SendInBlueContact_1adb1b7f5eec28461c58d7fa82943677f2)`() const` | Gets the value of ListIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetListIds`](#structFRHAPI__SendInBlueContact_1ab2d5d9f75d40bb8afc3a19d559a8649f)`(const TArray< int32 > & DefaultValue) const` | Gets the value of ListIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetListIds`](#structFRHAPI__SendInBlueContact_1a8249ab6337f81af308b1f4732b2aa247)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of ListIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetListIdsOrNull`](#structFRHAPI__SendInBlueContact_1a5bf74841aedf5a249071e345a6c03f8d)`()` | Returns a pointer to ListIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetListIdsOrNull`](#structFRHAPI__SendInBlueContact_1a2d7041eeedde05ca54dc03780b156333)`() const` | Returns a pointer to ListIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetListIds`](#structFRHAPI__SendInBlueContact_1a71b5654973b7ccea4f7f7c8d6633aea1)`(const TArray< int32 > & NewValue)` | Sets the value of ListIds_Optional and also sets ListIds_IsSet to true.
`public inline void `[`SetListIds`](#structFRHAPI__SendInBlueContact_1a95ee5e8896ea8025697013d6457e9948)`(TArray< int32 > && NewValue)` | Sets the value of ListIds_Optional and also sets ListIds_IsSet to true using move semantics.
`public inline void `[`ClearListIds`](#structFRHAPI__SendInBlueContact_1a95e57bb78e908e0c7bca8bd9679c2d2b)`()` | Clears the value of ListIds_Optional and sets ListIds_IsSet to false.
`public inline TArray< int32 > & `[`GetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a563766947f346b8a0cef8f549387ec00)`()` | Gets the value of UnlinkListIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1acf3e46a654bec910195bbbdfe83808c5)`() const` | Gets the value of UnlinkListIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a8887d8085214adc583f8d545d2835c20)`(const TArray< int32 > & DefaultValue) const` | Gets the value of UnlinkListIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a3b7ce70c5d50167b41281d39332fee97)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of UnlinkListIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetUnlinkListIdsOrNull`](#structFRHAPI__SendInBlueContact_1ac7bb27671781916f209b93103b5f2abf)`()` | Returns a pointer to UnlinkListIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetUnlinkListIdsOrNull`](#structFRHAPI__SendInBlueContact_1a154612291299325cfd922ed11f9d1fbd)`() const` | Returns a pointer to UnlinkListIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a448f78df7895818270961eb728ce9feb)`(const TArray< int32 > & NewValue)` | Sets the value of UnlinkListIds_Optional and also sets UnlinkListIds_IsSet to true.
`public inline void `[`SetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a09c3dadcccc9fce6c847c54c026ca724)`(TArray< int32 > && NewValue)` | Sets the value of UnlinkListIds_Optional and also sets UnlinkListIds_IsSet to true using move semantics.
`public inline void `[`ClearUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a5b95f4f0c0e94242e0e66e3903529d8c)`()` | Clears the value of UnlinkListIds_Optional and sets UnlinkListIds_IsSet to false.
`public inline bool & `[`GetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1afae60bf8519d0a0f541be3d2a48b3449)`()` | Gets the value of UpdateEnabled_Optional, regardless of it having been set.
`public inline const bool & `[`GetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1ab5fd99bbe37670e4bff6f500ba283fe4)`() const` | Gets the value of UpdateEnabled_Optional, regardless of it having been set.
`public inline const bool & `[`GetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1a8da2f36f7ba4f777ff9d581f8aba8b93)`(const bool & DefaultValue) const` | Gets the value of UpdateEnabled_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1af29c3aa6e96928648158b714eeda3ada)`(bool & OutValue) const` | Fills OutValue with the value of UpdateEnabled_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetUpdateEnabledOrNull`](#structFRHAPI__SendInBlueContact_1a78910a3eb406e69a6b64f08934ee5259)`()` | Returns a pointer to UpdateEnabled_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetUpdateEnabledOrNull`](#structFRHAPI__SendInBlueContact_1a94363265bd68d18e2e6ccf8291e3aad4)`() const` | Returns a pointer to UpdateEnabled_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1a71c8090ef466e33f99cab533cfac7ca8)`(const bool & NewValue)` | Sets the value of UpdateEnabled_Optional and also sets UpdateEnabled_IsSet to true.
`public inline void `[`SetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1a5b510dc40f028c5b031412a20879c345)`(bool && NewValue)` | Sets the value of UpdateEnabled_Optional and also sets UpdateEnabled_IsSet to true using move semantics.
`public inline void `[`ClearUpdateEnabled`](#structFRHAPI__SendInBlueContact_1a6da8611cb3675b22593e034578a0886c)`()` | Clears the value of UpdateEnabled_Optional and sets UpdateEnabled_IsSet to false.
`public inline bool `[`IsUpdateEnabledDefaultValue`](#structFRHAPI__SendInBlueContact_1ad02e90be12448e9da0e518d7bed8872a)`() const` | Returns true if UpdateEnabled_Optional is set and matches the default value.
`public inline void `[`SetUpdateEnabledToDefault`](#structFRHAPI__SendInBlueContact_1af5524c67044a55e677378e61ff88f9e8)`()` | Sets the value of UpdateEnabled_Optional to its default and also sets UpdateEnabled_IsSet to true.

### Members

#### `public FString `[`Email`](#structFRHAPI__SendInBlueContact_1aa5f9c11c8565c4f5de86c3296bd82ec5) <a id="structFRHAPI__SendInBlueContact_1aa5f9c11c8565c4f5de86c3296bd82ec5"></a>

Email address.

#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`Attributes_Optional`](#structFRHAPI__SendInBlueContact_1a768398f30f35727e97ae0553e80fdccb) <a id="structFRHAPI__SendInBlueContact_1a768398f30f35727e97ae0553e80fdccb"></a>

Attributes.

#### `public bool `[`Attributes_IsSet`](#structFRHAPI__SendInBlueContact_1ad2a67f41968390d4cf2677aa34479667) <a id="structFRHAPI__SendInBlueContact_1ad2a67f41968390d4cf2677aa34479667"></a>

true if Attributes_Optional has been set to a value

#### `public bool `[`EmailBlacklisted_Optional`](#structFRHAPI__SendInBlueContact_1a4eb54281e103d49aa7a401f1a4380843) <a id="structFRHAPI__SendInBlueContact_1a4eb54281e103d49aa7a401f1a4380843"></a>

Email blacklisted.

#### `public bool `[`EmailBlacklisted_IsSet`](#structFRHAPI__SendInBlueContact_1adb78d96f39655a66f12d5e76393649ab) <a id="structFRHAPI__SendInBlueContact_1adb78d96f39655a66f12d5e76393649ab"></a>

true if EmailBlacklisted_Optional has been set to a value

#### `public TArray< int32 > `[`ListIds_Optional`](#structFRHAPI__SendInBlueContact_1afd9ccd77f63a9a86a39a8cf17ed4667c) <a id="structFRHAPI__SendInBlueContact_1afd9ccd77f63a9a86a39a8cf17ed4667c"></a>

List IDs.

#### `public bool `[`ListIds_IsSet`](#structFRHAPI__SendInBlueContact_1ac9547f84f1829532edee0b6ff99ed08c) <a id="structFRHAPI__SendInBlueContact_1ac9547f84f1829532edee0b6ff99ed08c"></a>

true if ListIds_Optional has been set to a value

#### `public TArray< int32 > `[`UnlinkListIds_Optional`](#structFRHAPI__SendInBlueContact_1a1faa2eb247b45d3fe26774ec02aad67f) <a id="structFRHAPI__SendInBlueContact_1a1faa2eb247b45d3fe26774ec02aad67f"></a>

Unlink list IDs.

#### `public bool `[`UnlinkListIds_IsSet`](#structFRHAPI__SendInBlueContact_1a229c851fe9bc2c4e48ae3249962279fc) <a id="structFRHAPI__SendInBlueContact_1a229c851fe9bc2c4e48ae3249962279fc"></a>

true if UnlinkListIds_Optional has been set to a value

#### `public bool `[`UpdateEnabled_Optional`](#structFRHAPI__SendInBlueContact_1a227fe444e6106d9b8ed68078776f8fb0) <a id="structFRHAPI__SendInBlueContact_1a227fe444e6106d9b8ed68078776f8fb0"></a>

Update enabled.

#### `public bool `[`UpdateEnabled_IsSet`](#structFRHAPI__SendInBlueContact_1a4479e2d747f83edd483a4864a864fd1b) <a id="structFRHAPI__SendInBlueContact_1a4479e2d747f83edd483a4864a864fd1b"></a>

true if UpdateEnabled_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SendInBlueContact_1afd153a9f368a76d84691a109a842129a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SendInBlueContact_1afd153a9f368a76d84691a109a842129a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SendInBlueContact_1afee18ef1912e56f08af2f4acab2559f8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SendInBlueContact_1afee18ef1912e56f08af2f4acab2559f8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetEmail`](#structFRHAPI__SendInBlueContact_1a9101c7cf39e127ff7279718c6b55cc57)`()` <a id="structFRHAPI__SendInBlueContact_1a9101c7cf39e127ff7279718c6b55cc57"></a>

Gets the value of Email.

#### `public inline const FString & `[`GetEmail`](#structFRHAPI__SendInBlueContact_1a36347ad9d5cdbc08cb7ee81effa148f2)`() const` <a id="structFRHAPI__SendInBlueContact_1a36347ad9d5cdbc08cb7ee81effa148f2"></a>

Gets the value of Email.

#### `public inline void `[`SetEmail`](#structFRHAPI__SendInBlueContact_1a7ee0f172c9a2d456ace7df0e8aec93d5)`(const FString & NewValue)` <a id="structFRHAPI__SendInBlueContact_1a7ee0f172c9a2d456ace7df0e8aec93d5"></a>

Sets the value of Email.

#### `public inline void `[`SetEmail`](#structFRHAPI__SendInBlueContact_1a5e91bbf4d1ac868f74f06361028a4771)`(FString && NewValue)` <a id="structFRHAPI__SendInBlueContact_1a5e91bbf4d1ac868f74f06361028a4771"></a>

Sets the value of Email using move semantics.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetAttributes`](#structFRHAPI__SendInBlueContact_1a963748048eef99851bc2f10fa9bda3df)`()` <a id="structFRHAPI__SendInBlueContact_1a963748048eef99851bc2f10fa9bda3df"></a>

Gets the value of Attributes_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetAttributes`](#structFRHAPI__SendInBlueContact_1ac90c7a20159c2e7de6f889d060851cf7)`() const` <a id="structFRHAPI__SendInBlueContact_1ac90c7a20159c2e7de6f889d060851cf7"></a>

Gets the value of Attributes_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetAttributes`](#structFRHAPI__SendInBlueContact_1af81a592a0dff653eccfad6582ea4968e)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__SendInBlueContact_1af81a592a0dff653eccfad6582ea4968e"></a>

Gets the value of Attributes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAttributes`](#structFRHAPI__SendInBlueContact_1a4a327da48c9aa4cca9e11806011aa91d)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__SendInBlueContact_1a4a327da48c9aa4cca9e11806011aa91d"></a>

Fills OutValue with the value of Attributes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetAttributesOrNull`](#structFRHAPI__SendInBlueContact_1adeb0c804608c728b4dc05084e9af205f)`()` <a id="structFRHAPI__SendInBlueContact_1adeb0c804608c728b4dc05084e9af205f"></a>

Returns a pointer to Attributes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetAttributesOrNull`](#structFRHAPI__SendInBlueContact_1aad5a7574fde383d1bc926d3aa388525f)`() const` <a id="structFRHAPI__SendInBlueContact_1aad5a7574fde383d1bc926d3aa388525f"></a>

Returns a pointer to Attributes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAttributes`](#structFRHAPI__SendInBlueContact_1acfc6ea6eac649755e6e073b0f7790b6a)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__SendInBlueContact_1acfc6ea6eac649755e6e073b0f7790b6a"></a>

Sets the value of Attributes_Optional and also sets Attributes_IsSet to true.

#### `public inline void `[`SetAttributes`](#structFRHAPI__SendInBlueContact_1ad3a2f530398472138c022a08ba54936e)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__SendInBlueContact_1ad3a2f530398472138c022a08ba54936e"></a>

Sets the value of Attributes_Optional and also sets Attributes_IsSet to true using move semantics.

#### `public inline void `[`ClearAttributes`](#structFRHAPI__SendInBlueContact_1aef4f44a54a0b4ecb45e5c5c22a7c132d)`()` <a id="structFRHAPI__SendInBlueContact_1aef4f44a54a0b4ecb45e5c5c22a7c132d"></a>

Clears the value of Attributes_Optional and sets Attributes_IsSet to false.

#### `public inline bool & `[`GetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1a4cb2b041c5c82ad304fa0617a75ba47a)`()` <a id="structFRHAPI__SendInBlueContact_1a4cb2b041c5c82ad304fa0617a75ba47a"></a>

Gets the value of EmailBlacklisted_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1af01e694637fd7f5638ae5778d343e056)`() const` <a id="structFRHAPI__SendInBlueContact_1af01e694637fd7f5638ae5778d343e056"></a>

Gets the value of EmailBlacklisted_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1a2eb8dc9f868b0e9e172b47d079ab9eb0)`(const bool & DefaultValue) const` <a id="structFRHAPI__SendInBlueContact_1a2eb8dc9f868b0e9e172b47d079ab9eb0"></a>

Gets the value of EmailBlacklisted_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1aa5cdc0ad2170d230d1047b8cbe7778db)`(bool & OutValue) const` <a id="structFRHAPI__SendInBlueContact_1aa5cdc0ad2170d230d1047b8cbe7778db"></a>

Fills OutValue with the value of EmailBlacklisted_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetEmailBlacklistedOrNull`](#structFRHAPI__SendInBlueContact_1a660a937eaa756a2d71fff735c3aa9436)`()` <a id="structFRHAPI__SendInBlueContact_1a660a937eaa756a2d71fff735c3aa9436"></a>

Returns a pointer to EmailBlacklisted_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetEmailBlacklistedOrNull`](#structFRHAPI__SendInBlueContact_1a34a3540d16ac26b8e488a4fb349516a6)`() const` <a id="structFRHAPI__SendInBlueContact_1a34a3540d16ac26b8e488a4fb349516a6"></a>

Returns a pointer to EmailBlacklisted_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1affe6f004db21d47a38a850f47f917325)`(const bool & NewValue)` <a id="structFRHAPI__SendInBlueContact_1affe6f004db21d47a38a850f47f917325"></a>

Sets the value of EmailBlacklisted_Optional and also sets EmailBlacklisted_IsSet to true.

#### `public inline void `[`SetEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1aa6d53f049c27af253a5eb57ccb037983)`(bool && NewValue)` <a id="structFRHAPI__SendInBlueContact_1aa6d53f049c27af253a5eb57ccb037983"></a>

Sets the value of EmailBlacklisted_Optional and also sets EmailBlacklisted_IsSet to true using move semantics.

#### `public inline void `[`ClearEmailBlacklisted`](#structFRHAPI__SendInBlueContact_1aa51a7edca5560903b8acb968619ecd99)`()` <a id="structFRHAPI__SendInBlueContact_1aa51a7edca5560903b8acb968619ecd99"></a>

Clears the value of EmailBlacklisted_Optional and sets EmailBlacklisted_IsSet to false.

#### `public inline bool `[`IsEmailBlacklistedDefaultValue`](#structFRHAPI__SendInBlueContact_1a4a2a76b3853bf3854b476494dac95097)`() const` <a id="structFRHAPI__SendInBlueContact_1a4a2a76b3853bf3854b476494dac95097"></a>

Returns true if EmailBlacklisted_Optional is set and matches the default value.

#### `public inline void `[`SetEmailBlacklistedToDefault`](#structFRHAPI__SendInBlueContact_1a3faf237e0b96ef466a21fcae40d5559d)`()` <a id="structFRHAPI__SendInBlueContact_1a3faf237e0b96ef466a21fcae40d5559d"></a>

Sets the value of EmailBlacklisted_Optional to its default and also sets EmailBlacklisted_IsSet to true.

#### `public inline TArray< int32 > & `[`GetListIds`](#structFRHAPI__SendInBlueContact_1a32996960334b43550b6df9697b90b0a4)`()` <a id="structFRHAPI__SendInBlueContact_1a32996960334b43550b6df9697b90b0a4"></a>

Gets the value of ListIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetListIds`](#structFRHAPI__SendInBlueContact_1adb1b7f5eec28461c58d7fa82943677f2)`() const` <a id="structFRHAPI__SendInBlueContact_1adb1b7f5eec28461c58d7fa82943677f2"></a>

Gets the value of ListIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetListIds`](#structFRHAPI__SendInBlueContact_1ab2d5d9f75d40bb8afc3a19d559a8649f)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__SendInBlueContact_1ab2d5d9f75d40bb8afc3a19d559a8649f"></a>

Gets the value of ListIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetListIds`](#structFRHAPI__SendInBlueContact_1a8249ab6337f81af308b1f4732b2aa247)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__SendInBlueContact_1a8249ab6337f81af308b1f4732b2aa247"></a>

Fills OutValue with the value of ListIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< int32 > * `[`GetListIdsOrNull`](#structFRHAPI__SendInBlueContact_1a5bf74841aedf5a249071e345a6c03f8d)`()` <a id="structFRHAPI__SendInBlueContact_1a5bf74841aedf5a249071e345a6c03f8d"></a>

Returns a pointer to ListIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< int32 > * `[`GetListIdsOrNull`](#structFRHAPI__SendInBlueContact_1a2d7041eeedde05ca54dc03780b156333)`() const` <a id="structFRHAPI__SendInBlueContact_1a2d7041eeedde05ca54dc03780b156333"></a>

Returns a pointer to ListIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetListIds`](#structFRHAPI__SendInBlueContact_1a71b5654973b7ccea4f7f7c8d6633aea1)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__SendInBlueContact_1a71b5654973b7ccea4f7f7c8d6633aea1"></a>

Sets the value of ListIds_Optional and also sets ListIds_IsSet to true.

#### `public inline void `[`SetListIds`](#structFRHAPI__SendInBlueContact_1a95ee5e8896ea8025697013d6457e9948)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__SendInBlueContact_1a95ee5e8896ea8025697013d6457e9948"></a>

Sets the value of ListIds_Optional and also sets ListIds_IsSet to true using move semantics.

#### `public inline void `[`ClearListIds`](#structFRHAPI__SendInBlueContact_1a95e57bb78e908e0c7bca8bd9679c2d2b)`()` <a id="structFRHAPI__SendInBlueContact_1a95e57bb78e908e0c7bca8bd9679c2d2b"></a>

Clears the value of ListIds_Optional and sets ListIds_IsSet to false.

#### `public inline TArray< int32 > & `[`GetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a563766947f346b8a0cef8f549387ec00)`()` <a id="structFRHAPI__SendInBlueContact_1a563766947f346b8a0cef8f549387ec00"></a>

Gets the value of UnlinkListIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1acf3e46a654bec910195bbbdfe83808c5)`() const` <a id="structFRHAPI__SendInBlueContact_1acf3e46a654bec910195bbbdfe83808c5"></a>

Gets the value of UnlinkListIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a8887d8085214adc583f8d545d2835c20)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__SendInBlueContact_1a8887d8085214adc583f8d545d2835c20"></a>

Gets the value of UnlinkListIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a3b7ce70c5d50167b41281d39332fee97)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__SendInBlueContact_1a3b7ce70c5d50167b41281d39332fee97"></a>

Fills OutValue with the value of UnlinkListIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< int32 > * `[`GetUnlinkListIdsOrNull`](#structFRHAPI__SendInBlueContact_1ac7bb27671781916f209b93103b5f2abf)`()` <a id="structFRHAPI__SendInBlueContact_1ac7bb27671781916f209b93103b5f2abf"></a>

Returns a pointer to UnlinkListIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< int32 > * `[`GetUnlinkListIdsOrNull`](#structFRHAPI__SendInBlueContact_1a154612291299325cfd922ed11f9d1fbd)`() const` <a id="structFRHAPI__SendInBlueContact_1a154612291299325cfd922ed11f9d1fbd"></a>

Returns a pointer to UnlinkListIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a448f78df7895818270961eb728ce9feb)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__SendInBlueContact_1a448f78df7895818270961eb728ce9feb"></a>

Sets the value of UnlinkListIds_Optional and also sets UnlinkListIds_IsSet to true.

#### `public inline void `[`SetUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a09c3dadcccc9fce6c847c54c026ca724)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__SendInBlueContact_1a09c3dadcccc9fce6c847c54c026ca724"></a>

Sets the value of UnlinkListIds_Optional and also sets UnlinkListIds_IsSet to true using move semantics.

#### `public inline void `[`ClearUnlinkListIds`](#structFRHAPI__SendInBlueContact_1a5b95f4f0c0e94242e0e66e3903529d8c)`()` <a id="structFRHAPI__SendInBlueContact_1a5b95f4f0c0e94242e0e66e3903529d8c"></a>

Clears the value of UnlinkListIds_Optional and sets UnlinkListIds_IsSet to false.

#### `public inline bool & `[`GetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1afae60bf8519d0a0f541be3d2a48b3449)`()` <a id="structFRHAPI__SendInBlueContact_1afae60bf8519d0a0f541be3d2a48b3449"></a>

Gets the value of UpdateEnabled_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1ab5fd99bbe37670e4bff6f500ba283fe4)`() const` <a id="structFRHAPI__SendInBlueContact_1ab5fd99bbe37670e4bff6f500ba283fe4"></a>

Gets the value of UpdateEnabled_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1a8da2f36f7ba4f777ff9d581f8aba8b93)`(const bool & DefaultValue) const` <a id="structFRHAPI__SendInBlueContact_1a8da2f36f7ba4f777ff9d581f8aba8b93"></a>

Gets the value of UpdateEnabled_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1af29c3aa6e96928648158b714eeda3ada)`(bool & OutValue) const` <a id="structFRHAPI__SendInBlueContact_1af29c3aa6e96928648158b714eeda3ada"></a>

Fills OutValue with the value of UpdateEnabled_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetUpdateEnabledOrNull`](#structFRHAPI__SendInBlueContact_1a78910a3eb406e69a6b64f08934ee5259)`()` <a id="structFRHAPI__SendInBlueContact_1a78910a3eb406e69a6b64f08934ee5259"></a>

Returns a pointer to UpdateEnabled_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetUpdateEnabledOrNull`](#structFRHAPI__SendInBlueContact_1a94363265bd68d18e2e6ccf8291e3aad4)`() const` <a id="structFRHAPI__SendInBlueContact_1a94363265bd68d18e2e6ccf8291e3aad4"></a>

Returns a pointer to UpdateEnabled_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1a71c8090ef466e33f99cab533cfac7ca8)`(const bool & NewValue)` <a id="structFRHAPI__SendInBlueContact_1a71c8090ef466e33f99cab533cfac7ca8"></a>

Sets the value of UpdateEnabled_Optional and also sets UpdateEnabled_IsSet to true.

#### `public inline void `[`SetUpdateEnabled`](#structFRHAPI__SendInBlueContact_1a5b510dc40f028c5b031412a20879c345)`(bool && NewValue)` <a id="structFRHAPI__SendInBlueContact_1a5b510dc40f028c5b031412a20879c345"></a>

Sets the value of UpdateEnabled_Optional and also sets UpdateEnabled_IsSet to true using move semantics.

#### `public inline void `[`ClearUpdateEnabled`](#structFRHAPI__SendInBlueContact_1a6da8611cb3675b22593e034578a0886c)`()` <a id="structFRHAPI__SendInBlueContact_1a6da8611cb3675b22593e034578a0886c"></a>

Clears the value of UpdateEnabled_Optional and sets UpdateEnabled_IsSet to false.

#### `public inline bool `[`IsUpdateEnabledDefaultValue`](#structFRHAPI__SendInBlueContact_1ad02e90be12448e9da0e518d7bed8872a)`() const` <a id="structFRHAPI__SendInBlueContact_1ad02e90be12448e9da0e518d7bed8872a"></a>

Returns true if UpdateEnabled_Optional is set and matches the default value.

#### `public inline void `[`SetUpdateEnabledToDefault`](#structFRHAPI__SendInBlueContact_1af5524c67044a55e677378e61ff88f9e8)`()` <a id="structFRHAPI__SendInBlueContact_1af5524c67044a55e677378e61ff88f9e8"></a>

Sets the value of UpdateEnabled_Optional to its default and also sets UpdateEnabled_IsSet to true.

