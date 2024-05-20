# group `RHAPI_PlayerPresenceUpdateSelf` <a id="group__RHAPI__PlayerPresenceUpdateSelf"></a>

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
`public ERHAPI_OnlineStatus `[`Status_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac48003854292c02a452bd0941631798b) | Is the player currently online?
`public bool `[`Status_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4765400f852085d129d10814f1690b04) | true if Status_Optional has been set to a value
`public FString `[`Message_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a8aac05be183c8a3d41f4c19ed2bb344b) | Optional custom message to display alongside the user's online status. Leaving this unset will not change the value.
`public bool `[`Message_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a8246fa444840c8497533024abe03587d) | true if Message_Optional has been set to a value
`public bool `[`DoNotDisturb_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a90a743fc134a078e6598d988182ba714) | Disables notifications and invites. Leaving this unset will not change the value.
`public bool `[`DoNotDisturb_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0eb359ff47b2965a35bc83bb9fa9a95e) | true if DoNotDisturb_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6a6459645ffbea2924e505c104502775) | custom fields for the player to update about their presence. Custom data with a null value will be removed
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4515026d48610b1eabc547ef3103d9d6) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad12684f1e26e9cc17d771c8b7e1b9cf7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerPresenceUpdateSelf_1a95e75272cc8b192ee74f64db8639cdfc)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5a9f1c3690286fa12a0b21350fbda1b6)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0347bf43daf63a6af5afd2a5c1158660)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4b802d2358ba35af18fc1b9ec866906d)`(const ERHAPI_OnlineStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a22f64155e9475da2d6e1d54051268fa6)`(ERHAPI_OnlineStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a86a88724d092c6bdfe6739a4e614e61d)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5f0bddef0df75c52446acfcf350ef612)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ab9870b3446dd062473d7c6d5f1c55387)`(ERHAPI_OnlineStatus NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`ClearStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae7d4d35a34722468773dbd159358b4f1)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a176ec3c8da297e7cb33cc3d531f4009f)`()` | Gets the value of Message_Optional, regardless of it having been set.
`public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a836572898ef6528d3fc193bb38ed7643)`() const` | Gets the value of Message_Optional, regardless of it having been set.
`public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a37a519b5a29b859b6953998aca22c810)`(const FString & DefaultValue) const` | Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0a4e7c92e0e2c896372c8c9fd2366041)`(FString & OutValue) const` | Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5ef335912f555d56a6c8e7c9ba38d5eb)`()` | Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aecb32203895775f3b25692e223ecb9f9)`() const` | Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a1b4fb2bbb895963a452e983031d53500)`(FString NewValue)` | Sets the value of Message_Optional and also sets Message_IsSet to true.
`public inline void `[`ClearMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac3536ed08f0b68992660d8a94300cdae)`()` | Clears the value of Message_Optional and sets Message_IsSet to false.
`public inline bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a151ff98631328fcb6004cb98c30ea87f)`()` | Gets the value of DoNotDisturb_Optional, regardless of it having been set.
`public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac3a38550a776a8a30c5f026cc2c4145c)`() const` | Gets the value of DoNotDisturb_Optional, regardless of it having been set.
`public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5121697bdb1cbbb2acc0f09c7df22ca5)`(const bool & DefaultValue) const` | Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5a81b18ac6109f6c9b9a76c8467dc6cb)`(bool & OutValue) const` | Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1adba9ac34e459a7ac6d6213a69a77f9ab)`()` | Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a90649a0bcc549b851ee8f13642d6ae75)`() const` | Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a706036999eab58bc3af4816248e05a78)`(bool NewValue)` | Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.
`public inline void `[`ClearDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a356ccb6525ec805cc9339882b4092807)`()` | Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.
`public inline bool `[`IsDoNotDisturbDefaultValue`](#structFRHAPI__PlayerPresenceUpdateSelf_1a9ac5d350237374eed89b2e8061d332dd)`() const` | Returns true if DoNotDisturb_Optional is set and matches the default value.
`public inline void `[`SetDoNotDisturbToDefault`](#structFRHAPI__PlayerPresenceUpdateSelf_1a85bd5cb5d6cba731b70aa62a1f74e5e0)`()` | Sets the value of DoNotDisturb_Optional to its default and also sets DoNotDisturb_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a3f5f51a2f8bbb67a26f8839b48e27f04)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a673f570fbbf287d8777f22fdb7aa1968)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a3bee0b16fc9eca2163951010373f6137)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a37a20d1ce84afabc41ebabf109361d34)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1acc5b6d15e61fb57c84b291d041188837)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a90b74f7392c5cf25f4af7dbdeb282684)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1adabd33ad9a29af321e00c78cc4db53bf)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae1e307673be664cb960223d05a50a70e)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public ERHAPI_OnlineStatus `[`Status_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac48003854292c02a452bd0941631798b) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ac48003854292c02a452bd0941631798b"></a>

Is the player currently online?

#### `public bool `[`Status_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4765400f852085d129d10814f1690b04) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a4765400f852085d129d10814f1690b04"></a>

true if Status_Optional has been set to a value

#### `public FString `[`Message_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a8aac05be183c8a3d41f4c19ed2bb344b) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a8aac05be183c8a3d41f4c19ed2bb344b"></a>

Optional custom message to display alongside the user's online status. Leaving this unset will not change the value.

#### `public bool `[`Message_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a8246fa444840c8497533024abe03587d) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a8246fa444840c8497533024abe03587d"></a>

true if Message_Optional has been set to a value

#### `public bool `[`DoNotDisturb_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a90a743fc134a078e6598d988182ba714) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a90a743fc134a078e6598d988182ba714"></a>

Disables notifications and invites. Leaving this unset will not change the value.

#### `public bool `[`DoNotDisturb_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0eb359ff47b2965a35bc83bb9fa9a95e) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a0eb359ff47b2965a35bc83bb9fa9a95e"></a>

true if DoNotDisturb_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6a6459645ffbea2924e505c104502775) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a6a6459645ffbea2924e505c104502775"></a>

