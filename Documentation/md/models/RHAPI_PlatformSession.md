# RHAPI_PlatformSession <a id="group__RHAPI__PlatformSession"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformSession_1a2bae055e3f10ff588cd9f272f218503b) | Platform that this session is for.
`public FString `[`PlatformSessionType`](#structFRHAPI__PlatformSession_1a6bb67ef7a058965a657d6c1a00853bad) | Platform-Specific Identifier for the Platform's template.
`public FString `[`PlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a1035f971a914bc5547232d34e673898c) | Platform session's unique identifier.
`public TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > `[`Players`](#structFRHAPI__PlatformSession_1a457c7e431c6f6dc18bd781d09ba5d5fb) | DEPRECATED. PlatformSessions no longer keep tracking of players. Players in the platform session.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlatformSession_1a9892c6b70fc4a33cb19ec43e5ea10d0a) | Product defined custom data fields about the platform session.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlatformSession_1a1868b2138d2cf1feca6c1f300a104cea) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformSession_1a6ad407802c93e51ba4ad6b2ea8b90f26)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformSession_1a0d7974aeb8156db09f05ca16c7f0a217)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1a4bb18b46b2c2687ce80b63ea0357d210)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1a26fb79f79f15f9f77811e2ae696ac511)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformSession_1a632f0c170a35c4e8143f5bdd842f70f3)`(ERHAPI_Platform NewValue)` | Sets the value of Platform.
`public inline FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1ae31aa8df950002b96ce224e6128a1dc4)`()` | Gets the value of PlatformSessionType.
`public inline const FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1a6afbbb4c98285c70d95c4d2fe8d7d93b)`() const` | Gets the value of PlatformSessionType.
`public inline void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSession_1a8f6b60082e9498840e2be75498d34bd4)`(FString NewValue)` | Sets the value of PlatformSessionType.
`public inline FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a15fa96ccee660aa48718141a9600c3ce)`()` | Gets the value of PlatformSessionIdBase64.
`public inline const FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a9d2ad046a95f6bda0f9a006565b505c8)`() const` | Gets the value of PlatformSessionIdBase64.
`public inline void `[`SetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a22f13ff04903dfdbb78558d2493af670)`(FString NewValue)` | Sets the value of PlatformSessionIdBase64.
`public inline TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1a614ed29701838a10d39f761b904699c1)`()` | Gets the value of Players.
`public inline const TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1a8a8c811b88cf4d8b2bfe7b05d4978ec1)`() const` | Gets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__PlatformSession_1a82c0d6e133ea4208914fc23ed02f257f)`(TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > NewValue)` | Sets the value of Players.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1a5ef4cb3f4c9ef59b07808731c0a9171d)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1a31ca45bef966ba0f4776da050770d774)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1a23044803453d0fd2436473c8c2c2f498)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlatformSession_1a7213f0b2a42417f2ffa8fb82cc685227)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1a772a1c1d8455398ecfb28a03d28a1017)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1a61953976e75263bf9bcddc08bb00b1ce)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlatformSession_1a1fbf4271a911d3ecbb3392121c8cf8a0)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSession_1a27df4527314de6e07dd805631af23b14)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformSession_1a6ad407802c93e51ba4ad6b2ea8b90f26)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformSession_1a6ad407802c93e51ba4ad6b2ea8b90f26"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformSession_1a0d7974aeb8156db09f05ca16c7f0a217)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformSession_1a0d7974aeb8156db09f05ca16c7f0a217"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1a4bb18b46b2c2687ce80b63ea0357d210)`()` <a id="structFRHAPI__PlatformSession_1a4bb18b46b2c2687ce80b63ea0357d210"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSession_1a26fb79f79f15f9f77811e2ae696ac511)`() const` <a id="structFRHAPI__PlatformSession_1a26fb79f79f15f9f77811e2ae696ac511"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformSession_1a632f0c170a35c4e8143f5bdd842f70f3)`(ERHAPI_Platform NewValue)` <a id="structFRHAPI__PlatformSession_1a632f0c170a35c4e8143f5bdd842f70f3"></a>

Sets the value of Platform.

#### `public inline FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1ae31aa8df950002b96ce224e6128a1dc4)`()` <a id="structFRHAPI__PlatformSession_1ae31aa8df950002b96ce224e6128a1dc4"></a>

