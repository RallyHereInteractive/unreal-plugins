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
`public inline FORCEINLINE ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1a290328df210f9845e6b201cafceccf77)`()` | Gets the value of GrantType.
`public inline FORCEINLINE const ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1a97dc4d1567bb3d761b4c2985cc73df73)`() const` | Gets the value of GrantType.
`public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__LoginRequestV1_1a5bb77a072346943a76266dfbf64a75cc)`(const ERHAPI_GrantType & NewValue)` | Sets the value of GrantType.
`public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__LoginRequestV1_1a8f63386264af50cc9683bad07bcf08a5)`(ERHAPI_GrantType && NewValue)` | Sets the value of GrantType using move semantics.
`public inline FORCEINLINE FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a839f94b5d7a8c9f6882de1b678d90dc9)`()` | Gets the value of PortalAccessToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1aeac6b4ad3cfa9828897226d0f0eb4c69)`() const` | Gets the value of PortalAccessToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a6bf8c47659981034423324b6aa388ec6)`(const FString & DefaultValue) const` | Gets the value of PortalAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1ace26821f2ee1f5d52840ca68524c5141)`(FString & OutValue) const` | Fills OutValue with the value of PortalAccessToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1ac5368b9e12f5ace6cd3411838224320c)`()` | Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a29db13949c71986683ff3fc788741028)`() const` | Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1ad878930026078a367308d0a94c0f1d88)`(const FString & NewValue)` | Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a0fca99c1b3548431c6bac9db99d781d2)`(FString && NewValue)` | Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true using move semantics.
`public inline void `[`ClearPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a6f5f63b9a84c1480633c04d024b1f359)`()` | Clears the value of PortalAccessToken_Optional and sets PortalAccessToken_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_PortalAccessToken`](#structFRHAPI__LoginRequestV1_1a0de4fe42eef2a18584369e58a9a188d6)`()` | Returns the default value of PortalAccessToken.
`public inline FORCEINLINE FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ab5a4b495269e03d63fd9ec3a939f99f1)`()` | Gets the value of PortalDisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a9481cef779ae36346b9d35462dc375da)`() const` | Gets the value of PortalDisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ab0ceb7e786c91762fe63976037de9537)`(const FString & DefaultValue) const` | Gets the value of PortalDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a6aa338fc1e1165f0b3b0437ee787b092)`(FString & OutValue) const` | Fills OutValue with the value of PortalDisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1ae30c19fda8df233010617b25c8090d5e)`()` | Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a7440811760b129e553f7487f6d0c6066)`() const` | Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1acbba60079d5cdbf29e83b3be1cf8c8cd)`(const FString & NewValue)` | Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a71735c8da820f22967c45fffba1cabb0)`(FString && NewValue)` | Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true using move semantics.
`public inline void `[`ClearPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ab6d75d6ed5717f0a4fc920c480561f10)`()` | Clears the value of PortalDisplayName_Optional and sets PortalDisplayName_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_PortalDisplayName`](#structFRHAPI__LoginRequestV1_1abbf4bf0f01b6c833e9b4ae89740073d7)`()` | Returns the default value of PortalDisplayName.
`public inline FORCEINLINE FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a949c3bade9e194b1cba133daa8e55b09)`()` | Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a6acab31d42c6cc18d262044db15c5375)`() const` | Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a751273f4068dd8197a6df993a8d15422)`(const FString & DefaultValue) const` | Gets the value of PortalParentAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a644da02859f6170c654a92e765a8f02d)`(FString & OutValue) const` | Fills OutValue with the value of PortalParentAccessToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1ad356fcc0d159c260584125a1688d17a3)`()` | Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a525602154e25cc9d2d100ad98ce7eb87)`() const` | Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a20e59bcbb60ae6e91dccfbe15aa04a5d)`(const FString & NewValue)` | Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a565ea91fe4c3d34a900adbe03f85dd94)`(FString && NewValue)` | Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true using move semantics.
`public inline void `[`ClearPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aa6e2e26c9db08a28c88571332f901b60)`()` | Clears the value of PortalParentAccessToken_Optional and sets PortalParentAccessToken_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_PortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a52425fa69837613638ac6fbfd74cb4a4)`()` | Returns the default value of PortalParentAccessToken.
`public inline FORCEINLINE FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1ac1aa2b07e39dd72d4ae9700c5e1bf78c)`()` | Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1af5ec17bc79b0eb390a05d0e239c2172f)`() const` | Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a1e36653ccd46a0030c40f29f6cf91a0a)`(const FString & DefaultValue) const` | Gets the value of PortalParentDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a89e85ca081623ae6462a661224e0fcbd)`(FString & OutValue) const` | Fills OutValue with the value of PortalParentDisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a588c3b9fd9f26c53be89c32758a436b3)`()` | Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a5e3ae4428ce3608f91e44663c59b1141)`() const` | Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a3e758bfac34d1adaf9821ec0fa3a07d6)`(const FString & NewValue)` | Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a49d85802f509a249061a6a92750ffe34)`(FString && NewValue)` | Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true using move semantics.
`public inline void `[`ClearPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a66e53166395f1d797f95122c25c772e6)`()` | Clears the value of PortalParentDisplayName_Optional and sets PortalParentDisplayName_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_PortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1aae4ea0a0cb100c72d3c4fd8f0866b83e)`()` | Returns the default value of PortalParentDisplayName.
`public inline FORCEINLINE bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a970791b0465a39ebad0f05a8ccb8a970)`()` | Gets the value of IncludeRefresh_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a3b83519e2829a5aee6ff0c9ebe7ed91b)`() const` | Gets the value of IncludeRefresh_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1aa5b5baa2df2b9ae2196848ae9cb7b8a3)`(const bool & DefaultValue) const` | Gets the value of IncludeRefresh_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1ab1296c59b5a6e1d985d261b858d1f274)`(bool & OutValue) const` | Fills OutValue with the value of IncludeRefresh_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1a6003c41f124287229589287941feb405)`()` | Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1a1ef858734ab8b0166a9142c4a5db5b0f)`() const` | Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a544a71ba9ebee82aad47dc3591df3fa6)`(const bool & NewValue)` | Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true.
`public inline FORCEINLINE void `[`SetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a294b324d7b1e321940e84a77330cbded)`(bool && NewValue)` | Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true using move semantics.
`public inline void `[`ClearIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a4d32f474e3ebfb2f98e1651b1ce5fb6e)`()` | Clears the value of IncludeRefresh_Optional and sets IncludeRefresh_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_IncludeRefresh`](#structFRHAPI__LoginRequestV1_1ab66ac280adae893d61912142ed083a40)`()` | Returns the default value of IncludeRefresh.
`public inline FORCEINLINE bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a108404ea3d4e3c6df09ad45b94452f26)`()` | Gets the value of AcceptEula_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a36cd4d03ff668f5cdf8d34b94b7ba5fd)`() const` | Gets the value of AcceptEula_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a9e4a52a12fd94c4a6045f76576049bab)`(const bool & DefaultValue) const` | Gets the value of AcceptEula_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a88b5578a7cda3f998ff2ff4318da3a8b)`(bool & OutValue) const` | Fills OutValue with the value of AcceptEula_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1afd070c9b503e07cf8f97dfa6e490c8e3)`()` | Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1a45756b0b2a31fe4448d30acf2052842b)`() const` | Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAcceptEula`](#structFRHAPI__LoginRequestV1_1a0e2239d8fb66fa185b87a0a2e5e43f26)`(const bool & NewValue)` | Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true.
`public inline FORCEINLINE void `[`SetAcceptEula`](#structFRHAPI__LoginRequestV1_1aa15df5a773d233043d689949523924c9)`(bool && NewValue)` | Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true using move semantics.
`public inline void `[`ClearAcceptEula`](#structFRHAPI__LoginRequestV1_1a9b51780e9816a5cb2ca47c9f340385d2)`()` | Clears the value of AcceptEula_Optional and sets AcceptEula_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AcceptEula`](#structFRHAPI__LoginRequestV1_1a32f9c4428f2ebef3fbc36f42aa3c82c6)`()` | Returns the default value of AcceptEula.
`public inline FORCEINLINE bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1aad556667247c7c60d8fe0fa3e4cc94ad)`()` | Gets the value of AcceptTos_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a5bf84b14cd9069e41f3c3d9394f96a7f)`() const` | Gets the value of AcceptTos_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1aeb8c7659771accb55f7723a66d1f6e19)`(const bool & DefaultValue) const` | Gets the value of AcceptTos_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1ae64dfef9e65df9c19dd89f3433706418)`(bool & OutValue) const` | Fills OutValue with the value of AcceptTos_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1a72f5d73037ff5e33b75777d546100b14)`()` | Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1ae053e71bcdad6e1433e30185a884c318)`() const` | Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAcceptTos`](#structFRHAPI__LoginRequestV1_1affa78ad3d16ad05bfd64b94b8a0da109)`(const bool & NewValue)` | Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true.
`public inline FORCEINLINE void `[`SetAcceptTos`](#structFRHAPI__LoginRequestV1_1a0e2171c9170c75fc9201631588392415)`(bool && NewValue)` | Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true using move semantics.
`public inline void `[`ClearAcceptTos`](#structFRHAPI__LoginRequestV1_1adabb1d08ab991ccc72c1fca427a2de5a)`()` | Clears the value of AcceptTos_Optional and sets AcceptTos_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AcceptTos`](#structFRHAPI__LoginRequestV1_1a6c9ab2fce1ef9e2551f0c4b2006243b3)`()` | Returns the default value of AcceptTos.
`public inline FORCEINLINE bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ad5a5c01296fff4262dcac2171b7242ca)`()` | Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a6b59a29d95aa7779a3c7451cc048518b)`() const` | Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a906a08c791bf143a2c7bbf8360d73e6e)`(const bool & DefaultValue) const` | Gets the value of AcceptPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a1226914fe489a591e7944eba0bf98947)`(bool & OutValue) const` | Fills OutValue with the value of AcceptPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1aba04f90c6128f8a349ff8323df0b5dcb)`()` | Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1a9228737eb16338969dd11abefdb77700)`() const` | Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1aae72f7e8cb3730e49a9465b52804d64e)`(const bool & NewValue)` | Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true.
`public inline FORCEINLINE void `[`SetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ac011534c0015513c752c4db3647c166d)`(bool && NewValue)` | Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true using move semantics.
`public inline void `[`ClearAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ae6935f79cb6cf3b44b05b88925e457be)`()` | Clears the value of AcceptPrivacyPolicy_Optional and sets AcceptPrivacyPolicy_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ad1fdbf4f392ca88920d457c76f8782c5)`()` | Returns the default value of AcceptPrivacyPolicy.

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

#### `public inline FORCEINLINE ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1a290328df210f9845e6b201cafceccf77)`()` <a id="structFRHAPI__LoginRequestV1_1a290328df210f9845e6b201cafceccf77"></a>

Gets the value of GrantType.

#### `public inline FORCEINLINE const ERHAPI_GrantType & `[`GetGrantType`](#structFRHAPI__LoginRequestV1_1a97dc4d1567bb3d761b4c2985cc73df73)`() const` <a id="structFRHAPI__LoginRequestV1_1a97dc4d1567bb3d761b4c2985cc73df73"></a>

Gets the value of GrantType.

#### `public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__LoginRequestV1_1a5bb77a072346943a76266dfbf64a75cc)`(const ERHAPI_GrantType & NewValue)` <a id="structFRHAPI__LoginRequestV1_1a5bb77a072346943a76266dfbf64a75cc"></a>

Sets the value of GrantType.

#### `public inline FORCEINLINE void `[`SetGrantType`](#structFRHAPI__LoginRequestV1_1a8f63386264af50cc9683bad07bcf08a5)`(ERHAPI_GrantType && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a8f63386264af50cc9683bad07bcf08a5"></a>

Sets the value of GrantType using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a839f94b5d7a8c9f6882de1b678d90dc9)`()` <a id="structFRHAPI__LoginRequestV1_1a839f94b5d7a8c9f6882de1b678d90dc9"></a>

Gets the value of PortalAccessToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1aeac6b4ad3cfa9828897226d0f0eb4c69)`() const` <a id="structFRHAPI__LoginRequestV1_1aeac6b4ad3cfa9828897226d0f0eb4c69"></a>

Gets the value of PortalAccessToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a6bf8c47659981034423324b6aa388ec6)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a6bf8c47659981034423324b6aa388ec6"></a>

Gets the value of PortalAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1ace26821f2ee1f5d52840ca68524c5141)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1ace26821f2ee1f5d52840ca68524c5141"></a>

