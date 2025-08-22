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
`public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__RankConfigV3_1ab7b2dcf20932785c4f893edb4ceaaa04)`()` | Gets the value of Name_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1a43ed03f4d03bb857ebe8c9dceebb03df)`() const` | Gets the value of Name_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1a2710db01761678724e77768d400d98fc)`(const FString & DefaultValue) const` | Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetName`](#structFRHAPI__RankConfigV3_1a0c55e555272667e81c23500ae359a43b)`(FString & OutValue) const` | Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1ac21c25642448c2ef811b82ccccf978b7)`()` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1ac748a64e27664f860192bc2aa8658397)`() const` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__RankConfigV3_1a6246814c7d2f4bb85da9b2649fa177ec)`(const FString & NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__RankConfigV3_1af7d131d9b98da560c8be9239a805cbc5)`(FString && NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.
`public inline void `[`ClearName`](#structFRHAPI__RankConfigV3_1af482314ef4046a8c9b71dd08fe95aff6)`()` | Clears the value of Name_Optional and sets Name_IsSet to false.
`public inline FORCEINLINE FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1ae520784f6d4272ad58e07f160f317bdd)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1aa3bce87ae9b18b13c78de9290fdedf79)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1aa5ff9cd24c5d11c62086c153711072aa)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDescription`](#structFRHAPI__RankConfigV3_1a97e873f67d6cd0ec07135d041a79a0cf)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1a488576477be407a04179f2cadd2ff67c)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1a77da5e269b6f3b13494078250a0645ad)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__RankConfigV3_1adbd5d17e3c6fc88365df623f8dcaae68)`(const FString & NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__RankConfigV3_1a0326d08033e6efa1405a7e2bdc0d595a)`(FString && NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.
`public inline void `[`ClearDescription`](#structFRHAPI__RankConfigV3_1ade3a6bc2d3803668adf87ddd29a4feef)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a5e7977be182d82a2c7270198ae5cf816)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a614bc2aab8ce21b2ee79188112289aa3)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a9ee57c27fe4186d989a0f0a5c65ae846)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a92f780a479acdc9d87205aa7aebfacab)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1a0f0195164b4db6addbcb6f053d286963)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1a0a3f056f6e613834c9888c902fbc8964)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1a3595e701af91f2cb774fd23f2fc56721)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1aed063b5d747847c1b2c294a57d8756f5)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__RankConfigV3_1a0870724f4b3103eca4c45110dfb9f2d4)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1a15784911836ae5f1b9cb3223cda5c08b)`()` | Gets the value of MaxMu.
`public inline FORCEINLINE const float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1a83e50c5e5b2222b83bdfd7db3c6c6c63)`() const` | Gets the value of MaxMu.
`public inline FORCEINLINE void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1ad43417743c7ddfb3dc5f84df4b11ad16)`(const float & NewValue)` | Sets the value of MaxMu.
`public inline FORCEINLINE void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1ad7d32ee3cb5abea0118f667f521a7b4c)`(float && NewValue)` | Sets the value of MaxMu using move semantics.
`public inline FORCEINLINE float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1a21d9a27836db97d0df3b33ed06c36f98)`()` | Gets the value of MinMu.
`public inline FORCEINLINE const float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1a559efb7e47e55d2d1de76fcc87aca7b1)`() const` | Gets the value of MinMu.
`public inline FORCEINLINE void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1a354f7a7b71388e6f2a64e7fc54079502)`(const float & NewValue)` | Sets the value of MinMu.
`public inline FORCEINLINE void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1a22e3fb7702b1d30729937d8440cdb8fa)`(float && NewValue)` | Sets the value of MinMu using move semantics.
`public inline FORCEINLINE float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1aec122322e435ccf497c8b3c9c9512437)`()` | Gets the value of MinSigma.
`public inline FORCEINLINE const float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1a8e3834a370499d1911ed298303d171dc)`() const` | Gets the value of MinSigma.
`public inline FORCEINLINE void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1aa62eabf7e1b5dae9ebd5ba0560658f1c)`(const float & NewValue)` | Sets the value of MinSigma.
`public inline FORCEINLINE void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1a19d32da12f14a6bb4641e9e1b03ad6fc)`(float && NewValue)` | Sets the value of MinSigma using move semantics.
`public inline FORCEINLINE float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1af3b68701e5e5f528baee9a36d6564d67)`()` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1ad2ec7327d90aa7ffa55145ebc74acda7)`() const` | Gets the value of Beta_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1aa9967e68fc04889ee6fd1e767c6127d0)`(const float & DefaultValue) const` | Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBeta`](#structFRHAPI__RankConfigV3_1a2934291f9911810f2cf670d48cda0444)`(float & OutValue) const` | Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1a4141fffbce60b43b5120e2b23ea2b888)`()` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1ad78f2b4bab9aebef2e69cdeb8c57b412)`() const` | Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBeta`](#structFRHAPI__RankConfigV3_1a1ce4101ac3c3fbe2f7f5023484037b39)`(const float & NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true.
`public inline FORCEINLINE void `[`SetBeta`](#structFRHAPI__RankConfigV3_1a6ffa6ed4ff16e363d9602d8e88fcec8a)`(float && NewValue)` | Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.
`public inline void `[`ClearBeta`](#structFRHAPI__RankConfigV3_1a4672cd7c59abd9ba02d1c8da6d8560a1)`()` | Clears the value of Beta_Optional and sets Beta_IsSet to false.
`public inline FORCEINLINE float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1adbb3e864b89fcd2f7e82a43e1d8b6a8e)`()` | Gets the value of DefaultMu.
`public inline FORCEINLINE const float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1a556c9925e6870905aa5dbe442fe45e8d)`() const` | Gets the value of DefaultMu.
`public inline FORCEINLINE void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a4be0138b10c014077883f093b8c7288c)`(const float & NewValue)` | Sets the value of DefaultMu.
`public inline FORCEINLINE void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a2d28f595d9fb4e245603482c87e5a404)`(float && NewValue)` | Sets the value of DefaultMu using move semantics.
`public inline FORCEINLINE float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1a97137d7cac0231ac62b1d9b6a22841f0)`()` | Gets the value of DefaultSigma.
`public inline FORCEINLINE const float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1ae0062de3abaf9277c30a37d1d719a61d)`() const` | Gets the value of DefaultSigma.
`public inline FORCEINLINE void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1aa1a58742df5c51adb28658c74f42d259)`(const float & NewValue)` | Sets the value of DefaultSigma.
`public inline FORCEINLINE void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1aed9deb812da1518307eba4c7fda1a546)`(float && NewValue)` | Sets the value of DefaultSigma using move semantics.
`public inline FORCEINLINE float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a66863d25a55cd63afab1fe555c4119df)`()` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a0203b752c65068e2cec7e1b741c7e212)`() const` | Gets the value of DrawProbability_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a8004b02f7cdb8f0fa1c897f87a9963eb)`(const float & DefaultValue) const` | Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1aa80721bcefa6ab024451cbe392e92b6c)`(float & OutValue) const` | Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1a89679e5cfe8ea82b43bf3c2201946f68)`()` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1acca2ae31287c724bbe9adf1b8f466c9e)`() const` | Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1aeca6b9258df6ca52d9d37fbfbf4988bf)`(const float & NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.
`public inline FORCEINLINE void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1a1cfbbc81caa04ba9bcb342af959e3952)`(float && NewValue)` | Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.
`public inline void `[`ClearDrawProbability`](#structFRHAPI__RankConfigV3_1ae2389061b46365999a4db689a240ffed)`()` | Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.
`public inline FORCEINLINE float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a8b57ee8836dcb880c7fcdc05df3e6b5b)`()` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a608a5bee5fe432128d0d685a722cfea3)`() const` | Gets the value of Tau_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a5c27308449f337773ab7b8a7272c873a)`(const float & DefaultValue) const` | Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTau`](#structFRHAPI__RankConfigV3_1acc9d24ff7b79b40ffe80a0571812de35)`(float & OutValue) const` | Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1a759f4070f0e039c6f664e6923c1cc47c)`()` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1a9e26021889b18b5afca811834a3e128c)`() const` | Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTau`](#structFRHAPI__RankConfigV3_1a0332cbba8c31dbde5a5ec656d85b4d0d)`(const float & NewValue)` | Sets the value of Tau_Optional and also sets Tau_IsSet to true.
`public inline FORCEINLINE void `[`SetTau`](#structFRHAPI__RankConfigV3_1a8283cba4d50202f3a8d1447178e5e512)`(float && NewValue)` | Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics.
`public inline void `[`ClearTau`](#structFRHAPI__RankConfigV3_1a8a5a0bee2d1ff5962c2e286ceb8169cc)`()` | Clears the value of Tau_Optional and sets Tau_IsSet to false.
`public inline FORCEINLINE FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1a4c34326d54b8a70800e7e5b82be4fed4)`()` | Gets the value of RankId.
`public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1af31ed94dcb1f59f654752a631e041b73)`() const` | Gets the value of RankId.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankConfigV3_1a9d860a5914227e18839fdd7467a087af)`(const FString & NewValue)` | Sets the value of RankId.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankConfigV3_1a9056ead5a9315868cb9e593ca4945c87)`(FString && NewValue)` | Sets the value of RankId using move semantics.

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

