---
title: RHAPI_PlayerPresenceUpdateSelf
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerPresenceUpdateSelf`](#structFRHAPI__PlayerPresenceUpdateSelf) | 

## struct `FRHAPI_PlayerPresenceUpdateSelf` <a id="structFRHAPI__PlayerPresenceUpdateSelf"></a>

```
struct FRHAPI_PlayerPresenceUpdateSelf
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_OnlineStatus `[`Status_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac48003854292c02a452bd0941631798b) | 
`public bool `[`Status_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4765400f852085d129d10814f1690b04) | true if Status_Optional has been set to a value
`public bool `[`Status_IsNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a57d34c9cb10633427b26b0d59f0b05f1) | true if Status_Optional has been explicitly set to null
`public FString `[`Message_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a8aac05be183c8a3d41f4c19ed2bb344b) | 
`public bool `[`Message_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a8246fa444840c8497533024abe03587d) | true if Message_Optional has been set to a value
`public bool `[`Message_IsNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a2e9e75887b8c22e9330617e8f6a9b6e0) | true if Message_Optional has been explicitly set to null
`public bool `[`DoNotDisturb_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a90a743fc134a078e6598d988182ba714) | 
`public bool `[`DoNotDisturb_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0eb359ff47b2965a35bc83bb9fa9a95e) | true if DoNotDisturb_Optional has been set to a value
`public bool `[`DoNotDisturb_IsNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa90513182491e85e901d8fef85ac2d57) | true if DoNotDisturb_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6a6459645ffbea2924e505c104502775) | custom fields for the player to update about their presence. Custom data with a null value will be removed
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4515026d48610b1eabc547ef3103d9d6) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa8de4c0cbd864da4ec19e7aa581260ba)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad4750535d7ae47a38c4e8acb20bbb5dd)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a1afc40325914c9fc5a019f6189c275c8)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae86733a8a1de75909a13bff849d73058)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a841c01e19c8f070b6a03bca83a3b75da)`(const ERHAPI_OnlineStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a22f64155e9475da2d6e1d54051268fa6)`(ERHAPI_OnlineStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a43817bf153da7c422ef99ee4f8d0a6de)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a74a4d0e959b1c8a19fe1237dce1b3ba9)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0fba8f3110bb2265be7d8b68178c2029)`(const ERHAPI_OnlineStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`SetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5302d46a318dd90ab3a428be255826db)`(ERHAPI_OnlineStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae7d4d35a34722468773dbd159358b4f1)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline bool `[`IsStatusSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1aac12b0aa7be8ee1e6a6e6aeabab6ecdb)`() const` | Checks whether Status_Optional has been set.
`public inline void `[`SetStatusToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa171d797049d9d869709e11ddeb60ed5)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStatusNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a264cc78bb6fbdb2ae98b3167b93eeff1)`() const` | Checks whether Status_Optional is set to null.
`public inline FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6cdf0bd263cd5a5afa76ee6752838644)`()` | Gets the value of Message_Optional, regardless of it having been set.
`public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a7a272573b3352160f963a5a1ed5f5498)`() const` | Gets the value of Message_Optional, regardless of it having been set.
`public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad56fd4bf6e4ef623639f816f1b52c30e)`(const FString & DefaultValue) const` | Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0a4e7c92e0e2c896372c8c9fd2366041)`(FString & OutValue) const` | Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad0abe2345a1a65f22f31a5dd8fe498e1)`()` | Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a30f7b4af1e41365b9270b83ae8cd4ef7)`() const` | Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5b84b5ca7bd2a1b5be2a8a9dbc413416)`(const FString & NewValue)` | Sets the value of Message_Optional and also sets Message_IsSet to true.
`public inline void `[`SetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa0a3e18e8f5c83af1e67f49e6982cf13)`(FString && NewValue)` | Sets the value of Message_Optional and also sets Message_IsSet to true using move semantics.
`public inline void `[`ClearMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac3536ed08f0b68992660d8a94300cdae)`()` | Clears the value of Message_Optional and sets Message_IsSet to false.
`public inline bool `[`IsMessageSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5be90d9ecfb42ca3aba573c97891b834)`() const` | Checks whether Message_Optional has been set.
`public inline void `[`SetMessageToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4e96626ddb1b938ed4536583c8cba20a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMessageNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aafc9c6966ef1fed49cfe06aa95e32a48)`() const` | Checks whether Message_Optional is set to null.
`public inline bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a1e822f52ed6755087e04698c4118f8cf)`()` | Gets the value of DoNotDisturb_Optional, regardless of it having been set.
`public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1afbe201a19d5670518c6d38ce8b5a956f)`() const` | Gets the value of DoNotDisturb_Optional, regardless of it having been set.
`public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa8883362408e663801f4e7d54cd7924e)`(const bool & DefaultValue) const` | Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5a81b18ac6109f6c9b9a76c8467dc6cb)`(bool & OutValue) const` | Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1af09d6b5cdbb0ece20dd15dc2a2859ee6)`()` | Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a43dcbf4f5733d5840b47aa9e247c6103)`() const` | Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1aaf10b9083e6169bb2275b4ea7732007c)`(const bool & NewValue)` | Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.
`public inline void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a8643285bc7dfbb054783d9585b1b8f58)`(bool && NewValue)` | Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true using move semantics.
`public inline void `[`ClearDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a356ccb6525ec805cc9339882b4092807)`()` | Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.
`public inline bool `[`IsDoNotDisturbSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a2996d5d939f0c3df0b21125b11ed7668)`() const` | Checks whether DoNotDisturb_Optional has been set.
`public inline bool `[`IsDoNotDisturbDefaultValue`](#structFRHAPI__PlayerPresenceUpdateSelf_1a9ac5d350237374eed89b2e8061d332dd)`() const` | Returns true if DoNotDisturb_Optional is set and matches the default value.
`public inline void `[`SetDoNotDisturbToDefault`](#structFRHAPI__PlayerPresenceUpdateSelf_1a85bd5cb5d6cba731b70aa62a1f74e5e0)`()` | Sets the value of DoNotDisturb_Optional to its default and also sets DoNotDisturb_IsSet to true.
`public inline void `[`SetDoNotDisturbToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a227bf75b3f87271dc655bc49fcfeb81a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDoNotDisturbNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1af7963ccf3713221765c026d04d28c0f5)`() const` | Checks whether DoNotDisturb_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a31bf193c81f6b7be79352d69d06aa890)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5bf5656924718fc38841f3b3bfc559f2)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6d5ff45648112b2d2483946dcb1d13b5)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a37a20d1ce84afabc41ebabf109361d34)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad435849bb11fcdbc232f16d4158364d4)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1af9ac38f65471396392753ecacc53d4a9)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a139fca0ec86a138bbf6c84a6ab6dbea4)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a569067c4644b3a01973c998d0555d4f4)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae1e307673be664cb960223d05a50a70e)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a2b14f36f08502b3859cc7a6c7fa619a9)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public ERHAPI_OnlineStatus `[`Status_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac48003854292c02a452bd0941631798b) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ac48003854292c02a452bd0941631798b"></a>

