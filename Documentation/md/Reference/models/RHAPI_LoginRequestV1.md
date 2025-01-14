---
title: RHAPI_LoginRequestV1
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LoginRequestV1`](#structFRHAPI__LoginRequestV1) | 

## struct `FRHAPI_LoginRequestV1` <a id="structFRHAPI__LoginRequestV1"></a>

```
struct FRHAPI_LoginRequestV1
  : public FRHAPI_Model
```

### Summary

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
`public virtual bool `[`FromJson`](#structFRHAPI__LoginRequestV1_1a32a723c4cf3f7b315d5748712118ab3c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LoginRequestV1_1a792a31d7278ea1255beaab47a1fda643)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1a0b7fff031c248a023d7b1c9c33ef868b)`()` | Gets the value of GrantType.
`public inline const ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1ad01e35b48d5efeea5903f82d04c53661)`() const` | Gets the value of GrantType.
`public inline void `[`SetGrantType`](#structFRHAPI__LoginRequestV1_1a6eb406fdb4c5c76f6be6ebdf15c8136d)`(const ERHAPI_GrantType & NewValue)` | Sets the value of GrantType.
`public inline void `[`SetGrantType`](#structFRHAPI__LoginRequestV1_1a86ccbad4059e11e7e2392bc7eb6754d0)`(ERHAPI_GrantType && NewValue)` | Sets the value of GrantType using move semantics.
`public inline FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a82bfa08be607f5e6b250bb7234b44c42)`()` | Gets the value of PortalAccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a96cfd3f779c869460de8fea9c849e1fb)`() const` | Gets the value of PortalAccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a26046c453a0eec7529004bdb8de76ec6)`(const FString & DefaultValue) const` | Gets the value of PortalAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a279c5f65ccb418628f06bf6c99e215ce)`(FString & OutValue) const` | Fills OutValue with the value of PortalAccessToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a7970692ecb567444870588437aca4ea0)`()` | Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a92c7e05bf90c5f0eb897287a1fb65108)`() const` | Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1ae6fbf43a39cb1d0e774756c4566f49d2)`(const FString & NewValue)` | Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true.
`public inline void `[`SetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a5b809f4b6f03b42c5064335cbe8c3ef8)`(FString && NewValue)` | Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true using move semantics.
`public inline void `[`ClearPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a6f5f63b9a84c1480633c04d024b1f359)`()` | Clears the value of PortalAccessToken_Optional and sets PortalAccessToken_IsSet to false.
`public inline bool `[`IsPortalAccessTokenSet`](#structFRHAPI__LoginRequestV1_1a713ab90a95d7ef0bcc7635cba5a86a70)`() const` | Checks whether PortalAccessToken_Optional has been set.
`public inline bool `[`IsPortalAccessTokenDefaultValue`](#structFRHAPI__LoginRequestV1_1abc9e48df88f10f0beb57b98cade49f29)`() const` | Returns true if PortalAccessToken_Optional is set and matches the default value.
`public inline void `[`SetPortalAccessTokenToDefault`](#structFRHAPI__LoginRequestV1_1af668f553eb393e4124e0f3ebe0a261c0)`()` | Sets the value of PortalAccessToken_Optional to its default and also sets PortalAccessToken_IsSet to true.
`public inline FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1aedf6f68ee704f661fe1cd4317f419fe4)`()` | Gets the value of PortalDisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a7770e70525b22311239eb504636d7d95)`() const` | Gets the value of PortalDisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a65270fb95cbd6bc8783ea424be1c53eb)`(const FString & DefaultValue) const` | Gets the value of PortalDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a2ef397bdba4436c2ce3b0092acec86ef)`(FString & OutValue) const` | Fills OutValue with the value of PortalDisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1adc001b24cecc4b20909cf321977b6270)`()` | Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a634662a07bf23469abe310f277c75ce7)`() const` | Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1abdaa64f24c4e3b503c250d08cd211baf)`(const FString & NewValue)` | Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true.
`public inline void `[`SetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a6f8462b4df60a8a487737055472d2d74)`(FString && NewValue)` | Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true using move semantics.
`public inline void `[`ClearPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ab6d75d6ed5717f0a4fc920c480561f10)`()` | Clears the value of PortalDisplayName_Optional and sets PortalDisplayName_IsSet to false.
`public inline bool `[`IsPortalDisplayNameSet`](#structFRHAPI__LoginRequestV1_1a4e3978cbf76b38171136aef3b1e3c3cd)`() const` | Checks whether PortalDisplayName_Optional has been set.
`public inline bool `[`IsPortalDisplayNameDefaultValue`](#structFRHAPI__LoginRequestV1_1a5d07c7544437f18f977ed60748c63d80)`() const` | Returns true if PortalDisplayName_Optional is set and matches the default value.
`public inline void `[`SetPortalDisplayNameToDefault`](#structFRHAPI__LoginRequestV1_1a34499db17134bd2404dc3ad90012f79b)`()` | Sets the value of PortalDisplayName_Optional to its default and also sets PortalDisplayName_IsSet to true.
`public inline FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1ab2f1eb65d648e6c0223d1a1f3992c8d0)`()` | Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aae9c8a222fe5bc1a58f95e1d0b501c39)`() const` | Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aeaa0237d593022b9ef192b7118dee9e1)`(const FString & DefaultValue) const` | Gets the value of PortalParentAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aa80708f79901750929ae9df4385d870c)`(FString & OutValue) const` | Fills OutValue with the value of PortalParentAccessToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1ac4980ddd3b13195e82f5389eac3b7f02)`()` | Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a587fa3ceab5cc47a4676001c6a3349d1)`() const` | Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a224eb93b0cd9897d9da71eaab436c3b4)`(const FString & NewValue)` | Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true.
`public inline void `[`SetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a1ddba65ea655cd21597ef26277e26c0a)`(FString && NewValue)` | Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true using move semantics.
`public inline void `[`ClearPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aa6e2e26c9db08a28c88571332f901b60)`()` | Clears the value of PortalParentAccessToken_Optional and sets PortalParentAccessToken_IsSet to false.
`public inline bool `[`IsPortalParentAccessTokenSet`](#structFRHAPI__LoginRequestV1_1a3412cbabad02f9e0b15ea38d2d673e77)`() const` | Checks whether PortalParentAccessToken_Optional has been set.
`public inline bool `[`IsPortalParentAccessTokenDefaultValue`](#structFRHAPI__LoginRequestV1_1a294cb9fee89003b898f8f1fbcc05bdc0)`() const` | Returns true if PortalParentAccessToken_Optional is set and matches the default value.
`public inline void `[`SetPortalParentAccessTokenToDefault`](#structFRHAPI__LoginRequestV1_1a499de88fbdfd9c318e19a7e52164d1c9)`()` | Sets the value of PortalParentAccessToken_Optional to its default and also sets PortalParentAccessToken_IsSet to true.
`public inline FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a301dc45bed9b897b57156dbca21132c4)`()` | Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1aea3bcc5fb6a45219d80678680522509d)`() const` | Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a0a90771d56f43fe04ce261eb718b5fea)`(const FString & DefaultValue) const` | Gets the value of PortalParentDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1aafb09e32a58bb4638c94cc2e74401e5d)`(FString & OutValue) const` | Fills OutValue with the value of PortalParentDisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a64b052f041b3fa711299b215c50bc9d3)`()` | Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1acc68b855f869cc6c51a73c75a763bd3a)`() const` | Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1ac0f8bfc328236a5c9da05a02469b0a4f)`(const FString & NewValue)` | Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true.
`public inline void `[`SetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1ad08a2932de06c8dc44e7654d18541339)`(FString && NewValue)` | Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true using move semantics.
`public inline void `[`ClearPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a66e53166395f1d797f95122c25c772e6)`()` | Clears the value of PortalParentDisplayName_Optional and sets PortalParentDisplayName_IsSet to false.
`public inline bool `[`IsPortalParentDisplayNameSet`](#structFRHAPI__LoginRequestV1_1abafa12efa4893800f741d7feec070b19)`() const` | Checks whether PortalParentDisplayName_Optional has been set.
`public inline bool `[`IsPortalParentDisplayNameDefaultValue`](#structFRHAPI__LoginRequestV1_1a446a83239fedd24f9e73457914ed047d)`() const` | Returns true if PortalParentDisplayName_Optional is set and matches the default value.
`public inline void `[`SetPortalParentDisplayNameToDefault`](#structFRHAPI__LoginRequestV1_1a1164bbe730b05f565c4a13ed43185deb)`()` | Sets the value of PortalParentDisplayName_Optional to its default and also sets PortalParentDisplayName_IsSet to true.
`public inline bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a4954fa727ba0da1c698050afc3fa5eb8)`()` | Gets the value of IncludeRefresh_Optional, regardless of it having been set.
`public inline const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a98edac78ed83c474e47f742c1c467554)`() const` | Gets the value of IncludeRefresh_Optional, regardless of it having been set.
`public inline const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a240cf91fb16b85eace460790df2da99f)`(const bool & DefaultValue) const` | Gets the value of IncludeRefresh_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a8a65c714e437b56c9f659c300faaf896)`(bool & OutValue) const` | Fills OutValue with the value of IncludeRefresh_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1a9e19c9e14a16aabe1a66a99149611c52)`()` | Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1a6f086d9ab668e002183f68815f75a10c)`() const` | Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a92255bddc919371134d3cef18d44d23b)`(const bool & NewValue)` | Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true.
`public inline void `[`SetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1adee83c2d6bff6635921f6bc9634b3fcb)`(bool && NewValue)` | Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true using move semantics.
`public inline void `[`ClearIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a4d32f474e3ebfb2f98e1651b1ce5fb6e)`()` | Clears the value of IncludeRefresh_Optional and sets IncludeRefresh_IsSet to false.
`public inline bool `[`IsIncludeRefreshSet`](#structFRHAPI__LoginRequestV1_1a6a08ae3965ff5c9fb43dd1b9684bb833)`() const` | Checks whether IncludeRefresh_Optional has been set.
`public inline bool `[`IsIncludeRefreshDefaultValue`](#structFRHAPI__LoginRequestV1_1a57a046c28fb74bba94aa6dfe43a29c9b)`() const` | Returns true if IncludeRefresh_Optional is set and matches the default value.
`public inline void `[`SetIncludeRefreshToDefault`](#structFRHAPI__LoginRequestV1_1a742c7d1a4e064be2c1469662a2a7dbf0)`()` | Sets the value of IncludeRefresh_Optional to its default and also sets IncludeRefresh_IsSet to true.
`public inline bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a0365af665d00ee08da08e69a0c563bc8)`()` | Gets the value of AcceptEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a345775d7b6d105ad3df6806a4d8155aa)`() const` | Gets the value of AcceptEula_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a32e3f3e585a7cb1fec58a2dcdc20df0b)`(const bool & DefaultValue) const` | Gets the value of AcceptEula_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a18503c58dd0f2b019d9c0934d854d2d3)`(bool & OutValue) const` | Fills OutValue with the value of AcceptEula_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1a1123a82b8a46db6311f3cd6fee6897c3)`()` | Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1a8cbb643e82f81c64c4cd4ecf867e03a6)`() const` | Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAcceptEula`](#structFRHAPI__LoginRequestV1_1acfa88c71be1fb5d59252ca9f9309efe7)`(const bool & NewValue)` | Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true.
`public inline void `[`SetAcceptEula`](#structFRHAPI__LoginRequestV1_1a1d3cbf5fec2ab57d848d9563a6c84ed0)`(bool && NewValue)` | Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true using move semantics.
`public inline void `[`ClearAcceptEula`](#structFRHAPI__LoginRequestV1_1a9b51780e9816a5cb2ca47c9f340385d2)`()` | Clears the value of AcceptEula_Optional and sets AcceptEula_IsSet to false.
`public inline bool `[`IsAcceptEulaSet`](#structFRHAPI__LoginRequestV1_1aca11793faa6bd75f12f3150044efa3dd)`() const` | Checks whether AcceptEula_Optional has been set.
`public inline bool `[`IsAcceptEulaDefaultValue`](#structFRHAPI__LoginRequestV1_1aef4204a66417da2e0395e78b5137de5b)`() const` | Returns true if AcceptEula_Optional is set and matches the default value.
`public inline void `[`SetAcceptEulaToDefault`](#structFRHAPI__LoginRequestV1_1aebff83f31849866bcd7698a35726408c)`()` | Sets the value of AcceptEula_Optional to its default and also sets AcceptEula_IsSet to true.
`public inline bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1adff6f27c3324db45737cc48704d01bb6)`()` | Gets the value of AcceptTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a930e973865e2d0d05062c0cfb7b69804)`() const` | Gets the value of AcceptTos_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a26d6f856a92d899c923ffff20d74fafb)`(const bool & DefaultValue) const` | Gets the value of AcceptTos_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1ae7448deed42325473e4e99c6628ae2f3)`(bool & OutValue) const` | Fills OutValue with the value of AcceptTos_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1a2a387d89fb08bdd3cb6ce65ea07306a8)`()` | Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1aa37426958a4d5d25632c01397bd759c9)`() const` | Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAcceptTos`](#structFRHAPI__LoginRequestV1_1a114835805ab79e27577a692041bb095a)`(const bool & NewValue)` | Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true.
`public inline void `[`SetAcceptTos`](#structFRHAPI__LoginRequestV1_1a97474d42b59dd139d9f4c1e95e5244fb)`(bool && NewValue)` | Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true using move semantics.
`public inline void `[`ClearAcceptTos`](#structFRHAPI__LoginRequestV1_1adabb1d08ab991ccc72c1fca427a2de5a)`()` | Clears the value of AcceptTos_Optional and sets AcceptTos_IsSet to false.
`public inline bool `[`IsAcceptTosSet`](#structFRHAPI__LoginRequestV1_1a9a6a9b3dd292ec2447dbed6672f1d6e8)`() const` | Checks whether AcceptTos_Optional has been set.
`public inline bool `[`IsAcceptTosDefaultValue`](#structFRHAPI__LoginRequestV1_1a8da59ecd9c57753f3174f98bdc3500f6)`() const` | Returns true if AcceptTos_Optional is set and matches the default value.
`public inline void `[`SetAcceptTosToDefault`](#structFRHAPI__LoginRequestV1_1ae5b328b14a4122950055ff4c7b45a3b6)`()` | Sets the value of AcceptTos_Optional to its default and also sets AcceptTos_IsSet to true.
`public inline bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a2e9d6713dbe6c4166af06aa27ab184b8)`()` | Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a8a4422f4246dd270a7349cc5101b50b3)`() const` | Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.
`public inline const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a44281a2708abe89a5cca2ad2ccf5f211)`(const bool & DefaultValue) const` | Gets the value of AcceptPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a6e0492e3cbe4783d21105757d5818ca6)`(bool & OutValue) const` | Fills OutValue with the value of AcceptPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1a839a59bbfa81b6fed314748005f1380f)`()` | Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1a04a8fb672c797d98089d6507e81605aa)`() const` | Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1aa4e95f9aec3519093eb17b0f8591fec2)`(const bool & NewValue)` | Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true.
`public inline void `[`SetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a7c422b137b6599c006157d4ba1cb831f)`(bool && NewValue)` | Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true using move semantics.
`public inline void `[`ClearAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ae6935f79cb6cf3b44b05b88925e457be)`()` | Clears the value of AcceptPrivacyPolicy_Optional and sets AcceptPrivacyPolicy_IsSet to false.
`public inline bool `[`IsAcceptPrivacyPolicySet`](#structFRHAPI__LoginRequestV1_1ae0b7e7c18bb8fa5a60d0aef181917971)`() const` | Checks whether AcceptPrivacyPolicy_Optional has been set.
`public inline bool `[`IsAcceptPrivacyPolicyDefaultValue`](#structFRHAPI__LoginRequestV1_1ad54685034fe9ad2ab281134c099d2f9e)`() const` | Returns true if AcceptPrivacyPolicy_Optional is set and matches the default value.
`public inline void `[`SetAcceptPrivacyPolicyToDefault`](#structFRHAPI__LoginRequestV1_1acd55a9f76eddf263489516ccf5bb712d)`()` | Sets the value of AcceptPrivacyPolicy_Optional to its default and also sets AcceptPrivacyPolicy_IsSet to true.

### Members

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__LoginRequestV1_1a32a723c4cf3f7b315d5748712118ab3c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LoginRequestV1_1a32a723c4cf3f7b315d5748712118ab3c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LoginRequestV1_1a792a31d7278ea1255beaab47a1fda643)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LoginRequestV1_1a792a31d7278ea1255beaab47a1fda643"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1a0b7fff031c248a023d7b1c9c33ef868b)`()` <a id="structFRHAPI__LoginRequestV1_1a0b7fff031c248a023d7b1c9c33ef868b"></a>

Gets the value of GrantType.

#### `public inline const ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1ad01e35b48d5efeea5903f82d04c53661)`() const` <a id="structFRHAPI__LoginRequestV1_1ad01e35b48d5efeea5903f82d04c53661"></a>