#### `public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__RankConfigV3_1ab7b2dcf20932785c4f893edb4ceaaa04)`()` <a id="structFRHAPI__RankConfigV3_1ab7b2dcf20932785c4f893edb4ceaaa04"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1a43ed03f4d03bb857ebe8c9dceebb03df)`() const` <a id="structFRHAPI__RankConfigV3_1a43ed03f4d03bb857ebe8c9dceebb03df"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__RankConfigV3_1a2710db01761678724e77768d400d98fc)`(const FString & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1a2710db01761678724e77768d400d98fc"></a>

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetName`](#structFRHAPI__RankConfigV3_1a0c55e555272667e81c23500ae359a43b)`(FString & OutValue) const` <a id="structFRHAPI__RankConfigV3_1a0c55e555272667e81c23500ae359a43b"></a>

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1ac21c25642448c2ef811b82ccccf978b7)`()` <a id="structFRHAPI__RankConfigV3_1ac21c25642448c2ef811b82ccccf978b7"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetNameOrNull`](#structFRHAPI__RankConfigV3_1ac748a64e27664f860192bc2aa8658397)`() const` <a id="structFRHAPI__RankConfigV3_1ac748a64e27664f860192bc2aa8658397"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__RankConfigV3_1a6246814c7d2f4bb85da9b2649fa177ec)`(const FString & NewValue)` <a id="structFRHAPI__RankConfigV3_1a6246814c7d2f4bb85da9b2649fa177ec"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__RankConfigV3_1af7d131d9b98da560c8be9239a805cbc5)`(FString && NewValue)` <a id="structFRHAPI__RankConfigV3_1af7d131d9b98da560c8be9239a805cbc5"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.

#### `public inline void `[`ClearName`](#structFRHAPI__RankConfigV3_1af482314ef4046a8c9b71dd08fe95aff6)`()` <a id="structFRHAPI__RankConfigV3_1af482314ef4046a8c9b71dd08fe95aff6"></a>

Clears the value of Name_Optional and sets Name_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1ae520784f6d4272ad58e07f160f317bdd)`()` <a id="structFRHAPI__RankConfigV3_1ae520784f6d4272ad58e07f160f317bdd"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1aa3bce87ae9b18b13c78de9290fdedf79)`() const` <a id="structFRHAPI__RankConfigV3_1aa3bce87ae9b18b13c78de9290fdedf79"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__RankConfigV3_1aa5ff9cd24c5d11c62086c153711072aa)`(const FString & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1aa5ff9cd24c5d11c62086c153711072aa"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDescription`](#structFRHAPI__RankConfigV3_1a97e873f67d6cd0ec07135d041a79a0cf)`(FString & OutValue) const` <a id="structFRHAPI__RankConfigV3_1a97e873f67d6cd0ec07135d041a79a0cf"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1a488576477be407a04179f2cadd2ff67c)`()` <a id="structFRHAPI__RankConfigV3_1a488576477be407a04179f2cadd2ff67c"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDescriptionOrNull`](#structFRHAPI__RankConfigV3_1a77da5e269b6f3b13494078250a0645ad)`() const` <a id="structFRHAPI__RankConfigV3_1a77da5e269b6f3b13494078250a0645ad"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__RankConfigV3_1adbd5d17e3c6fc88365df623f8dcaae68)`(const FString & NewValue)` <a id="structFRHAPI__RankConfigV3_1adbd5d17e3c6fc88365df623f8dcaae68"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__RankConfigV3_1a0326d08033e6efa1405a7e2bdc0d595a)`(FString && NewValue)` <a id="structFRHAPI__RankConfigV3_1a0326d08033e6efa1405a7e2bdc0d595a"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.

#### `public inline void `[`ClearDescription`](#structFRHAPI__RankConfigV3_1ade3a6bc2d3803668adf87ddd29a4feef)`()` <a id="structFRHAPI__RankConfigV3_1ade3a6bc2d3803668adf87ddd29a4feef"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a5e7977be182d82a2c7270198ae5cf816)`()` <a id="structFRHAPI__RankConfigV3_1a5e7977be182d82a2c7270198ae5cf816"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a614bc2aab8ce21b2ee79188112289aa3)`() const` <a id="structFRHAPI__RankConfigV3_1a614bc2aab8ce21b2ee79188112289aa3"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a9ee57c27fe4186d989a0f0a5c65ae846)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1a9ee57c27fe4186d989a0f0a5c65ae846"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__RankConfigV3_1a92f780a479acdc9d87205aa7aebfacab)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__RankConfigV3_1a92f780a479acdc9d87205aa7aebfacab"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1a0f0195164b4db6addbcb6f053d286963)`()` <a id="structFRHAPI__RankConfigV3_1a0f0195164b4db6addbcb6f053d286963"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankConfigV3_1a0a3f056f6e613834c9888c902fbc8964)`() const` <a id="structFRHAPI__RankConfigV3_1a0a3f056f6e613834c9888c902fbc8964"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1a3595e701af91f2cb774fd23f2fc56721)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__RankConfigV3_1a3595e701af91f2cb774fd23f2fc56721"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RankConfigV3_1aed063b5d747847c1b2c294a57d8756f5)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__RankConfigV3_1aed063b5d747847c1b2c294a57d8756f5"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__RankConfigV3_1a0870724f4b3103eca4c45110dfb9f2d4)`()` <a id="structFRHAPI__RankConfigV3_1a0870724f4b3103eca4c45110dfb9f2d4"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1a15784911836ae5f1b9cb3223cda5c08b)`()` <a id="structFRHAPI__RankConfigV3_1a15784911836ae5f1b9cb3223cda5c08b"></a>

Gets the value of MaxMu.

#### `public inline FORCEINLINE const float & `[`GetMaxMu`](#structFRHAPI__RankConfigV3_1a83e50c5e5b2222b83bdfd7db3c6c6c63)`() const` <a id="structFRHAPI__RankConfigV3_1a83e50c5e5b2222b83bdfd7db3c6c6c63"></a>

Gets the value of MaxMu.

#### `public inline FORCEINLINE void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1ad43417743c7ddfb3dc5f84df4b11ad16)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1ad43417743c7ddfb3dc5f84df4b11ad16"></a>

Sets the value of MaxMu.

#### `public inline FORCEINLINE void `[`SetMaxMu`](#structFRHAPI__RankConfigV3_1ad7d32ee3cb5abea0118f667f521a7b4c)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1ad7d32ee3cb5abea0118f667f521a7b4c"></a>

Sets the value of MaxMu using move semantics.

#### `public inline FORCEINLINE float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1a21d9a27836db97d0df3b33ed06c36f98)`()` <a id="structFRHAPI__RankConfigV3_1a21d9a27836db97d0df3b33ed06c36f98"></a>

Gets the value of MinMu.

#### `public inline FORCEINLINE const float & `[`GetMinMu`](#structFRHAPI__RankConfigV3_1a559efb7e47e55d2d1de76fcc87aca7b1)`() const` <a id="structFRHAPI__RankConfigV3_1a559efb7e47e55d2d1de76fcc87aca7b1"></a>

Gets the value of MinMu.

#### `public inline FORCEINLINE void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1a354f7a7b71388e6f2a64e7fc54079502)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a354f7a7b71388e6f2a64e7fc54079502"></a>

Sets the value of MinMu.

#### `public inline FORCEINLINE void `[`SetMinMu`](#structFRHAPI__RankConfigV3_1a22e3fb7702b1d30729937d8440cdb8fa)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a22e3fb7702b1d30729937d8440cdb8fa"></a>

Sets the value of MinMu using move semantics.

#### `public inline FORCEINLINE float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1aec122322e435ccf497c8b3c9c9512437)`()` <a id="structFRHAPI__RankConfigV3_1aec122322e435ccf497c8b3c9c9512437"></a>

Gets the value of MinSigma.

#### `public inline FORCEINLINE const float & `[`GetMinSigma`](#structFRHAPI__RankConfigV3_1a8e3834a370499d1911ed298303d171dc)`() const` <a id="structFRHAPI__RankConfigV3_1a8e3834a370499d1911ed298303d171dc"></a>

Gets the value of MinSigma.

#### `public inline FORCEINLINE void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1aa62eabf7e1b5dae9ebd5ba0560658f1c)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1aa62eabf7e1b5dae9ebd5ba0560658f1c"></a>

Sets the value of MinSigma.

#### `public inline FORCEINLINE void `[`SetMinSigma`](#structFRHAPI__RankConfigV3_1a19d32da12f14a6bb4641e9e1b03ad6fc)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a19d32da12f14a6bb4641e9e1b03ad6fc"></a>

Sets the value of MinSigma using move semantics.

#### `public inline FORCEINLINE float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1af3b68701e5e5f528baee9a36d6564d67)`()` <a id="structFRHAPI__RankConfigV3_1af3b68701e5e5f528baee9a36d6564d67"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1ad2ec7327d90aa7ffa55145ebc74acda7)`() const` <a id="structFRHAPI__RankConfigV3_1ad2ec7327d90aa7ffa55145ebc74acda7"></a>

Gets the value of Beta_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetBeta`](#structFRHAPI__RankConfigV3_1aa9967e68fc04889ee6fd1e767c6127d0)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1aa9967e68fc04889ee6fd1e767c6127d0"></a>

Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBeta`](#structFRHAPI__RankConfigV3_1a2934291f9911810f2cf670d48cda0444)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV3_1a2934291f9911810f2cf670d48cda0444"></a>

Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1a4141fffbce60b43b5120e2b23ea2b888)`()` <a id="structFRHAPI__RankConfigV3_1a4141fffbce60b43b5120e2b23ea2b888"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetBetaOrNull`](#structFRHAPI__RankConfigV3_1ad78f2b4bab9aebef2e69cdeb8c57b412)`() const` <a id="structFRHAPI__RankConfigV3_1ad78f2b4bab9aebef2e69cdeb8c57b412"></a>

Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBeta`](#structFRHAPI__RankConfigV3_1a1ce4101ac3c3fbe2f7f5023484037b39)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a1ce4101ac3c3fbe2f7f5023484037b39"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBeta`](#structFRHAPI__RankConfigV3_1a6ffa6ed4ff16e363d9602d8e88fcec8a)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a6ffa6ed4ff16e363d9602d8e88fcec8a"></a>

Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics.

#### `public inline void `[`ClearBeta`](#structFRHAPI__RankConfigV3_1a4672cd7c59abd9ba02d1c8da6d8560a1)`()` <a id="structFRHAPI__RankConfigV3_1a4672cd7c59abd9ba02d1c8da6d8560a1"></a>

Clears the value of Beta_Optional and sets Beta_IsSet to false.

#### `public inline FORCEINLINE float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1adbb3e864b89fcd2f7e82a43e1d8b6a8e)`()` <a id="structFRHAPI__RankConfigV3_1adbb3e864b89fcd2f7e82a43e1d8b6a8e"></a>

Gets the value of DefaultMu.

#### `public inline FORCEINLINE const float & `[`GetDefaultMu`](#structFRHAPI__RankConfigV3_1a556c9925e6870905aa5dbe442fe45e8d)`() const` <a id="structFRHAPI__RankConfigV3_1a556c9925e6870905aa5dbe442fe45e8d"></a>

Gets the value of DefaultMu.

#### `public inline FORCEINLINE void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a4be0138b10c014077883f093b8c7288c)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a4be0138b10c014077883f093b8c7288c"></a>

Sets the value of DefaultMu.

#### `public inline FORCEINLINE void `[`SetDefaultMu`](#structFRHAPI__RankConfigV3_1a2d28f595d9fb4e245603482c87e5a404)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a2d28f595d9fb4e245603482c87e5a404"></a>

Sets the value of DefaultMu using move semantics.

#### `public inline FORCEINLINE float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1a97137d7cac0231ac62b1d9b6a22841f0)`()` <a id="structFRHAPI__RankConfigV3_1a97137d7cac0231ac62b1d9b6a22841f0"></a>

Gets the value of DefaultSigma.

#### `public inline FORCEINLINE const float & `[`GetDefaultSigma`](#structFRHAPI__RankConfigV3_1ae0062de3abaf9277c30a37d1d719a61d)`() const` <a id="structFRHAPI__RankConfigV3_1ae0062de3abaf9277c30a37d1d719a61d"></a>

Gets the value of DefaultSigma.

#### `public inline FORCEINLINE void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1aa1a58742df5c51adb28658c74f42d259)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1aa1a58742df5c51adb28658c74f42d259"></a>

Sets the value of DefaultSigma.

#### `public inline FORCEINLINE void `[`SetDefaultSigma`](#structFRHAPI__RankConfigV3_1aed9deb812da1518307eba4c7fda1a546)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1aed9deb812da1518307eba4c7fda1a546"></a>

Sets the value of DefaultSigma using move semantics.

#### `public inline FORCEINLINE float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a66863d25a55cd63afab1fe555c4119df)`()` <a id="structFRHAPI__RankConfigV3_1a66863d25a55cd63afab1fe555c4119df"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a0203b752c65068e2cec7e1b741c7e212)`() const` <a id="structFRHAPI__RankConfigV3_1a0203b752c65068e2cec7e1b741c7e212"></a>

Gets the value of DrawProbability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1a8004b02f7cdb8f0fa1c897f87a9963eb)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1a8004b02f7cdb8f0fa1c897f87a9963eb"></a>

Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDrawProbability`](#structFRHAPI__RankConfigV3_1aa80721bcefa6ab024451cbe392e92b6c)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV3_1aa80721bcefa6ab024451cbe392e92b6c"></a>

Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1a89679e5cfe8ea82b43bf3c2201946f68)`()` <a id="structFRHAPI__RankConfigV3_1a89679e5cfe8ea82b43bf3c2201946f68"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetDrawProbabilityOrNull`](#structFRHAPI__RankConfigV3_1acca2ae31287c724bbe9adf1b8f466c9e)`() const` <a id="structFRHAPI__RankConfigV3_1acca2ae31287c724bbe9adf1b8f466c9e"></a>

Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1aeca6b9258df6ca52d9d37fbfbf4988bf)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1aeca6b9258df6ca52d9d37fbfbf4988bf"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDrawProbability`](#structFRHAPI__RankConfigV3_1a1cfbbc81caa04ba9bcb342af959e3952)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a1cfbbc81caa04ba9bcb342af959e3952"></a>

Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics.

