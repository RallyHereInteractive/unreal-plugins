---
title: RHAPI_LoginCompleteMessage
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LoginCompleteMessage`](#structFRHAPI__LoginCompleteMessage) | Error message for when a user has not agreed to the required agreements (EULA, TOS, or Privacy Policy), or was denied login for restrictions.

## struct `FRHAPI_LoginCompleteMessage` <a id="structFRHAPI__LoginCompleteMessage"></a>

```
struct FRHAPI_LoginCompleteMessage
  : public FRHAPI_Model
```

Error message for when a user has not agreed to the required agreements (EULA, TOS, or Privacy Policy), or was denied login for restrictions.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`AuthSuccess_Optional`](#structFRHAPI__LoginCompleteMessage_1a6cfbd7777074e6d0278d04eb8e74bacd) | 
`public bool `[`AuthSuccess_IsSet`](#structFRHAPI__LoginCompleteMessage_1a88e2cf2db0dc52190924556c74ab0e4d) | true if AuthSuccess_Optional has been set to a value
`public FString `[`ErrorCode`](#structFRHAPI__LoginCompleteMessage_1af81d0b61703bc1cf0128fe27c1d9bac0) | 
`public FString `[`Desc`](#structFRHAPI__LoginCompleteMessage_1a5fc8e8aa5fc8cad86c63d3c97935c4cc) | 
`public bool `[`NeedsEula_Optional`](#structFRHAPI__LoginCompleteMessage_1ae5c4897c5e4abcb3ddf63b2d13fe384b) | Whether the user needs to accept the End User License Agreement.
`public bool `[`NeedsEula_IsSet`](#structFRHAPI__LoginCompleteMessage_1a043911cd1cb3b0d789fc464d9f8269b1) | true if NeedsEula_Optional has been set to a value
`public bool `[`NeedsTos_Optional`](#structFRHAPI__LoginCompleteMessage_1abce778c1bda67568dfcd202da5da1aa9) | Whether the user needs to accept the Terms of Service.
`public bool `[`NeedsTos_IsSet`](#structFRHAPI__LoginCompleteMessage_1a0f3a9dbfa8fdc823351f9b20f9b218df) | true if NeedsTos_Optional has been set to a value
`public bool `[`NeedsPrivacyPolicy_Optional`](#structFRHAPI__LoginCompleteMessage_1a018b0b33f3c4885546d55cb957d55588) | Whether the user needs to accept the Privacy Policy.
`public bool `[`NeedsPrivacyPolicy_IsSet`](#structFRHAPI__LoginCompleteMessage_1a8f0c5042ed95596bae10e90270b30fbd) | true if NeedsPrivacyPolicy_Optional has been set to a value
`public TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > `[`Restrictions_Optional`](#structFRHAPI__LoginCompleteMessage_1ab56411deacdb40477160979029ebda0c) | Restrictions which prevented login. Does NOT include unrelated restrictions that didn't prevent login.
`public bool `[`Restrictions_IsSet`](#structFRHAPI__LoginCompleteMessage_1a94a4a9f67689083d419312ab9645e568) | true if Restrictions_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LoginCompleteMessage_1a78b456096573dd5994d6321bafa3b939)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LoginCompleteMessage_1a3d26ca60a8057a47a4c5333167b75d20)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a7060732442de12bc3d03ced2142d3b9e)`()` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1ab20d1daf80c44ca891f11784fba3d98e)`() const` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1ac7393ff74d6a4dda8ebf0a8d9a7e9bcb)`(const bool & DefaultValue) const` | Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a54777d8eddb6b23228910a5d312a2a1b)`(bool & OutValue) const` | Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__LoginCompleteMessage_1a73439f39686a3445eaf65eba7d83fdcb)`()` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__LoginCompleteMessage_1ac45bbd6c25c4f33a51dfc5930cb9dff8)`() const` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a8c4a1d31d3a297a59c0a94f64ce79889)`(const bool & NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.
`public inline FORCEINLINE void `[`SetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1ad72714800a1be8e5031c5f7c0bc0ca69)`(bool && NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics.
`public inline void `[`ClearAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1aef4445d2e19b346a847f42b19c17ab2b)`()` | Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a80855c8f8581ea51180d4df42d286905)`()` | Returns the default value of AuthSuccess.
`public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__LoginCompleteMessage_1a361fe65d786472a6867eef0a8f060a3e)`()` | Gets the value of ErrorCode.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__LoginCompleteMessage_1ac5922f543187e05213596d66e4d5a6e2)`() const` | Gets the value of ErrorCode.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__LoginCompleteMessage_1aef64c413f0a5cbf86e05bdbf8c091c4e)`(const FString & NewValue)` | Sets the value of ErrorCode.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__LoginCompleteMessage_1add1440c00aeb81504588d5ce11e31085)`(FString && NewValue)` | Sets the value of ErrorCode using move semantics.
`public inline FORCEINLINE FString & `[`GetDesc`](#structFRHAPI__LoginCompleteMessage_1a2b7da5d725fa9c982df791d434304e11)`()` | Gets the value of Desc.
`public inline FORCEINLINE const FString & `[`GetDesc`](#structFRHAPI__LoginCompleteMessage_1a61d69eeb3be7444a6f4ae9ebaa59a48d)`() const` | Gets the value of Desc.
`public inline FORCEINLINE void `[`SetDesc`](#structFRHAPI__LoginCompleteMessage_1a0e154e6e675fd9c1cca4cde372b74410)`(const FString & NewValue)` | Sets the value of Desc.
`public inline FORCEINLINE void `[`SetDesc`](#structFRHAPI__LoginCompleteMessage_1aeb60e5e5b55e6de2913f29560e9786a1)`(FString && NewValue)` | Sets the value of Desc using move semantics.
`public inline FORCEINLINE bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1ab97531b3399455689755fab4a7981f58)`()` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a79d0bfdfa8c04d7f9d1317272e7717dc)`() const` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a31ecb5f658b9c201f420ee42371dad4c)`(const bool & DefaultValue) const` | Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1abc78755a41490db0ed4f0bcde97a6f60)`(bool & OutValue) const` | Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__LoginCompleteMessage_1a264c519ffbe59cf9e3bec1022537f49a)`()` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__LoginCompleteMessage_1a0084c247c15a9d49e6801c6014a0dc87)`() const` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a93a892394265f8551ee989a176fbe357)`(const bool & NewValue)` | Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.
`public inline FORCEINLINE void `[`SetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1ab630c60a0b7e9e32262bcb5de716cb5a)`(bool && NewValue)` | Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true using move semantics.
`public inline void `[`ClearNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a0c61f9d799d83d5dfb8307c01bcfc616)`()` | Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_NeedsEula`](#structFRHAPI__LoginCompleteMessage_1ad244438bcb9b51f66b7f7d07f2dc2909)`()` | Returns the default value of NeedsEula.
`public inline FORCEINLINE bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a0c0bb4be23550316d6f591dfa2eea91c)`()` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1ad9ec5103cfee790b0c676ff0cf88a609)`() const` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1aa11f5a54a5b563f486b62a993d926f17)`(const bool & DefaultValue) const` | Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a28ee9f28c48d84c5bd28a3eb52bd6727)`(bool & OutValue) const` | Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetNeedsTosOrNull`](#structFRHAPI__LoginCompleteMessage_1af3dce6b6e2b196905aaa8d90e6d65dff)`()` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__LoginCompleteMessage_1a1a476f6d68deb7b8a7f39251b42b6dbb)`() const` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a231d8ed7938877c6ab16341ceab04373)`(const bool & NewValue)` | Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.
`public inline FORCEINLINE void `[`SetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1ae03368355dc15aed48831207008c3cf7)`(bool && NewValue)` | Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true using move semantics.
`public inline void `[`ClearNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a1e69ee5855af3a63bfefbe5fbcb09807)`()` | Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_NeedsTos`](#structFRHAPI__LoginCompleteMessage_1a1df18ce80547a693325b7c48ccc17fdb)`()` | Returns the default value of NeedsTos.
`public inline FORCEINLINE bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a2ee2c10442eba4bb3959b4103b1cfc3c)`()` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1ae963a7d8ad99eab6c913224cfbbe7373)`() const` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1aeb9b83685638414098d03e4ecf1c25dc)`(const bool & DefaultValue) const` | Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a2cd14122ddb7df2291ed8797c5a1f905)`(bool & OutValue) const` | Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__LoginCompleteMessage_1ab771c72020e4ee615dc7fbab92691938)`()` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__LoginCompleteMessage_1af423aeb6a84c8dd696a56dde2c30576a)`() const` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a2209f4e126f6716131e2cc805c354789)`(const bool & NewValue)` | Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.
`public inline FORCEINLINE void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1afda7a3ae66249582d5a3f6d5039369ab)`(bool && NewValue)` | Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true using move semantics.
`public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a12086573140d5f66835a323611e80f61)`()` | Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_NeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a4a87a668cbb046bbc7c6c81008baa45b)`()` | Returns the default value of NeedsPrivacyPolicy.
`public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1a360dc92d430ba4c97b2286f807f6759e)`()` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1ac1797e322081643f3fb915f9ceba979f)`() const` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1abd4c8d5e18143b9b79114ec1cdf2eb56)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` | Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1ad7d1f4aafc19516afc5c612299cf2ad6)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` | Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginCompleteMessage_1a5789e8cf796b537b2dc62c1ab6301f0e)`()` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginCompleteMessage_1ae5c6ac48fc8c11e16b76de50e26b9012)`() const` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__LoginCompleteMessage_1adc32b9d556d0e92100441c2471e2db2d)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.
`public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__LoginCompleteMessage_1ab61a3225c28dcb6663c3b0f4a1b7ba67)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.
`public inline void `[`ClearRestrictions`](#structFRHAPI__LoginCompleteMessage_1a940fc573235e0c2c6ed1b9f43306d3a0)`()` | Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

### Members

#### `public bool `[`AuthSuccess_Optional`](#structFRHAPI__LoginCompleteMessage_1a6cfbd7777074e6d0278d04eb8e74bacd) <a id="structFRHAPI__LoginCompleteMessage_1a6cfbd7777074e6d0278d04eb8e74bacd"></a>

#### `public bool `[`AuthSuccess_IsSet`](#structFRHAPI__LoginCompleteMessage_1a88e2cf2db0dc52190924556c74ab0e4d) <a id="structFRHAPI__LoginCompleteMessage_1a88e2cf2db0dc52190924556c74ab0e4d"></a>

true if AuthSuccess_Optional has been set to a value

#### `public FString `[`ErrorCode`](#structFRHAPI__LoginCompleteMessage_1af81d0b61703bc1cf0128fe27c1d9bac0) <a id="structFRHAPI__LoginCompleteMessage_1af81d0b61703bc1cf0128fe27c1d9bac0"></a>

#### `public FString `[`Desc`](#structFRHAPI__LoginCompleteMessage_1a5fc8e8aa5fc8cad86c63d3c97935c4cc) <a id="structFRHAPI__LoginCompleteMessage_1a5fc8e8aa5fc8cad86c63d3c97935c4cc"></a>

#### `public bool `[`NeedsEula_Optional`](#structFRHAPI__LoginCompleteMessage_1ae5c4897c5e4abcb3ddf63b2d13fe384b) <a id="structFRHAPI__LoginCompleteMessage_1ae5c4897c5e4abcb3ddf63b2d13fe384b"></a>

Whether the user needs to accept the End User License Agreement.

#### `public bool `[`NeedsEula_IsSet`](#structFRHAPI__LoginCompleteMessage_1a043911cd1cb3b0d789fc464d9f8269b1) <a id="structFRHAPI__LoginCompleteMessage_1a043911cd1cb3b0d789fc464d9f8269b1"></a>

true if NeedsEula_Optional has been set to a value

#### `public bool `[`NeedsTos_Optional`](#structFRHAPI__LoginCompleteMessage_1abce778c1bda67568dfcd202da5da1aa9) <a id="structFRHAPI__LoginCompleteMessage_1abce778c1bda67568dfcd202da5da1aa9"></a>

Whether the user needs to accept the Terms of Service.

#### `public bool `[`NeedsTos_IsSet`](#structFRHAPI__LoginCompleteMessage_1a0f3a9dbfa8fdc823351f9b20f9b218df) <a id="structFRHAPI__LoginCompleteMessage_1a0f3a9dbfa8fdc823351f9b20f9b218df"></a>

true if NeedsTos_Optional has been set to a value

#### `public bool `[`NeedsPrivacyPolicy_Optional`](#structFRHAPI__LoginCompleteMessage_1a018b0b33f3c4885546d55cb957d55588) <a id="structFRHAPI__LoginCompleteMessage_1a018b0b33f3c4885546d55cb957d55588"></a>

Whether the user needs to accept the Privacy Policy.

#### `public bool `[`NeedsPrivacyPolicy_IsSet`](#structFRHAPI__LoginCompleteMessage_1a8f0c5042ed95596bae10e90270b30fbd) <a id="structFRHAPI__LoginCompleteMessage_1a8f0c5042ed95596bae10e90270b30fbd"></a>

true if NeedsPrivacyPolicy_Optional has been set to a value

#### `public TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > `[`Restrictions_Optional`](#structFRHAPI__LoginCompleteMessage_1ab56411deacdb40477160979029ebda0c) <a id="structFRHAPI__LoginCompleteMessage_1ab56411deacdb40477160979029ebda0c"></a>

Restrictions which prevented login. Does NOT include unrelated restrictions that didn't prevent login.

#### `public bool `[`Restrictions_IsSet`](#structFRHAPI__LoginCompleteMessage_1a94a4a9f67689083d419312ab9645e568) <a id="structFRHAPI__LoginCompleteMessage_1a94a4a9f67689083d419312ab9645e568"></a>

true if Restrictions_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__LoginCompleteMessage_1a78b456096573dd5994d6321bafa3b939)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LoginCompleteMessage_1a78b456096573dd5994d6321bafa3b939"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LoginCompleteMessage_1a3d26ca60a8057a47a4c5333167b75d20)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LoginCompleteMessage_1a3d26ca60a8057a47a4c5333167b75d20"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a7060732442de12bc3d03ced2142d3b9e)`()` <a id="structFRHAPI__LoginCompleteMessage_1a7060732442de12bc3d03ced2142d3b9e"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1ab20d1daf80c44ca891f11784fba3d98e)`() const` <a id="structFRHAPI__LoginCompleteMessage_1ab20d1daf80c44ca891f11784fba3d98e"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1ac7393ff74d6a4dda8ebf0a8d9a7e9bcb)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginCompleteMessage_1ac7393ff74d6a4dda8ebf0a8d9a7e9bcb"></a>

Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a54777d8eddb6b23228910a5d312a2a1b)`(bool & OutValue) const` <a id="structFRHAPI__LoginCompleteMessage_1a54777d8eddb6b23228910a5d312a2a1b"></a>

Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__LoginCompleteMessage_1a73439f39686a3445eaf65eba7d83fdcb)`()` <a id="structFRHAPI__LoginCompleteMessage_1a73439f39686a3445eaf65eba7d83fdcb"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__LoginCompleteMessage_1ac45bbd6c25c4f33a51dfc5930cb9dff8)`() const` <a id="structFRHAPI__LoginCompleteMessage_1ac45bbd6c25c4f33a51dfc5930cb9dff8"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a8c4a1d31d3a297a59c0a94f64ce79889)`(const bool & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a8c4a1d31d3a297a59c0a94f64ce79889"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1ad72714800a1be8e5031c5f7c0bc0ca69)`(bool && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1ad72714800a1be8e5031c5f7c0bc0ca69"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics.

#### `public inline void `[`ClearAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1aef4445d2e19b346a847f42b19c17ab2b)`()` <a id="structFRHAPI__LoginCompleteMessage_1aef4445d2e19b346a847f42b19c17ab2b"></a>

Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a80855c8f8581ea51180d4df42d286905)`()` <a id="structFRHAPI__LoginCompleteMessage_1a80855c8f8581ea51180d4df42d286905"></a>