Gets the value of GrantType.

#### `public inline void `[`SetGrantType`](#structFRHAPI__LoginRequestV1_1a6eb406fdb4c5c76f6be6ebdf15c8136d)`(const ERHAPI_GrantType & NewValue)` <a id="structFRHAPI__LoginRequestV1_1a6eb406fdb4c5c76f6be6ebdf15c8136d"></a>

Sets the value of GrantType.

#### `public inline void `[`SetGrantType`](#structFRHAPI__LoginRequestV1_1a86ccbad4059e11e7e2392bc7eb6754d0)`(ERHAPI_GrantType && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a86ccbad4059e11e7e2392bc7eb6754d0"></a>

Sets the value of GrantType using move semantics.

#### `public inline FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a82bfa08be607f5e6b250bb7234b44c42)`()` <a id="structFRHAPI__LoginRequestV1_1a82bfa08be607f5e6b250bb7234b44c42"></a>

Gets the value of PortalAccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a96cfd3f779c869460de8fea9c849e1fb)`() const` <a id="structFRHAPI__LoginRequestV1_1a96cfd3f779c869460de8fea9c849e1fb"></a>

Gets the value of PortalAccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a26046c453a0eec7529004bdb8de76ec6)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a26046c453a0eec7529004bdb8de76ec6"></a>

