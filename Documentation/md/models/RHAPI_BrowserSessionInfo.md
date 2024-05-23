# group `RHAPI_BrowserSessionInfo` <a id="group__RHAPI__BrowserSessionInfo"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BrowserSessionInfo`](#structFRHAPI__BrowserSessionInfo) | Information about a session listed in a browser.

## struct `FRHAPI_BrowserSessionInfo` <a id="structFRHAPI__BrowserSessionInfo"></a>

```
struct FRHAPI_BrowserSessionInfo
  : public FRHAPI_Model
```

Information about a session listed in a browser.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRHAPI__BrowserSessionInfo_1ad214b73d6e909c822c0cf69983c4f24a) | ID for the session.
`public int32 `[`PlayerCount_Optional`](#structFRHAPI__BrowserSessionInfo_1a394a9ae56121734e12456e180a022249) | Number of players actively in this session.
`public bool `[`PlayerCount_IsSet`](#structFRHAPI__BrowserSessionInfo_1a0715bead5854464147ab41802a5d01e8) | true if PlayerCount_Optional has been set to a value
`public int32 `[`MaxPlayerCount_Optional`](#structFRHAPI__BrowserSessionInfo_1aa47977c3e27f935d503c0333d38c61c0) | Maximum number of players that can be in this session.
`public bool `[`MaxPlayerCount_IsSet`](#structFRHAPI__BrowserSessionInfo_1a171772a1e7d85472005eeeef510e5c50) | true if MaxPlayerCount_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__BrowserSessionInfo_1a7e8980b30493ba6a48dcadeef3f57f9d) | Custom data with the listing of the instance in the Session browser.
`public bool `[`CustomData_IsSet`](#structFRHAPI__BrowserSessionInfo_1ab9b870560b838b457eeed8a1619964a3) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__BrowserSessionInfo_1a7da33a30b2ebecb02d52141beda22503)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BrowserSessionInfo_1a8d5ae1616aa1286df5b6807ea5c0d2b7)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a7827480c91eb08234f3cfd136530f45e)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a44f80f96d99f79dd995d4f8ea92d6fc3)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1af9bd395ee6c2e2a117e199292f31d937)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1a0288e14c2a5669ce9fbd7cca6d35e13e)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1aca0c832a46ad32204ccbcf099766277b)`()` | Gets the value of PlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a6982b9b28572dba09338420bc24e1bf9)`() const` | Gets the value of PlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a1eaefc617051b03ab5e71e14fa48b55a)`(const int32 & DefaultValue) const` | Gets the value of PlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a39108acad6e256b339c9b3ea000cee3b)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a454dcdca1f511fdce9b8de474a22d245)`()` | Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a8b18c9981e5ddcdc069d530af68ceefb)`() const` | Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a6f970072da1db84fd563906baf55dbed)`(const int32 & NewValue)` | Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true.
`public inline void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1acb5b34a1fc0498cf3f49832d550eb815)`(int32 && NewValue)` | Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true using move semantics.
`public inline void `[`ClearPlayerCount`](#structFRHAPI__BrowserSessionInfo_1aea544e1d0c35b6eb3042f5541619d850)`()` | Clears the value of PlayerCount_Optional and sets PlayerCount_IsSet to false.
`public inline bool `[`IsPlayerCountDefaultValue`](#structFRHAPI__BrowserSessionInfo_1aca260c0cc406d03f4423ae42aa00cd7d)`() const` | Returns true if PlayerCount_Optional is set and matches the default value.
`public inline void `[`SetPlayerCountToDefault`](#structFRHAPI__BrowserSessionInfo_1a33402b8ce555bdda6304a68c169128cf)`()` | Sets the value of PlayerCount_Optional to its default and also sets PlayerCount_IsSet to true.
`public inline int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ac188640375bd90bb4b9de5140c9fa0c3)`()` | Gets the value of MaxPlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a1b532bdd74732e02d08ded1ca5c887e4)`() const` | Gets the value of MaxPlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a796c8a8ea937f69caf1e47c2b27fccb3)`(const int32 & DefaultValue) const` | Gets the value of MaxPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a4fca349b8c31f615d8b19c3bab0bf6ac)`(int32 & OutValue) const` | Fills OutValue with the value of MaxPlayerCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a70f5a87412bbd72fcf926b43a9483e63)`()` | Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a5bc6fe76a2dc171f1e414883c93a9feb)`() const` | Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ab9e458d4237816e4393f052649ca8e84)`(const int32 & NewValue)` | Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true.
`public inline void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ada5f36406308d1b7d01c91492836d39c)`(int32 && NewValue)` | Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true using move semantics.
`public inline void `[`ClearMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ae4db76a7c37ed889376ede8b46d804e8)`()` | Clears the value of MaxPlayerCount_Optional and sets MaxPlayerCount_IsSet to false.
`public inline bool `[`IsMaxPlayerCountDefaultValue`](#structFRHAPI__BrowserSessionInfo_1a2216b0feb30b57b5d2e3fe24662bd446)`() const` | Returns true if MaxPlayerCount_Optional is set and matches the default value.
`public inline void `[`SetMaxPlayerCountToDefault`](#structFRHAPI__BrowserSessionInfo_1ac2796e981f1551692d575f75f8b3a826)`()` | Sets the value of MaxPlayerCount_Optional to its default and also sets MaxPlayerCount_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a70148656f7b7287441c3081701c1e380)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a89ec50cd7aec0372e901f4dc64f56e05)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1ad4e6c0f6904f976cd28c216da6e66dd1)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a3e1c0b8045943d73a0a847bce3e07cc4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1ac71728fae96f9a21c11d366c702b8c76)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a916172ecb02eaec5c54b28cfc4445f8c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a4a8be0270a10138d36ca7ce536c21761)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a73beea90988e2c3933966d54d492d993)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public FString `[`SessionId`](#structFRHAPI__BrowserSessionInfo_1ad214b73d6e909c822c0cf69983c4f24a) <a id="structFRHAPI__BrowserSessionInfo_1ad214b73d6e909c822c0cf69983c4f24a"></a>

ID for the session.

#### `public int32 `[`PlayerCount_Optional`](#structFRHAPI__BrowserSessionInfo_1a394a9ae56121734e12456e180a022249) <a id="structFRHAPI__BrowserSessionInfo_1a394a9ae56121734e12456e180a022249"></a>

Number of players actively in this session.

#### `public bool `[`PlayerCount_IsSet`](#structFRHAPI__BrowserSessionInfo_1a0715bead5854464147ab41802a5d01e8) <a id="structFRHAPI__BrowserSessionInfo_1a0715bead5854464147ab41802a5d01e8"></a>

true if PlayerCount_Optional has been set to a value

#### `public int32 `[`MaxPlayerCount_Optional`](#structFRHAPI__BrowserSessionInfo_1aa47977c3e27f935d503c0333d38c61c0) <a id="structFRHAPI__BrowserSessionInfo_1aa47977c3e27f935d503c0333d38c61c0"></a>

Maximum number of players that can be in this session.

#### `public bool `[`MaxPlayerCount_IsSet`](#structFRHAPI__BrowserSessionInfo_1a171772a1e7d85472005eeeef510e5c50) <a id="structFRHAPI__BrowserSessionInfo_1a171772a1e7d85472005eeeef510e5c50"></a>

true if MaxPlayerCount_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__BrowserSessionInfo_1a7e8980b30493ba6a48dcadeef3f57f9d) <a id="structFRHAPI__BrowserSessionInfo_1a7e8980b30493ba6a48dcadeef3f57f9d"></a>

Custom data with the listing of the instance in the Session browser.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__BrowserSessionInfo_1ab9b870560b838b457eeed8a1619964a3) <a id="structFRHAPI__BrowserSessionInfo_1ab9b870560b838b457eeed8a1619964a3"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__BrowserSessionInfo_1a7da33a30b2ebecb02d52141beda22503)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BrowserSessionInfo_1a7da33a30b2ebecb02d52141beda22503"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BrowserSessionInfo_1a8d5ae1616aa1286df5b6807ea5c0d2b7)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BrowserSessionInfo_1a8d5ae1616aa1286df5b6807ea5c0d2b7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a7827480c91eb08234f3cfd136530f45e)`()` <a id="structFRHAPI__BrowserSessionInfo_1a7827480c91eb08234f3cfd136530f45e"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a44f80f96d99f79dd995d4f8ea92d6fc3)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a44f80f96d99f79dd995d4f8ea92d6fc3"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1af9bd395ee6c2e2a117e199292f31d937)`(const FString & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1af9bd395ee6c2e2a117e199292f31d937"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1a0288e14c2a5669ce9fbd7cca6d35e13e)`(FString && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a0288e14c2a5669ce9fbd7cca6d35e13e"></a>

Sets the value of SessionId using move semantics.

#### `public inline int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1aca0c832a46ad32204ccbcf099766277b)`()` <a id="structFRHAPI__BrowserSessionInfo_1aca0c832a46ad32204ccbcf099766277b"></a>

Gets the value of PlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a6982b9b28572dba09338420bc24e1bf9)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a6982b9b28572dba09338420bc24e1bf9"></a>

