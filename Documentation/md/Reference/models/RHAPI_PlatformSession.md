---
title: RHAPI_PlatformSession
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformSession`](#structFRHAPI__PlatformSession) | A platform session resource in a RallyHere session.

## struct `FRHAPI_PlatformSession` <a id="structFRHAPI__PlatformSession"></a>

```
struct FRHAPI_PlatformSession
  : public FRHAPI_Model
```

A platform session resource in a RallyHere session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformSession_1a2bae055e3f10ff588cd9f272f218503b) | Platform that this session is for.
`public FString `[`PlatformSessionType`](#structFRHAPI__PlatformSession_1a6bb67ef7a058965a657d6c1a00853bad) | Platform-Specific Identifier for the Platform's template.
`public FString `[`PlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a1035f971a914bc5547232d34e673898c) | Platform session's unique identifier.
`public TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > `[`Players`](#structFRHAPI__PlatformSession_1a457c7e431c6f6dc18bd781d09ba5d5fb) | DEPRECATED. PlatformSessions no longer keep tracking of players. Players in the platform session.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlatformSession_1a9892c6b70fc4a33cb19ec43e5ea10d0a) | Product defined custom data fields about the platform session.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlatformSession_1a1868b2138d2cf1feca6c1f300a104cea) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformSession_1ac38d76af37830fe89415db449ec3addd)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformSession_1aa44e115425ea23712661a04698b3152d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1a952cb14f6eaaa2491086cd489981948a)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1a33457ff07a216fd18b280dd291bad4a8)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformSession_1a5550cb055b2e15cd5bbeb88a7c105034)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformSession_1ac07e0095c1e581adb986086ad87a3fcd)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1a6abf96e6720a2bb31f101d61018665ac)`()` | Gets the value of PlatformSessionType.
`public inline const FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1a1b0ea0e671af45dfe5ded668bae2fcb0)`() const` | Gets the value of PlatformSessionType.
`public inline void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSession_1a1000d7f30b43edac9dc4f3dc1389df6f)`(const FString & NewValue)` | Sets the value of PlatformSessionType.
`public inline void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSession_1a190f203e890b984d2fd6fefa937d906c)`(FString && NewValue)` | Sets the value of PlatformSessionType using move semantics.
`public inline FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1adfef5c3286b68e09c708156b558e6f73)`()` | Gets the value of PlatformSessionIdBase64.
`public inline const FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1af1b862d2198208a369b05a74ede225db)`() const` | Gets the value of PlatformSessionIdBase64.
`public inline void `[`SetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a3e09fcf39b3f2392315c7f715a177ae6)`(const FString & NewValue)` | Sets the value of PlatformSessionIdBase64.
`public inline void `[`SetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a64cc329bd0f448e450855ab97b8c27ee)`(FString && NewValue)` | Sets the value of PlatformSessionIdBase64 using move semantics.
`public inline TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1aa11d88ea1361b79f10a4672cdfc3ed4b)`()` | Gets the value of Players.
`public inline const TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1a5935d17c3b89c6d009abb60aef17105b)`() const` | Gets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__PlatformSession_1aada98f6a50ed902ab01988347b2f993f)`(const TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & NewValue)` | Sets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__PlatformSession_1ac0b8acd60543912ab39cb5ff41e99194)`(TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > && NewValue)` | Sets the value of Players using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1ac083df7b76ced80c638f16babc9ab407)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1aec59be28296ae6efb83135e581de0bf4)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1a5cf93788fd580595571973639a6a1981)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlatformSession_1a7213f0b2a42417f2ffa8fb82cc685227)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1a49dc4068448498cd488e39ced6db885b)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1a4eb71296da8b0c90ed7509e9e06d4e83)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlatformSession_1abac22e80c8b5803f71f4a879029a469f)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlatformSession_1afdc31ca1908f5f2cfb77bb384521bec4)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSession_1a27df4527314de6e07dd805631af23b14)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlatformSession_1a514a69b000c9439a015f8afcd5883ab5)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformSession_1a2bae055e3f10ff588cd9f272f218503b) <a id="structFRHAPI__PlatformSession_1a2bae055e3f10ff588cd9f272f218503b"></a>

Platform that this session is for.

#### `public FString `[`PlatformSessionType`](#structFRHAPI__PlatformSession_1a6bb67ef7a058965a657d6c1a00853bad) <a id="structFRHAPI__PlatformSession_1a6bb67ef7a058965a657d6c1a00853bad"></a>

Platform-Specific Identifier for the Platform's template.

#### `public FString `[`PlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a1035f971a914bc5547232d34e673898c) <a id="structFRHAPI__PlatformSession_1a1035f971a914bc5547232d34e673898c"></a>

Platform session's unique identifier.

#### `public TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > `[`Players`](#structFRHAPI__PlatformSession_1a457c7e431c6f6dc18bd781d09ba5d5fb) <a id="structFRHAPI__PlatformSession_1a457c7e431c6f6dc18bd781d09ba5d5fb"></a>

DEPRECATED. PlatformSessions no longer keep tracking of players. Players in the platform session.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlatformSession_1a9892c6b70fc4a33cb19ec43e5ea10d0a) <a id="structFRHAPI__PlatformSession_1a9892c6b70fc4a33cb19ec43e5ea10d0a"></a>

