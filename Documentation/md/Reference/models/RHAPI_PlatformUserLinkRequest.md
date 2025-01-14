---
title: RHAPI_PlatformUserLinkRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformUserLinkRequest`](#structFRHAPI__PlatformUserLinkRequest) | Model for linking a platform user to the person of another platform user. This is used to determine the &quot;leader&quot; person_id that will be the assigned to a &quot;follower&quot; platform user. The Leader person is found using the following priority: 1. If the &#x60;leader_person_id&#x60; is provided directly 2. If the &#x60;leader_platform&#x60; and &#x60;leader_platform_user_id&#x60; are provided, the &#x60;person_id&#x60; of that platform user is used. 3. If the &#x60;scheme&#x60; and &#x60;credentials&#x60; are provided, the person_id of the platform user of credentials is used. The Follower platform user is found using the following priority: 1. If the &#x60;follower_platform&#x60; and &#x60;follower_platform_user_id&#x60; are provided directly. 2. If the Authorization header contains a user token, the platform and platform user id from the token are used.

## struct `FRHAPI_PlatformUserLinkRequest` <a id="structFRHAPI__PlatformUserLinkRequest"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserLinkRequest_1a20be36020378669b7e4c1a477ce3073a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1adff042eba5fec5cd0671fe259bde125f)`()` | Gets the value of LeaderPersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a6727cde6368b4a4191609dd1dccb757e)`() const` | Gets the value of LeaderPersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ae3372195de24edee147833a0586aad43)`(const FGuid & DefaultValue) const` | Gets the value of LeaderPersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a76b37a4a2517601993661e9ff755900e)`(FGuid & OutValue) const` | Fills OutValue with the value of LeaderPersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ac0c874d2ecab81b96fe7d357fc4f5360)`()` | Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1aea00c4932258e7426f119583a20a486e)`() const` | Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1aa19f8000c9d5810a2f5d9446164bcdc8)`(const FGuid & NewValue)` | Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true.
`public inline void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a16ca42a7cdeef58c022ff60e5153a970)`(FGuid && NewValue)` | Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true using move semantics.
`public inline void `[`ClearLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ab13deb4a9e3a159ff8e0e70143bd404d)`()` | Clears the value of LeaderPersonId_Optional and sets LeaderPersonId_IsSet to false.
`public inline bool `[`IsLeaderPersonIdSet`](#structFRHAPI__PlatformUserLinkRequest_1aa10d42dcabe7174f1e6d15b57810edfe)`() const` | Checks whether LeaderPersonId_Optional has been set.
`public inline ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1ae631df20d0bf51ab58cb03a8d23c571a)`()` | Gets the value of LeaderPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aeb2b74adbc20cdfbe467ef200135d60d)`() const` | Gets the value of LeaderPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a97efd2c556a8fe0ceec08ec4150baf91)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of LeaderPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1adf252910ea1e7ee39d8398924de97f27)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of LeaderPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ad06b4f631750d2910554897001ad1656)`()` | Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a09562327a18a9c0ea2e35b81436b8de5)`() const` | Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a67dcb235cca28bcbe91826944dedb3db)`(const ERHAPI_Platform & NewValue)` | Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true.
`public inline void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a46307bea588e76c56b6aea2288d39ff2)`(ERHAPI_Platform && NewValue)` | Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true using move semantics.
`public inline void `[`ClearLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aa1d30c34349741d5f3ce9dae808c841c)`()` | Clears the value of LeaderPlatform_Optional and sets LeaderPlatform_IsSet to false.
`public inline bool `[`IsLeaderPlatformSet`](#structFRHAPI__PlatformUserLinkRequest_1a9e069175b788a6bfd3d6207d34416d8b)`() const` | Checks whether LeaderPlatform_Optional has been set.
`public inline FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a753933421b332a95db2599903a40f553)`()` | Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a07229102ac049c006eeebab2dce7f2cc)`() const` | Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ac2682370c3c40c96469cec12a51eabd0)`(const FString & DefaultValue) const` | Gets the value of LeaderPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a5cd4b53c394fa21bc38def30aca9ec02)`(FString & OutValue) const` | Fills OutValue with the value of LeaderPlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a4cbda90ded7ee14173ced4fa1efa0e34)`()` | Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a11e17cf0bf44ee02f4ed2514e87c1146)`() const` | Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ab9be28cd938531ed3d458bd162e76117)`(const FString & NewValue)` | Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true.
`public inline void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a3742b14f40f7b6dbbde18ac3be60cbda)`(FString && NewValue)` | Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a58346c0dfc9303e74c49261abada7aa0)`()` | Clears the value of LeaderPlatformUserId_Optional and sets LeaderPlatformUserId_IsSet to false.
`public inline bool `[`IsLeaderPlatformUserIdSet`](#structFRHAPI__PlatformUserLinkRequest_1a43effdde34a39e7908c772f3f85531d4)`() const` | Checks whether LeaderPlatformUserId_Optional has been set.
`public inline ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aece290112815148219e42308a0d1da9c)`()` | Gets the value of FollowerPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a63ce67eb1a9a16f1f217be8839a70177)`() const` | Gets the value of FollowerPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a628ff43bd591d2eba71e90de7e297fb0)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of FollowerPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a3e5baceddc19666739d3e5ff66a60838)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of FollowerPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ad7aa02a2c4925b94c1b670618a9a45ea)`()` | Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a7aa305fdd80a48ecd8fd7f4d0a9efefe)`() const` | Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aa9a670650e25ce18a8e27aa6d926a1e2)`(const ERHAPI_Platform & NewValue)` | Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true.
`public inline void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a17d00f589720677e7ee651759d60e4d2)`(ERHAPI_Platform && NewValue)` | Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true using move semantics.
`public inline void `[`ClearFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aafe929bfa9466221163555aba3174885)`()` | Clears the value of FollowerPlatform_Optional and sets FollowerPlatform_IsSet to false.
`public inline bool `[`IsFollowerPlatformSet`](#structFRHAPI__PlatformUserLinkRequest_1ad66de44da408fab4a748d972db6f7343)`() const` | Checks whether FollowerPlatform_Optional has been set.
`public inline FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a1c432b551931ee264ee0f454a1210b8d)`()` | Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a9e64ce91efc5d5559b545809c12ecb2a)`() const` | Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ab3082ca5f476631fa6f7bd667ff41f7c)`(const FString & DefaultValue) const` | Gets the value of FollowerPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a58ecdfecef0bcb0b134268f68fae144b)`(FString & OutValue) const` | Fills OutValue with the value of FollowerPlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a1d2eb464f4176a438fdcec8440781b80)`()` | Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1af6eafee09d49860e0a4e53c2ab228cf2)`() const` | Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1aea2b38b14ca7598433cf74d9a0ba8517)`(const FString & NewValue)` | Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true.
`public inline void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1abca02bc0046d6dcb37fc915ebf9105e8)`(FString && NewValue)` | Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a5ac0bd5733f82d5d6089dad8ed3fcc7f)`()` | Clears the value of FollowerPlatformUserId_Optional and sets FollowerPlatformUserId_IsSet to false.
`public inline bool `[`IsFollowerPlatformUserIdSet`](#structFRHAPI__PlatformUserLinkRequest_1a62b71f964cb4e3e41f2b0609c978171f)`() const` | Checks whether FollowerPlatformUserId_Optional has been set.
`public inline FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a26d3882187a7405c2ade25f4643ca490)`()` | Gets the value of Scheme_Optional, regardless of it having been set.
`public inline const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a0db48043120c7de4fe0767cdea2ab05f)`() const` | Gets the value of Scheme_Optional, regardless of it having been set.
`public inline const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a3ea468fd2cf7e4a381af2a2a1d02c1d1)`(const FString & DefaultValue) const` | Gets the value of Scheme_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a117ddd05b4398569ea82aba13a986377)`(FString & OutValue) const` | Fills OutValue with the value of Scheme_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ac71e3c4659ef17511b0e8c408dba888e)`()` | Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a41717ebdebe2050c8707f367cbce2285)`() const` | Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a74c09bc3dec6e4e1e59e794143b33842)`(const FString & NewValue)` | Sets the value of Scheme_Optional and also sets Scheme_IsSet to true.
`public inline void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1acdff36a7be660c1ab34b6aea8c5571f2)`(FString && NewValue)` | Sets the value of Scheme_Optional and also sets Scheme_IsSet to true using move semantics.
`public inline void `[`ClearScheme`](#structFRHAPI__PlatformUserLinkRequest_1ab043f5d34c7672228756b226a350cfa3)`()` | Clears the value of Scheme_Optional and sets Scheme_IsSet to false.
`public inline bool `[`IsSchemeSet`](#structFRHAPI__PlatformUserLinkRequest_1a298a999553b6d760630def94f0b814b1)`() const` | Checks whether Scheme_Optional has been set.
`public inline FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a330025f5551a1845b2d3a3c7dd9a9564)`()` | Gets the value of Credentials_Optional, regardless of it having been set.
`public inline const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1ae36854f07cba8a3c16315eba9bad8fba)`() const` | Gets the value of Credentials_Optional, regardless of it having been set.
`public inline const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a22700989afee40e26a9092a332f4bd65)`(const FString & DefaultValue) const` | Gets the value of Credentials_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aad0a61001cc1f52af2e0f8d623cfd19f)`(FString & OutValue) const` | Fills OutValue with the value of Credentials_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a24d90eba261eb9e241fd98837dff52a2)`()` | Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a877a8f3df811250e2d269b2c26f7be50)`() const` | Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserLinkRequest_1a20be36020378669b7e4c1a477ce3073a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a20be36020378669b7e4c1a477ce3073a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1adff042eba5fec5cd0671fe259bde125f)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1adff042eba5fec5cd0671fe259bde125f"></a>

