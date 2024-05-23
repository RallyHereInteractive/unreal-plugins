# group `RHAPI_PlayerPersonResponse` <a id="group__RHAPI__PlayerPersonResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerPersonResponse`](#structFRHAPI__PlayerPersonResponse) | Response for getting a player&#39;s info.

## struct `FRHAPI_PlayerPersonResponse` <a id="structFRHAPI__PlayerPersonResponse"></a>

```
struct FRHAPI_PlayerPersonResponse
  : public FRHAPI_Model
```

Response for getting a player&#39;s info.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PlayerId`](#structFRHAPI__PlayerPersonResponse_1a280f3f2e11117ce512ad294bb77b986a) | Player ID *DEPRECATED* use `player_uuid` instead.
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a7519b55e22e6a9c02dc80cbfc9d6b2f6) | Player UUID.
`public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PlayerPersonResponse_1a71d20d8453e439a2338a4796f4f7c9cc) | *DEPRECATED* use `active_player_uuid` instead. Active player ID, if the player has an active player.
`public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PlayerPersonResponse_1a1fe5e1c6848bc0efc3bf1a3c82357c9e) | true if ActivePlayerId_Optional has been set to a value
`public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__PlayerPersonResponse_1a3dde1fe982714d74c0fd44719367decb) | Active player UUID, if the player has an active player.
`public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__PlayerPersonResponse_1a7e4f80a38d2b12f0420786801305dffd) | true if ActivePlayerUuid_Optional has been set to a value
`public FGuid `[`PersonId`](#structFRHAPI__PlayerPersonResponse_1a7c9c64673c5f4060541b705be6a68e4e) | Person ID.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerPersonResponse_1aae962d8a5cb967cb7bcd382cc1188962)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerPersonResponse_1a07e5f87c8b258ba8b4b5f9cf24294188)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1afed3098f55fb2c1175b20d5f9a469f11)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1a218ed87d8e156eda4bf474f4a4efb050)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1a820ab44ccf334526c874dfe032ae1179)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1ad515494fd8fb4e76d8df145cea805a08)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerPersonResponse_1a5c9a8ada9783a0f385bc997745fdd9f2)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerPersonResponse_1ab1bdfbc107c2424b5062899491c5ad56)`()` | Sets the value of PlayerId to its default
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a02c5fae88b825eb4dd395937544c5ce7)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1ad0409636cc555075b0b2e1a3afbafd93)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a94123983b25e78d680e03396d96bdd1f)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aa9eba9b71c3dd5a30964a8fe2aa95f4c)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1af591f58851eed2ffc18be12e5936ed24)`()` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a6929c7e179b8897bc5fcbb0a35836489)`() const` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a96ac6dff30726f82b79ff0a5b1b47f73)`(const int32 & DefaultValue) const` | Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a187cfe3d29b7eb69ae446035ac229f9f)`(int32 & OutValue) const` | Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1a87c814466209339e0f658c1b411e7621)`()` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1affd49f363af67f77e1d6622c31eccb5f)`() const` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a19ad9813c879aff779d6ce0980e44769)`(const int32 & NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a2cf3a97116d00a6afee51dd794aead0d)`(int32 && NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a52911bca3d1c286aa9c49fa76861047a)`()` | Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.
`public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PlayerPersonResponse_1a7b9f33082c19d3b28c613a7dbfd8243e)`() const` | Returns true if ActivePlayerId_Optional is set and matches the default value.
`public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PlayerPersonResponse_1a2b06fa3955a69ff033aa899285fe0cc2)`()` | Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.
`public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a023f6dcd8796e5bd8fded941f8ceaff8)`()` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aea3c573d00ed9b1b0b50e673bf4d4471)`() const` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a69a4e07cbbed9133ca54ddd2ef03a070)`(const FGuid & DefaultValue) const` | Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1afcf0666d4223356e40602f728b72c17d)`(FGuid & OutValue) const` | Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1aaaf0e94aa3718791751fde7e34416884)`()` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1ad3e7c39000c20d9b85d65875381180cd)`() const` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aca41ca7015a9149ef82d8ab2763c027d)`(const FGuid & NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a0005536a280a08f5c1c5e7368d6249ba)`(FGuid && NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a4d3688ff68e789bac4d134e5781e3235)`()` | Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1ac85300f4fb4136190db63cae819ab715)`()` | Gets the value of PersonId.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1a8881ca097d22c79931874d8334478bbc)`() const` | Gets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1a35a4f7105803ece61ed04ad20ccb29b0)`(const FGuid & NewValue)` | Sets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1a2b42e72a1a9775df4f065c704ae18dcc)`(FGuid && NewValue)` | Sets the value of PersonId using move semantics.

### Members

#### `public int32 `[`PlayerId`](#structFRHAPI__PlayerPersonResponse_1a280f3f2e11117ce512ad294bb77b986a) <a id="structFRHAPI__PlayerPersonResponse_1a280f3f2e11117ce512ad294bb77b986a"></a>

Player ID *DEPRECATED* use `player_uuid` instead.

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a7519b55e22e6a9c02dc80cbfc9d6b2f6) <a id="structFRHAPI__PlayerPersonResponse_1a7519b55e22e6a9c02dc80cbfc9d6b2f6"></a>

Player UUID.

#### `public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PlayerPersonResponse_1a71d20d8453e439a2338a4796f4f7c9cc) <a id="structFRHAPI__PlayerPersonResponse_1a71d20d8453e439a2338a4796f4f7c9cc"></a>

