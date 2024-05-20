# RHAPI_LoginRequestV1 <a id="group__RHAPI__LoginRequestV1"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LoginRequestV1`](#structFRHAPI__LoginRequestV1) | 

## struct `FRHAPI_LoginRequestV1` <a id="structFRHAPI__LoginRequestV1"></a>

```
struct FRHAPI_LoginRequestV1
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_GrantType `[`GrantType`](#structFRHAPI__LoginRequestV1_1a5652f06d62aeb59dbb1b27481aef0f75) | The grant type to use for authentication.
`public FString `[`PortalAccessToken_Optional`](#structFRHAPI__LoginRequestV1_1a4a5fc4127eb3b9d333dd8ee017a6cac2) | Token or secret used to authenticate the provided grant type.
`public bool `[`PortalAccessToken_IsSet`](#structFRHAPI__LoginRequestV1_1aad18b9609d6bd7138a7c5c69fd15f2f7) | true if PortalAccessToken_Optional has been set to a value
`public FString `[`PortalDisplayName_Optional`](#structFRHAPI__LoginRequestV1_1a1c037515a08c315751b058d6ddf86072) | Some grant types support client-provided names.
`public bool `[`PortalDisplayName_IsSet`](#structFRHAPI__LoginRequestV1_1ac8e03fda49feff561c4881f61445dd2a) | true if PortalDisplayName_Optional has been set to a value
`public FString `[`PortalParentAccessToken_Optional`](#structFRHAPI__LoginRequestV1_1a32ed174ff27dd780d9d043c8568dc23d) | Some grant types have 2 tier authentication and require a second token/secret.
`public bool `[`PortalParentAccessToken_IsSet`](#structFRHAPI__LoginRequestV1_1a0a33be078d1a4be49d34b854274db998) | true if PortalParentAccessToken_Optional has been set to a value
`public FString `[`PortalParentDisplayName_Optional`](#structFRHAPI__LoginRequestV1_1aad759eada48cc1d902fea93eef176107) | Some grant types have 2 tier authentication and support a second display name.
`public bool `[`PortalParentDisplayName_IsSet`](#structFRHAPI__LoginRequestV1_1ac38a9eeaa42fe49b1afe001300fe1537) | true if PortalParentDisplayName_Optional has been set to a value
`public bool `[`IncludeRefresh_Optional`](#structFRHAPI__LoginRequestV1_1ab9e6144c919f8968d72a5de9f1bebe1e) | Indicates if the client wants a refresh token returned.
`public bool `[`IncludeRefresh_IsSet`](#structFRHAPI__LoginRequestV1_1a09bc6d1ee1551c4c01554ce440d6ec94) | true if IncludeRefresh_Optional has been set to a value
`public bool `[`AcceptEula_Optional`](#structFRHAPI__LoginRequestV1_1a444499cfb141928c2441a47dfab1cc62) | If true, the user has accepted the EULA.
`public bool `[`AcceptEula_IsSet`](#structFRHAPI__LoginRequestV1_1a305c9fbca31912e05edba91758eee181) | true if AcceptEula_Optional has been set to a value
`public bool `[`AcceptTos_Optional`](#structFRHAPI__LoginRequestV1_1a517f59a0050a2919652bb24db02b0deb) | If true, the user has accepted the Terms of Service.
`public bool `[`AcceptTos_IsSet`](#structFRHAPI__LoginRequestV1_1a9fe0e50766802bf249674d17b5472a0c) | true if AcceptTos_Optional has been set to a value
`public bool `[`AcceptPrivacyPolicy_Optional`](#structFRHAPI__LoginRequestV1_1a964804d16178c88b296410732f5be293) | If true, the user has accepted the Privacy Policy.
`public bool `[`AcceptPrivacyPolicy_IsSet`](#structFRHAPI__LoginRequestV1_1a0d79c6d0a330b85e6ce4ea3dfa7225d2) | true if AcceptPrivacyPolicy_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LoginRequestV1_1af6cb42d74d6be35b1cf28ef26da96045)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LoginRequestV1_1afb34e361a832a5965fc3f279d7366de1)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1aba328ef0495c5e7f8de2dad1725c4e67)`()` | Gets the value of GrantType.
`public inline const ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1a154a10b14c2931d90684345db5225116)`() const` | Gets the value of GrantType.
`public inline void `[`SetGrantType`](#structFRHAPI__LoginRequestV1_1affd35ca62a54def818ef0f2f7f919ead)`(ERHAPI_GrantType NewValue)` | Sets the value of GrantType.
`public inline FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a500cfdd5b03970a615295709ef4f71c6)`()` | Gets the value of PortalAccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1aa4121210b97dbe16c7eb87056eabfff7)`() const` | Gets the value of PortalAccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1abfbf4f8290626aa6741fcb1ebd9cde0f)`(const FString & DefaultValue) const` | Gets the value of PortalAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a279c5f65ccb418628f06bf6c99e215ce)`(FString & OutValue) const` | Fills OutValue with the value of PortalAccessToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1ab198a6684bcdcbb6fb0988dcef3e0c79)`()` | Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1aa0c2dcb877fa366ab1b304e564c5fd24)`() const` | Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a4fcbb03230869519b4dc4d6769d6d2ae)`(FString NewValue)` | Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true.
`public inline void `[`ClearPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a6f5f63b9a84c1480633c04d024b1f359)`()` | Clears the value of PortalAccessToken_Optional and sets PortalAccessToken_IsSet to false.
`public inline bool `[`IsPortalAccessTokenDefaultValue`](#structFRHAPI__LoginRequestV1_1abc9e48df88f10f0beb57b98cade49f29)`() const` | Returns true if PortalAccessToken_Optional is set and matches the default value.
`public inline void `[`SetPortalAccessTokenToDefault`](#structFRHAPI__LoginRequestV1_1af668f553eb393e4124e0f3ebe0a261c0)`()` | Sets the value of PortalAccessToken_Optional to its default and also sets PortalAccessToken_IsSet to true.
`public inline FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1aa7c7b24f58418ffe09990898041ce416)`()` | Gets the value of PortalDisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a8f45c6004925b665f43dafbb13072809)`() const` | Gets the value of PortalDisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a37e7a6121e17557a4a9a377ec30c48dd)`(const FString & DefaultValue) const` | Gets the value of PortalDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a2ef397bdba4436c2ce3b0092acec86ef)`(FString & OutValue) const` | Fills OutValue with the value of PortalDisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a2c3b54c262c258bec602acc0d9ee00ba)`()` | Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a8d97a6e1fb62de68b13285f83cda94a2)`() const` | Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ae4df2aba7332f33d89512aa773edb17d)`(FString NewValue)` | Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true.
`public inline void `[`ClearPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ab6d75d6ed5717f0a4fc920c480561f10)`()` | Clears the value of PortalDisplayName_Optional and sets PortalDisplayName_IsSet to false.
`public inline bool `[`IsPortalDisplayNameDefaultValue`](#structFRHAPI__LoginRequestV1_1a5d07c7544437f18f977ed60748c63d80)`() const` | Returns true if PortalDisplayName_Optional is set and matches the default value.
`public inline void `[`SetPortalDisplayNameToDefault`](#structFRHAPI__LoginRequestV1_1a34499db17134bd2404dc3ad90012f79b)`()` | Sets the value of PortalDisplayName_Optional to its default and also sets PortalDisplayName_IsSet to true.
`public inline FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a73bc91eaca44ab266015581552872671)`()` | Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aff9f6677ed15c45fcc7b530f666bd762)`() const` | Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1af0685ca91490ae927940b4163fd002d7)`(const FString & DefaultValue) const` | Gets the value of PortalParentAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aa80708f79901750929ae9df4385d870c)`(FString & OutValue) const` | Fills OutValue with the value of PortalParentAccessToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a859e53a2cc9ff794d536997221744989)`()` | Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a33bfb0e8c6c596cc79879cd6e5b03dd2)`() const` | Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a05166d93077849fe75e9e7b0063dd4fe)`(FString NewValue)` | Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true.
`public inline void `[`ClearPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aa6e2e26c9db08a28c88571332f901b60)`()` | Clears the value of PortalParentAccessToken_Optional and sets PortalParentAccessToken_IsSet to false.
`public inline bool `[`IsPortalParentAccessTokenDefaultValue`](#structFRHAPI__LoginRequestV1_1a294cb9fee89003b898f8f1fbcc05bdc0)`() const` | Returns true if PortalParentAccessToken_Optional is set and matches the default value.
`public inline void `[`SetPortalParentAccessTokenToDefault`](#structFRHAPI__LoginRequestV1_1a499de88fbdfd9c318e19a7e52164d1c9)`()` | Sets the value of PortalParentAccessToken_Optional to its default and also sets PortalParentAccessToken_IsSet to true.
`public inline FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a87248cc8e11cfa9bb4e62217f1896e50)`()` | Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a49878d9109c30ff70ef367ade8f143ac)`() const` | Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1ae47f983f548d89d186587368fa51bd15)`(const FString & DefaultValue) const` | Gets the value of PortalParentDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1aafb09e32a58bb4638c94cc2e74401e5d)`(FString & OutValue) const` | Fills OutValue with the value of PortalParentDisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1aa54106c578ff3ceac90f1872a813b84c)`()` | Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a3ceb4dfc8e731a0a81cd4579d2862259)`() const` | Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1aa8a00604555cac731a7a02728232556d)`(FString NewValue)` | Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true.
`public inline void `[`ClearPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a66e53166395f1d797f95122c25c772e6)`()` | Clears the value of PortalParentDisplayName_Optional and sets PortalParentDisplayName_IsSet to false.
`public inline bool `[`IsPortalParentDisplayNameDefaultValue`](#structFRHAPI__LoginRequestV1_1a446a83239fedd24f9e73457914ed047d)`() const` | Returns true if PortalParentDisplayName_Optional is set and matches the default value.
`public inline void `[`SetPortalParentDisplayNameToDefault`](#structFRHAPI__LoginRequestV1_1a1164bbe730b05f565c4a13ed43185deb)`()` | Sets the value of PortalParentDisplayName_Optional to its default and also sets PortalParentDisplayName_IsSet to true.
`public inline bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1af589970e7df955399675bc80f9e4261d)`()` | Gets the value of IncludeRefresh_Optional, regardless of it having been set.
`public inline const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a0ceb79ec47eb2944111b39c4d33628a0)`() const` | Gets the value of IncludeRefresh_Optional, regardless of it having been set.
`public inline const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1adbbba6ed9a7ea3675fa40360ff5535b4)`(const bool & DefaultValue) const` | Gets the value of IncludeRefresh_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a8a65c714e437b56c9f659c300faaf896)`(bool & OutValue) const` | Fills OutValue with the value of IncludeRefresh_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1aaef275d69e673715780f5692960c3138)`()` | Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1a3128f61e92909f8127a4ab5230dc1a75)`() const` | Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a189f961fd3ab79793d4fab7bfb9f3fe5)`(bool NewValue)` | Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true.
`public inline void `[`ClearIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a4d32f474e3ebfb2f98e1651b1ce5fb6e)`()` | Clears the value of IncludeRefresh_Optional and sets IncludeRefresh_IsSet to false.
`public inline bool `[`IsIncludeRefreshDefaultValue`](#structFRHAPI__LoginRequestV1_1a57a046c28fb74bba94aa6dfe43a29c9b)`() const` | Returns true if IncludeRefresh_Optional is set and matches the default value.
`public inline void `[`SetIncludeRefreshToDefault`](#structFRHAPI__LoginRequestV1_1a742c7d1a4e064be2c1469662a2a7dbf0)`()` | Sets the value of IncludeRefresh_Optional to its default and also sets IncludeRefresh_IsSet to true.
`public inline bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a823ae34c85aa46552ac971090bc950fe)`()` | Gets the value of AcceptEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1aed8670d00320ed87aaa67dc7dc6e46c3)`() const` | Gets the value of AcceptEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1aa209e8bbbcc1dd72936c0bf5e6cb7256)`(const bool & DefaultValue) const` | Gets the value of AcceptEula_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a18503c58dd0f2b019d9c0934d854d2d3)`(bool & OutValue) const` | Fills OutValue with the value of AcceptEula_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1a6b21d626ffdbbf55a7e19004ad40528d)`()` | Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1a37e30d178b51efa7be1125dff98c84d7)`() const` | Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAcceptEula`](#structFRHAPI__LoginRequestV1_1a3c0ee2f2175d9110a53bee55617c2cfd)`(bool NewValue)` | Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true.
`public inline void `[`ClearAcceptEula`](#structFRHAPI__LoginRequestV1_1a9b51780e9816a5cb2ca47c9f340385d2)`()` | Clears the value of AcceptEula_Optional and sets AcceptEula_IsSet to false.
`public inline bool `[`IsAcceptEulaDefaultValue`](#structFRHAPI__LoginRequestV1_1aef4204a66417da2e0395e78b5137de5b)`() const` | Returns true if AcceptEula_Optional is set and matches the default value.
`public inline void `[`SetAcceptEulaToDefault`](#structFRHAPI__LoginRequestV1_1aebff83f31849866bcd7698a35726408c)`()` | Sets the value of AcceptEula_Optional to its default and also sets AcceptEula_IsSet to true.
`public inline bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a880c5b33c9497a319d947fcafd529dd8)`()` | Gets the value of AcceptTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a8b7912427704ac14a9d681bc4756e634)`() const` | Gets the value of AcceptTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a8d699baa2294a26b55cf2b657da36c43)`(const bool & DefaultValue) const` | Gets the value of AcceptTos_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1ae7448deed42325473e4e99c6628ae2f3)`(bool & OutValue) const` | Fills OutValue with the value of AcceptTos_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1a3790b5ab75143c91907de5c50c8ef65a)`()` | Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1ac37c5bffd50c47a4b8d8af85a08eb613)`() const` | Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAcceptTos`](#structFRHAPI__LoginRequestV1_1aa1c5d72aead560fe730db4ecb3d69290)`(bool NewValue)` | Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true.
`public inline void `[`ClearAcceptTos`](#structFRHAPI__LoginRequestV1_1adabb1d08ab991ccc72c1fca427a2de5a)`()` | Clears the value of AcceptTos_Optional and sets AcceptTos_IsSet to false.
`public inline bool `[`IsAcceptTosDefaultValue`](#structFRHAPI__LoginRequestV1_1a8da59ecd9c57753f3174f98bdc3500f6)`() const` | Returns true if AcceptTos_Optional is set and matches the default value.
`public inline void `[`SetAcceptTosToDefault`](#structFRHAPI__LoginRequestV1_1ae5b328b14a4122950055ff4c7b45a3b6)`()` | Sets the value of AcceptTos_Optional to its default and also sets AcceptTos_IsSet to true.
`public inline bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a72c49774a7d06305b1e70adf2f9f16b0)`()` | Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a5211f25c09278ed8b505def309bd819e)`() const` | Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a9c04422a54ce634b6a5b615bfa3425da)`(const bool & DefaultValue) const` | Gets the value of AcceptPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a6e0492e3cbe4783d21105757d5818ca6)`(bool & OutValue) const` | Fills OutValue with the value of AcceptPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1a465ac74d30cfd19db80b02c392a17e70)`()` | Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1ac70c479de53ed15e6b2f215e93a22daa)`() const` | Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a9b846e726e9468dd7026d5ca52c16c88)`(bool NewValue)` | Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true.
`public inline void `[`ClearAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ae6935f79cb6cf3b44b05b88925e457be)`()` | Clears the value of AcceptPrivacyPolicy_Optional and sets AcceptPrivacyPolicy_IsSet to false.
`public inline bool `[`IsAcceptPrivacyPolicyDefaultValue`](#structFRHAPI__LoginRequestV1_1ad54685034fe9ad2ab281134c099d2f9e)`() const` | Returns true if AcceptPrivacyPolicy_Optional is set and matches the default value.
`public inline void `[`SetAcceptPrivacyPolicyToDefault`](#structFRHAPI__LoginRequestV1_1acd55a9f76eddf263489516ccf5bb712d)`()` | Sets the value of AcceptPrivacyPolicy_Optional to its default and also sets AcceptPrivacyPolicy_IsSet to true.

#### Members

#### `public ERHAPI_GrantType `[`GrantType`](#structFRHAPI__LoginRequestV1_1a5652f06d62aeb59dbb1b27481aef0f75) <a id="structFRHAPI__LoginRequestV1_1a5652f06d62aeb59dbb1b27481aef0f75"></a>

The grant type to use for authentication.

#### `public FString `[`PortalAccessToken_Optional`](#structFRHAPI__LoginRequestV1_1a4a5fc4127eb3b9d333dd8ee017a6cac2) <a id="structFRHAPI__LoginRequestV1_1a4a5fc4127eb3b9d333dd8ee017a6cac2"></a>

Token or secret used to authenticate the provided grant type.

#### `public bool `[`PortalAccessToken_IsSet`](#structFRHAPI__LoginRequestV1_1aad18b9609d6bd7138a7c5c69fd15f2f7) <a id="structFRHAPI__LoginRequestV1_1aad18b9609d6bd7138a7c5c69fd15f2f7"></a>

true if PortalAccessToken_Optional has been set to a value

#### `public FString `[`PortalDisplayName_Optional`](#structFRHAPI__LoginRequestV1_1a1c037515a08c315751b058d6ddf86072) <a id="structFRHAPI__LoginRequestV1_1a1c037515a08c315751b058d6ddf86072"></a>

Some grant types support client-provided names.

#### `public bool `[`PortalDisplayName_IsSet`](#structFRHAPI__LoginRequestV1_1ac8e03fda49feff561c4881f61445dd2a) <a id="structFRHAPI__LoginRequestV1_1ac8e03fda49feff561c4881f61445dd2a"></a>

true if PortalDisplayName_Optional has been set to a value

#### `public FString `[`PortalParentAccessToken_Optional`](#structFRHAPI__LoginRequestV1_1a32ed174ff27dd780d9d043c8568dc23d) <a id="structFRHAPI__LoginRequestV1_1a32ed174ff27dd780d9d043c8568dc23d"></a>

Some grant types have 2 tier authentication and require a second token/secret.

#### `public bool `[`PortalParentAccessToken_IsSet`](#structFRHAPI__LoginRequestV1_1a0a33be078d1a4be49d34b854274db998) <a id="structFRHAPI__LoginRequestV1_1a0a33be078d1a4be49d34b854274db998"></a>

true if PortalParentAccessToken_Optional has been set to a value

#### `public FString `[`PortalParentDisplayName_Optional`](#structFRHAPI__LoginRequestV1_1aad759eada48cc1d902fea93eef176107) <a id="structFRHAPI__LoginRequestV1_1aad759eada48cc1d902fea93eef176107"></a>

Some grant types have 2 tier authentication and support a second display name.

#### `public bool `[`PortalParentDisplayName_IsSet`](#structFRHAPI__LoginRequestV1_1ac38a9eeaa42fe49b1afe001300fe1537) <a id="structFRHAPI__LoginRequestV1_1ac38a9eeaa42fe49b1afe001300fe1537"></a>

true if PortalParentDisplayName_Optional has been set to a value

#### `public bool `[`IncludeRefresh_Optional`](#structFRHAPI__LoginRequestV1_1ab9e6144c919f8968d72a5de9f1bebe1e) <a id="structFRHAPI__LoginRequestV1_1ab9e6144c919f8968d72a5de9f1bebe1e"></a>

Indicates if the client wants a refresh token returned.

#### `public bool `[`IncludeRefresh_IsSet`](#structFRHAPI__LoginRequestV1_1a09bc6d1ee1551c4c01554ce440d6ec94) <a id="structFRHAPI__LoginRequestV1_1a09bc6d1ee1551c4c01554ce440d6ec94"></a>

true if IncludeRefresh_Optional has been set to a value

#### `public bool `[`AcceptEula_Optional`](#structFRHAPI__LoginRequestV1_1a444499cfb141928c2441a47dfab1cc62) <a id="structFRHAPI__LoginRequestV1_1a444499cfb141928c2441a47dfab1cc62"></a>

If true, the user has accepted the EULA.

#### `public bool `[`AcceptEula_IsSet`](#structFRHAPI__LoginRequestV1_1a305c9fbca31912e05edba91758eee181) <a id="structFRHAPI__LoginRequestV1_1a305c9fbca31912e05edba91758eee181"></a>

true if AcceptEula_Optional has been set to a value

#### `public bool `[`AcceptTos_Optional`](#structFRHAPI__LoginRequestV1_1a517f59a0050a2919652bb24db02b0deb) <a id="structFRHAPI__LoginRequestV1_1a517f59a0050a2919652bb24db02b0deb"></a>

If true, the user has accepted the Terms of Service.

#### `public bool `[`AcceptTos_IsSet`](#structFRHAPI__LoginRequestV1_1a9fe0e50766802bf249674d17b5472a0c) <a id="structFRHAPI__LoginRequestV1_1a9fe0e50766802bf249674d17b5472a0c"></a>

true if AcceptTos_Optional has been set to a value

#### `public bool `[`AcceptPrivacyPolicy_Optional`](#structFRHAPI__LoginRequestV1_1a964804d16178c88b296410732f5be293) <a id="structFRHAPI__LoginRequestV1_1a964804d16178c88b296410732f5be293"></a>

If true, the user has accepted the Privacy Policy.

#### `public bool `[`AcceptPrivacyPolicy_IsSet`](#structFRHAPI__LoginRequestV1_1a0d79c6d0a330b85e6ce4ea3dfa7225d2) <a id="structFRHAPI__LoginRequestV1_1a0d79c6d0a330b85e6ce4ea3dfa7225d2"></a>

true if AcceptPrivacyPolicy_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__LoginRequestV1_1af6cb42d74d6be35b1cf28ef26da96045)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LoginRequestV1_1af6cb42d74d6be35b1cf28ef26da96045"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LoginRequestV1_1afb34e361a832a5965fc3f279d7366de1)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LoginRequestV1_1afb34e361a832a5965fc3f279d7366de1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1aba328ef0495c5e7f8de2dad1725c4e67)`()` <a id="structFRHAPI__LoginRequestV1_1aba328ef0495c5e7f8de2dad1725c4e67"></a>

Gets the value of GrantType.

#### `public inline const ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1a154a10b14c2931d90684345db5225116)`() const` <a id="structFRHAPI__LoginRequestV1_1a154a10b14c2931d90684345db5225116"></a>

