# group `RHAPI_PlatformUserLinkRequest` <a id="group__RHAPI__PlatformUserLinkRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformUserLinkRequest`](#structFRHAPI__PlatformUserLinkRequest) | Model for linking a platform user to the person of another platform user. This is used to determine the &quot;leader&quot; person_id that will be the assigned to a &quot;follower&quot; platform user. The Leader person is found using the following priority: 1. If the &#x60;leader_person_id&#x60; is provided directly 2. If the &#x60;leader_platform&#x60; and &#x60;leader_platform_user_id&#x60; are provided, the &#x60;person_id&#x60; of that platform user is used. 3. If the &#x60;scheme&#x60; and &#x60;credentials&#x60; are provided, the person_id of the platform user of credentials is used. The Follower platform user is found using the following priority: 1. If the &#x60;follower_platform&#x60; and &#x60;follower_platform_user_id&#x60; are provided directly. 2. If the Authorization header contains a user token, the platform and platform user id from the token are used.

---
title: FRHAPI_PlatformUserLinkRequest
---

```
struct FRHAPI_PlatformUserLinkRequest
  : public FRHAPI_Model
```

Model for linking a platform user to the person of another platform user. This is used to determine the &quot;leader&quot; person_id that will be the assigned to a &quot;follower&quot; platform user. The Leader person is found using the following priority: 1. If the &#x60;leader_person_id&#x60; is provided directly 2. If the &#x60;leader_platform&#x60; and &#x60;leader_platform_user_id&#x60; are provided, the &#x60;person_id&#x60; of that platform user is used. 3. If the &#x60;scheme&#x60; and &#x60;credentials&#x60; are provided, the person_id of the platform user of credentials is used. The Follower platform user is found using the following priority: 1. If the &#x60;follower_platform&#x60; and &#x60;follower_platform_user_id&#x60; are provided directly. 2. If the Authorization header contains a user token, the platform and platform user id from the token are used.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`LeaderPersonId_Optional`](#structFRHAPI__PlatformUserLinkRequest_1ac7e1bfcb30f5a284221ea54d8746cb9b) | Person ID of the leader to link to. If not provided, the person will be found from the `leader_platform` and `leader_platform_user_id`
`public bool `[`LeaderPersonId_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1a9bace2784ea58a02aa123d9962b57229) | true if LeaderPersonId_Optional has been set to a value
`public ERHAPI_Platform `[`LeaderPlatform_Optional`](#structFRHAPI__PlatformUserLinkRequest_1ad339f6ea5dbc501d96d3800c0625a846) | Platform of the leader to link to. If not provided, the leader will be found from the `scheme` and `credentials`
`public bool `[`LeaderPlatform_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1aee83c18851e80186cd0b403568a03e22) | true if LeaderPlatform_Optional has been set to a value
`public FString `[`LeaderPlatformUserId_Optional`](#structFRHAPI__PlatformUserLinkRequest_1a70dc2709e14697e6459ed09874c93fc7) | Platform user ID of the leader to link to. If not provided, the leader will be found from the `scheme` and `credentials`
`public bool `[`LeaderPlatformUserId_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1a74382fc47a3c7e97be3a8ed31d24ea58) | true if LeaderPlatformUserId_Optional has been set to a value
`public ERHAPI_Platform `[`FollowerPlatform_Optional`](#structFRHAPI__PlatformUserLinkRequest_1a38b22a548102d44b181ae24691e64328) | Platform of the follower to link. If not provided, the follower will be found from the Authorization header's token.
`public bool `[`FollowerPlatform_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1aa4b59627e0e41e77fd6c1c5757f40616) | true if FollowerPlatform_Optional has been set to a value
`public FString `[`FollowerPlatformUserId_Optional`](#structFRHAPI__PlatformUserLinkRequest_1ae318972893614a6979e95a45c360b810) | Platform user ID of the follower to link. If not provided, the follower will be found from the Authorization header's token.
`public bool `[`FollowerPlatformUserId_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1ab704deb75295abbad5bc0808393dac96) | true if FollowerPlatformUserId_Optional has been set to a value
`public FString `[`Scheme_Optional`](#structFRHAPI__PlatformUserLinkRequest_1aed683f32453f28d3c05e554a129652a6) | Scheme to use for the leader. For most tokens, this will be `Bearer`
`public bool `[`Scheme_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1a1fdfcdfc55bed3f7c0e7281dd8d53df6) | true if Scheme_Optional has been set to a value
`public FString `[`Credentials_Optional`](#structFRHAPI__PlatformUserLinkRequest_1ad67d77d8bb8f429327672630283e5f67) | Credentials to use for the leader. For most tokens, this will be the token itself.
`public bool `[`Credentials_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1acf658c5df72d03cae1a9d26c62b70eb2) | true if Credentials_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserLinkRequest_1a72868b888a0d61852c20345c63f01258)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserLinkRequest_1a33ac8964d17a6cec118103cba2eaf52c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1af29a68776b91f8cd0be9fd9447925270)`()` | Gets the value of LeaderPersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ad8a928b8876a7ec7d8e3afc1ea930f3c)`() const` | Gets the value of LeaderPersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a6bdf9ef3e2ddc6cd8773f2ab3b69cd25)`(const FGuid & DefaultValue) const` | Gets the value of LeaderPersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a76b37a4a2517601993661e9ff755900e)`(FGuid & OutValue) const` | Fills OutValue with the value of LeaderPersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ab7be40bd538b04b41a1f640ffb33c1fd)`()` | Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a218e903a9d5f85b50743eee9f7f95253)`() const` | Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1aa19f8000c9d5810a2f5d9446164bcdc8)`(const FGuid & NewValue)` | Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true.
`public inline void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a16ca42a7cdeef58c022ff60e5153a970)`(FGuid && NewValue)` | Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true using move semantics.
`public inline void `[`ClearLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ab13deb4a9e3a159ff8e0e70143bd404d)`()` | Clears the value of LeaderPersonId_Optional and sets LeaderPersonId_IsSet to false.
`public inline bool `[`IsLeaderPersonIdSet`](#structFRHAPI__PlatformUserLinkRequest_1aa10d42dcabe7174f1e6d15b57810edfe)`() const` | Checks whether LeaderPersonId_Optional has been set.
`public inline ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1af236bea38fe8f20525dda4de1c464282)`()` | Gets the value of LeaderPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a23ab9d06537bf8efd20238592a029129)`() const` | Gets the value of LeaderPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a1d9f639886283ccb0e5f94d5f8b3d456)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of LeaderPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1adf252910ea1e7ee39d8398924de97f27)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of LeaderPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ad5cd96974042e0e3df4b8b16f6705f91)`()` | Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a361206edb57d74f863392e6469dea1ba)`() const` | Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a67dcb235cca28bcbe91826944dedb3db)`(const ERHAPI_Platform & NewValue)` | Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true.
`public inline void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a46307bea588e76c56b6aea2288d39ff2)`(ERHAPI_Platform && NewValue)` | Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true using move semantics.
`public inline void `[`ClearLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aa1d30c34349741d5f3ce9dae808c841c)`()` | Clears the value of LeaderPlatform_Optional and sets LeaderPlatform_IsSet to false.
`public inline bool `[`IsLeaderPlatformSet`](#structFRHAPI__PlatformUserLinkRequest_1a9e069175b788a6bfd3d6207d34416d8b)`() const` | Checks whether LeaderPlatform_Optional has been set.
`public inline FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a57b1e5eb9031c3a952551bf917875d6a)`()` | Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a407e8d9fed238b82717d4558a9a41d19)`() const` | Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ab092b1b558a945ca1f5a9d0a9ca774de)`(const FString & DefaultValue) const` | Gets the value of LeaderPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a5cd4b53c394fa21bc38def30aca9ec02)`(FString & OutValue) const` | Fills OutValue with the value of LeaderPlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a2c520c646fea393190d6def162afa950)`()` | Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a64e98f2b566c57e6937c7805539aaf3b)`() const` | Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ab9be28cd938531ed3d458bd162e76117)`(const FString & NewValue)` | Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true.
`public inline void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a3742b14f40f7b6dbbde18ac3be60cbda)`(FString && NewValue)` | Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a58346c0dfc9303e74c49261abada7aa0)`()` | Clears the value of LeaderPlatformUserId_Optional and sets LeaderPlatformUserId_IsSet to false.
`public inline bool `[`IsLeaderPlatformUserIdSet`](#structFRHAPI__PlatformUserLinkRequest_1a43effdde34a39e7908c772f3f85531d4)`() const` | Checks whether LeaderPlatformUserId_Optional has been set.
`public inline ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a2537c9d075b9d28765f612c33d46bccd)`()` | Gets the value of FollowerPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a04195386682e02b95bb8f470f0c96b01)`() const` | Gets the value of FollowerPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a1624cea2ab104c769b24873396cca319)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of FollowerPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a3e5baceddc19666739d3e5ff66a60838)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of FollowerPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a04d516c6a3d8220f9fc2f29ac20a2824)`()` | Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a5501ace46b76e615e96a0d27ba4970b2)`() const` | Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aa9a670650e25ce18a8e27aa6d926a1e2)`(const ERHAPI_Platform & NewValue)` | Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true.
`public inline void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a17d00f589720677e7ee651759d60e4d2)`(ERHAPI_Platform && NewValue)` | Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true using move semantics.
`public inline void `[`ClearFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aafe929bfa9466221163555aba3174885)`()` | Clears the value of FollowerPlatform_Optional and sets FollowerPlatform_IsSet to false.
`public inline bool `[`IsFollowerPlatformSet`](#structFRHAPI__PlatformUserLinkRequest_1ad66de44da408fab4a748d972db6f7343)`() const` | Checks whether FollowerPlatform_Optional has been set.
`public inline FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a7172e8585cb78bb96e3b6943ec208303)`()` | Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ae43d63968fa3d8aa9c0695f4bdd40494)`() const` | Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ab499e33ad95bf9fa98a84ddfb038e0a6)`(const FString & DefaultValue) const` | Gets the value of FollowerPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a58ecdfecef0bcb0b134268f68fae144b)`(FString & OutValue) const` | Fills OutValue with the value of FollowerPlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a9e85e79c105aab1ca992b7cb6196495b)`()` | Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a5854eae066e96c0e689aae7965ec1989)`() const` | Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1aea2b38b14ca7598433cf74d9a0ba8517)`(const FString & NewValue)` | Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true.
`public inline void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1abca02bc0046d6dcb37fc915ebf9105e8)`(FString && NewValue)` | Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a5ac0bd5733f82d5d6089dad8ed3fcc7f)`()` | Clears the value of FollowerPlatformUserId_Optional and sets FollowerPlatformUserId_IsSet to false.
`public inline bool `[`IsFollowerPlatformUserIdSet`](#structFRHAPI__PlatformUserLinkRequest_1a62b71f964cb4e3e41f2b0609c978171f)`() const` | Checks whether FollowerPlatformUserId_Optional has been set.
`public inline FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1ac118884908add3cf726577fd7885b601)`()` | Gets the value of Scheme_Optional, regardless of it having been set.
`public inline const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1afa6f43a1c09f0cef9b1454fb5e44d094)`() const` | Gets the value of Scheme_Optional, regardless of it having been set.
`public inline const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a0033ba716165924189d30862c34d76c9)`(const FString & DefaultValue) const` | Gets the value of Scheme_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a117ddd05b4398569ea82aba13a986377)`(FString & OutValue) const` | Fills OutValue with the value of Scheme_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a174a3891d817893f0213cd586263f0a6)`()` | Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a349fbcb211ae0df876435e110bddda74)`() const` | Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a74c09bc3dec6e4e1e59e794143b33842)`(const FString & NewValue)` | Sets the value of Scheme_Optional and also sets Scheme_IsSet to true.
`public inline void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1acdff36a7be660c1ab34b6aea8c5571f2)`(FString && NewValue)` | Sets the value of Scheme_Optional and also sets Scheme_IsSet to true using move semantics.
`public inline void `[`ClearScheme`](#structFRHAPI__PlatformUserLinkRequest_1ab043f5d34c7672228756b226a350cfa3)`()` | Clears the value of Scheme_Optional and sets Scheme_IsSet to false.
`public inline bool `[`IsSchemeSet`](#structFRHAPI__PlatformUserLinkRequest_1a298a999553b6d760630def94f0b814b1)`() const` | Checks whether Scheme_Optional has been set.
`public inline FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aa388ea751a22e02e21c1c54f222bb0c5)`()` | Gets the value of Credentials_Optional, regardless of it having been set.
`public inline const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a799b71f992858df46c622445b01a45fa)`() const` | Gets the value of Credentials_Optional, regardless of it having been set.
`public inline const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a593c8460bea228e20eaa59278d5d703b)`(const FString & DefaultValue) const` | Gets the value of Credentials_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aad0a61001cc1f52af2e0f8d623cfd19f)`(FString & OutValue) const` | Fills OutValue with the value of Credentials_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1af0f4c12ca09fb69d9a166637b61a96fd)`()` | Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1abc53cf5b381c47272fe3c0d99fef7973)`() const` | Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aed1e37484a51115ca54d3f86da95c5ca)`(const FString & NewValue)` | Sets the value of Credentials_Optional and also sets Credentials_IsSet to true.
`public inline void `[`SetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aa410019e39a72d31a23acb15c78b4b07)`(FString && NewValue)` | Sets the value of Credentials_Optional and also sets Credentials_IsSet to true using move semantics.
`public inline void `[`ClearCredentials`](#structFRHAPI__PlatformUserLinkRequest_1ad7fa27e74be09877d61d42d182d3fd51)`()` | Clears the value of Credentials_Optional and sets Credentials_IsSet to false.
`public inline bool `[`IsCredentialsSet`](#structFRHAPI__PlatformUserLinkRequest_1acfb00fad5e4a6c65565a3a08dfc7cf32)`() const` | Checks whether Credentials_Optional has been set.

### Members

#### `public FGuid `[`LeaderPersonId_Optional`](#structFRHAPI__PlatformUserLinkRequest_1ac7e1bfcb30f5a284221ea54d8746cb9b) <a id="structFRHAPI__PlatformUserLinkRequest_1ac7e1bfcb30f5a284221ea54d8746cb9b"></a>

Person ID of the leader to link to. If not provided, the person will be found from the `leader_platform` and `leader_platform_user_id`

#### `public bool `[`LeaderPersonId_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1a9bace2784ea58a02aa123d9962b57229) <a id="structFRHAPI__PlatformUserLinkRequest_1a9bace2784ea58a02aa123d9962b57229"></a>

