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
`public inline bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a9809f1bc0d2d408f81062377e2887f28)`()` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a719b2b815971de6246582af61d8d89ba)`() const` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1adc787e590c106d1764e5a22ed309ccdd)`(const bool & DefaultValue) const` | Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a7c0fd6a50d5276077475c0ae2d8ea3b2)`(bool & OutValue) const` | Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__LoginCompleteMessage_1a1be720c47eb958d5edb90ef1364edc89)`()` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__LoginCompleteMessage_1a58ced3259fb15b14fe20f22212630d54)`() const` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a67a737bd8b2465fd4443103d56fa1cd8)`(const bool & NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.
`public inline void `[`SetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a73336a5f2e387c33155a9494ab1c1839)`(bool && NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics.
`public inline void `[`ClearAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1aef4445d2e19b346a847f42b19c17ab2b)`()` | Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.
`public inline bool `[`IsAuthSuccessSet`](#structFRHAPI__LoginCompleteMessage_1a256d7e6dcd6e90de043d097640ebb18c)`() const` | Checks whether AuthSuccess_Optional has been set.
`public inline bool `[`IsAuthSuccessDefaultValue`](#structFRHAPI__LoginCompleteMessage_1a39c9c6dac57657b163dc431964c5d490)`() const` | Returns true if AuthSuccess_Optional is set and matches the default value.
`public inline void `[`SetAuthSuccessToDefault`](#structFRHAPI__LoginCompleteMessage_1af72919e844f49cf68f2d4547d874cec3)`()` | Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.
`public inline FString & `[`GetErrorCode`](#structFRHAPI__LoginCompleteMessage_1a46e4f5eabb028299d5e4989ed11451a9)`()` | Gets the value of ErrorCode.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__LoginCompleteMessage_1ab45bbef87a4861200f2103029d676de1)`() const` | Gets the value of ErrorCode.
`public inline void `[`SetErrorCode`](#structFRHAPI__LoginCompleteMessage_1a22f959224fe6a0e7486d9d654ddd6c72)`(const FString & NewValue)` | Sets the value of ErrorCode.
`public inline void `[`SetErrorCode`](#structFRHAPI__LoginCompleteMessage_1a8597410b6b8d3353b2c9986091dd6be4)`(FString && NewValue)` | Sets the value of ErrorCode using move semantics.
`public inline FString & `[`GetDesc`](#structFRHAPI__LoginCompleteMessage_1a08f53a011f976370336bb9167e05325e)`()` | Gets the value of Desc.
`public inline const FString & `[`GetDesc`](#structFRHAPI__LoginCompleteMessage_1adbf613b9c692b6025f2b60ca38297676)`() const` | Gets the value of Desc.
`public inline void `[`SetDesc`](#structFRHAPI__LoginCompleteMessage_1a234e8443dde604ecf23f456b7bdb7eb2)`(const FString & NewValue)` | Sets the value of Desc.
`public inline void `[`SetDesc`](#structFRHAPI__LoginCompleteMessage_1af0a5d2449139d730e2775c2a31f588e8)`(FString && NewValue)` | Sets the value of Desc using move semantics.
`public inline bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a87ccfd2a2656e9675ec34f20accdd028)`()` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a6795cccfd41241f0b38f98c0cfc177df)`() const` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a1b66f834bb09df49c2d33e98521de9b5)`(const bool & DefaultValue) const` | Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a67b8ea5a3f5e7c2e2e39d0ab2bee3bd8)`(bool & OutValue) const` | Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__LoginCompleteMessage_1af69b437cf0b94a141145049eca656a9b)`()` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__LoginCompleteMessage_1abbf280e49fa5dc174fecef57fe27ceda)`() const` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a1a3e1d6e1885eaaaeeabe0a73d701ea4)`(const bool & NewValue)` | Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.
`public inline void `[`SetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a60f18fb77d5444cfa96167312344fcc3)`(bool && NewValue)` | Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true using move semantics.
`public inline void `[`ClearNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a0c61f9d799d83d5dfb8307c01bcfc616)`()` | Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.
`public inline bool `[`IsNeedsEulaSet`](#structFRHAPI__LoginCompleteMessage_1adc9c440081b89175592ea18ebfc655e9)`() const` | Checks whether NeedsEula_Optional has been set.
`public inline bool `[`IsNeedsEulaDefaultValue`](#structFRHAPI__LoginCompleteMessage_1a4814ac2c0efb4f9cb9e6918b0769adb6)`() const` | Returns true if NeedsEula_Optional is set and matches the default value.
`public inline void `[`SetNeedsEulaToDefault`](#structFRHAPI__LoginCompleteMessage_1ad20d63f985c10728d416b378890cbc4e)`()` | Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.
`public inline bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a86dfc9948d1332065a17d391155726fe)`()` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a914912cce7fd7cdd3945e5057cf5b428)`() const` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a45e57818eead244bec63ee1337008133)`(const bool & DefaultValue) const` | Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a3a11763fd6a404cc8c26740fc0663084)`(bool & OutValue) const` | Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsTosOrNull`](#structFRHAPI__LoginCompleteMessage_1ab01ca6f95edb6d537eebc0afc1b44c3f)`()` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__LoginCompleteMessage_1a5b9a65b858a5f7d52cd16d1201302fd1)`() const` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a50e0209ceb89714869df2668749beae3)`(const bool & NewValue)` | Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.
`public inline void `[`SetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a3e2094aa1409e91baa2b2f5610e6f7a4)`(bool && NewValue)` | Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true using move semantics.
`public inline void `[`ClearNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a1e69ee5855af3a63bfefbe5fbcb09807)`()` | Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.
`public inline bool `[`IsNeedsTosSet`](#structFRHAPI__LoginCompleteMessage_1ae6c4aab71cfb9296ee3e520e242f8a0d)`() const` | Checks whether NeedsTos_Optional has been set.
`public inline bool `[`IsNeedsTosDefaultValue`](#structFRHAPI__LoginCompleteMessage_1a3f92a04d025b1fe7fd4e6ec29b4782b7)`() const` | Returns true if NeedsTos_Optional is set and matches the default value.
`public inline void `[`SetNeedsTosToDefault`](#structFRHAPI__LoginCompleteMessage_1a3925d11c96697e96b30b549712de13db)`()` | Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.
`public inline bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a3efed067c01ac2682bf3879f61811644)`()` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a2290f0a51eb13aa93610712351ee5f38)`() const` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a72b0e5c67de5b49d66139cb7f8a39db3)`(const bool & DefaultValue) const` | Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1aafb92e8bed82283279463d90785e3cc4)`(bool & OutValue) const` | Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__LoginCompleteMessage_1ae448341812b88682daf373c45adc8a73)`()` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__LoginCompleteMessage_1a090b1a971f5513745925df4c271608fe)`() const` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a58410b4ae2881875a7e9fa4e7b168ab2)`(const bool & NewValue)` | Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.
`public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a0ceec7395b812772aff740c2ce7f93dc)`(bool && NewValue)` | Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true using move semantics.
`public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a12086573140d5f66835a323611e80f61)`()` | Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.
`public inline bool `[`IsNeedsPrivacyPolicySet`](#structFRHAPI__LoginCompleteMessage_1acbc9451e0aa31f942d62c5d69129c013)`() const` | Checks whether NeedsPrivacyPolicy_Optional has been set.
`public inline bool `[`IsNeedsPrivacyPolicyDefaultValue`](#structFRHAPI__LoginCompleteMessage_1a725e88489ad59d69ad4d235f9c5e0d9e)`() const` | Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.
`public inline void `[`SetNeedsPrivacyPolicyToDefault`](#structFRHAPI__LoginCompleteMessage_1accb99ad4a16c18541e12fba10a7687a0)`()` | Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.
`public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1a393047335826a0e9d888a968232f0e36)`()` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1add48870633ff573ab98acfb92fc5b263)`() const` | Gets the value of Restrictions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1ae0446c0d1f2098a347a0a137a10b3ac6)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` | Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1a0a885f9433c986168b164b24f6123d6b)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` | Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginCompleteMessage_1acceda2d4b198dd834815518aec057c6c)`()` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginCompleteMessage_1ac7d8f1fc568bb826a5a0c684afbc0b7e)`() const` | Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRestrictions`](#structFRHAPI__LoginCompleteMessage_1afaf759587e1e024740ceee072f58984d)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.
`public inline void `[`SetRestrictions`](#structFRHAPI__LoginCompleteMessage_1a738cbd0b70b6a9dabedb68a2a579a0a8)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` | Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.
`public inline void `[`ClearRestrictions`](#structFRHAPI__LoginCompleteMessage_1a940fc573235e0c2c6ed1b9f43306d3a0)`()` | Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.
`public inline bool `[`IsRestrictionsSet`](#structFRHAPI__LoginCompleteMessage_1abc592ea4852ae5143cbb895e43f15aab)`() const` | Checks whether Restrictions_Optional has been set.

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

#### `public inline bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a9809f1bc0d2d408f81062377e2887f28)`()` <a id="structFRHAPI__LoginCompleteMessage_1a9809f1bc0d2d408f81062377e2887f28"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a719b2b815971de6246582af61d8d89ba)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a719b2b815971de6246582af61d8d89ba"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1adc787e590c106d1764e5a22ed309ccdd)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginCompleteMessage_1adc787e590c106d1764e5a22ed309ccdd"></a>

Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a7c0fd6a50d5276077475c0ae2d8ea3b2)`(bool & OutValue) const` <a id="structFRHAPI__LoginCompleteMessage_1a7c0fd6a50d5276077475c0ae2d8ea3b2"></a>

Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__LoginCompleteMessage_1a1be720c47eb958d5edb90ef1364edc89)`()` <a id="structFRHAPI__LoginCompleteMessage_1a1be720c47eb958d5edb90ef1364edc89"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__LoginCompleteMessage_1a58ced3259fb15b14fe20f22212630d54)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a58ced3259fb15b14fe20f22212630d54"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a67a737bd8b2465fd4443103d56fa1cd8)`(const bool & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a67a737bd8b2465fd4443103d56fa1cd8"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.

