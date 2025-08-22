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
`public inline FORCEINLINE FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ab82b872f38f6ccbaae12d989fb390b6f)`()` | Gets the value of LeaderPersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1aa711704494fe755a7f11d2367b8f7c88)`() const` | Gets the value of LeaderPersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a001d9759c1f5c79e8c87adfd2c14faf4)`(const FGuid & DefaultValue) const` | Gets the value of LeaderPersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a0b771999f38805d7165f5e429ada5248)`(FGuid & OutValue) const` | Fills OutValue with the value of LeaderPersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a4e5ea45aa485db628011c1f898fc2d46)`()` | Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a2e5e0603191290234477f7dfa4151bcc)`() const` | Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a2d2b36085d6aabe0d51287810d149b18)`(const FGuid & NewValue)` | Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true.
`public inline FORCEINLINE void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a53bf2e4eb8e309491843a7073b238c2d)`(FGuid && NewValue)` | Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true using move semantics.
`public inline void `[`ClearLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ab13deb4a9e3a159ff8e0e70143bd404d)`()` | Clears the value of LeaderPersonId_Optional and sets LeaderPersonId_IsSet to false.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a1fa8ba1b830b4310336e3977c947016a)`()` | Gets the value of LeaderPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a86a630c9b27a85993ed306558c1aa600)`() const` | Gets the value of LeaderPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1ae5772a8ecc6f8af4a3dacc5c0803cecf)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of LeaderPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a08554e5f0c23cf2a4cb1e4cc3cb579a6)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of LeaderPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a13c6b8006e16b7a5642b732c5d062c9e)`()` | Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a6c502c9abc3c8599b321284ff5e69426)`() const` | Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1ae2b4dd1bc0532fd4405f39dc7a7c6447)`(const ERHAPI_Platform & NewValue)` | Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true.
`public inline FORCEINLINE void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1af94c5bcff11123ed974b79fecace1ef9)`(ERHAPI_Platform && NewValue)` | Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true using move semantics.
`public inline void `[`ClearLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aa1d30c34349741d5f3ce9dae808c841c)`()` | Clears the value of LeaderPlatform_Optional and sets LeaderPlatform_IsSet to false.
`public inline FORCEINLINE FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1aa26a213789b948a033fd3723ead12f99)`()` | Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a501d14a80e1d1bf10669ae3bbf79c7a2)`() const` | Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a4db568d8bbe7769d283ec40e8759dfee)`(const FString & DefaultValue) const` | Gets the value of LeaderPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a085aa907273279286942f27afe127697)`(FString & OutValue) const` | Fills OutValue with the value of LeaderPlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ae2061e1304b41204f0a60e2a191ecfd9)`()` | Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a49209bb72cfda0898647114ae44e2991)`() const` | Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a9925cf2a0aa6122c3c7fa65c345b1134)`(const FString & NewValue)` | Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a73990887101464b9cb3537cf0c56e426)`(FString && NewValue)` | Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a58346c0dfc9303e74c49261abada7aa0)`()` | Clears the value of LeaderPlatformUserId_Optional and sets LeaderPlatformUserId_IsSet to false.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a5bcb34866b03915bc6edc0e65e1d0796)`()` | Gets the value of FollowerPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1accf87b95dfd2d9d8d57f26477b538eaa)`() const` | Gets the value of FollowerPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a038e7139d596d4b23836417563079e9a)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of FollowerPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1ae0159147a285a59a1af4301d806ffd5a)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of FollowerPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ab213d9c3d1d0015e6bc386e9a9855877)`()` | Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ad95699de0899c9c1ce93dd2191ee45e3)`() const` | Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aedab5afe0387932b0693d127b06a692f)`(const ERHAPI_Platform & NewValue)` | Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true.
`public inline FORCEINLINE void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a7d7227276221c409ed663f75f6e881b8)`(ERHAPI_Platform && NewValue)` | Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true using move semantics.
`public inline void `[`ClearFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aafe929bfa9466221163555aba3174885)`()` | Clears the value of FollowerPlatform_Optional and sets FollowerPlatform_IsSet to false.
`public inline FORCEINLINE FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a05331739af3721742460a6c210222058)`()` | Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a08e8f4e16af5b38dc67164957bfd6150)`() const` | Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a1b747a30f119b766840376eaef3a374e)`(const FString & DefaultValue) const` | Gets the value of FollowerPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a547d9f73ffc43bd5368acccb8136ad0e)`(FString & OutValue) const` | Fills OutValue with the value of FollowerPlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ac14ceb4f282955734d6a0c626824c53b)`()` | Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a06854fdd0fc330e0a23716699db7a82b)`() const` | Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a3431cb6b79fb75b5dae4a59e48d68b63)`(const FString & NewValue)` | Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ad16bfdb15e00a2d7f3b756358f8d6885)`(FString && NewValue)` | Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a5ac0bd5733f82d5d6089dad8ed3fcc7f)`()` | Clears the value of FollowerPlatformUserId_Optional and sets FollowerPlatformUserId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1ab2f740dd540104958cae848d61089379)`()` | Gets the value of Scheme_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a44434c741705db3be18216fbc35dacac)`() const` | Gets the value of Scheme_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a7bd51cc5cd5998d253035a889cccd589)`(const FString & DefaultValue) const` | Gets the value of Scheme_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1ab3a747efa36b57f5fb8b6c0e7cd0481c)`(FString & OutValue) const` | Fills OutValue with the value of Scheme_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a5fd1829f91ccb079bc60408df23a5c7b)`()` | Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a023cfca9bec6870f22778e01641141e7)`() const` | Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a624a142134011f0eb348a4ba96f6add5)`(const FString & NewValue)` | Sets the value of Scheme_Optional and also sets Scheme_IsSet to true.
`public inline FORCEINLINE void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a0034eebf8e84bea42df41d575b4d1ea9)`(FString && NewValue)` | Sets the value of Scheme_Optional and also sets Scheme_IsSet to true using move semantics.
`public inline void `[`ClearScheme`](#structFRHAPI__PlatformUserLinkRequest_1ab043f5d34c7672228756b226a350cfa3)`()` | Clears the value of Scheme_Optional and sets Scheme_IsSet to false.
`public inline FORCEINLINE FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1ad81eb225292db85328e3dd957f89a333)`()` | Gets the value of Credentials_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a7c72fa6ff4b2d1836ef0398d14622073)`() const` | Gets the value of Credentials_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aa95bbc95b1d620c6a2848ee69a16a63e)`(const FString & DefaultValue) const` | Gets the value of Credentials_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1abb7b8453a93047de147418b3025c4b7d)`(FString & OutValue) const` | Fills OutValue with the value of Credentials_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1aab9ad0619597fa2ba7d9bdb59826e575)`()` | Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a02bce5c6250ac64da603525c46631e58)`() const` | Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a54f511a46706376cb1f068c95a595444)`(const FString & NewValue)` | Sets the value of Credentials_Optional and also sets Credentials_IsSet to true.
`public inline FORCEINLINE void `[`SetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1ad78b3b76db6615c02c6ccaeb48ea8531)`(FString && NewValue)` | Sets the value of Credentials_Optional and also sets Credentials_IsSet to true using move semantics.
`public inline void `[`ClearCredentials`](#structFRHAPI__PlatformUserLinkRequest_1ad7fa27e74be09877d61d42d182d3fd51)`()` | Clears the value of Credentials_Optional and sets Credentials_IsSet to false.

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

#### `public inline FORCEINLINE FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ab82b872f38f6ccbaae12d989fb390b6f)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ab82b872f38f6ccbaae12d989fb390b6f"></a>

Gets the value of LeaderPersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1aa711704494fe755a7f11d2367b8f7c88)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1aa711704494fe755a7f11d2367b8f7c88"></a>