Gets the value of GrantType.

#### `public inline void `[`SetGrantType`](#structFRHAPI__LoginRequestV1_1affd35ca62a54def818ef0f2f7f919ead)`(ERHAPI_GrantType NewValue)` <a id="structFRHAPI__LoginRequestV1_1affd35ca62a54def818ef0f2f7f919ead"></a>

Sets the value of GrantType.

#### `public inline FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a500cfdd5b03970a615295709ef4f71c6)`()` <a id="structFRHAPI__LoginRequestV1_1a500cfdd5b03970a615295709ef4f71c6"></a>

Gets the value of PortalAccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1aa4121210b97dbe16c7eb87056eabfff7)`() const` <a id="structFRHAPI__LoginRequestV1_1aa4121210b97dbe16c7eb87056eabfff7"></a>

Gets the value of PortalAccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1abfbf4f8290626aa6741fcb1ebd9cde0f)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1abfbf4f8290626aa6741fcb1ebd9cde0f"></a>

Gets the value of PortalAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a279c5f65ccb418628f06bf6c99e215ce)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a279c5f65ccb418628f06bf6c99e215ce"></a>

Fills OutValue with the value of PortalAccessToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1ab198a6684bcdcbb6fb0988dcef3e0c79)`()` <a id="structFRHAPI__LoginRequestV1_1ab198a6684bcdcbb6fb0988dcef3e0c79"></a>

Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1aa0c2dcb877fa366ab1b304e564c5fd24)`() const` <a id="structFRHAPI__LoginRequestV1_1aa0c2dcb877fa366ab1b304e564c5fd24"></a>

Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a4fcbb03230869519b4dc4d6769d6d2ae)`(FString NewValue)` <a id="structFRHAPI__LoginRequestV1_1a4fcbb03230869519b4dc4d6769d6d2ae"></a>

Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true.