Fills OutValue with the value of PortalAccessToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1ac5368b9e12f5ace6cd3411838224320c)`()` <a id="structFRHAPI__LoginRequestV1_1ac5368b9e12f5ace6cd3411838224320c"></a>

Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a29db13949c71986683ff3fc788741028)`() const` <a id="structFRHAPI__LoginRequestV1_1a29db13949c71986683ff3fc788741028"></a>

Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1ad878930026078a367308d0a94c0f1d88)`(const FString & NewValue)` <a id="structFRHAPI__LoginRequestV1_1ad878930026078a367308d0a94c0f1d88"></a>

Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a0fca99c1b3548431c6bac9db99d781d2)`(FString && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a0fca99c1b3548431c6bac9db99d781d2"></a>

Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalAccessToken`](#structFRHAPI__LoginRequestV1_1a6f5f63b9a84c1480633c04d024b1f359)`()` <a id="structFRHAPI__LoginRequestV1_1a6f5f63b9a84c1480633c04d024b1f359"></a>

Clears the value of PortalAccessToken_Optional and sets PortalAccessToken_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_PortalAccessToken`](#structFRHAPI__LoginRequestV1_1a0de4fe42eef2a18584369e58a9a188d6)`()` <a id="structFRHAPI__LoginRequestV1_1a0de4fe42eef2a18584369e58a9a188d6"></a>

Returns the default value of PortalAccessToken.

#### `public inline FORCEINLINE FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ab5a4b495269e03d63fd9ec3a939f99f1)`()` <a id="structFRHAPI__LoginRequestV1_1ab5a4b495269e03d63fd9ec3a939f99f1"></a>

