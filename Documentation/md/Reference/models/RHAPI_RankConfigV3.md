---
title: RHAPI_RankConfigV3
---

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
`public virtual bool `[`FromJson`](#structFRHAPI__RankConfigV3_1a705e8ab1469a66cc155d8389c29d1120)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankConfigV3_1a0e650d5f4f1081e022cf590789e2a72e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetName`](#structFRHAPI__RankConfigV3_1a65c02ef767a8416a06a84c4e139019d1)`()` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1aa51dfbdf1e702067778f208bbfd279cb)`() const` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1aae8786d3bc6ad6192323919139b0f3e5)`(const FString & DefaultValue) const` | Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetName`](#structFRHAPI__RankConfigV3_1a31fb0b3970f1c1d0ae3d0686e8a7b44e)`(FString & OutValue) const` | Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1ab18f3a0bd03e942bde02ddf6e46b8d27)`()` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1a19f4e710aa9f79a2a042ee0a621b2ee1)`() const` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetName`](#structFRHAPI__RankConfigV3_1ae7e2b275fa92a5fdbe03fef02cea9097)`(const FString & NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true.
`public inline void `[`SetName`](#structFRHAPI__RankConfigV3_1a6e8c789e6b8cc5524811073ca463e22d)`(FString && NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.
`public inline void `[`ClearName`](#structFRHAPI__RankConfigV3_1af482314ef4046a8c9b71dd08fe95aff6)`()` | Clears the value of Name_Optional and sets Name_IsSet to false.
`public inline bool `[`IsNameSet`](#structFRHAPI__RankConfigV3_1a1b3d1485095428114d754281079931aa)`() const` | Checks whether Name_Optional has been set.
`public inline FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1a6ab9f9602b66c5f8fd95f341bf4b77d6)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1afe726395f5ca6e8b65c8f8e034dd92e5)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1a7f6d94117a665e14f15a98ad82a5b6bb)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDescription`](#structFRHAPI__RankConfigV3_1af03cdb08fd1e577f0b26352152877d4e)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1a48b6211e57e8b9a77ebe1088a22f2a04)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1ac7ef817c593e82d3808fff387e59022f)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDescription`](#structFRHAPI__RankConfigV3_1a603e86d5560015b5c6949589c152324c)`(const FString & NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline void `[`SetDescription`](#structFRHAPI__RankConfigV3_1a603d749ee10b49ba80f9293267b63f39)`(FString && NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.
`public inline void `[`ClearDescription`](#structFRHAPI__RankConfigV3_1ade3a6bc2d3803668adf87ddd29a4feef)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline bool `[`IsDescriptionSet`](#structFRHAPI__RankConfigV3_1a5595e9502c5c13394a21fa7affb2f00e)`() const` | Checks whether Description_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a3d9478eb8101523ed25387a998436521)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a9a0b7749a0866080687adba5076c7555)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1afb72f916df2a8753a2ad244b1d9cdb12)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a8c54fce8ba44f5e75ac6cfdfdf07fda9)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1ae7630a2936e130529df27c9331ffa849)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1ac0eb51fd1f8b6dfed55783808cdbda63)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1ac14f3fd35eeb0c394c0914c0be197f8d)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1a10857f051ea2f1a6e31ff8c17a35e177)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__RankConfigV3_1a0870724f4b3103eca4c45110dfb9f2d4)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__RankConfigV3_1a64833686463497e83d2b4c32e691acc5)`() const` | Checks whether CustomData_Optional has been set.
`public inline float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1add6575d3dd3738b1e42effc83e2bc4f0)`()` | Gets the value of MaxMu.
`public inline const float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1a454e65380ae564265678bc33025ccc30)`() const` | Gets the value of MaxMu.
`public inline void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1a1c1307ea081f83bb65fb13b554cb2e3d)`(const float & NewValue)` | Sets the value of MaxMu.
`public inline void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1abd117a93df6d56de214db9237a96e4a9)`(float && NewValue)` | Sets the value of MaxMu using move semantics.
`public inline float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1a983863dc65ee3d6f7993e15a589ceb64)`()` | Gets the value of MinMu.
`public inline const float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1a43c88752c7d234f818859b44339c9597)`() const` | Gets the value of MinMu.
`public inline void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1a02f3462d38c767de1316306af7940985)`(const float & NewValue)` | Sets the value of MinMu.
`public inline void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1aba16125f56ab7f5f9f6906549cc6c93f)`(float && NewValue)` | Sets the value of MinMu using move semantics.
`public inline float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1aa3d7d4c20b1ffe7b8768aa64aa082306)`()` | Gets the value of MinSigma.
`public inline const float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1a0b1e017a284d908e060eef830238ba98)`() const` | Gets the value of MinSigma.
`public inline void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1ad427e1cc583efa365caa868f3a028403)`(const float & NewValue)` | Sets the value of MinSigma.
`public inline void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1a71284be347513e6136038c1472d1ecad)`(float && NewValue)` | Sets the value of MinSigma using move semantics.
`public inline float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1a06afbed2c7411fefc53f640076137f41)`()` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1adc042d0b2f9e14b6283b354903f94da0)`() const` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1ab0b6db5906d123c506f8c2ac2af4db11)`(const float & DefaultValue) const` | Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBeta`](#structFRHAPI__RankConfigV3_1aaca19bfb3bcb27534a5c86d667869738)`(float & OutValue) const` | Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1a4c9b59a21bda12b706d7b6f53cc5350c)`()` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1a10232fe80962a9a9cdec2adb935355c6)`() const` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBeta`](#structFRHAPI__RankConfigV3_1ae2313f56a98bb383a974ff827c233d8b)`(const float & NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true.
`public inline void `[`SetBeta`](#structFRHAPI__RankConfigV3_1afe479cc01f401214dd4013952e576607)`(float && NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.
`public inline void `[`ClearBeta`](#structFRHAPI__RankConfigV3_1a4672cd7c59abd9ba02d1c8da6d8560a1)`()` | Clears the value of Beta_Optional and sets Beta_IsSet to false.
`public inline bool `[`IsBetaSet`](#structFRHAPI__RankConfigV3_1a812b40b6441eb1867a0198f52f8f730f)`() const` | Checks whether Beta_Optional has been set.
`public inline float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1ac55f870d5df03fe937f3747d9722e47d)`()` | Gets the value of DefaultMu.
`public inline const float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1aa6ce70bb43d75bbc961ebc38bfc299a3)`() const` | Gets the value of DefaultMu.
`public inline void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a107e50a17221c144a5e049ad359b5233)`(const float & NewValue)` | Sets the value of DefaultMu.
`public inline void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a0af584e31fa4aea9fa482ee4c7ec2c2a)`(float && NewValue)` | Sets the value of DefaultMu using move semantics.
`public inline float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1a94029767177c0ee4bdc9e84da1478893)`()` | Gets the value of DefaultSigma.
`public inline const float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1ab7b95d89a4f6996076728bc02c2f4578)`() const` | Gets the value of DefaultSigma.
`public inline void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1a79244549378e93fd12e2d384b5e5df0f)`(const float & NewValue)` | Sets the value of DefaultSigma.
`public inline void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1a3a761103caa22b531235fcc88edd8e97)`(float && NewValue)` | Sets the value of DefaultSigma using move semantics.
`public inline float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a87b6f13ef3743c1e4d7423358b4f8ebc)`()` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1abf8c9712d4781d638ee590012a51fcba)`() const` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a5de64fe77b2b2fff128c61b414041465)`(const float & DefaultValue) const` | Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1aef8094045eb311af2d8eb51953a542c3)`(float & OutValue) const` | Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1a87c59557ccc35ae9bf1b60639903e9cb)`()` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1a5714acfc8012d91f6af01a2259fb4b2d)`() const` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1a030aaa0de708f438a8b59807aee1d330)`(const float & NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.
`public inline void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1a460d627de58b5e781c9c7daccf7b4190)`(float && NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.
`public inline void `[`ClearDrawProbability`](#structFRHAPI__RankConfigV3_1ae2389061b46365999a4db689a240ffed)`()` | Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.
`public inline bool `[`IsDrawProbabilitySet`](#structFRHAPI__RankConfigV3_1a10f2fc7326281bf998720a1d4774dbc5)`() const` | Checks whether DrawProbability_Optional has been set.
`public inline float & `[`GetTau`](#structFRHAPI__RankConfigV3_1ab50fc871a8e37359809d8b08df7469cf)`()` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a075cc2d60e14b3e0700ce496c526a2a2)`() const` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a51206b50380b04c256efe4ffe7e336a7)`(const float & DefaultValue) const` | Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTau`](#structFRHAPI__RankConfigV3_1a63579d5b24210924bef83924e065ab1b)`(float & OutValue) const` | Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1a1d574f7a2437e3983769193e4e81cfab)`()` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1a4c9f6ece2f3e17d94031e3ea48ae520f)`() const` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTau`](#structFRHAPI__RankConfigV3_1a97075173b8f02eba04fa19e507a6e9eb)`(const float & NewValue)` | Sets the value of Tau_Optional and also sets Tau_IsSet to true.
`public inline void `[`SetTau`](#structFRHAPI__RankConfigV3_1a2ee2e8155662a9426e09e81cea30f046)`(float && NewValue)` | Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics.
`public inline void `[`ClearTau`](#structFRHAPI__RankConfigV3_1a8a5a0bee2d1ff5962c2e286ceb8169cc)`()` | Clears the value of Tau_Optional and sets Tau_IsSet to false.
`public inline bool `[`IsTauSet`](#structFRHAPI__RankConfigV3_1aee8dac8ff7f24f55542b5b2e16a1cb9c)`() const` | Checks whether Tau_Optional has been set.
`public inline FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1acecf1aa74fa2c243e0663521c625a606)`()` | Gets the value of RankId.
`public inline const FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1a15d4c8c935140475ec55642f4bcf7c74)`() const` | Gets the value of RankId.
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

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankConfigV3_1a705e8ab1469a66cc155d8389c29d1120)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankConfigV3_1a705e8ab1469a66cc155d8389c29d1120"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankConfigV3_1a0e650d5f4f1081e022cf590789e2a72e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RankConfigV3_1a0e650d5f4f1081e022cf590789e2a72e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetName`](#structFRHAPI__RankConfigV3_1a65c02ef767a8416a06a84c4e139019d1)`()` <a id="structFRHAPI__RankConfigV3_1a65c02ef767a8416a06a84c4e139019d1"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1aa51dfbdf1e702067778f208bbfd279cb)`() const` <a id="structFRHAPI__RankConfigV3_1aa51dfbdf1e702067778f208bbfd279cb"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1aae8786d3bc6ad6192323919139b0f3e5)`(const FString & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1aae8786d3bc6ad6192323919139b0f3e5"></a>

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetName`](#structFRHAPI__RankConfigV3_1a31fb0b3970f1c1d0ae3d0686e8a7b44e)`(FString & OutValue) const` <a id="structFRHAPI__RankConfigV3_1a31fb0b3970f1c1d0ae3d0686e8a7b44e"></a>

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1ab18f3a0bd03e942bde02ddf6e46b8d27)`()` <a id="structFRHAPI__RankConfigV3_1ab18f3a0bd03e942bde02ddf6e46b8d27"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1a19f4e710aa9f79a2a042ee0a621b2ee1)`() const` <a id="structFRHAPI__RankConfigV3_1a19f4e710aa9f79a2a042ee0a621b2ee1"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetName`](#structFRHAPI__RankConfigV3_1ae7e2b275fa92a5fdbe03fef02cea9097)`(const FString & NewValue)` <a id="structFRHAPI__RankConfigV3_1ae7e2b275fa92a5fdbe03fef02cea9097"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true.

#### `public inline void `[`SetName`](#structFRHAPI__RankConfigV3_1a6e8c789e6b8cc5524811073ca463e22d)`(FString && NewValue)` <a id="structFRHAPI__RankConfigV3_1a6e8c789e6b8cc5524811073ca463e22d"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.

#### `public inline void `[`ClearName`](#structFRHAPI__RankConfigV3_1af482314ef4046a8c9b71dd08fe95aff6)`()` <a id="structFRHAPI__RankConfigV3_1af482314ef4046a8c9b71dd08fe95aff6"></a>

Clears the value of Name_Optional and sets Name_IsSet to false.

#### `public inline bool `[`IsNameSet`](#structFRHAPI__RankConfigV3_1a1b3d1485095428114d754281079931aa)`() const` <a id="structFRHAPI__RankConfigV3_1a1b3d1485095428114d754281079931aa"></a>

Checks whether Name_Optional has been set.

#### `public inline FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1a6ab9f9602b66c5f8fd95f341bf4b77d6)`()` <a id="structFRHAPI__RankConfigV3_1a6ab9f9602b66c5f8fd95f341bf4b77d6"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1afe726395f5ca6e8b65c8f8e034dd92e5)`() const` <a id="structFRHAPI__RankConfigV3_1afe726395f5ca6e8b65c8f8e034dd92e5"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1a7f6d94117a665e14f15a98ad82a5b6bb)`(const FString & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1a7f6d94117a665e14f15a98ad82a5b6bb"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDescription`](#structFRHAPI__RankConfigV3_1af03cdb08fd1e577f0b26352152877d4e)`(FString & OutValue) const` <a id="structFRHAPI__RankConfigV3_1af03cdb08fd1e577f0b26352152877d4e"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1a48b6211e57e8b9a77ebe1088a22f2a04)`()` <a id="structFRHAPI__RankConfigV3_1a48b6211e57e8b9a77ebe1088a22f2a04"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1ac7ef817c593e82d3808fff387e59022f)`() const` <a id="structFRHAPI__RankConfigV3_1ac7ef817c593e82d3808fff387e59022f"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDescription`](#structFRHAPI__RankConfigV3_1a603e86d5560015b5c6949589c152324c)`(const FString & NewValue)` <a id="structFRHAPI__RankConfigV3_1a603e86d5560015b5c6949589c152324c"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

#### `public inline void `[`SetDescription`](#structFRHAPI__RankConfigV3_1a603d749ee10b49ba80f9293267b63f39)`(FString && NewValue)` <a id="structFRHAPI__RankConfigV3_1a603d749ee10b49ba80f9293267b63f39"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.

#### `public inline void `[`ClearDescription`](#structFRHAPI__RankConfigV3_1ade3a6bc2d3803668adf87ddd29a4feef)`()` <a id="structFRHAPI__RankConfigV3_1ade3a6bc2d3803668adf87ddd29a4feef"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

#### `public inline bool `[`IsDescriptionSet`](#structFRHAPI__RankConfigV3_1a5595e9502c5c13394a21fa7affb2f00e)`() const` <a id="structFRHAPI__RankConfigV3_1a5595e9502c5c13394a21fa7affb2f00e"></a>

Checks whether Description_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a3d9478eb8101523ed25387a998436521)`()` <a id="structFRHAPI__RankConfigV3_1a3d9478eb8101523ed25387a998436521"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a9a0b7749a0866080687adba5076c7555)`() const` <a id="structFRHAPI__RankConfigV3_1a9a0b7749a0866080687adba5076c7555"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1afb72f916df2a8753a2ad244b1d9cdb12)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1afb72f916df2a8753a2ad244b1d9cdb12"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a8c54fce8ba44f5e75ac6cfdfdf07fda9)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__RankConfigV3_1a8c54fce8ba44f5e75ac6cfdfdf07fda9"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1ae7630a2936e130529df27c9331ffa849)`()` <a id="structFRHAPI__RankConfigV3_1ae7630a2936e130529df27c9331ffa849"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1ac0eb51fd1f8b6dfed55783808cdbda63)`() const` <a id="structFRHAPI__RankConfigV3_1ac0eb51fd1f8b6dfed55783808cdbda63"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1ac14f3fd35eeb0c394c0914c0be197f8d)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__RankConfigV3_1ac14f3fd35eeb0c394c0914c0be197f8d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1a10857f051ea2f1a6e31ff8c17a35e177)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__RankConfigV3_1a10857f051ea2f1a6e31ff8c17a35e177"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__RankConfigV3_1a0870724f4b3103eca4c45110dfb9f2d4)`()` <a id="structFRHAPI__RankConfigV3_1a0870724f4b3103eca4c45110dfb9f2d4"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__RankConfigV3_1a64833686463497e83d2b4c32e691acc5)`() const` <a id="structFRHAPI__RankConfigV3_1a64833686463497e83d2b4c32e691acc5"></a>

