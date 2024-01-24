# RHAPI_Vendor <a id="group__RHAPI__Vendor"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Vendor`](#structFRHAPI__Vendor) | A collection of Loot and how to fulfill them.

## struct `FRHAPI_Vendor` <a id="structFRHAPI__Vendor"></a>

```
struct FRHAPI_Vendor
  : public FRHAPI_Model
```

A collection of Loot and how to fulfill them.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Vendor_1ad1fd7d01d6c9003ad84a5e58e8b638f5) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__Vendor_1a2c1b1b4781dae86fc8d06815eb882ae2) | true if CustomData_Optional has been set to a value
`public ERHAPI_VendorType `[`Type_Optional`](#structFRHAPI__Vendor_1a5679543c05b7c35a6b7f9dfb45e82782) | Determines how the Vendor fulfills the loot.
`public bool `[`Type_IsSet`](#structFRHAPI__Vendor_1a2b43a4bd9314bb4dda95366e7465eab2) | true if Type_Optional has been set to a value
`public int32 `[`LegacyType_Optional`](#structFRHAPI__Vendor_1a7ddc9fd486f80acdd94206d576727874) | 
`public bool `[`LegacyType_IsSet`](#structFRHAPI__Vendor_1a3eff8bffdc3807d97e3e6a92802e1f6d) | true if LegacyType_Optional has been set to a value
`public int32 `[`LegacyConfigVersion_Optional`](#structFRHAPI__Vendor_1afa022639264c0e49e1c57c4702eabfe6) | 
`public bool `[`LegacyConfigVersion_IsSet`](#structFRHAPI__Vendor_1a470fecdc7ab9ab86933c50c02fbbbf98) | true if LegacyConfigVersion_Optional has been set to a value
`public TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > `[`Loot_Optional`](#structFRHAPI__Vendor_1a199a358c2b66f0c42a3c81bc12b8ef4b) | The Loot the Vendor will fulfill mapped by Loot ID.
`public bool `[`Loot_IsSet`](#structFRHAPI__Vendor_1a49cb8534ae895d0dbbb4718e49bc5d0d) | true if Loot_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Vendor_1a186c1479137c03910236ca2dec11939e) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Vendor_1a02cff5941552eb97b863c0504e9279ed) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Vendor_1aabb9e1249de388316e3afe9c4450b83a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Vendor_1aadb2125b79d9369fa89d5428c18c6a5b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1a956ab93f7b49d4d44c94b268740772e1)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1ac17d955d814ce05a9025657201ea2f2d)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1a50d47bcfb078339affc57a7180c1c3e6)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Vendor_1a8105f764906c77a60c614e9c3c685f18)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Vendor_1a4183b612a36de5eabae8d1a3d11debaf)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Vendor_1a443f7f3b5a4d61b855258c8410498176)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Vendor_1a0c1bccc4044d44928f069428c54a0baa)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__Vendor_1a3be0ed314dd1c186d5437cd282e72367)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1a45b0024bf9841cc84a56cf325a7b61e7)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1ae21da9d6ed5959edd48a777e7b6ff3a3)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1a8f67f4cd42adea280e7d6b01414cbefa)`(const ERHAPI_VendorType & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__Vendor_1a828e1adcb46a9bd94aa54213b932ca2e)`(ERHAPI_VendorType & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_VendorType * `[`GetTypeOrNull`](#structFRHAPI__Vendor_1af9215bfe94384c215051bd61fe159325)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_VendorType * `[`GetTypeOrNull`](#structFRHAPI__Vendor_1a7620043e2ec89f1c12cb123d24949b1e)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__Vendor_1a92879bfb67b571aac58fedab8cd6980c)`(ERHAPI_VendorType NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`ClearType`](#structFRHAPI__Vendor_1a80edd87ab36f2af40668d9cded28fe38)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1ac502dd37140bae8da4c17bd4f61264db)`()` | Gets the value of LegacyType_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1a9af7f8eab2cb80643f6f1e38f0ca1f30)`() const` | Gets the value of LegacyType_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1a4ab5ba62ab58a4ae8634abc56475008c)`(const int32 & DefaultValue) const` | Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyType`](#structFRHAPI__Vendor_1ab6c02b6569a627874af993cb74121201)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Vendor_1a0a01b3fec78493ab417c092373238b73)`()` | Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Vendor_1ae65ad3debd3fd58a3f0ad28369fe4c6b)`() const` | Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyType`](#structFRHAPI__Vendor_1a8a674360c7fbe19a34f815cc065a392b)`(int32 NewValue)` | Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.
`public inline void `[`ClearLegacyType`](#structFRHAPI__Vendor_1abbe2f3c16522df63f1e1ed1c1e83050e)`()` | Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.
`public inline bool `[`IsLegacyTypeDefaultValue`](#structFRHAPI__Vendor_1ad0132c838c402d246db971bbc80ed73e)`() const` | Returns true if LegacyType_Optional is set and matches the default value.
`public inline void `[`SetLegacyTypeToDefault`](#structFRHAPI__Vendor_1ab48395e3c0ad815ab6f12b5de430ec17)`()` | Sets the value of LegacyType_Optional to its default and also sets LegacyType_IsSet to true.
`public inline int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1abc9f0c39262d53e935382ae8d49ba9f9)`()` | Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1aab6e1ed45fc2c0bcc84921dd11fbdb72)`() const` | Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1a80e815c1badd58e50444ef553124de32)`(const int32 & DefaultValue) const` | Gets the value of LegacyConfigVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1ac1127266dbd107f5570c171f86c4bde6)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyConfigVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLegacyConfigVersionOrNull`](#structFRHAPI__Vendor_1ad71e61816a72d3732706eef5063a7d35)`()` | Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLegacyConfigVersionOrNull`](#structFRHAPI__Vendor_1a70560282202c79eb90f696968dd25b24)`() const` | Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyConfigVersion`](#structFRHAPI__Vendor_1ac9c278fd82180b7d4fdd65d75226f5ae)`(int32 NewValue)` | Sets the value of LegacyConfigVersion_Optional and also sets LegacyConfigVersion_IsSet to true.
`public inline void `[`ClearLegacyConfigVersion`](#structFRHAPI__Vendor_1a39cd6cbcb2eac3f3c0ead5e4f4829c4b)`()` | Clears the value of LegacyConfigVersion_Optional and sets LegacyConfigVersion_IsSet to false.
`public inline bool `[`IsLegacyConfigVersionDefaultValue`](#structFRHAPI__Vendor_1a6993999a6bda0506d8515a042ea35d8e)`() const` | Returns true if LegacyConfigVersion_Optional is set and matches the default value.
`public inline void `[`SetLegacyConfigVersionToDefault`](#structFRHAPI__Vendor_1a9e344ffcc36fb5a870528fe918f56022)`()` | Sets the value of LegacyConfigVersion_Optional to its default and also sets LegacyConfigVersion_IsSet to true.
`public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1af53f37d260b8440bbd4a0bdf349f68ef)`()` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1a1eedd3448e3bc7fb00e60536503834ae)`() const` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1a921933df3c26f2f8009a87fdc25c00d8)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & DefaultValue) const` | Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLoot`](#structFRHAPI__Vendor_1ab3dc72b107f49cbfbbb0f8c31a361386)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & OutValue) const` | Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Vendor_1a78a902e9294269a1d8d791a4a4d5a166)`()` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Vendor_1abf95c1cb96c75ba9e2539222bd88bffb)`() const` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLoot`](#structFRHAPI__Vendor_1abe9c308b868059eb397ab13197c488e9)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > NewValue)` | Sets the value of Loot_Optional and also sets Loot_IsSet to true.
`public inline void `[`ClearLoot`](#structFRHAPI__Vendor_1a4df091c709882709f1f85c228a2c433b)`()` | Clears the value of Loot_Optional and sets Loot_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1a1bb9e41145e791fdb2a302749766673b)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1accb6b3b3d1a4f7fc1384563476d17e1d)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1a1e4c0bccdb1f200ab5f057f6a3c35592)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Vendor_1abb4e281ecc7113f91a134a27651e0baa)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendor_1ab70558f3bfdc3e48d0c743f57f9d6e7f)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendor_1ac467253fcf6fd3c80cd30a7f58a9032c)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Vendor_1a93b22eb2618b002b78d3a5ab68b088f0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Vendor_1aab46ead254eea4bde0f552f352c5e2ad)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Vendor_1ad1fd7d01d6c9003ad84a5e58e8b638f5) <a id="structFRHAPI__Vendor_1ad1fd7d01d6c9003ad84a5e58e8b638f5"></a>

Custom data associated with the resource.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Vendor_1a2c1b1b4781dae86fc8d06815eb882ae2) <a id="structFRHAPI__Vendor_1a2c1b1b4781dae86fc8d06815eb882ae2"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public ERHAPI_VendorType `[`Type_Optional`](#structFRHAPI__Vendor_1a5679543c05b7c35a6b7f9dfb45e82782) <a id="structFRHAPI__Vendor_1a5679543c05b7c35a6b7f9dfb45e82782"></a>

Determines how the Vendor fulfills the loot.

<br>
#### `public bool `[`Type_IsSet`](#structFRHAPI__Vendor_1a2b43a4bd9314bb4dda95366e7465eab2) <a id="structFRHAPI__Vendor_1a2b43a4bd9314bb4dda95366e7465eab2"></a>

true if Type_Optional has been set to a value

<br>
#### `public int32 `[`LegacyType_Optional`](#structFRHAPI__Vendor_1a7ddc9fd486f80acdd94206d576727874) <a id="structFRHAPI__Vendor_1a7ddc9fd486f80acdd94206d576727874"></a>

<br>
#### `public bool `[`LegacyType_IsSet`](#structFRHAPI__Vendor_1a3eff8bffdc3807d97e3e6a92802e1f6d) <a id="structFRHAPI__Vendor_1a3eff8bffdc3807d97e3e6a92802e1f6d"></a>

true if LegacyType_Optional has been set to a value

<br>
#### `public int32 `[`LegacyConfigVersion_Optional`](#structFRHAPI__Vendor_1afa022639264c0e49e1c57c4702eabfe6) <a id="structFRHAPI__Vendor_1afa022639264c0e49e1c57c4702eabfe6"></a>

<br>
#### `public bool `[`LegacyConfigVersion_IsSet`](#structFRHAPI__Vendor_1a470fecdc7ab9ab86933c50c02fbbbf98) <a id="structFRHAPI__Vendor_1a470fecdc7ab9ab86933c50c02fbbbf98"></a>

true if LegacyConfigVersion_Optional has been set to a value

<br>
#### `public TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > `[`Loot_Optional`](#structFRHAPI__Vendor_1a199a358c2b66f0c42a3c81bc12b8ef4b) <a id="structFRHAPI__Vendor_1a199a358c2b66f0c42a3c81bc12b8ef4b"></a>

The Loot the Vendor will fulfill mapped by Loot ID.

<br>
#### `public bool `[`Loot_IsSet`](#structFRHAPI__Vendor_1a49cb8534ae895d0dbbb4718e49bc5d0d) <a id="structFRHAPI__Vendor_1a49cb8534ae895d0dbbb4718e49bc5d0d"></a>

true if Loot_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Vendor_1a186c1479137c03910236ca2dec11939e) <a id="structFRHAPI__Vendor_1a186c1479137c03910236ca2dec11939e"></a>

<br>
#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Vendor_1a02cff5941552eb97b863c0504e9279ed) <a id="structFRHAPI__Vendor_1a02cff5941552eb97b863c0504e9279ed"></a>

true if CacheInfo_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__Vendor_1aabb9e1249de388316e3afe9c4450b83a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Vendor_1aabb9e1249de388316e3afe9c4450b83a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__Vendor_1aadb2125b79d9369fa89d5428c18c6a5b)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Vendor_1aadb2125b79d9369fa89d5428c18c6a5b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1a956ab93f7b49d4d44c94b268740772e1)`()` <a id="structFRHAPI__Vendor_1a956ab93f7b49d4d44c94b268740772e1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1ac17d955d814ce05a9025657201ea2f2d)`() const` <a id="structFRHAPI__Vendor_1ac17d955d814ce05a9025657201ea2f2d"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1a50d47bcfb078339affc57a7180c1c3e6)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Vendor_1a50d47bcfb078339affc57a7180c1c3e6"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__Vendor_1a8105f764906c77a60c614e9c3c685f18)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Vendor_1a8105f764906c77a60c614e9c3c685f18"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Vendor_1a4183b612a36de5eabae8d1a3d11debaf)`()` <a id="structFRHAPI__Vendor_1a4183b612a36de5eabae8d1a3d11debaf"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Vendor_1a443f7f3b5a4d61b855258c8410498176)`() const` <a id="structFRHAPI__Vendor_1a443f7f3b5a4d61b855258c8410498176"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__Vendor_1a0c1bccc4044d44928f069428c54a0baa)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__Vendor_1a0c1bccc4044d44928f069428c54a0baa"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__Vendor_1a3be0ed314dd1c186d5437cd282e72367)`()` <a id="structFRHAPI__Vendor_1a3be0ed314dd1c186d5437cd282e72367"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1a45b0024bf9841cc84a56cf325a7b61e7)`()` <a id="structFRHAPI__Vendor_1a45b0024bf9841cc84a56cf325a7b61e7"></a>

Gets the value of Type_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1ae21da9d6ed5959edd48a777e7b6ff3a3)`() const` <a id="structFRHAPI__Vendor_1ae21da9d6ed5959edd48a777e7b6ff3a3"></a>

Gets the value of Type_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1a8f67f4cd42adea280e7d6b01414cbefa)`(const ERHAPI_VendorType & DefaultValue) const` <a id="structFRHAPI__Vendor_1a8f67f4cd42adea280e7d6b01414cbefa"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetType`](#structFRHAPI__Vendor_1a828e1adcb46a9bd94aa54213b932ca2e)`(ERHAPI_VendorType & OutValue) const` <a id="structFRHAPI__Vendor_1a828e1adcb46a9bd94aa54213b932ca2e"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_VendorType * `[`GetTypeOrNull`](#structFRHAPI__Vendor_1af9215bfe94384c215051bd61fe159325)`()` <a id="structFRHAPI__Vendor_1af9215bfe94384c215051bd61fe159325"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_VendorType * `[`GetTypeOrNull`](#structFRHAPI__Vendor_1a7620043e2ec89f1c12cb123d24949b1e)`() const` <a id="structFRHAPI__Vendor_1a7620043e2ec89f1c12cb123d24949b1e"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetType`](#structFRHAPI__Vendor_1a92879bfb67b571aac58fedab8cd6980c)`(ERHAPI_VendorType NewValue)` <a id="structFRHAPI__Vendor_1a92879bfb67b571aac58fedab8cd6980c"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

<br>
#### `public inline void `[`ClearType`](#structFRHAPI__Vendor_1a80edd87ab36f2af40668d9cded28fe38)`()` <a id="structFRHAPI__Vendor_1a80edd87ab36f2af40668d9cded28fe38"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

<br>
#### `public inline int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1ac502dd37140bae8da4c17bd4f61264db)`()` <a id="structFRHAPI__Vendor_1ac502dd37140bae8da4c17bd4f61264db"></a>

Gets the value of LegacyType_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1a9af7f8eab2cb80643f6f1e38f0ca1f30)`() const` <a id="structFRHAPI__Vendor_1a9af7f8eab2cb80643f6f1e38f0ca1f30"></a>

Gets the value of LegacyType_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1a4ab5ba62ab58a4ae8634abc56475008c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Vendor_1a4ab5ba62ab58a4ae8634abc56475008c"></a>

Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLegacyType`](#structFRHAPI__Vendor_1ab6c02b6569a627874af993cb74121201)`(int32 & OutValue) const` <a id="structFRHAPI__Vendor_1ab6c02b6569a627874af993cb74121201"></a>

Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Vendor_1a0a01b3fec78493ab417c092373238b73)`()` <a id="structFRHAPI__Vendor_1a0a01b3fec78493ab417c092373238b73"></a>

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Vendor_1ae65ad3debd3fd58a3f0ad28369fe4c6b)`() const` <a id="structFRHAPI__Vendor_1ae65ad3debd3fd58a3f0ad28369fe4c6b"></a>

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLegacyType`](#structFRHAPI__Vendor_1a8a674360c7fbe19a34f815cc065a392b)`(int32 NewValue)` <a id="structFRHAPI__Vendor_1a8a674360c7fbe19a34f815cc065a392b"></a>

Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.

<br>
#### `public inline void `[`ClearLegacyType`](#structFRHAPI__Vendor_1abbe2f3c16522df63f1e1ed1c1e83050e)`()` <a id="structFRHAPI__Vendor_1abbe2f3c16522df63f1e1ed1c1e83050e"></a>

Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.

<br>
#### `public inline bool `[`IsLegacyTypeDefaultValue`](#structFRHAPI__Vendor_1ad0132c838c402d246db971bbc80ed73e)`() const` <a id="structFRHAPI__Vendor_1ad0132c838c402d246db971bbc80ed73e"></a>

Returns true if LegacyType_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetLegacyTypeToDefault`](#structFRHAPI__Vendor_1ab48395e3c0ad815ab6f12b5de430ec17)`()` <a id="structFRHAPI__Vendor_1ab48395e3c0ad815ab6f12b5de430ec17"></a>

Sets the value of LegacyType_Optional to its default and also sets LegacyType_IsSet to true.

<br>
#### `public inline int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1abc9f0c39262d53e935382ae8d49ba9f9)`()` <a id="structFRHAPI__Vendor_1abc9f0c39262d53e935382ae8d49ba9f9"></a>

Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1aab6e1ed45fc2c0bcc84921dd11fbdb72)`() const` <a id="structFRHAPI__Vendor_1aab6e1ed45fc2c0bcc84921dd11fbdb72"></a>

Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1a80e815c1badd58e50444ef553124de32)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Vendor_1a80e815c1badd58e50444ef553124de32"></a>

Gets the value of LegacyConfigVersion_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1ac1127266dbd107f5570c171f86c4bde6)`(int32 & OutValue) const` <a id="structFRHAPI__Vendor_1ac1127266dbd107f5570c171f86c4bde6"></a>

Fills OutValue with the value of LegacyConfigVersion_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetLegacyConfigVersionOrNull`](#structFRHAPI__Vendor_1ad71e61816a72d3732706eef5063a7d35)`()` <a id="structFRHAPI__Vendor_1ad71e61816a72d3732706eef5063a7d35"></a>

Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetLegacyConfigVersionOrNull`](#structFRHAPI__Vendor_1a70560282202c79eb90f696968dd25b24)`() const` <a id="structFRHAPI__Vendor_1a70560282202c79eb90f696968dd25b24"></a>

Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLegacyConfigVersion`](#structFRHAPI__Vendor_1ac9c278fd82180b7d4fdd65d75226f5ae)`(int32 NewValue)` <a id="structFRHAPI__Vendor_1ac9c278fd82180b7d4fdd65d75226f5ae"></a>

Sets the value of LegacyConfigVersion_Optional and also sets LegacyConfigVersion_IsSet to true.

<br>
#### `public inline void `[`ClearLegacyConfigVersion`](#structFRHAPI__Vendor_1a39cd6cbcb2eac3f3c0ead5e4f4829c4b)`()` <a id="structFRHAPI__Vendor_1a39cd6cbcb2eac3f3c0ead5e4f4829c4b"></a>

Clears the value of LegacyConfigVersion_Optional and sets LegacyConfigVersion_IsSet to false.

<br>
#### `public inline bool `[`IsLegacyConfigVersionDefaultValue`](#structFRHAPI__Vendor_1a6993999a6bda0506d8515a042ea35d8e)`() const` <a id="structFRHAPI__Vendor_1a6993999a6bda0506d8515a042ea35d8e"></a>

Returns true if LegacyConfigVersion_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetLegacyConfigVersionToDefault`](#structFRHAPI__Vendor_1a9e344ffcc36fb5a870528fe918f56022)`()` <a id="structFRHAPI__Vendor_1a9e344ffcc36fb5a870528fe918f56022"></a>

Sets the value of LegacyConfigVersion_Optional to its default and also sets LegacyConfigVersion_IsSet to true.

<br>
#### `public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1af53f37d260b8440bbd4a0bdf349f68ef)`()` <a id="structFRHAPI__Vendor_1af53f37d260b8440bbd4a0bdf349f68ef"></a>

Gets the value of Loot_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1a1eedd3448e3bc7fb00e60536503834ae)`() const` <a id="structFRHAPI__Vendor_1a1eedd3448e3bc7fb00e60536503834ae"></a>

Gets the value of Loot_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1a921933df3c26f2f8009a87fdc25c00d8)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & DefaultValue) const` <a id="structFRHAPI__Vendor_1a921933df3c26f2f8009a87fdc25c00d8"></a>

Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLoot`](#structFRHAPI__Vendor_1ab3dc72b107f49cbfbbb0f8c31a361386)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & OutValue) const` <a id="structFRHAPI__Vendor_1ab3dc72b107f49cbfbbb0f8c31a361386"></a>

Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Vendor_1a78a902e9294269a1d8d791a4a4d5a166)`()` <a id="structFRHAPI__Vendor_1a78a902e9294269a1d8d791a4a4d5a166"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Vendor_1abf95c1cb96c75ba9e2539222bd88bffb)`() const` <a id="structFRHAPI__Vendor_1abf95c1cb96c75ba9e2539222bd88bffb"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLoot`](#structFRHAPI__Vendor_1abe9c308b868059eb397ab13197c488e9)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > NewValue)` <a id="structFRHAPI__Vendor_1abe9c308b868059eb397ab13197c488e9"></a>

Sets the value of Loot_Optional and also sets Loot_IsSet to true.

<br>
#### `public inline void `[`ClearLoot`](#structFRHAPI__Vendor_1a4df091c709882709f1f85c228a2c433b)`()` <a id="structFRHAPI__Vendor_1a4df091c709882709f1f85c228a2c433b"></a>

Clears the value of Loot_Optional and sets Loot_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1a1bb9e41145e791fdb2a302749766673b)`()` <a id="structFRHAPI__Vendor_1a1bb9e41145e791fdb2a302749766673b"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1accb6b3b3d1a4f7fc1384563476d17e1d)`() const` <a id="structFRHAPI__Vendor_1accb6b3b3d1a4f7fc1384563476d17e1d"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1a1e4c0bccdb1f200ab5f057f6a3c35592)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Vendor_1a1e4c0bccdb1f200ab5f057f6a3c35592"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Vendor_1abb4e281ecc7113f91a134a27651e0baa)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Vendor_1abb4e281ecc7113f91a134a27651e0baa"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendor_1ab70558f3bfdc3e48d0c743f57f9d6e7f)`()` <a id="structFRHAPI__Vendor_1ab70558f3bfdc3e48d0c743f57f9d6e7f"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendor_1ac467253fcf6fd3c80cd30a7f58a9032c)`() const` <a id="structFRHAPI__Vendor_1ac467253fcf6fd3c80cd30a7f58a9032c"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Vendor_1a93b22eb2618b002b78d3a5ab68b088f0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__Vendor_1a93b22eb2618b002b78d3a5ab68b088f0"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

<br>
#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Vendor_1aab46ead254eea4bde0f552f352c5e2ad)`()` <a id="structFRHAPI__Vendor_1aab46ead254eea4bde0f552f352c5e2ad"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

<br>
