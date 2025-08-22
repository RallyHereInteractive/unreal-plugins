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
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6a6459645ffbea2924e505c104502775) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4515026d48610b1eabc547ef3103d9d6) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a18395fb65141cbdf03ea29bdd54ab5e2) | true if CustomData_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa8de4c0cbd864da4ec19e7aa581260ba)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad4750535d7ae47a38c4e8acb20bbb5dd)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a96feaf94958c4b389d506d14cbede0dc)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a3b2363dd7d5ef1aa215c168d6bd6bd51)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae6466fd9cca9caeedbcb6c9c709ae56d)`(const ERHAPI_OnlineStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a322f6c95b8509cf091b206f0305c0a7a)`(ERHAPI_OnlineStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ab21d10cf48cb7564fa8302dd02fb5987)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6e17769e126bcf12876ff766b8d49d6b)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1aaaf9cb35043efe1ceb69dd4c6f92c8c8)`(const ERHAPI_OnlineStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a06073316d594971617e952ca2145f1b3)`(ERHAPI_OnlineStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae7d4d35a34722468773dbd159358b4f1)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline FORCEINLINE void `[`SetStatusToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a83a4fa6e7c30097955f159524c0f5e67)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStatusNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a511079969d25b251da604217ecc36011)`() const` | Checks whether Status_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1abaffe44130f9b08fa14d0c1269c5287e)`()` | Gets the value of Message_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a3e7d812ec870be8d19809c50b9628430)`() const` | Gets the value of Message_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a53bc19ed6c0b0bdca0541eb0782235b5)`(const FString & DefaultValue) const` | Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a3172b15bb78182ebadb2323e7a89ddeb)`(FString & OutValue) const` | Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a94a4ad24161298932c63aec0f2fd3267)`()` | Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1adc84dcfa92716700d63f0f479babc55b)`() const` | Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5971b6041685cf7f0201025287bc3a9d)`(const FString & NewValue)` | Sets the value of Message_Optional and also sets Message_IsSet to true.
`public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a1244ef69c0623fcceaea343c04a5640c)`(FString && NewValue)` | Sets the value of Message_Optional and also sets Message_IsSet to true using move semantics.
`public inline void `[`ClearMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac3536ed08f0b68992660d8a94300cdae)`()` | Clears the value of Message_Optional and sets Message_IsSet to false.
`public inline FORCEINLINE void `[`SetMessageToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa7d74201e1429771883f19ded6da541e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMessageNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a1cf1a8dd7410c5c9fa4e56e12d61e450)`() const` | Checks whether Message_Optional is set to null.
`public inline FORCEINLINE bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1af9bf998ff93d09027243cf5b1745416b)`()` | Gets the value of DoNotDisturb_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0f78fb7e6072f1823e57036eea233fd0)`() const` | Gets the value of DoNotDisturb_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4acbf06a4787d2ad8de36ea5dc174dd2)`(const bool & DefaultValue) const` | Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad61fcc16ee8780c2ea57ba7044173dd7)`(bool & OutValue) const` | Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1af06899bc72653b682a9917ae3135a5b2)`()` | Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa891dfe4157a4abbc9f9e461be67f7b1)`() const` | Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1ace5bf268c575930784fc5398057156f3)`(const bool & NewValue)` | Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.
`public inline FORCEINLINE void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1aed2ddd8fcc5f6304f498f68c826bbb03)`(bool && NewValue)` | Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true using move semantics.
`public inline void `[`ClearDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a356ccb6525ec805cc9339882b4092807)`()` | Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_DoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a79ecd71674ac6df2ca2f61935e7fa50d)`()` | Returns the default value of DoNotDisturb.
`public inline FORCEINLINE void `[`SetDoNotDisturbToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a40f068ccc6f5faad4c8cc28c690753f8)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDoNotDisturbNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1af4bce3109b7b5f4e2a43037eb4fb711c)`() const` | Checks whether DoNotDisturb_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae947d5c395da3356a3d51a4e924e12cc)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6098eec0dbcc65555606a3a4badb505c)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6fe8e72fb7203dae26e6a8db80c5d230)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a05e516b060f77eeaa3fb24093342b143)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ab694690ff25bb84923f5543c9c9f6395)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae8d36f4c32f52af34d75b300283b0d57)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1af5cd05a5180113c679f067b2030760db)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa58c73958166eb2b2773a87e7d5f13dc)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae1e307673be664cb960223d05a50a70e)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad74783702904502e4516e7e501c29d85)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6c3dfcf2cae71c12f24a0a365e71ac86)`() const` | Checks whether CustomData_Optional is set to null.

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

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4515026d48610b1eabc547ef3103d9d6) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a4515026d48610b1eabc547ef3103d9d6"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a18395fb65141cbdf03ea29bdd54ab5e2) <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a18395fb65141cbdf03ea29bdd54ab5e2"></a>

true if CustomData_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a96feaf94958c4b389d506d14cbede0dc)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a96feaf94958c4b389d506d14cbede0dc"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a3b2363dd7d5ef1aa215c168d6bd6bd51)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a3b2363dd7d5ef1aa215c168d6bd6bd51"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae6466fd9cca9caeedbcb6c9c709ae56d)`(const ERHAPI_OnlineStatus & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae6466fd9cca9caeedbcb6c9c709ae56d"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a322f6c95b8509cf091b206f0305c0a7a)`(ERHAPI_OnlineStatus & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a322f6c95b8509cf091b206f0305c0a7a"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ab21d10cf48cb7564fa8302dd02fb5987)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ab21d10cf48cb7564fa8302dd02fb5987"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6e17769e126bcf12876ff766b8d49d6b)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a6e17769e126bcf12876ff766b8d49d6b"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1aaaf9cb35043efe1ceb69dd4c6f92c8c8)`(const ERHAPI_OnlineStatus & NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aaaf9cb35043efe1ceb69dd4c6f92c8c8"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1a06073316d594971617e952ca2145f1b3)`(ERHAPI_OnlineStatus && NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a06073316d594971617e952ca2145f1b3"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae7d4d35a34722468773dbd159358b4f1)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae7d4d35a34722468773dbd159358b4f1"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStatusToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a83a4fa6e7c30097955f159524c0f5e67)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a83a4fa6e7c30097955f159524c0f5e67"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStatusNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a511079969d25b251da604217ecc36011)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a511079969d25b251da604217ecc36011"></a>