Checks whether CustomData_Optional has been set.

#### `public inline float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1add6575d3dd3738b1e42effc83e2bc4f0)`()` <a id="structFRHAPI__RankConfigV3_1add6575d3dd3738b1e42effc83e2bc4f0"></a>

Gets the value of MaxMu.

#### `public inline const float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1a454e65380ae564265678bc33025ccc30)`() const` <a id="structFRHAPI__RankConfigV3_1a454e65380ae564265678bc33025ccc30"></a>

Gets the value of MaxMu.

#### `public inline void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1a1c1307ea081f83bb65fb13b554cb2e3d)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a1c1307ea081f83bb65fb13b554cb2e3d"></a>

Sets the value of MaxMu.

#### `public inline void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1abd117a93df6d56de214db9237a96e4a9)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1abd117a93df6d56de214db9237a96e4a9"></a>

Sets the value of MaxMu using move semantics.

#### `public inline float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1a983863dc65ee3d6f7993e15a589ceb64)`()` <a id="structFRHAPI__RankConfigV3_1a983863dc65ee3d6f7993e15a589ceb64"></a>

Gets the value of MinMu.

#### `public inline const float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1a43c88752c7d234f818859b44339c9597)`() const` <a id="structFRHAPI__RankConfigV3_1a43c88752c7d234f818859b44339c9597"></a>