#### `public inline void `[`SetAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1a73336a5f2e387c33155a9494ab1c1839)`(bool && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a73336a5f2e387c33155a9494ab1c1839"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics.

#### `public inline void `[`ClearAuthSuccess`](#structFRHAPI__LoginCompleteMessage_1aef4445d2e19b346a847f42b19c17ab2b)`()` <a id="structFRHAPI__LoginCompleteMessage_1aef4445d2e19b346a847f42b19c17ab2b"></a>

Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.

#### `public inline bool `[`IsAuthSuccessSet`](#structFRHAPI__LoginCompleteMessage_1a256d7e6dcd6e90de043d097640ebb18c)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a256d7e6dcd6e90de043d097640ebb18c"></a>

Checks whether AuthSuccess_Optional has been set.

#### `public inline bool `[`IsAuthSuccessDefaultValue`](#structFRHAPI__LoginCompleteMessage_1a39c9c6dac57657b163dc431964c5d490)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a39c9c6dac57657b163dc431964c5d490"></a>

Returns true if AuthSuccess_Optional is set and matches the default value.

#### `public inline void `[`SetAuthSuccessToDefault`](#structFRHAPI__LoginCompleteMessage_1af72919e844f49cf68f2d4547d874cec3)`()` <a id="structFRHAPI__LoginCompleteMessage_1af72919e844f49cf68f2d4547d874cec3"></a>

Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.