Gets the value of PortalDisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a9481cef779ae36346b9d35462dc375da)`() const` <a id="structFRHAPI__LoginRequestV1_1a9481cef779ae36346b9d35462dc375da"></a>

Gets the value of PortalDisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ab0ceb7e786c91762fe63976037de9537)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1ab0ceb7e786c91762fe63976037de9537"></a>

Gets the value of PortalDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a6aa338fc1e1165f0b3b0437ee787b092)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a6aa338fc1e1165f0b3b0437ee787b092"></a>

Fills OutValue with the value of PortalDisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1ae30c19fda8df233010617b25c8090d5e)`()` <a id="structFRHAPI__LoginRequestV1_1ae30c19fda8df233010617b25c8090d5e"></a>

Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a7440811760b129e553f7487f6d0c6066)`() const` <a id="structFRHAPI__LoginRequestV1_1a7440811760b129e553f7487f6d0c6066"></a>

Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1acbba60079d5cdbf29e83b3be1cf8c8cd)`(const FString & NewValue)` <a id="structFRHAPI__LoginRequestV1_1acbba60079d5cdbf29e83b3be1cf8c8cd"></a>

Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalDisplayName`](#structFRHAPI__LoginRequestV1_1a71735c8da820f22967c45fffba1cabb0)`(FString && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a71735c8da820f22967c45fffba1cabb0"></a>

Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalDisplayName`](#structFRHAPI__LoginRequestV1_1ab6d75d6ed5717f0a4fc920c480561f10)`()` <a id="structFRHAPI__LoginRequestV1_1ab6d75d6ed5717f0a4fc920c480561f10"></a>

Clears the value of PortalDisplayName_Optional and sets PortalDisplayName_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_PortalDisplayName`](#structFRHAPI__LoginRequestV1_1abbf4bf0f01b6c833e9b4ae89740073d7)`()` <a id="structFRHAPI__LoginRequestV1_1abbf4bf0f01b6c833e9b4ae89740073d7"></a>

Returns the default value of PortalDisplayName.

#### `public inline FORCEINLINE FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a949c3bade9e194b1cba133daa8e55b09)`()` <a id="structFRHAPI__LoginRequestV1_1a949c3bade9e194b1cba133daa8e55b09"></a>

Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a6acab31d42c6cc18d262044db15c5375)`() const` <a id="structFRHAPI__LoginRequestV1_1a6acab31d42c6cc18d262044db15c5375"></a>

Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a751273f4068dd8197a6df993a8d15422)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a751273f4068dd8197a6df993a8d15422"></a>