#### `public inline void `[`ClearPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a6f5f63b9a84c1480633c04d024b1f359)`()` <a id="structFRHAPI__LoginRequestV1_1a6f5f63b9a84c1480633c04d024b1f359"></a>

Clears the value of PortalAccessToken_Optional and sets PortalAccessToken_IsSet to false.

#### `public inline bool `[`IsPortalAccessTokenDefaultValue`](#structFRHAPI__LoginRequestV1_1abc9e48df88f10f0beb57b98cade49f29)`() const` <a id="structFRHAPI__LoginRequestV1_1abc9e48df88f10f0beb57b98cade49f29"></a>

Returns true if PortalAccessToken_Optional is set and matches the default value.

#### `public inline void `[`SetPortalAccessTokenToDefault`](#structFRHAPI__LoginRequestV1_1af668f553eb393e4124e0f3ebe0a261c0)`()` <a id="structFRHAPI__LoginRequestV1_1af668f553eb393e4124e0f3ebe0a261c0"></a>

Sets the value of PortalAccessToken_Optional to its default and also sets PortalAccessToken_IsSet to true.

#### `public inline FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1aa7c7b24f58418ffe09990898041ce416)`()` <a id="structFRHAPI__LoginRequestV1_1aa7c7b24f58418ffe09990898041ce416"></a>