Gets the value of PortalAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a279c5f65ccb418628f06bf6c99e215ce)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a279c5f65ccb418628f06bf6c99e215ce"></a>

Fills OutValue with the value of PortalAccessToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a7970692ecb567444870588437aca4ea0)`()` <a id="structFRHAPI__LoginRequestV1_1a7970692ecb567444870588437aca4ea0"></a>

Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a92c7e05bf90c5f0eb897287a1fb65108)`() const` <a id="structFRHAPI__LoginRequestV1_1a92c7e05bf90c5f0eb897287a1fb65108"></a>

Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1ae6fbf43a39cb1d0e774756c4566f49d2)`(const FString & NewValue)` <a id="structFRHAPI__LoginRequestV1_1ae6fbf43a39cb1d0e774756c4566f49d2"></a>

Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true.

#### `public inline void `[`SetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a5b809f4b6f03b42c5064335cbe8c3ef8)`(FString && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a5b809f4b6f03b42c5064335cbe8c3ef8"></a>

Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a6f5f63b9a84c1480633c04d024b1f359)`()` <a id="structFRHAPI__LoginRequestV1_1a6f5f63b9a84c1480633c04d024b1f359"></a>

Clears the value of PortalAccessToken_Optional and sets PortalAccessToken_IsSet to false.