*DEPRECATED* use `active_player_uuid` instead. Active player ID, if the player has an active player.

#### `public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PlayerPersonResponse_1a1fe5e1c6848bc0efc3bf1a3c82357c9e) <a id="structFRHAPI__PlayerPersonResponse_1a1fe5e1c6848bc0efc3bf1a3c82357c9e"></a>

true if ActivePlayerId_Optional has been set to a value

#### `public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__PlayerPersonResponse_1a3dde1fe982714d74c0fd44719367decb) <a id="structFRHAPI__PlayerPersonResponse_1a3dde1fe982714d74c0fd44719367decb"></a>

Active player UUID, if the player has an active player.

#### `public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__PlayerPersonResponse_1a7e4f80a38d2b12f0420786801305dffd) <a id="structFRHAPI__PlayerPersonResponse_1a7e4f80a38d2b12f0420786801305dffd"></a>

true if ActivePlayerUuid_Optional has been set to a value

#### `public FGuid `[`PersonId`](#structFRHAPI__PlayerPersonResponse_1a7c9c64673c5f4060541b705be6a68e4e) <a id="structFRHAPI__PlayerPersonResponse_1a7c9c64673c5f4060541b705be6a68e4e"></a>

Person ID.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerPersonResponse_1aae962d8a5cb967cb7bcd382cc1188962)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerPersonResponse_1aae962d8a5cb967cb7bcd382cc1188962"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerPersonResponse_1a07e5f87c8b258ba8b4b5f9cf24294188)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerPersonResponse_1a07e5f87c8b258ba8b4b5f9cf24294188"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1afed3098f55fb2c1175b20d5f9a469f11)`()` <a id="structFRHAPI__PlayerPersonResponse_1afed3098f55fb2c1175b20d5f9a469f11"></a>

Gets the value of PlayerId.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1a218ed87d8e156eda4bf474f4a4efb050)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a218ed87d8e156eda4bf474f4a4efb050"></a>

Gets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1a820ab44ccf334526c874dfe032ae1179)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a820ab44ccf334526c874dfe032ae1179"></a>