Gets the value of PortalDisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a8f45c6004925b665f43dafbb13072809)`() const` <a id="structFRHAPI__LoginRequestV1_1a8f45c6004925b665f43dafbb13072809"></a>

Gets the value of PortalDisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a37e7a6121e17557a4a9a377ec30c48dd)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a37e7a6121e17557a4a9a377ec30c48dd"></a>

Gets the value of PortalDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a2ef397bdba4436c2ce3b0092acec86ef)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a2ef397bdba4436c2ce3b0092acec86ef"></a>

Fills OutValue with the value of PortalDisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a2c3b54c262c258bec602acc0d9ee00ba)`()` <a id="structFRHAPI__LoginRequestV1_1a2c3b54c262c258bec602acc0d9ee00ba"></a>

Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a8d97a6e1fb62de68b13285f83cda94a2)`() const` <a id="structFRHAPI__LoginRequestV1_1a8d97a6e1fb62de68b13285f83cda94a2"></a>

Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ae4df2aba7332f33d89512aa773edb17d)`(FString NewValue)` <a id="structFRHAPI__LoginRequestV1_1ae4df2aba7332f33d89512aa773edb17d"></a>

Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true.

#### `public inline void `[`ClearPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ab6d75d6ed5717f0a4fc920c480561f10)`()` <a id="structFRHAPI__LoginRequestV1_1ab6d75d6ed5717f0a4fc920c480561f10"></a>