Gets the value of LeaderPersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a001d9759c1f5c79e8c87adfd2c14faf4)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a001d9759c1f5c79e8c87adfd2c14faf4"></a>

Gets the value of LeaderPersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a0b771999f38805d7165f5e429ada5248)`(FGuid & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a0b771999f38805d7165f5e429ada5248"></a>

Fills OutValue with the value of LeaderPersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a4e5ea45aa485db628011c1f898fc2d46)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a4e5ea45aa485db628011c1f898fc2d46"></a>

Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetLeaderPersonIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a2e5e0603191290234477f7dfa4151bcc)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a2e5e0603191290234477f7dfa4151bcc"></a>

Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a2d2b36085d6aabe0d51287810d149b18)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a2d2b36085d6aabe0d51287810d149b18"></a>

Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1a53bf2e4eb8e309491843a7073b238c2d)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a53bf2e4eb8e309491843a7073b238c2d"></a>

Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearLeaderPersonId`](#structFRHAPI__PlatformUserLinkRequest_1ab13deb4a9e3a159ff8e0e70143bd404d)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ab13deb4a9e3a159ff8e0e70143bd404d"></a>

Clears the value of LeaderPersonId_Optional and sets LeaderPersonId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a1fa8ba1b830b4310336e3977c947016a)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a1fa8ba1b830b4310336e3977c947016a"></a>

Gets the value of LeaderPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a86a630c9b27a85993ed306558c1aa600)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a86a630c9b27a85993ed306558c1aa600"></a>