Gets the value of PlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a1eaefc617051b03ab5e71e14fa48b55a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a1eaefc617051b03ab5e71e14fa48b55a"></a>

Gets the value of PlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a39108acad6e256b339c9b3ea000cee3b)`(int32 & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a39108acad6e256b339c9b3ea000cee3b"></a>

Fills OutValue with the value of PlayerCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a454dcdca1f511fdce9b8de474a22d245)`()` <a id="structFRHAPI__BrowserSessionInfo_1a454dcdca1f511fdce9b8de474a22d245"></a>

Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a8b18c9981e5ddcdc069d530af68ceefb)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a8b18c9981e5ddcdc069d530af68ceefb"></a>

Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a6f970072da1db84fd563906baf55dbed)`(const int32 & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a6f970072da1db84fd563906baf55dbed"></a>

Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true.

#### `public inline void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1acb5b34a1fc0498cf3f49832d550eb815)`(int32 && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1acb5b34a1fc0498cf3f49832d550eb815"></a>

Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerCount`](#structFRHAPI__BrowserSessionInfo_1aea544e1d0c35b6eb3042f5541619d850)`()` <a id="structFRHAPI__BrowserSessionInfo_1aea544e1d0c35b6eb3042f5541619d850"></a>

Clears the value of PlayerCount_Optional and sets PlayerCount_IsSet to false.

#### `public inline bool `[`IsPlayerCountDefaultValue`](#structFRHAPI__BrowserSessionInfo_1aca260c0cc406d03f4423ae42aa00cd7d)`() const` <a id="structFRHAPI__BrowserSessionInfo_1aca260c0cc406d03f4423ae42aa00cd7d"></a>

Returns true if PlayerCount_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerCountToDefault`](#structFRHAPI__BrowserSessionInfo_1a33402b8ce555bdda6304a68c169128cf)`()` <a id="structFRHAPI__BrowserSessionInfo_1a33402b8ce555bdda6304a68c169128cf"></a>

Sets the value of PlayerCount_Optional to its default and also sets PlayerCount_IsSet to true.

#### `public inline int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ac188640375bd90bb4b9de5140c9fa0c3)`()` <a id="structFRHAPI__BrowserSessionInfo_1ac188640375bd90bb4b9de5140c9fa0c3"></a>

Gets the value of MaxPlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a1b532bdd74732e02d08ded1ca5c887e4)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a1b532bdd74732e02d08ded1ca5c887e4"></a>