Clears the value of PortalDisplayName_Optional and sets PortalDisplayName_IsSet to false.

#### `public inline bool `[`IsPortalDisplayNameDefaultValue`](#structFRHAPI__LoginRequestV1_1a5d07c7544437f18f977ed60748c63d80)`() const` <a id="structFRHAPI__LoginRequestV1_1a5d07c7544437f18f977ed60748c63d80"></a>

Returns true if PortalDisplayName_Optional is set and matches the default value.

#### `public inline void `[`SetPortalDisplayNameToDefault`](#structFRHAPI__LoginRequestV1_1a34499db17134bd2404dc3ad90012f79b)`()` <a id="structFRHAPI__LoginRequestV1_1a34499db17134bd2404dc3ad90012f79b"></a>

Sets the value of PortalDisplayName_Optional to its default and also sets PortalDisplayName_IsSet to true.

#### `public inline FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a73bc91eaca44ab266015581552872671)`()` <a id="structFRHAPI__LoginRequestV1_1a73bc91eaca44ab266015581552872671"></a>

Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aff9f6677ed15c45fcc7b530f666bd762)`() const` <a id="structFRHAPI__LoginRequestV1_1aff9f6677ed15c45fcc7b530f666bd762"></a>

Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1af0685ca91490ae927940b4163fd002d7)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1af0685ca91490ae927940b4163fd002d7"></a>