#### `public inline void `[`ClearDrawProbability`](#structFRHAPI__RankConfigV3_1ae2389061b46365999a4db689a240ffed)`()` <a id="structFRHAPI__RankConfigV3_1ae2389061b46365999a4db689a240ffed"></a>

Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false.

#### `public inline FORCEINLINE float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a8b57ee8836dcb880c7fcdc05df3e6b5b)`()` <a id="structFRHAPI__RankConfigV3_1a8b57ee8836dcb880c7fcdc05df3e6b5b"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a608a5bee5fe432128d0d685a722cfea3)`() const` <a id="structFRHAPI__RankConfigV3_1a608a5bee5fe432128d0d685a722cfea3"></a>

Gets the value of Tau_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetTau`](#structFRHAPI__RankConfigV3_1a5c27308449f337773ab7b8a7272c873a)`(const float & DefaultValue) const` <a id="structFRHAPI__RankConfigV3_1a5c27308449f337773ab7b8a7272c873a"></a>

Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTau`](#structFRHAPI__RankConfigV3_1acc9d24ff7b79b40ffe80a0571812de35)`(float & OutValue) const` <a id="structFRHAPI__RankConfigV3_1acc9d24ff7b79b40ffe80a0571812de35"></a>

Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1a759f4070f0e039c6f664e6923c1cc47c)`()` <a id="structFRHAPI__RankConfigV3_1a759f4070f0e039c6f664e6923c1cc47c"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetTauOrNull`](#structFRHAPI__RankConfigV3_1a9e26021889b18b5afca811834a3e128c)`() const` <a id="structFRHAPI__RankConfigV3_1a9e26021889b18b5afca811834a3e128c"></a>

Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTau`](#structFRHAPI__RankConfigV3_1a0332cbba8c31dbde5a5ec656d85b4d0d)`(const float & NewValue)` <a id="structFRHAPI__RankConfigV3_1a0332cbba8c31dbde5a5ec656d85b4d0d"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTau`](#structFRHAPI__RankConfigV3_1a8283cba4d50202f3a8d1447178e5e512)`(float && NewValue)` <a id="structFRHAPI__RankConfigV3_1a8283cba4d50202f3a8d1447178e5e512"></a>

Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics.

#### `public inline void `[`ClearTau`](#structFRHAPI__RankConfigV3_1a8a5a0bee2d1ff5962c2e286ceb8169cc)`()` <a id="structFRHAPI__RankConfigV3_1a8a5a0bee2d1ff5962c2e286ceb8169cc"></a>

Clears the value of Tau_Optional and sets Tau_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1a4c34326d54b8a70800e7e5b82be4fed4)`()` <a id="structFRHAPI__RankConfigV3_1a4c34326d54b8a70800e7e5b82be4fed4"></a>

Gets the value of RankId.

#### `public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__RankConfigV3_1af31ed94dcb1f59f654752a631e041b73)`() const` <a id="structFRHAPI__RankConfigV3_1af31ed94dcb1f59f654752a631e041b73"></a>

Gets the value of RankId.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankConfigV3_1a9d860a5914227e18839fdd7467a087af)`(const FString & NewValue)` <a id="structFRHAPI__RankConfigV3_1a9d860a5914227e18839fdd7467a087af"></a>

Sets the value of RankId.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankConfigV3_1a9056ead5a9315868cb9e593ca4945c87)`(FString && NewValue)` <a id="structFRHAPI__RankConfigV3_1a9056ead5a9315868cb9e593ca4945c87"></a>

Sets the value of RankId using move semantics.