#### `public bool `[`Status_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4765400f852085d129d10814f1690b04) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a4765400f852085d129d10814f1690b04"></a>

true if Status_Optional has been set to a value

#### `public bool `[`Status_IsNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a57d34c9cb10633427b26b0d59f0b05f1) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a57d34c9cb10633427b26b0d59f0b05f1"></a>

true if Status_Optional has been explicitly set to null

#### `public FString `[`Message_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a8aac05be183c8a3d41f4c19ed2bb344b) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a8aac05be183c8a3d41f4c19ed2bb344b"></a>

#### `public bool `[`Message_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a8246fa444840c8497533024abe03587d) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a8246fa444840c8497533024abe03587d"></a>

true if Message_Optional has been set to a value

#### `public bool `[`Message_IsNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a2e9e75887b8c22e9330617e8f6a9b6e0) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a2e9e75887b8c22e9330617e8f6a9b6e0"></a>

true if Message_Optional has been explicitly set to null

#### `public bool `[`DoNotDisturb_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a90a743fc134a078e6598d988182ba714) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a90a743fc134a078e6598d988182ba714"></a>

#### `public bool `[`DoNotDisturb_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0eb359ff47b2965a35bc83bb9fa9a95e) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a0eb359ff47b2965a35bc83bb9fa9a95e"></a>

true if DoNotDisturb_Optional has been set to a value

#### `public bool `[`DoNotDisturb_IsNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa90513182491e85e901d8fef85ac2d57) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aa90513182491e85e901d8fef85ac2d57"></a>

