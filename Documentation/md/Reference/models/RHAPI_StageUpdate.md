---
title: RHAPI_StageUpdate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_StageUpdate`](#structFRHAPI__StageUpdate) | Fields to update a stage with. NOTE: the fields shared between this and the StageMatchmakeParams are used to determine which matchmaking pool this stage will be placed into.

## struct `FRHAPI_StageUpdate` <a id="structFRHAPI__StageUpdate"></a>

```
struct FRHAPI_StageUpdate
  : public FRHAPI_Model
```

Fields to update a stage with. NOTE: the fields shared between this and the StageMatchmakeParams are used to determine which matchmaking pool this stage will be placed into.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`Blob_Optional`](#structFRHAPI__StageUpdate_1a2168a4a7a0f07f0f954d86e69645db7e) | 
`public bool `[`Blob_IsSet`](#structFRHAPI__StageUpdate_1afa191ab193546fe467b19c45f9c2a033) | true if Blob_Optional has been set to a value
`public FString `[`GameVersion_Optional`](#structFRHAPI__StageUpdate_1aa0be8f8fe73b6508927b372ddd38195e) | 
`public bool `[`GameVersion_IsSet`](#structFRHAPI__StageUpdate_1aad7ced1822a76a70fc5f2b5943a2107d) | true if GameVersion_Optional has been set to a value
`public bool `[`GameVersion_IsNull`](#structFRHAPI__StageUpdate_1a087fb393d3cb9bfc2adb5f73acba71f2) | true if GameVersion_Optional has been explicitly set to null
`public FString `[`V_Optional`](#structFRHAPI__StageUpdate_1adebf5336e3699dd596b82f6e88ace6b3) | 
`public bool `[`V_IsSet`](#structFRHAPI__StageUpdate_1a4539179a85f89f1bcc4a8879ce7590f0) | true if V_Optional has been set to a value
`public bool `[`V_IsNull`](#structFRHAPI__StageUpdate_1aa518be870ce09e0bdf39d6b03c42f6dd) | true if V_Optional has been explicitly set to null
`public FString `[`Type1_Optional`](#structFRHAPI__StageUpdate_1ac29cffe930ca07c6297fa262a6a3c721) | 
`public bool `[`Type1_IsSet`](#structFRHAPI__StageUpdate_1ac0c30eaaedb33a76fc570182ec5e3f17) | true if Type1_Optional has been set to a value
`public bool `[`Type1_IsNull`](#structFRHAPI__StageUpdate_1a57c0e0813490e88c646c8f179fc73330) | true if Type1_Optional has been explicitly set to null
`public FString `[`Type2_Optional`](#structFRHAPI__StageUpdate_1a0cd9ed9d4ca33a5634388371dfb133d3) | 
`public bool `[`Type2_IsSet`](#structFRHAPI__StageUpdate_1ab8ae6f537b333ac3d39d45f59d3974f7) | true if Type2_Optional has been set to a value
`public bool `[`Type2_IsNull`](#structFRHAPI__StageUpdate_1aa1b3b90c5154bbf1417ece5002c63225) | true if Type2_Optional has been explicitly set to null
`public FString `[`Type3_Optional`](#structFRHAPI__StageUpdate_1ad18beeb2876d0688686739eacd996bf2) | 
`public bool `[`Type3_IsSet`](#structFRHAPI__StageUpdate_1ae898ffbf91df242307d731a8db36d1aa) | true if Type3_Optional has been set to a value
`public bool `[`Type3_IsNull`](#structFRHAPI__StageUpdate_1a0b60058d847072686e749161a28d0e9a) | true if Type3_Optional has been explicitly set to null
`public FString `[`Type4_Optional`](#structFRHAPI__StageUpdate_1a8c7b657bb90d0ddda665d9cfc4c4d948) | 
`public bool `[`Type4_IsSet`](#structFRHAPI__StageUpdate_1a139990c889f6b7b12ef77f04fae08464) | true if Type4_Optional has been set to a value
`public bool `[`Type4_IsNull`](#structFRHAPI__StageUpdate_1a9d93202ba0788dbe67d9ea29e582acb1) | true if Type4_Optional has been explicitly set to null
`public int32 `[`Index_Optional`](#structFRHAPI__StageUpdate_1a4b0f8878204dfa47950e72d4ae6d5e8c) | Index of the stage relative to other stages in the match.
`public bool `[`Index_IsSet`](#structFRHAPI__StageUpdate_1a3ebac20eec118464b28a18410142e870) | true if Index_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__StageUpdate_1add42017a9548dd5ceb0e48b612d5b6fd) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__StageUpdate_1a92200cb6c805c648959e0e01bb66e968) | true if MatchId_Optional has been set to a value
`public bool `[`MatchId_IsNull`](#structFRHAPI__StageUpdate_1a546c33598ac49400eca52b255fbaa447) | true if MatchId_Optional has been explicitly set to null
`public int32 `[`Stat1_Optional`](#structFRHAPI__StageUpdate_1a505d3f929bcc9a00cadb3be383b83d1d) | 
`public bool `[`Stat1_IsSet`](#structFRHAPI__StageUpdate_1aa9209756ba27a1072c1a3f2f1362670f) | true if Stat1_Optional has been set to a value
`public bool `[`Stat1_IsNull`](#structFRHAPI__StageUpdate_1a4c3090bddaacc885aeaefd5af7bb655a) | true if Stat1_Optional has been explicitly set to null
`public int32 `[`Stat2_Optional`](#structFRHAPI__StageUpdate_1a367d12dad8145188a23d5f0a59b644e7) | 
`public bool `[`Stat2_IsSet`](#structFRHAPI__StageUpdate_1af4f6e2ecb3655a081fd02c3442fe4d89) | true if Stat2_Optional has been set to a value
`public bool `[`Stat2_IsNull`](#structFRHAPI__StageUpdate_1a885b1eb4eb5ac4059dba29b1c09fc355) | true if Stat2_Optional has been explicitly set to null
`public int32 `[`Stat3_Optional`](#structFRHAPI__StageUpdate_1a9fe5f30a4d664f79064d17f3d63b5053) | 
`public bool `[`Stat3_IsSet`](#structFRHAPI__StageUpdate_1ad79493297305ab335b3119de8555cb1b) | true if Stat3_Optional has been set to a value
`public bool `[`Stat3_IsNull`](#structFRHAPI__StageUpdate_1aee6c328230673e6bfaa83844577994d5) | true if Stat3_Optional has been explicitly set to null
`public int32 `[`Stat4_Optional`](#structFRHAPI__StageUpdate_1a7fba65bcbb7104a82c0a0f0d3bbb844b) | 
`public bool `[`Stat4_IsSet`](#structFRHAPI__StageUpdate_1a74a2ca37431df89c4132777c63f44f65) | true if Stat4_Optional has been set to a value
`public bool `[`Stat4_IsNull`](#structFRHAPI__StageUpdate_1ae6df3b8c89c09fb9f2cda34db095c857) | true if Stat4_Optional has been explicitly set to null
`public float `[`MmrInternal_Optional`](#structFRHAPI__StageUpdate_1afcbc73fa842ac0c8a2d2f70e7c2c9921) | 
`public bool `[`MmrInternal_IsSet`](#structFRHAPI__StageUpdate_1a65db15a71819875268cf7119b295bfe0) | true if MmrInternal_Optional has been set to a value
`public bool `[`MmrInternal_IsNull`](#structFRHAPI__StageUpdate_1ac7924da09c3feef5d40563e162205cf2) | true if MmrInternal_Optional has been explicitly set to null
`public float `[`MmrVis_Optional`](#structFRHAPI__StageUpdate_1ac431c7871bad91fc70c32f0ab98fe5da) | 
`public bool `[`MmrVis_IsSet`](#structFRHAPI__StageUpdate_1a3c5ab677cb562496430ffbbe91a46174) | true if MmrVis_Optional has been set to a value
`public bool `[`MmrVis_IsNull`](#structFRHAPI__StageUpdate_1ab283b27e975d9bc0da7631df07bda957) | true if MmrVis_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__StageUpdate_1aa16f0a3f2e1d1af8069b0dc36a3c91cd)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__StageUpdate_1acf1bd842206eb9c490646b74be2b6abb)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageUpdate_1a5ff5ea09596574555d022f7c8cd27734)`()` | Gets the value of Blob_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageUpdate_1a3e8847679d69894e147cb0b330548323)`() const` | Gets the value of Blob_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageUpdate_1a0dfaa8e13908456c01234b1ce28c225c)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` | Gets the value of Blob_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBlob`](#structFRHAPI__StageUpdate_1abab73fd7a4b64610b2b816fc7f44cbf3)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` | Fills OutValue with the value of Blob_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetBlobOrNull`](#structFRHAPI__StageUpdate_1a49ac00f89f6e99ae23230e1c8aa65e58)`()` | Returns a pointer to Blob_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetBlobOrNull`](#structFRHAPI__StageUpdate_1a806a29cf829800a204a3a1e374d91e6a)`() const` | Returns a pointer to Blob_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBlob`](#structFRHAPI__StageUpdate_1a9c3de50593369873cc5c40320fa4ef9b)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` | Sets the value of Blob_Optional and also sets Blob_IsSet to true.
`public inline FORCEINLINE void `[`SetBlob`](#structFRHAPI__StageUpdate_1a5c1d380ca5c6df471fd49cff2fb7559d)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` | Sets the value of Blob_Optional and also sets Blob_IsSet to true using move semantics.
`public inline void `[`ClearBlob`](#structFRHAPI__StageUpdate_1aab90b82a5ad29f10795acbdd48a689cb)`()` | Clears the value of Blob_Optional and sets Blob_IsSet to false.
`public inline FORCEINLINE FString & `[`GetGameVersion`](#structFRHAPI__StageUpdate_1ab518ff4e334501b5620e3b30b6d9eb5c)`()` | Gets the value of GameVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetGameVersion`](#structFRHAPI__StageUpdate_1a0445211313c11a393e2929f033b2c27e)`() const` | Gets the value of GameVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetGameVersion`](#structFRHAPI__StageUpdate_1a79f1894f76691fd1f1e5f914edc452c5)`(const FString & DefaultValue) const` | Gets the value of GameVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetGameVersion`](#structFRHAPI__StageUpdate_1a1e983b63ee6add0d68ce57167d900409)`(FString & OutValue) const` | Fills OutValue with the value of GameVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetGameVersionOrNull`](#structFRHAPI__StageUpdate_1aa5556003985df30b7a835ecd6a210606)`()` | Returns a pointer to GameVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetGameVersionOrNull`](#structFRHAPI__StageUpdate_1a71ddd83a2dc1023ba337f3aef05f9a48)`() const` | Returns a pointer to GameVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__StageUpdate_1a011a4db9d8a8bd12eb4fab0a5a70949f)`(const FString & NewValue)` | Sets the value of GameVersion_Optional and also sets GameVersion_IsSet to true.
`public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__StageUpdate_1a4d6c2d73c6dc66715d324d848babe57a)`(FString && NewValue)` | Sets the value of GameVersion_Optional and also sets GameVersion_IsSet to true using move semantics.
`public inline void `[`ClearGameVersion`](#structFRHAPI__StageUpdate_1a0e6fb62f53cf217e6c7e532da7b5c2e2)`()` | Clears the value of GameVersion_Optional and sets GameVersion_IsSet to false.
`public inline FORCEINLINE void `[`SetGameVersionToNull`](#structFRHAPI__StageUpdate_1a5230e7a2de6b613e6ba5706e8d45ea67)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsGameVersionNull`](#structFRHAPI__StageUpdate_1ac8943205e6b0464f9ad563ddee3c5282)`() const` | Checks whether GameVersion_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetV`](#structFRHAPI__StageUpdate_1a66f60180ea12ea2c694a7c10ce77eed8)`()` | Gets the value of V_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageUpdate_1aef20505980f009c8a0c6245a89d0e1b7)`() const` | Gets the value of V_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageUpdate_1af03abc29869f6a660b5b84c24fcea9dc)`(const FString & DefaultValue) const` | Gets the value of V_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetV`](#structFRHAPI__StageUpdate_1a306e05e631d8f60d1864b8e56180235d)`(FString & OutValue) const` | Fills OutValue with the value of V_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVOrNull`](#structFRHAPI__StageUpdate_1a52d753ce0c6263db84ef1c42db9543e9)`()` | Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVOrNull`](#structFRHAPI__StageUpdate_1a28e04befefb5b28a540910da6c900e36)`() const` | Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageUpdate_1a073acfeda336dfcd8225eaf98fcb6f00)`(const FString & NewValue)` | Sets the value of V_Optional and also sets V_IsSet to true.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageUpdate_1a067657bda39bd6cd0a8f6bbf34b0abce)`(FString && NewValue)` | Sets the value of V_Optional and also sets V_IsSet to true using move semantics.
`public inline void `[`ClearV`](#structFRHAPI__StageUpdate_1aa9b290619b5e8623b71be2399daa0e61)`()` | Clears the value of V_Optional and sets V_IsSet to false.
`public inline FORCEINLINE void `[`SetVToNull`](#structFRHAPI__StageUpdate_1affeb2ac4c8d73ad97c890bbbd1cba257)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVNull`](#structFRHAPI__StageUpdate_1abe6f82ae4708cae330573886a8db137a)`() const` | Checks whether V_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType1`](#structFRHAPI__StageUpdate_1a52166627645846a8eb7f2c5d73c258cc)`()` | Gets the value of Type1_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageUpdate_1abfd8f98e21c0349c93a4ee36684dfbbc)`() const` | Gets the value of Type1_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageUpdate_1a18ded579b48dbdfe3df7a888b9419575)`(const FString & DefaultValue) const` | Gets the value of Type1_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType1`](#structFRHAPI__StageUpdate_1a70cfbd6cbafcb3d978b0f7b8ac2ce2b3)`(FString & OutValue) const` | Fills OutValue with the value of Type1_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType1OrNull`](#structFRHAPI__StageUpdate_1a10ecace3963d3536d7b8a34870ef5375)`()` | Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType1OrNull`](#structFRHAPI__StageUpdate_1a5c7573e9480c936fba40ce01bfbd1554)`() const` | Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageUpdate_1a0077a201190ba491b5006661efc075a5)`(const FString & NewValue)` | Sets the value of Type1_Optional and also sets Type1_IsSet to true.
`public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageUpdate_1a6f0544db269f9e164667e84828f43d3b)`(FString && NewValue)` | Sets the value of Type1_Optional and also sets Type1_IsSet to true using move semantics.
`public inline void `[`ClearType1`](#structFRHAPI__StageUpdate_1ad2439ce40044110c49c8a1874a399142)`()` | Clears the value of Type1_Optional and sets Type1_IsSet to false.
`public inline FORCEINLINE void `[`SetType1ToNull`](#structFRHAPI__StageUpdate_1a54de24b15fc3477936f0c94f0e2d3f1e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType1Null`](#structFRHAPI__StageUpdate_1a467c046569ef8be762afb5e4b271ba7e)`() const` | Checks whether Type1_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType2`](#structFRHAPI__StageUpdate_1aa90f61fd0560f4c7198e18fd6c28fbd3)`()` | Gets the value of Type2_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageUpdate_1a37406540268dc2efd43a339f561436af)`() const` | Gets the value of Type2_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageUpdate_1ad71b088888be42300b875c6d4f63d2d1)`(const FString & DefaultValue) const` | Gets the value of Type2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType2`](#structFRHAPI__StageUpdate_1a2bbc1d2b004e569b3e445dce478c27d7)`(FString & OutValue) const` | Fills OutValue with the value of Type2_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType2OrNull`](#structFRHAPI__StageUpdate_1ae0de0b5657449f29ddb24cd3d219448b)`()` | Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType2OrNull`](#structFRHAPI__StageUpdate_1ae9d40c7bff1d76e442414fe6b2b44741)`() const` | Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageUpdate_1a5c97b75237521aecd5efc4dde5316d46)`(const FString & NewValue)` | Sets the value of Type2_Optional and also sets Type2_IsSet to true.
`public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageUpdate_1a348d676df618f194e5402919ab2e7887)`(FString && NewValue)` | Sets the value of Type2_Optional and also sets Type2_IsSet to true using move semantics.
`public inline void `[`ClearType2`](#structFRHAPI__StageUpdate_1a171b94d826c4376b6a33f03e7d3c4883)`()` | Clears the value of Type2_Optional and sets Type2_IsSet to false.
`public inline FORCEINLINE void `[`SetType2ToNull`](#structFRHAPI__StageUpdate_1a3000cf9bddfb21b7c563f97174bd73ab)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType2Null`](#structFRHAPI__StageUpdate_1ab7d4d16fcdf1d5de1bb1cbd37019e4a8)`() const` | Checks whether Type2_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType3`](#structFRHAPI__StageUpdate_1aa2845fa125af05ac6c21140b1337fbce)`()` | Gets the value of Type3_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageUpdate_1af60192b79d7e32122a06d1449613652a)`() const` | Gets the value of Type3_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageUpdate_1acd5d8d2cc2e642286ec4e090f93fe950)`(const FString & DefaultValue) const` | Gets the value of Type3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType3`](#structFRHAPI__StageUpdate_1ac295d9863f31f9bab4f610b1b1d7b4de)`(FString & OutValue) const` | Fills OutValue with the value of Type3_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType3OrNull`](#structFRHAPI__StageUpdate_1a432c109519ef752a2ba284dd8d6e076d)`()` | Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType3OrNull`](#structFRHAPI__StageUpdate_1a6d03dda9de554e41c469152ed7babb68)`() const` | Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageUpdate_1a57f342ba2b5f73a5d59579a097c954e0)`(const FString & NewValue)` | Sets the value of Type3_Optional and also sets Type3_IsSet to true.
`public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageUpdate_1a6d17e9387c5240ffa55f49d42d58fbba)`(FString && NewValue)` | Sets the value of Type3_Optional and also sets Type3_IsSet to true using move semantics.
`public inline void `[`ClearType3`](#structFRHAPI__StageUpdate_1a11dc5de6a9b9138fb01ff5e26de54489)`()` | Clears the value of Type3_Optional and sets Type3_IsSet to false.
`public inline FORCEINLINE void `[`SetType3ToNull`](#structFRHAPI__StageUpdate_1a9cd1aa6e05af1cadc806b7603184ac05)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType3Null`](#structFRHAPI__StageUpdate_1a9bc6d9c0c55d0779cf90095804abd889)`() const` | Checks whether Type3_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType4`](#structFRHAPI__StageUpdate_1a8a9c6f21cac8d7b9b09b6ab10960f3b7)`()` | Gets the value of Type4_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageUpdate_1a1d422aad79234ae541a0a95481ba7063)`() const` | Gets the value of Type4_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageUpdate_1af2e341a0bc9901809408e12b6bec55fb)`(const FString & DefaultValue) const` | Gets the value of Type4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType4`](#structFRHAPI__StageUpdate_1a13ef77855fed0d93c775d756bc7f971d)`(FString & OutValue) const` | Fills OutValue with the value of Type4_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType4OrNull`](#structFRHAPI__StageUpdate_1af1e0ef9bf6d29ca54bc59af37874cfb3)`()` | Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType4OrNull`](#structFRHAPI__StageUpdate_1aeb15af714c593c353485c6228663c607)`() const` | Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageUpdate_1a44d532af409ffb4dd4e22f471feb599c)`(const FString & NewValue)` | Sets the value of Type4_Optional and also sets Type4_IsSet to true.
`public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageUpdate_1acda0ad936a048e1c6659c50e008bfe33)`(FString && NewValue)` | Sets the value of Type4_Optional and also sets Type4_IsSet to true using move semantics.
`public inline void `[`ClearType4`](#structFRHAPI__StageUpdate_1a9b142fd2ddfe4697e55e3266009c9ff7)`()` | Clears the value of Type4_Optional and sets Type4_IsSet to false.
`public inline FORCEINLINE void `[`SetType4ToNull`](#structFRHAPI__StageUpdate_1a317a93efa0c716541fd396f81285059d)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType4Null`](#structFRHAPI__StageUpdate_1a706e55020b484199457eb828fe55e522)`() const` | Checks whether Type4_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetIndex`](#structFRHAPI__StageUpdate_1a68393661dbf27289dff09d8d4f4c78d3)`()` | Gets the value of Index_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageUpdate_1a366980581865f97e32fe66eefc822cf7)`() const` | Gets the value of Index_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageUpdate_1ab4e9a12da83fc8c2a4c11bfcc426b6a1)`(const int32 & DefaultValue) const` | Gets the value of Index_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIndex`](#structFRHAPI__StageUpdate_1a8b849ce448938c0c912fc713ee28ed20)`(int32 & OutValue) const` | Fills OutValue with the value of Index_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetIndexOrNull`](#structFRHAPI__StageUpdate_1a1ffb7dd889e5aab2a79b347be737333c)`()` | Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetIndexOrNull`](#structFRHAPI__StageUpdate_1a4acd627fd40bf73032e02ac53e2eb097)`() const` | Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageUpdate_1a23bdd02710acfb7b6324c5045679df9e)`(const int32 & NewValue)` | Sets the value of Index_Optional and also sets Index_IsSet to true.
`public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageUpdate_1a9230b1ef89248d7d1dc9be68c53ac2fb)`(int32 && NewValue)` | Sets the value of Index_Optional and also sets Index_IsSet to true using move semantics.
`public inline void `[`ClearIndex`](#structFRHAPI__StageUpdate_1a16882973ed1da5fde23a9bbc357606af)`()` | Clears the value of Index_Optional and sets Index_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Index`](#structFRHAPI__StageUpdate_1a95b1c127f1df48509d2be20ef9c4886c)`()` | Returns the default value of Index.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__StageUpdate_1abd820163c291d741327263780f52f8e8)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__StageUpdate_1a67bf8655624730c29b7646215f01012e)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__StageUpdate_1a7d4edc1e0007cd80a0fdebc08f6eb2eb)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__StageUpdate_1aa41dbcd851f76142da626375d647d7ce)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__StageUpdate_1afab5745c739be9e1e09c30e1b389403c)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__StageUpdate_1a137ceb868f072bc6568e88397fb24573)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__StageUpdate_1a35826788bd57e1988acc8094b17ad77d)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__StageUpdate_1aa07fe0e55e3c4941c711d3c35695ba48)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__StageUpdate_1af7541cbe0cf776fdfb79e721595cfba7)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__StageUpdate_1ab111f9573472554a12d567e3f96bcc8f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__StageUpdate_1abd471267fc55bbc58ca461e05f620c14)`() const` | Checks whether MatchId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetStat1`](#structFRHAPI__StageUpdate_1a6cec3cb61139c0286aae95d372072034)`()` | Gets the value of Stat1_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat1`](#structFRHAPI__StageUpdate_1aea0e518cee509586a5a59a2b899d4545)`() const` | Gets the value of Stat1_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat1`](#structFRHAPI__StageUpdate_1a071547689e64e32a686496f941045e8a)`(const int32 & DefaultValue) const` | Gets the value of Stat1_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStat1`](#structFRHAPI__StageUpdate_1a646e5e9d72c398dd4eb5a99832b99005)`(int32 & OutValue) const` | Fills OutValue with the value of Stat1_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStat1OrNull`](#structFRHAPI__StageUpdate_1aa4c316342f53c465b8c53f7efc7115d1)`()` | Returns a pointer to Stat1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStat1OrNull`](#structFRHAPI__StageUpdate_1a0722c88df7b13388a2195d1040dd30f4)`() const` | Returns a pointer to Stat1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStat1`](#structFRHAPI__StageUpdate_1a2c3e71563fbc6d66e9ad72a15378bb0e)`(const int32 & NewValue)` | Sets the value of Stat1_Optional and also sets Stat1_IsSet to true.
`public inline FORCEINLINE void `[`SetStat1`](#structFRHAPI__StageUpdate_1aee3fdda85c815f7eda2e58a76a71a441)`(int32 && NewValue)` | Sets the value of Stat1_Optional and also sets Stat1_IsSet to true using move semantics.
`public inline void `[`ClearStat1`](#structFRHAPI__StageUpdate_1a0e54dac6747577272726abfdf4909195)`()` | Clears the value of Stat1_Optional and sets Stat1_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Stat1`](#structFRHAPI__StageUpdate_1af1225e117f5b59681c0d256e5d825603)`()` | Returns the default value of Stat1.
`public inline FORCEINLINE void `[`SetStat1ToNull`](#structFRHAPI__StageUpdate_1a11ab1260e67ff1528f75bff7a86722f0)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStat1Null`](#structFRHAPI__StageUpdate_1aa59c0eb239f8b9a93ae61890b00f766c)`() const` | Checks whether Stat1_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetStat2`](#structFRHAPI__StageUpdate_1a07a08b2bc4f8521b2b467ae38895e2de)`()` | Gets the value of Stat2_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat2`](#structFRHAPI__StageUpdate_1ac52cf250e6c3b9a53ba1726b7e8c118f)`() const` | Gets the value of Stat2_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat2`](#structFRHAPI__StageUpdate_1a706ab24584296d6a251654d85865ca5b)`(const int32 & DefaultValue) const` | Gets the value of Stat2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStat2`](#structFRHAPI__StageUpdate_1a4d9d6b65581237e8f9a881acbffb38d0)`(int32 & OutValue) const` | Fills OutValue with the value of Stat2_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStat2OrNull`](#structFRHAPI__StageUpdate_1ad35ff510561b491ae3e3030d5c82ef11)`()` | Returns a pointer to Stat2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStat2OrNull`](#structFRHAPI__StageUpdate_1af167f0f24f9719db4379128cb7177b90)`() const` | Returns a pointer to Stat2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStat2`](#structFRHAPI__StageUpdate_1a33581c56505a0b20c5568cd2e13ac6bc)`(const int32 & NewValue)` | Sets the value of Stat2_Optional and also sets Stat2_IsSet to true.
`public inline FORCEINLINE void `[`SetStat2`](#structFRHAPI__StageUpdate_1a4488e8abc3ce87a877fcbec595cf390b)`(int32 && NewValue)` | Sets the value of Stat2_Optional and also sets Stat2_IsSet to true using move semantics.
`public inline void `[`ClearStat2`](#structFRHAPI__StageUpdate_1a86ecb0b06f7585c6875570b3a643506a)`()` | Clears the value of Stat2_Optional and sets Stat2_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Stat2`](#structFRHAPI__StageUpdate_1ac4d233a26fc7f214791f2c4035e0c9d8)`()` | Returns the default value of Stat2.
`public inline FORCEINLINE void `[`SetStat2ToNull`](#structFRHAPI__StageUpdate_1a3f20a8613028e72665bb57b8c268842e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStat2Null`](#structFRHAPI__StageUpdate_1ac3a8d576770929c7142bae6648dc56ce)`() const` | Checks whether Stat2_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetStat3`](#structFRHAPI__StageUpdate_1a05a54446718469841f74c30922ee68d3)`()` | Gets the value of Stat3_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat3`](#structFRHAPI__StageUpdate_1a831cceafe9f49d434e19530037d4a5ac)`() const` | Gets the value of Stat3_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat3`](#structFRHAPI__StageUpdate_1a5146c6eb26dc6f4d14075ba1e8ee6989)`(const int32 & DefaultValue) const` | Gets the value of Stat3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStat3`](#structFRHAPI__StageUpdate_1a6c1ebb3c86b881fd1c683ef7bf29e4a5)`(int32 & OutValue) const` | Fills OutValue with the value of Stat3_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStat3OrNull`](#structFRHAPI__StageUpdate_1a80542b33ab48cde9c1f6e3805e250258)`()` | Returns a pointer to Stat3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStat3OrNull`](#structFRHAPI__StageUpdate_1a2fead8e71681adff164e648d49ebb69a)`() const` | Returns a pointer to Stat3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStat3`](#structFRHAPI__StageUpdate_1a0e86894111ff4a206b4d918be56559cd)`(const int32 & NewValue)` | Sets the value of Stat3_Optional and also sets Stat3_IsSet to true.
`public inline FORCEINLINE void `[`SetStat3`](#structFRHAPI__StageUpdate_1a9e55cdfaf295f3d0f7c6bb8e2ef064f2)`(int32 && NewValue)` | Sets the value of Stat3_Optional and also sets Stat3_IsSet to true using move semantics.
`public inline void `[`ClearStat3`](#structFRHAPI__StageUpdate_1a77142d6217ede4b58a1ab812acb0e531)`()` | Clears the value of Stat3_Optional and sets Stat3_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Stat3`](#structFRHAPI__StageUpdate_1ac61ccb3a2360f55ab1b8ea14618e5b04)`()` | Returns the default value of Stat3.
`public inline FORCEINLINE void `[`SetStat3ToNull`](#structFRHAPI__StageUpdate_1add1c9dec1b5ac02b3ab0ccb14194bfc7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStat3Null`](#structFRHAPI__StageUpdate_1a118c429ff64ddc6918dcdadd0dbb57d4)`() const` | Checks whether Stat3_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetStat4`](#structFRHAPI__StageUpdate_1a9f2b4973b597119e3aafa744b4c0b28b)`()` | Gets the value of Stat4_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat4`](#structFRHAPI__StageUpdate_1a2e8c4d75127f7324375f8d86928f0c73)`() const` | Gets the value of Stat4_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat4`](#structFRHAPI__StageUpdate_1aed390fb176e2a0d5807dfb08e6f5cd42)`(const int32 & DefaultValue) const` | Gets the value of Stat4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStat4`](#structFRHAPI__StageUpdate_1a0c3cad85ff56a91d4e71fe136106d597)`(int32 & OutValue) const` | Fills OutValue with the value of Stat4_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStat4OrNull`](#structFRHAPI__StageUpdate_1ac867d1b0a094f2e83a8925767bccccba)`()` | Returns a pointer to Stat4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStat4OrNull`](#structFRHAPI__StageUpdate_1a47a91f37ef03cae62d4e7a78e131a18b)`() const` | Returns a pointer to Stat4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStat4`](#structFRHAPI__StageUpdate_1a5db56c8a74098e3df2c712beb72e66a5)`(const int32 & NewValue)` | Sets the value of Stat4_Optional and also sets Stat4_IsSet to true.
`public inline FORCEINLINE void `[`SetStat4`](#structFRHAPI__StageUpdate_1acdd4d865cf121966b9c247805318a7a4)`(int32 && NewValue)` | Sets the value of Stat4_Optional and also sets Stat4_IsSet to true using move semantics.
`public inline void `[`ClearStat4`](#structFRHAPI__StageUpdate_1aec013aa71d96ab7f0629c48a640097c3)`()` | Clears the value of Stat4_Optional and sets Stat4_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Stat4`](#structFRHAPI__StageUpdate_1a95c560c3b0b6427db9cecfd8b42ccdfd)`()` | Returns the default value of Stat4.
`public inline FORCEINLINE void `[`SetStat4ToNull`](#structFRHAPI__StageUpdate_1a39815ea207f621218ab952bd7f31134b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStat4Null`](#structFRHAPI__StageUpdate_1ab91441ffd2c0c0a876b2a3963d22ea09)`() const` | Checks whether Stat4_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMmrInternal`](#structFRHAPI__StageUpdate_1a156ad0a36648d0e89afb5d5377f40bf7)`()` | Gets the value of MmrInternal_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternal`](#structFRHAPI__StageUpdate_1aaeca0835dc765b6f62e6c2934cffd6db)`() const` | Gets the value of MmrInternal_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternal`](#structFRHAPI__StageUpdate_1a4cc988d9d631c89dc31fe3c231c23a31)`(const float & DefaultValue) const` | Gets the value of MmrInternal_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMmrInternal`](#structFRHAPI__StageUpdate_1a90cf5abb684840c7b67addc23c755a8b)`(float & OutValue) const` | Fills OutValue with the value of MmrInternal_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMmrInternalOrNull`](#structFRHAPI__StageUpdate_1abe7f5059ada4fbb54298ee7cbddffcde)`()` | Returns a pointer to MmrInternal_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMmrInternalOrNull`](#structFRHAPI__StageUpdate_1addc4fb87a959d0564ffd246b9af59a10)`() const` | Returns a pointer to MmrInternal_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMmrInternal`](#structFRHAPI__StageUpdate_1acbcac373250b454213a76243fdd9af05)`(const float & NewValue)` | Sets the value of MmrInternal_Optional and also sets MmrInternal_IsSet to true.
`public inline FORCEINLINE void `[`SetMmrInternal`](#structFRHAPI__StageUpdate_1ab66845eb3ef4351c96bae76d4a7a2eb7)`(float && NewValue)` | Sets the value of MmrInternal_Optional and also sets MmrInternal_IsSet to true using move semantics.
`public inline void `[`ClearMmrInternal`](#structFRHAPI__StageUpdate_1a346a6214b4f95c06d357ea57e2e28417)`()` | Clears the value of MmrInternal_Optional and sets MmrInternal_IsSet to false.
`public inline FORCEINLINE void `[`SetMmrInternalToNull`](#structFRHAPI__StageUpdate_1ab7467a4b65a59dbbcfcf53b126c9f51e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMmrInternalNull`](#structFRHAPI__StageUpdate_1a293fe454f6376c5fd406ef619822f1b6)`() const` | Checks whether MmrInternal_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMmrVis`](#structFRHAPI__StageUpdate_1a84bd0f554c50ad681a6054abd8612bb7)`()` | Gets the value of MmrVis_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrVis`](#structFRHAPI__StageUpdate_1a03ca6e72000a4740b696c76f25d69085)`() const` | Gets the value of MmrVis_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrVis`](#structFRHAPI__StageUpdate_1a61cf2e26c921d3157cc1c21b84418e93)`(const float & DefaultValue) const` | Gets the value of MmrVis_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMmrVis`](#structFRHAPI__StageUpdate_1ae8169ec61dd7143a5b7302f1ee79cbfb)`(float & OutValue) const` | Fills OutValue with the value of MmrVis_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMmrVisOrNull`](#structFRHAPI__StageUpdate_1a0767fe548456e890e28efad033c4db91)`()` | Returns a pointer to MmrVis_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMmrVisOrNull`](#structFRHAPI__StageUpdate_1a8f90cc8760ced74fb5c7e48c5fe1ecd9)`() const` | Returns a pointer to MmrVis_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMmrVis`](#structFRHAPI__StageUpdate_1a3cff44163922ece953d27ee6d51c16a9)`(const float & NewValue)` | Sets the value of MmrVis_Optional and also sets MmrVis_IsSet to true.
`public inline FORCEINLINE void `[`SetMmrVis`](#structFRHAPI__StageUpdate_1a5545aa0971e480985b5f3aa93b0be0f6)`(float && NewValue)` | Sets the value of MmrVis_Optional and also sets MmrVis_IsSet to true using move semantics.
`public inline void `[`ClearMmrVis`](#structFRHAPI__StageUpdate_1a5552c1604de21f4ebfcb8b581d84ae6b)`()` | Clears the value of MmrVis_Optional and sets MmrVis_IsSet to false.
`public inline FORCEINLINE void `[`SetMmrVisToNull`](#structFRHAPI__StageUpdate_1aba67f9e2d4d17d60a8a8de4002311aa2)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMmrVisNull`](#structFRHAPI__StageUpdate_1a2565b0f5ba671b8ce58cf1ece8e2fb10)`() const` | Checks whether MmrVis_Optional is set to null.

### Members

#### `public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`Blob_Optional`](#structFRHAPI__StageUpdate_1a2168a4a7a0f07f0f954d86e69645db7e) <a id="structFRHAPI__StageUpdate_1a2168a4a7a0f07f0f954d86e69645db7e"></a>

#### `public bool `[`Blob_IsSet`](#structFRHAPI__StageUpdate_1afa191ab193546fe467b19c45f9c2a033) <a id="structFRHAPI__StageUpdate_1afa191ab193546fe467b19c45f9c2a033"></a>

true if Blob_Optional has been set to a value

#### `public FString `[`GameVersion_Optional`](#structFRHAPI__StageUpdate_1aa0be8f8fe73b6508927b372ddd38195e) <a id="structFRHAPI__StageUpdate_1aa0be8f8fe73b6508927b372ddd38195e"></a>

#### `public bool `[`GameVersion_IsSet`](#structFRHAPI__StageUpdate_1aad7ced1822a76a70fc5f2b5943a2107d) <a id="structFRHAPI__StageUpdate_1aad7ced1822a76a70fc5f2b5943a2107d"></a>

true if GameVersion_Optional has been set to a value

#### `public bool `[`GameVersion_IsNull`](#structFRHAPI__StageUpdate_1a087fb393d3cb9bfc2adb5f73acba71f2) <a id="structFRHAPI__StageUpdate_1a087fb393d3cb9bfc2adb5f73acba71f2"></a>

true if GameVersion_Optional has been explicitly set to null

#### `public FString `[`V_Optional`](#structFRHAPI__StageUpdate_1adebf5336e3699dd596b82f6e88ace6b3) <a id="structFRHAPI__StageUpdate_1adebf5336e3699dd596b82f6e88ace6b3"></a>

#### `public bool `[`V_IsSet`](#structFRHAPI__StageUpdate_1a4539179a85f89f1bcc4a8879ce7590f0) <a id="structFRHAPI__StageUpdate_1a4539179a85f89f1bcc4a8879ce7590f0"></a>

true if V_Optional has been set to a value

#### `public bool `[`V_IsNull`](#structFRHAPI__StageUpdate_1aa518be870ce09e0bdf39d6b03c42f6dd) <a id="structFRHAPI__StageUpdate_1aa518be870ce09e0bdf39d6b03c42f6dd"></a>

true if V_Optional has been explicitly set to null

#### `public FString `[`Type1_Optional`](#structFRHAPI__StageUpdate_1ac29cffe930ca07c6297fa262a6a3c721) <a id="structFRHAPI__StageUpdate_1ac29cffe930ca07c6297fa262a6a3c721"></a>

#### `public bool `[`Type1_IsSet`](#structFRHAPI__StageUpdate_1ac0c30eaaedb33a76fc570182ec5e3f17) <a id="structFRHAPI__StageUpdate_1ac0c30eaaedb33a76fc570182ec5e3f17"></a>

true if Type1_Optional has been set to a value

#### `public bool `[`Type1_IsNull`](#structFRHAPI__StageUpdate_1a57c0e0813490e88c646c8f179fc73330) <a id="structFRHAPI__StageUpdate_1a57c0e0813490e88c646c8f179fc73330"></a>

true if Type1_Optional has been explicitly set to null

#### `public FString `[`Type2_Optional`](#structFRHAPI__StageUpdate_1a0cd9ed9d4ca33a5634388371dfb133d3) <a id="structFRHAPI__StageUpdate_1a0cd9ed9d4ca33a5634388371dfb133d3"></a>

#### `public bool `[`Type2_IsSet`](#structFRHAPI__StageUpdate_1ab8ae6f537b333ac3d39d45f59d3974f7) <a id="structFRHAPI__StageUpdate_1ab8ae6f537b333ac3d39d45f59d3974f7"></a>

true if Type2_Optional has been set to a value

#### `public bool `[`Type2_IsNull`](#structFRHAPI__StageUpdate_1aa1b3b90c5154bbf1417ece5002c63225) <a id="structFRHAPI__StageUpdate_1aa1b3b90c5154bbf1417ece5002c63225"></a>

true if Type2_Optional has been explicitly set to null

#### `public FString `[`Type3_Optional`](#structFRHAPI__StageUpdate_1ad18beeb2876d0688686739eacd996bf2) <a id="structFRHAPI__StageUpdate_1ad18beeb2876d0688686739eacd996bf2"></a>

#### `public bool `[`Type3_IsSet`](#structFRHAPI__StageUpdate_1ae898ffbf91df242307d731a8db36d1aa) <a id="structFRHAPI__StageUpdate_1ae898ffbf91df242307d731a8db36d1aa"></a>

true if Type3_Optional has been set to a value

#### `public bool `[`Type3_IsNull`](#structFRHAPI__StageUpdate_1a0b60058d847072686e749161a28d0e9a) <a id="structFRHAPI__StageUpdate_1a0b60058d847072686e749161a28d0e9a"></a>

true if Type3_Optional has been explicitly set to null

#### `public FString `[`Type4_Optional`](#structFRHAPI__StageUpdate_1a8c7b657bb90d0ddda665d9cfc4c4d948) <a id="structFRHAPI__StageUpdate_1a8c7b657bb90d0ddda665d9cfc4c4d948"></a>

#### `public bool `[`Type4_IsSet`](#structFRHAPI__StageUpdate_1a139990c889f6b7b12ef77f04fae08464) <a id="structFRHAPI__StageUpdate_1a139990c889f6b7b12ef77f04fae08464"></a>

true if Type4_Optional has been set to a value

#### `public bool `[`Type4_IsNull`](#structFRHAPI__StageUpdate_1a9d93202ba0788dbe67d9ea29e582acb1) <a id="structFRHAPI__StageUpdate_1a9d93202ba0788dbe67d9ea29e582acb1"></a>

true if Type4_Optional has been explicitly set to null

#### `public int32 `[`Index_Optional`](#structFRHAPI__StageUpdate_1a4b0f8878204dfa47950e72d4ae6d5e8c) <a id="structFRHAPI__StageUpdate_1a4b0f8878204dfa47950e72d4ae6d5e8c"></a>

Index of the stage relative to other stages in the match.

#### `public bool `[`Index_IsSet`](#structFRHAPI__StageUpdate_1a3ebac20eec118464b28a18410142e870) <a id="structFRHAPI__StageUpdate_1a3ebac20eec118464b28a18410142e870"></a>

true if Index_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__StageUpdate_1add42017a9548dd5ceb0e48b612d5b6fd) <a id="structFRHAPI__StageUpdate_1add42017a9548dd5ceb0e48b612d5b6fd"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__StageUpdate_1a92200cb6c805c648959e0e01bb66e968) <a id="structFRHAPI__StageUpdate_1a92200cb6c805c648959e0e01bb66e968"></a>

true if MatchId_Optional has been set to a value

#### `public bool `[`MatchId_IsNull`](#structFRHAPI__StageUpdate_1a546c33598ac49400eca52b255fbaa447) <a id="structFRHAPI__StageUpdate_1a546c33598ac49400eca52b255fbaa447"></a>

true if MatchId_Optional has been explicitly set to null

#### `public int32 `[`Stat1_Optional`](#structFRHAPI__StageUpdate_1a505d3f929bcc9a00cadb3be383b83d1d) <a id="structFRHAPI__StageUpdate_1a505d3f929bcc9a00cadb3be383b83d1d"></a>

#### `public bool `[`Stat1_IsSet`](#structFRHAPI__StageUpdate_1aa9209756ba27a1072c1a3f2f1362670f) <a id="structFRHAPI__StageUpdate_1aa9209756ba27a1072c1a3f2f1362670f"></a>

true if Stat1_Optional has been set to a value

#### `public bool `[`Stat1_IsNull`](#structFRHAPI__StageUpdate_1a4c3090bddaacc885aeaefd5af7bb655a) <a id="structFRHAPI__StageUpdate_1a4c3090bddaacc885aeaefd5af7bb655a"></a>

true if Stat1_Optional has been explicitly set to null

#### `public int32 `[`Stat2_Optional`](#structFRHAPI__StageUpdate_1a367d12dad8145188a23d5f0a59b644e7) <a id="structFRHAPI__StageUpdate_1a367d12dad8145188a23d5f0a59b644e7"></a>

#### `public bool `[`Stat2_IsSet`](#structFRHAPI__StageUpdate_1af4f6e2ecb3655a081fd02c3442fe4d89) <a id="structFRHAPI__StageUpdate_1af4f6e2ecb3655a081fd02c3442fe4d89"></a>

true if Stat2_Optional has been set to a value

#### `public bool `[`Stat2_IsNull`](#structFRHAPI__StageUpdate_1a885b1eb4eb5ac4059dba29b1c09fc355) <a id="structFRHAPI__StageUpdate_1a885b1eb4eb5ac4059dba29b1c09fc355"></a>

true if Stat2_Optional has been explicitly set to null

#### `public int32 `[`Stat3_Optional`](#structFRHAPI__StageUpdate_1a9fe5f30a4d664f79064d17f3d63b5053) <a id="structFRHAPI__StageUpdate_1a9fe5f30a4d664f79064d17f3d63b5053"></a>

#### `public bool `[`Stat3_IsSet`](#structFRHAPI__StageUpdate_1ad79493297305ab335b3119de8555cb1b) <a id="structFRHAPI__StageUpdate_1ad79493297305ab335b3119de8555cb1b"></a>

true if Stat3_Optional has been set to a value

#### `public bool `[`Stat3_IsNull`](#structFRHAPI__StageUpdate_1aee6c328230673e6bfaa83844577994d5) <a id="structFRHAPI__StageUpdate_1aee6c328230673e6bfaa83844577994d5"></a>

true if Stat3_Optional has been explicitly set to null

#### `public int32 `[`Stat4_Optional`](#structFRHAPI__StageUpdate_1a7fba65bcbb7104a82c0a0f0d3bbb844b) <a id="structFRHAPI__StageUpdate_1a7fba65bcbb7104a82c0a0f0d3bbb844b"></a>

#### `public bool `[`Stat4_IsSet`](#structFRHAPI__StageUpdate_1a74a2ca37431df89c4132777c63f44f65) <a id="structFRHAPI__StageUpdate_1a74a2ca37431df89c4132777c63f44f65"></a>

true if Stat4_Optional has been set to a value

#### `public bool `[`Stat4_IsNull`](#structFRHAPI__StageUpdate_1ae6df3b8c89c09fb9f2cda34db095c857) <a id="structFRHAPI__StageUpdate_1ae6df3b8c89c09fb9f2cda34db095c857"></a>

true if Stat4_Optional has been explicitly set to null

#### `public float `[`MmrInternal_Optional`](#structFRHAPI__StageUpdate_1afcbc73fa842ac0c8a2d2f70e7c2c9921) <a id="structFRHAPI__StageUpdate_1afcbc73fa842ac0c8a2d2f70e7c2c9921"></a>

#### `public bool `[`MmrInternal_IsSet`](#structFRHAPI__StageUpdate_1a65db15a71819875268cf7119b295bfe0) <a id="structFRHAPI__StageUpdate_1a65db15a71819875268cf7119b295bfe0"></a>

true if MmrInternal_Optional has been set to a value

#### `public bool `[`MmrInternal_IsNull`](#structFRHAPI__StageUpdate_1ac7924da09c3feef5d40563e162205cf2) <a id="structFRHAPI__StageUpdate_1ac7924da09c3feef5d40563e162205cf2"></a>

true if MmrInternal_Optional has been explicitly set to null

#### `public float `[`MmrVis_Optional`](#structFRHAPI__StageUpdate_1ac431c7871bad91fc70c32f0ab98fe5da) <a id="structFRHAPI__StageUpdate_1ac431c7871bad91fc70c32f0ab98fe5da"></a>

#### `public bool `[`MmrVis_IsSet`](#structFRHAPI__StageUpdate_1a3c5ab677cb562496430ffbbe91a46174) <a id="structFRHAPI__StageUpdate_1a3c5ab677cb562496430ffbbe91a46174"></a>

true if MmrVis_Optional has been set to a value

#### `public bool `[`MmrVis_IsNull`](#structFRHAPI__StageUpdate_1ab283b27e975d9bc0da7631df07bda957) <a id="structFRHAPI__StageUpdate_1ab283b27e975d9bc0da7631df07bda957"></a>

true if MmrVis_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__StageUpdate_1aa16f0a3f2e1d1af8069b0dc36a3c91cd)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__StageUpdate_1aa16f0a3f2e1d1af8069b0dc36a3c91cd"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__StageUpdate_1acf1bd842206eb9c490646b74be2b6abb)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__StageUpdate_1acf1bd842206eb9c490646b74be2b6abb"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageUpdate_1a5ff5ea09596574555d022f7c8cd27734)`()` <a id="structFRHAPI__StageUpdate_1a5ff5ea09596574555d022f7c8cd27734"></a>

Gets the value of Blob_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageUpdate_1a3e8847679d69894e147cb0b330548323)`() const` <a id="structFRHAPI__StageUpdate_1a3e8847679d69894e147cb0b330548323"></a>

Gets the value of Blob_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageUpdate_1a0dfaa8e13908456c01234b1ce28c225c)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1a0dfaa8e13908456c01234b1ce28c225c"></a>

Gets the value of Blob_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBlob`](#structFRHAPI__StageUpdate_1abab73fd7a4b64610b2b816fc7f44cbf3)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` <a id="structFRHAPI__StageUpdate_1abab73fd7a4b64610b2b816fc7f44cbf3"></a>

Fills OutValue with the value of Blob_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetBlobOrNull`](#structFRHAPI__StageUpdate_1a49ac00f89f6e99ae23230e1c8aa65e58)`()` <a id="structFRHAPI__StageUpdate_1a49ac00f89f6e99ae23230e1c8aa65e58"></a>

Returns a pointer to Blob_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetBlobOrNull`](#structFRHAPI__StageUpdate_1a806a29cf829800a204a3a1e374d91e6a)`() const` <a id="structFRHAPI__StageUpdate_1a806a29cf829800a204a3a1e374d91e6a"></a>

Returns a pointer to Blob_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBlob`](#structFRHAPI__StageUpdate_1a9c3de50593369873cc5c40320fa4ef9b)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` <a id="structFRHAPI__StageUpdate_1a9c3de50593369873cc5c40320fa4ef9b"></a>

Sets the value of Blob_Optional and also sets Blob_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBlob`](#structFRHAPI__StageUpdate_1a5c1d380ca5c6df471fd49cff2fb7559d)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` <a id="structFRHAPI__StageUpdate_1a5c1d380ca5c6df471fd49cff2fb7559d"></a>

Sets the value of Blob_Optional and also sets Blob_IsSet to true using move semantics.

#### `public inline void `[`ClearBlob`](#structFRHAPI__StageUpdate_1aab90b82a5ad29f10795acbdd48a689cb)`()` <a id="structFRHAPI__StageUpdate_1aab90b82a5ad29f10795acbdd48a689cb"></a>

Clears the value of Blob_Optional and sets Blob_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetGameVersion`](#structFRHAPI__StageUpdate_1ab518ff4e334501b5620e3b30b6d9eb5c)`()` <a id="structFRHAPI__StageUpdate_1ab518ff4e334501b5620e3b30b6d9eb5c"></a>

Gets the value of GameVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetGameVersion`](#structFRHAPI__StageUpdate_1a0445211313c11a393e2929f033b2c27e)`() const` <a id="structFRHAPI__StageUpdate_1a0445211313c11a393e2929f033b2c27e"></a>

Gets the value of GameVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetGameVersion`](#structFRHAPI__StageUpdate_1a79f1894f76691fd1f1e5f914edc452c5)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1a79f1894f76691fd1f1e5f914edc452c5"></a>

Gets the value of GameVersion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetGameVersion`](#structFRHAPI__StageUpdate_1a1e983b63ee6add0d68ce57167d900409)`(FString & OutValue) const` <a id="structFRHAPI__StageUpdate_1a1e983b63ee6add0d68ce57167d900409"></a>

Fills OutValue with the value of GameVersion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetGameVersionOrNull`](#structFRHAPI__StageUpdate_1aa5556003985df30b7a835ecd6a210606)`()` <a id="structFRHAPI__StageUpdate_1aa5556003985df30b7a835ecd6a210606"></a>

Returns a pointer to GameVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetGameVersionOrNull`](#structFRHAPI__StageUpdate_1a71ddd83a2dc1023ba337f3aef05f9a48)`() const` <a id="structFRHAPI__StageUpdate_1a71ddd83a2dc1023ba337f3aef05f9a48"></a>

Returns a pointer to GameVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__StageUpdate_1a011a4db9d8a8bd12eb4fab0a5a70949f)`(const FString & NewValue)` <a id="structFRHAPI__StageUpdate_1a011a4db9d8a8bd12eb4fab0a5a70949f"></a>

Sets the value of GameVersion_Optional and also sets GameVersion_IsSet to true.

#### `public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__StageUpdate_1a4d6c2d73c6dc66715d324d848babe57a)`(FString && NewValue)` <a id="structFRHAPI__StageUpdate_1a4d6c2d73c6dc66715d324d848babe57a"></a>

Sets the value of GameVersion_Optional and also sets GameVersion_IsSet to true using move semantics.

#### `public inline void `[`ClearGameVersion`](#structFRHAPI__StageUpdate_1a0e6fb62f53cf217e6c7e532da7b5c2e2)`()` <a id="structFRHAPI__StageUpdate_1a0e6fb62f53cf217e6c7e532da7b5c2e2"></a>

Clears the value of GameVersion_Optional and sets GameVersion_IsSet to false.

#### `public inline FORCEINLINE void `[`SetGameVersionToNull`](#structFRHAPI__StageUpdate_1a5230e7a2de6b613e6ba5706e8d45ea67)`()` <a id="structFRHAPI__StageUpdate_1a5230e7a2de6b613e6ba5706e8d45ea67"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsGameVersionNull`](#structFRHAPI__StageUpdate_1ac8943205e6b0464f9ad563ddee3c5282)`() const` <a id="structFRHAPI__StageUpdate_1ac8943205e6b0464f9ad563ddee3c5282"></a>

Checks whether GameVersion_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetV`](#structFRHAPI__StageUpdate_1a66f60180ea12ea2c694a7c10ce77eed8)`()` <a id="structFRHAPI__StageUpdate_1a66f60180ea12ea2c694a7c10ce77eed8"></a>

Gets the value of V_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageUpdate_1aef20505980f009c8a0c6245a89d0e1b7)`() const` <a id="structFRHAPI__StageUpdate_1aef20505980f009c8a0c6245a89d0e1b7"></a>

Gets the value of V_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageUpdate_1af03abc29869f6a660b5b84c24fcea9dc)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1af03abc29869f6a660b5b84c24fcea9dc"></a>

Gets the value of V_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetV`](#structFRHAPI__StageUpdate_1a306e05e631d8f60d1864b8e56180235d)`(FString & OutValue) const` <a id="structFRHAPI__StageUpdate_1a306e05e631d8f60d1864b8e56180235d"></a>

Fills OutValue with the value of V_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVOrNull`](#structFRHAPI__StageUpdate_1a52d753ce0c6263db84ef1c42db9543e9)`()` <a id="structFRHAPI__StageUpdate_1a52d753ce0c6263db84ef1c42db9543e9"></a>

Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVOrNull`](#structFRHAPI__StageUpdate_1a28e04befefb5b28a540910da6c900e36)`() const` <a id="structFRHAPI__StageUpdate_1a28e04befefb5b28a540910da6c900e36"></a>

Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageUpdate_1a073acfeda336dfcd8225eaf98fcb6f00)`(const FString & NewValue)` <a id="structFRHAPI__StageUpdate_1a073acfeda336dfcd8225eaf98fcb6f00"></a>

Sets the value of V_Optional and also sets V_IsSet to true.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageUpdate_1a067657bda39bd6cd0a8f6bbf34b0abce)`(FString && NewValue)` <a id="structFRHAPI__StageUpdate_1a067657bda39bd6cd0a8f6bbf34b0abce"></a>

Sets the value of V_Optional and also sets V_IsSet to true using move semantics.

#### `public inline void `[`ClearV`](#structFRHAPI__StageUpdate_1aa9b290619b5e8623b71be2399daa0e61)`()` <a id="structFRHAPI__StageUpdate_1aa9b290619b5e8623b71be2399daa0e61"></a>

Clears the value of V_Optional and sets V_IsSet to false.

#### `public inline FORCEINLINE void `[`SetVToNull`](#structFRHAPI__StageUpdate_1affeb2ac4c8d73ad97c890bbbd1cba257)`()` <a id="structFRHAPI__StageUpdate_1affeb2ac4c8d73ad97c890bbbd1cba257"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVNull`](#structFRHAPI__StageUpdate_1abe6f82ae4708cae330573886a8db137a)`() const` <a id="structFRHAPI__StageUpdate_1abe6f82ae4708cae330573886a8db137a"></a>

Checks whether V_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType1`](#structFRHAPI__StageUpdate_1a52166627645846a8eb7f2c5d73c258cc)`()` <a id="structFRHAPI__StageUpdate_1a52166627645846a8eb7f2c5d73c258cc"></a>

Gets the value of Type1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageUpdate_1abfd8f98e21c0349c93a4ee36684dfbbc)`() const` <a id="structFRHAPI__StageUpdate_1abfd8f98e21c0349c93a4ee36684dfbbc"></a>

Gets the value of Type1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageUpdate_1a18ded579b48dbdfe3df7a888b9419575)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1a18ded579b48dbdfe3df7a888b9419575"></a>

Gets the value of Type1_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType1`](#structFRHAPI__StageUpdate_1a70cfbd6cbafcb3d978b0f7b8ac2ce2b3)`(FString & OutValue) const` <a id="structFRHAPI__StageUpdate_1a70cfbd6cbafcb3d978b0f7b8ac2ce2b3"></a>

Fills OutValue with the value of Type1_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType1OrNull`](#structFRHAPI__StageUpdate_1a10ecace3963d3536d7b8a34870ef5375)`()` <a id="structFRHAPI__StageUpdate_1a10ecace3963d3536d7b8a34870ef5375"></a>

Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType1OrNull`](#structFRHAPI__StageUpdate_1a5c7573e9480c936fba40ce01bfbd1554)`() const` <a id="structFRHAPI__StageUpdate_1a5c7573e9480c936fba40ce01bfbd1554"></a>

Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageUpdate_1a0077a201190ba491b5006661efc075a5)`(const FString & NewValue)` <a id="structFRHAPI__StageUpdate_1a0077a201190ba491b5006661efc075a5"></a>

Sets the value of Type1_Optional and also sets Type1_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageUpdate_1a6f0544db269f9e164667e84828f43d3b)`(FString && NewValue)` <a id="structFRHAPI__StageUpdate_1a6f0544db269f9e164667e84828f43d3b"></a>

Sets the value of Type1_Optional and also sets Type1_IsSet to true using move semantics.

#### `public inline void `[`ClearType1`](#structFRHAPI__StageUpdate_1ad2439ce40044110c49c8a1874a399142)`()` <a id="structFRHAPI__StageUpdate_1ad2439ce40044110c49c8a1874a399142"></a>

Clears the value of Type1_Optional and sets Type1_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType1ToNull`](#structFRHAPI__StageUpdate_1a54de24b15fc3477936f0c94f0e2d3f1e)`()` <a id="structFRHAPI__StageUpdate_1a54de24b15fc3477936f0c94f0e2d3f1e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType1Null`](#structFRHAPI__StageUpdate_1a467c046569ef8be762afb5e4b271ba7e)`() const` <a id="structFRHAPI__StageUpdate_1a467c046569ef8be762afb5e4b271ba7e"></a>

Checks whether Type1_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType2`](#structFRHAPI__StageUpdate_1aa90f61fd0560f4c7198e18fd6c28fbd3)`()` <a id="structFRHAPI__StageUpdate_1aa90f61fd0560f4c7198e18fd6c28fbd3"></a>

Gets the value of Type2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageUpdate_1a37406540268dc2efd43a339f561436af)`() const` <a id="structFRHAPI__StageUpdate_1a37406540268dc2efd43a339f561436af"></a>

Gets the value of Type2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageUpdate_1ad71b088888be42300b875c6d4f63d2d1)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1ad71b088888be42300b875c6d4f63d2d1"></a>

Gets the value of Type2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType2`](#structFRHAPI__StageUpdate_1a2bbc1d2b004e569b3e445dce478c27d7)`(FString & OutValue) const` <a id="structFRHAPI__StageUpdate_1a2bbc1d2b004e569b3e445dce478c27d7"></a>

Fills OutValue with the value of Type2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType2OrNull`](#structFRHAPI__StageUpdate_1ae0de0b5657449f29ddb24cd3d219448b)`()` <a id="structFRHAPI__StageUpdate_1ae0de0b5657449f29ddb24cd3d219448b"></a>

Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType2OrNull`](#structFRHAPI__StageUpdate_1ae9d40c7bff1d76e442414fe6b2b44741)`() const` <a id="structFRHAPI__StageUpdate_1ae9d40c7bff1d76e442414fe6b2b44741"></a>

Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageUpdate_1a5c97b75237521aecd5efc4dde5316d46)`(const FString & NewValue)` <a id="structFRHAPI__StageUpdate_1a5c97b75237521aecd5efc4dde5316d46"></a>

Sets the value of Type2_Optional and also sets Type2_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageUpdate_1a348d676df618f194e5402919ab2e7887)`(FString && NewValue)` <a id="structFRHAPI__StageUpdate_1a348d676df618f194e5402919ab2e7887"></a>

Sets the value of Type2_Optional and also sets Type2_IsSet to true using move semantics.

#### `public inline void `[`ClearType2`](#structFRHAPI__StageUpdate_1a171b94d826c4376b6a33f03e7d3c4883)`()` <a id="structFRHAPI__StageUpdate_1a171b94d826c4376b6a33f03e7d3c4883"></a>

Clears the value of Type2_Optional and sets Type2_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType2ToNull`](#structFRHAPI__StageUpdate_1a3000cf9bddfb21b7c563f97174bd73ab)`()` <a id="structFRHAPI__StageUpdate_1a3000cf9bddfb21b7c563f97174bd73ab"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType2Null`](#structFRHAPI__StageUpdate_1ab7d4d16fcdf1d5de1bb1cbd37019e4a8)`() const` <a id="structFRHAPI__StageUpdate_1ab7d4d16fcdf1d5de1bb1cbd37019e4a8"></a>

Checks whether Type2_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType3`](#structFRHAPI__StageUpdate_1aa2845fa125af05ac6c21140b1337fbce)`()` <a id="structFRHAPI__StageUpdate_1aa2845fa125af05ac6c21140b1337fbce"></a>

Gets the value of Type3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageUpdate_1af60192b79d7e32122a06d1449613652a)`() const` <a id="structFRHAPI__StageUpdate_1af60192b79d7e32122a06d1449613652a"></a>

Gets the value of Type3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageUpdate_1acd5d8d2cc2e642286ec4e090f93fe950)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1acd5d8d2cc2e642286ec4e090f93fe950"></a>

Gets the value of Type3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType3`](#structFRHAPI__StageUpdate_1ac295d9863f31f9bab4f610b1b1d7b4de)`(FString & OutValue) const` <a id="structFRHAPI__StageUpdate_1ac295d9863f31f9bab4f610b1b1d7b4de"></a>

Fills OutValue with the value of Type3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType3OrNull`](#structFRHAPI__StageUpdate_1a432c109519ef752a2ba284dd8d6e076d)`()` <a id="structFRHAPI__StageUpdate_1a432c109519ef752a2ba284dd8d6e076d"></a>

Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType3OrNull`](#structFRHAPI__StageUpdate_1a6d03dda9de554e41c469152ed7babb68)`() const` <a id="structFRHAPI__StageUpdate_1a6d03dda9de554e41c469152ed7babb68"></a>

Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageUpdate_1a57f342ba2b5f73a5d59579a097c954e0)`(const FString & NewValue)` <a id="structFRHAPI__StageUpdate_1a57f342ba2b5f73a5d59579a097c954e0"></a>

Sets the value of Type3_Optional and also sets Type3_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageUpdate_1a6d17e9387c5240ffa55f49d42d58fbba)`(FString && NewValue)` <a id="structFRHAPI__StageUpdate_1a6d17e9387c5240ffa55f49d42d58fbba"></a>

Sets the value of Type3_Optional and also sets Type3_IsSet to true using move semantics.

#### `public inline void `[`ClearType3`](#structFRHAPI__StageUpdate_1a11dc5de6a9b9138fb01ff5e26de54489)`()` <a id="structFRHAPI__StageUpdate_1a11dc5de6a9b9138fb01ff5e26de54489"></a>

Clears the value of Type3_Optional and sets Type3_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType3ToNull`](#structFRHAPI__StageUpdate_1a9cd1aa6e05af1cadc806b7603184ac05)`()` <a id="structFRHAPI__StageUpdate_1a9cd1aa6e05af1cadc806b7603184ac05"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType3Null`](#structFRHAPI__StageUpdate_1a9bc6d9c0c55d0779cf90095804abd889)`() const` <a id="structFRHAPI__StageUpdate_1a9bc6d9c0c55d0779cf90095804abd889"></a>

Checks whether Type3_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType4`](#structFRHAPI__StageUpdate_1a8a9c6f21cac8d7b9b09b6ab10960f3b7)`()` <a id="structFRHAPI__StageUpdate_1a8a9c6f21cac8d7b9b09b6ab10960f3b7"></a>

Gets the value of Type4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageUpdate_1a1d422aad79234ae541a0a95481ba7063)`() const` <a id="structFRHAPI__StageUpdate_1a1d422aad79234ae541a0a95481ba7063"></a>

Gets the value of Type4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageUpdate_1af2e341a0bc9901809408e12b6bec55fb)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1af2e341a0bc9901809408e12b6bec55fb"></a>

Gets the value of Type4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType4`](#structFRHAPI__StageUpdate_1a13ef77855fed0d93c775d756bc7f971d)`(FString & OutValue) const` <a id="structFRHAPI__StageUpdate_1a13ef77855fed0d93c775d756bc7f971d"></a>

Fills OutValue with the value of Type4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType4OrNull`](#structFRHAPI__StageUpdate_1af1e0ef9bf6d29ca54bc59af37874cfb3)`()` <a id="structFRHAPI__StageUpdate_1af1e0ef9bf6d29ca54bc59af37874cfb3"></a>

Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType4OrNull`](#structFRHAPI__StageUpdate_1aeb15af714c593c353485c6228663c607)`() const` <a id="structFRHAPI__StageUpdate_1aeb15af714c593c353485c6228663c607"></a>

Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageUpdate_1a44d532af409ffb4dd4e22f471feb599c)`(const FString & NewValue)` <a id="structFRHAPI__StageUpdate_1a44d532af409ffb4dd4e22f471feb599c"></a>

Sets the value of Type4_Optional and also sets Type4_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageUpdate_1acda0ad936a048e1c6659c50e008bfe33)`(FString && NewValue)` <a id="structFRHAPI__StageUpdate_1acda0ad936a048e1c6659c50e008bfe33"></a>

Sets the value of Type4_Optional and also sets Type4_IsSet to true using move semantics.

#### `public inline void `[`ClearType4`](#structFRHAPI__StageUpdate_1a9b142fd2ddfe4697e55e3266009c9ff7)`()` <a id="structFRHAPI__StageUpdate_1a9b142fd2ddfe4697e55e3266009c9ff7"></a>

Clears the value of Type4_Optional and sets Type4_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType4ToNull`](#structFRHAPI__StageUpdate_1a317a93efa0c716541fd396f81285059d)`()` <a id="structFRHAPI__StageUpdate_1a317a93efa0c716541fd396f81285059d"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType4Null`](#structFRHAPI__StageUpdate_1a706e55020b484199457eb828fe55e522)`() const` <a id="structFRHAPI__StageUpdate_1a706e55020b484199457eb828fe55e522"></a>

Checks whether Type4_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetIndex`](#structFRHAPI__StageUpdate_1a68393661dbf27289dff09d8d4f4c78d3)`()` <a id="structFRHAPI__StageUpdate_1a68393661dbf27289dff09d8d4f4c78d3"></a>

Gets the value of Index_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageUpdate_1a366980581865f97e32fe66eefc822cf7)`() const` <a id="structFRHAPI__StageUpdate_1a366980581865f97e32fe66eefc822cf7"></a>

Gets the value of Index_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageUpdate_1ab4e9a12da83fc8c2a4c11bfcc426b6a1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1ab4e9a12da83fc8c2a4c11bfcc426b6a1"></a>

Gets the value of Index_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIndex`](#structFRHAPI__StageUpdate_1a8b849ce448938c0c912fc713ee28ed20)`(int32 & OutValue) const` <a id="structFRHAPI__StageUpdate_1a8b849ce448938c0c912fc713ee28ed20"></a>

Fills OutValue with the value of Index_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetIndexOrNull`](#structFRHAPI__StageUpdate_1a1ffb7dd889e5aab2a79b347be737333c)`()` <a id="structFRHAPI__StageUpdate_1a1ffb7dd889e5aab2a79b347be737333c"></a>

Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetIndexOrNull`](#structFRHAPI__StageUpdate_1a4acd627fd40bf73032e02ac53e2eb097)`() const` <a id="structFRHAPI__StageUpdate_1a4acd627fd40bf73032e02ac53e2eb097"></a>

Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageUpdate_1a23bdd02710acfb7b6324c5045679df9e)`(const int32 & NewValue)` <a id="structFRHAPI__StageUpdate_1a23bdd02710acfb7b6324c5045679df9e"></a>

Sets the value of Index_Optional and also sets Index_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageUpdate_1a9230b1ef89248d7d1dc9be68c53ac2fb)`(int32 && NewValue)` <a id="structFRHAPI__StageUpdate_1a9230b1ef89248d7d1dc9be68c53ac2fb"></a>

Sets the value of Index_Optional and also sets Index_IsSet to true using move semantics.

#### `public inline void `[`ClearIndex`](#structFRHAPI__StageUpdate_1a16882973ed1da5fde23a9bbc357606af)`()` <a id="structFRHAPI__StageUpdate_1a16882973ed1da5fde23a9bbc357606af"></a>

Clears the value of Index_Optional and sets Index_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Index`](#structFRHAPI__StageUpdate_1a95b1c127f1df48509d2be20ef9c4886c)`()` <a id="structFRHAPI__StageUpdate_1a95b1c127f1df48509d2be20ef9c4886c"></a>

Returns the default value of Index.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__StageUpdate_1abd820163c291d741327263780f52f8e8)`()` <a id="structFRHAPI__StageUpdate_1abd820163c291d741327263780f52f8e8"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__StageUpdate_1a67bf8655624730c29b7646215f01012e)`() const` <a id="structFRHAPI__StageUpdate_1a67bf8655624730c29b7646215f01012e"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__StageUpdate_1a7d4edc1e0007cd80a0fdebc08f6eb2eb)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1a7d4edc1e0007cd80a0fdebc08f6eb2eb"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__StageUpdate_1aa41dbcd851f76142da626375d647d7ce)`(FString & OutValue) const` <a id="structFRHAPI__StageUpdate_1aa41dbcd851f76142da626375d647d7ce"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__StageUpdate_1afab5745c739be9e1e09c30e1b389403c)`()` <a id="structFRHAPI__StageUpdate_1afab5745c739be9e1e09c30e1b389403c"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__StageUpdate_1a137ceb868f072bc6568e88397fb24573)`() const` <a id="structFRHAPI__StageUpdate_1a137ceb868f072bc6568e88397fb24573"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__StageUpdate_1a35826788bd57e1988acc8094b17ad77d)`(const FString & NewValue)` <a id="structFRHAPI__StageUpdate_1a35826788bd57e1988acc8094b17ad77d"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__StageUpdate_1aa07fe0e55e3c4941c711d3c35695ba48)`(FString && NewValue)` <a id="structFRHAPI__StageUpdate_1aa07fe0e55e3c4941c711d3c35695ba48"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__StageUpdate_1af7541cbe0cf776fdfb79e721595cfba7)`()` <a id="structFRHAPI__StageUpdate_1af7541cbe0cf776fdfb79e721595cfba7"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__StageUpdate_1ab111f9573472554a12d567e3f96bcc8f)`()` <a id="structFRHAPI__StageUpdate_1ab111f9573472554a12d567e3f96bcc8f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__StageUpdate_1abd471267fc55bbc58ca461e05f620c14)`() const` <a id="structFRHAPI__StageUpdate_1abd471267fc55bbc58ca461e05f620c14"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetStat1`](#structFRHAPI__StageUpdate_1a6cec3cb61139c0286aae95d372072034)`()` <a id="structFRHAPI__StageUpdate_1a6cec3cb61139c0286aae95d372072034"></a>

Gets the value of Stat1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat1`](#structFRHAPI__StageUpdate_1aea0e518cee509586a5a59a2b899d4545)`() const` <a id="structFRHAPI__StageUpdate_1aea0e518cee509586a5a59a2b899d4545"></a>

Gets the value of Stat1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat1`](#structFRHAPI__StageUpdate_1a071547689e64e32a686496f941045e8a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1a071547689e64e32a686496f941045e8a"></a>

Gets the value of Stat1_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStat1`](#structFRHAPI__StageUpdate_1a646e5e9d72c398dd4eb5a99832b99005)`(int32 & OutValue) const` <a id="structFRHAPI__StageUpdate_1a646e5e9d72c398dd4eb5a99832b99005"></a>

Fills OutValue with the value of Stat1_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStat1OrNull`](#structFRHAPI__StageUpdate_1aa4c316342f53c465b8c53f7efc7115d1)`()` <a id="structFRHAPI__StageUpdate_1aa4c316342f53c465b8c53f7efc7115d1"></a>

Returns a pointer to Stat1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStat1OrNull`](#structFRHAPI__StageUpdate_1a0722c88df7b13388a2195d1040dd30f4)`() const` <a id="structFRHAPI__StageUpdate_1a0722c88df7b13388a2195d1040dd30f4"></a>

Returns a pointer to Stat1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStat1`](#structFRHAPI__StageUpdate_1a2c3e71563fbc6d66e9ad72a15378bb0e)`(const int32 & NewValue)` <a id="structFRHAPI__StageUpdate_1a2c3e71563fbc6d66e9ad72a15378bb0e"></a>

Sets the value of Stat1_Optional and also sets Stat1_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStat1`](#structFRHAPI__StageUpdate_1aee3fdda85c815f7eda2e58a76a71a441)`(int32 && NewValue)` <a id="structFRHAPI__StageUpdate_1aee3fdda85c815f7eda2e58a76a71a441"></a>

Sets the value of Stat1_Optional and also sets Stat1_IsSet to true using move semantics.

#### `public inline void `[`ClearStat1`](#structFRHAPI__StageUpdate_1a0e54dac6747577272726abfdf4909195)`()` <a id="structFRHAPI__StageUpdate_1a0e54dac6747577272726abfdf4909195"></a>

Clears the value of Stat1_Optional and sets Stat1_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Stat1`](#structFRHAPI__StageUpdate_1af1225e117f5b59681c0d256e5d825603)`()` <a id="structFRHAPI__StageUpdate_1af1225e117f5b59681c0d256e5d825603"></a>

Returns the default value of Stat1.

#### `public inline FORCEINLINE void `[`SetStat1ToNull`](#structFRHAPI__StageUpdate_1a11ab1260e67ff1528f75bff7a86722f0)`()` <a id="structFRHAPI__StageUpdate_1a11ab1260e67ff1528f75bff7a86722f0"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStat1Null`](#structFRHAPI__StageUpdate_1aa59c0eb239f8b9a93ae61890b00f766c)`() const` <a id="structFRHAPI__StageUpdate_1aa59c0eb239f8b9a93ae61890b00f766c"></a>

Checks whether Stat1_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetStat2`](#structFRHAPI__StageUpdate_1a07a08b2bc4f8521b2b467ae38895e2de)`()` <a id="structFRHAPI__StageUpdate_1a07a08b2bc4f8521b2b467ae38895e2de"></a>

Gets the value of Stat2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat2`](#structFRHAPI__StageUpdate_1ac52cf250e6c3b9a53ba1726b7e8c118f)`() const` <a id="structFRHAPI__StageUpdate_1ac52cf250e6c3b9a53ba1726b7e8c118f"></a>

Gets the value of Stat2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat2`](#structFRHAPI__StageUpdate_1a706ab24584296d6a251654d85865ca5b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1a706ab24584296d6a251654d85865ca5b"></a>

Gets the value of Stat2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStat2`](#structFRHAPI__StageUpdate_1a4d9d6b65581237e8f9a881acbffb38d0)`(int32 & OutValue) const` <a id="structFRHAPI__StageUpdate_1a4d9d6b65581237e8f9a881acbffb38d0"></a>

Fills OutValue with the value of Stat2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStat2OrNull`](#structFRHAPI__StageUpdate_1ad35ff510561b491ae3e3030d5c82ef11)`()` <a id="structFRHAPI__StageUpdate_1ad35ff510561b491ae3e3030d5c82ef11"></a>

Returns a pointer to Stat2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStat2OrNull`](#structFRHAPI__StageUpdate_1af167f0f24f9719db4379128cb7177b90)`() const` <a id="structFRHAPI__StageUpdate_1af167f0f24f9719db4379128cb7177b90"></a>

Returns a pointer to Stat2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStat2`](#structFRHAPI__StageUpdate_1a33581c56505a0b20c5568cd2e13ac6bc)`(const int32 & NewValue)` <a id="structFRHAPI__StageUpdate_1a33581c56505a0b20c5568cd2e13ac6bc"></a>

Sets the value of Stat2_Optional and also sets Stat2_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStat2`](#structFRHAPI__StageUpdate_1a4488e8abc3ce87a877fcbec595cf390b)`(int32 && NewValue)` <a id="structFRHAPI__StageUpdate_1a4488e8abc3ce87a877fcbec595cf390b"></a>

Sets the value of Stat2_Optional and also sets Stat2_IsSet to true using move semantics.

#### `public inline void `[`ClearStat2`](#structFRHAPI__StageUpdate_1a86ecb0b06f7585c6875570b3a643506a)`()` <a id="structFRHAPI__StageUpdate_1a86ecb0b06f7585c6875570b3a643506a"></a>

Clears the value of Stat2_Optional and sets Stat2_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Stat2`](#structFRHAPI__StageUpdate_1ac4d233a26fc7f214791f2c4035e0c9d8)`()` <a id="structFRHAPI__StageUpdate_1ac4d233a26fc7f214791f2c4035e0c9d8"></a>

Returns the default value of Stat2.

#### `public inline FORCEINLINE void `[`SetStat2ToNull`](#structFRHAPI__StageUpdate_1a3f20a8613028e72665bb57b8c268842e)`()` <a id="structFRHAPI__StageUpdate_1a3f20a8613028e72665bb57b8c268842e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStat2Null`](#structFRHAPI__StageUpdate_1ac3a8d576770929c7142bae6648dc56ce)`() const` <a id="structFRHAPI__StageUpdate_1ac3a8d576770929c7142bae6648dc56ce"></a>

Checks whether Stat2_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetStat3`](#structFRHAPI__StageUpdate_1a05a54446718469841f74c30922ee68d3)`()` <a id="structFRHAPI__StageUpdate_1a05a54446718469841f74c30922ee68d3"></a>

Gets the value of Stat3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat3`](#structFRHAPI__StageUpdate_1a831cceafe9f49d434e19530037d4a5ac)`() const` <a id="structFRHAPI__StageUpdate_1a831cceafe9f49d434e19530037d4a5ac"></a>

Gets the value of Stat3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat3`](#structFRHAPI__StageUpdate_1a5146c6eb26dc6f4d14075ba1e8ee6989)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1a5146c6eb26dc6f4d14075ba1e8ee6989"></a>

Gets the value of Stat3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStat3`](#structFRHAPI__StageUpdate_1a6c1ebb3c86b881fd1c683ef7bf29e4a5)`(int32 & OutValue) const` <a id="structFRHAPI__StageUpdate_1a6c1ebb3c86b881fd1c683ef7bf29e4a5"></a>

Fills OutValue with the value of Stat3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStat3OrNull`](#structFRHAPI__StageUpdate_1a80542b33ab48cde9c1f6e3805e250258)`()` <a id="structFRHAPI__StageUpdate_1a80542b33ab48cde9c1f6e3805e250258"></a>

Returns a pointer to Stat3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStat3OrNull`](#structFRHAPI__StageUpdate_1a2fead8e71681adff164e648d49ebb69a)`() const` <a id="structFRHAPI__StageUpdate_1a2fead8e71681adff164e648d49ebb69a"></a>

Returns a pointer to Stat3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStat3`](#structFRHAPI__StageUpdate_1a0e86894111ff4a206b4d918be56559cd)`(const int32 & NewValue)` <a id="structFRHAPI__StageUpdate_1a0e86894111ff4a206b4d918be56559cd"></a>

Sets the value of Stat3_Optional and also sets Stat3_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStat3`](#structFRHAPI__StageUpdate_1a9e55cdfaf295f3d0f7c6bb8e2ef064f2)`(int32 && NewValue)` <a id="structFRHAPI__StageUpdate_1a9e55cdfaf295f3d0f7c6bb8e2ef064f2"></a>

Sets the value of Stat3_Optional and also sets Stat3_IsSet to true using move semantics.

#### `public inline void `[`ClearStat3`](#structFRHAPI__StageUpdate_1a77142d6217ede4b58a1ab812acb0e531)`()` <a id="structFRHAPI__StageUpdate_1a77142d6217ede4b58a1ab812acb0e531"></a>

Clears the value of Stat3_Optional and sets Stat3_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Stat3`](#structFRHAPI__StageUpdate_1ac61ccb3a2360f55ab1b8ea14618e5b04)`()` <a id="structFRHAPI__StageUpdate_1ac61ccb3a2360f55ab1b8ea14618e5b04"></a>

Returns the default value of Stat3.

#### `public inline FORCEINLINE void `[`SetStat3ToNull`](#structFRHAPI__StageUpdate_1add1c9dec1b5ac02b3ab0ccb14194bfc7)`()` <a id="structFRHAPI__StageUpdate_1add1c9dec1b5ac02b3ab0ccb14194bfc7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStat3Null`](#structFRHAPI__StageUpdate_1a118c429ff64ddc6918dcdadd0dbb57d4)`() const` <a id="structFRHAPI__StageUpdate_1a118c429ff64ddc6918dcdadd0dbb57d4"></a>

Checks whether Stat3_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetStat4`](#structFRHAPI__StageUpdate_1a9f2b4973b597119e3aafa744b4c0b28b)`()` <a id="structFRHAPI__StageUpdate_1a9f2b4973b597119e3aafa744b4c0b28b"></a>

Gets the value of Stat4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat4`](#structFRHAPI__StageUpdate_1a2e8c4d75127f7324375f8d86928f0c73)`() const` <a id="structFRHAPI__StageUpdate_1a2e8c4d75127f7324375f8d86928f0c73"></a>

Gets the value of Stat4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat4`](#structFRHAPI__StageUpdate_1aed390fb176e2a0d5807dfb08e6f5cd42)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1aed390fb176e2a0d5807dfb08e6f5cd42"></a>

Gets the value of Stat4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStat4`](#structFRHAPI__StageUpdate_1a0c3cad85ff56a91d4e71fe136106d597)`(int32 & OutValue) const` <a id="structFRHAPI__StageUpdate_1a0c3cad85ff56a91d4e71fe136106d597"></a>

Fills OutValue with the value of Stat4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStat4OrNull`](#structFRHAPI__StageUpdate_1ac867d1b0a094f2e83a8925767bccccba)`()` <a id="structFRHAPI__StageUpdate_1ac867d1b0a094f2e83a8925767bccccba"></a>

Returns a pointer to Stat4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStat4OrNull`](#structFRHAPI__StageUpdate_1a47a91f37ef03cae62d4e7a78e131a18b)`() const` <a id="structFRHAPI__StageUpdate_1a47a91f37ef03cae62d4e7a78e131a18b"></a>

Returns a pointer to Stat4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStat4`](#structFRHAPI__StageUpdate_1a5db56c8a74098e3df2c712beb72e66a5)`(const int32 & NewValue)` <a id="structFRHAPI__StageUpdate_1a5db56c8a74098e3df2c712beb72e66a5"></a>

Sets the value of Stat4_Optional and also sets Stat4_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStat4`](#structFRHAPI__StageUpdate_1acdd4d865cf121966b9c247805318a7a4)`(int32 && NewValue)` <a id="structFRHAPI__StageUpdate_1acdd4d865cf121966b9c247805318a7a4"></a>

Sets the value of Stat4_Optional and also sets Stat4_IsSet to true using move semantics.

#### `public inline void `[`ClearStat4`](#structFRHAPI__StageUpdate_1aec013aa71d96ab7f0629c48a640097c3)`()` <a id="structFRHAPI__StageUpdate_1aec013aa71d96ab7f0629c48a640097c3"></a>

Clears the value of Stat4_Optional and sets Stat4_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Stat4`](#structFRHAPI__StageUpdate_1a95c560c3b0b6427db9cecfd8b42ccdfd)`()` <a id="structFRHAPI__StageUpdate_1a95c560c3b0b6427db9cecfd8b42ccdfd"></a>

Returns the default value of Stat4.

#### `public inline FORCEINLINE void `[`SetStat4ToNull`](#structFRHAPI__StageUpdate_1a39815ea207f621218ab952bd7f31134b)`()` <a id="structFRHAPI__StageUpdate_1a39815ea207f621218ab952bd7f31134b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStat4Null`](#structFRHAPI__StageUpdate_1ab91441ffd2c0c0a876b2a3963d22ea09)`() const` <a id="structFRHAPI__StageUpdate_1ab91441ffd2c0c0a876b2a3963d22ea09"></a>

Checks whether Stat4_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMmrInternal`](#structFRHAPI__StageUpdate_1a156ad0a36648d0e89afb5d5377f40bf7)`()` <a id="structFRHAPI__StageUpdate_1a156ad0a36648d0e89afb5d5377f40bf7"></a>

Gets the value of MmrInternal_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternal`](#structFRHAPI__StageUpdate_1aaeca0835dc765b6f62e6c2934cffd6db)`() const` <a id="structFRHAPI__StageUpdate_1aaeca0835dc765b6f62e6c2934cffd6db"></a>

Gets the value of MmrInternal_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternal`](#structFRHAPI__StageUpdate_1a4cc988d9d631c89dc31fe3c231c23a31)`(const float & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1a4cc988d9d631c89dc31fe3c231c23a31"></a>

Gets the value of MmrInternal_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMmrInternal`](#structFRHAPI__StageUpdate_1a90cf5abb684840c7b67addc23c755a8b)`(float & OutValue) const` <a id="structFRHAPI__StageUpdate_1a90cf5abb684840c7b67addc23c755a8b"></a>

Fills OutValue with the value of MmrInternal_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMmrInternalOrNull`](#structFRHAPI__StageUpdate_1abe7f5059ada4fbb54298ee7cbddffcde)`()` <a id="structFRHAPI__StageUpdate_1abe7f5059ada4fbb54298ee7cbddffcde"></a>

Returns a pointer to MmrInternal_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMmrInternalOrNull`](#structFRHAPI__StageUpdate_1addc4fb87a959d0564ffd246b9af59a10)`() const` <a id="structFRHAPI__StageUpdate_1addc4fb87a959d0564ffd246b9af59a10"></a>

Returns a pointer to MmrInternal_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMmrInternal`](#structFRHAPI__StageUpdate_1acbcac373250b454213a76243fdd9af05)`(const float & NewValue)` <a id="structFRHAPI__StageUpdate_1acbcac373250b454213a76243fdd9af05"></a>

Sets the value of MmrInternal_Optional and also sets MmrInternal_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMmrInternal`](#structFRHAPI__StageUpdate_1ab66845eb3ef4351c96bae76d4a7a2eb7)`(float && NewValue)` <a id="structFRHAPI__StageUpdate_1ab66845eb3ef4351c96bae76d4a7a2eb7"></a>

Sets the value of MmrInternal_Optional and also sets MmrInternal_IsSet to true using move semantics.

#### `public inline void `[`ClearMmrInternal`](#structFRHAPI__StageUpdate_1a346a6214b4f95c06d357ea57e2e28417)`()` <a id="structFRHAPI__StageUpdate_1a346a6214b4f95c06d357ea57e2e28417"></a>

Clears the value of MmrInternal_Optional and sets MmrInternal_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMmrInternalToNull`](#structFRHAPI__StageUpdate_1ab7467a4b65a59dbbcfcf53b126c9f51e)`()` <a id="structFRHAPI__StageUpdate_1ab7467a4b65a59dbbcfcf53b126c9f51e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMmrInternalNull`](#structFRHAPI__StageUpdate_1a293fe454f6376c5fd406ef619822f1b6)`() const` <a id="structFRHAPI__StageUpdate_1a293fe454f6376c5fd406ef619822f1b6"></a>

Checks whether MmrInternal_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMmrVis`](#structFRHAPI__StageUpdate_1a84bd0f554c50ad681a6054abd8612bb7)`()` <a id="structFRHAPI__StageUpdate_1a84bd0f554c50ad681a6054abd8612bb7"></a>

Gets the value of MmrVis_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrVis`](#structFRHAPI__StageUpdate_1a03ca6e72000a4740b696c76f25d69085)`() const` <a id="structFRHAPI__StageUpdate_1a03ca6e72000a4740b696c76f25d69085"></a>

Gets the value of MmrVis_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrVis`](#structFRHAPI__StageUpdate_1a61cf2e26c921d3157cc1c21b84418e93)`(const float & DefaultValue) const` <a id="structFRHAPI__StageUpdate_1a61cf2e26c921d3157cc1c21b84418e93"></a>

Gets the value of MmrVis_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMmrVis`](#structFRHAPI__StageUpdate_1ae8169ec61dd7143a5b7302f1ee79cbfb)`(float & OutValue) const` <a id="structFRHAPI__StageUpdate_1ae8169ec61dd7143a5b7302f1ee79cbfb"></a>

Fills OutValue with the value of MmrVis_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMmrVisOrNull`](#structFRHAPI__StageUpdate_1a0767fe548456e890e28efad033c4db91)`()` <a id="structFRHAPI__StageUpdate_1a0767fe548456e890e28efad033c4db91"></a>

Returns a pointer to MmrVis_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMmrVisOrNull`](#structFRHAPI__StageUpdate_1a8f90cc8760ced74fb5c7e48c5fe1ecd9)`() const` <a id="structFRHAPI__StageUpdate_1a8f90cc8760ced74fb5c7e48c5fe1ecd9"></a>

Returns a pointer to MmrVis_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMmrVis`](#structFRHAPI__StageUpdate_1a3cff44163922ece953d27ee6d51c16a9)`(const float & NewValue)` <a id="structFRHAPI__StageUpdate_1a3cff44163922ece953d27ee6d51c16a9"></a>

Sets the value of MmrVis_Optional and also sets MmrVis_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMmrVis`](#structFRHAPI__StageUpdate_1a5545aa0971e480985b5f3aa93b0be0f6)`(float && NewValue)` <a id="structFRHAPI__StageUpdate_1a5545aa0971e480985b5f3aa93b0be0f6"></a>

Sets the value of MmrVis_Optional and also sets MmrVis_IsSet to true using move semantics.

#### `public inline void `[`ClearMmrVis`](#structFRHAPI__StageUpdate_1a5552c1604de21f4ebfcb8b581d84ae6b)`()` <a id="structFRHAPI__StageUpdate_1a5552c1604de21f4ebfcb8b581d84ae6b"></a>

Clears the value of MmrVis_Optional and sets MmrVis_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMmrVisToNull`](#structFRHAPI__StageUpdate_1aba67f9e2d4d17d60a8a8de4002311aa2)`()` <a id="structFRHAPI__StageUpdate_1aba67f9e2d4d17d60a8a8de4002311aa2"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMmrVisNull`](#structFRHAPI__StageUpdate_1a2565b0f5ba671b8ce58cf1ece8e2fb10)`() const` <a id="structFRHAPI__StageUpdate_1a2565b0f5ba671b8ce58cf1ece8e2fb10"></a>

Checks whether MmrVis_Optional is set to null.