#### `public inline FString & `[`GetErrorCode`](#structFRHAPI__LoginCompleteMessage_1a46e4f5eabb028299d5e4989ed11451a9)`()` <a id="structFRHAPI__LoginCompleteMessage_1a46e4f5eabb028299d5e4989ed11451a9"></a>

Gets the value of ErrorCode.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__LoginCompleteMessage_1ab45bbef87a4861200f2103029d676de1)`() const` <a id="structFRHAPI__LoginCompleteMessage_1ab45bbef87a4861200f2103029d676de1"></a>

Gets the value of ErrorCode.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__LoginCompleteMessage_1a22f959224fe6a0e7486d9d654ddd6c72)`(const FString & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a22f959224fe6a0e7486d9d654ddd6c72"></a>

Sets the value of ErrorCode.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__LoginCompleteMessage_1a8597410b6b8d3353b2c9986091dd6be4)`(FString && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a8597410b6b8d3353b2c9986091dd6be4"></a>

Sets the value of ErrorCode using move semantics.

#### `public inline FString & `[`GetDesc`](#structFRHAPI__LoginCompleteMessage_1a08f53a011f976370336bb9167e05325e)`()` <a id="structFRHAPI__LoginCompleteMessage_1a08f53a011f976370336bb9167e05325e"></a>

Gets the value of Desc.

#### `public inline const FString & `[`GetDesc`](#structFRHAPI__LoginCompleteMessage_1adbf613b9c692b6025f2b60ca38297676)`() const` <a id="structFRHAPI__LoginCompleteMessage_1adbf613b9c692b6025f2b60ca38297676"></a>

Gets the value of Desc.

#### `public inline void `[`SetDesc`](#structFRHAPI__LoginCompleteMessage_1a234e8443dde604ecf23f456b7bdb7eb2)`(const FString & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a234e8443dde604ecf23f456b7bdb7eb2"></a>

Sets the value of Desc.

#### `public inline void `[`SetDesc`](#structFRHAPI__LoginCompleteMessage_1af0a5d2449139d730e2775c2a31f588e8)`(FString && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1af0a5d2449139d730e2775c2a31f588e8"></a>

Sets the value of Desc using move semantics.

#### `public inline bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a87ccfd2a2656e9675ec34f20accdd028)`()` <a id="structFRHAPI__LoginCompleteMessage_1a87ccfd2a2656e9675ec34f20accdd028"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a6795cccfd41241f0b38f98c0cfc177df)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a6795cccfd41241f0b38f98c0cfc177df"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a1b66f834bb09df49c2d33e98521de9b5)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginCompleteMessage_1a1b66f834bb09df49c2d33e98521de9b5"></a>

Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a67b8ea5a3f5e7c2e2e39d0ab2bee3bd8)`(bool & OutValue) const` <a id="structFRHAPI__LoginCompleteMessage_1a67b8ea5a3f5e7c2e2e39d0ab2bee3bd8"></a>

Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__LoginCompleteMessage_1af69b437cf0b94a141145049eca656a9b)`()` <a id="structFRHAPI__LoginCompleteMessage_1af69b437cf0b94a141145049eca656a9b"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__LoginCompleteMessage_1abbf280e49fa5dc174fecef57fe27ceda)`() const` <a id="structFRHAPI__LoginCompleteMessage_1abbf280e49fa5dc174fecef57fe27ceda"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a1a3e1d6e1885eaaaeeabe0a73d701ea4)`(const bool & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a1a3e1d6e1885eaaaeeabe0a73d701ea4"></a>

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.

#### `public inline void `[`SetNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a60f18fb77d5444cfa96167312344fcc3)`(bool && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a60f18fb77d5444cfa96167312344fcc3"></a>

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsEula`](#structFRHAPI__LoginCompleteMessage_1a0c61f9d799d83d5dfb8307c01bcfc616)`()` <a id="structFRHAPI__LoginCompleteMessage_1a0c61f9d799d83d5dfb8307c01bcfc616"></a>

Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.

#### `public inline bool `[`IsNeedsEulaSet`](#structFRHAPI__LoginCompleteMessage_1adc9c440081b89175592ea18ebfc655e9)`() const` <a id="structFRHAPI__LoginCompleteMessage_1adc9c440081b89175592ea18ebfc655e9"></a>

Checks whether NeedsEula_Optional has been set.

#### `public inline bool `[`IsNeedsEulaDefaultValue`](#structFRHAPI__LoginCompleteMessage_1a4814ac2c0efb4f9cb9e6918b0769adb6)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a4814ac2c0efb4f9cb9e6918b0769adb6"></a>

Returns true if NeedsEula_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsEulaToDefault`](#structFRHAPI__LoginCompleteMessage_1ad20d63f985c10728d416b378890cbc4e)`()` <a id="structFRHAPI__LoginCompleteMessage_1ad20d63f985c10728d416b378890cbc4e"></a>

Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.

#### `public inline bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a86dfc9948d1332065a17d391155726fe)`()` <a id="structFRHAPI__LoginCompleteMessage_1a86dfc9948d1332065a17d391155726fe"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a914912cce7fd7cdd3945e5057cf5b428)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a914912cce7fd7cdd3945e5057cf5b428"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a45e57818eead244bec63ee1337008133)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginCompleteMessage_1a45e57818eead244bec63ee1337008133"></a>

Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a3a11763fd6a404cc8c26740fc0663084)`(bool & OutValue) const` <a id="structFRHAPI__LoginCompleteMessage_1a3a11763fd6a404cc8c26740fc0663084"></a>

Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsTosOrNull`](#structFRHAPI__LoginCompleteMessage_1ab01ca6f95edb6d537eebc0afc1b44c3f)`()` <a id="structFRHAPI__LoginCompleteMessage_1ab01ca6f95edb6d537eebc0afc1b44c3f"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__LoginCompleteMessage_1a5b9a65b858a5f7d52cd16d1201302fd1)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a5b9a65b858a5f7d52cd16d1201302fd1"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a50e0209ceb89714869df2668749beae3)`(const bool & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a50e0209ceb89714869df2668749beae3"></a>

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.

#### `public inline void `[`SetNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a3e2094aa1409e91baa2b2f5610e6f7a4)`(bool && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a3e2094aa1409e91baa2b2f5610e6f7a4"></a>

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsTos`](#structFRHAPI__LoginCompleteMessage_1a1e69ee5855af3a63bfefbe5fbcb09807)`()` <a id="structFRHAPI__LoginCompleteMessage_1a1e69ee5855af3a63bfefbe5fbcb09807"></a>

Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.

#### `public inline bool `[`IsNeedsTosSet`](#structFRHAPI__LoginCompleteMessage_1ae6c4aab71cfb9296ee3e520e242f8a0d)`() const` <a id="structFRHAPI__LoginCompleteMessage_1ae6c4aab71cfb9296ee3e520e242f8a0d"></a>

Checks whether NeedsTos_Optional has been set.

#### `public inline bool `[`IsNeedsTosDefaultValue`](#structFRHAPI__LoginCompleteMessage_1a3f92a04d025b1fe7fd4e6ec29b4782b7)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a3f92a04d025b1fe7fd4e6ec29b4782b7"></a>

Returns true if NeedsTos_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsTosToDefault`](#structFRHAPI__LoginCompleteMessage_1a3925d11c96697e96b30b549712de13db)`()` <a id="structFRHAPI__LoginCompleteMessage_1a3925d11c96697e96b30b549712de13db"></a>

Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.

#### `public inline bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a3efed067c01ac2682bf3879f61811644)`()` <a id="structFRHAPI__LoginCompleteMessage_1a3efed067c01ac2682bf3879f61811644"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a2290f0a51eb13aa93610712351ee5f38)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a2290f0a51eb13aa93610712351ee5f38"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a72b0e5c67de5b49d66139cb7f8a39db3)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginCompleteMessage_1a72b0e5c67de5b49d66139cb7f8a39db3"></a>

Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1aafb92e8bed82283279463d90785e3cc4)`(bool & OutValue) const` <a id="structFRHAPI__LoginCompleteMessage_1aafb92e8bed82283279463d90785e3cc4"></a>

Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__LoginCompleteMessage_1ae448341812b88682daf373c45adc8a73)`()` <a id="structFRHAPI__LoginCompleteMessage_1ae448341812b88682daf373c45adc8a73"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__LoginCompleteMessage_1a090b1a971f5513745925df4c271608fe)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a090b1a971f5513745925df4c271608fe"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a58410b4ae2881875a7e9fa4e7b168ab2)`(const bool & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a58410b4ae2881875a7e9fa4e7b168ab2"></a>

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.

