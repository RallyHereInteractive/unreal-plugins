# group `RHAPI_RankConfigV3` <a id="group__RHAPI__RankConfigV3"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankConfigV3`](#structFRHAPI__RankConfigV3) | Configuration about a specific rank type.

## struct `FRHAPI_RankConfigV3` <a id="structFRHAPI__RankConfigV3"></a>

```
struct FRHAPI_RankConfigV3
  : public FRHAPI_Model
```

Configuration about a specific rank type.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Name_Optional`](#structFRHAPI__RankConfigV3_1a6820c7fb78f47bb5bf8ae45d39643b06) | Human readable name for this rank.
`public bool `[`Name_IsSet`](#structFRHAPI__RankConfigV3_1af92730d1af481bc56fb629521c33ff5f) | true if Name_Optional has been set to a value
`public FString `[`Description_Optional`](#structFRHAPI__RankConfigV3_1a80403be1461339f2c2035b45a12d625a) | Description of this rank.
`public bool `[`Description_IsSet`](#structFRHAPI__RankConfigV3_1a741c97ae5768deca44a73f2249f06963) | true if Description_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RankConfigV3_1a8fe716db96d835b63b59ed3ca574b27a) | Custom data about this rank.
`public bool `[`CustomData_IsSet`](#structFRHAPI__RankConfigV3_1ad1f1affa4a9c132c39471043e0edaee4) | true if CustomData_Optional has been set to a value
`public float `[`MaxMu`](#structFRHAPI__RankConfigV3_1ab39a3b0636fb89e7dc904f08b40826bb) | The maximum mu value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.
`public float `[`MinMu`](#structFRHAPI__RankConfigV3_1a40fff11b7e169f4a8c290a99a7e852d7) | The minimum mu value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.
`public float `[`MinSigma`](#structFRHAPI__RankConfigV3_1ac24948615c0a7bc3205c7d81dfe45cf2) | The minimum sigma allowed. Any attempts to update sigma to be lower than this get clamped to the minimum.
`public float `[`Beta_Optional`](#structFRHAPI__RankConfigV3_1a93bcf1ff03c0eaac0a32ddb3e94326ae) | The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default sigma.
`public bool `[`Beta_IsSet`](#structFRHAPI__RankConfigV3_1af4bdc9f9516b7c8566b675c8d5653257) | true if Beta_Optional has been set to a value
`public float `[`DefaultMu`](#structFRHAPI__RankConfigV3_1ab4a2273be95667842eea6608838866fc) | The default mu value for this rank id. Will be used when players do not have any rank history.
`public float `[`DefaultSigma`](#structFRHAPI__RankConfigV3_1a03a5f96648f55217d425ba494bab2b6f) | The default sigma for this rank id. Will be used when players do not have any rank history.
`public float `[`DrawProbability_Optional`](#structFRHAPI__RankConfigV3_1a24338a8f07d496213e35fb6e454f9004) | The percent probability of a draw occuring in the game. Must be in [0, 1)
`public bool `[`DrawProbability_IsSet`](#structFRHAPI__RankConfigV3_1af9c5128079cb10e2661a4c68f86ea10c) | true if DrawProbability_Optional has been set to a value
`public float `[`Tau_Optional`](#structFRHAPI__RankConfigV3_1aefd17a64ac7443e571088de4d3306378) | Factor that determines how quickly a player's sigma is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_sigma * .01)
`public bool `[`Tau_IsSet`](#structFRHAPI__RankConfigV3_1ac117cbd11c23707ec49ee99b7ef0808a) | true if Tau_Optional has been set to a value
`public FString `[`RankId`](#structFRHAPI__RankConfigV3_1a88c7b8dd55eb3aee4ea7697c3e904345) | ID for this rank type.
`public virtual bool `[`FromJson`](#structFRHAPI__RankConfigV3_1ae7f09019f2af28bb98d8c792d4283f19)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankConfigV3_1ab3bb1455b09a17ad0b79639d4efdeaf4)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetName`](#structFRHAPI__RankConfigV3_1ab0a827ff8774f093337e74f2c8d6bb88)`()` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1a7fcf76cab5045ed5409bf06b696ed32f)`() const` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1ac0fcb122f6cba272c3adfd927ffdfae5)`(const FString & DefaultValue) const` | Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetName`](#structFRHAPI__RankConfigV3_1a31fb0b3970f1c1d0ae3d0686e8a7b44e)`(FString & OutValue) const` | Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1ae051660e2ea2fd98fc11aa1084a01adf)`()` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1ac7a8dc3d0eae3051775057abe26ab029)`() const` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetName`](#structFRHAPI__RankConfigV3_1ae7e2b275fa92a5fdbe03fef02cea9097)`(const FString & NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true.
`public inline void `[`SetName`](#structFRHAPI__RankConfigV3_1a6e8c789e6b8cc5524811073ca463e22d)`(FString && NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.
`public inline void `[`ClearName`](#structFRHAPI__RankConfigV3_1af482314ef4046a8c9b71dd08fe95aff6)`()` | Clears the value of Name_Optional and sets Name_IsSet to false.
`public inline FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1abe1a9e0db5f9b8850e698a5675f669f6)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1a91944a18dc3f55dce973208bfe832287)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1a00071995b03eacd5f64bf84a27c48d51)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDescription`](#structFRHAPI__RankConfigV3_1af03cdb08fd1e577f0b26352152877d4e)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1a478bb271e185b376710d02f1ddc6ca55)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1a9a43c7ec7d66f2c50c06541be9cc093f)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDescription`](#structFRHAPI__RankConfigV3_1a603e86d5560015b5c6949589c152324c)`(const FString & NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline void `[`SetDescription`](#structFRHAPI__RankConfigV3_1a603d749ee10b49ba80f9293267b63f39)`(FString && NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.
`public inline void `[`ClearDescription`](#structFRHAPI__RankConfigV3_1ade3a6bc2d3803668adf87ddd29a4feef)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a6e83ef875d512d1e48fd59370a9cc2ce)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1ad9569380eda401ff0cd692f817977ef2)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1acbef2bd9aa42fd955101c8bc86b1ab1f)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a8c54fce8ba44f5e75ac6cfdfdf07fda9)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1a094e88cb3f5f5215490e9a910de2ef89)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1a4f6463a479cbf14fd6953d3a775c37c9)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1ac14f3fd35eeb0c394c0914c0be197f8d)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1a10857f051ea2f1a6e31ff8c17a35e177)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__RankConfigV3_1a0870724f4b3103eca4c45110dfb9f2d4)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1a0cc4a5ba5ebcaf9ac9df788fa4bd0b04)`()` | Gets the value of MaxMu.
`public inline const float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1a2b91c4dc2e176faaa5222c1173648bdb)`() const` | Gets the value of MaxMu.
`public inline void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1a1c1307ea081f83bb65fb13b554cb2e3d)`(const float & NewValue)` | Sets the value of MaxMu.
`public inline void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1abd117a93df6d56de214db9237a96e4a9)`(float && NewValue)` | Sets the value of MaxMu using move semantics.
`public inline float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1a52d0329c65d445e8158be62f72e79079)`()` | Gets the value of MinMu.
`public inline const float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1acb81b17cd6aaf9f0ba7aa65b68a03b55)`() const` | Gets the value of MinMu.
`public inline void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1a02f3462d38c767de1316306af7940985)`(const float & NewValue)` | Sets the value of MinMu.
`public inline void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1aba16125f56ab7f5f9f6906549cc6c93f)`(float && NewValue)` | Sets the value of MinMu using move semantics.
`public inline float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1af5b45a9e08ac06ef72ad9717331800d0)`()` | Gets the value of MinSigma.
`public inline const float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1a7be514c28aa6d8e8c60a67ed2c75376e)`() const` | Gets the value of MinSigma.
`public inline void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1ad427e1cc583efa365caa868f3a028403)`(const float & NewValue)` | Sets the value of MinSigma.
`public inline void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1a71284be347513e6136038c1472d1ecad)`(float && NewValue)` | Sets the value of MinSigma using move semantics.
`public inline float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1ad238257af282a8ca6adb82006dc29687)`()` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1a355d212c7408b9dd7e591720f2159eca)`() const` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1aaafca37e00a13ed8eebeed4b81da5c5e)`(const float & DefaultValue) const` | Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBeta`](#structFRHAPI__RankConfigV3_1aaca19bfb3bcb27534a5c86d667869738)`(float & OutValue) const` | Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1ada5e73e4ae0facc200535871f5ea83b6)`()` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1a152248d3ac9402db7f84f785de545b4f)`() const` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBeta`](#structFRHAPI__RankConfigV3_1ae2313f56a98bb383a974ff827c233d8b)`(const float & NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true.
`public inline void `[`SetBeta`](#structFRHAPI__RankConfigV3_1afe479cc01f401214dd4013952e576607)`(float && NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.
`public inline void `[`ClearBeta`](#structFRHAPI__RankConfigV3_1a4672cd7c59abd9ba02d1c8da6d8560a1)`()` | Clears the value of Beta_Optional and sets Beta_IsSet to false.
`public inline float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1a18143fb9b3652719d57200a2d53bd6fe)`()` | Gets the value of DefaultMu.
`public inline const float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1ab92a97fe2effc985a7bc330ec6110879)`() const` | Gets the value of DefaultMu.
`public inline void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a107e50a17221c144a5e049ad359b5233)`(const float & NewValue)` | Sets the value of DefaultMu.
`public inline void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a0af584e31fa4aea9fa482ee4c7ec2c2a)`(float && NewValue)` | Sets the value of DefaultMu using move semantics.
`public inline float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1ac0bdc94abc93b3a2287b31b07768777c)`()` | Gets the value of DefaultSigma.
`public inline const float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1ace70cd2cc2f28462d11ee5418e802cc1)`() const` | Gets the value of DefaultSigma.
`public inline void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1a79244549378e93fd12e2d384b5e5df0f)`(const float & NewValue)` | Sets the value of DefaultSigma.
`public inline void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1a3a761103caa22b531235fcc88edd8e97)`(float && NewValue)` | Sets the value of DefaultSigma using move semantics.
`public inline float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a7956a1aef67d7b73c5d75ed5093da21d)`()` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1ac32a81ff7a72bf6d2879ea5cdaf229eb)`() const` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1aab16de00f60edbe9efacdf05db4d3226)`(const float & DefaultValue) const` | Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1aef8094045eb311af2d8eb51953a542c3)`(float & OutValue) const` | Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1a798fe30a0faef9d6221641a66c3970e8)`()` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1a544378784ee697bb726c1470371452b7)`() const` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1a030aaa0de708f438a8b59807aee1d330)`(const float & NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.
`public inline void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1a460d627de58b5e781c9c7daccf7b4190)`(float && NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.
`public inline void `[`ClearDrawProbability`](#structFRHAPI__RankConfigV3_1ae2389061b46365999a4db689a240ffed)`()` | Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.
`public inline float & `[`GetTau`](#structFRHAPI__RankConfigV3_1acb49e21505f080d3fe58ed7320a46d80)`()` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a4fdc5bd0e5dae7677f59f794df760f18)`() const` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1add4dade0de746c4c0ebacfa24809af3c)`(const float & DefaultValue) const` | Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTau`](#structFRHAPI__RankConfigV3_1a63579d5b24210924bef83924e065ab1b)`(float & OutValue) const` | Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1ac2cec49784e2bafbf56cf70ad85e22a8)`()` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1a0ab698d042ef71e4a98429820a38ac2b)`() const` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTau`](#structFRHAPI__RankConfigV3_1a97075173b8f02eba04fa19e507a6e9eb)`(const float & NewValue)` | Sets the value of Tau_Optional and also sets Tau_IsSet to true.
`public inline void `[`SetTau`](#structFRHAPI__RankConfigV3_1a2ee2e8155662a9426e09e81cea30f046)`(float && NewValue)` | Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics.
`public inline void `[`ClearTau`](#structFRHAPI__RankConfigV3_1a8a5a0bee2d1ff5962c2e286ceb8169cc)`()` | Clears the value of Tau_Optional and sets Tau_IsSet to false.
`public inline FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1a00f960f5d31cf14b461c0d44f00cf9db)`()` | Gets the value of RankId.
`public inline const FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1a3545a5994d56ed4e9ac0d59ca73d1540)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__RankConfigV3_1a0d9727ddd4a4ac0c195ae9e1f7242b8f)`(const FString & NewValue)` | Sets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__RankConfigV3_1a797b50b3ffa592487776771204daed14)`(FString && NewValue)` | Sets the value of RankId using move semantics.

### Members

#### `public FString `[`Name_Optional`](#structFRHAPI__RankConfigV3_1a6820c7fb78f47bb5bf8ae45d39643b06) <a id="structFRHAPI__RankConfigV3_1a6820c7fb78f47bb5bf8ae45d39643b06"></a>

Human readable name for this rank.

#### `public bool `[`Name_IsSet`](#structFRHAPI__RankConfigV3_1af92730d1af481bc56fb629521c33ff5f) <a id="structFRHAPI__RankConfigV3_1af92730d1af481bc56fb629521c33ff5f"></a>

true if Name_Optional has been set to a value

#### `public FString `[`Description_Optional`](#structFRHAPI__RankConfigV3_1a80403be1461339f2c2035b45a12d625a) <a id="structFRHAPI__RankConfigV3_1a80403be1461339f2c2035b45a12d625a"></a>

Description of this rank.

#### `public bool `[`Description_IsSet`](#structFRHAPI__RankConfigV3_1a741c97ae5768deca44a73f2249f06963) <a id="structFRHAPI__RankConfigV3_1a741c97ae5768deca44a73f2249f06963"></a>

true if Description_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RankConfigV3_1a8fe716db96d835b63b59ed3ca574b27a) <a id="structFRHAPI__RankConfigV3_1a8fe716db96d835b63b59ed3ca574b27a"></a>

Custom data about this rank.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__RankConfigV3_1ad1f1affa4a9c132c39471043e0edaee4) <a id="structFRHAPI__RankConfigV3_1ad1f1affa4a9c132c39471043e0edaee4"></a>

true if CustomData_Optional has been set to a value

#### `public float `[`MaxMu`](#structFRHAPI__RankConfigV3_1ab39a3b0636fb89e7dc904f08b40826bb) <a id="structFRHAPI__RankConfigV3_1ab39a3b0636fb89e7dc904f08b40826bb"></a>

The maximum mu value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum.

#### `public float `[`MinMu`](#structFRHAPI__RankConfigV3_1a40fff11b7e169f4a8c290a99a7e852d7) <a id="structFRHAPI__RankConfigV3_1a40fff11b7e169f4a8c290a99a7e852d7"></a>

The minimum mu value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum.

#### `public float `[`MinSigma`](#structFRHAPI__RankConfigV3_1ac24948615c0a7bc3205c7d81dfe45cf2) <a id="structFRHAPI__RankConfigV3_1ac24948615c0a7bc3205c7d81dfe45cf2"></a>

The minimum sigma allowed. Any attempts to update sigma to be lower than this get clamped to the minimum.

#### `public float `[`Beta_Optional`](#structFRHAPI__RankConfigV3_1a93bcf1ff03c0eaac0a32ddb3e94326ae) <a id="structFRHAPI__RankConfigV3_1a93bcf1ff03c0eaac0a32ddb3e94326ae"></a>

The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default sigma.

#### `public bool `[`Beta_IsSet`](#structFRHAPI__RankConfigV3_1af4bdc9f9516b7c8566b675c8d5653257) <a id="structFRHAPI__RankConfigV3_1af4bdc9f9516b7c8566b675c8d5653257"></a>

true if Beta_Optional has been set to a value

#### `public float `[`DefaultMu`](#structFRHAPI__RankConfigV3_1ab4a2273be95667842eea6608838866fc) <a id="structFRHAPI__RankConfigV3_1ab4a2273be95667842eea6608838866fc"></a>

The default mu value for this rank id. Will be used when players do not have any rank history.

#### `public float `[`DefaultSigma`](#structFRHAPI__RankConfigV3_1a03a5f96648f55217d425ba494bab2b6f) <a id="structFRHAPI__RankConfigV3_1a03a5f96648f55217d425ba494bab2b6f"></a>

The default sigma for this rank id. Will be used when players do not have any rank history.

#### `public float `[`DrawProbability_Optional`](#structFRHAPI__RankConfigV3_1a24338a8f07d496213e35fb6e454f9004) <a id="structFRHAPI__RankConfigV3_1a24338a8f07d496213e35fb6e454f9004"></a>

The percent probability of a draw occuring in the game. Must be in [0, 1)

#### `public bool `[`DrawProbability_IsSet`](#structFRHAPI__RankConfigV3_1af9c5128079cb10e2661a4c68f86ea10c) <a id="structFRHAPI__RankConfigV3_1af9c5128079cb10e2661a4c68f86ea10c"></a>

true if DrawProbability_Optional has been set to a value

#### `public float `[`Tau_Optional`](#structFRHAPI__RankConfigV3_1aefd17a64ac7443e571088de4d3306378) <a id="structFRHAPI__RankConfigV3_1aefd17a64ac7443e571088de4d3306378"></a>

Factor that determines how quickly a player's sigma is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_sigma * .01)

#### `public bool `[`Tau_IsSet`](#structFRHAPI__RankConfigV3_1ac117cbd11c23707ec49ee99b7ef0808a) <a id="structFRHAPI__RankConfigV3_1ac117cbd11c23707ec49ee99b7ef0808a"></a>

true if Tau_Optional has been set to a value

#### `public FString `[`RankId`](#structFRHAPI__RankConfigV3_1a88c7b8dd55eb3aee4ea7697c3e904345) <a id="structFRHAPI__RankConfigV3_1a88c7b8dd55eb3aee4ea7697c3e904345"></a>

ID for this rank type.

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankConfigV3_1ae7f09019f2af28bb98d8c792d4283f19)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankConfigV3_1ae7f09019f2af28bb98d8c792d4283f19"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankConfigV3_1ab3bb1455b09a17ad0b79639d4efdeaf4)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankConfigV3_1ab3bb1455b09a17ad0b79639d4efdeaf4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetName`](#structFRHAPI__RankConfigV3_1ab0a827ff8774f093337e74f2c8d6bb88)`()` <a id="structFRHAPI__RankConfigV3_1ab0a827ff8774f093337e74f2c8d6bb88"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1a7fcf76cab5045ed5409bf06b696ed32f)`() const` <a id="structFRHAPI__RankConfigV3_1a7fcf76cab5045ed5409bf06b696ed32f"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1ac0fcb122f6cba272c3adfd927ffdfae5)`(const FString & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1ac0fcb122f6cba272c3adfd927ffdfae5"></a>

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetName`](#structFRHAPI__RankConfigV3_1a31fb0b3970f1c1d0ae3d0686e8a7b44e)`(FString & OutValue) const` <a id="structFRHAPI__RankConfigV3_1a31fb0b3970f1c1d0ae3d0686e8a7b44e"></a>

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1ae051660e2ea2fd98fc11aa1084a01adf)`()` <a id="structFRHAPI__RankConfigV3_1ae051660e2ea2fd98fc11aa1084a01adf"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1ac7a8dc3d0eae3051775057abe26ab029)`() const` <a id="structFRHAPI__RankConfigV3_1ac7a8dc3d0eae3051775057abe26ab029"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetName`](#structFRHAPI__RankConfigV3_1ae7e2b275fa92a5fdbe03fef02cea9097)`(const FString & NewValue)` <a id="structFRHAPI__RankConfigV3_1ae7e2b275fa92a5fdbe03fef02cea9097"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true.

#### `public inline void `[`SetName`](#structFRHAPI__RankConfigV3_1a6e8c789e6b8cc5524811073ca463e22d)`(FString && NewValue)` <a id="structFRHAPI__RankConfigV3_1a6e8c789e6b8cc5524811073ca463e22d"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.

#### `public inline void `[`ClearName`](#structFRHAPI__RankConfigV3_1af482314ef4046a8c9b71dd08fe95aff6)`()` <a id="structFRHAPI__RankConfigV3_1af482314ef4046a8c9b71dd08fe95aff6"></a>

Clears the value of Name_Optional and sets Name_IsSet to false.

#### `public inline FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1abe1a9e0db5f9b8850e698a5675f669f6)`()` <a id="structFRHAPI__RankConfigV3_1abe1a9e0db5f9b8850e698a5675f669f6"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1a91944a18dc3f55dce973208bfe832287)`() const` <a id="structFRHAPI__RankConfigV3_1a91944a18dc3f55dce973208bfe832287"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1a00071995b03eacd5f64bf84a27c48d51)`(const FString & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1a00071995b03eacd5f64bf84a27c48d51"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDescription`](#structFRHAPI__RankConfigV3_1af03cdb08fd1e577f0b26352152877d4e)`(FString & OutValue) const` <a id="structFRHAPI__RankConfigV3_1af03cdb08fd1e577f0b26352152877d4e"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1a478bb271e185b376710d02f1ddc6ca55)`()` <a id="structFRHAPI__RankConfigV3_1a478bb271e185b376710d02f1ddc6ca55"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1a9a43c7ec7d66f2c50c06541be9cc093f)`() const` <a id="structFRHAPI__RankConfigV3_1a9a43c7ec7d66f2c50c06541be9cc093f"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDescription`](#structFRHAPI__RankConfigV3_1a603e86d5560015b5c6949589c152324c)`(const FString & NewValue)` <a id="structFRHAPI__RankConfigV3_1a603e86d5560015b5c6949589c152324c"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

#### `public inline void `[`SetDescription`](#structFRHAPI__RankConfigV3_1a603d749ee10b49ba80f9293267b63f39)`(FString && NewValue)` <a id="structFRHAPI__RankConfigV3_1a603d749ee10b49ba80f9293267b63f39"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.

#### `public inline void `[`ClearDescription`](#structFRHAPI__RankConfigV3_1ade3a6bc2d3803668adf87ddd29a4feef)`()` <a id="structFRHAPI__RankConfigV3_1ade3a6bc2d3803668adf87ddd29a4feef"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a6e83ef875d512d1e48fd59370a9cc2ce)`()` <a id="structFRHAPI__RankConfigV3_1a6e83ef875d512d1e48fd59370a9cc2ce"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1ad9569380eda401ff0cd692f817977ef2)`() const` <a id="structFRHAPI__RankConfigV3_1ad9569380eda401ff0cd692f817977ef2"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1acbef2bd9aa42fd955101c8bc86b1ab1f)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1acbef2bd9aa42fd955101c8bc86b1ab1f"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a8c54fce8ba44f5e75ac6cfdfdf07fda9)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__RankConfigV3_1a8c54fce8ba44f5e75ac6cfdfdf07fda9"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1a094e88cb3f5f5215490e9a910de2ef89)`()` <a id="structFRHAPI__RankConfigV3_1a094e88cb3f5f5215490e9a910de2ef89"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1a4f6463a479cbf14fd6953d3a775c37c9)`() const` <a id="structFRHAPI__RankConfigV3_1a4f6463a479cbf14fd6953d3a775c37c9"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1ac14f3fd35eeb0c394c0914c0be197f8d)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__RankConfigV3_1ac14f3fd35eeb0c394c0914c0be197f8d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1a10857f051ea2f1a6e31ff8c17a35e177)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__RankConfigV3_1a10857f051ea2f1a6e31ff8c17a35e177"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__RankConfigV3_1a0870724f4b3103eca4c45110dfb9f2d4)`()` <a id="structFRHAPI__RankConfigV3_1a0870724f4b3103eca4c45110dfb9f2d4"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1a0cc4a5ba5ebcaf9ac9df788fa4bd0b04)`()` <a id="structFRHAPI__RankConfigV3_1a0cc4a5ba5ebcaf9ac9df788fa4bd0b04"></a>

Gets the value of MaxMu.

#### `public inline const float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1a2b91c4dc2e176faaa5222c1173648bdb)`() const` <a id="structFRHAPI__RankConfigV3_1a2b91c4dc2e176faaa5222c1173648bdb"></a>

Gets the value of MaxMu.

#### `public inline void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1a1c1307ea081f83bb65fb13b554cb2e3d)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a1c1307ea081f83bb65fb13b554cb2e3d"></a>

Sets the value of MaxMu.

#### `public inline void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1abd117a93df6d56de214db9237a96e4a9)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1abd117a93df6d56de214db9237a96e4a9"></a>

Sets the value of MaxMu using move semantics.

#### `public inline float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1a52d0329c65d445e8158be62f72e79079)`()` <a id="structFRHAPI__RankConfigV3_1a52d0329c65d445e8158be62f72e79079"></a>

Gets the value of MinMu.

#### `public inline const float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1acb81b17cd6aaf9f0ba7aa65b68a03b55)`() const` <a id="structFRHAPI__RankConfigV3_1acb81b17cd6aaf9f0ba7aa65b68a03b55"></a>

Gets the value of MinMu.

#### `public inline void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1a02f3462d38c767de1316306af7940985)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a02f3462d38c767de1316306af7940985"></a>

Sets the value of MinMu.

#### `public inline void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1aba16125f56ab7f5f9f6906549cc6c93f)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1aba16125f56ab7f5f9f6906549cc6c93f"></a>

Sets the value of MinMu using move semantics.

#### `public inline float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1af5b45a9e08ac06ef72ad9717331800d0)`()` <a id="structFRHAPI__RankConfigV3_1af5b45a9e08ac06ef72ad9717331800d0"></a>

Gets the value of MinSigma.

#### `public inline const float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1a7be514c28aa6d8e8c60a67ed2c75376e)`() const` <a id="structFRHAPI__RankConfigV3_1a7be514c28aa6d8e8c60a67ed2c75376e"></a>

Gets the value of MinSigma.

#### `public inline void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1ad427e1cc583efa365caa868f3a028403)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1ad427e1cc583efa365caa868f3a028403"></a>

Sets the value of MinSigma.

#### `public inline void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1a71284be347513e6136038c1472d1ecad)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a71284be347513e6136038c1472d1ecad"></a>

Sets the value of MinSigma using move semantics.

#### `public inline float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1ad238257af282a8ca6adb82006dc29687)`()` <a id="structFRHAPI__RankConfigV3_1ad238257af282a8ca6adb82006dc29687"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1a355d212c7408b9dd7e591720f2159eca)`() const` <a id="structFRHAPI__RankConfigV3_1a355d212c7408b9dd7e591720f2159eca"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1aaafca37e00a13ed8eebeed4b81da5c5e)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1aaafca37e00a13ed8eebeed4b81da5c5e"></a>

Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBeta`](#structFRHAPI__RankConfigV3_1aaca19bfb3bcb27534a5c86d667869738)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV3_1aaca19bfb3bcb27534a5c86d667869738"></a>

Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1ada5e73e4ae0facc200535871f5ea83b6)`()` <a id="structFRHAPI__RankConfigV3_1ada5e73e4ae0facc200535871f5ea83b6"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1a152248d3ac9402db7f84f785de545b4f)`() const` <a id="structFRHAPI__RankConfigV3_1a152248d3ac9402db7f84f785de545b4f"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBeta`](#structFRHAPI__RankConfigV3_1ae2313f56a98bb383a974ff827c233d8b)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1ae2313f56a98bb383a974ff827c233d8b"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true.

#### `public inline void `[`SetBeta`](#structFRHAPI__RankConfigV3_1afe479cc01f401214dd4013952e576607)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1afe479cc01f401214dd4013952e576607"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.

#### `public inline void `[`ClearBeta`](#structFRHAPI__RankConfigV3_1a4672cd7c59abd9ba02d1c8da6d8560a1)`()` <a id="structFRHAPI__RankConfigV3_1a4672cd7c59abd9ba02d1c8da6d8560a1"></a>

Clears the value of Beta_Optional and sets Beta_IsSet to false.

#### `public inline float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1a18143fb9b3652719d57200a2d53bd6fe)`()` <a id="structFRHAPI__RankConfigV3_1a18143fb9b3652719d57200a2d53bd6fe"></a>

Gets the value of DefaultMu.

#### `public inline const float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1ab92a97fe2effc985a7bc330ec6110879)`() const` <a id="structFRHAPI__RankConfigV3_1ab92a97fe2effc985a7bc330ec6110879"></a>

Gets the value of DefaultMu.

#### `public inline void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a107e50a17221c144a5e049ad359b5233)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a107e50a17221c144a5e049ad359b5233"></a>

Sets the value of DefaultMu.

#### `public inline void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a0af584e31fa4aea9fa482ee4c7ec2c2a)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a0af584e31fa4aea9fa482ee4c7ec2c2a"></a>

Sets the value of DefaultMu using move semantics.

#### `public inline float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1ac0bdc94abc93b3a2287b31b07768777c)`()` <a id="structFRHAPI__RankConfigV3_1ac0bdc94abc93b3a2287b31b07768777c"></a>

Gets the value of DefaultSigma.

#### `public inline const float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1ace70cd2cc2f28462d11ee5418e802cc1)`() const` <a id="structFRHAPI__RankConfigV3_1ace70cd2cc2f28462d11ee5418e802cc1"></a>

Gets the value of DefaultSigma.

#### `public inline void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1a79244549378e93fd12e2d384b5e5df0f)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a79244549378e93fd12e2d384b5e5df0f"></a>

Sets the value of DefaultSigma.

#### `public inline void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1a3a761103caa22b531235fcc88edd8e97)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a3a761103caa22b531235fcc88edd8e97"></a>

Sets the value of DefaultSigma using move semantics.

#### `public inline float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a7956a1aef67d7b73c5d75ed5093da21d)`()` <a id="structFRHAPI__RankConfigV3_1a7956a1aef67d7b73c5d75ed5093da21d"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1ac32a81ff7a72bf6d2879ea5cdaf229eb)`() const` <a id="structFRHAPI__RankConfigV3_1ac32a81ff7a72bf6d2879ea5cdaf229eb"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1aab16de00f60edbe9efacdf05db4d3226)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1aab16de00f60edbe9efacdf05db4d3226"></a>

Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1aef8094045eb311af2d8eb51953a542c3)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV3_1aef8094045eb311af2d8eb51953a542c3"></a>

Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1a798fe30a0faef9d6221641a66c3970e8)`()` <a id="structFRHAPI__RankConfigV3_1a798fe30a0faef9d6221641a66c3970e8"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1a544378784ee697bb726c1470371452b7)`() const` <a id="structFRHAPI__RankConfigV3_1a544378784ee697bb726c1470371452b7"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1a030aaa0de708f438a8b59807aee1d330)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a030aaa0de708f438a8b59807aee1d330"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.