true if LeaderPersonId_Optional has been set to a value

#### `public ERHAPI_Platform `[`LeaderPlatform_Optional`](#structFRHAPI__PlatformUserLinkRequest_1ad339f6ea5dbc501d96d3800c0625a846) <a id="structFRHAPI__PlatformUserLinkRequest_1ad339f6ea5dbc501d96d3800c0625a846"></a>

Platform of the leader to link to. If not provided, the leader will be found from the `scheme` and `credentials`

#### `public bool `[`LeaderPlatform_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1aee83c18851e80186cd0b403568a03e22) <a id="structFRHAPI__PlatformUserLinkRequest_1aee83c18851e80186cd0b403568a03e22"></a>

true if LeaderPlatform_Optional has been set to a value

#### `public FString `[`LeaderPlatformUserId_Optional`](#structFRHAPI__PlatformUserLinkRequest_1a70dc2709e14697e6459ed09874c93fc7) <a id="structFRHAPI__PlatformUserLinkRequest_1a70dc2709e14697e6459ed09874c93fc7"></a>

Platform user ID of the leader to link to. If not provided, the leader will be found from the `scheme` and `credentials`

#### `public bool `[`LeaderPlatformUserId_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1a74382fc47a3c7e97be3a8ed31d24ea58) <a id="structFRHAPI__PlatformUserLinkRequest_1a74382fc47a3c7e97be3a8ed31d24ea58"></a>

