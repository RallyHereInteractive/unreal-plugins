---
title: RHAPI_SessionUpdate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionUpdate`](#structFRHAPI__SessionUpdate) | A request body to update information about a session resource.

## struct `FRHAPI_SessionUpdate` <a id="structFRHAPI__SessionUpdate"></a>

```
struct FRHAPI_SessionUpdate
  : public FRHAPI_Model
```

A request body to update information about a session resource.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RegionId_Optional`](#structFRHAPI__SessionUpdate_1aa6a8ea4e32122c33643902ccae72a6cb) | Preferred region for the instance and match to take place in.
`public bool `[`RegionId_IsSet`](#structFRHAPI__SessionUpdate_1a9da573f2aec70094dcf75954ace79333) | true if RegionId_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionUpdate_1a75a25433fd525c331b5e6119f40c6816) | Leader Player or instance defined custom data about this session.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionUpdate_1a2e97bffd938db16822e8f35b4b808ef6) | true if CustomData_Optional has been set to a value
`public bool `[`Joinable_Optional`](#structFRHAPI__SessionUpdate_1aacbfdec8b14c38f25c0a26d96e373f80) | DEPRECATED. Use joinability object instead. Flag for if players can freely join this session without an invite.
`public bool `[`Joinable_IsSet`](#structFRHAPI__SessionUpdate_1a1771b6a886f26629df2e7c1f798c3632) | true if Joinable_Optional has been set to a value
`public `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` `[`Joinability_Optional`](#structFRHAPI__SessionUpdate_1a66f3ab7b925c5ca17d043c5a088ce9d9) | Flags regarding the joinability of this session.
`public bool `[`Joinability_IsSet`](#structFRHAPI__SessionUpdate_1a9ac7501cd158c1b312824ec9b08143a4) | true if Joinability_Optional has been set to a value
`public TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > `[`Teams_Optional`](#structFRHAPI__SessionUpdate_1aea24906b7e7a2d1b3e5fc24dd2475623) | List of team size updates for this session. The length of the list represents the number of desired teams.
`public bool `[`Teams_IsSet`](#structFRHAPI__SessionUpdate_1aac6261a25e5317b6c4a1a31a7c4bb920) | true if Teams_Optional has been set to a value
`public FString `[`Password_Optional`](#structFRHAPI__SessionUpdate_1ad87dc561bd34385bd9b4ab8b2e9eee9b) | A password to join this session.
`public bool `[`Password_IsSet`](#structFRHAPI__SessionUpdate_1a6c0f390872003a6774d2569f074c0887) | true if Password_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionUpdate_1a92402f614620d0a1b3605ca95b8a2905)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionUpdate_1a551b8a5eb63887467a302d51293e4272)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1aa7c58fdb591870a6e868fdae09379e5f)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a55fe134a27f8a3c41d4874df11880767)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a7ace46df7473f0b2de4574465393a751)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a7d6cd49f1ddbf0d71f520f81e3124e53)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a495bcd0f9c5e31cafa3c69a32b76b7c3)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a7685da10ac1f1a309c6b2355c95e4342)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1ae3b73d6e62fcc7e187f5497d7556065d)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1aa8a9b9f2845ab50f50a700a91a416289)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1acb2e3a0e70a01d89fac2b19640aad6cb)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a075c225aa96a363bfd843b49efcd9da0)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a57756142fd44355ca15a7d111927b764)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionUpdate_1ab3e7266ad5727f7c000893f488e2b32f)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a1fe68aba24ba81204c4f4ecc7d770e8e)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a1758ce4d030563d67d617a936d94e212)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1a8c6573ae333aac22d170d8797236ea11)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1a108525996c7f0dd2e811cdb0c9cdfbc0)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a824fbe7b13c3d64413b56452833a7305)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a66618dbe712476deb574bf154538fe3a)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1af8a1642fe7aca221d44358b80061a3e0)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinable`](#structFRHAPI__SessionUpdate_1ab29e5def2e6d93d272ae094ddb3552d0)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1a4324225177492ad040124872c999dc2d)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1a973f1341fbf86cd905c4876c7bd1be60)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__SessionUpdate_1a9b7e1776ee214b3465dee9737f06c4e6)`(const bool & NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__SessionUpdate_1aead93ce82c7bcee394990fa04ebf9ee8)`(bool && NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.
`public inline void `[`ClearJoinable`](#structFRHAPI__SessionUpdate_1a5e38954afb4281bfd14241a6b0faca88)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_Joinable`](#structFRHAPI__SessionUpdate_1a39a479d83626a59493ba13b56cb32497)`()` | Returns the default value of Joinable.
`public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__SessionUpdate_1a3fea3defbab86444924edb5d54056eb8)`()` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__SessionUpdate_1a2934536813ed69e7ae1db4649fb84da5)`() const` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__SessionUpdate_1ad1cd818817b157f4e8eeae03e093acbc)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` | Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinability`](#structFRHAPI__SessionUpdate_1a7cb8a53159dec9f2c00d58af26a1d23e)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` | Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__SessionUpdate_1a3a18f9a32a909fd441d1dffd8d417506)`()` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__SessionUpdate_1a8c3d8953ed31e9fe3bcb73b54be8f0c1)`() const` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__SessionUpdate_1af04e553832f9d12b68f779a860e18089)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__SessionUpdate_1a79725b3f80be7b7649f8f08d63902275)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.
`public inline void `[`ClearJoinability`](#structFRHAPI__SessionUpdate_1aa941834cc533bda228b7892ac99a9ac2)`()` | Clears the value of Joinability_Optional and sets Joinability_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1a15aea9c04e06420fca90ea415e81fb05)`()` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1ac7118550201bd44a97137f46be7c5f68)`() const` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1a070c98c05422acc0074dcffb9de2ebf4)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` | Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeams`](#structFRHAPI__SessionUpdate_1a2c96d92c8a8f49a1da6df5ed0a1b4ac9)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` | Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1a12f9bb99d1760a6a436966dfdd9463cc)`()` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1a8025df14efa73e12fac8b1c9b0f66109)`() const` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a56f733c5f20f23402e932689ab5babd3)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a68b59824247884c4f050f3716b2e114b)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.
`public inline void `[`ClearTeams`](#structFRHAPI__SessionUpdate_1a25c2f946c12657cbf3ecd48755f2b141)`()` | Clears the value of Teams_Optional and sets Teams_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1aeba1e525a6537b610395dd1b8a4ea108)`()` | Gets the value of Password_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1a14c2f1f222832e012cf3bf50391c9de0)`() const` | Gets the value of Password_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1a2daad0214951e2b3944a4f0b4b59aa6d)`(const FString & DefaultValue) const` | Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPassword`](#structFRHAPI__SessionUpdate_1a0385371f18b1208905c24aeacf0aa72e)`(FString & OutValue) const` | Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPasswordOrNull`](#structFRHAPI__SessionUpdate_1afebf71e94f9493fbbf7779a2d6215aa8)`()` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPasswordOrNull`](#structFRHAPI__SessionUpdate_1a2a23fcf14ec88d535395c36656f85ca0)`() const` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__SessionUpdate_1ab8dbe88f2437902440665349e0b578d5)`(const FString & NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true.
`public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__SessionUpdate_1a97ec8253f362f78852f090318cb07a28)`(FString && NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.
`public inline void `[`ClearPassword`](#structFRHAPI__SessionUpdate_1a97e1dde9469af932d4083b01fbe2a2fd)`()` | Clears the value of Password_Optional and sets Password_IsSet to false.

### Members

#### `public FString `[`RegionId_Optional`](#structFRHAPI__SessionUpdate_1aa6a8ea4e32122c33643902ccae72a6cb) <a id="structFRHAPI__SessionUpdate_1aa6a8ea4e32122c33643902ccae72a6cb"></a>

Preferred region for the instance and match to take place in.

#### `public bool `[`RegionId_IsSet`](#structFRHAPI__SessionUpdate_1a9da573f2aec70094dcf75954ace79333) <a id="structFRHAPI__SessionUpdate_1a9da573f2aec70094dcf75954ace79333"></a>

true if RegionId_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionUpdate_1a75a25433fd525c331b5e6119f40c6816) <a id="structFRHAPI__SessionUpdate_1a75a25433fd525c331b5e6119f40c6816"></a>

Leader Player or instance defined custom data about this session.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionUpdate_1a2e97bffd938db16822e8f35b4b808ef6) <a id="structFRHAPI__SessionUpdate_1a2e97bffd938db16822e8f35b4b808ef6"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`Joinable_Optional`](#structFRHAPI__SessionUpdate_1aacbfdec8b14c38f25c0a26d96e373f80) <a id="structFRHAPI__SessionUpdate_1aacbfdec8b14c38f25c0a26d96e373f80"></a>

DEPRECATED. Use joinability object instead. Flag for if players can freely join this session without an invite.

#### `public bool `[`Joinable_IsSet`](#structFRHAPI__SessionUpdate_1a1771b6a886f26629df2e7c1f798c3632) <a id="structFRHAPI__SessionUpdate_1a1771b6a886f26629df2e7c1f798c3632"></a>

true if Joinable_Optional has been set to a value

#### `public `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` `[`Joinability_Optional`](#structFRHAPI__SessionUpdate_1a66f3ab7b925c5ca17d043c5a088ce9d9) <a id="structFRHAPI__SessionUpdate_1a66f3ab7b925c5ca17d043c5a088ce9d9"></a>

Flags regarding the joinability of this session.

#### `public bool `[`Joinability_IsSet`](#structFRHAPI__SessionUpdate_1a9ac7501cd158c1b312824ec9b08143a4) <a id="structFRHAPI__SessionUpdate_1a9ac7501cd158c1b312824ec9b08143a4"></a>

true if Joinability_Optional has been set to a value

#### `public TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > `[`Teams_Optional`](#structFRHAPI__SessionUpdate_1aea24906b7e7a2d1b3e5fc24dd2475623) <a id="structFRHAPI__SessionUpdate_1aea24906b7e7a2d1b3e5fc24dd2475623"></a>

List of team size updates for this session. The length of the list represents the number of desired teams.

#### `public bool `[`Teams_IsSet`](#structFRHAPI__SessionUpdate_1aac6261a25e5317b6c4a1a31a7c4bb920) <a id="structFRHAPI__SessionUpdate_1aac6261a25e5317b6c4a1a31a7c4bb920"></a>

true if Teams_Optional has been set to a value

#### `public FString `[`Password_Optional`](#structFRHAPI__SessionUpdate_1ad87dc561bd34385bd9b4ab8b2e9eee9b) <a id="structFRHAPI__SessionUpdate_1ad87dc561bd34385bd9b4ab8b2e9eee9b"></a>

A password to join this session.

#### `public bool `[`Password_IsSet`](#structFRHAPI__SessionUpdate_1a6c0f390872003a6774d2569f074c0887) <a id="structFRHAPI__SessionUpdate_1a6c0f390872003a6774d2569f074c0887"></a>

true if Password_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionUpdate_1a92402f614620d0a1b3605ca95b8a2905)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionUpdate_1a92402f614620d0a1b3605ca95b8a2905"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionUpdate_1a551b8a5eb63887467a302d51293e4272)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionUpdate_1a551b8a5eb63887467a302d51293e4272"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1aa7c58fdb591870a6e868fdae09379e5f)`()` <a id="structFRHAPI__SessionUpdate_1aa7c58fdb591870a6e868fdae09379e5f"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a55fe134a27f8a3c41d4874df11880767)`() const` <a id="structFRHAPI__SessionUpdate_1a55fe134a27f8a3c41d4874df11880767"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a7ace46df7473f0b2de4574465393a751)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1a7ace46df7473f0b2de4574465393a751"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a7d6cd49f1ddbf0d71f520f81e3124e53)`(FString & OutValue) const` <a id="structFRHAPI__SessionUpdate_1a7d6cd49f1ddbf0d71f520f81e3124e53"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a495bcd0f9c5e31cafa3c69a32b76b7c3)`()` <a id="structFRHAPI__SessionUpdate_1a495bcd0f9c5e31cafa3c69a32b76b7c3"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a7685da10ac1f1a309c6b2355c95e4342)`() const` <a id="structFRHAPI__SessionUpdate_1a7685da10ac1f1a309c6b2355c95e4342"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1ae3b73d6e62fcc7e187f5497d7556065d)`(const FString & NewValue)` <a id="structFRHAPI__SessionUpdate_1ae3b73d6e62fcc7e187f5497d7556065d"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1aa8a9b9f2845ab50f50a700a91a416289)`(FString && NewValue)` <a id="structFRHAPI__SessionUpdate_1aa8a9b9f2845ab50f50a700a91a416289"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad)`()` <a id="structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1acb2e3a0e70a01d89fac2b19640aad6cb)`()` <a id="structFRHAPI__SessionUpdate_1acb2e3a0e70a01d89fac2b19640aad6cb"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a075c225aa96a363bfd843b49efcd9da0)`() const` <a id="structFRHAPI__SessionUpdate_1a075c225aa96a363bfd843b49efcd9da0"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a57756142fd44355ca15a7d111927b764)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1a57756142fd44355ca15a7d111927b764"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionUpdate_1ab3e7266ad5727f7c000893f488e2b32f)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionUpdate_1ab3e7266ad5727f7c000893f488e2b32f"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a1fe68aba24ba81204c4f4ecc7d770e8e)`()` <a id="structFRHAPI__SessionUpdate_1a1fe68aba24ba81204c4f4ecc7d770e8e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a1758ce4d030563d67d617a936d94e212)`() const` <a id="structFRHAPI__SessionUpdate_1a1758ce4d030563d67d617a936d94e212"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1a8c6573ae333aac22d170d8797236ea11)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionUpdate_1a8c6573ae333aac22d170d8797236ea11"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1a108525996c7f0dd2e811cdb0c9cdfbc0)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionUpdate_1a108525996c7f0dd2e811cdb0c9cdfbc0"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a)`()` <a id="structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a824fbe7b13c3d64413b56452833a7305)`()` <a id="structFRHAPI__SessionUpdate_1a824fbe7b13c3d64413b56452833a7305"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a66618dbe712476deb574bf154538fe3a)`() const` <a id="structFRHAPI__SessionUpdate_1a66618dbe712476deb574bf154538fe3a"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1af8a1642fe7aca221d44358b80061a3e0)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1af8a1642fe7aca221d44358b80061a3e0"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinable`](#structFRHAPI__SessionUpdate_1ab29e5def2e6d93d272ae094ddb3552d0)`(bool & OutValue) const` <a id="structFRHAPI__SessionUpdate_1ab29e5def2e6d93d272ae094ddb3552d0"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1a4324225177492ad040124872c999dc2d)`()` <a id="structFRHAPI__SessionUpdate_1a4324225177492ad040124872c999dc2d"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1a973f1341fbf86cd905c4876c7bd1be60)`() const` <a id="structFRHAPI__SessionUpdate_1a973f1341fbf86cd905c4876c7bd1be60"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__SessionUpdate_1a9b7e1776ee214b3465dee9737f06c4e6)`(const bool & NewValue)` <a id="structFRHAPI__SessionUpdate_1a9b7e1776ee214b3465dee9737f06c4e6"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__SessionUpdate_1aead93ce82c7bcee394990fa04ebf9ee8)`(bool && NewValue)` <a id="structFRHAPI__SessionUpdate_1aead93ce82c7bcee394990fa04ebf9ee8"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinable`](#structFRHAPI__SessionUpdate_1a5e38954afb4281bfd14241a6b0faca88)`()` <a id="structFRHAPI__SessionUpdate_1a5e38954afb4281bfd14241a6b0faca88"></a>

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Joinable`](#structFRHAPI__SessionUpdate_1a39a479d83626a59493ba13b56cb32497)`()` <a id="structFRHAPI__SessionUpdate_1a39a479d83626a59493ba13b56cb32497"></a>

Returns the default value of Joinable.

#### `public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__SessionUpdate_1a3fea3defbab86444924edb5d54056eb8)`()` <a id="structFRHAPI__SessionUpdate_1a3fea3defbab86444924edb5d54056eb8"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__SessionUpdate_1a2934536813ed69e7ae1db4649fb84da5)`() const` <a id="structFRHAPI__SessionUpdate_1a2934536813ed69e7ae1db4649fb84da5"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__SessionUpdate_1ad1cd818817b157f4e8eeae03e093acbc)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1ad1cd818817b157f4e8eeae03e093acbc"></a>

Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinability`](#structFRHAPI__SessionUpdate_1a7cb8a53159dec9f2c00d58af26a1d23e)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` <a id="structFRHAPI__SessionUpdate_1a7cb8a53159dec9f2c00d58af26a1d23e"></a>

Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__SessionUpdate_1a3a18f9a32a909fd441d1dffd8d417506)`()` <a id="structFRHAPI__SessionUpdate_1a3a18f9a32a909fd441d1dffd8d417506"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__SessionUpdate_1a8c3d8953ed31e9fe3bcb73b54be8f0c1)`() const` <a id="structFRHAPI__SessionUpdate_1a8c3d8953ed31e9fe3bcb73b54be8f0c1"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__SessionUpdate_1af04e553832f9d12b68f779a860e18089)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` <a id="structFRHAPI__SessionUpdate_1af04e553832f9d12b68f779a860e18089"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__SessionUpdate_1a79725b3f80be7b7649f8f08d63902275)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` <a id="structFRHAPI__SessionUpdate_1a79725b3f80be7b7649f8f08d63902275"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinability`](#structFRHAPI__SessionUpdate_1aa941834cc533bda228b7892ac99a9ac2)`()` <a id="structFRHAPI__SessionUpdate_1aa941834cc533bda228b7892ac99a9ac2"></a>

Clears the value of Joinability_Optional and sets Joinability_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1a15aea9c04e06420fca90ea415e81fb05)`()` <a id="structFRHAPI__SessionUpdate_1a15aea9c04e06420fca90ea415e81fb05"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1ac7118550201bd44a97137f46be7c5f68)`() const` <a id="structFRHAPI__SessionUpdate_1ac7118550201bd44a97137f46be7c5f68"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1a070c98c05422acc0074dcffb9de2ebf4)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1a070c98c05422acc0074dcffb9de2ebf4"></a>

Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeams`](#structFRHAPI__SessionUpdate_1a2c96d92c8a8f49a1da6df5ed0a1b4ac9)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` <a id="structFRHAPI__SessionUpdate_1a2c96d92c8a8f49a1da6df5ed0a1b4ac9"></a>

Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1a12f9bb99d1760a6a436966dfdd9463cc)`()` <a id="structFRHAPI__SessionUpdate_1a12f9bb99d1760a6a436966dfdd9463cc"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1a8025df14efa73e12fac8b1c9b0f66109)`() const` <a id="structFRHAPI__SessionUpdate_1a8025df14efa73e12fac8b1c9b0f66109"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a56f733c5f20f23402e932689ab5babd3)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` <a id="structFRHAPI__SessionUpdate_1a56f733c5f20f23402e932689ab5babd3"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a68b59824247884c4f050f3716b2e114b)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` <a id="structFRHAPI__SessionUpdate_1a68b59824247884c4f050f3716b2e114b"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.