Gets the value of PortalParentAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a644da02859f6170c654a92e765a8f02d)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a644da02859f6170c654a92e765a8f02d"></a>

Fills OutValue with the value of PortalParentAccessToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1ad356fcc0d159c260584125a1688d17a3)`()` <a id="structFRHAPI__LoginRequestV1_1ad356fcc0d159c260584125a1688d17a3"></a>

Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalParentAccessTokenOrNull`](#structFRHAPI__LoginRequestV1_1a525602154e25cc9d2d100ad98ce7eb87)`() const` <a id="structFRHAPI__LoginRequestV1_1a525602154e25cc9d2d100ad98ce7eb87"></a>

Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a20e59bcbb60ae6e91dccfbe15aa04a5d)`(const FString & NewValue)` <a id="structFRHAPI__LoginRequestV1_1a20e59bcbb60ae6e91dccfbe15aa04a5d"></a>

Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a565ea91fe4c3d34a900adbe03f85dd94)`(FString && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a565ea91fe4c3d34a900adbe03f85dd94"></a>

Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1aa6e2e26c9db08a28c88571332f901b60)`()` <a id="structFRHAPI__LoginRequestV1_1aa6e2e26c9db08a28c88571332f901b60"></a>

Clears the value of PortalParentAccessToken_Optional and sets PortalParentAccessToken_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_PortalParentAccessToken`](#structFRHAPI__LoginRequestV1_1a52425fa69837613638ac6fbfd74cb4a4)`()` <a id="structFRHAPI__LoginRequestV1_1a52425fa69837613638ac6fbfd74cb4a4"></a>

Returns the default value of PortalParentAccessToken.

#### `public inline FORCEINLINE FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1ac1aa2b07e39dd72d4ae9700c5e1bf78c)`()` <a id="structFRHAPI__LoginRequestV1_1ac1aa2b07e39dd72d4ae9700c5e1bf78c"></a>

Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1af5ec17bc79b0eb390a05d0e239c2172f)`() const` <a id="structFRHAPI__LoginRequestV1_1af5ec17bc79b0eb390a05d0e239c2172f"></a>

Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a1e36653ccd46a0030c40f29f6cf91a0a)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a1e36653ccd46a0030c40f29f6cf91a0a"></a>