true if LeaderPlatformUserId_Optional has been set to a value

#### `public ERHAPI_Platform `[`FollowerPlatform_Optional`](#structFRHAPI__PlatformUserLinkRequest_1a38b22a548102d44b181ae24691e64328) <a id="structFRHAPI__PlatformUserLinkRequest_1a38b22a548102d44b181ae24691e64328"></a>

Platform of the follower to link. If not provided, the follower will be found from the Authorization header's token.

#### `public bool `[`FollowerPlatform_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1aa4b59627e0e41e77fd6c1c5757f40616) <a id="structFRHAPI__PlatformUserLinkRequest_1aa4b59627e0e41e77fd6c1c5757f40616"></a>

true if FollowerPlatform_Optional has been set to a value

#### `public FString `[`FollowerPlatformUserId_Optional`](#structFRHAPI__PlatformUserLinkRequest_1ae318972893614a6979e95a45c360b810) <a id="structFRHAPI__PlatformUserLinkRequest_1ae318972893614a6979e95a45c360b810"></a>

Platform user ID of the follower to link. If not provided, the follower will be found from the Authorization header's token.

#### `public bool `[`FollowerPlatformUserId_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1ab704deb75295abbad5bc0808393dac96) <a id="structFRHAPI__PlatformUserLinkRequest_1ab704deb75295abbad5bc0808393dac96"></a>