Gets the value of PortalParentAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aa80708f79901750929ae9df4385d870c)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1aa80708f79901750929ae9df4385d870c"></a>

Fills OutValue with the value of PortalParentAccessToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a859e53a2cc9ff794d536997221744989)`()` <a id="structFRHAPI__LoginRequestV1_1a859e53a2cc9ff794d536997221744989"></a>

Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a33bfb0e8c6c596cc79879cd6e5b03dd2)`() const` <a id="structFRHAPI__LoginRequestV1_1a33bfb0e8c6c596cc79879cd6e5b03dd2"></a>

Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a05166d93077849fe75e9e7b0063dd4fe)`(FString NewValue)` <a id="structFRHAPI__LoginRequestV1_1a05166d93077849fe75e9e7b0063dd4fe"></a>

Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true.

#### `public inline void `[`ClearPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aa6e2e26c9db08a28c88571332f901b60)`()` <a id="structFRHAPI__LoginRequestV1_1aa6e2e26c9db08a28c88571332f901b60"></a>

Clears the value of PortalParentAccessToken_Optional and sets PortalParentAccessToken_IsSet to false.

#### `public inline bool `[`IsPortalParentAccessTokenDefaultValue`](#structFRHAPI__LoginRequestV1_1a294cb9fee89003b898f8f1fbcc05bdc0)`() const` <a id="structFRHAPI__LoginRequestV1_1a294cb9fee89003b898f8f1fbcc05bdc0"></a>

Returns true if PortalParentAccessToken_Optional is set and matches the default value.

#### `public inline void `[`SetPortalParentAccessTokenToDefault`](#structFRHAPI__LoginRequestV1_1a499de88fbdfd9c318e19a7e52164d1c9)`()` <a id="structFRHAPI__LoginRequestV1_1a499de88fbdfd9c318e19a7e52164d1c9"></a>

Sets the value of PortalParentAccessToken_Optional to its default and also sets PortalParentAccessToken_IsSet to true.

#### `public inline FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a87248cc8e11cfa9bb4e62217f1896e50)`()` <a id="structFRHAPI__LoginRequestV1_1a87248cc8e11cfa9bb4e62217f1896e50"></a>

Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a49878d9109c30ff70ef367ade8f143ac)`() const` <a id="structFRHAPI__LoginRequestV1_1a49878d9109c30ff70ef367ade8f143ac"></a>

Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1ae47f983f548d89d186587368fa51bd15)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1ae47f983f548d89d186587368fa51bd15"></a>

Gets the value of PortalParentDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1aafb09e32a58bb4638c94cc2e74401e5d)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1aafb09e32a58bb4638c94cc2e74401e5d"></a>

Fills OutValue with the value of PortalParentDisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1aa54106c578ff3ceac90f1872a813b84c)`()` <a id="structFRHAPI__LoginRequestV1_1aa54106c578ff3ceac90f1872a813b84c"></a>

Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a3ceb4dfc8e731a0a81cd4579d2862259)`() const` <a id="structFRHAPI__LoginRequestV1_1a3ceb4dfc8e731a0a81cd4579d2862259"></a>

Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1aa8a00604555cac731a7a02728232556d)`(FString NewValue)` <a id="structFRHAPI__LoginRequestV1_1aa8a00604555cac731a7a02728232556d"></a>

Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true.

#### `public inline void `[`ClearPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a66e53166395f1d797f95122c25c772e6)`()` <a id="structFRHAPI__LoginRequestV1_1a66e53166395f1d797f95122c25c772e6"></a>

Clears the value of PortalParentDisplayName_Optional and sets PortalParentDisplayName_IsSet to false.

#### `public inline bool `[`IsPortalParentDisplayNameDefaultValue`](#structFRHAPI__LoginRequestV1_1a446a83239fedd24f9e73457914ed047d)`() const` <a id="structFRHAPI__LoginRequestV1_1a446a83239fedd24f9e73457914ed047d"></a>

