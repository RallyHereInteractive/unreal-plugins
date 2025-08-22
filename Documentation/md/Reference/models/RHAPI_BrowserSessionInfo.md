---
title: RHAPI_BrowserSessionInfo
---

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
`public ERHAPI_InstanceHealthStatus `[`InstanceHealth_Optional`](#structFRHAPI__BrowserSessionInfo_1a9b244a44128f4afa69fa46611e9626b9) | The health status of the instance if it exists.
`public bool `[`InstanceHealth_IsSet`](#structFRHAPI__BrowserSessionInfo_1aecc2dc452b7e409ee677311c216529df) | true if InstanceHealth_Optional has been set to a value
`public int32 `[`PlayerCount_Optional`](#structFRHAPI__BrowserSessionInfo_1a394a9ae56121734e12456e180a022249) | Number of players actively in this session.
`public bool `[`PlayerCount_IsSet`](#structFRHAPI__BrowserSessionInfo_1a0715bead5854464147ab41802a5d01e8) | true if PlayerCount_Optional has been set to a value
`public int32 `[`MaxPlayerCount_Optional`](#structFRHAPI__BrowserSessionInfo_1aa47977c3e27f935d503c0333d38c61c0) | Maximum number of players that can be in this session.
`public bool `[`MaxPlayerCount_IsSet`](#structFRHAPI__BrowserSessionInfo_1a171772a1e7d85472005eeeef510e5c50) | true if MaxPlayerCount_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__BrowserSessionInfo_1a7e8980b30493ba6a48dcadeef3f57f9d) | Custom data with the listing of the instance in the Session browser.
`public bool `[`CustomData_IsSet`](#structFRHAPI__BrowserSessionInfo_1ab9b870560b838b457eeed8a1619964a3) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__BrowserSessionInfo_1afae4272d59726a84cf7e01a153d24276)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BrowserSessionInfo_1a9b919f49d8d8864d2e296c80ba69a0cd)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1ac7863f2934747443b32a90c20b567167)`()` | Gets the value of SessionId.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a86d07c67a82d93126af0b94543b8e124)`() const` | Gets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1af05d0c93ea7246858441143bd595473d)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1a3096fd7c2dfe94d527fb70b9ab2c0491)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1aad08ff086a8ad9509a343f048d147c63)`()` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1aed959d0e6c353661ca8b7fb6c5c86a5f)`() const` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1aa1b9e07912b09108812e3975b996742c)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` | Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a193a70656a71a39fd2de546fd0d74607)`(ERHAPI_InstanceHealthStatus & OutValue) const` | Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__BrowserSessionInfo_1abbe0a030ac0d43b5f79fd49386bfc6fb)`()` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__BrowserSessionInfo_1afc9cb1a1cfdccc9653507bf2e5744c8f)`() const` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1acc9b0e7f482b45fd2235dc0652e21709)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1abd1896fa22f2a02512e3d41b83e9845d)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.
`public inline void `[`ClearInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a0d3512081896025e79e4f1e9cc1b8945)`()` | Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1afc47ad9e96a34d90b1d8f996865b2f8f)`()` | Gets the value of PlayerCount_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a251f756f41962fc22ff9e98c187d89f8)`() const` | Gets the value of PlayerCount_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ac829ff7c08658a61daaa87dfa6e2c74a)`(const int32 & DefaultValue) const` | Gets the value of PlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a883f0e8d4fce3422e36504ae32e43e4b)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerCount_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a33ae2525a16b4e5beaab94455533c025)`()` | Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a9ddfe57f3fe0a501e19ac3d7afd0af93)`() const` | Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a484138cfa3f73967cf57121a50cf3493)`(const int32 & NewValue)` | Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a154ba3d4aa5b0cda9608401a745a92b0)`(int32 && NewValue)` | Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true using move semantics.
`public inline void `[`ClearPlayerCount`](#structFRHAPI__BrowserSessionInfo_1aea544e1d0c35b6eb3042f5541619d850)`()` | Clears the value of PlayerCount_Optional and sets PlayerCount_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerCount`](#structFRHAPI__BrowserSessionInfo_1a8e24b42295143ec391925d7f08e658e2)`()` | Returns the default value of PlayerCount.
`public inline FORCEINLINE int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1add68a7557d3da8a57e6480812ac74a27)`()` | Gets the value of MaxPlayerCount_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a774b8fa192de093115896b49ecf322ad)`() const` | Gets the value of MaxPlayerCount_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a366c686dbd7932acdcd7fd9684f676fa)`(const int32 & DefaultValue) const` | Gets the value of MaxPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a1d98d712c8c080bede3a380f9bd3a9a5)`(int32 & OutValue) const` | Fills OutValue with the value of MaxPlayerCount_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a4a122ef04356e4828de382176c8d215d)`()` | Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a1d7b0ed0edb6a09bd2b448bd3ed02724)`() const` | Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1afc3cbabc5ef500582127516a837124e7)`(const int32 & NewValue)` | Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true.
`public inline FORCEINLINE void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a2d1263320fa397fa027810bb3739bc9c)`(int32 && NewValue)` | Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true using move semantics.
`public inline void `[`ClearMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ae4db76a7c37ed889376ede8b46d804e8)`()` | Clears the value of MaxPlayerCount_Optional and sets MaxPlayerCount_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1aca3efab25bb492aaa767ff03a8647315)`()` | Returns the default value of MaxPlayerCount.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1ac2cfff58ceafdbb43ddddb063160be87)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a182472daecb88f20485c5a86da7fdd7c)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a7fe704775b56ef0a259d67b743e99c0b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1ab2565877a0c40c854f9c10d567d32e49)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a7d825ca35e842a80c6bcdff6fb0ed932)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a30573896ae94a4fef6012fe3474e51c1)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a7a8bc2617452d3ce95c44e9e1ce54cc1)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1af557bc1b91c5368dfc1c6d5937e96311)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public FString `[`SessionId`](#structFRHAPI__BrowserSessionInfo_1ad214b73d6e909c822c0cf69983c4f24a) <a id="structFRHAPI__BrowserSessionInfo_1ad214b73d6e909c822c0cf69983c4f24a"></a>

ID for the session.

#### `public ERHAPI_InstanceHealthStatus `[`InstanceHealth_Optional`](#structFRHAPI__BrowserSessionInfo_1a9b244a44128f4afa69fa46611e9626b9) <a id="structFRHAPI__BrowserSessionInfo_1a9b244a44128f4afa69fa46611e9626b9"></a>

The health status of the instance if it exists.

#### `public bool `[`InstanceHealth_IsSet`](#structFRHAPI__BrowserSessionInfo_1aecc2dc452b7e409ee677311c216529df) <a id="structFRHAPI__BrowserSessionInfo_1aecc2dc452b7e409ee677311c216529df"></a>

true if InstanceHealth_Optional has been set to a value

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__BrowserSessionInfo_1afae4272d59726a84cf7e01a153d24276)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BrowserSessionInfo_1afae4272d59726a84cf7e01a153d24276"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BrowserSessionInfo_1a9b919f49d8d8864d2e296c80ba69a0cd)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BrowserSessionInfo_1a9b919f49d8d8864d2e296c80ba69a0cd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1ac7863f2934747443b32a90c20b567167)`()` <a id="structFRHAPI__BrowserSessionInfo_1ac7863f2934747443b32a90c20b567167"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a86d07c67a82d93126af0b94543b8e124)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a86d07c67a82d93126af0b94543b8e124"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1af05d0c93ea7246858441143bd595473d)`(const FString & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1af05d0c93ea7246858441143bd595473d"></a>

Sets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1a3096fd7c2dfe94d527fb70b9ab2c0491)`(FString && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a3096fd7c2dfe94d527fb70b9ab2c0491"></a>

Sets the value of SessionId using move semantics.

#### `public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1aad08ff086a8ad9509a343f048d147c63)`()` <a id="structFRHAPI__BrowserSessionInfo_1aad08ff086a8ad9509a343f048d147c63"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1aed959d0e6c353661ca8b7fb6c5c86a5f)`() const` <a id="structFRHAPI__BrowserSessionInfo_1aed959d0e6c353661ca8b7fb6c5c86a5f"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1aa1b9e07912b09108812e3975b996742c)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1aa1b9e07912b09108812e3975b996742c"></a>

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a193a70656a71a39fd2de546fd0d74607)`(ERHAPI_InstanceHealthStatus & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a193a70656a71a39fd2de546fd0d74607"></a>

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__BrowserSessionInfo_1abbe0a030ac0d43b5f79fd49386bfc6fb)`()` <a id="structFRHAPI__BrowserSessionInfo_1abbe0a030ac0d43b5f79fd49386bfc6fb"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__BrowserSessionInfo_1afc9cb1a1cfdccc9653507bf2e5744c8f)`() const` <a id="structFRHAPI__BrowserSessionInfo_1afc9cb1a1cfdccc9653507bf2e5744c8f"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1acc9b0e7f482b45fd2235dc0652e21709)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1acc9b0e7f482b45fd2235dc0652e21709"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1abd1896fa22f2a02512e3d41b83e9845d)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1abd1896fa22f2a02512e3d41b83e9845d"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a0d3512081896025e79e4f1e9cc1b8945)`()` <a id="structFRHAPI__BrowserSessionInfo_1a0d3512081896025e79e4f1e9cc1b8945"></a>

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1afc47ad9e96a34d90b1d8f996865b2f8f)`()` <a id="structFRHAPI__BrowserSessionInfo_1afc47ad9e96a34d90b1d8f996865b2f8f"></a>

Gets the value of PlayerCount_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a251f756f41962fc22ff9e98c187d89f8)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a251f756f41962fc22ff9e98c187d89f8"></a>

Gets the value of PlayerCount_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ac829ff7c08658a61daaa87dfa6e2c74a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1ac829ff7c08658a61daaa87dfa6e2c74a"></a>

Gets the value of PlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a883f0e8d4fce3422e36504ae32e43e4b)`(int32 & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a883f0e8d4fce3422e36504ae32e43e4b"></a>

Fills OutValue with the value of PlayerCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a33ae2525a16b4e5beaab94455533c025)`()` <a id="structFRHAPI__BrowserSessionInfo_1a33ae2525a16b4e5beaab94455533c025"></a>

Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a9ddfe57f3fe0a501e19ac3d7afd0af93)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a9ddfe57f3fe0a501e19ac3d7afd0af93"></a>

Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a484138cfa3f73967cf57121a50cf3493)`(const int32 & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a484138cfa3f73967cf57121a50cf3493"></a>

Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a154ba3d4aa5b0cda9608401a745a92b0)`(int32 && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a154ba3d4aa5b0cda9608401a745a92b0"></a>

Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerCount`](#structFRHAPI__BrowserSessionInfo_1aea544e1d0c35b6eb3042f5541619d850)`()` <a id="structFRHAPI__BrowserSessionInfo_1aea544e1d0c35b6eb3042f5541619d850"></a>

Clears the value of PlayerCount_Optional and sets PlayerCount_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerCount`](#structFRHAPI__BrowserSessionInfo_1a8e24b42295143ec391925d7f08e658e2)`()` <a id="structFRHAPI__BrowserSessionInfo_1a8e24b42295143ec391925d7f08e658e2"></a>

Returns the default value of PlayerCount.

#### `public inline FORCEINLINE int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1add68a7557d3da8a57e6480812ac74a27)`()` <a id="structFRHAPI__BrowserSessionInfo_1add68a7557d3da8a57e6480812ac74a27"></a>

Gets the value of MaxPlayerCount_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a774b8fa192de093115896b49ecf322ad)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a774b8fa192de093115896b49ecf322ad"></a>

Gets the value of MaxPlayerCount_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a366c686dbd7932acdcd7fd9684f676fa)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a366c686dbd7932acdcd7fd9684f676fa"></a>

Gets the value of MaxPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a1d98d712c8c080bede3a380f9bd3a9a5)`(int32 & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a1d98d712c8c080bede3a380f9bd3a9a5"></a>

Fills OutValue with the value of MaxPlayerCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a4a122ef04356e4828de382176c8d215d)`()` <a id="structFRHAPI__BrowserSessionInfo_1a4a122ef04356e4828de382176c8d215d"></a>

Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a1d7b0ed0edb6a09bd2b448bd3ed02724)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a1d7b0ed0edb6a09bd2b448bd3ed02724"></a>

Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1afc3cbabc5ef500582127516a837124e7)`(const int32 & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1afc3cbabc5ef500582127516a837124e7"></a>

Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a2d1263320fa397fa027810bb3739bc9c)`(int32 && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a2d1263320fa397fa027810bb3739bc9c"></a>

Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true using move semantics.

#### `public inline void `[`ClearMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ae4db76a7c37ed889376ede8b46d804e8)`()` <a id="structFRHAPI__BrowserSessionInfo_1ae4db76a7c37ed889376ede8b46d804e8"></a>

Clears the value of MaxPlayerCount_Optional and sets MaxPlayerCount_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1aca3efab25bb492aaa767ff03a8647315)`()` <a id="structFRHAPI__BrowserSessionInfo_1aca3efab25bb492aaa767ff03a8647315"></a>

Returns the default value of MaxPlayerCount.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1ac2cfff58ceafdbb43ddddb063160be87)`()` <a id="structFRHAPI__BrowserSessionInfo_1ac2cfff58ceafdbb43ddddb063160be87"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a182472daecb88f20485c5a86da7fdd7c)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a182472daecb88f20485c5a86da7fdd7c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a7fe704775b56ef0a259d67b743e99c0b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a7fe704775b56ef0a259d67b743e99c0b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1ab2565877a0c40c854f9c10d567d32e49)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1ab2565877a0c40c854f9c10d567d32e49"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a7d825ca35e842a80c6bcdff6fb0ed932)`()` <a id="structFRHAPI__BrowserSessionInfo_1a7d825ca35e842a80c6bcdff6fb0ed932"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a30573896ae94a4fef6012fe3474e51c1)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a30573896ae94a4fef6012fe3474e51c1"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a7a8bc2617452d3ce95c44e9e1ce54cc1)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a7a8bc2617452d3ce95c44e9e1ce54cc1"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1af557bc1b91c5368dfc1c6d5937e96311)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1af557bc1b91c5368dfc1c6d5937e96311"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca)`()` <a id="structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