custom fields for the player to update about their presence. Custom data with a null value will be removed

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4515026d48610b1eabc547ef3103d9d6) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a4515026d48610b1eabc547ef3103d9d6"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad12684f1e26e9cc17d771c8b7e1b9cf7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ad12684f1e26e9cc17d771c8b7e1b9cf7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerPresenceUpdateSelf_1a95e75272cc8b192ee74f64db8639cdfc)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a95e75272cc8b192ee74f64db8639cdfc"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5a9f1c3690286fa12a0b21350fbda1b6)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5a9f1c3690286fa12a0b21350fbda1b6"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0347bf43daf63a6af5afd2a5c1158660)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a0347bf43daf63a6af5afd2a5c1158660"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4b802d2358ba35af18fc1b9ec866906d)`(const ERHAPI_OnlineStatus & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a4b802d2358ba35af18fc1b9ec866906d"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a22f64155e9475da2d6e1d54051268fa6)`(ERHAPI_OnlineStatus & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a22f64155e9475da2d6e1d54051268fa6"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a86a88724d092c6bdfe6739a4e614e61d)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a86a88724d092c6bdfe6739a4e614e61d"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5f0bddef0df75c52446acfcf350ef612)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5f0bddef0df75c52446acfcf350ef612"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ab9870b3446dd062473d7c6d5f1c55387)`(ERHAPI_OnlineStatus NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ab9870b3446dd062473d7c6d5f1c55387"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`ClearStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae7d4d35a34722468773dbd159358b4f1)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae7d4d35a34722468773dbd159358b4f1"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a176ec3c8da297e7cb33cc3d531f4009f)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a176ec3c8da297e7cb33cc3d531f4009f"></a>

Gets the value of Message_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a836572898ef6528d3fc193bb38ed7643)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a836572898ef6528d3fc193bb38ed7643"></a>

Gets the value of Message_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a37a519b5a29b859b6953998aca22c810)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a37a519b5a29b859b6953998aca22c810"></a>

Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0a4e7c92e0e2c896372c8c9fd2366041)`(FString & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a0a4e7c92e0e2c896372c8c9fd2366041"></a>

Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5ef335912f555d56a6c8e7c9ba38d5eb)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5ef335912f555d56a6c8e7c9ba38d5eb"></a>

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aecb32203895775f3b25692e223ecb9f9)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aecb32203895775f3b25692e223ecb9f9"></a>

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a1b4fb2bbb895963a452e983031d53500)`(FString NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a1b4fb2bbb895963a452e983031d53500"></a>

Sets the value of Message_Optional and also sets Message_IsSet to true.

#### `public inline void `[`ClearMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac3536ed08f0b68992660d8a94300cdae)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ac3536ed08f0b68992660d8a94300cdae"></a>