Gets the value of LeaderPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1ae5772a8ecc6f8af4a3dacc5c0803cecf)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1ae5772a8ecc6f8af4a3dacc5c0803cecf"></a>

Gets the value of LeaderPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a08554e5f0c23cf2a4cb1e4cc3cb579a6)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a08554e5f0c23cf2a4cb1e4cc3cb579a6"></a>

Fills OutValue with the value of LeaderPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a13c6b8006e16b7a5642b732c5d062c9e)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a13c6b8006e16b7a5642b732c5d062c9e"></a>

Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetLeaderPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a6c502c9abc3c8599b321284ff5e69426)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a6c502c9abc3c8599b321284ff5e69426"></a>

Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1ae2b4dd1bc0532fd4405f39dc7a7c6447)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1ae2b4dd1bc0532fd4405f39dc7a7c6447"></a>

Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1af94c5bcff11123ed974b79fecace1ef9)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1af94c5bcff11123ed974b79fecace1ef9"></a>

Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearLeaderPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aa1d30c34349741d5f3ce9dae808c841c)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1aa1d30c34349741d5f3ce9dae808c841c"></a>

Clears the value of LeaderPlatform_Optional and sets LeaderPlatform_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1aa26a213789b948a033fd3723ead12f99)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1aa26a213789b948a033fd3723ead12f99"></a>

Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a501d14a80e1d1bf10669ae3bbf79c7a2)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a501d14a80e1d1bf10669ae3bbf79c7a2"></a>

Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a4db568d8bbe7769d283ec40e8759dfee)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a4db568d8bbe7769d283ec40e8759dfee"></a>

Gets the value of LeaderPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a085aa907273279286942f27afe127697)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a085aa907273279286942f27afe127697"></a>

Fills OutValue with the value of LeaderPlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ae2061e1304b41204f0a60e2a191ecfd9)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ae2061e1304b41204f0a60e2a191ecfd9"></a>

Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetLeaderPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a49209bb72cfda0898647114ae44e2991)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a49209bb72cfda0898647114ae44e2991"></a>

Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a9925cf2a0aa6122c3c7fa65c345b1134)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a9925cf2a0aa6122c3c7fa65c345b1134"></a>

Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a73990887101464b9cb3537cf0c56e426)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a73990887101464b9cb3537cf0c56e426"></a>

Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearLeaderPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a58346c0dfc9303e74c49261abada7aa0)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a58346c0dfc9303e74c49261abada7aa0"></a>

Clears the value of LeaderPlatformUserId_Optional and sets LeaderPlatformUserId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a5bcb34866b03915bc6edc0e65e1d0796)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a5bcb34866b03915bc6edc0e65e1d0796"></a>

Gets the value of FollowerPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1accf87b95dfd2d9d8d57f26477b538eaa)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1accf87b95dfd2d9d8d57f26477b538eaa"></a>

Gets the value of FollowerPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a038e7139d596d4b23836417563079e9a)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a038e7139d596d4b23836417563079e9a"></a>

Gets the value of FollowerPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1ae0159147a285a59a1af4301d806ffd5a)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1ae0159147a285a59a1af4301d806ffd5a"></a>

Fills OutValue with the value of FollowerPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ab213d9c3d1d0015e6bc386e9a9855877)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ab213d9c3d1d0015e6bc386e9a9855877"></a>

Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetFollowerPlatformOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ad95699de0899c9c1ce93dd2191ee45e3)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1ad95699de0899c9c1ce93dd2191ee45e3"></a>

Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aedab5afe0387932b0693d127b06a692f)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1aedab5afe0387932b0693d127b06a692f"></a>

Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1a7d7227276221c409ed663f75f6e881b8)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a7d7227276221c409ed663f75f6e881b8"></a>

Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearFollowerPlatform`](#structFRHAPI__PlatformUserLinkRequest_1aafe929bfa9466221163555aba3174885)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1aafe929bfa9466221163555aba3174885"></a>

Clears the value of FollowerPlatform_Optional and sets FollowerPlatform_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a05331739af3721742460a6c210222058)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a05331739af3721742460a6c210222058"></a>

Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a08e8f4e16af5b38dc67164957bfd6150)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a08e8f4e16af5b38dc67164957bfd6150"></a>

Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a1b747a30f119b766840376eaef3a374e)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a1b747a30f119b766840376eaef3a374e"></a>

Gets the value of FollowerPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a547d9f73ffc43bd5368acccb8136ad0e)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a547d9f73ffc43bd5368acccb8136ad0e"></a>

Fills OutValue with the value of FollowerPlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1ac14ceb4f282955734d6a0c626824c53b)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ac14ceb4f282955734d6a0c626824c53b"></a>

Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetFollowerPlatformUserIdOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a06854fdd0fc330e0a23716699db7a82b)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a06854fdd0fc330e0a23716699db7a82b"></a>

Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a3431cb6b79fb75b5dae4a59e48d68b63)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a3431cb6b79fb75b5dae4a59e48d68b63"></a>

Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1ad16bfdb15e00a2d7f3b756358f8d6885)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1ad16bfdb15e00a2d7f3b756358f8d6885"></a>

Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearFollowerPlatformUserId`](#structFRHAPI__PlatformUserLinkRequest_1a5ac0bd5733f82d5d6089dad8ed3fcc7f)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a5ac0bd5733f82d5d6089dad8ed3fcc7f"></a>

Clears the value of FollowerPlatformUserId_Optional and sets FollowerPlatformUserId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1ab2f740dd540104958cae848d61089379)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ab2f740dd540104958cae848d61089379"></a>