Returns true if PortalParentDisplayName_Optional is set and matches the default value.

#### `public inline void `[`SetPortalParentDisplayNameToDefault`](#structFRHAPI__LoginRequestV1_1a1164bbe730b05f565c4a13ed43185deb)`()` <a id="structFRHAPI__LoginRequestV1_1a1164bbe730b05f565c4a13ed43185deb"></a>

Sets the value of PortalParentDisplayName_Optional to its default and also sets PortalParentDisplayName_IsSet to true.

#### `public inline bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1af589970e7df955399675bc80f9e4261d)`()` <a id="structFRHAPI__LoginRequestV1_1af589970e7df955399675bc80f9e4261d"></a>

Gets the value of IncludeRefresh_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a0ceb79ec47eb2944111b39c4d33628a0)`() const` <a id="structFRHAPI__LoginRequestV1_1a0ceb79ec47eb2944111b39c4d33628a0"></a>

Gets the value of IncludeRefresh_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1adbbba6ed9a7ea3675fa40360ff5535b4)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1adbbba6ed9a7ea3675fa40360ff5535b4"></a>

Gets the value of IncludeRefresh_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a8a65c714e437b56c9f659c300faaf896)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a8a65c714e437b56c9f659c300faaf896"></a>

Fills OutValue with the value of IncludeRefresh_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1aaef275d69e673715780f5692960c3138)`()` <a id="structFRHAPI__LoginRequestV1_1aaef275d69e673715780f5692960c3138"></a>

Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1a3128f61e92909f8127a4ab5230dc1a75)`() const` <a id="structFRHAPI__LoginRequestV1_1a3128f61e92909f8127a4ab5230dc1a75"></a>

Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a189f961fd3ab79793d4fab7bfb9f3fe5)`(bool NewValue)` <a id="structFRHAPI__LoginRequestV1_1a189f961fd3ab79793d4fab7bfb9f3fe5"></a>

Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true.

#### `public inline void `[`ClearIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a4d32f474e3ebfb2f98e1651b1ce5fb6e)`()` <a id="structFRHAPI__LoginRequestV1_1a4d32f474e3ebfb2f98e1651b1ce5fb6e"></a>

Clears the value of IncludeRefresh_Optional and sets IncludeRefresh_IsSet to false.

#### `public inline bool `[`IsIncludeRefreshDefaultValue`](#structFRHAPI__LoginRequestV1_1a57a046c28fb74bba94aa6dfe43a29c9b)`() const` <a id="structFRHAPI__LoginRequestV1_1a57a046c28fb74bba94aa6dfe43a29c9b"></a>

Returns true if IncludeRefresh_Optional is set and matches the default value.

#### `public inline void `[`SetIncludeRefreshToDefault`](#structFRHAPI__LoginRequestV1_1a742c7d1a4e064be2c1469662a2a7dbf0)`()` <a id="structFRHAPI__LoginRequestV1_1a742c7d1a4e064be2c1469662a2a7dbf0"></a>

Sets the value of IncludeRefresh_Optional to its default and also sets IncludeRefresh_IsSet to true.

#### `public inline bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a823ae34c85aa46552ac971090bc950fe)`()` <a id="structFRHAPI__LoginRequestV1_1a823ae34c85aa46552ac971090bc950fe"></a>

Gets the value of AcceptEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1aed8670d00320ed87aaa67dc7dc6e46c3)`() const` <a id="structFRHAPI__LoginRequestV1_1aed8670d00320ed87aaa67dc7dc6e46c3"></a>

Gets the value of AcceptEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1aa209e8bbbcc1dd72936c0bf5e6cb7256)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1aa209e8bbbcc1dd72936c0bf5e6cb7256"></a>

Gets the value of AcceptEula_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a18503c58dd0f2b019d9c0934d854d2d3)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a18503c58dd0f2b019d9c0934d854d2d3"></a>

Fills OutValue with the value of AcceptEula_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1a6b21d626ffdbbf55a7e19004ad40528d)`()` <a id="structFRHAPI__LoginRequestV1_1a6b21d626ffdbbf55a7e19004ad40528d"></a>

Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1a37e30d178b51efa7be1125dff98c84d7)`() const` <a id="structFRHAPI__LoginRequestV1_1a37e30d178b51efa7be1125dff98c84d7"></a>

Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAcceptEula`](#structFRHAPI__LoginRequestV1_1a3c0ee2f2175d9110a53bee55617c2cfd)`(bool NewValue)` <a id="structFRHAPI__LoginRequestV1_1a3c0ee2f2175d9110a53bee55617c2cfd"></a>

Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true.

#### `public inline void `[`ClearAcceptEula`](#structFRHAPI__LoginRequestV1_1a9b51780e9816a5cb2ca47c9f340385d2)`()` <a id="structFRHAPI__LoginRequestV1_1a9b51780e9816a5cb2ca47c9f340385d2"></a>

Clears the value of AcceptEula_Optional and sets AcceptEula_IsSet to false.

#### `public inline bool `[`IsAcceptEulaDefaultValue`](#structFRHAPI__LoginRequestV1_1aef4204a66417da2e0395e78b5137de5b)`() const` <a id="structFRHAPI__LoginRequestV1_1aef4204a66417da2e0395e78b5137de5b"></a>

Returns true if AcceptEula_Optional is set and matches the default value.

#### `public inline void `[`SetAcceptEulaToDefault`](#structFRHAPI__LoginRequestV1_1aebff83f31849866bcd7698a35726408c)`()` <a id="structFRHAPI__LoginRequestV1_1aebff83f31849866bcd7698a35726408c"></a>

Sets the value of AcceptEula_Optional to its default and also sets AcceptEula_IsSet to true.

#### `public inline bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a880c5b33c9497a319d947fcafd529dd8)`()` <a id="structFRHAPI__LoginRequestV1_1a880c5b33c9497a319d947fcafd529dd8"></a>