#### `public inline bool `[`IsPortalAccessTokenSet`](#structFRHAPI__LoginRequestV1_1a713ab90a95d7ef0bcc7635cba5a86a70)`() const` <a id="structFRHAPI__LoginRequestV1_1a713ab90a95d7ef0bcc7635cba5a86a70"></a>

Checks whether PortalAccessToken_Optional has been set.

#### `public inline bool `[`IsPortalAccessTokenDefaultValue`](#structFRHAPI__LoginRequestV1_1abc9e48df88f10f0beb57b98cade49f29)`() const` <a id="structFRHAPI__LoginRequestV1_1abc9e48df88f10f0beb57b98cade49f29"></a>

Returns true if PortalAccessToken_Optional is set and matches the default value.

#### `public inline void `[`SetPortalAccessTokenToDefault`](#structFRHAPI__LoginRequestV1_1af668f553eb393e4124e0f3ebe0a261c0)`()` <a id="structFRHAPI__LoginRequestV1_1af668f553eb393e4124e0f3ebe0a261c0"></a>

Sets the value of PortalAccessToken_Optional to its default and also sets PortalAccessToken_IsSet to true.

#### `public inline FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1aedf6f68ee704f661fe1cd4317f419fe4)`()` <a id="structFRHAPI__LoginRequestV1_1aedf6f68ee704f661fe1cd4317f419fe4"></a>