Gets the value of PortalParentDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a89e85ca081623ae6462a661224e0fcbd)`(FString & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a89e85ca081623ae6462a661224e0fcbd"></a>

Fills OutValue with the value of PortalParentDisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a588c3b9fd9f26c53be89c32758a436b3)`()` <a id="structFRHAPI__LoginRequestV1_1a588c3b9fd9f26c53be89c32758a436b3"></a>

Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalParentDisplayNameOrNull`](#structFRHAPI__LoginRequestV1_1a5e3ae4428ce3608f91e44663c59b1141)`() const` <a id="structFRHAPI__LoginRequestV1_1a5e3ae4428ce3608f91e44663c59b1141"></a>

Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a3e758bfac34d1adaf9821ec0fa3a07d6)`(const FString & NewValue)` <a id="structFRHAPI__LoginRequestV1_1a3e758bfac34d1adaf9821ec0fa3a07d6"></a>

Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a49d85802f509a249061a6a92750ffe34)`(FString && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a49d85802f509a249061a6a92750ffe34"></a>

Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1a66e53166395f1d797f95122c25c772e6)`()` <a id="structFRHAPI__LoginRequestV1_1a66e53166395f1d797f95122c25c772e6"></a>

Clears the value of PortalParentDisplayName_Optional and sets PortalParentDisplayName_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_PortalParentDisplayName`](#structFRHAPI__LoginRequestV1_1aae4ea0a0cb100c72d3c4fd8f0866b83e)`()` <a id="structFRHAPI__LoginRequestV1_1aae4ea0a0cb100c72d3c4fd8f0866b83e"></a>

Returns the default value of PortalParentDisplayName.

#### `public inline FORCEINLINE bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a970791b0465a39ebad0f05a8ccb8a970)`()` <a id="structFRHAPI__LoginRequestV1_1a970791b0465a39ebad0f05a8ccb8a970"></a>

Gets the value of IncludeRefresh_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a3b83519e2829a5aee6ff0c9ebe7ed91b)`() const` <a id="structFRHAPI__LoginRequestV1_1a3b83519e2829a5aee6ff0c9ebe7ed91b"></a>

