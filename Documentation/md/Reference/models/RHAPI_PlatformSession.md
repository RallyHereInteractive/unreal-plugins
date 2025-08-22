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
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1ae10873d123ef02d8333bcdc6c093df05)`()` | Gets the value of Platform.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1a3573e5468b152caeed88983421a85081)`() const` | Gets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSession_1afa4c0fc69b40efe9ba5e20ae8f846e0c)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSession_1a424f5f9748f6fa65e652117618617c8e)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1ab3ae58f0a494b7c37091135e84ba1c4b)`()` | Gets the value of PlatformSessionType.
`public inline FORCEINLINE const FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1ab17208bd90a0545ac3854531036becc1)`() const` | Gets the value of PlatformSessionType.
`public inline FORCEINLINE void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSession_1a082f2e5926812c2021042e17d08b9d61)`(const FString & NewValue)` | Sets the value of PlatformSessionType.
`public inline FORCEINLINE void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSession_1ac46ec67269eaf3eff8819c8ed3256947)`(FString && NewValue)` | Sets the value of PlatformSessionType using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1aac1dec20eda7124371c55958fcf95866)`()` | Gets the value of PlatformSessionIdBase64.
`public inline FORCEINLINE const FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a556ad9fed25c3165c9297ccae852d160)`() const` | Gets the value of PlatformSessionIdBase64.
`public inline FORCEINLINE void `[`SetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a666f39ea5103672fe6878a7319e7158f)`(const FString & NewValue)` | Sets the value of PlatformSessionIdBase64.
`public inline FORCEINLINE void `[`SetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1ab1852ce3e02c3643e69b95c327903b41)`(FString && NewValue)` | Sets the value of PlatformSessionIdBase64 using move semantics.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1a553267679a01b3e3bb726fb46cf1292a)`()` | Gets the value of Players.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1ad579119e65a6f3647a74dbfa3b1581cc)`() const` | Gets the value of Players.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlatformSession_1acf0e6b5ec8871b9665c25f4917b5a4de)`(const TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & NewValue)` | Sets the value of Players.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlatformSession_1a4395616d19883519a91eea3a719cbcfc)`(TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > && NewValue)` | Sets the value of Players using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1aeac83200afd8d354d56d22aac97ef859)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1a189f599099bccf9ca60ebfe5ff5a1e6a)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1aa8d917c86ecfe77c7031d7e724bfcd37)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlatformSession_1a18c80b6efa340f2807acb1f67430f192)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1adafa3f6408eb8e8ec7dc059561d6b91b)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1af839a8117297a9faf2f1d86d7b5a6eb6)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSession_1a9a22b3deb8161d2c8a07ab8b469436d6)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSession_1a68b3c2fd132da166d1843ec08408cd7f)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSession_1a27df4527314de6e07dd805631af23b14)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

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

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1ae10873d123ef02d8333bcdc6c093df05)`()` <a id="structFRHAPI__PlatformSession_1ae10873d123ef02d8333bcdc6c093df05"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1a3573e5468b152caeed88983421a85081)`() const` <a id="structFRHAPI__PlatformSession_1a3573e5468b152caeed88983421a85081"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSession_1afa4c0fc69b40efe9ba5e20ae8f846e0c)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformSession_1afa4c0fc69b40efe9ba5e20ae8f846e0c"></a>

Sets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSession_1a424f5f9748f6fa65e652117618617c8e)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformSession_1a424f5f9748f6fa65e652117618617c8e"></a>

Sets the value of Platform using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1ab3ae58f0a494b7c37091135e84ba1c4b)`()` <a id="structFRHAPI__PlatformSession_1ab3ae58f0a494b7c37091135e84ba1c4b"></a>

Gets the value of PlatformSessionType.

#### `public inline FORCEINLINE const FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1ab17208bd90a0545ac3854531036becc1)`() const` <a id="structFRHAPI__PlatformSession_1ab17208bd90a0545ac3854531036becc1"></a>

Gets the value of PlatformSessionType.