Gets the value of LeaderPersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a6727cde6368b4a4191609dd1dccb757e)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a6727cde6368b4a4191609dd1dccb757e"></a>

Gets the value of LeaderPersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ae3372195de24edee147833a0586aad43)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1ae3372195de24edee147833a0586aad43"></a>

Gets the value of LeaderPersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a76b37a4a2517601993661e9ff755900e)`(FGuid & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a76b37a4a2517601993661e9ff755900e"></a>

Fills OutValue with the value of LeaderPersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ac0c874d2ecab81b96fe7d357fc4f5360)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ac0c874d2ecab81b96fe7d357fc4f5360"></a>

Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1aea00c4932258e7426f119583a20a486e)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1aea00c4932258e7426f119583a20a486e"></a>

Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1aa19f8000c9d5810a2f5d9446164bcdc8)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1aa19f8000c9d5810a2f5d9446164bcdc8"></a>

Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true.

#### `public inline void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a16ca42a7cdeef58c022ff60e5153a970)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a16ca42a7cdeef58c022ff60e5153a970"></a>

Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ab13deb4a9e3a159ff8e0e70143bd404d)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ab13deb4a9e3a159ff8e0e70143bd404d"></a>

Clears the value of LeaderPersonId_Optional and sets LeaderPersonId_IsSet to false.