#### `public inline void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1a460d627de58b5e781c9c7daccf7b4190)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a460d627de58b5e781c9c7daccf7b4190"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.

#### `public inline void `[`ClearDrawProbability`](#structFRHAPI__RankConfigV3_1ae2389061b46365999a4db689a240ffed)`()` <a id="structFRHAPI__RankConfigV3_1ae2389061b46365999a4db689a240ffed"></a>

Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.

#### `public inline float & `[`GetTau`](#structFRHAPI__RankConfigV3_1acb49e21505f080d3fe58ed7320a46d80)`()` <a id="structFRHAPI__RankConfigV3_1acb49e21505f080d3fe58ed7320a46d80"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a4fdc5bd0e5dae7677f59f794df760f18)`() const` <a id="structFRHAPI__RankConfigV3_1a4fdc5bd0e5dae7677f59f794df760f18"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1add4dade0de746c4c0ebacfa24809af3c)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1add4dade0de746c4c0ebacfa24809af3c"></a>

Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTau`](#structFRHAPI__RankConfigV3_1a63579d5b24210924bef83924e065ab1b)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV3_1a63579d5b24210924bef83924e065ab1b"></a>

Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1ac2cec49784e2bafbf56cf70ad85e22a8)`()` <a id="structFRHAPI__RankConfigV3_1ac2cec49784e2bafbf56cf70ad85e22a8"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1a0ab698d042ef71e4a98429820a38ac2b)`() const` <a id="structFRHAPI__RankConfigV3_1a0ab698d042ef71e4a98429820a38ac2b"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTau`](#structFRHAPI__RankConfigV3_1a97075173b8f02eba04fa19e507a6e9eb)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a97075173b8f02eba04fa19e507a6e9eb"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true.

#### `public inline void `[`SetTau`](#structFRHAPI__RankConfigV3_1a2ee2e8155662a9426e09e81cea30f046)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a2ee2e8155662a9426e09e81cea30f046"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics.

#### `public inline void `[`ClearTau`](#structFRHAPI__RankConfigV3_1a8a5a0bee2d1ff5962c2e286ceb8169cc)`()` <a id="structFRHAPI__RankConfigV3_1a8a5a0bee2d1ff5962c2e286ceb8169cc"></a>

Clears the value of Tau_Optional and sets Tau_IsSet to false.

#### `public inline FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1a00f960f5d31cf14b461c0d44f00cf9db)`()` <a id="structFRHAPI__RankConfigV3_1a00f960f5d31cf14b461c0d44f00cf9db"></a>

Gets the value of RankId.

#### `public inline const FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1a3545a5994d56ed4e9ac0d59ca73d1540)`() const` <a id="structFRHAPI__RankConfigV3_1a3545a5994d56ed4e9ac0d59ca73d1540"></a>

Gets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__RankConfigV3_1a0d9727ddd4a4ac0c195ae9e1f7242b8f)`(const FString & NewValue)` <a id="structFRHAPI__RankConfigV3_1a0d9727ddd4a4ac0c195ae9e1f7242b8f"></a>

Sets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__RankConfigV3_1a797b50b3ffa592487776771204daed14)`(FString && NewValue)` <a id="structFRHAPI__RankConfigV3_1a797b50b3ffa592487776771204daed14"></a>

Sets the value of RankId using move semantics.