#### `public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a0ceec7395b812772aff740c2ce7f93dc)`(bool && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a0ceec7395b812772aff740c2ce7f93dc"></a>

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__LoginCompleteMessage_1a12086573140d5f66835a323611e80f61)`()` <a id="structFRHAPI__LoginCompleteMessage_1a12086573140d5f66835a323611e80f61"></a>

Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.

#### `public inline bool `[`IsNeedsPrivacyPolicySet`](#structFRHAPI__LoginCompleteMessage_1acbc9451e0aa31f942d62c5d69129c013)`() const` <a id="structFRHAPI__LoginCompleteMessage_1acbc9451e0aa31f942d62c5d69129c013"></a>

Checks whether NeedsPrivacyPolicy_Optional has been set.

#### `public inline bool `[`IsNeedsPrivacyPolicyDefaultValue`](#structFRHAPI__LoginCompleteMessage_1a725e88489ad59d69ad4d235f9c5e0d9e)`() const` <a id="structFRHAPI__LoginCompleteMessage_1a725e88489ad59d69ad4d235f9c5e0d9e"></a>

Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsPrivacyPolicyToDefault`](#structFRHAPI__LoginCompleteMessage_1accb99ad4a16c18541e12fba10a7687a0)`()` <a id="structFRHAPI__LoginCompleteMessage_1accb99ad4a16c18541e12fba10a7687a0"></a>

Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.

#### `public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1a393047335826a0e9d888a968232f0e36)`()` <a id="structFRHAPI__LoginCompleteMessage_1a393047335826a0e9d888a968232f0e36"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1add48870633ff573ab98acfb92fc5b263)`() const` <a id="structFRHAPI__LoginCompleteMessage_1add48870633ff573ab98acfb92fc5b263"></a>