#### `public inline bool `[`IsLeaderPersonIdSet`](#structFRHAPI__PlatformUserLinkRequest_1aa10d42dcabe7174f1e6d15b57810edfe)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1aa10d42dcabe7174f1e6d15b57810edfe"></a>

Checks whether LeaderPersonId_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1ae631df20d0bf51ab58cb03a8d23c571a)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ae631df20d0bf51ab58cb03a8d23c571a"></a>

Gets the value of LeaderPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aeb2b74adbc20cdfbe467ef200135d60d)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1aeb2b74adbc20cdfbe467ef200135d60d"></a>

Gets the value of LeaderPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a97efd2c556a8fe0ceec08ec4150baf91)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a97efd2c556a8fe0ceec08ec4150baf91"></a>

Gets the value of LeaderPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1adf252910ea1e7ee39d8398924de97f27)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1adf252910ea1e7ee39d8398924de97f27"></a>

Fills OutValue with the value of LeaderPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ad06b4f631750d2910554897001ad1656)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ad06b4f631750d2910554897001ad1656"></a>

Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a09562327a18a9c0ea2e35b81436b8de5)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a09562327a18a9c0ea2e35b81436b8de5"></a>

Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a67dcb235cca28bcbe91826944dedb3db)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a67dcb235cca28bcbe91826944dedb3db"></a>

Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true.

#### `public inline void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a46307bea588e76c56b6aea2288d39ff2)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a46307bea588e76c56b6aea2288d39ff2"></a>

Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aa1d30c34349741d5f3ce9dae808c841c)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1aa1d30c34349741d5f3ce9dae808c841c"></a>

Clears the value of LeaderPlatform_Optional and sets LeaderPlatform_IsSet to false.

#### `public inline bool `[`IsLeaderPlatformSet`](#structFRHAPI__PlatformUserLinkRequest_1a9e069175b788a6bfd3d6207d34416d8b)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a9e069175b788a6bfd3d6207d34416d8b"></a>

Checks whether LeaderPlatform_Optional has been set.

#### `public inline FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a753933421b332a95db2599903a40f553)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a753933421b332a95db2599903a40f553"></a>

Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a07229102ac049c006eeebab2dce7f2cc)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a07229102ac049c006eeebab2dce7f2cc"></a>

Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ac2682370c3c40c96469cec12a51eabd0)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1ac2682370c3c40c96469cec12a51eabd0"></a>

