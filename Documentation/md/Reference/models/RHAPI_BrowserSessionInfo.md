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
`public inline FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a89457d9fde8ec15e42cdceba3fa9beda)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1ab48133976afe851b2c462d99296d0341)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1af9bd395ee6c2e2a117e199292f31d937)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1a0288e14c2a5669ce9fbd7cca6d35e13e)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1ac0ca15d29145085ae22ee009e7388530)`()` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1ad4c3a8fb9bf69a2d90a1c437af3bbd1d)`() const` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a37ba0eda5fb509a8ec52da22799f621f)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` | Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a9915d762a1789b442ffadf2e624c3c20)`(ERHAPI_InstanceHealthStatus & OutValue) const` | Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__BrowserSessionInfo_1a1400ca191c60a28c91c9ed8197780c38)`()` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__BrowserSessionInfo_1ad440bab2e177458a13da864775c3756b)`() const` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1aa6f545593348ba2d2a0c91a9f170479b)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a120bf0fde861741b0ad6a235b9fb337e)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.
`public inline void `[`ClearInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a0d3512081896025e79e4f1e9cc1b8945)`()` | Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.
`public inline bool `[`IsInstanceHealthSet`](#structFRHAPI__BrowserSessionInfo_1ae2538914116046218ef894e3abe6f072)`() const` | Checks whether InstanceHealth_Optional has been set.
`public inline int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1abcdb61c0e058511474fceb2b9a76d633)`()` | Gets the value of PlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ae3789842f8b5064121aa508ca45a1bd5)`() const` | Gets the value of PlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a7df07d9599a143a6476a7fadbe707500)`(const int32 & DefaultValue) const` | Gets the value of PlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a39108acad6e256b339c9b3ea000cee3b)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a55a82bf9ca8f7b63249ca95f4b6d491c)`()` | Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a0b476b1f1071e7ab9b00f2499f133f8c)`() const` | Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a6f970072da1db84fd563906baf55dbed)`(const int32 & NewValue)` | Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true.
`public inline void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1acb5b34a1fc0498cf3f49832d550eb815)`(int32 && NewValue)` | Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true using move semantics.
`public inline void `[`ClearPlayerCount`](#structFRHAPI__BrowserSessionInfo_1aea544e1d0c35b6eb3042f5541619d850)`()` | Clears the value of PlayerCount_Optional and sets PlayerCount_IsSet to false.
`public inline bool `[`IsPlayerCountSet`](#structFRHAPI__BrowserSessionInfo_1ace2eec507184d6a7a533b9ac55285fb5)`() const` | Checks whether PlayerCount_Optional has been set.
`public inline bool `[`IsPlayerCountDefaultValue`](#structFRHAPI__BrowserSessionInfo_1aca260c0cc406d03f4423ae42aa00cd7d)`() const` | Returns true if PlayerCount_Optional is set and matches the default value.
`public inline void `[`SetPlayerCountToDefault`](#structFRHAPI__BrowserSessionInfo_1a33402b8ce555bdda6304a68c169128cf)`()` | Sets the value of PlayerCount_Optional to its default and also sets PlayerCount_IsSet to true.
`public inline int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1adda3a4e3074e3a30f933ccffc86fe228)`()` | Gets the value of MaxPlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1af27c9a652bfadb75542107fb83eeb66c)`() const` | Gets the value of MaxPlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a69cc8def4b5c93dd889d9babfcb30982)`(const int32 & DefaultValue) const` | Gets the value of MaxPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a4fca349b8c31f615d8b19c3bab0bf6ac)`(int32 & OutValue) const` | Fills OutValue with the value of MaxPlayerCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1abb8ff739b4198b7880782e22e119f27b)`()` | Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a6bc0789067149c5cd47c7c466098c38d)`() const` | Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ab9e458d4237816e4393f052649ca8e84)`(const int32 & NewValue)` | Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true.
`public inline void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ada5f36406308d1b7d01c91492836d39c)`(int32 && NewValue)` | Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true using move semantics.
`public inline void `[`ClearMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ae4db76a7c37ed889376ede8b46d804e8)`()` | Clears the value of MaxPlayerCount_Optional and sets MaxPlayerCount_IsSet to false.
`public inline bool `[`IsMaxPlayerCountSet`](#structFRHAPI__BrowserSessionInfo_1a838c8d5cf592a5825b1d4fde023c54dd)`() const` | Checks whether MaxPlayerCount_Optional has been set.
`public inline bool `[`IsMaxPlayerCountDefaultValue`](#structFRHAPI__BrowserSessionInfo_1a2216b0feb30b57b5d2e3fe24662bd446)`() const` | Returns true if MaxPlayerCount_Optional is set and matches the default value.
`public inline void `[`SetMaxPlayerCountToDefault`](#structFRHAPI__BrowserSessionInfo_1ac2796e981f1551692d575f75f8b3a826)`()` | Sets the value of MaxPlayerCount_Optional to its default and also sets MaxPlayerCount_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1ac204788ce5245b6b3be00378b8fe8268)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a4ddaa1f2ba7060e998d91717d5c5594e)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a5f601d7447441a323d9f0b3f7143ab1f)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a3e1c0b8045943d73a0a847bce3e07cc4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a93357469e434d92c9ac74639f0d965ae)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a1cdafe86cf7851ca40d7d67a57ed0f13)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a4a8be0270a10138d36ca7ce536c21761)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a73beea90988e2c3933966d54d492d993)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__BrowserSessionInfo_1afda2f7ad5a47ce6b140c5bd6e1d15ff3)`() const` | Checks whether CustomData_Optional has been set.

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

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1a89457d9fde8ec15e42cdceba3fa9beda)`()` <a id="structFRHAPI__BrowserSessionInfo_1a89457d9fde8ec15e42cdceba3fa9beda"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__BrowserSessionInfo_1ab48133976afe851b2c462d99296d0341)`() const` <a id="structFRHAPI__BrowserSessionInfo_1ab48133976afe851b2c462d99296d0341"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1af9bd395ee6c2e2a117e199292f31d937)`(const FString & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1af9bd395ee6c2e2a117e199292f31d937"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__BrowserSessionInfo_1a0288e14c2a5669ce9fbd7cca6d35e13e)`(FString && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a0288e14c2a5669ce9fbd7cca6d35e13e"></a>

Sets the value of SessionId using move semantics.

#### `public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1ac0ca15d29145085ae22ee009e7388530)`()` <a id="structFRHAPI__BrowserSessionInfo_1ac0ca15d29145085ae22ee009e7388530"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1ad4c3a8fb9bf69a2d90a1c437af3bbd1d)`() const` <a id="structFRHAPI__BrowserSessionInfo_1ad4c3a8fb9bf69a2d90a1c437af3bbd1d"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a37ba0eda5fb509a8ec52da22799f621f)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a37ba0eda5fb509a8ec52da22799f621f"></a>

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a9915d762a1789b442ffadf2e624c3c20)`(ERHAPI_InstanceHealthStatus & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a9915d762a1789b442ffadf2e624c3c20"></a>

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__BrowserSessionInfo_1a1400ca191c60a28c91c9ed8197780c38)`()` <a id="structFRHAPI__BrowserSessionInfo_1a1400ca191c60a28c91c9ed8197780c38"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__BrowserSessionInfo_1ad440bab2e177458a13da864775c3756b)`() const` <a id="structFRHAPI__BrowserSessionInfo_1ad440bab2e177458a13da864775c3756b"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1aa6f545593348ba2d2a0c91a9f170479b)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1aa6f545593348ba2d2a0c91a9f170479b"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a120bf0fde861741b0ad6a235b9fb337e)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a120bf0fde861741b0ad6a235b9fb337e"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceHealth`](#structFRHAPI__BrowserSessionInfo_1a0d3512081896025e79e4f1e9cc1b8945)`()` <a id="structFRHAPI__BrowserSessionInfo_1a0d3512081896025e79e4f1e9cc1b8945"></a>

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.

#### `public inline bool `[`IsInstanceHealthSet`](#structFRHAPI__BrowserSessionInfo_1ae2538914116046218ef894e3abe6f072)`() const` <a id="structFRHAPI__BrowserSessionInfo_1ae2538914116046218ef894e3abe6f072"></a>

Checks whether InstanceHealth_Optional has been set.

#### `public inline int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1abcdb61c0e058511474fceb2b9a76d633)`()` <a id="structFRHAPI__BrowserSessionInfo_1abcdb61c0e058511474fceb2b9a76d633"></a>

Gets the value of PlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ae3789842f8b5064121aa508ca45a1bd5)`() const` <a id="structFRHAPI__BrowserSessionInfo_1ae3789842f8b5064121aa508ca45a1bd5"></a>