Gets the value of MinMu.

#### `public inline void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1a02f3462d38c767de1316306af7940985)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a02f3462d38c767de1316306af7940985"></a>

Sets the value of MinMu.

#### `public inline void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1aba16125f56ab7f5f9f6906549cc6c93f)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1aba16125f56ab7f5f9f6906549cc6c93f"></a>

Sets the value of MinMu using move semantics.

#### `public inline float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1aa3d7d4c20b1ffe7b8768aa64aa082306)`()` <a id="structFRHAPI__RankConfigV3_1aa3d7d4c20b1ffe7b8768aa64aa082306"></a>

Gets the value of MinSigma.

#### `public inline const float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1a0b1e017a284d908e060eef830238ba98)`() const` <a id="structFRHAPI__RankConfigV3_1a0b1e017a284d908e060eef830238ba98"></a>

Gets the value of MinSigma.

#### `public inline void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1ad427e1cc583efa365caa868f3a028403)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1ad427e1cc583efa365caa868f3a028403"></a>

Sets the value of MinSigma.

#### `public inline void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1a71284be347513e6136038c1472d1ecad)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a71284be347513e6136038c1472d1ecad"></a>

Sets the value of MinSigma using move semantics.

#### `public inline float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1a06afbed2c7411fefc53f640076137f41)`()` <a id="structFRHAPI__RankConfigV3_1a06afbed2c7411fefc53f640076137f41"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1adc042d0b2f9e14b6283b354903f94da0)`() const` <a id="structFRHAPI__RankConfigV3_1adc042d0b2f9e14b6283b354903f94da0"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1ab0b6db5906d123c506f8c2ac2af4db11)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1ab0b6db5906d123c506f8c2ac2af4db11"></a>

Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBeta`](#structFRHAPI__RankConfigV3_1aaca19bfb3bcb27534a5c86d667869738)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV3_1aaca19bfb3bcb27534a5c86d667869738"></a>

Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1a4c9b59a21bda12b706d7b6f53cc5350c)`()` <a id="structFRHAPI__RankConfigV3_1a4c9b59a21bda12b706d7b6f53cc5350c"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1a10232fe80962a9a9cdec2adb935355c6)`() const` <a id="structFRHAPI__RankConfigV3_1a10232fe80962a9a9cdec2adb935355c6"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBeta`](#structFRHAPI__RankConfigV3_1ae2313f56a98bb383a974ff827c233d8b)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1ae2313f56a98bb383a974ff827c233d8b"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true.

#### `public inline void `[`SetBeta`](#structFRHAPI__RankConfigV3_1afe479cc01f401214dd4013952e576607)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1afe479cc01f401214dd4013952e576607"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.

#### `public inline void `[`ClearBeta`](#structFRHAPI__RankConfigV3_1a4672cd7c59abd9ba02d1c8da6d8560a1)`()` <a id="structFRHAPI__RankConfigV3_1a4672cd7c59abd9ba02d1c8da6d8560a1"></a>

Clears the value of Beta_Optional and sets Beta_IsSet to false.

#### `public inline bool `[`IsBetaSet`](#structFRHAPI__RankConfigV3_1a812b40b6441eb1867a0198f52f8f730f)`() const` <a id="structFRHAPI__RankConfigV3_1a812b40b6441eb1867a0198f52f8f730f"></a>

Checks whether Beta_Optional has been set.

#### `public inline float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1ac55f870d5df03fe937f3747d9722e47d)`()` <a id="structFRHAPI__RankConfigV3_1ac55f870d5df03fe937f3747d9722e47d"></a>

Gets the value of DefaultMu.

#### `public inline const float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1aa6ce70bb43d75bbc961ebc38bfc299a3)`() const` <a id="structFRHAPI__RankConfigV3_1aa6ce70bb43d75bbc961ebc38bfc299a3"></a>

Gets the value of DefaultMu.

#### `public inline void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a107e50a17221c144a5e049ad359b5233)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a107e50a17221c144a5e049ad359b5233"></a>

Sets the value of DefaultMu.

#### `public inline void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a0af584e31fa4aea9fa482ee4c7ec2c2a)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a0af584e31fa4aea9fa482ee4c7ec2c2a"></a>

Sets the value of DefaultMu using move semantics.

#### `public inline float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1a94029767177c0ee4bdc9e84da1478893)`()` <a id="structFRHAPI__RankConfigV3_1a94029767177c0ee4bdc9e84da1478893"></a>

Gets the value of DefaultSigma.

#### `public inline const float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1ab7b95d89a4f6996076728bc02c2f4578)`() const` <a id="structFRHAPI__RankConfigV3_1ab7b95d89a4f6996076728bc02c2f4578"></a>

Gets the value of DefaultSigma.

#### `public inline void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1a79244549378e93fd12e2d384b5e5df0f)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a79244549378e93fd12e2d384b5e5df0f"></a>

Sets the value of DefaultSigma.

#### `public inline void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1a3a761103caa22b531235fcc88edd8e97)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a3a761103caa22b531235fcc88edd8e97"></a>

Sets the value of DefaultSigma using move semantics.

#### `public inline float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a87b6f13ef3743c1e4d7423358b4f8ebc)`()` <a id="structFRHAPI__RankConfigV3_1a87b6f13ef3743c1e4d7423358b4f8ebc"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1abf8c9712d4781d638ee590012a51fcba)`() const` <a id="structFRHAPI__RankConfigV3_1abf8c9712d4781d638ee590012a51fcba"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a5de64fe77b2b2fff128c61b414041465)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1a5de64fe77b2b2fff128c61b414041465"></a>

Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1aef8094045eb311af2d8eb51953a542c3)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV3_1aef8094045eb311af2d8eb51953a542c3"></a>

Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1a87c59557ccc35ae9bf1b60639903e9cb)`()` <a id="structFRHAPI__RankConfigV3_1a87c59557ccc35ae9bf1b60639903e9cb"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1a5714acfc8012d91f6af01a2259fb4b2d)`() const` <a id="structFRHAPI__RankConfigV3_1a5714acfc8012d91f6af01a2259fb4b2d"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1a030aaa0de708f438a8b59807aee1d330)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a030aaa0de708f438a8b59807aee1d330"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.