true if FollowerPlatformUserId_Optional has been set to a value

#### `public FString `[`Scheme_Optional`](#structFRHAPI__PlatformUserLinkRequest_1aed683f32453f28d3c05e554a129652a6) <a id="structFRHAPI__PlatformUserLinkRequest_1aed683f32453f28d3c05e554a129652a6"></a>

Scheme to use for the leader. For most tokens, this will be `Bearer`

#### `public bool `[`Scheme_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1a1fdfcdfc55bed3f7c0e7281dd8d53df6) <a id="structFRHAPI__PlatformUserLinkRequest_1a1fdfcdfc55bed3f7c0e7281dd8d53df6"></a>

true if Scheme_Optional has been set to a value

#### `public FString `[`Credentials_Optional`](#structFRHAPI__PlatformUserLinkRequest_1ad67d77d8bb8f429327672630283e5f67) <a id="structFRHAPI__PlatformUserLinkRequest_1ad67d77d8bb8f429327672630283e5f67"></a>

Credentials to use for the leader. For most tokens, this will be the token itself.

#### `public bool `[`Credentials_IsSet`](#structFRHAPI__PlatformUserLinkRequest_1acf658c5df72d03cae1a9d26c62b70eb2) <a id="structFRHAPI__PlatformUserLinkRequest_1acf658c5df72d03cae1a9d26c62b70eb2"></a>