Gets the value of Scheme_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a44434c741705db3be18216fbc35dacac)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a44434c741705db3be18216fbc35dacac"></a>

Gets the value of Scheme_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a7bd51cc5cd5998d253035a889cccd589)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1a7bd51cc5cd5998d253035a889cccd589"></a>

Gets the value of Scheme_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetScheme`](#structFRHAPI__PlatformUserLinkRequest_1ab3a747efa36b57f5fb8b6c0e7cd0481c)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1ab3a747efa36b57f5fb8b6c0e7cd0481c"></a>

Fills OutValue with the value of Scheme_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a5fd1829f91ccb079bc60408df23a5c7b)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1a5fd1829f91ccb079bc60408df23a5c7b"></a>

Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetSchemeOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a023cfca9bec6870f22778e01641141e7)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a023cfca9bec6870f22778e01641141e7"></a>

Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a624a142134011f0eb348a4ba96f6add5)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a624a142134011f0eb348a4ba96f6add5"></a>

Sets the value of Scheme_Optional and also sets Scheme_IsSet to true.

#### `public inline FORCEINLINE void `[`SetScheme`](#structFRHAPI__PlatformUserLinkRequest_1a0034eebf8e84bea42df41d575b4d1ea9)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a0034eebf8e84bea42df41d575b4d1ea9"></a>

Sets the value of Scheme_Optional and also sets Scheme_IsSet to true using move semantics.

#### `public inline void `[`ClearScheme`](#structFRHAPI__PlatformUserLinkRequest_1ab043f5d34c7672228756b226a350cfa3)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ab043f5d34c7672228756b226a350cfa3"></a>

Clears the value of Scheme_Optional and sets Scheme_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1ad81eb225292db85328e3dd957f89a333)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ad81eb225292db85328e3dd957f89a333"></a>

Gets the value of Credentials_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a7c72fa6ff4b2d1836ef0398d14622073)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a7c72fa6ff4b2d1836ef0398d14622073"></a>

Gets the value of Credentials_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1aa95bbc95b1d620c6a2848ee69a16a63e)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1aa95bbc95b1d620c6a2848ee69a16a63e"></a>

Gets the value of Credentials_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1abb7b8453a93047de147418b3025c4b7d)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserLinkRequest_1abb7b8453a93047de147418b3025c4b7d"></a>

Fills OutValue with the value of Credentials_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1aab9ad0619597fa2ba7d9bdb59826e575)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1aab9ad0619597fa2ba7d9bdb59826e575"></a>

Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCredentialsOrNull`](#structFRHAPI__PlatformUserLinkRequest_1a02bce5c6250ac64da603525c46631e58)`() const` <a id="structFRHAPI__PlatformUserLinkRequest_1a02bce5c6250ac64da603525c46631e58"></a>

Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1a54f511a46706376cb1f068c95a595444)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1a54f511a46706376cb1f068c95a595444"></a>

Sets the value of Credentials_Optional and also sets Credentials_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCredentials`](#structFRHAPI__PlatformUserLinkRequest_1ad78b3b76db6615c02c6ccaeb48ea8531)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserLinkRequest_1ad78b3b76db6615c02c6ccaeb48ea8531"></a>

Sets the value of Credentials_Optional and also sets Credentials_IsSet to true using move semantics.

#### `public inline void `[`ClearCredentials`](#structFRHAPI__PlatformUserLinkRequest_1ad7fa27e74be09877d61d42d182d3fd51)`()` <a id="structFRHAPI__PlatformUserLinkRequest_1ad7fa27e74be09877d61d42d182d3fd51"></a>

Clears the value of Credentials_Optional and sets Credentials_IsSet to false.