Gets the value of PlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a7df07d9599a143a6476a7fadbe707500)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a7df07d9599a143a6476a7fadbe707500"></a>

Gets the value of PlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a39108acad6e256b339c9b3ea000cee3b)`(int32 & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a39108acad6e256b339c9b3ea000cee3b"></a>

Fills OutValue with the value of PlayerCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a55a82bf9ca8f7b63249ca95f4b6d491c)`()` <a id="structFRHAPI__BrowserSessionInfo_1a55a82bf9ca8f7b63249ca95f4b6d491c"></a>

Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a0b476b1f1071e7ab9b00f2499f133f8c)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a0b476b1f1071e7ab9b00f2499f133f8c"></a>

Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a6f970072da1db84fd563906baf55dbed)`(const int32 & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a6f970072da1db84fd563906baf55dbed"></a>

Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true.

#### `public inline void `[`SetPlayerCount`](#structFRHAPI__BrowserSessionInfo_1acb5b34a1fc0498cf3f49832d550eb815)`(int32 && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1acb5b34a1fc0498cf3f49832d550eb815"></a>

Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerCount`](#structFRHAPI__BrowserSessionInfo_1aea544e1d0c35b6eb3042f5541619d850)`()` <a id="structFRHAPI__BrowserSessionInfo_1aea544e1d0c35b6eb3042f5541619d850"></a>

Clears the value of PlayerCount_Optional and sets PlayerCount_IsSet to false.

#### `public inline bool `[`IsPlayerCountSet`](#structFRHAPI__BrowserSessionInfo_1ace2eec507184d6a7a533b9ac55285fb5)`() const` <a id="structFRHAPI__BrowserSessionInfo_1ace2eec507184d6a7a533b9ac55285fb5"></a>

Checks whether PlayerCount_Optional has been set.

#### `public inline bool `[`IsPlayerCountDefaultValue`](#structFRHAPI__BrowserSessionInfo_1aca260c0cc406d03f4423ae42aa00cd7d)`() const` <a id="structFRHAPI__BrowserSessionInfo_1aca260c0cc406d03f4423ae42aa00cd7d"></a>

Returns true if PlayerCount_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerCountToDefault`](#structFRHAPI__BrowserSessionInfo_1a33402b8ce555bdda6304a68c169128cf)`()` <a id="structFRHAPI__BrowserSessionInfo_1a33402b8ce555bdda6304a68c169128cf"></a>

Sets the value of PlayerCount_Optional to its default and also sets PlayerCount_IsSet to true.

#### `public inline int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1adda3a4e3074e3a30f933ccffc86fe228)`()` <a id="structFRHAPI__BrowserSessionInfo_1adda3a4e3074e3a30f933ccffc86fe228"></a>

Gets the value of MaxPlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1af27c9a652bfadb75542107fb83eeb66c)`() const` <a id="structFRHAPI__BrowserSessionInfo_1af27c9a652bfadb75542107fb83eeb66c"></a>