Gets the value of PortalDisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a7770e70525b22311239eb504636d7d95)`() const` <a id="structFRHAPI__LoginRequestV1_1a7770e70525b22311239eb504636d7d95"></a>

Gets the value of PortalDisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a65270fb95cbd6bc8783ea424be1c53eb)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a65270fb95cbd6bc8783ea424be1c53eb"></a>

Gets the value of PortalDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a2ef397bdba4436c2ce3b0092acec86ef)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a2ef397bdba4436c2ce3b0092acec86ef"></a>

Fills OutValue with the value of PortalDisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1adc001b24cecc4b20909cf321977b6270)`()` <a id="structFRHAPI__LoginRequestV1_1adc001b24cecc4b20909cf321977b6270"></a>

Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a634662a07bf23469abe310f277c75ce7)`() const` <a id="structFRHAPI__LoginRequestV1_1a634662a07bf23469abe310f277c75ce7"></a>

Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1abdaa64f24c4e3b503c250d08cd211baf)`(const FString & NewValue)` <a id="structFRHAPI__LoginRequestV1_1abdaa64f24c4e3b503c250d08cd211baf"></a>

Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true.

#### `public inline void `[`SetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a6f8462b4df60a8a487737055472d2d74)`(FString && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a6f8462b4df60a8a487737055472d2d74"></a>

Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ab6d75d6ed5717f0a4fc920c480561f10)`()` <a id="structFRHAPI__LoginRequestV1_1ab6d75d6ed5717f0a4fc920c480561f10"></a>

Clears the value of PortalDisplayName_Optional and sets PortalDisplayName_IsSet to false.

#### `public inline bool `[`IsPortalDisplayNameSet`](#structFRHAPI__LoginRequestV1_1a4e3978cbf76b38171136aef3b1e3c3cd)`() const` <a id="structFRHAPI__LoginRequestV1_1a4e3978cbf76b38171136aef3b1e3c3cd"></a>

Checks whether PortalDisplayName_Optional has been set.

#### `public inline bool `[`IsPortalDisplayNameDefaultValue`](#structFRHAPI__LoginRequestV1_1a5d07c7544437f18f977ed60748c63d80)`() const` <a id="structFRHAPI__LoginRequestV1_1a5d07c7544437f18f977ed60748c63d80"></a>

Returns true if PortalDisplayName_Optional is set and matches the default value.

#### `public inline void `[`SetPortalDisplayNameToDefault`](#structFRHAPI__LoginRequestV1_1a34499db17134bd2404dc3ad90012f79b)`()` <a id="structFRHAPI__LoginRequestV1_1a34499db17134bd2404dc3ad90012f79b"></a>

Sets the value of PortalDisplayName_Optional to its default and also sets PortalDisplayName_IsSet to true.

#### `public inline FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1ab2f1eb65d648e6c0223d1a1f3992c8d0)`()` <a id="structFRHAPI__LoginRequestV1_1ab2f1eb65d648e6c0223d1a1f3992c8d0"></a>

Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aae9c8a222fe5bc1a58f95e1d0b501c39)`() const` <a id="structFRHAPI__LoginRequestV1_1aae9c8a222fe5bc1a58f95e1d0b501c39"></a>

Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aeaa0237d593022b9ef192b7118dee9e1)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1aeaa0237d593022b9ef192b7118dee9e1"></a>

Gets the value of PortalParentAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aa80708f79901750929ae9df4385d870c)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1aa80708f79901750929ae9df4385d870c"></a>

Fills OutValue with the value of PortalParentAccessToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1ac4980ddd3b13195e82f5389eac3b7f02)`()` <a id="structFRHAPI__LoginRequestV1_1ac4980ddd3b13195e82f5389eac3b7f02"></a>

Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a587fa3ceab5cc47a4676001c6a3349d1)`() const` <a id="structFRHAPI__LoginRequestV1_1a587fa3ceab5cc47a4676001c6a3349d1"></a>

Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a224eb93b0cd9897d9da71eaab436c3b4)`(const FString & NewValue)` <a id="structFRHAPI__LoginRequestV1_1a224eb93b0cd9897d9da71eaab436c3b4"></a>

Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true.

#### `public inline void `[`SetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a1ddba65ea655cd21597ef26277e26c0a)`(FString && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a1ddba65ea655cd21597ef26277e26c0a"></a>

Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aa6e2e26c9db08a28c88571332f901b60)`()` <a id="structFRHAPI__LoginRequestV1_1aa6e2e26c9db08a28c88571332f901b60"></a>

Clears the value of PortalParentAccessToken_Optional and sets PortalParentAccessToken_IsSet to false.

#### `public inline bool `[`IsPortalParentAccessTokenSet`](#structFRHAPI__LoginRequestV1_1a3412cbabad02f9e0b15ea38d2d673e77)`() const` <a id="structFRHAPI__LoginRequestV1_1a3412cbabad02f9e0b15ea38d2d673e77"></a>

Checks whether PortalParentAccessToken_Optional has been set.

#### `public inline bool `[`IsPortalParentAccessTokenDefaultValue`](#structFRHAPI__LoginRequestV1_1a294cb9fee89003b898f8f1fbcc05bdc0)`() const` <a id="structFRHAPI__LoginRequestV1_1a294cb9fee89003b898f8f1fbcc05bdc0"></a>

Returns true if PortalParentAccessToken_Optional is set and matches the default value.