Product defined custom data fields about the platform session.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlatformSession_1a1868b2138d2cf1feca6c1f300a104cea) <a id="structFRHAPI__PlatformSession_1a1868b2138d2cf1feca6c1f300a104cea"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformSession_1ac38d76af37830fe89415db449ec3addd)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformSession_1ac38d76af37830fe89415db449ec3addd"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformSession_1aa44e115425ea23712661a04698b3152d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformSession_1aa44e115425ea23712661a04698b3152d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1a952cb14f6eaaa2491086cd489981948a)`()` <a id="structFRHAPI__PlatformSession_1a952cb14f6eaaa2491086cd489981948a"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1a33457ff07a216fd18b280dd291bad4a8)`() const` <a id="structFRHAPI__PlatformSession_1a33457ff07a216fd18b280dd291bad4a8"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformSession_1a5550cb055b2e15cd5bbeb88a7c105034)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformSession_1a5550cb055b2e15cd5bbeb88a7c105034"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformSession_1ac07e0095c1e581adb986086ad87a3fcd)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformSession_1ac07e0095c1e581adb986086ad87a3fcd"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1a6abf96e6720a2bb31f101d61018665ac)`()` <a id="structFRHAPI__PlatformSession_1a6abf96e6720a2bb31f101d61018665ac"></a>

Gets the value of PlatformSessionType.

#### `public inline const FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1a1b0ea0e671af45dfe5ded668bae2fcb0)`() const` <a id="structFRHAPI__PlatformSession_1a1b0ea0e671af45dfe5ded668bae2fcb0"></a>

Gets the value of PlatformSessionType.

#### `public inline void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSession_1a1000d7f30b43edac9dc4f3dc1389df6f)`(const FString & NewValue)` <a id="structFRHAPI__PlatformSession_1a1000d7f30b43edac9dc4f3dc1389df6f"></a>

Sets the value of PlatformSessionType.

#### `public inline void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSession_1a190f203e890b984d2fd6fefa937d906c)`(FString && NewValue)` <a id="structFRHAPI__PlatformSession_1a190f203e890b984d2fd6fefa937d906c"></a>

Sets the value of PlatformSessionType using move semantics.

#### `public inline FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1adfef5c3286b68e09c708156b558e6f73)`()` <a id="structFRHAPI__PlatformSession_1adfef5c3286b68e09c708156b558e6f73"></a>

Gets the value of PlatformSessionIdBase64.

#### `public inline const FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1af1b862d2198208a369b05a74ede225db)`() const` <a id="structFRHAPI__PlatformSession_1af1b862d2198208a369b05a74ede225db"></a>

Gets the value of PlatformSessionIdBase64.

#### `public inline void `[`SetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a3e09fcf39b3f2392315c7f715a177ae6)`(const FString & NewValue)` <a id="structFRHAPI__PlatformSession_1a3e09fcf39b3f2392315c7f715a177ae6"></a>

Sets the value of PlatformSessionIdBase64.

#### `public inline void `[`SetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a64cc329bd0f448e450855ab97b8c27ee)`(FString && NewValue)` <a id="structFRHAPI__PlatformSession_1a64cc329bd0f448e450855ab97b8c27ee"></a>

Sets the value of PlatformSessionIdBase64 using move semantics.

#### `public inline TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1aa11d88ea1361b79f10a4672cdfc3ed4b)`()` <a id="structFRHAPI__PlatformSession_1aa11d88ea1361b79f10a4672cdfc3ed4b"></a>

Gets the value of Players.

#### `public inline const TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1a5935d17c3b89c6d009abb60aef17105b)`() const` <a id="structFRHAPI__PlatformSession_1a5935d17c3b89c6d009abb60aef17105b"></a>

Gets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__PlatformSession_1aada98f6a50ed902ab01988347b2f993f)`(const TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & NewValue)` <a id="structFRHAPI__PlatformSession_1aada98f6a50ed902ab01988347b2f993f"></a>

Sets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__PlatformSession_1ac0b8acd60543912ab39cb5ff41e99194)`(TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > && NewValue)` <a id="structFRHAPI__PlatformSession_1ac0b8acd60543912ab39cb5ff41e99194"></a>

Sets the value of Players using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1ac083df7b76ced80c638f16babc9ab407)`()` <a id="structFRHAPI__PlatformSession_1ac083df7b76ced80c638f16babc9ab407"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1aec59be28296ae6efb83135e581de0bf4)`() const` <a id="structFRHAPI__PlatformSession_1aec59be28296ae6efb83135e581de0bf4"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1a5cf93788fd580595571973639a6a1981)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlatformSession_1a5cf93788fd580595571973639a6a1981"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlatformSession_1a7213f0b2a42417f2ffa8fb82cc685227)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlatformSession_1a7213f0b2a42417f2ffa8fb82cc685227"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1a49dc4068448498cd488e39ced6db885b)`()` <a id="structFRHAPI__PlatformSession_1a49dc4068448498cd488e39ced6db885b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1a4eb71296da8b0c90ed7509e9e06d4e83)`() const` <a id="structFRHAPI__PlatformSession_1a4eb71296da8b0c90ed7509e9e06d4e83"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlatformSession_1abac22e80c8b5803f71f4a879029a469f)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlatformSession_1abac22e80c8b5803f71f4a879029a469f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlatformSession_1afdc31ca1908f5f2cfb77bb384521bec4)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlatformSession_1afdc31ca1908f5f2cfb77bb384521bec4"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSession_1a27df4527314de6e07dd805631af23b14)`()` <a id="structFRHAPI__PlatformSession_1a27df4527314de6e07dd805631af23b14"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlatformSession_1a514a69b000c9439a015f8afcd5883ab5)`() const` <a id="structFRHAPI__PlatformSession_1a514a69b000c9439a015f8afcd5883ab5"></a>

Checks whether CustomData_Optional has been set.