Gets the value of IncludeRefresh_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1aa5b5baa2df2b9ae2196848ae9cb7b8a3)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1aa5b5baa2df2b9ae2196848ae9cb7b8a3"></a>

Gets the value of IncludeRefresh_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1ab1296c59b5a6e1d985d261b858d1f274)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1ab1296c59b5a6e1d985d261b858d1f274"></a>

Fills OutValue with the value of IncludeRefresh_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1a6003c41f124287229589287941feb405)`()` <a id="structFRHAPI__LoginRequestV1_1a6003c41f124287229589287941feb405"></a>

Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetIncludeRefreshOrNull`](#structFRHAPI__LoginRequestV1_1a1ef858734ab8b0166a9142c4a5db5b0f)`() const` <a id="structFRHAPI__LoginRequestV1_1a1ef858734ab8b0166a9142c4a5db5b0f"></a>

Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a544a71ba9ebee82aad47dc3591df3fa6)`(const bool & NewValue)` <a id="structFRHAPI__LoginRequestV1_1a544a71ba9ebee82aad47dc3591df3fa6"></a>

Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a294b324d7b1e321940e84a77330cbded)`(bool && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a294b324d7b1e321940e84a77330cbded"></a>

Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true using move semantics.

#### `public inline void `[`ClearIncludeRefresh`](#structFRHAPI__LoginRequestV1_1a4d32f474e3ebfb2f98e1651b1ce5fb6e)`()` <a id="structFRHAPI__LoginRequestV1_1a4d32f474e3ebfb2f98e1651b1ce5fb6e"></a>

Clears the value of IncludeRefresh_Optional and sets IncludeRefresh_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_IncludeRefresh`](#structFRHAPI__LoginRequestV1_1ab66ac280adae893d61912142ed083a40)`()` <a id="structFRHAPI__LoginRequestV1_1ab66ac280adae893d61912142ed083a40"></a>

Returns the default value of IncludeRefresh.

#### `public inline FORCEINLINE bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a108404ea3d4e3c6df09ad45b94452f26)`()` <a id="structFRHAPI__LoginRequestV1_1a108404ea3d4e3c6df09ad45b94452f26"></a>