Checks whether Status_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1abaffe44130f9b08fa14d0c1269c5287e)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1abaffe44130f9b08fa14d0c1269c5287e"></a>

Gets the value of Message_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a3e7d812ec870be8d19809c50b9628430)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a3e7d812ec870be8d19809c50b9628430"></a>

Gets the value of Message_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a53bc19ed6c0b0bdca0541eb0782235b5)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a53bc19ed6c0b0bdca0541eb0782235b5"></a>

Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a3172b15bb78182ebadb2323e7a89ddeb)`(FString & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a3172b15bb78182ebadb2323e7a89ddeb"></a>

Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a94a4ad24161298932c63aec0f2fd3267)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a94a4ad24161298932c63aec0f2fd3267"></a>

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1adc84dcfa92716700d63f0f479babc55b)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1adc84dcfa92716700d63f0f479babc55b"></a>

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a5971b6041685cf7f0201025287bc3a9d)`(const FString & NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5971b6041685cf7f0201025287bc3a9d"></a>

Sets the value of Message_Optional and also sets Message_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1a1244ef69c0623fcceaea343c04a5640c)`(FString && NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a1244ef69c0623fcceaea343c04a5640c"></a>

Sets the value of Message_Optional and also sets Message_IsSet to true using move semantics.

#### `public inline void `[`ClearMessage`](#structFRHAPI__PlayerPresenceUpdateSelf_1ac3536ed08f0b68992660d8a94300cdae)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ac3536ed08f0b68992660d8a94300cdae"></a>

Clears the value of Message_Optional and sets Message_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMessageToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa7d74201e1429771883f19ded6da541e)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aa7d74201e1429771883f19ded6da541e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMessageNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a1cf1a8dd7410c5c9fa4e56e12d61e450)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a1cf1a8dd7410c5c9fa4e56e12d61e450"></a>

Checks whether Message_Optional is set to null.

#### `public inline FORCEINLINE bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1af9bf998ff93d09027243cf5b1745416b)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1af9bf998ff93d09027243cf5b1745416b"></a>