true if Credentials_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserLinkRequest_1a72868b888a0d61852c20345c63f01258)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a72868b888a0d61852c20345c63f01258"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserLinkRequest_1a33ac8964d17a6cec118103cba2eaf52c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a33ac8964d17a6cec118103cba2eaf52c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1af29a68776b91f8cd0be9fd9447925270)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1af29a68776b91f8cd0be9fd9447925270"></a>

Gets the value of LeaderPersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ad8a928b8876a7ec7d8e3afc1ea930f3c)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1ad8a928b8876a7ec7d8e3afc1ea930f3c"></a>

Gets the value of LeaderPersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a6bdf9ef3e2ddc6cd8773f2ab3b69cd25)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a6bdf9ef3e2ddc6cd8773f2ab3b69cd25"></a>

Gets the value of LeaderPersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a76b37a4a2517601993661e9ff755900e)`(FGuid & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a76b37a4a2517601993661e9ff755900e"></a>

Fills OutValue with the value of LeaderPersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ab7be40bd538b04b41a1f640ffb33c1fd)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ab7be40bd538b04b41a1f640ffb33c1fd"></a>

Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a218e903a9d5f85b50743eee9f7f95253)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a218e903a9d5f85b50743eee9f7f95253"></a>

Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1aa19f8000c9d5810a2f5d9446164bcdc8)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1aa19f8000c9d5810a2f5d9446164bcdc8"></a>

Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true.

#### `public inline void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a16ca42a7cdeef58c022ff60e5153a970)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a16ca42a7cdeef58c022ff60e5153a970"></a>

Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ab13deb4a9e3a159ff8e0e70143bd404d)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ab13deb4a9e3a159ff8e0e70143bd404d"></a>