true if DoNotDisturb_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6a6459645ffbea2924e505c104502775) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a6a6459645ffbea2924e505c104502775"></a>

custom fields for the player to update about their presence. Custom data with a null value will be removed

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4515026d48610b1eabc547ef3103d9d6) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a4515026d48610b1eabc547ef3103d9d6"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa8de4c0cbd864da4ec19e7aa581260ba)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aa8de4c0cbd864da4ec19e7aa581260ba"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad4750535d7ae47a38c4e8acb20bbb5dd)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ad4750535d7ae47a38c4e8acb20bbb5dd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a1afc40325914c9fc5a019f6189c275c8)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a1afc40325914c9fc5a019f6189c275c8"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae86733a8a1de75909a13bff849d73058)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae86733a8a1de75909a13bff849d73058"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a841c01e19c8f070b6a03bca83a3b75da)`(const ERHAPI_OnlineStatus & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a841c01e19c8f070b6a03bca83a3b75da"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a22f64155e9475da2d6e1d54051268fa6)`(ERHAPI_OnlineStatus & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a22f64155e9475da2d6e1d54051268fa6"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a43817bf153da7c422ef99ee4f8d0a6de)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a43817bf153da7c422ef99ee4f8d0a6de"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a74a4d0e959b1c8a19fe1237dce1b3ba9)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a74a4d0e959b1c8a19fe1237dce1b3ba9"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0fba8f3110bb2265be7d8b68178c2029)`(const ERHAPI_OnlineStatus & NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a0fba8f3110bb2265be7d8b68178c2029"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5302d46a318dd90ab3a428be255826db)`(ERHAPI_OnlineStatus && NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5302d46a318dd90ab3a428be255826db"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae7d4d35a34722468773dbd159358b4f1)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae7d4d35a34722468773dbd159358b4f1"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline bool `[`IsStatusSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1aac12b0aa7be8ee1e6a6e6aeabab6ecdb)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aac12b0aa7be8ee1e6a6e6aeabab6ecdb"></a>

Checks whether Status_Optional has been set.

#### `public inline void `[`SetStatusToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa171d797049d9d869709e11ddeb60ed5)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aa171d797049d9d869709e11ddeb60ed5"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStatusNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a264cc78bb6fbdb2ae98b3167b93eeff1)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a264cc78bb6fbdb2ae98b3167b93eeff1"></a>

Checks whether Status_Optional is set to null.

#### `public inline FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6cdf0bd263cd5a5afa76ee6752838644)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a6cdf0bd263cd5a5afa76ee6752838644"></a>

Gets the value of Message_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a7a272573b3352160f963a5a1ed5f5498)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a7a272573b3352160f963a5a1ed5f5498"></a>

Gets the value of Message_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad56fd4bf6e4ef623639f816f1b52c30e)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ad56fd4bf6e4ef623639f816f1b52c30e"></a>

Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0a4e7c92e0e2c896372c8c9fd2366041)`(FString & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a0a4e7c92e0e2c896372c8c9fd2366041"></a>

Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad0abe2345a1a65f22f31a5dd8fe498e1)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ad0abe2345a1a65f22f31a5dd8fe498e1"></a>

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a30f7b4af1e41365b9270b83ae8cd4ef7)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a30f7b4af1e41365b9270b83ae8cd4ef7"></a>

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5b84b5ca7bd2a1b5be2a8a9dbc413416)`(const FString & NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5b84b5ca7bd2a1b5be2a8a9dbc413416"></a>

Sets the value of Message_Optional and also sets Message_IsSet to true.

#### `public inline void `[`SetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa0a3e18e8f5c83af1e67f49e6982cf13)`(FString && NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aa0a3e18e8f5c83af1e67f49e6982cf13"></a>

Sets the value of Message_Optional and also sets Message_IsSet to true using move semantics.

#### `public inline void `[`ClearMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac3536ed08f0b68992660d8a94300cdae)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ac3536ed08f0b68992660d8a94300cdae"></a>

Clears the value of Message_Optional and sets Message_IsSet to false.

#### `public inline bool `[`IsMessageSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5be90d9ecfb42ca3aba573c97891b834)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5be90d9ecfb42ca3aba573c97891b834"></a>

Checks whether Message_Optional has been set.

#### `public inline void `[`SetMessageToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4e96626ddb1b938ed4536583c8cba20a)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a4e96626ddb1b938ed4536583c8cba20a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMessageNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aafc9c6966ef1fed49cfe06aa95e32a48)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aafc9c6966ef1fed49cfe06aa95e32a48"></a>

Checks whether Message_Optional is set to null.

#### `public inline bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a1e822f52ed6755087e04698c4118f8cf)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a1e822f52ed6755087e04698c4118f8cf"></a>

Gets the value of DoNotDisturb_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1afbe201a19d5670518c6d38ce8b5a956f)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1afbe201a19d5670518c6d38ce8b5a956f"></a>