Sets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1ad515494fd8fb4e76d8df145cea805a08)`(int32 && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1ad515494fd8fb4e76d8df145cea805a08"></a>

Sets the value of PlayerId using move semantics.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerPersonResponse_1a5c9a8ada9783a0f385bc997745fdd9f2)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a5c9a8ada9783a0f385bc997745fdd9f2"></a>

Returns true if PlayerId matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerPersonResponse_1ab1bdfbc107c2424b5062899491c5ad56)`()` <a id="structFRHAPI__PlayerPersonResponse_1ab1bdfbc107c2424b5062899491c5ad56"></a>

Sets the value of PlayerId to its default

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a02c5fae88b825eb4dd395937544c5ce7)`()` <a id="structFRHAPI__PlayerPersonResponse_1a02c5fae88b825eb4dd395937544c5ce7"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1ad0409636cc555075b0b2e1a3afbafd93)`() const` <a id="structFRHAPI__PlayerPersonResponse_1ad0409636cc555075b0b2e1a3afbafd93"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a94123983b25e78d680e03396d96bdd1f)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a94123983b25e78d680e03396d96bdd1f"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aa9eba9b71c3dd5a30964a8fe2aa95f4c)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1aa9eba9b71c3dd5a30964a8fe2aa95f4c"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1af591f58851eed2ffc18be12e5936ed24)`()` <a id="structFRHAPI__PlayerPersonResponse_1af591f58851eed2ffc18be12e5936ed24"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a6929c7e179b8897bc5fcbb0a35836489)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a6929c7e179b8897bc5fcbb0a35836489"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a96ac6dff30726f82b79ff0a5b1b47f73)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a96ac6dff30726f82b79ff0a5b1b47f73"></a>

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a187cfe3d29b7eb69ae446035ac229f9f)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a187cfe3d29b7eb69ae446035ac229f9f"></a>

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1a87c814466209339e0f658c1b411e7621)`()` <a id="structFRHAPI__PlayerPersonResponse_1a87c814466209339e0f658c1b411e7621"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1affd49f363af67f77e1d6622c31eccb5f)`() const` <a id="structFRHAPI__PlayerPersonResponse_1affd49f363af67f77e1d6622c31eccb5f"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a19ad9813c879aff779d6ce0980e44769)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a19ad9813c879aff779d6ce0980e44769"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.

#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a2cf3a97116d00a6afee51dd794aead0d)`(int32 && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a2cf3a97116d00a6afee51dd794aead0d"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a52911bca3d1c286aa9c49fa76861047a)`()` <a id="structFRHAPI__PlayerPersonResponse_1a52911bca3d1c286aa9c49fa76861047a"></a>

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.

#### `public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PlayerPersonResponse_1a7b9f33082c19d3b28c613a7dbfd8243e)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a7b9f33082c19d3b28c613a7dbfd8243e"></a>

Returns true if ActivePlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PlayerPersonResponse_1a2b06fa3955a69ff033aa899285fe0cc2)`()` <a id="structFRHAPI__PlayerPersonResponse_1a2b06fa3955a69ff033aa899285fe0cc2"></a>

Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.

#### `public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a023f6dcd8796e5bd8fded941f8ceaff8)`()` <a id="structFRHAPI__PlayerPersonResponse_1a023f6dcd8796e5bd8fded941f8ceaff8"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aea3c573d00ed9b1b0b50e673bf4d4471)`() const` <a id="structFRHAPI__PlayerPersonResponse_1aea3c573d00ed9b1b0b50e673bf4d4471"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a69a4e07cbbed9133ca54ddd2ef03a070)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a69a4e07cbbed9133ca54ddd2ef03a070"></a>

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1afcf0666d4223356e40602f728b72c17d)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerPersonResponse_1afcf0666d4223356e40602f728b72c17d"></a>

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1aaaf0e94aa3718791751fde7e34416884)`()` <a id="structFRHAPI__PlayerPersonResponse_1aaaf0e94aa3718791751fde7e34416884"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1ad3e7c39000c20d9b85d65875381180cd)`() const` <a id="structFRHAPI__PlayerPersonResponse_1ad3e7c39000c20d9b85d65875381180cd"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aca41ca7015a9149ef82d8ab2763c027d)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1aca41ca7015a9149ef82d8ab2763c027d"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.

#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a0005536a280a08f5c1c5e7368d6249ba)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a0005536a280a08f5c1c5e7368d6249ba"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a4d3688ff68e789bac4d134e5781e3235)`()` <a id="structFRHAPI__PlayerPersonResponse_1a4d3688ff68e789bac4d134e5781e3235"></a>

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1ac85300f4fb4136190db63cae819ab715)`()` <a id="structFRHAPI__PlayerPersonResponse_1ac85300f4fb4136190db63cae819ab715"></a>

Gets the value of PersonId.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1a8881ca097d22c79931874d8334478bbc)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a8881ca097d22c79931874d8334478bbc"></a>

Gets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1a35a4f7105803ece61ed04ad20ccb29b0)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a35a4f7105803ece61ed04ad20ccb29b0"></a>

Sets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1a2b42e72a1a9775df4f065c704ae18dcc)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a2b42e72a1a9775df4f065c704ae18dcc"></a>

Sets the value of PersonId using move semantics.