Gets the value of PlatformSessionType.

#### `public inline const FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSession_1a6afbbb4c98285c70d95c4d2fe8d7d93b)`() const` <a id="structFRHAPI__PlatformSession_1a6afbbb4c98285c70d95c4d2fe8d7d93b"></a>

Gets the value of PlatformSessionType.

#### `public inline void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSession_1a8f6b60082e9498840e2be75498d34bd4)`(FString NewValue)` <a id="structFRHAPI__PlatformSession_1a8f6b60082e9498840e2be75498d34bd4"></a>

Sets the value of PlatformSessionType.

#### `public inline FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a15fa96ccee660aa48718141a9600c3ce)`()` <a id="structFRHAPI__PlatformSession_1a15fa96ccee660aa48718141a9600c3ce"></a>

Gets the value of PlatformSessionIdBase64.

#### `public inline const FString & `[`GetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a9d2ad046a95f6bda0f9a006565b505c8)`() const` <a id="structFRHAPI__PlatformSession_1a9d2ad046a95f6bda0f9a006565b505c8"></a>

Gets the value of PlatformSessionIdBase64.

#### `public inline void `[`SetPlatformSessionIdBase64`](#structFRHAPI__PlatformSession_1a22f13ff04903dfdbb78558d2493af670)`(FString NewValue)` <a id="structFRHAPI__PlatformSession_1a22f13ff04903dfdbb78558d2493af670"></a>

Sets the value of PlatformSessionIdBase64.

#### `public inline TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1a614ed29701838a10d39f761b904699c1)`()` <a id="structFRHAPI__PlatformSession_1a614ed29701838a10d39f761b904699c1"></a>

Gets the value of Players.

#### `public inline const TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__PlatformSession_1a8a8c811b88cf4d8b2bfe7b05d4978ec1)`() const` <a id="structFRHAPI__PlatformSession_1a8a8c811b88cf4d8b2bfe7b05d4978ec1"></a>

Gets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__PlatformSession_1a82c0d6e133ea4208914fc23ed02f257f)`(TArray< `[`FRHAPI_PlatformSessionPlayer`](RHAPI_PlatformSessionPlayer.md#structFRHAPI__PlatformSessionPlayer)` > NewValue)` <a id="structFRHAPI__PlatformSession_1a82c0d6e133ea4208914fc23ed02f257f"></a>

Sets the value of Players.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1a5ef4cb3f4c9ef59b07808731c0a9171d)`()` <a id="structFRHAPI__PlatformSession_1a5ef4cb3f4c9ef59b07808731c0a9171d"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1a31ca45bef966ba0f4776da050770d774)`() const` <a id="structFRHAPI__PlatformSession_1a31ca45bef966ba0f4776da050770d774"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSession_1a23044803453d0fd2436473c8c2c2f498)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlatformSession_1a23044803453d0fd2436473c8c2c2f498"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlatformSession_1a7213f0b2a42417f2ffa8fb82cc685227)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlatformSession_1a7213f0b2a42417f2ffa8fb82cc685227"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1a772a1c1d8455398ecfb28a03d28a1017)`()` <a id="structFRHAPI__PlatformSession_1a772a1c1d8455398ecfb28a03d28a1017"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSession_1a61953976e75263bf9bcddc08bb00b1ce)`() const` <a id="structFRHAPI__PlatformSession_1a61953976e75263bf9bcddc08bb00b1ce"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlatformSession_1a1fbf4271a911d3ecbb3392121c8cf8a0)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__PlatformSession_1a1fbf4271a911d3ecbb3392121c8cf8a0"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSession_1a27df4527314de6e07dd805631af23b14)`()` <a id="structFRHAPI__PlatformSession_1a27df4527314de6e07dd805631af23b14"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