#### `public inline void `[`SetPortalParentAccessTokenToDefault`](#structFRHAPI__LoginRequestV1_1a499de88fbdfd9c318e19a7e52164d1c9)`()` <a id="structFRHAPI__LoginRequestV1_1a499de88fbdfd9c318e19a7e52164d1c9"></a>

Sets the value of PortalParentAccessToken_Optional to its default and also sets PortalParentAccessToken_IsSet to true.

#### `public inline FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a301dc45bed9b897b57156dbca21132c4)`()` <a id="structFRHAPI__LoginRequestV1_1a301dc45bed9b897b57156dbca21132c4"></a>

Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1aea3bcc5fb6a45219d80678680522509d)`() const` <a id="structFRHAPI__LoginRequestV1_1aea3bcc5fb6a45219d80678680522509d"></a>

Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a0a90771d56f43fe04ce261eb718b5fea)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a0a90771d56f43fe04ce261eb718b5fea"></a>

Gets the value of PortalParentDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1aafb09e32a58bb4638c94cc2e74401e5d)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1aafb09e32a58bb4638c94cc2e74401e5d"></a>

Fills OutValue with the value of PortalParentDisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a64b052f041b3fa711299b215c50bc9d3)`()` <a id="structFRHAPI__LoginRequestV1_1a64b052f041b3fa711299b215c50bc9d3"></a>

Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1acc68b855f869cc6c51a73c75a763bd3a)`() const` <a id="structFRHAPI__LoginRequestV1_1acc68b855f869cc6c51a73c75a763bd3a"></a>

Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1ac0f8bfc328236a5c9da05a02469b0a4f)`(const FString & NewValue)` <a id="structFRHAPI__LoginRequestV1_1ac0f8bfc328236a5c9da05a02469b0a4f"></a>

Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true.

#### `public inline void `[`SetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1ad08a2932de06c8dc44e7654d18541339)`(FString && NewValue)` <a id="structFRHAPI__LoginRequestV1_1ad08a2932de06c8dc44e7654d18541339"></a>

Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a66e53166395f1d797f95122c25c772e6)`()` <a id="structFRHAPI__LoginRequestV1_1a66e53166395f1d797f95122c25c772e6"></a>

Clears the value of PortalParentDisplayName_Optional and sets PortalParentDisplayName_IsSet to false.

#### `public inline bool `[`IsPortalParentDisplayNameSet`](#structFRHAPI__LoginRequestV1_1abafa12efa4893800f741d7feec070b19)`() const` <a id="structFRHAPI__LoginRequestV1_1abafa12efa4893800f741d7feec070b19"></a>

Checks whether PortalParentDisplayName_Optional has been set.

#### `public inline bool `[`IsPortalParentDisplayNameDefaultValue`](#structFRHAPI__LoginRequestV1_1a446a83239fedd24f9e73457914ed047d)`() const` <a id="structFRHAPI__LoginRequestV1_1a446a83239fedd24f9e73457914ed047d"></a>

Returns true if PortalParentDisplayName_Optional is set and matches the default value.

#### `public inline void `[`SetPortalParentDisplayNameToDefault`](#structFRHAPI__LoginRequestV1_1a1164bbe730b05f565c4a13ed43185deb)`()` <a id="structFRHAPI__LoginRequestV1_1a1164bbe730b05f565c4a13ed43185deb"></a>

Sets the value of PortalParentDisplayName_Optional to its default and also sets PortalParentDisplayName_IsSet to true.

#### `public inline bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a4954fa727ba0da1c698050afc3fa5eb8)`()` <a id="structFRHAPI__LoginRequestV1_1a4954fa727ba0da1c698050afc3fa5eb8"></a>

Gets the value of IncludeRefresh_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a98edac78ed83c474e47f742c1c467554)`() const` <a id="structFRHAPI__LoginRequestV1_1a98edac78ed83c474e47f742c1c467554"></a>

Gets the value of IncludeRefresh_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a240cf91fb16b85eace460790df2da99f)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a240cf91fb16b85eace460790df2da99f"></a>

Gets the value of IncludeRefresh_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a8a65c714e437b56c9f659c300faaf896)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a8a65c714e437b56c9f659c300faaf896"></a>

Fills OutValue with the value of IncludeRefresh_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1a9e19c9e14a16aabe1a66a99149611c52)`()` <a id="structFRHAPI__LoginRequestV1_1a9e19c9e14a16aabe1a66a99149611c52"></a>

Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1a6f086d9ab668e002183f68815f75a10c)`() const` <a id="structFRHAPI__LoginRequestV1_1a6f086d9ab668e002183f68815f75a10c"></a>

Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a92255bddc919371134d3cef18d44d23b)`(const bool & NewValue)` <a id="structFRHAPI__LoginRequestV1_1a92255bddc919371134d3cef18d44d23b"></a>

Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true.

#### `public inline void `[`SetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1adee83c2d6bff6635921f6bc9634b3fcb)`(bool && NewValue)` <a id="structFRHAPI__LoginRequestV1_1adee83c2d6bff6635921f6bc9634b3fcb"></a>

Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true using move semantics.

#### `public inline void `[`ClearIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a4d32f474e3ebfb2f98e1651b1ce5fb6e)`()` <a id="structFRHAPI__LoginRequestV1_1a4d32f474e3ebfb2f98e1651b1ce5fb6e"></a>