Clears the value of Message_Optional and sets Message_IsSet to false.

#### `public inline bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a151ff98631328fcb6004cb98c30ea87f)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a151ff98631328fcb6004cb98c30ea87f"></a>

Gets the value of DoNotDisturb_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac3a38550a776a8a30c5f026cc2c4145c)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ac3a38550a776a8a30c5f026cc2c4145c"></a>

Gets the value of DoNotDisturb_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5121697bdb1cbbb2acc0f09c7df22ca5)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5121697bdb1cbbb2acc0f09c7df22ca5"></a>

Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5a81b18ac6109f6c9b9a76c8467dc6cb)`(bool & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5a81b18ac6109f6c9b9a76c8467dc6cb"></a>

Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1adba9ac34e459a7ac6d6213a69a77f9ab)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1adba9ac34e459a7ac6d6213a69a77f9ab"></a>

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a90649a0bcc549b851ee8f13642d6ae75)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a90649a0bcc549b851ee8f13642d6ae75"></a>

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a706036999eab58bc3af4816248e05a78)`(bool NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a706036999eab58bc3af4816248e05a78"></a>

Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.

#### `public inline void `[`ClearDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a356ccb6525ec805cc9339882b4092807)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a356ccb6525ec805cc9339882b4092807"></a>

Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.

#### `public inline bool `[`IsDoNotDisturbDefaultValue`](#structFRHAPI__PlayerPresenceUpdateSelf_1a9ac5d350237374eed89b2e8061d332dd)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a9ac5d350237374eed89b2e8061d332dd"></a>

Returns true if DoNotDisturb_Optional is set and matches the default value.

#### `public inline void `[`SetDoNotDisturbToDefault`](#structFRHAPI__PlayerPresenceUpdateSelf_1a85bd5cb5d6cba731b70aa62a1f74e5e0)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a85bd5cb5d6cba731b70aa62a1f74e5e0"></a>

Sets the value of DoNotDisturb_Optional to its default and also sets DoNotDisturb_IsSet to true.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a3f5f51a2f8bbb67a26f8839b48e27f04)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a3f5f51a2f8bbb67a26f8839b48e27f04"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a673f570fbbf287d8777f22fdb7aa1968)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a673f570fbbf287d8777f22fdb7aa1968"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a3bee0b16fc9eca2163951010373f6137)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a3bee0b16fc9eca2163951010373f6137"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a37a20d1ce84afabc41ebabf109361d34)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a37a20d1ce84afabc41ebabf109361d34"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1acc5b6d15e61fb57c84b291d041188837)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1acc5b6d15e61fb57c84b291d041188837"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a90b74f7392c5cf25f4af7dbdeb282684)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a90b74f7392c5cf25f4af7dbdeb282684"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1adabd33ad9a29af321e00c78cc4db53bf)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1adabd33ad9a29af321e00c78cc4db53bf"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae1e307673be664cb960223d05a50a70e)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae1e307673be664cb960223d05a50a70e"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

