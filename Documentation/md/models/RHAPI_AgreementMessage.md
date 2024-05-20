# RHAPI_AgreementMessage <a id="group__RHAPI__AgreementMessage"></a>

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

#### Summary

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
`public virtual bool `[`FromJson`](#structFRHAPI__AgreementMessage_1a7c23aac9b13afd476198e45e0c380cc7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AgreementMessage_1a8c963c13ac21dd41a28d5fc01766e7c0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1a57397b50391881929fa779675378cae2)`()` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1ad52e8bc7849d6105395bd1a4d4949a5d)`() const` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1ac0aaa4e2629a8d9ab9544aa0425aff4e)`(const bool & DefaultValue) const` | Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1a4d103e791d53e829f676067315083d1f)`(bool & OutValue) const` | Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__AgreementMessage_1a52432e93a57aac16076f47f3831141a4)`()` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__AgreementMessage_1aa8d8eb1c96f6fb36b248543abdad1274)`() const` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAuthSuccess`](#structFRHAPI__AgreementMessage_1af4944c992022ae18631e32cf3d389ba7)`(bool NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.
`public inline void `[`ClearAuthSuccess`](#structFRHAPI__AgreementMessage_1a569f91a13a065cd63d8f4bbd46931e03)`()` | Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.
`public inline bool `[`IsAuthSuccessDefaultValue`](#structFRHAPI__AgreementMessage_1a38906364052e15ec8ce894d3b17930fe)`() const` | Returns true if AuthSuccess_Optional is set and matches the default value.
`public inline void `[`SetAuthSuccessToDefault`](#structFRHAPI__AgreementMessage_1ac09a3293bf19d0071292ab20bf77e3e4)`()` | Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.
`public inline FString & `[`GetErrorCode`](#structFRHAPI__AgreementMessage_1ae24b2e3d39c42e5e5752be0ed0a789f2)`()` | Gets the value of ErrorCode.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__AgreementMessage_1aed5d205b58e1e319cc9419e46c07d877)`() const` | Gets the value of ErrorCode.
`public inline void `[`SetErrorCode`](#structFRHAPI__AgreementMessage_1a102b46fe2aaf3346b38942636c438f18)`(FString NewValue)` | Sets the value of ErrorCode.
`public inline FString & `[`GetDesc`](#structFRHAPI__AgreementMessage_1acaedd82cb90517f793cdecea95a9c43b)`()` | Gets the value of Desc.
`public inline const FString & `[`GetDesc`](#structFRHAPI__AgreementMessage_1af80ab5684c0a1a65da856c9419bd5cfe)`() const` | Gets the value of Desc.
`public inline void `[`SetDesc`](#structFRHAPI__AgreementMessage_1a4888e7ffcde8e799094d1d9e4eb349ba)`(FString NewValue)` | Sets the value of Desc.
`public inline bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a450209aff2a672e809bb134e75f2df77)`()` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a2e49e29ec477f70398248ee5ba43c124)`() const` | Gets the value of NeedsEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a9e510f79103ca4bc65b1433000aaf59e)`(const bool & DefaultValue) const` | Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a27c7b7da2c8eef5720754cc69b96483e)`(bool & OutValue) const` | Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__AgreementMessage_1ac42bcf8a7450dbd0222d86ad04dec03e)`()` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__AgreementMessage_1a5be15659a73afe371d9fed6d617d4dbb)`() const` | Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsEula`](#structFRHAPI__AgreementMessage_1a479307d082de00e9aa611168d4ec9287)`(bool NewValue)` | Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.
`public inline void `[`ClearNeedsEula`](#structFRHAPI__AgreementMessage_1ad76381803a6b990168d202d29903118e)`()` | Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.
`public inline bool `[`IsNeedsEulaDefaultValue`](#structFRHAPI__AgreementMessage_1a0f6954a486cb2355b362e857baed47d9)`() const` | Returns true if NeedsEula_Optional is set and matches the default value.
`public inline void `[`SetNeedsEulaToDefault`](#structFRHAPI__AgreementMessage_1ae4f905afb92d34b4fe046c35c62cc511)`()` | Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.
`public inline bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1a507796f242e8017a626f43a71f5b4a75)`()` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1a33fda52ab7562b9523b69b7c64fae69e)`() const` | Gets the value of NeedsTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1a60098fab0216fb389628ab655cea0d6f)`(const bool & DefaultValue) const` | Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1af22f0d83b7f23cccd939fbeed6d4093d)`(bool & OutValue) const` | Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsTosOrNull`](#structFRHAPI__AgreementMessage_1ac1082aa5f2b1d3c4f5b13bc3be2142c6)`()` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__AgreementMessage_1af551aad8d0d0fe36db399fdcd374efd1)`() const` | Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsTos`](#structFRHAPI__AgreementMessage_1aaebb72ed189f4caa435574765c86672c)`(bool NewValue)` | Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.
`public inline void `[`ClearNeedsTos`](#structFRHAPI__AgreementMessage_1a23d8a09446816e9d676cf2e07a009149)`()` | Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.
`public inline bool `[`IsNeedsTosDefaultValue`](#structFRHAPI__AgreementMessage_1a59c6374a2bdfc6dc54099782b4e7aa57)`() const` | Returns true if NeedsTos_Optional is set and matches the default value.
`public inline void `[`SetNeedsTosToDefault`](#structFRHAPI__AgreementMessage_1a7e79d25c311a8221d0b94783d4ee10a5)`()` | Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.
`public inline bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a3b7f585517e712ca2d419dade15d259f)`()` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1aa4b43760d25927f3adf0df53c4604900)`() const` | Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a6c98f08799aeec8630d035201a45e4dd)`(const bool & DefaultValue) const` | Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a49c0dae7d0da7b57b7b10e6f0141be07)`(bool & OutValue) const` | Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__AgreementMessage_1af1a4b4f8ee677dd3d1175c2464f359c7)`()` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__AgreementMessage_1a7225c7fd9d517b262610f2bb4b0d77b2)`() const` | Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1aa62a048cd9878ee2b33600f7f6ebce9b)`(bool NewValue)` | Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.
`public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a348fe783e1dbf284bc53a43207e0bfee)`()` | Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.
`public inline bool `[`IsNeedsPrivacyPolicyDefaultValue`](#structFRHAPI__AgreementMessage_1a21c366b675bc08ace0486b94122e0a4b)`() const` | Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.
`public inline void `[`SetNeedsPrivacyPolicyToDefault`](#structFRHAPI__AgreementMessage_1a5dc593776c4406f97a3fa94ad20adfc4)`()` | Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.

#### Members

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__AgreementMessage_1a7c23aac9b13afd476198e45e0c380cc7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AgreementMessage_1a7c23aac9b13afd476198e45e0c380cc7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AgreementMessage_1a8c963c13ac21dd41a28d5fc01766e7c0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__AgreementMessage_1a8c963c13ac21dd41a28d5fc01766e7c0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1a57397b50391881929fa779675378cae2)`()` <a id="structFRHAPI__AgreementMessage_1a57397b50391881929fa779675378cae2"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1ad52e8bc7849d6105395bd1a4d4949a5d)`() const` <a id="structFRHAPI__AgreementMessage_1ad52e8bc7849d6105395bd1a4d4949a5d"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1ac0aaa4e2629a8d9ab9544aa0425aff4e)`(const bool & DefaultValue) const` <a id="structFRHAPI__AgreementMessage_1ac0aaa4e2629a8d9ab9544aa0425aff4e"></a>

Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAuthSuccess`](#structFRHAPI__AgreementMessage_1a4d103e791d53e829f676067315083d1f)`(bool & OutValue) const` <a id="structFRHAPI__AgreementMessage_1a4d103e791d53e829f676067315083d1f"></a>

Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__AgreementMessage_1a52432e93a57aac16076f47f3831141a4)`()` <a id="structFRHAPI__AgreementMessage_1a52432e93a57aac16076f47f3831141a4"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__AgreementMessage_1aa8d8eb1c96f6fb36b248543abdad1274)`() const` <a id="structFRHAPI__AgreementMessage_1aa8d8eb1c96f6fb36b248543abdad1274"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAuthSuccess`](#structFRHAPI__AgreementMessage_1af4944c992022ae18631e32cf3d389ba7)`(bool NewValue)` <a id="structFRHAPI__AgreementMessage_1af4944c992022ae18631e32cf3d389ba7"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.

#### `public inline void `[`ClearAuthSuccess`](#structFRHAPI__AgreementMessage_1a569f91a13a065cd63d8f4bbd46931e03)`()` <a id="structFRHAPI__AgreementMessage_1a569f91a13a065cd63d8f4bbd46931e03"></a>

Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.

#### `public inline bool `[`IsAuthSuccessDefaultValue`](#structFRHAPI__AgreementMessage_1a38906364052e15ec8ce894d3b17930fe)`() const` <a id="structFRHAPI__AgreementMessage_1a38906364052e15ec8ce894d3b17930fe"></a>

Returns true if AuthSuccess_Optional is set and matches the default value.

#### `public inline void `[`SetAuthSuccessToDefault`](#structFRHAPI__AgreementMessage_1ac09a3293bf19d0071292ab20bf77e3e4)`()` <a id="structFRHAPI__AgreementMessage_1ac09a3293bf19d0071292ab20bf77e3e4"></a>

Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.

#### `public inline FString & `[`GetErrorCode`](#structFRHAPI__AgreementMessage_1ae24b2e3d39c42e5e5752be0ed0a789f2)`()` <a id="structFRHAPI__AgreementMessage_1ae24b2e3d39c42e5e5752be0ed0a789f2"></a>

Gets the value of ErrorCode.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__AgreementMessage_1aed5d205b58e1e319cc9419e46c07d877)`() const` <a id="structFRHAPI__AgreementMessage_1aed5d205b58e1e319cc9419e46c07d877"></a>

Gets the value of ErrorCode.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__AgreementMessage_1a102b46fe2aaf3346b38942636c438f18)`(FString NewValue)` <a id="structFRHAPI__AgreementMessage_1a102b46fe2aaf3346b38942636c438f18"></a>

Sets the value of ErrorCode.

#### `public inline FString & `[`GetDesc`](#structFRHAPI__AgreementMessage_1acaedd82cb90517f793cdecea95a9c43b)`()` <a id="structFRHAPI__AgreementMessage_1acaedd82cb90517f793cdecea95a9c43b"></a>

Gets the value of Desc.

#### `public inline const FString & `[`GetDesc`](#structFRHAPI__AgreementMessage_1af80ab5684c0a1a65da856c9419bd5cfe)`() const` <a id="structFRHAPI__AgreementMessage_1af80ab5684c0a1a65da856c9419bd5cfe"></a>

Gets the value of Desc.

#### `public inline void `[`SetDesc`](#structFRHAPI__AgreementMessage_1a4888e7ffcde8e799094d1d9e4eb349ba)`(FString NewValue)` <a id="structFRHAPI__AgreementMessage_1a4888e7ffcde8e799094d1d9e4eb349ba"></a>

Sets the value of Desc.

#### `public inline bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a450209aff2a672e809bb134e75f2df77)`()` <a id="structFRHAPI__AgreementMessage_1a450209aff2a672e809bb134e75f2df77"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a2e49e29ec477f70398248ee5ba43c124)`() const` <a id="structFRHAPI__AgreementMessage_1a2e49e29ec477f70398248ee5ba43c124"></a>

Gets the value of NeedsEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a9e510f79103ca4bc65b1433000aaf59e)`(const bool & DefaultValue) const` <a id="structFRHAPI__AgreementMessage_1a9e510f79103ca4bc65b1433000aaf59e"></a>

Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsEula`](#structFRHAPI__AgreementMessage_1a27c7b7da2c8eef5720754cc69b96483e)`(bool & OutValue) const` <a id="structFRHAPI__AgreementMessage_1a27c7b7da2c8eef5720754cc69b96483e"></a>

Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__AgreementMessage_1ac42bcf8a7450dbd0222d86ad04dec03e)`()` <a id="structFRHAPI__AgreementMessage_1ac42bcf8a7450dbd0222d86ad04dec03e"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsEulaOrNull`](#structFRHAPI__AgreementMessage_1a5be15659a73afe371d9fed6d617d4dbb)`() const` <a id="structFRHAPI__AgreementMessage_1a5be15659a73afe371d9fed6d617d4dbb"></a>

Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsEula`](#structFRHAPI__AgreementMessage_1a479307d082de00e9aa611168d4ec9287)`(bool NewValue)` <a id="structFRHAPI__AgreementMessage_1a479307d082de00e9aa611168d4ec9287"></a>

Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true.

#### `public inline void `[`ClearNeedsEula`](#structFRHAPI__AgreementMessage_1ad76381803a6b990168d202d29903118e)`()` <a id="structFRHAPI__AgreementMessage_1ad76381803a6b990168d202d29903118e"></a>

Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false.

#### `public inline bool `[`IsNeedsEulaDefaultValue`](#structFRHAPI__AgreementMessage_1a0f6954a486cb2355b362e857baed47d9)`() const` <a id="structFRHAPI__AgreementMessage_1a0f6954a486cb2355b362e857baed47d9"></a>

Returns true if NeedsEula_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsEulaToDefault`](#structFRHAPI__AgreementMessage_1ae4f905afb92d34b4fe046c35c62cc511)`()` <a id="structFRHAPI__AgreementMessage_1ae4f905afb92d34b4fe046c35c62cc511"></a>

Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true.

#### `public inline bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1a507796f242e8017a626f43a71f5b4a75)`()` <a id="structFRHAPI__AgreementMessage_1a507796f242e8017a626f43a71f5b4a75"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1a33fda52ab7562b9523b69b7c64fae69e)`() const` <a id="structFRHAPI__AgreementMessage_1a33fda52ab7562b9523b69b7c64fae69e"></a>

Gets the value of NeedsTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1a60098fab0216fb389628ab655cea0d6f)`(const bool & DefaultValue) const` <a id="structFRHAPI__AgreementMessage_1a60098fab0216fb389628ab655cea0d6f"></a>

Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsTos`](#structFRHAPI__AgreementMessage_1af22f0d83b7f23cccd939fbeed6d4093d)`(bool & OutValue) const` <a id="structFRHAPI__AgreementMessage_1af22f0d83b7f23cccd939fbeed6d4093d"></a>

Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsTosOrNull`](#structFRHAPI__AgreementMessage_1ac1082aa5f2b1d3c4f5b13bc3be2142c6)`()` <a id="structFRHAPI__AgreementMessage_1ac1082aa5f2b1d3c4f5b13bc3be2142c6"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsTosOrNull`](#structFRHAPI__AgreementMessage_1af551aad8d0d0fe36db399fdcd374efd1)`() const` <a id="structFRHAPI__AgreementMessage_1af551aad8d0d0fe36db399fdcd374efd1"></a>

Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsTos`](#structFRHAPI__AgreementMessage_1aaebb72ed189f4caa435574765c86672c)`(bool NewValue)` <a id="structFRHAPI__AgreementMessage_1aaebb72ed189f4caa435574765c86672c"></a>

Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true.

#### `public inline void `[`ClearNeedsTos`](#structFRHAPI__AgreementMessage_1a23d8a09446816e9d676cf2e07a009149)`()` <a id="structFRHAPI__AgreementMessage_1a23d8a09446816e9d676cf2e07a009149"></a>

Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false.

#### `public inline bool `[`IsNeedsTosDefaultValue`](#structFRHAPI__AgreementMessage_1a59c6374a2bdfc6dc54099782b4e7aa57)`() const` <a id="structFRHAPI__AgreementMessage_1a59c6374a2bdfc6dc54099782b4e7aa57"></a>

Returns true if NeedsTos_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsTosToDefault`](#structFRHAPI__AgreementMessage_1a7e79d25c311a8221d0b94783d4ee10a5)`()` <a id="structFRHAPI__AgreementMessage_1a7e79d25c311a8221d0b94783d4ee10a5"></a>

Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true.

#### `public inline bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a3b7f585517e712ca2d419dade15d259f)`()` <a id="structFRHAPI__AgreementMessage_1a3b7f585517e712ca2d419dade15d259f"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1aa4b43760d25927f3adf0df53c4604900)`() const` <a id="structFRHAPI__AgreementMessage_1aa4b43760d25927f3adf0df53c4604900"></a>

Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a6c98f08799aeec8630d035201a45e4dd)`(const bool & DefaultValue) const` <a id="structFRHAPI__AgreementMessage_1a6c98f08799aeec8630d035201a45e4dd"></a>

Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a49c0dae7d0da7b57b7b10e6f0141be07)`(bool & OutValue) const` <a id="structFRHAPI__AgreementMessage_1a49c0dae7d0da7b57b7b10e6f0141be07"></a>

Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__AgreementMessage_1af1a4b4f8ee677dd3d1175c2464f359c7)`()` <a id="structFRHAPI__AgreementMessage_1af1a4b4f8ee677dd3d1175c2464f359c7"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNeedsPrivacyPolicyOrNull`](#structFRHAPI__AgreementMessage_1a7225c7fd9d517b262610f2bb4b0d77b2)`() const` <a id="structFRHAPI__AgreementMessage_1a7225c7fd9d517b262610f2bb4b0d77b2"></a>

Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1aa62a048cd9878ee2b33600f7f6ebce9b)`(bool NewValue)` <a id="structFRHAPI__AgreementMessage_1aa62a048cd9878ee2b33600f7f6ebce9b"></a>

Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true.

#### `public inline void `[`ClearNeedsPrivacyPolicy`](#structFRHAPI__AgreementMessage_1a348fe783e1dbf284bc53a43207e0bfee)`()` <a id="structFRHAPI__AgreementMessage_1a348fe783e1dbf284bc53a43207e0bfee"></a>

Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false.

#### `public inline bool `[`IsNeedsPrivacyPolicyDefaultValue`](#structFRHAPI__AgreementMessage_1a21c366b675bc08ace0486b94122e0a4b)`() const` <a id="structFRHAPI__AgreementMessage_1a21c366b675bc08ace0486b94122e0a4b"></a>

Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value.

#### `public inline void `[`SetNeedsPrivacyPolicyToDefault`](#structFRHAPI__AgreementMessage_1a5dc593776c4406f97a3fa94ad20adfc4)`()` <a id="structFRHAPI__AgreementMessage_1a5dc593776c4406f97a3fa94ad20adfc4"></a>

Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true.