Clears the value of LeaderPersonId_Optional and sets LeaderPersonId_IsSet to false.

#### `public inline bool `[`IsLeaderPersonIdSet`](#structFRHAPI__PlatformUserLinkRequest_1aa10d42dcabe7174f1e6d15b57810edfe)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1aa10d42dcabe7174f1e6d15b57810edfe"></a>

Checks whether LeaderPersonId_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1af236bea38fe8f20525dda4de1c464282)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1af236bea38fe8f20525dda4de1c464282"></a>

Gets the value of LeaderPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a23ab9d06537bf8efd20238592a029129)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a23ab9d06537bf8efd20238592a029129"></a>

Gets the value of LeaderPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a1d9f639886283ccb0e5f94d5f8b3d456)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a1d9f639886283ccb0e5f94d5f8b3d456"></a>

Gets the value of LeaderPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1adf252910ea1e7ee39d8398924de97f27)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1adf252910ea1e7ee39d8398924de97f27"></a>

Fills OutValue with the value of LeaderPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ad5cd96974042e0e3df4b8b16f6705f91)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ad5cd96974042e0e3df4b8b16f6705f91"></a>

Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a361206edb57d74f863392e6469dea1ba)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a361206edb57d74f863392e6469dea1ba"></a>

Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a67dcb235cca28bcbe91826944dedb3db)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a67dcb235cca28bcbe91826944dedb3db"></a>

Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true.

#### `public inline void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a46307bea588e76c56b6aea2288d39ff2)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a46307bea588e76c56b6aea2288d39ff2"></a>

Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aa1d30c34349741d5f3ce9dae808c841c)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1aa1d30c34349741d5f3ce9dae808c841c"></a>

Clears the value of LeaderPlatform_Optional and sets LeaderPlatform_IsSet to false.

#### `public inline bool `[`IsLeaderPlatformSet`](#structFRHAPI__PlatformUserLinkRequest_1a9e069175b788a6bfd3d6207d34416d8b)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a9e069175b788a6bfd3d6207d34416d8b"></a>

Checks whether LeaderPlatform_Optional has been set.

#### `public inline FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a57b1e5eb9031c3a952551bf917875d6a)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a57b1e5eb9031c3a952551bf917875d6a"></a>

Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a407e8d9fed238b82717d4558a9a41d19)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a407e8d9fed238b82717d4558a9a41d19"></a>

Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ab092b1b558a945ca1f5a9d0a9ca774de)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1ab092b1b558a945ca1f5a9d0a9ca774de"></a>

Gets the value of LeaderPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a5cd4b53c394fa21bc38def30aca9ec02)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a5cd4b53c394fa21bc38def30aca9ec02"></a>

Fills OutValue with the value of LeaderPlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a2c520c646fea393190d6def162afa950)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a2c520c646fea393190d6def162afa950"></a>

Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a64e98f2b566c57e6937c7805539aaf3b)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a64e98f2b566c57e6937c7805539aaf3b"></a>

Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ab9be28cd938531ed3d458bd162e76117)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1ab9be28cd938531ed3d458bd162e76117"></a>

Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true.