Clears the value of IncludeRefresh_Optional and sets IncludeRefresh_IsSet to false.

#### `public inline bool `[`IsIncludeRefreshSet`](#structFRHAPI__LoginRequestV1_1a6a08ae3965ff5c9fb43dd1b9684bb833)`() const` <a id="structFRHAPI__LoginRequestV1_1a6a08ae3965ff5c9fb43dd1b9684bb833"></a>

Checks whether IncludeRefresh_Optional has been set.

#### `public inline bool `[`IsIncludeRefreshDefaultValue`](#structFRHAPI__LoginRequestV1_1a57a046c28fb74bba94aa6dfe43a29c9b)`() const` <a id="structFRHAPI__LoginRequestV1_1a57a046c28fb74bba94aa6dfe43a29c9b"></a>

Returns true if IncludeRefresh_Optional is set and matches the default value.

#### `public inline void `[`SetIncludeRefreshToDefault`](#structFRHAPI__LoginRequestV1_1a742c7d1a4e064be2c1469662a2a7dbf0)`()` <a id="structFRHAPI__LoginRequestV1_1a742c7d1a4e064be2c1469662a2a7dbf0"></a>

Sets the value of IncludeRefresh_Optional to its default and also sets IncludeRefresh_IsSet to true.

#### `public inline bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a0365af665d00ee08da08e69a0c563bc8)`()` <a id="structFRHAPI__LoginRequestV1_1a0365af665d00ee08da08e69a0c563bc8"></a>

Gets the value of AcceptEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a345775d7b6d105ad3df6806a4d8155aa)`() const` <a id="structFRHAPI__LoginRequestV1_1a345775d7b6d105ad3df6806a4d8155aa"></a>

Gets the value of AcceptEula_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a32e3f3e585a7cb1fec58a2dcdc20df0b)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a32e3f3e585a7cb1fec58a2dcdc20df0b"></a>

Gets the value of AcceptEula_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a18503c58dd0f2b019d9c0934d854d2d3)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a18503c58dd0f2b019d9c0934d854d2d3"></a>

Fills OutValue with the value of AcceptEula_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1a1123a82b8a46db6311f3cd6fee6897c3)`()` <a id="structFRHAPI__LoginRequestV1_1a1123a82b8a46db6311f3cd6fee6897c3"></a>

Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1a8cbb643e82f81c64c4cd4ecf867e03a6)`() const` <a id="structFRHAPI__LoginRequestV1_1a8cbb643e82f81c64c4cd4ecf867e03a6"></a>

Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAcceptEula`](#structFRHAPI__LoginRequestV1_1acfa88c71be1fb5d59252ca9f9309efe7)`(const bool & NewValue)` <a id="structFRHAPI__LoginRequestV1_1acfa88c71be1fb5d59252ca9f9309efe7"></a>

Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true.

#### `public inline void `[`SetAcceptEula`](#structFRHAPI__LoginRequestV1_1a1d3cbf5fec2ab57d848d9563a6c84ed0)`(bool && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a1d3cbf5fec2ab57d848d9563a6c84ed0"></a>

Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptEula`](#structFRHAPI__LoginRequestV1_1a9b51780e9816a5cb2ca47c9f340385d2)`()` <a id="structFRHAPI__LoginRequestV1_1a9b51780e9816a5cb2ca47c9f340385d2"></a>

Clears the value of AcceptEula_Optional and sets AcceptEula_IsSet to false.

#### `public inline bool `[`IsAcceptEulaSet`](#structFRHAPI__LoginRequestV1_1aca11793faa6bd75f12f3150044efa3dd)`() const` <a id="structFRHAPI__LoginRequestV1_1aca11793faa6bd75f12f3150044efa3dd"></a>

Checks whether AcceptEula_Optional has been set.

#### `public inline bool `[`IsAcceptEulaDefaultValue`](#structFRHAPI__LoginRequestV1_1aef4204a66417da2e0395e78b5137de5b)`() const` <a id="structFRHAPI__LoginRequestV1_1aef4204a66417da2e0395e78b5137de5b"></a>

Returns true if AcceptEula_Optional is set and matches the default value.

#### `public inline void `[`SetAcceptEulaToDefault`](#structFRHAPI__LoginRequestV1_1aebff83f31849866bcd7698a35726408c)`()` <a id="structFRHAPI__LoginRequestV1_1aebff83f31849866bcd7698a35726408c"></a>

Sets the value of AcceptEula_Optional to its default and also sets AcceptEula_IsSet to true.

#### `public inline bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1adff6f27c3324db45737cc48704d01bb6)`()` <a id="structFRHAPI__LoginRequestV1_1adff6f27c3324db45737cc48704d01bb6"></a>

Gets the value of AcceptTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a930e973865e2d0d05062c0cfb7b69804)`() const` <a id="structFRHAPI__LoginRequestV1_1a930e973865e2d0d05062c0cfb7b69804"></a>

Gets the value of AcceptTos_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a26d6f856a92d899c923ffff20d74fafb)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a26d6f856a92d899c923ffff20d74fafb"></a>

Gets the value of AcceptTos_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1ae7448deed42325473e4e99c6628ae2f3)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1ae7448deed42325473e4e99c6628ae2f3"></a>

