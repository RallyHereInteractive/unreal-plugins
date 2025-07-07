---
title: RHAPI_SessionJoinability
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionJoinability`](#structFRHAPI__SessionJoinability) | 

## struct `FRHAPI_SessionJoinability` <a id="structFRHAPI__SessionJoinability"></a>

```
struct FRHAPI_SessionJoinability
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`Open_Optional`](#structFRHAPI__SessionJoinability_1a1e453da76b6e515cb3624d711bdd0d7c) | All players can join without an invite. If enabled, it overwrites other permissions.
`public bool `[`Open_IsSet`](#structFRHAPI__SessionJoinability_1ac2d56ab51817c6f34ed6ceb43e522950) | true if Open_Optional has been set to a value
`public bool `[`Friends_Optional`](#structFRHAPI__SessionJoinability_1ad62e2bd224ede22e2a04a46e46cc0b22) | Friends can join this session without an invite.
`public bool `[`Friends_IsSet`](#structFRHAPI__SessionJoinability_1aedb037fb0c1911795a4f1b8999122620) | true if Friends_Optional has been set to a value
`public bool `[`Platform_Optional`](#structFRHAPI__SessionJoinability_1a81d8f29bfb85fdbe837973861626d325) | Players can join through platform sessions.
`public bool `[`Platform_IsSet`](#structFRHAPI__SessionJoinability_1a11a8ecbcf364bc01451d2899733e17b1) | true if Platform_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionJoinability_1a2c0ced76c112ebec1169fbf2f17c3d56)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionJoinability_1a76edf91f05e7ecce2feb16926d3f2f73)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1aed6d4f4517d2797939ff28ea0cca749c)`()` | Gets the value of Open_Optional, regardless of it having been set.
`public inline const bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1a08278df0ed5b8bd30f109f07aab0e799)`() const` | Gets the value of Open_Optional, regardless of it having been set.
`public inline const bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1a3f225556defae520bfd14696908b1910)`(const bool & DefaultValue) const` | Gets the value of Open_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOpen`](#structFRHAPI__SessionJoinability_1a38a043705362afadeaf609ec9596ac63)`(bool & OutValue) const` | Fills OutValue with the value of Open_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetOpenOrNull`](#structFRHAPI__SessionJoinability_1a791e6d277c535adc6cac7b337dc3bf9b)`()` | Returns a pointer to Open_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetOpenOrNull`](#structFRHAPI__SessionJoinability_1a1de1cf77191a5710e1b72ffb09fa6616)`() const` | Returns a pointer to Open_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOpen`](#structFRHAPI__SessionJoinability_1a303b5d9a97806b8e77e0977b384c1f01)`(const bool & NewValue)` | Sets the value of Open_Optional and also sets Open_IsSet to true.
`public inline void `[`SetOpen`](#structFRHAPI__SessionJoinability_1a13db5bd5d1b605399b199c8a3f9f4484)`(bool && NewValue)` | Sets the value of Open_Optional and also sets Open_IsSet to true using move semantics.
`public inline void `[`ClearOpen`](#structFRHAPI__SessionJoinability_1af712cb75ea81053987e61e844246fa43)`()` | Clears the value of Open_Optional and sets Open_IsSet to false.
`public inline bool `[`IsOpenSet`](#structFRHAPI__SessionJoinability_1ae77129e25355607c49f6cf53fc5b5d2c)`() const` | Checks whether Open_Optional has been set.
`public inline bool `[`IsOpenDefaultValue`](#structFRHAPI__SessionJoinability_1a44b86e08cdda1ec078543d78d81341ea)`() const` | Returns true if Open_Optional is set and matches the default value.
`public inline void `[`SetOpenToDefault`](#structFRHAPI__SessionJoinability_1ac5920ee6118cbafeba3e7724ba26c488)`()` | Sets the value of Open_Optional to its default and also sets Open_IsSet to true.
`public inline bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1a6d3bd0d95f44ac54188b3e6fcb625343)`()` | Gets the value of Friends_Optional, regardless of it having been set.
`public inline const bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1a8f56615f9d1eed12e43f6346c5c51f2c)`() const` | Gets the value of Friends_Optional, regardless of it having been set.
`public inline const bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1a28235bbd781aa12066bd7c9f2b0c510e)`(const bool & DefaultValue) const` | Gets the value of Friends_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFriends`](#structFRHAPI__SessionJoinability_1af3060f0c7d8aba418274f6ec1ebda82f)`(bool & OutValue) const` | Fills OutValue with the value of Friends_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetFriendsOrNull`](#structFRHAPI__SessionJoinability_1acd1f62c6b78a8e3d14800e9d494c3c63)`()` | Returns a pointer to Friends_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetFriendsOrNull`](#structFRHAPI__SessionJoinability_1a313c8306d371c67881458a10c5959d98)`() const` | Returns a pointer to Friends_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFriends`](#structFRHAPI__SessionJoinability_1a9c11c57a83d8640a2e82a8c22789b0d1)`(const bool & NewValue)` | Sets the value of Friends_Optional and also sets Friends_IsSet to true.
`public inline void `[`SetFriends`](#structFRHAPI__SessionJoinability_1a3b8a714dc3fc8f23881c734751f5028e)`(bool && NewValue)` | Sets the value of Friends_Optional and also sets Friends_IsSet to true using move semantics.
`public inline void `[`ClearFriends`](#structFRHAPI__SessionJoinability_1a92ba81389db347b1068ddeeb0c23ce05)`()` | Clears the value of Friends_Optional and sets Friends_IsSet to false.
`public inline bool `[`IsFriendsSet`](#structFRHAPI__SessionJoinability_1a777ddb544579f5b71b275c09561e806c)`() const` | Checks whether Friends_Optional has been set.
`public inline bool `[`IsFriendsDefaultValue`](#structFRHAPI__SessionJoinability_1aacae3a9d48cddd46f89144c20907c229)`() const` | Returns true if Friends_Optional is set and matches the default value.
`public inline void `[`SetFriendsToDefault`](#structFRHAPI__SessionJoinability_1ad0f55eb74369d00f45d3d4f0736410a3)`()` | Sets the value of Friends_Optional to its default and also sets Friends_IsSet to true.
`public inline bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1af8014dae3d1dc51b1fba0d3b2c8f600c)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1a82534132ca19381811fc15e2439b27c9)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1a5305db672407bc8959a877eff413e6e9)`(const bool & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__SessionJoinability_1ad991fc594461d0d55fa4da0449bbb6bc)`(bool & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetPlatformOrNull`](#structFRHAPI__SessionJoinability_1ac4868cfb9b24fc2d48a69cbc909b41d5)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetPlatformOrNull`](#structFRHAPI__SessionJoinability_1a82401ae59e6fc17ebec2495f853ec983)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__SessionJoinability_1af281604ebfbb3bfc93b39a1b94c04ecd)`(const bool & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__SessionJoinability_1a83187bff93a74a7ce29bdd9423fd09a9)`(bool && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__SessionJoinability_1a5dbd4073a6aa8eaca5b3d6642656277b)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__SessionJoinability_1a91851bea4c7a74fb13f2ad7d5c54b37e)`() const` | Checks whether Platform_Optional has been set.
`public inline bool `[`IsPlatformDefaultValue`](#structFRHAPI__SessionJoinability_1a12197a9757794340f3244564ace8fb36)`() const` | Returns true if Platform_Optional is set and matches the default value.
`public inline void `[`SetPlatformToDefault`](#structFRHAPI__SessionJoinability_1a4bb76fe17c5219756d684c7a4173ca9e)`()` | Sets the value of Platform_Optional to its default and also sets Platform_IsSet to true.

### Members

#### `public bool `[`Open_Optional`](#structFRHAPI__SessionJoinability_1a1e453da76b6e515cb3624d711bdd0d7c) <a id="structFRHAPI__SessionJoinability_1a1e453da76b6e515cb3624d711bdd0d7c"></a>

All players can join without an invite. If enabled, it overwrites other permissions.

#### `public bool `[`Open_IsSet`](#structFRHAPI__SessionJoinability_1ac2d56ab51817c6f34ed6ceb43e522950) <a id="structFRHAPI__SessionJoinability_1ac2d56ab51817c6f34ed6ceb43e522950"></a>

true if Open_Optional has been set to a value

#### `public bool `[`Friends_Optional`](#structFRHAPI__SessionJoinability_1ad62e2bd224ede22e2a04a46e46cc0b22) <a id="structFRHAPI__SessionJoinability_1ad62e2bd224ede22e2a04a46e46cc0b22"></a>

Friends can join this session without an invite.

#### `public bool `[`Friends_IsSet`](#structFRHAPI__SessionJoinability_1aedb037fb0c1911795a4f1b8999122620) <a id="structFRHAPI__SessionJoinability_1aedb037fb0c1911795a4f1b8999122620"></a>

true if Friends_Optional has been set to a value

#### `public bool `[`Platform_Optional`](#structFRHAPI__SessionJoinability_1a81d8f29bfb85fdbe837973861626d325) <a id="structFRHAPI__SessionJoinability_1a81d8f29bfb85fdbe837973861626d325"></a>

Players can join through platform sessions.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__SessionJoinability_1a11a8ecbcf364bc01451d2899733e17b1) <a id="structFRHAPI__SessionJoinability_1a11a8ecbcf364bc01451d2899733e17b1"></a>

true if Platform_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionJoinability_1a2c0ced76c112ebec1169fbf2f17c3d56)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionJoinability_1a2c0ced76c112ebec1169fbf2f17c3d56"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionJoinability_1a76edf91f05e7ecce2feb16926d3f2f73)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionJoinability_1a76edf91f05e7ecce2feb16926d3f2f73"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1aed6d4f4517d2797939ff28ea0cca749c)`()` <a id="structFRHAPI__SessionJoinability_1aed6d4f4517d2797939ff28ea0cca749c"></a>

Gets the value of Open_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1a08278df0ed5b8bd30f109f07aab0e799)`() const` <a id="structFRHAPI__SessionJoinability_1a08278df0ed5b8bd30f109f07aab0e799"></a>

Gets the value of Open_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1a3f225556defae520bfd14696908b1910)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionJoinability_1a3f225556defae520bfd14696908b1910"></a>

Gets the value of Open_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOpen`](#structFRHAPI__SessionJoinability_1a38a043705362afadeaf609ec9596ac63)`(bool & OutValue) const` <a id="structFRHAPI__SessionJoinability_1a38a043705362afadeaf609ec9596ac63"></a>

Fills OutValue with the value of Open_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetOpenOrNull`](#structFRHAPI__SessionJoinability_1a791e6d277c535adc6cac7b337dc3bf9b)`()` <a id="structFRHAPI__SessionJoinability_1a791e6d277c535adc6cac7b337dc3bf9b"></a>

Returns a pointer to Open_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetOpenOrNull`](#structFRHAPI__SessionJoinability_1a1de1cf77191a5710e1b72ffb09fa6616)`() const` <a id="structFRHAPI__SessionJoinability_1a1de1cf77191a5710e1b72ffb09fa6616"></a>

Returns a pointer to Open_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOpen`](#structFRHAPI__SessionJoinability_1a303b5d9a97806b8e77e0977b384c1f01)`(const bool & NewValue)` <a id="structFRHAPI__SessionJoinability_1a303b5d9a97806b8e77e0977b384c1f01"></a>

Sets the value of Open_Optional and also sets Open_IsSet to true.

#### `public inline void `[`SetOpen`](#structFRHAPI__SessionJoinability_1a13db5bd5d1b605399b199c8a3f9f4484)`(bool && NewValue)` <a id="structFRHAPI__SessionJoinability_1a13db5bd5d1b605399b199c8a3f9f4484"></a>

Sets the value of Open_Optional and also sets Open_IsSet to true using move semantics.

#### `public inline void `[`ClearOpen`](#structFRHAPI__SessionJoinability_1af712cb75ea81053987e61e844246fa43)`()` <a id="structFRHAPI__SessionJoinability_1af712cb75ea81053987e61e844246fa43"></a>

Clears the value of Open_Optional and sets Open_IsSet to false.

#### `public inline bool `[`IsOpenSet`](#structFRHAPI__SessionJoinability_1ae77129e25355607c49f6cf53fc5b5d2c)`() const` <a id="structFRHAPI__SessionJoinability_1ae77129e25355607c49f6cf53fc5b5d2c"></a>

Checks whether Open_Optional has been set.

#### `public inline bool `[`IsOpenDefaultValue`](#structFRHAPI__SessionJoinability_1a44b86e08cdda1ec078543d78d81341ea)`() const` <a id="structFRHAPI__SessionJoinability_1a44b86e08cdda1ec078543d78d81341ea"></a>

Returns true if Open_Optional is set and matches the default value.

#### `public inline void `[`SetOpenToDefault`](#structFRHAPI__SessionJoinability_1ac5920ee6118cbafeba3e7724ba26c488)`()` <a id="structFRHAPI__SessionJoinability_1ac5920ee6118cbafeba3e7724ba26c488"></a>

Sets the value of Open_Optional to its default and also sets Open_IsSet to true.

#### `public inline bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1a6d3bd0d95f44ac54188b3e6fcb625343)`()` <a id="structFRHAPI__SessionJoinability_1a6d3bd0d95f44ac54188b3e6fcb625343"></a>

Gets the value of Friends_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1a8f56615f9d1eed12e43f6346c5c51f2c)`() const` <a id="structFRHAPI__SessionJoinability_1a8f56615f9d1eed12e43f6346c5c51f2c"></a>

Gets the value of Friends_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1a28235bbd781aa12066bd7c9f2b0c510e)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionJoinability_1a28235bbd781aa12066bd7c9f2b0c510e"></a>

Gets the value of Friends_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFriends`](#structFRHAPI__SessionJoinability_1af3060f0c7d8aba418274f6ec1ebda82f)`(bool & OutValue) const` <a id="structFRHAPI__SessionJoinability_1af3060f0c7d8aba418274f6ec1ebda82f"></a>

Fills OutValue with the value of Friends_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetFriendsOrNull`](#structFRHAPI__SessionJoinability_1acd1f62c6b78a8e3d14800e9d494c3c63)`()` <a id="structFRHAPI__SessionJoinability_1acd1f62c6b78a8e3d14800e9d494c3c63"></a>

Returns a pointer to Friends_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetFriendsOrNull`](#structFRHAPI__SessionJoinability_1a313c8306d371c67881458a10c5959d98)`() const` <a id="structFRHAPI__SessionJoinability_1a313c8306d371c67881458a10c5959d98"></a>

Returns a pointer to Friends_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFriends`](#structFRHAPI__SessionJoinability_1a9c11c57a83d8640a2e82a8c22789b0d1)`(const bool & NewValue)` <a id="structFRHAPI__SessionJoinability_1a9c11c57a83d8640a2e82a8c22789b0d1"></a>

Sets the value of Friends_Optional and also sets Friends_IsSet to true.

#### `public inline void `[`SetFriends`](#structFRHAPI__SessionJoinability_1a3b8a714dc3fc8f23881c734751f5028e)`(bool && NewValue)` <a id="structFRHAPI__SessionJoinability_1a3b8a714dc3fc8f23881c734751f5028e"></a>

Sets the value of Friends_Optional and also sets Friends_IsSet to true using move semantics.

#### `public inline void `[`ClearFriends`](#structFRHAPI__SessionJoinability_1a92ba81389db347b1068ddeeb0c23ce05)`()` <a id="structFRHAPI__SessionJoinability_1a92ba81389db347b1068ddeeb0c23ce05"></a>

Clears the value of Friends_Optional and sets Friends_IsSet to false.

#### `public inline bool `[`IsFriendsSet`](#structFRHAPI__SessionJoinability_1a777ddb544579f5b71b275c09561e806c)`() const` <a id="structFRHAPI__SessionJoinability_1a777ddb544579f5b71b275c09561e806c"></a>

Checks whether Friends_Optional has been set.

#### `public inline bool `[`IsFriendsDefaultValue`](#structFRHAPI__SessionJoinability_1aacae3a9d48cddd46f89144c20907c229)`() const` <a id="structFRHAPI__SessionJoinability_1aacae3a9d48cddd46f89144c20907c229"></a>

Returns true if Friends_Optional is set and matches the default value.

#### `public inline void `[`SetFriendsToDefault`](#structFRHAPI__SessionJoinability_1ad0f55eb74369d00f45d3d4f0736410a3)`()` <a id="structFRHAPI__SessionJoinability_1ad0f55eb74369d00f45d3d4f0736410a3"></a>

Sets the value of Friends_Optional to its default and also sets Friends_IsSet to true.

#### `public inline bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1af8014dae3d1dc51b1fba0d3b2c8f600c)`()` <a id="structFRHAPI__SessionJoinability_1af8014dae3d1dc51b1fba0d3b2c8f600c"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1a82534132ca19381811fc15e2439b27c9)`() const` <a id="structFRHAPI__SessionJoinability_1a82534132ca19381811fc15e2439b27c9"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1a5305db672407bc8959a877eff413e6e9)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionJoinability_1a5305db672407bc8959a877eff413e6e9"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__SessionJoinability_1ad991fc594461d0d55fa4da0449bbb6bc)`(bool & OutValue) const` <a id="structFRHAPI__SessionJoinability_1ad991fc594461d0d55fa4da0449bbb6bc"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetPlatformOrNull`](#structFRHAPI__SessionJoinability_1ac4868cfb9b24fc2d48a69cbc909b41d5)`()` <a id="structFRHAPI__SessionJoinability_1ac4868cfb9b24fc2d48a69cbc909b41d5"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetPlatformOrNull`](#structFRHAPI__SessionJoinability_1a82401ae59e6fc17ebec2495f853ec983)`() const` <a id="structFRHAPI__SessionJoinability_1a82401ae59e6fc17ebec2495f853ec983"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__SessionJoinability_1af281604ebfbb3bfc93b39a1b94c04ecd)`(const bool & NewValue)` <a id="structFRHAPI__SessionJoinability_1af281604ebfbb3bfc93b39a1b94c04ecd"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__SessionJoinability_1a83187bff93a74a7ce29bdd9423fd09a9)`(bool && NewValue)` <a id="structFRHAPI__SessionJoinability_1a83187bff93a74a7ce29bdd9423fd09a9"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__SessionJoinability_1a5dbd4073a6aa8eaca5b3d6642656277b)`()` <a id="structFRHAPI__SessionJoinability_1a5dbd4073a6aa8eaca5b3d6642656277b"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__SessionJoinability_1a91851bea4c7a74fb13f2ad7d5c54b37e)`() const` <a id="structFRHAPI__SessionJoinability_1a91851bea4c7a74fb13f2ad7d5c54b37e"></a>

Checks whether Platform_Optional has been set.

#### `public inline bool `[`IsPlatformDefaultValue`](#structFRHAPI__SessionJoinability_1a12197a9757794340f3244564ace8fb36)`() const` <a id="structFRHAPI__SessionJoinability_1a12197a9757794340f3244564ace8fb36"></a>

Returns true if Platform_Optional is set and matches the default value.

#### `public inline void `[`SetPlatformToDefault`](#structFRHAPI__SessionJoinability_1a4bb76fe17c5219756d684c7a4173ca9e)`()` <a id="structFRHAPI__SessionJoinability_1a4bb76fe17c5219756d684c7a4173ca9e"></a>

Sets the value of Platform_Optional to its default and also sets Platform_IsSet to true.