Gets the value of MaxPlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a69cc8def4b5c93dd889d9babfcb30982)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a69cc8def4b5c93dd889d9babfcb30982"></a>

Gets the value of MaxPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1a4fca349b8c31f615d8b19c3bab0bf6ac)`(int32 & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a4fca349b8c31f615d8b19c3bab0bf6ac"></a>

Fills OutValue with the value of MaxPlayerCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1abb8ff739b4198b7880782e22e119f27b)`()` <a id="structFRHAPI__BrowserSessionInfo_1abb8ff739b4198b7880782e22e119f27b"></a>

Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetMaxPlayerCountOrNull`](#structFRHAPI__BrowserSessionInfo_1a6bc0789067149c5cd47c7c466098c38d)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a6bc0789067149c5cd47c7c466098c38d"></a>

Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ab9e458d4237816e4393f052649ca8e84)`(const int32 & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1ab9e458d4237816e4393f052649ca8e84"></a>

Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true.

#### `public inline void `[`SetMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ada5f36406308d1b7d01c91492836d39c)`(int32 && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1ada5f36406308d1b7d01c91492836d39c"></a>

Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true using move semantics.

#### `public inline void `[`ClearMaxPlayerCount`](#structFRHAPI__BrowserSessionInfo_1ae4db76a7c37ed889376ede8b46d804e8)`()` <a id="structFRHAPI__BrowserSessionInfo_1ae4db76a7c37ed889376ede8b46d804e8"></a>

Clears the value of MaxPlayerCount_Optional and sets MaxPlayerCount_IsSet to false.

#### `public inline bool `[`IsMaxPlayerCountSet`](#structFRHAPI__BrowserSessionInfo_1a838c8d5cf592a5825b1d4fde023c54dd)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a838c8d5cf592a5825b1d4fde023c54dd"></a>

Checks whether MaxPlayerCount_Optional has been set.

#### `public inline bool `[`IsMaxPlayerCountDefaultValue`](#structFRHAPI__BrowserSessionInfo_1a2216b0feb30b57b5d2e3fe24662bd446)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a2216b0feb30b57b5d2e3fe24662bd446"></a>

Returns true if MaxPlayerCount_Optional is set and matches the default value.

#### `public inline void `[`SetMaxPlayerCountToDefault`](#structFRHAPI__BrowserSessionInfo_1ac2796e981f1551692d575f75f8b3a826)`()` <a id="structFRHAPI__BrowserSessionInfo_1ac2796e981f1551692d575f75f8b3a826"></a>

Sets the value of MaxPlayerCount_Optional to its default and also sets MaxPlayerCount_IsSet to true.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1ac204788ce5245b6b3be00378b8fe8268)`()` <a id="structFRHAPI__BrowserSessionInfo_1ac204788ce5245b6b3be00378b8fe8268"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a4ddaa1f2ba7060e998d91717d5c5594e)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a4ddaa1f2ba7060e998d91717d5c5594e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a5f601d7447441a323d9f0b3f7143ab1f)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a5f601d7447441a323d9f0b3f7143ab1f"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__BrowserSessionInfo_1a3e1c0b8045943d73a0a847bce3e07cc4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__BrowserSessionInfo_1a3e1c0b8045943d73a0a847bce3e07cc4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a93357469e434d92c9ac74639f0d965ae)`()` <a id="structFRHAPI__BrowserSessionInfo_1a93357469e434d92c9ac74639f0d965ae"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserSessionInfo_1a1cdafe86cf7851ca40d7d67a57ed0f13)`() const` <a id="structFRHAPI__BrowserSessionInfo_1a1cdafe86cf7851ca40d7d67a57ed0f13"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a4a8be0270a10138d36ca7ce536c21761)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a4a8be0270a10138d36ca7ce536c21761"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__BrowserSessionInfo_1a73beea90988e2c3933966d54d492d993)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__BrowserSessionInfo_1a73beea90988e2c3933966d54d492d993"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca)`()` <a id="structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__BrowserSessionInfo_1afda2f7ad5a47ce6b140c5bd6e1d15ff3)`() const` <a id="structFRHAPI__BrowserSessionInfo_1afda2f7ad5a47ce6b140c5bd6e1d15ff3"></a>

Checks whether CustomData_Optional has been set.