Gets the value of DoNotDisturb_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa8883362408e663801f4e7d54cd7924e)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aa8883362408e663801f4e7d54cd7924e"></a>

Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5a81b18ac6109f6c9b9a76c8467dc6cb)`(bool & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5a81b18ac6109f6c9b9a76c8467dc6cb"></a>

Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1af09d6b5cdbb0ece20dd15dc2a2859ee6)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1af09d6b5cdbb0ece20dd15dc2a2859ee6"></a>

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a43dcbf4f5733d5840b47aa9e247c6103)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a43dcbf4f5733d5840b47aa9e247c6103"></a>

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1aaf10b9083e6169bb2275b4ea7732007c)`(const bool & NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aaf10b9083e6169bb2275b4ea7732007c"></a>

Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.

#### `public inline void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a8643285bc7dfbb054783d9585b1b8f58)`(bool && NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a8643285bc7dfbb054783d9585b1b8f58"></a>

Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true using move semantics.

#### `public inline void `[`ClearDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a356ccb6525ec805cc9339882b4092807)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a356ccb6525ec805cc9339882b4092807"></a>

Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.

#### `public inline bool `[`IsDoNotDisturbSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a2996d5d939f0c3df0b21125b11ed7668)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a2996d5d939f0c3df0b21125b11ed7668"></a>

Checks whether DoNotDisturb_Optional has been set.

#### `public inline bool `[`IsDoNotDisturbDefaultValue`](#structFRHAPI__PlayerPresenceUpdateSelf_1a9ac5d350237374eed89b2e8061d332dd)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a9ac5d350237374eed89b2e8061d332dd"></a>

Returns true if DoNotDisturb_Optional is set and matches the default value.

#### `public inline void `[`SetDoNotDisturbToDefault`](#structFRHAPI__PlayerPresenceUpdateSelf_1a85bd5cb5d6cba731b70aa62a1f74e5e0)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a85bd5cb5d6cba731b70aa62a1f74e5e0"></a>

Sets the value of DoNotDisturb_Optional to its default and also sets DoNotDisturb_IsSet to true.

#### `public inline void `[`SetDoNotDisturbToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a227bf75b3f87271dc655bc49fcfeb81a)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a227bf75b3f87271dc655bc49fcfeb81a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDoNotDisturbNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1af7963ccf3713221765c026d04d28c0f5)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1af7963ccf3713221765c026d04d28c0f5"></a>

Checks whether DoNotDisturb_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a31bf193c81f6b7be79352d69d06aa890)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a31bf193c81f6b7be79352d69d06aa890"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5bf5656924718fc38841f3b3bfc559f2)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5bf5656924718fc38841f3b3bfc559f2"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6d5ff45648112b2d2483946dcb1d13b5)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a6d5ff45648112b2d2483946dcb1d13b5"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a37a20d1ce84afabc41ebabf109361d34)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a37a20d1ce84afabc41ebabf109361d34"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad435849bb11fcdbc232f16d4158364d4)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ad435849bb11fcdbc232f16d4158364d4"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1af9ac38f65471396392753ecacc53d4a9)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1af9ac38f65471396392753ecacc53d4a9"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a139fca0ec86a138bbf6c84a6ab6dbea4)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a139fca0ec86a138bbf6c84a6ab6dbea4"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a569067c4644b3a01973c998d0555d4f4)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a569067c4644b3a01973c998d0555d4f4"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae1e307673be664cb960223d05a50a70e)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae1e307673be664cb960223d05a50a70e"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a2b14f36f08502b3859cc7a6c7fa619a9)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a2b14f36f08502b3859cc7a6c7fa619a9"></a>

Checks whether CustomData_Optional has been set.