Gets the value of DoNotDisturb_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a0f78fb7e6072f1823e57036eea233fd0)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a0f78fb7e6072f1823e57036eea233fd0"></a>

Gets the value of DoNotDisturb_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a4acbf06a4787d2ad8de36ea5dc174dd2)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a4acbf06a4787d2ad8de36ea5dc174dd2"></a>

Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad61fcc16ee8780c2ea57ba7044173dd7)`(bool & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ad61fcc16ee8780c2ea57ba7044173dd7"></a>

Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1af06899bc72653b682a9917ae3135a5b2)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1af06899bc72653b682a9917ae3135a5b2"></a>

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa891dfe4157a4abbc9f9e461be67f7b1)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aa891dfe4157a4abbc9f9e461be67f7b1"></a>

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1ace5bf268c575930784fc5398057156f3)`(const bool & NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ace5bf268c575930784fc5398057156f3"></a>

Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1aed2ddd8fcc5f6304f498f68c826bbb03)`(bool && NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aed2ddd8fcc5f6304f498f68c826bbb03"></a>

Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true using move semantics.

#### `public inline void `[`ClearDoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a356ccb6525ec805cc9339882b4092807)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a356ccb6525ec805cc9339882b4092807"></a>

Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_DoNotDisturb`](#structFRHAPI__PlayerPresenceUpdateSelf_1a79ecd71674ac6df2ca2f61935e7fa50d)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a79ecd71674ac6df2ca2f61935e7fa50d"></a>

Returns the default value of DoNotDisturb.

#### `public inline FORCEINLINE void `[`SetDoNotDisturbToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a40f068ccc6f5faad4c8cc28c690753f8)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a40f068ccc6f5faad4c8cc28c690753f8"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDoNotDisturbNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1af4bce3109b7b5f4e2a43037eb4fb711c)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1af4bce3109b7b5f4e2a43037eb4fb711c"></a>

Checks whether DoNotDisturb_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae947d5c395da3356a3d51a4e924e12cc)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae947d5c395da3356a3d51a4e924e12cc"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6098eec0dbcc65555606a3a4badb505c)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a6098eec0dbcc65555606a3a4badb505c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6fe8e72fb7203dae26e6a8db80c5d230)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a6fe8e72fb7203dae26e6a8db80c5d230"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1a05e516b060f77eeaa3fb24093342b143)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a05e516b060f77eeaa3fb24093342b143"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ab694690ff25bb84923f5543c9c9f6395)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ab694690ff25bb84923f5543c9c9f6395"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae8d36f4c32f52af34d75b300283b0d57)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae8d36f4c32f52af34d75b300283b0d57"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1af5cd05a5180113c679f067b2030760db)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1af5cd05a5180113c679f067b2030760db"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1aa58c73958166eb2b2773a87e7d5f13dc)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aa58c73958166eb2b2773a87e7d5f13dc"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerPresenceUpdateSelf_1ae1e307673be664cb960223d05a50a70e)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae1e307673be664cb960223d05a50a70e"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1ad74783702904502e4516e7e501c29d85)`()` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ad74783702904502e4516e7e501c29d85"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__PlayerPresenceUpdateSelf_1a6c3dfcf2cae71c12f24a0a365e71ac86)`() const` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a6c3dfcf2cae71c12f24a0a365e71ac86"></a>

Checks whether CustomData_Optional is set to null.