Fills OutValue with the value of AcceptTos_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1a2a387d89fb08bdd3cb6ce65ea07306a8)`()` <a id="structFRHAPI__LoginRequestV1_1a2a387d89fb08bdd3cb6ce65ea07306a8"></a>

Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1aa37426958a4d5d25632c01397bd759c9)`() const` <a id="structFRHAPI__LoginRequestV1_1aa37426958a4d5d25632c01397bd759c9"></a>

Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAcceptTos`](#structFRHAPI__LoginRequestV1_1a114835805ab79e27577a692041bb095a)`(const bool & NewValue)` <a id="structFRHAPI__LoginRequestV1_1a114835805ab79e27577a692041bb095a"></a>

Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true.

#### `public inline void `[`SetAcceptTos`](#structFRHAPI__LoginRequestV1_1a97474d42b59dd139d9f4c1e95e5244fb)`(bool && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a97474d42b59dd139d9f4c1e95e5244fb"></a>

Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptTos`](#structFRHAPI__LoginRequestV1_1adabb1d08ab991ccc72c1fca427a2de5a)`()` <a id="structFRHAPI__LoginRequestV1_1adabb1d08ab991ccc72c1fca427a2de5a"></a>

Clears the value of AcceptTos_Optional and sets AcceptTos_IsSet to false.

#### `public inline bool `[`IsAcceptTosSet`](#structFRHAPI__LoginRequestV1_1a9a6a9b3dd292ec2447dbed6672f1d6e8)`() const` <a id="structFRHAPI__LoginRequestV1_1a9a6a9b3dd292ec2447dbed6672f1d6e8"></a>

Checks whether AcceptTos_Optional has been set.

#### `public inline bool `[`IsAcceptTosDefaultValue`](#structFRHAPI__LoginRequestV1_1a8da59ecd9c57753f3174f98bdc3500f6)`() const` <a id="structFRHAPI__LoginRequestV1_1a8da59ecd9c57753f3174f98bdc3500f6"></a>

Returns true if AcceptTos_Optional is set and matches the default value.

#### `public inline void `[`SetAcceptTosToDefault`](#structFRHAPI__LoginRequestV1_1ae5b328b14a4122950055ff4c7b45a3b6)`()` <a id="structFRHAPI__LoginRequestV1_1ae5b328b14a4122950055ff4c7b45a3b6"></a>

Sets the value of AcceptTos_Optional to its default and also sets AcceptTos_IsSet to true.

#### `public inline bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a2e9d6713dbe6c4166af06aa27ab184b8)`()` <a id="structFRHAPI__LoginRequestV1_1a2e9d6713dbe6c4166af06aa27ab184b8"></a>

Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a8a4422f4246dd270a7349cc5101b50b3)`() const` <a id="structFRHAPI__LoginRequestV1_1a8a4422f4246dd270a7349cc5101b50b3"></a>

Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a44281a2708abe89a5cca2ad2ccf5f211)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a44281a2708abe89a5cca2ad2ccf5f211"></a>

Gets the value of AcceptPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a6e0492e3cbe4783d21105757d5818ca6)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a6e0492e3cbe4783d21105757d5818ca6"></a>

Fills OutValue with the value of AcceptPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1a839a59bbfa81b6fed314748005f1380f)`()` <a id="structFRHAPI__LoginRequestV1_1a839a59bbfa81b6fed314748005f1380f"></a>

Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1a04a8fb672c797d98089d6507e81605aa)`() const` <a id="structFRHAPI__LoginRequestV1_1a04a8fb672c797d98089d6507e81605aa"></a>

Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1aa4e95f9aec3519093eb17b0f8591fec2)`(const bool & NewValue)` <a id="structFRHAPI__LoginRequestV1_1aa4e95f9aec3519093eb17b0f8591fec2"></a>

Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true.

#### `public inline void `[`SetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a7c422b137b6599c006157d4ba1cb831f)`(bool && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a7c422b137b6599c006157d4ba1cb831f"></a>

Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ae6935f79cb6cf3b44b05b88925e457be)`()` <a id="structFRHAPI__LoginRequestV1_1ae6935f79cb6cf3b44b05b88925e457be"></a>

Clears the value of AcceptPrivacyPolicy_Optional and sets AcceptPrivacyPolicy_IsSet to false.

#### `public inline bool `[`IsAcceptPrivacyPolicySet`](#structFRHAPI__LoginRequestV1_1ae0b7e7c18bb8fa5a60d0aef181917971)`() const` <a id="structFRHAPI__LoginRequestV1_1ae0b7e7c18bb8fa5a60d0aef181917971"></a>

Checks whether AcceptPrivacyPolicy_Optional has been set.

#### `public inline bool `[`IsAcceptPrivacyPolicyDefaultValue`](#structFRHAPI__LoginRequestV1_1ad54685034fe9ad2ab281134c099d2f9e)`() const` <a id="structFRHAPI__LoginRequestV1_1ad54685034fe9ad2ab281134c099d2f9e"></a>

Returns true if AcceptPrivacyPolicy_Optional is set and matches the default value.

#### `public inline void `[`SetAcceptPrivacyPolicyToDefault`](#structFRHAPI__LoginRequestV1_1acd55a9f76eddf263489516ccf5bb712d)`()` <a id="structFRHAPI__LoginRequestV1_1acd55a9f76eddf263489516ccf5bb712d"></a>

Sets the value of AcceptPrivacyPolicy_Optional to its default and also sets AcceptPrivacyPolicy_IsSet to true.

