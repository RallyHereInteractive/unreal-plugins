---
title: RHAPI_AgreementMessage
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AgreementMessage`](#structFRHAPI__AgreementMessage) | Error message for when a user has not agreed to the EULA, TOS, or Privacy Policy.

## struct `FRHAPI_AgreementMessage` <a id="structFRHAPI__AgreementMessage"></a>

```
struct FRHAPI_AgreementMessage
  : public FRHAPI_Model
```

Error message for when a user has not agreed to the EULA, TOS, or Privacy Policy.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`AuthSuccess_Optional`](#structFRHAPI__AgreementMessage_1aa8d209e82da7a456005582c2badbf561) | 
`public bool `[`AuthSuccess_IsSet`](#structFRHAPI__AgreementMessage_1a4bed655f80f9c37f889530f5493c9c98) | true if AuthSuccess_Optional has been set to a value
`public FString `[`ErrorCode`](#structFRHAPI__AgreementMessage_1ae83c4271a95b301e2cbf385809e8e3bb) | 
`public FString `[`Desc`](#structFRHAPI__AgreementMessage_1a341feccacab82ba00edf1bc819948b68) | 
`public bool `[`NeedsEula_Optional`](#structFRHAPI__AgreementMessage_1a080b82ee1915127652fd6c4080dae3fb) | Whether the user needs to accept the End User License Agreement.
`public bool `[`NeedsEula_IsSet`](#structFRHAPI__AgreementMessage_1ac42e50d11a3620d0db931ea7cde62345) | true if NeedsEula_Optional has been set to a value
`public bool `[`NeedsTos_Optional`](#structFRHAPI__AgreementMessage_1a878df1d6fb0437cd07eadad56bd8df08) | Whether the user needs to accept the Terms of Service.
`public bool `[`NeedsTos_IsSet`](#structFRHAPI__AgreementMessage_1abd60f2debe16b2924f731615d3e6a841) | true if NeedsTos_Optional has been set to a value
`public bool `[`NeedsPrivacyPolicy_Optional`](#structFRHAPI__AgreementMessage_1a99d643a23f43e3f9508584d2cb3c3ecd) | Whether the user needs to accept the Privacy Policy.
`public bool `[`NeedsPrivacyPolicy_IsSet`](#structFRHAPI__AgreementMessage_1a0fc51c53961a3d1b7b5ff9cbd5784fa0) | true if NeedsPrivacyPolicy_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AgreementMessage_1a84302c674f288247e32316cc06ac50e1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AgreementMessage_1ade133bc8c27f42b8be97c1a4a6236407)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1adedab1b40c680d8d7e28426c72e38475)`()` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1adb30a65c38569b30a98d0c646ebeeb10)`() const` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1aea5f5beae0a2330f8b07507a3715c5c8)`(const bool & DefaultValue) const` | Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1a4d103e791d53e829f676067315083d1f)`(bool & OutValue) const` | Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__AgreementMessage_1a65d26ede73ac2b80a8797a24db9d44e5)`()` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__AgreementMessage_1a7406f8058c41f81fe03bb3a45a41bbfb)`() const` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAuthSuccess`](#structFRHAPI__AgreementMessage_1ac87e1b8186520bb85f2cc4a5deb8d261)`(const bool & NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.
`public inline void `[`SetAuthSuccess`](#structFRHAPI__AgreementMessage_1a9bd8a6a4e05b8a0907c3bdce795ec7c6)`(bool && NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics.
`public inline void `[`ClearAuthSuccess`](#structFRHAPI__AgreementMessage_1a569f91a13a065cd63d8f4bbd46931e03)`()` | Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.
`public inline bool `[`IsAuthSuccessSet`](#structFRHAPI__AgreementMessage_1a84c0a212ec6e6594bed8881f3d659941)`() const` | Checks whether AuthSuccess_Optional has been set.
`public inline bool `[`IsAuthSuccessDefaultValue`](#structFRHAPI__AgreementMessage_1a38906364052e15ec8ce894d3b17930fe)`() const` | Returns true if AuthSuccess_Optional is set and matches the default value.
`public inline void `[`SetAuthSuccessToDefault`](#structFRHAPI__AgreementMessage_1ac09a3293bf19d0071292ab20bf77e3e4)`()` | Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.
`public inline FString & `[`GetErrorCode`](#structFRHAPI__AgreementMessage_1adbb5b387bd2d05296cf139a51084c115)`()` | Gets the value of ErrorCode.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__AgreementMessage_1ae89d51af9e041ad81102c4361c3bf7be)`() const` | Gets the value of ErrorCode.
`public inline void `[`SetErrorCode`](#structFRHAPI__AgreementMessage_1af454ad29f3d99cdd46629beb14a33af5)`(const FString & NewValue)` | Sets the value of ErrorCode.
`public inline void `[`SetErrorCode`](#structFRHAPI__AgreementMessage_1a00e470cc2ee98d2d5604c197ec1363e3)`(FString && NewValue)` | Sets the value of ErrorCode using move semantics.
`public inline FString & `[`GetDesc`](#structFRHAPI__AgreementMessage_1a2600e4af0ddf66fb32e9fbfcf3de2cfe)`()` | Gets the value of Desc.
`public inline const FString & `[`GetDesc`](#structFRHAPI__AgreementMessage_1a3ed56adec778eb5b9ae1bfcad5c09c00)`() const` | Gets the value of Desc.
`public inline void `[`SetDesc`](#structFRHAPI__AgreementMessage_1a5466b729d856d3bbd1aa23819e232aeb)`(const FString & NewValue)` | Sets the value of Desc.
`public inline void `[`SetDesc`](#structFRHAPI__AgreementMessage_1a2ba812ff5e6fe4af101f0fee2b1e6fe1)`(FString && NewValue)` | Sets the value of Desc using move semantics.
`public inline bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a71fdb1385bf14b187ac63e1f5bcde1f7)`()` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a6cc09029b2a32d62ba5b648235a2416d)`() const` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a15b662a00397efec77f4e55235004524)`(const bool & DefaultValue) const` | Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a27c7b7da2c8eef5720754cc69b96483e)`(bool & OutValue) const` | Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__AgreementMessage_1a78ed5398b7c622dbfc65955a44c592e1)`()` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__AgreementMessage_1ab2dc1968c678e560d39135d38a469c2e)`() const` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsEula`](#structFRHAPI__AgreementMessage_1a43b1cb5331c181aec16b0d3e3a83a052)`(const bool & NewValue)` | Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.
`public inline void `[`SetNeedsEula`](#structFRHAPI__AgreementMessage_1ad677db5eb48d135b54d92fee5c6f1b80)`(bool && NewValue)` | Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true using move semantics.
`public inline void `[`ClearNeedsEula`](#structFRHAPI__AgreementMessage_1ad76381803a6b990168d202d29903118e)`()` | Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.
`public inline bool `[`IsNeedsEulaSet`](#structFRHAPI__AgreementMessage_1a61578c9b0c4d50abd398ce812c30854a)`() const` | Checks whether NeedsEula_Optional has been set.
`public inline bool `[`IsNeedsEulaDefaultValue`](#structFRHAPI__AgreementMessage_1a0f6954a486cb2355b362e857baed47d9)`() const` | Returns true if NeedsEula_Optional is set and matches the default value.
`public inline void `[`SetNeedsEulaToDefault`](#structFRHAPI__AgreementMessage_1ae4f905afb92d34b4fe046c35c62cc511)`()` | Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.
`public inline bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1aa0010510f36f7cba8c88b92f70c122a2)`()` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1a6c54186811a03e94ce233a26173fd296)`() const` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1adc142249d87fd205d319c78c712cedeb)`(const bool & DefaultValue) const` | Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1af22f0d83b7f23cccd939fbeed6d4093d)`(bool & OutValue) const` | Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsTosOrNull`](#structFRHAPI__AgreementMessage_1a0ec506da2292aa2a91a997f44fed75f3)`()` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__AgreementMessage_1a43e00cebcc7b1410f6e3c1777c742049)`() const` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsTos`](#structFRHAPI__AgreementMessage_1abf6a9297e98482ce129c24aa34de7e56)`(const bool & NewValue)` | Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.
`public inline void `[`SetNeedsTos`](#structFRHAPI__AgreementMessage_1a80987e8e5e684144b8e25dda1184199a)`(bool && NewValue)` | Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true using move semantics.
`public inline void `[`ClearNeedsTos`](#structFRHAPI__AgreementMessage_1a23d8a09446816e9d676cf2e07a009149)`()` | Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.
`public inline bool `[`IsNeedsTosSet`](#structFRHAPI__AgreementMessage_1a5c10838a8aa1b0f9858b2ede523ae39f)`() const` | Checks whether NeedsTos_Optional has been set.
`public inline bool `[`IsNeedsTosDefaultValue`](#structFRHAPI__AgreementMessage_1a59c6374a2bdfc6dc54099782b4e7aa57)`() const` | Returns true if NeedsTos_Optional is set and matches the default value.
`public inline void `[`SetNeedsTosToDefault`](#structFRHAPI__AgreementMessage_1a7e79d25c311a8221d0b94783d4ee10a5)`()` | Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.
`public inline bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a071a946241f216d48ce54bdafc8e9164)`()` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a463c5621aa6326fbee664ca8969266ea)`() const` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1af1df9349c1f3be47735febfada546636)`(const bool & DefaultValue) const` | Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a49c0dae7d0da7b57b7b10e6f0141be07)`(bool & OutValue) const` | Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__AgreementMessage_1ae0b0c4663a33c23f3e4d725d273795c7)`()` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__AgreementMessage_1a048b7bc7b29bb667c957869d1d7b8231)`() const` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1ab8f512cb94e67d62e9f52ba5e1e6b5dd)`(const bool & NewValue)` | Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.
`public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a460fb5de41bcd52a45e38dad77ff598d)`(bool && NewValue)` | Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true using move semantics.
`public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a348fe783e1dbf284bc53a43207e0bfee)`()` | Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.
`public inline bool `[`IsNeedsPrivacyPolicySet`](#structFRHAPI__AgreementMessage_1ab0af72f1338d9dcdbf370a0a1f8c917d)`() const` | Checks whether NeedsPrivacyPolicy_Optional has been set.
`public inline bool `[`IsNeedsPrivacyPolicyDefaultValue`](#structFRHAPI__AgreementMessage_1a21c366b675bc08ace0486b94122e0a4b)`() const` | Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.
`public inline void `[`SetNeedsPrivacyPolicyToDefault`](#structFRHAPI__AgreementMessage_1a5dc593776c4406f97a3fa94ad20adfc4)`()` | Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.

### Members

#### `public bool `[`AuthSuccess_Optional`](#structFRHAPI__AgreementMessage_1aa8d209e82da7a456005582c2badbf561) <a id="structFRHAPI__AgreementMessage_1aa8d209e82da7a456005582c2badbf561"></a>

#### `public bool `[`AuthSuccess_IsSet`](#structFRHAPI__AgreementMessage_1a4bed655f80f9c37f889530f5493c9c98) <a id="structFRHAPI__AgreementMessage_1a4bed655f80f9c37f889530f5493c9c98"></a>

true if AuthSuccess_Optional has been set to a value

#### `public FString `[`ErrorCode`](#structFRHAPI__AgreementMessage_1ae83c4271a95b301e2cbf385809e8e3bb) <a id="structFRHAPI__AgreementMessage_1ae83c4271a95b301e2cbf385809e8e3bb"></a>

#### `public FString `[`Desc`](#structFRHAPI__AgreementMessage_1a341feccacab82ba00edf1bc819948b68) <a id="structFRHAPI__AgreementMessage_1a341feccacab82ba00edf1bc819948b68"></a>

#### `public bool `[`NeedsEula_Optional`](#structFRHAPI__AgreementMessage_1a080b82ee1915127652fd6c4080dae3fb) <a id="structFRHAPI__AgreementMessage_1a080b82ee1915127652fd6c4080dae3fb"></a>

Whether the user needs to accept the End User License Agreement.

#### `public bool `[`NeedsEula_IsSet`](#structFRHAPI__AgreementMessage_1ac42e50d11a3620d0db931ea7cde62345) <a id="structFRHAPI__AgreementMessage_1ac42e50d11a3620d0db931ea7cde62345"></a>

true if NeedsEula_Optional has been set to a value

#### `public bool `[`NeedsTos_Optional`](#structFRHAPI__AgreementMessage_1a878df1d6fb0437cd07eadad56bd8df08) <a id="structFRHAPI__AgreementMessage_1a878df1d6fb0437cd07eadad56bd8df08"></a>

Whether the user needs to accept the Terms of Service.

#### `public bool `[`NeedsTos_IsSet`](#structFRHAPI__AgreementMessage_1abd60f2debe16b2924f731615d3e6a841) <a id="structFRHAPI__AgreementMessage_1abd60f2debe16b2924f731615d3e6a841"></a>

true if NeedsTos_Optional has been set to a value

#### `public bool `[`NeedsPrivacyPolicy_Optional`](#structFRHAPI__AgreementMessage_1a99d643a23f43e3f9508584d2cb3c3ecd) <a id="structFRHAPI__AgreementMessage_1a99d643a23f43e3f9508584d2cb3c3ecd"></a>

Whether the user needs to accept the Privacy Policy.

#### `public bool `[`NeedsPrivacyPolicy_IsSet`](#structFRHAPI__AgreementMessage_1a0fc51c53961a3d1b7b5ff9cbd5784fa0) <a id="structFRHAPI__AgreementMessage_1a0fc51c53961a3d1b7b5ff9cbd5784fa0"></a>

true if NeedsPrivacyPolicy_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__AgreementMessage_1a84302c674f288247e32316cc06ac50e1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AgreementMessage_1a84302c674f288247e32316cc06ac50e1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AgreementMessage_1ade133bc8c27f42b8be97c1a4a6236407)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__AgreementMessage_1ade133bc8c27f42b8be97c1a4a6236407"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1adedab1b40c680d8d7e28426c72e38475)`()` <a id="structFRHAPI__AgreementMessage_1adedab1b40c680d8d7e28426c72e38475"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1adb30a65c38569b30a98d0c646ebeeb10)`() const` <a id="structFRHAPI__AgreementMessage_1adb30a65c38569b30a98d0c646ebeeb10"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1aea5f5beae0a2330f8b07507a3715c5c8)`(const bool & DefaultValue) const` <a id="structFRHAPI__AgreementMessage_1aea5f5beae0a2330f8b07507a3715c5c8"></a>

Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1a4d103e791d53e829f676067315083d1f)`(bool & OutValue) const` <a id="structFRHAPI__AgreementMessage_1a4d103e791d53e829f676067315083d1f"></a>

Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__AgreementMessage_1a65d26ede73ac2b80a8797a24db9d44e5)`()` <a id="structFRHAPI__AgreementMessage_1a65d26ede73ac2b80a8797a24db9d44e5"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__AgreementMessage_1a7406f8058c41f81fe03bb3a45a41bbfb)`() const` <a id="structFRHAPI__AgreementMessage_1a7406f8058c41f81fe03bb3a45a41bbfb"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAuthSuccess`](#structFRHAPI__AgreementMessage_1ac87e1b8186520bb85f2cc4a5deb8d261)`(const bool & NewValue)` <a id="structFRHAPI__AgreementMessage_1ac87e1b8186520bb85f2cc4a5deb8d261"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.

#### `public inline void `[`SetAuthSuccess`](#structFRHAPI__AgreementMessage_1a9bd8a6a4e05b8a0907c3bdce795ec7c6)`(bool && NewValue)` <a id="structFRHAPI__AgreementMessage_1a9bd8a6a4e05b8a0907c3bdce795ec7c6"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics.

#### `public inline void `[`ClearAuthSuccess`](#structFRHAPI__AgreementMessage_1a569f91a13a065cd63d8f4bbd46931e03)`()` <a id="structFRHAPI__AgreementMessage_1a569f91a13a065cd63d8f4bbd46931e03"></a>

Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.

#### `public inline bool `[`IsAuthSuccessSet`](#structFRHAPI__AgreementMessage_1a84c0a212ec6e6594bed8881f3d659941)`() const` <a id="structFRHAPI__AgreementMessage_1a84c0a212ec6e6594bed8881f3d659941"></a>

Checks whether AuthSuccess_Optional has been set.

#### `public inline bool `[`IsAuthSuccessDefaultValue`](#structFRHAPI__AgreementMessage_1a38906364052e15ec8ce894d3b17930fe)`() const` <a id="structFRHAPI__AgreementMessage_1a38906364052e15ec8ce894d3b17930fe"></a>

Returns true if AuthSuccess_Optional is set and matches the default value.

#### `public inline void `[`SetAuthSuccessToDefault`](#structFRHAPI__AgreementMessage_1ac09a3293bf19d0071292ab20bf77e3e4)`()` <a id="structFRHAPI__AgreementMessage_1ac09a3293bf19d0071292ab20bf77e3e4"></a>

Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.

#### `public inline FString & `[`GetErrorCode`](#structFRHAPI__AgreementMessage_1adbb5b387bd2d05296cf139a51084c115)`()` <a id="structFRHAPI__AgreementMessage_1adbb5b387bd2d05296cf139a51084c115"></a>

Gets the value of ErrorCode.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__AgreementMessage_1ae89d51af9e041ad81102c4361c3bf7be)`() const` <a id="structFRHAPI__AgreementMessage_1ae89d51af9e041ad81102c4361c3bf7be"></a>

Gets the value of ErrorCode.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__AgreementMessage_1af454ad29f3d99cdd46629beb14a33af5)`(const FString & NewValue)` <a id="structFRHAPI__AgreementMessage_1af454ad29f3d99cdd46629beb14a33af5"></a>

Sets the value of ErrorCode.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__AgreementMessage_1a00e470cc2ee98d2d5604c197ec1363e3)`(FString && NewValue)` <a id="structFRHAPI__AgreementMessage_1a00e470cc2ee98d2d5604c197ec1363e3"></a>

Sets the value of ErrorCode using move semantics.

#### `public inline FString & `[`GetDesc`](#structFRHAPI__AgreementMessage_1a2600e4af0ddf66fb32e9fbfcf3de2cfe)`()` <a id="structFRHAPI__AgreementMessage_1a2600e4af0ddf66fb32e9fbfcf3de2cfe"></a>

Gets the value of Desc.

#### `public inline const FString & `[`GetDesc`](#structFRHAPI__AgreementMessage_1a3ed56adec778eb5b9ae1bfcad5c09c00)`() const` <a id="structFRHAPI__AgreementMessage_1a3ed56adec778eb5b9ae1bfcad5c09c00"></a>

Gets the value of Desc.

#### `public inline void `[`SetDesc`](#structFRHAPI__AgreementMessage_1a5466b729d856d3bbd1aa23819e232aeb)`(const FString & NewValue)` <a id="structFRHAPI__AgreementMessage_1a5466b729d856d3bbd1aa23819e232aeb"></a>

Sets the value of Desc.

#### `public inline void `[`SetDesc`](#structFRHAPI__AgreementMessage_1a2ba812ff5e6fe4af101f0fee2b1e6fe1)`(FString && NewValue)` <a id="structFRHAPI__AgreementMessage_1a2ba812ff5e6fe4af101f0fee2b1e6fe1"></a>

Sets the value of Desc using move semantics.

#### `public inline bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a71fdb1385bf14b187ac63e1f5bcde1f7)`()` <a id="structFRHAPI__AgreementMessage_1a71fdb1385bf14b187ac63e1f5bcde1f7"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a6cc09029b2a32d62ba5b648235a2416d)`() const` <a id="structFRHAPI__AgreementMessage_1a6cc09029b2a32d62ba5b648235a2416d"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a15b662a00397efec77f4e55235004524)`(const bool & DefaultValue) const` <a id="structFRHAPI__AgreementMessage_1a15b662a00397efec77f4e55235004524"></a>

Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a27c7b7da2c8eef5720754cc69b96483e)`(bool & OutValue) const` <a id="structFRHAPI__AgreementMessage_1a27c7b7da2c8eef5720754cc69b96483e"></a>

Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__AgreementMessage_1a78ed5398b7c622dbfc65955a44c592e1)`()` <a id="structFRHAPI__AgreementMessage_1a78ed5398b7c622dbfc65955a44c592e1"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__AgreementMessage_1ab2dc1968c678e560d39135d38a469c2e)`() const` <a id="structFRHAPI__AgreementMessage_1ab2dc1968c678e560d39135d38a469c2e"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsEula`](#structFRHAPI__AgreementMessage_1a43b1cb5331c181aec16b0d3e3a83a052)`(const bool & NewValue)` <a id="structFRHAPI__AgreementMessage_1a43b1cb5331c181aec16b0d3e3a83a052"></a>

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.

#### `public inline void `[`SetNeedsEula`](#structFRHAPI__AgreementMessage_1ad677db5eb48d135b54d92fee5c6f1b80)`(bool && NewValue)` <a id="structFRHAPI__AgreementMessage_1ad677db5eb48d135b54d92fee5c6f1b80"></a>

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsEula`](#structFRHAPI__AgreementMessage_1ad76381803a6b990168d202d29903118e)`()` <a id="structFRHAPI__AgreementMessage_1ad76381803a6b990168d202d29903118e"></a>

Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.

#### `public inline bool `[`IsNeedsEulaSet`](#structFRHAPI__AgreementMessage_1a61578c9b0c4d50abd398ce812c30854a)`() const` <a id="structFRHAPI__AgreementMessage_1a61578c9b0c4d50abd398ce812c30854a"></a>

Checks whether NeedsEula_Optional has been set.

#### `public inline bool `[`IsNeedsEulaDefaultValue`](#structFRHAPI__AgreementMessage_1a0f6954a486cb2355b362e857baed47d9)`() const` <a id="structFRHAPI__AgreementMessage_1a0f6954a486cb2355b362e857baed47d9"></a>

Returns true if NeedsEula_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsEulaToDefault`](#structFRHAPI__AgreementMessage_1ae4f905afb92d34b4fe046c35c62cc511)`()` <a id="structFRHAPI__AgreementMessage_1ae4f905afb92d34b4fe046c35c62cc511"></a>

Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.

#### `public inline bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1aa0010510f36f7cba8c88b92f70c122a2)`()` <a id="structFRHAPI__AgreementMessage_1aa0010510f36f7cba8c88b92f70c122a2"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1a6c54186811a03e94ce233a26173fd296)`() const` <a id="structFRHAPI__AgreementMessage_1a6c54186811a03e94ce233a26173fd296"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1adc142249d87fd205d319c78c712cedeb)`(const bool & DefaultValue) const` <a id="structFRHAPI__AgreementMessage_1adc142249d87fd205d319c78c712cedeb"></a>

Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1af22f0d83b7f23cccd939fbeed6d4093d)`(bool & OutValue) const` <a id="structFRHAPI__AgreementMessage_1af22f0d83b7f23cccd939fbeed6d4093d"></a>

Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsTosOrNull`](#structFRHAPI__AgreementMessage_1a0ec506da2292aa2a91a997f44fed75f3)`()` <a id="structFRHAPI__AgreementMessage_1a0ec506da2292aa2a91a997f44fed75f3"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__AgreementMessage_1a43e00cebcc7b1410f6e3c1777c742049)`() const` <a id="structFRHAPI__AgreementMessage_1a43e00cebcc7b1410f6e3c1777c742049"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsTos`](#structFRHAPI__AgreementMessage_1abf6a9297e98482ce129c24aa34de7e56)`(const bool & NewValue)` <a id="structFRHAPI__AgreementMessage_1abf6a9297e98482ce129c24aa34de7e56"></a>

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.

#### `public inline void `[`SetNeedsTos`](#structFRHAPI__AgreementMessage_1a80987e8e5e684144b8e25dda1184199a)`(bool && NewValue)` <a id="structFRHAPI__AgreementMessage_1a80987e8e5e684144b8e25dda1184199a"></a>

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsTos`](#structFRHAPI__AgreementMessage_1a23d8a09446816e9d676cf2e07a009149)`()` <a id="structFRHAPI__AgreementMessage_1a23d8a09446816e9d676cf2e07a009149"></a>

Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.

#### `public inline bool `[`IsNeedsTosSet`](#structFRHAPI__AgreementMessage_1a5c10838a8aa1b0f9858b2ede523ae39f)`() const` <a id="structFRHAPI__AgreementMessage_1a5c10838a8aa1b0f9858b2ede523ae39f"></a>

Checks whether NeedsTos_Optional has been set.

#### `public inline bool `[`IsNeedsTosDefaultValue`](#structFRHAPI__AgreementMessage_1a59c6374a2bdfc6dc54099782b4e7aa57)`() const` <a id="structFRHAPI__AgreementMessage_1a59c6374a2bdfc6dc54099782b4e7aa57"></a>

Returns true if NeedsTos_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsTosToDefault`](#structFRHAPI__AgreementMessage_1a7e79d25c311a8221d0b94783d4ee10a5)`()` <a id="structFRHAPI__AgreementMessage_1a7e79d25c311a8221d0b94783d4ee10a5"></a>

Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.

#### `public inline bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a071a946241f216d48ce54bdafc8e9164)`()` <a id="structFRHAPI__AgreementMessage_1a071a946241f216d48ce54bdafc8e9164"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a463c5621aa6326fbee664ca8969266ea)`() const` <a id="structFRHAPI__AgreementMessage_1a463c5621aa6326fbee664ca8969266ea"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1af1df9349c1f3be47735febfada546636)`(const bool & DefaultValue) const` <a id="structFRHAPI__AgreementMessage_1af1df9349c1f3be47735febfada546636"></a>

Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a49c0dae7d0da7b57b7b10e6f0141be07)`(bool & OutValue) const` <a id="structFRHAPI__AgreementMessage_1a49c0dae7d0da7b57b7b10e6f0141be07"></a>

Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__AgreementMessage_1ae0b0c4663a33c23f3e4d725d273795c7)`()` <a id="structFRHAPI__AgreementMessage_1ae0b0c4663a33c23f3e4d725d273795c7"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__AgreementMessage_1a048b7bc7b29bb667c957869d1d7b8231)`() const` <a id="structFRHAPI__AgreementMessage_1a048b7bc7b29bb667c957869d1d7b8231"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1ab8f512cb94e67d62e9f52ba5e1e6b5dd)`(const bool & NewValue)` <a id="structFRHAPI__AgreementMessage_1ab8f512cb94e67d62e9f52ba5e1e6b5dd"></a>

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.

#### `public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a460fb5de41bcd52a45e38dad77ff598d)`(bool && NewValue)` <a id="structFRHAPI__AgreementMessage_1a460fb5de41bcd52a45e38dad77ff598d"></a>

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true using move semantics.

#### `public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a348fe783e1dbf284bc53a43207e0bfee)`()` <a id="structFRHAPI__AgreementMessage_1a348fe783e1dbf284bc53a43207e0bfee"></a>

Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.

#### `public inline bool `[`IsNeedsPrivacyPolicySet`](#structFRHAPI__AgreementMessage_1ab0af72f1338d9dcdbf370a0a1f8c917d)`() const` <a id="structFRHAPI__AgreementMessage_1ab0af72f1338d9dcdbf370a0a1f8c917d"></a>

Checks whether NeedsPrivacyPolicy_Optional has been set.

#### `public inline bool `[`IsNeedsPrivacyPolicyDefaultValue`](#structFRHAPI__AgreementMessage_1a21c366b675bc08ace0486b94122e0a4b)`() const` <a id="structFRHAPI__AgreementMessage_1a21c366b675bc08ace0486b94122e0a4b"></a>

Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsPrivacyPolicyToDefault`](#structFRHAPI__AgreementMessage_1a5dc593776c4406f97a3fa94ad20adfc4)`()` <a id="structFRHAPI__AgreementMessage_1a5dc593776c4406f97a3fa94ad20adfc4"></a>

Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.