#### `public inline FORCEINLINE void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSession_1a082f2e5926812c2021042e17d08b9d61)`(const FString & NewValue)` <a id="structFRHAPI__PlatformSession_1a082f2e5926812c2021042e17d08b9d61"></a>

Sets the value of PlatformSessionType.

#### `public inline FORCEINLINE void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSession_1ac46ec67269eaf3eff8819c8ed3256947)`(FString && NewValue)` <a id="structFRHAPI__PlatformSession_1ac46ec67269eaf3eff8819c8ed3256947"></a>

Sets the value of PlatformSessionType using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1aac1dec20eda7124371c55958fcf95866)`()` <a id="structFRHAPI__PlatformSession_1aac1dec20eda7124371c55958fcf95866"></a>

Gets the value of PlatformSessionIdBase64.

#### `public inline FORCEINLINE const FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a556ad9fed25c3165c9297ccae852d160)`() const` <a id="structFRHAPI__PlatformSession_1a556ad9fed25c3165c9297ccae852d160"></a>

Gets the value of PlatformSessionIdBase64.

#### `public inline FORCEINLINE void `[`SetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a666f39ea5103672fe6878a7319e7158f)`(const FString & NewValue)` <a id="structFRHAPI__PlatformSession_1a666f39ea5103672fe6878a7319e7158f"></a>

Sets the value of PlatformSessionIdBase64.

#### `public inline FORCEINLINE void `[`SetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1ab1852ce3e02c3643e69b95c327903b41)`(FString && NewValue)` <a id="structFRHAPI__PlatformSession_1ab1852ce3e02c3643e69b95c327903b41"></a>

Sets the value of PlatformSessionIdBase64 using move semantics.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1a553267679a01b3e3bb726fb46cf1292a)`()` <a id="structFRHAPI__PlatformSession_1a553267679a01b3e3bb726fb46cf1292a"></a>

Gets the value of Players.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1ad579119e65a6f3647a74dbfa3b1581cc)`() const` <a id="structFRHAPI__PlatformSession_1ad579119e65a6f3647a74dbfa3b1581cc"></a>

Gets the value of Players.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlatformSession_1acf0e6b5ec8871b9665c25f4917b5a4de)`(const TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & NewValue)` <a id="structFRHAPI__PlatformSession_1acf0e6b5ec8871b9665c25f4917b5a4de"></a>

Sets the value of Players.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlatformSession_1a4395616d19883519a91eea3a719cbcfc)`(TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > && NewValue)` <a id="structFRHAPI__PlatformSession_1a4395616d19883519a91eea3a719cbcfc"></a>

Sets the value of Players using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1aeac83200afd8d354d56d22aac97ef859)`()` <a id="structFRHAPI__PlatformSession_1aeac83200afd8d354d56d22aac97ef859"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1a189f599099bccf9ca60ebfe5ff5a1e6a)`() const` <a id="structFRHAPI__PlatformSession_1a189f599099bccf9ca60ebfe5ff5a1e6a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1aa8d917c86ecfe77c7031d7e724bfcd37)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlatformSession_1aa8d917c86ecfe77c7031d7e724bfcd37"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlatformSession_1a18c80b6efa340f2807acb1f67430f192)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlatformSession_1a18c80b6efa340f2807acb1f67430f192"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1adafa3f6408eb8e8ec7dc059561d6b91b)`()` <a id="structFRHAPI__PlatformSession_1adafa3f6408eb8e8ec7dc059561d6b91b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1af839a8117297a9faf2f1d86d7b5a6eb6)`() const` <a id="structFRHAPI__PlatformSession_1af839a8117297a9faf2f1d86d7b5a6eb6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSession_1a9a22b3deb8161d2c8a07ab8b469436d6)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlatformSession_1a9a22b3deb8161d2c8a07ab8b469436d6"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSession_1a68b3c2fd132da166d1843ec08408cd7f)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlatformSession_1a68b3c2fd132da166d1843ec08408cd7f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSession_1a27df4527314de6e07dd805631af23b14)`()` <a id="structFRHAPI__PlatformSession_1a27df4527314de6e07dd805631af23b14"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