Returns the default value of AuthSuccess.

#### `public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__LoginCompleteMessage_1a361fe65d786472a6867eef0a8f060a3e)`()` <a id="structFRHAPI__LoginCompleteMessage_1a361fe65d786472a6867eef0a8f060a3e"></a>

Gets the value of ErrorCode.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__LoginCompleteMessage_1ac5922f543187e05213596d66e4d5a6e2)`() const` <a id="structFRHAPI__LoginCompleteMessage_1ac5922f543187e05213596d66e4d5a6e2"></a>

Gets the value of ErrorCode.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__LoginCompleteMessage_1aef64c413f0a5cbf86e05bdbf8c091c4e)`(const FString & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1aef64c413f0a5cbf86e05bdbf8c091c4e"></a>

Sets the value of ErrorCode.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__LoginCompleteMessage_1add1440c00aeb81504588d5ce11e31085)`(FString && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1add1440c00aeb81504588d5ce11e31085"></a>

Sets the value of ErrorCode using move semantics.

#### `public inline FORCEINLINE FString & `[`GetDesc`](#structFRHAPI__LoginCompleteMessage_1a2b7da5d725fa9c982df791d434304e11)`()` <a id="structFRHAPI__LoginCompleteMessage_1a2b7da5d725fa9c982df791d434304e11"></a>

Gets the value of Desc.

#### `public inline FORCEINLINE const FString & `[`GetDesc`](#structFRHAPI__LoginCompleteMessage_1a61d69eeb3be7444a6f4ae9ebaa59a48d)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a61d69eeb3be7444a6f4ae9ebaa59a48d"></a>

Gets the value of Desc.

#### `public inline FORCEINLINE void `[`SetDesc`](#structFRHAPI__LoginCompleteMessage_1a0e154e6e675fd9c1cca4cde372b74410)`(const FString & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a0e154e6e675fd9c1cca4cde372b74410"></a>

Sets the value of Desc.

#### `public inline FORCEINLINE void `[`SetDesc`](#structFRHAPI__LoginCompleteMessage_1aeb60e5e5b55e6de2913f29560e9786a1)`(FString && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1aeb60e5e5b55e6de2913f29560e9786a1"></a>

Sets the value of Desc using move semantics.

#### `public inline FORCEINLINE bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1ab97531b3399455689755fab4a7981f58)`()` <a id="structFRHAPI__LoginCompleteMessage_1ab97531b3399455689755fab4a7981f58"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a79d0bfdfa8c04d7f9d1317272e7717dc)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a79d0bfdfa8c04d7f9d1317272e7717dc"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a31ecb5f658b9c201f420ee42371dad4c)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginCompleteMessage_1a31ecb5f658b9c201f420ee42371dad4c"></a>

Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1abc78755a41490db0ed4f0bcde97a6f60)`(bool & OutValue) const` <a id="structFRHAPI__LoginCompleteMessage_1abc78755a41490db0ed4f0bcde97a6f60"></a>

Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__LoginCompleteMessage_1a264c519ffbe59cf9e3bec1022537f49a)`()` <a id="structFRHAPI__LoginCompleteMessage_1a264c519ffbe59cf9e3bec1022537f49a"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__LoginCompleteMessage_1a0084c247c15a9d49e6801c6014a0dc87)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a0084c247c15a9d49e6801c6014a0dc87"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a93a892394265f8551ee989a176fbe357)`(const bool & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a93a892394265f8551ee989a176fbe357"></a>

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1ab630c60a0b7e9e32262bcb5de716cb5a)`(bool && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1ab630c60a0b7e9e32262bcb5de716cb5a"></a>

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a0c61f9d799d83d5dfb8307c01bcfc616)`()` <a id="structFRHAPI__LoginCompleteMessage_1a0c61f9d799d83d5dfb8307c01bcfc616"></a>

Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_NeedsEula`](#structFRHAPI__LoginCompleteMessage_1ad244438bcb9b51f66b7f7d07f2dc2909)`()` <a id="structFRHAPI__LoginCompleteMessage_1ad244438bcb9b51f66b7f7d07f2dc2909"></a>

Returns the default value of NeedsEula.

#### `public inline FORCEINLINE bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a0c0bb4be23550316d6f591dfa2eea91c)`()` <a id="structFRHAPI__LoginCompleteMessage_1a0c0bb4be23550316d6f591dfa2eea91c"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1ad9ec5103cfee790b0c676ff0cf88a609)`() const` <a id="structFRHAPI__LoginCompleteMessage_1ad9ec5103cfee790b0c676ff0cf88a609"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1aa11f5a54a5b563f486b62a993d926f17)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginCompleteMessage_1aa11f5a54a5b563f486b62a993d926f17"></a>

Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a28ee9f28c48d84c5bd28a3eb52bd6727)`(bool & OutValue) const` <a id="structFRHAPI__LoginCompleteMessage_1a28ee9f28c48d84c5bd28a3eb52bd6727"></a>

Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetNeedsTosOrNull`](#structFRHAPI__LoginCompleteMessage_1af3dce6b6e2b196905aaa8d90e6d65dff)`()` <a id="structFRHAPI__LoginCompleteMessage_1af3dce6b6e2b196905aaa8d90e6d65dff"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__LoginCompleteMessage_1a1a476f6d68deb7b8a7f39251b42b6dbb)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a1a476f6d68deb7b8a7f39251b42b6dbb"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a231d8ed7938877c6ab16341ceab04373)`(const bool & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a231d8ed7938877c6ab16341ceab04373"></a>

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1ae03368355dc15aed48831207008c3cf7)`(bool && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1ae03368355dc15aed48831207008c3cf7"></a>

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a1e69ee5855af3a63bfefbe5fbcb09807)`()` <a id="structFRHAPI__LoginCompleteMessage_1a1e69ee5855af3a63bfefbe5fbcb09807"></a>

Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_NeedsTos`](#structFRHAPI__LoginCompleteMessage_1a1df18ce80547a693325b7c48ccc17fdb)`()` <a id="structFRHAPI__LoginCompleteMessage_1a1df18ce80547a693325b7c48ccc17fdb"></a>

Returns the default value of NeedsTos.

#### `public inline FORCEINLINE bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a2ee2c10442eba4bb3959b4103b1cfc3c)`()` <a id="structFRHAPI__LoginCompleteMessage_1a2ee2c10442eba4bb3959b4103b1cfc3c"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1ae963a7d8ad99eab6c913224cfbbe7373)`() const` <a id="structFRHAPI__LoginCompleteMessage_1ae963a7d8ad99eab6c913224cfbbe7373"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1aeb9b83685638414098d03e4ecf1c25dc)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginCompleteMessage_1aeb9b83685638414098d03e4ecf1c25dc"></a>

Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a2cd14122ddb7df2291ed8797c5a1f905)`(bool & OutValue) const` <a id="structFRHAPI__LoginCompleteMessage_1a2cd14122ddb7df2291ed8797c5a1f905"></a>

Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__LoginCompleteMessage_1ab771c72020e4ee615dc7fbab92691938)`()` <a id="structFRHAPI__LoginCompleteMessage_1ab771c72020e4ee615dc7fbab92691938"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__LoginCompleteMessage_1af423aeb6a84c8dd696a56dde2c30576a)`() const` <a id="structFRHAPI__LoginCompleteMessage_1af423aeb6a84c8dd696a56dde2c30576a"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a2209f4e126f6716131e2cc805c354789)`(const bool & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a2209f4e126f6716131e2cc805c354789"></a>

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1afda7a3ae66249582d5a3f6d5039369ab)`(bool && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1afda7a3ae66249582d5a3f6d5039369ab"></a>

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a12086573140d5f66835a323611e80f61)`()` <a id="structFRHAPI__LoginCompleteMessage_1a12086573140d5f66835a323611e80f61"></a>

Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_NeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a4a87a668cbb046bbc7c6c81008baa45b)`()` <a id="structFRHAPI__LoginCompleteMessage_1a4a87a668cbb046bbc7c6c81008baa45b"></a>