Gets the value of AcceptTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a8b7912427704ac14a9d681bc4756e634)`() const` <a id="structFRHAPI__LoginRequestV1_1a8b7912427704ac14a9d681bc4756e634"></a>

Gets the value of AcceptTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a8d699baa2294a26b55cf2b657da36c43)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a8d699baa2294a26b55cf2b657da36c43"></a>

Gets the value of AcceptTos_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1ae7448deed42325473e4e99c6628ae2f3)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1ae7448deed42325473e4e99c6628ae2f3"></a>

Fills OutValue with the value of AcceptTos_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1a3790b5ab75143c91907de5c50c8ef65a)`()` <a id="structFRHAPI__LoginRequestV1_1a3790b5ab75143c91907de5c50c8ef65a"></a>

Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1ac37c5bffd50c47a4b8d8af85a08eb613)`() const` <a id="structFRHAPI__LoginRequestV1_1ac37c5bffd50c47a4b8d8af85a08eb613"></a>

Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAcceptTos`](#structFRHAPI__LoginRequestV1_1aa1c5d72aead560fe730db4ecb3d69290)`(bool NewValue)` <a id="structFRHAPI__LoginRequestV1_1aa1c5d72aead560fe730db4ecb3d69290"></a>

Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true.

#### `public inline void `[`ClearAcceptTos`](#structFRHAPI__LoginRequestV1_1adabb1d08ab991ccc72c1fca427a2de5a)`()` <a id="structFRHAPI__LoginRequestV1_1adabb1d08ab991ccc72c1fca427a2de5a"></a>

Clears the value of AcceptTos_Optional and sets AcceptTos_IsSet to false.

#### `public inline bool `[`IsAcceptTosDefaultValue`](#structFRHAPI__LoginRequestV1_1a8da59ecd9c57753f3174f98bdc3500f6)`() const` <a id="structFRHAPI__LoginRequestV1_1a8da59ecd9c57753f3174f98bdc3500f6"></a>

Returns true if AcceptTos_Optional is set and matches the default value.

#### `public inline void `[`SetAcceptTosToDefault`](#structFRHAPI__LoginRequestV1_1ae5b328b14a4122950055ff4c7b45a3b6)`()` <a id="structFRHAPI__LoginRequestV1_1ae5b328b14a4122950055ff4c7b45a3b6"></a>

Sets the value of AcceptTos_Optional to its default and also sets AcceptTos_IsSet to true.

#### `public inline bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a72c49774a7d06305b1e70adf2f9f16b0)`()` <a id="structFRHAPI__LoginRequestV1_1a72c49774a7d06305b1e70adf2f9f16b0"></a>

Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a5211f25c09278ed8b505def309bd819e)`() const` <a id="structFRHAPI__LoginRequestV1_1a5211f25c09278ed8b505def309bd819e"></a>

Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a9c04422a54ce634b6a5b615bfa3425da)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a9c04422a54ce634b6a5b615bfa3425da"></a>

Gets the value of AcceptPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a6e0492e3cbe4783d21105757d5818ca6)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a6e0492e3cbe4783d21105757d5818ca6"></a>

Fills OutValue with the value of AcceptPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1a465ac74d30cfd19db80b02c392a17e70)`()` <a id="structFRHAPI__LoginRequestV1_1a465ac74d30cfd19db80b02c392a17e70"></a>

Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1ac70c479de53ed15e6b2f215e93a22daa)`() const` <a id="structFRHAPI__LoginRequestV1_1ac70c479de53ed15e6b2f215e93a22daa"></a>

Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a9b846e726e9468dd7026d5ca52c16c88)`(bool NewValue)` <a id="structFRHAPI__LoginRequestV1_1a9b846e726e9468dd7026d5ca52c16c88"></a>

Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true.

#### `public inline void `[`ClearAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ae6935f79cb6cf3b44b05b88925e457be)`()` <a id="structFRHAPI__LoginRequestV1_1ae6935f79cb6cf3b44b05b88925e457be"></a>

Clears the value of AcceptPrivacyPolicy_Optional and sets AcceptPrivacyPolicy_IsSet to false.

#### `public inline bool `[`IsAcceptPrivacyPolicyDefaultValue`](#structFRHAPI__LoginRequestV1_1ad54685034fe9ad2ab281134c099d2f9e)`() const` <a id="structFRHAPI__LoginRequestV1_1ad54685034fe9ad2ab281134c099d2f9e"></a>

Returns true if AcceptPrivacyPolicy_Optional is set and matches the default value.

#### `public inline void `[`SetAcceptPrivacyPolicyToDefault`](#structFRHAPI__LoginRequestV1_1acd55a9f76eddf263489516ccf5bb712d)`()` <a id="structFRHAPI__LoginRequestV1_1acd55a9f76eddf263489516ccf5bb712d"></a>

Sets the value of AcceptPrivacyPolicy_Optional to its default and also sets AcceptPrivacyPolicy_IsSet to true.