#### `public inline void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a3742b14f40f7b6dbbde18ac3be60cbda)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a3742b14f40f7b6dbbde18ac3be60cbda"></a>

Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a58346c0dfc9303e74c49261abada7aa0)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a58346c0dfc9303e74c49261abada7aa0"></a>

Clears the value of LeaderPlatformUserId_Optional and sets LeaderPlatformUserId_IsSet to false.

#### `public inline bool `[`IsLeaderPlatformUserIdSet`](#structFRHAPI__PlatformUserLinkRequest_1a43effdde34a39e7908c772f3f85531d4)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a43effdde34a39e7908c772f3f85531d4"></a>

Checks whether LeaderPlatformUserId_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a2537c9d075b9d28765f612c33d46bccd)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a2537c9d075b9d28765f612c33d46bccd"></a>

Gets the value of FollowerPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a04195386682e02b95bb8f470f0c96b01)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a04195386682e02b95bb8f470f0c96b01"></a>

Gets the value of FollowerPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a1624cea2ab104c769b24873396cca319)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a1624cea2ab104c769b24873396cca319"></a>

Gets the value of FollowerPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a3e5baceddc19666739d3e5ff66a60838)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a3e5baceddc19666739d3e5ff66a60838"></a>

Fills OutValue with the value of FollowerPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a04d516c6a3d8220f9fc2f29ac20a2824)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a04d516c6a3d8220f9fc2f29ac20a2824"></a>

Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a5501ace46b76e615e96a0d27ba4970b2)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a5501ace46b76e615e96a0d27ba4970b2"></a>

Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aa9a670650e25ce18a8e27aa6d926a1e2)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1aa9a670650e25ce18a8e27aa6d926a1e2"></a>

Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true.

#### `public inline void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a17d00f589720677e7ee651759d60e4d2)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a17d00f589720677e7ee651759d60e4d2"></a>

Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aafe929bfa9466221163555aba3174885)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1aafe929bfa9466221163555aba3174885"></a>

Clears the value of FollowerPlatform_Optional and sets FollowerPlatform_IsSet to false.

#### `public inline bool `[`IsFollowerPlatformSet`](#structFRHAPI__PlatformUserLinkRequest_1ad66de44da408fab4a748d972db6f7343)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1ad66de44da408fab4a748d972db6f7343"></a>

Checks whether FollowerPlatform_Optional has been set.

#### `public inline FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a7172e8585cb78bb96e3b6943ec208303)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a7172e8585cb78bb96e3b6943ec208303"></a>

Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ae43d63968fa3d8aa9c0695f4bdd40494)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1ae43d63968fa3d8aa9c0695f4bdd40494"></a>

Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ab499e33ad95bf9fa98a84ddfb038e0a6)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1ab499e33ad95bf9fa98a84ddfb038e0a6"></a>

Gets the value of FollowerPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a58ecdfecef0bcb0b134268f68fae144b)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a58ecdfecef0bcb0b134268f68fae144b"></a>

Fills OutValue with the value of FollowerPlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a9e85e79c105aab1ca992b7cb6196495b)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a9e85e79c105aab1ca992b7cb6196495b"></a>

Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a5854eae066e96c0e689aae7965ec1989)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a5854eae066e96c0e689aae7965ec1989"></a>

Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1aea2b38b14ca7598433cf74d9a0ba8517)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1aea2b38b14ca7598433cf74d9a0ba8517"></a>

Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true.

#### `public inline void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1abca02bc0046d6dcb37fc915ebf9105e8)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1abca02bc0046d6dcb37fc915ebf9105e8"></a>

Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a5ac0bd5733f82d5d6089dad8ed3fcc7f)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a5ac0bd5733f82d5d6089dad8ed3fcc7f"></a>

Clears the value of FollowerPlatformUserId_Optional and sets FollowerPlatformUserId_IsSet to false.

#### `public inline bool `[`IsFollowerPlatformUserIdSet`](#structFRHAPI__PlatformUserLinkRequest_1a62b71f964cb4e3e41f2b0609c978171f)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a62b71f964cb4e3e41f2b0609c978171f"></a>