#### `public inline void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1a460d627de58b5e781c9c7daccf7b4190)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a460d627de58b5e781c9c7daccf7b4190"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.

#### `public inline void `[`ClearDrawProbability`](#structFRHAPI__RankConfigV3_1ae2389061b46365999a4db689a240ffed)`()` <a id="structFRHAPI__RankConfigV3_1ae2389061b46365999a4db689a240ffed"></a>

Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.

#### `public inline bool `[`IsDrawProbabilitySet`](#structFRHAPI__RankConfigV3_1a10f2fc7326281bf998720a1d4774dbc5)`() const` <a id="structFRHAPI__RankConfigV3_1a10f2fc7326281bf998720a1d4774dbc5"></a>

Checks whether DrawProbability_Optional has been set.

#### `public inline float & `[`GetTau`](#structFRHAPI__RankConfigV3_1ab50fc871a8e37359809d8b08df7469cf)`()` <a id="structFRHAPI__RankConfigV3_1ab50fc871a8e37359809d8b08df7469cf"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a075cc2d60e14b3e0700ce496c526a2a2)`() const` <a id="structFRHAPI__RankConfigV3_1a075cc2d60e14b3e0700ce496c526a2a2"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a51206b50380b04c256efe4ffe7e336a7)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1a51206b50380b04c256efe4ffe7e336a7"></a>

Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTau`](#structFRHAPI__RankConfigV3_1a63579d5b24210924bef83924e065ab1b)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV3_1a63579d5b24210924bef83924e065ab1b"></a>

Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1a1d574f7a2437e3983769193e4e81cfab)`()` <a id="structFRHAPI__RankConfigV3_1a1d574f7a2437e3983769193e4e81cfab"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1a4c9f6ece2f3e17d94031e3ea48ae520f)`() const` <a id="structFRHAPI__RankConfigV3_1a4c9f6ece2f3e17d94031e3ea48ae520f"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTau`](#structFRHAPI__RankConfigV3_1a97075173b8f02eba04fa19e507a6e9eb)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a97075173b8f02eba04fa19e507a6e9eb"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true.

#### `public inline void `[`SetTau`](#structFRHAPI__RankConfigV3_1a2ee2e8155662a9426e09e81cea30f046)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a2ee2e8155662a9426e09e81cea30f046"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics.

#### `public inline void `[`ClearTau`](#structFRHAPI__RankConfigV3_1a8a5a0bee2d1ff5962c2e286ceb8169cc)`()` <a id="structFRHAPI__RankConfigV3_1a8a5a0bee2d1ff5962c2e286ceb8169cc"></a>

Clears the value of Tau_Optional and sets Tau_IsSet to false.

#### `public inline bool `[`IsTauSet`](#structFRHAPI__RankConfigV3_1aee8dac8ff7f24f55542b5b2e16a1cb9c)`() const` <a id="structFRHAPI__RankConfigV3_1aee8dac8ff7f24f55542b5b2e16a1cb9c"></a>

Checks whether Tau_Optional has been set.

#### `public inline FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1acecf1aa74fa2c243e0663521c625a606)`()` <a id="structFRHAPI__RankConfigV3_1acecf1aa74fa2c243e0663521c625a606"></a>

Gets the value of RankId.

#### `public inline const FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1a15d4c8c935140475ec55642f4bcf7c74)`() const` <a id="structFRHAPI__RankConfigV3_1a15d4c8c935140475ec55642f4bcf7c74"></a>

Gets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__RankConfigV3_1a0d9727ddd4a4ac0c195ae9e1f7242b8f)`(const FString & NewValue)` <a id="structFRHAPI__RankConfigV3_1a0d9727ddd4a4ac0c195ae9e1f7242b8f"></a>

Sets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__RankConfigV3_1a797b50b3ffa592487776771204daed14)`(FString && NewValue)` <a id="structFRHAPI__RankConfigV3_1a797b50b3ffa592487776771204daed14"></a>

Sets the value of RankId using move semantics.