Gets the value of LeaderPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a5cd4b53c394fa21bc38def30aca9ec02)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a5cd4b53c394fa21bc38def30aca9ec02"></a>

Fills OutValue with the value of LeaderPlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a4cbda90ded7ee14173ced4fa1efa0e34)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a4cbda90ded7ee14173ced4fa1efa0e34"></a>

Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a11e17cf0bf44ee02f4ed2514e87c1146)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a11e17cf0bf44ee02f4ed2514e87c1146"></a>

Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ab9be28cd938531ed3d458bd162e76117)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1ab9be28cd938531ed3d458bd162e76117"></a>

Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true.

#### `public inline void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a3742b14f40f7b6dbbde18ac3be60cbda)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a3742b14f40f7b6dbbde18ac3be60cbda"></a>

Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a58346c0dfc9303e74c49261abada7aa0)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a58346c0dfc9303e74c49261abada7aa0"></a>

Clears the value of LeaderPlatformUserId_Optional and sets LeaderPlatformUserId_IsSet to false.

#### `public inline bool `[`IsLeaderPlatformUserIdSet`](#structFRHAPI__PlatformUserLinkRequest_1a43effdde34a39e7908c772f3f85531d4)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a43effdde34a39e7908c772f3f85531d4"></a>

Checks whether LeaderPlatformUserId_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aece290112815148219e42308a0d1da9c)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1aece290112815148219e42308a0d1da9c"></a>

Gets the value of FollowerPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a63ce67eb1a9a16f1f217be8839a70177)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a63ce67eb1a9a16f1f217be8839a70177"></a>

Gets the value of FollowerPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a628ff43bd591d2eba71e90de7e297fb0)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a628ff43bd591d2eba71e90de7e297fb0"></a>

Gets the value of FollowerPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a3e5baceddc19666739d3e5ff66a60838)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a3e5baceddc19666739d3e5ff66a60838"></a>

Fills OutValue with the value of FollowerPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ad7aa02a2c4925b94c1b670618a9a45ea)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ad7aa02a2c4925b94c1b670618a9a45ea"></a>

Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a7aa305fdd80a48ecd8fd7f4d0a9efefe)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a7aa305fdd80a48ecd8fd7f4d0a9efefe"></a>

Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aa9a670650e25ce18a8e27aa6d926a1e2)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1aa9a670650e25ce18a8e27aa6d926a1e2"></a>

Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true.

#### `public inline void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a17d00f589720677e7ee651759d60e4d2)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a17d00f589720677e7ee651759d60e4d2"></a>

Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aafe929bfa9466221163555aba3174885)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1aafe929bfa9466221163555aba3174885"></a>

Clears the value of FollowerPlatform_Optional and sets FollowerPlatform_IsSet to false.

#### `public inline bool `[`IsFollowerPlatformSet`](#structFRHAPI__PlatformUserLinkRequest_1ad66de44da408fab4a748d972db6f7343)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1ad66de44da408fab4a748d972db6f7343"></a>

Checks whether FollowerPlatform_Optional has been set.

#### `public inline FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a1c432b551931ee264ee0f454a1210b8d)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a1c432b551931ee264ee0f454a1210b8d"></a>

Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a9e64ce91efc5d5559b545809c12ecb2a)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a9e64ce91efc5d5559b545809c12ecb2a"></a>

Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ab3082ca5f476631fa6f7bd667ff41f7c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1ab3082ca5f476631fa6f7bd667ff41f7c"></a>

Gets the value of FollowerPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a58ecdfecef0bcb0b134268f68fae144b)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a58ecdfecef0bcb0b134268f68fae144b"></a>

Fills OutValue with the value of FollowerPlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a1d2eb464f4176a438fdcec8440781b80)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a1d2eb464f4176a438fdcec8440781b80"></a>

Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1af6eafee09d49860e0a4e53c2ab228cf2)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1af6eafee09d49860e0a4e53c2ab228cf2"></a>

Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1aea2b38b14ca7598433cf74d9a0ba8517)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1aea2b38b14ca7598433cf74d9a0ba8517"></a>

Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true.

#### `public inline void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1abca02bc0046d6dcb37fc915ebf9105e8)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1abca02bc0046d6dcb37fc915ebf9105e8"></a>

Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a5ac0bd5733f82d5d6089dad8ed3fcc7f)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a5ac0bd5733f82d5d6089dad8ed3fcc7f"></a>