Gets the value of AcceptEula_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a36cd4d03ff668f5cdf8d34b94b7ba5fd)`() const` <a id="structFRHAPI__LoginRequestV1_1a36cd4d03ff668f5cdf8d34b94b7ba5fd"></a>

Gets the value of AcceptEula_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a9e4a52a12fd94c4a6045f76576049bab)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a9e4a52a12fd94c4a6045f76576049bab"></a>

Gets the value of AcceptEula_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAcceptEula`](#structFRHAPI__LoginRequestV1_1a88b5578a7cda3f998ff2ff4318da3a8b)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a88b5578a7cda3f998ff2ff4318da3a8b"></a>

Fills OutValue with the value of AcceptEula_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1afd070c9b503e07cf8f97dfa6e490c8e3)`()` <a id="structFRHAPI__LoginRequestV1_1afd070c9b503e07cf8f97dfa6e490c8e3"></a>

Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAcceptEulaOrNull`](#structFRHAPI__LoginRequestV1_1a45756b0b2a31fe4448d30acf2052842b)`() const` <a id="structFRHAPI__LoginRequestV1_1a45756b0b2a31fe4448d30acf2052842b"></a>

Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAcceptEula`](#structFRHAPI__LoginRequestV1_1a0e2239d8fb66fa185b87a0a2e5e43f26)`(const bool & NewValue)` <a id="structFRHAPI__LoginRequestV1_1a0e2239d8fb66fa185b87a0a2e5e43f26"></a>

Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAcceptEula`](#structFRHAPI__LoginRequestV1_1aa15df5a773d233043d689949523924c9)`(bool && NewValue)` <a id="structFRHAPI__LoginRequestV1_1aa15df5a773d233043d689949523924c9"></a>

Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptEula`](#structFRHAPI__LoginRequestV1_1a9b51780e9816a5cb2ca47c9f340385d2)`()` <a id="structFRHAPI__LoginRequestV1_1a9b51780e9816a5cb2ca47c9f340385d2"></a>

Clears the value of AcceptEula_Optional and sets AcceptEula_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AcceptEula`](#structFRHAPI__LoginRequestV1_1a32f9c4428f2ebef3fbc36f42aa3c82c6)`()` <a id="structFRHAPI__LoginRequestV1_1a32f9c4428f2ebef3fbc36f42aa3c82c6"></a>

Returns the default value of AcceptEula.

#### `public inline FORCEINLINE bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1aad556667247c7c60d8fe0fa3e4cc94ad)`()` <a id="structFRHAPI__LoginRequestV1_1aad556667247c7c60d8fe0fa3e4cc94ad"></a>

Gets the value of AcceptTos_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1a5bf84b14cd9069e41f3c3d9394f96a7f)`() const` <a id="structFRHAPI__LoginRequestV1_1a5bf84b14cd9069e41f3c3d9394f96a7f"></a>

Gets the value of AcceptTos_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1aeb8c7659771accb55f7723a66d1f6e19)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1aeb8c7659771accb55f7723a66d1f6e19"></a>