Gets the value of Restrictions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1ae0446c0d1f2098a347a0a137a10b3ac6)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & DefaultValue) const` <a id="structFRHAPI__LoginCompleteMessage_1ae0446c0d1f2098a347a0a137a10b3ac6"></a>

Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRestrictions`](#structFRHAPI__LoginCompleteMessage_1a0a885f9433c986168b164b24f6123d6b)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & OutValue) const` <a id="structFRHAPI__LoginCompleteMessage_1a0a885f9433c986168b164b24f6123d6b"></a>

Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginCompleteMessage_1acceda2d4b198dd834815518aec057c6c)`()` <a id="structFRHAPI__LoginCompleteMessage_1acceda2d4b198dd834815518aec057c6c"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > * `[`GetRestrictionsOrNull`](#structFRHAPI__LoginCompleteMessage_1ac7d8f1fc568bb826a5a0c684afbc0b7e)`() const` <a id="structFRHAPI__LoginCompleteMessage_1ac7d8f1fc568bb826a5a0c684afbc0b7e"></a>

Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRestrictions`](#structFRHAPI__LoginCompleteMessage_1afaf759587e1e024740ceee072f58984d)`(const TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > & NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1afaf759587e1e024740ceee072f58984d"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true.

#### `public inline void `[`SetRestrictions`](#structFRHAPI__LoginCompleteMessage_1a738cbd0b70b6a9dabedb68a2a579a0a8)`(TArray< `[`FRHAPI_Restriction`](RHAPI_Restriction.md#structFRHAPI__Restriction)` > && NewValue)` <a id="structFRHAPI__LoginCompleteMessage_1a738cbd0b70b6a9dabedb68a2a579a0a8"></a>

Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true using move semantics.

#### `public inline void `[`ClearRestrictions`](#structFRHAPI__LoginCompleteMessage_1a940fc573235e0c2c6ed1b9f43306d3a0)`()` <a id="structFRHAPI__LoginCompleteMessage_1a940fc573235e0c2c6ed1b9f43306d3a0"></a>

Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false.

#### `public inline bool `[`IsRestrictionsSet`](#structFRHAPI__LoginCompleteMessage_1abc592ea4852ae5143cbb895e43f15aab)`() const` <a id="structFRHAPI__LoginCompleteMessage_1abc592ea4852ae5143cbb895e43f15aab"></a>

Checks whether Restrictions_Optional has been set.