Gets the value of MaxPlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a796c8a8ea937f69caf1e47c2b27fccb3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a796c8a8ea937f69caf1e47c2b27fccb3"></a>

Gets the value of MaxPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a4fca349b8c31f615d8b19c3bab0bf6ac)`(int32 & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a4fca349b8c31f615d8b19c3bab0bf6ac"></a>

Fills OutValue with the value of MaxPlayerCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a70f5a87412bbd72fcf926b43a9483e63)`()` <a id="structFRHAPI__BrowserSessionInfo_1a70f5a87412bbd72fcf926b43a9483e63"></a>

Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a5bc6fe76a2dc171f1e414883c93a9feb)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a5bc6fe76a2dc171f1e414883c93a9feb"></a>

Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ab9e458d4237816e4393f052649ca8e84)`(const int32 & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1ab9e458d4237816e4393f052649ca8e84"></a>

Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true.

#### `public inline void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ada5f36406308d1b7d01c91492836d39c)`(int32 && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1ada5f36406308d1b7d01c91492836d39c"></a>

Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true using move semantics.

#### `public inline void `[`ClearMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ae4db76a7c37ed889376ede8b46d804e8)`()` <a id="structFRHAPI__BrowserSessionInfo_1ae4db76a7c37ed889376ede8b46d804e8"></a>

Clears the value of MaxPlayerCount_Optional and sets MaxPlayerCount_IsSet to false.

#### `public inline bool `[`IsMaxPlayerCountDefaultValue`](#structFRHAPI__BrowserSessionInfo_1a2216b0feb30b57b5d2e3fe24662bd446)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a2216b0feb30b57b5d2e3fe24662bd446"></a>

Returns true if MaxPlayerCount_Optional is set and matches the default value.

#### `public inline void `[`SetMaxPlayerCountToDefault`](#structFRHAPI__BrowserSessionInfo_1ac2796e981f1551692d575f75f8b3a826)`()` <a id="structFRHAPI__BrowserSessionInfo_1ac2796e981f1551692d575f75f8b3a826"></a>

Sets the value of MaxPlayerCount_Optional to its default and also sets MaxPlayerCount_IsSet to true.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a70148656f7b7287441c3081701c1e380)`()` <a id="structFRHAPI__BrowserSessionInfo_1a70148656f7b7287441c3081701c1e380"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a89ec50cd7aec0372e901f4dc64f56e05)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a89ec50cd7aec0372e901f4dc64f56e05"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1ad4e6c0f6904f976cd28c216da6e66dd1)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1ad4e6c0f6904f976cd28c216da6e66dd1"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a3e1c0b8045943d73a0a847bce3e07cc4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a3e1c0b8045943d73a0a847bce3e07cc4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1ac71728fae96f9a21c11d366c702b8c76)`()` <a id="structFRHAPI__BrowserSessionInfo_1ac71728fae96f9a21c11d366c702b8c76"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a916172ecb02eaec5c54b28cfc4445f8c)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a916172ecb02eaec5c54b28cfc4445f8c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a4a8be0270a10138d36ca7ce536c21761)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a4a8be0270a10138d36ca7ce536c21761"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a73beea90988e2c3933966d54d492d993)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a73beea90988e2c3933966d54d492d993"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca)`()` <a id="structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