#### `public inline void `[`ClearTeams`](#structFRHAPI__SessionUpdate_1a25c2f946c12657cbf3ecd48755f2b141)`()` <a id="structFRHAPI__SessionUpdate_1a25c2f946c12657cbf3ecd48755f2b141"></a>

Clears the value of Teams_Optional and sets Teams_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1aeba1e525a6537b610395dd1b8a4ea108)`()` <a id="structFRHAPI__SessionUpdate_1aeba1e525a6537b610395dd1b8a4ea108"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1a14c2f1f222832e012cf3bf50391c9de0)`() const` <a id="structFRHAPI__SessionUpdate_1a14c2f1f222832e012cf3bf50391c9de0"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1a2daad0214951e2b3944a4f0b4b59aa6d)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1a2daad0214951e2b3944a4f0b4b59aa6d"></a>

Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPassword`](#structFRHAPI__SessionUpdate_1a0385371f18b1208905c24aeacf0aa72e)`(FString & OutValue) const` <a id="structFRHAPI__SessionUpdate_1a0385371f18b1208905c24aeacf0aa72e"></a>

Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPasswordOrNull`](#structFRHAPI__SessionUpdate_1afebf71e94f9493fbbf7779a2d6215aa8)`()` <a id="structFRHAPI__SessionUpdate_1afebf71e94f9493fbbf7779a2d6215aa8"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPasswordOrNull`](#structFRHAPI__SessionUpdate_1a2a23fcf14ec88d535395c36656f85ca0)`() const` <a id="structFRHAPI__SessionUpdate_1a2a23fcf14ec88d535395c36656f85ca0"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__SessionUpdate_1ab8dbe88f2437902440665349e0b578d5)`(const FString & NewValue)` <a id="structFRHAPI__SessionUpdate_1ab8dbe88f2437902440665349e0b578d5"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__SessionUpdate_1a97ec8253f362f78852f090318cb07a28)`(FString && NewValue)` <a id="structFRHAPI__SessionUpdate_1a97ec8253f362f78852f090318cb07a28"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.

#### `public inline void `[`ClearPassword`](#structFRHAPI__SessionUpdate_1a97e1dde9469af932d4083b01fbe2a2fd)`()` <a id="structFRHAPI__SessionUpdate_1a97e1dde9469af932d4083b01fbe2a2fd"></a>

Clears the value of Password_Optional and sets Password_IsSet to false.