Gets the value of AcceptTos_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAcceptTos`](#structFRHAPI__LoginRequestV1_1ae64dfef9e65df9c19dd89f3433706418)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1ae64dfef9e65df9c19dd89f3433706418"></a>

Fills OutValue with the value of AcceptTos_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1a72f5d73037ff5e33b75777d546100b14)`()` <a id="structFRHAPI__LoginRequestV1_1a72f5d73037ff5e33b75777d546100b14"></a>

Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAcceptTosOrNull`](#structFRHAPI__LoginRequestV1_1ae053e71bcdad6e1433e30185a884c318)`() const` <a id="structFRHAPI__LoginRequestV1_1ae053e71bcdad6e1433e30185a884c318"></a>

Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAcceptTos`](#structFRHAPI__LoginRequestV1_1affa78ad3d16ad05bfd64b94b8a0da109)`(const bool & NewValue)` <a id="structFRHAPI__LoginRequestV1_1affa78ad3d16ad05bfd64b94b8a0da109"></a>

Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAcceptTos`](#structFRHAPI__LoginRequestV1_1a0e2171c9170c75fc9201631588392415)`(bool && NewValue)` <a id="structFRHAPI__LoginRequestV1_1a0e2171c9170c75fc9201631588392415"></a>

Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptTos`](#structFRHAPI__LoginRequestV1_1adabb1d08ab991ccc72c1fca427a2de5a)`()` <a id="structFRHAPI__LoginRequestV1_1adabb1d08ab991ccc72c1fca427a2de5a"></a>

Clears the value of AcceptTos_Optional and sets AcceptTos_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AcceptTos`](#structFRHAPI__LoginRequestV1_1a6c9ab2fce1ef9e2551f0c4b2006243b3)`()` <a id="structFRHAPI__LoginRequestV1_1a6c9ab2fce1ef9e2551f0c4b2006243b3"></a>

Returns the default value of AcceptTos.

#### `public inline FORCEINLINE bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ad5a5c01296fff4262dcac2171b7242ca)`()` <a id="structFRHAPI__LoginRequestV1_1ad5a5c01296fff4262dcac2171b7242ca"></a>

Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a6b59a29d95aa7779a3c7451cc048518b)`() const` <a id="structFRHAPI__LoginRequestV1_1a6b59a29d95aa7779a3c7451cc048518b"></a>

Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a906a08c791bf143a2c7bbf8360d73e6e)`(const bool & DefaultValue) const` <a id="structFRHAPI__LoginRequestV1_1a906a08c791bf143a2c7bbf8360d73e6e"></a>

Gets the value of AcceptPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1a1226914fe489a591e7944eba0bf98947)`(bool & OutValue) const` <a id="structFRHAPI__LoginRequestV1_1a1226914fe489a591e7944eba0bf98947"></a>

Fills OutValue with the value of AcceptPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1aba04f90c6128f8a349ff8323df0b5dcb)`()` <a id="structFRHAPI__LoginRequestV1_1aba04f90c6128f8a349ff8323df0b5dcb"></a>

Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAcceptPrivacyPolicyOrNull`](#structFRHAPI__LoginRequestV1_1a9228737eb16338969dd11abefdb77700)`() const` <a id="structFRHAPI__LoginRequestV1_1a9228737eb16338969dd11abefdb77700"></a>

Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1aae72f7e8cb3730e49a9465b52804d64e)`(const bool & NewValue)` <a id="structFRHAPI__LoginRequestV1_1aae72f7e8cb3730e49a9465b52804d64e"></a>

Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ac011534c0015513c752c4db3647c166d)`(bool && NewValue)` <a id="structFRHAPI__LoginRequestV1_1ac011534c0015513c752c4db3647c166d"></a>

Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true using move semantics.

#### `public inline void `[`ClearAcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ae6935f79cb6cf3b44b05b88925e457be)`()` <a id="structFRHAPI__LoginRequestV1_1ae6935f79cb6cf3b44b05b88925e457be"></a>

Clears the value of AcceptPrivacyPolicy_Optional and sets AcceptPrivacyPolicy_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AcceptPrivacyPolicy`](#structFRHAPI__LoginRequestV1_1ad1fdbf4f392ca88920d457c76f8782c5)`()` <a id="structFRHAPI__LoginRequestV1_1ad1fdbf4f392ca88920d457c76f8782c5"></a>

Returns the default value of AcceptPrivacyPolicy.