Returns the default value of NeedsPrivacyPolicy.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1a360dc92d430ba4c97b2286f807f6759e)`()` <a id="structFRHAPI__LoginCompleteMessage_1a360dc92d430ba4c97b2286f807f6759e"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1ac1797e322081643f3fb915f9ceba979f)`() const` <a id="structFRHAPI__LoginCompleteMessage_1ac1797e322081643f3fb915f9ceba979f"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1abd4c8d5e18143b9b79114ec1cdf2eb56)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` <a id="structFRHAPI__LoginCompleteMessage_1abd4c8d5e18143b9b79114ec1cdf2eb56"></a>

Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1ad7d1f4aafc19516afc5c612299cf2ad6)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` <a id="structFRHAPI__LoginCompleteMessage_1ad7d1f4aafc19516afc5c612299cf2ad6"></a>

Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginCompleteMessage_1a5789e8cf796b537b2dc62c1ab6301f0e)`()` <a id="structFRHAPI__LoginCompleteMessage_1a5789e8cf796b537b2dc62c1ab6301f0e"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginCompleteMessage_1ae5c6ac48fc8c11e16b76de50e26b9012)`() const` <a id="structFRHAPI__LoginCompleteMessage_1ae5c6ac48fc8c11e16b76de50e26b9012"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__LoginCompleteMessage_1adc32b9d556d0e92100441c2471e2db2d)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1adc32b9d556d0e92100441c2471e2db2d"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRestrictions`](#structFRHAPI__LoginCompleteMessage_1ab61a3225c28dcb6663c3b0f4a1b7ba67)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1ab61a3225c28dcb6663c3b0f4a1b7ba67"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.

#### `public inline void `[`ClearRestrictions`](#structFRHAPI__LoginCompleteMessage_1a940fc573235e0c2c6ed1b9f43306d3a0)`()` <a id="structFRHAPI__LoginCompleteMessage_1a940fc573235e0c2c6ed1b9f43306d3a0"></a>

Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