Clears the value of FollowerPlatformUserId_Optional and sets FollowerPlatformUserId_IsSet to false.

#### `public inline bool `[`IsFollowerPlatformUserIdSet`](#structFRHAPI__PlatformUserLinkRequest_1a62b71f964cb4e3e41f2b0609c978171f)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a62b71f964cb4e3e41f2b0609c978171f"></a>

Checks whether FollowerPlatformUserId_Optional has been set.

#### `public inline FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a26d3882187a7405c2ade25f4643ca490)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a26d3882187a7405c2ade25f4643ca490"></a>

Gets the value of Scheme_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a0db48043120c7de4fe0767cdea2ab05f)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a0db48043120c7de4fe0767cdea2ab05f"></a>

Gets the value of Scheme_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a3ea468fd2cf7e4a381af2a2a1d02c1d1)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a3ea468fd2cf7e4a381af2a2a1d02c1d1"></a>

Gets the value of Scheme_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a117ddd05b4398569ea82aba13a986377)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a117ddd05b4398569ea82aba13a986377"></a>

Fills OutValue with the value of Scheme_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ac71e3c4659ef17511b0e8c408dba888e)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ac71e3c4659ef17511b0e8c408dba888e"></a>

Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a41717ebdebe2050c8707f367cbce2285)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a41717ebdebe2050c8707f367cbce2285"></a>

Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a74c09bc3dec6e4e1e59e794143b33842)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a74c09bc3dec6e4e1e59e794143b33842"></a>

Sets the value of Scheme_Optional and also sets Scheme_IsSet to true.

#### `public inline void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1acdff36a7be660c1ab34b6aea8c5571f2)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1acdff36a7be660c1ab34b6aea8c5571f2"></a>

Sets the value of Scheme_Optional and also sets Scheme_IsSet to true using move semantics.

#### `public inline void `[`ClearScheme`](#structFRHAPI__PlatformUserLinkRequest_1ab043f5d34c7672228756b226a350cfa3)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ab043f5d34c7672228756b226a350cfa3"></a>

Clears the value of Scheme_Optional and sets Scheme_IsSet to false.

#### `public inline bool `[`IsSchemeSet`](#structFRHAPI__PlatformUserLinkRequest_1a298a999553b6d760630def94f0b814b1)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a298a999553b6d760630def94f0b814b1"></a>

Checks whether Scheme_Optional has been set.

#### `public inline FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a330025f5551a1845b2d3a3c7dd9a9564)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a330025f5551a1845b2d3a3c7dd9a9564"></a>

Gets the value of Credentials_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1ae36854f07cba8a3c16315eba9bad8fba)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1ae36854f07cba8a3c16315eba9bad8fba"></a>

Gets the value of Credentials_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a22700989afee40e26a9092a332f4bd65)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a22700989afee40e26a9092a332f4bd65"></a>

Gets the value of Credentials_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aad0a61001cc1f52af2e0f8d623cfd19f)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1aad0a61001cc1f52af2e0f8d623cfd19f"></a>

Fills OutValue with the value of Credentials_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a24d90eba261eb9e241fd98837dff52a2)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a24d90eba261eb9e241fd98837dff52a2"></a>

Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a877a8f3df811250e2d269b2c26f7be50)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a877a8f3df811250e2d269b2c26f7be50"></a>

Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aed1e37484a51115ca54d3f86da95c5ca)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1aed1e37484a51115ca54d3f86da95c5ca"></a>

Sets the value of Credentials_Optional and also sets Credentials_IsSet to true.

#### `public inline void `[`SetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aa410019e39a72d31a23acb15c78b4b07)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1aa410019e39a72d31a23acb15c78b4b07"></a>

Sets the value of Credentials_Optional and also sets Credentials_IsSet to true using move semantics.

#### `public inline void `[`ClearCredentials`](#structFRHAPI__PlatformUserLinkRequest_1ad7fa27e74be09877d61d42d182d3fd51)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ad7fa27e74be09877d61d42d182d3fd51"></a>

Clears the value of Credentials_Optional and sets Credentials_IsSet to false.

#### `public inline bool `[`IsCredentialsSet`](#structFRHAPI__PlatformUserLinkRequest_1acfb00fad5e4a6c65565a3a08dfc7cf32)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1acfb00fad5e4a6c65565a3a08dfc7cf32"></a>

Checks whether Credentials_Optional has been set.