Checks whether FollowerPlatformUserId_Optional has been set.

#### `public inline FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1ac118884908add3cf726577fd7885b601)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ac118884908add3cf726577fd7885b601"></a>

Gets the value of Scheme_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1afa6f43a1c09f0cef9b1454fb5e44d094)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1afa6f43a1c09f0cef9b1454fb5e44d094"></a>

Gets the value of Scheme_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a0033ba716165924189d30862c34d76c9)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a0033ba716165924189d30862c34d76c9"></a>

Gets the value of Scheme_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a117ddd05b4398569ea82aba13a986377)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a117ddd05b4398569ea82aba13a986377"></a>

Fills OutValue with the value of Scheme_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a174a3891d817893f0213cd586263f0a6)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a174a3891d817893f0213cd586263f0a6"></a>

Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a349fbcb211ae0df876435e110bddda74)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a349fbcb211ae0df876435e110bddda74"></a>

Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a74c09bc3dec6e4e1e59e794143b33842)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a74c09bc3dec6e4e1e59e794143b33842"></a>

Sets the value of Scheme_Optional and also sets Scheme_IsSet to true.

#### `public inline void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1acdff36a7be660c1ab34b6aea8c5571f2)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1acdff36a7be660c1ab34b6aea8c5571f2"></a>

Sets the value of Scheme_Optional and also sets Scheme_IsSet to true using move semantics.

#### `public inline void `[`ClearScheme`](#structFRHAPI__PlatformUserLinkRequest_1ab043f5d34c7672228756b226a350cfa3)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ab043f5d34c7672228756b226a350cfa3"></a>

Clears the value of Scheme_Optional and sets Scheme_IsSet to false.

#### `public inline bool `[`IsSchemeSet`](#structFRHAPI__PlatformUserLinkRequest_1a298a999553b6d760630def94f0b814b1)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a298a999553b6d760630def94f0b814b1"></a>

Checks whether Scheme_Optional has been set.

#### `public inline FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aa388ea751a22e02e21c1c54f222bb0c5)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1aa388ea751a22e02e21c1c54f222bb0c5"></a>

Gets the value of Credentials_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a799b71f992858df46c622445b01a45fa)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a799b71f992858df46c622445b01a45fa"></a>

Gets the value of Credentials_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a593c8460bea228e20eaa59278d5d703b)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a593c8460bea228e20eaa59278d5d703b"></a>

Gets the value of Credentials_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aad0a61001cc1f52af2e0f8d623cfd19f)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1aad0a61001cc1f52af2e0f8d623cfd19f"></a>

Fills OutValue with the value of Credentials_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1af0f4c12ca09fb69d9a166637b61a96fd)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1af0f4c12ca09fb69d9a166637b61a96fd"></a>

Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1abc53cf5b381c47272fe3c0d99fef7973)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1abc53cf5b381c47272fe3c0d99fef7973"></a>

Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aed1e37484a51115ca54d3f86da95c5ca)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1aed1e37484a51115ca54d3f86da95c5ca"></a>

Sets the value of Credentials_Optional and also sets Credentials_IsSet to true.

#### `public inline void `[`SetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aa410019e39a72d31a23acb15c78b4b07)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1aa410019e39a72d31a23acb15c78b4b07"></a>

Sets the value of Credentials_Optional and also sets Credentials_IsSet to true using move semantics.

#### `public inline void `[`ClearCredentials`](#structFRHAPI__PlatformUserLinkRequest_1ad7fa27e74be09877d61d42d182d3fd51)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ad7fa27e74be09877d61d42d182d3fd51"></a>

Clears the value of Credentials_Optional and sets Credentials_IsSet to false.

#### `public inline bool `[`IsCredentialsSet`](#structFRHAPI__PlatformUserLinkRequest_1acfb00fad5e4a6c65565a3a08dfc7cf32)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1acfb00fad5e4a6c65565a3a08dfc7cf32"></a>

Checks whether Credentials_Optional has been set.

